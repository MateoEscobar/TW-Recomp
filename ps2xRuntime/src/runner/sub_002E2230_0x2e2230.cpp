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

// Function: sub_002E2230
// Address: 0x2e2230 - 0x2e28f8
void sub_002E2230_0x2e2230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2230_0x2e2230");
#endif

    switch (ctx->pc) {
        case 0x2e2230u: goto label_2e2230;
        case 0x2e2234u: goto label_2e2234;
        case 0x2e2238u: goto label_2e2238;
        case 0x2e223cu: goto label_2e223c;
        case 0x2e2240u: goto label_2e2240;
        case 0x2e2244u: goto label_2e2244;
        case 0x2e2248u: goto label_2e2248;
        case 0x2e224cu: goto label_2e224c;
        case 0x2e2250u: goto label_2e2250;
        case 0x2e2254u: goto label_2e2254;
        case 0x2e2258u: goto label_2e2258;
        case 0x2e225cu: goto label_2e225c;
        case 0x2e2260u: goto label_2e2260;
        case 0x2e2264u: goto label_2e2264;
        case 0x2e2268u: goto label_2e2268;
        case 0x2e226cu: goto label_2e226c;
        case 0x2e2270u: goto label_2e2270;
        case 0x2e2274u: goto label_2e2274;
        case 0x2e2278u: goto label_2e2278;
        case 0x2e227cu: goto label_2e227c;
        case 0x2e2280u: goto label_2e2280;
        case 0x2e2284u: goto label_2e2284;
        case 0x2e2288u: goto label_2e2288;
        case 0x2e228cu: goto label_2e228c;
        case 0x2e2290u: goto label_2e2290;
        case 0x2e2294u: goto label_2e2294;
        case 0x2e2298u: goto label_2e2298;
        case 0x2e229cu: goto label_2e229c;
        case 0x2e22a0u: goto label_2e22a0;
        case 0x2e22a4u: goto label_2e22a4;
        case 0x2e22a8u: goto label_2e22a8;
        case 0x2e22acu: goto label_2e22ac;
        case 0x2e22b0u: goto label_2e22b0;
        case 0x2e22b4u: goto label_2e22b4;
        case 0x2e22b8u: goto label_2e22b8;
        case 0x2e22bcu: goto label_2e22bc;
        case 0x2e22c0u: goto label_2e22c0;
        case 0x2e22c4u: goto label_2e22c4;
        case 0x2e22c8u: goto label_2e22c8;
        case 0x2e22ccu: goto label_2e22cc;
        case 0x2e22d0u: goto label_2e22d0;
        case 0x2e22d4u: goto label_2e22d4;
        case 0x2e22d8u: goto label_2e22d8;
        case 0x2e22dcu: goto label_2e22dc;
        case 0x2e22e0u: goto label_2e22e0;
        case 0x2e22e4u: goto label_2e22e4;
        case 0x2e22e8u: goto label_2e22e8;
        case 0x2e22ecu: goto label_2e22ec;
        case 0x2e22f0u: goto label_2e22f0;
        case 0x2e22f4u: goto label_2e22f4;
        case 0x2e22f8u: goto label_2e22f8;
        case 0x2e22fcu: goto label_2e22fc;
        case 0x2e2300u: goto label_2e2300;
        case 0x2e2304u: goto label_2e2304;
        case 0x2e2308u: goto label_2e2308;
        case 0x2e230cu: goto label_2e230c;
        case 0x2e2310u: goto label_2e2310;
        case 0x2e2314u: goto label_2e2314;
        case 0x2e2318u: goto label_2e2318;
        case 0x2e231cu: goto label_2e231c;
        case 0x2e2320u: goto label_2e2320;
        case 0x2e2324u: goto label_2e2324;
        case 0x2e2328u: goto label_2e2328;
        case 0x2e232cu: goto label_2e232c;
        case 0x2e2330u: goto label_2e2330;
        case 0x2e2334u: goto label_2e2334;
        case 0x2e2338u: goto label_2e2338;
        case 0x2e233cu: goto label_2e233c;
        case 0x2e2340u: goto label_2e2340;
        case 0x2e2344u: goto label_2e2344;
        case 0x2e2348u: goto label_2e2348;
        case 0x2e234cu: goto label_2e234c;
        case 0x2e2350u: goto label_2e2350;
        case 0x2e2354u: goto label_2e2354;
        case 0x2e2358u: goto label_2e2358;
        case 0x2e235cu: goto label_2e235c;
        case 0x2e2360u: goto label_2e2360;
        case 0x2e2364u: goto label_2e2364;
        case 0x2e2368u: goto label_2e2368;
        case 0x2e236cu: goto label_2e236c;
        case 0x2e2370u: goto label_2e2370;
        case 0x2e2374u: goto label_2e2374;
        case 0x2e2378u: goto label_2e2378;
        case 0x2e237cu: goto label_2e237c;
        case 0x2e2380u: goto label_2e2380;
        case 0x2e2384u: goto label_2e2384;
        case 0x2e2388u: goto label_2e2388;
        case 0x2e238cu: goto label_2e238c;
        case 0x2e2390u: goto label_2e2390;
        case 0x2e2394u: goto label_2e2394;
        case 0x2e2398u: goto label_2e2398;
        case 0x2e239cu: goto label_2e239c;
        case 0x2e23a0u: goto label_2e23a0;
        case 0x2e23a4u: goto label_2e23a4;
        case 0x2e23a8u: goto label_2e23a8;
        case 0x2e23acu: goto label_2e23ac;
        case 0x2e23b0u: goto label_2e23b0;
        case 0x2e23b4u: goto label_2e23b4;
        case 0x2e23b8u: goto label_2e23b8;
        case 0x2e23bcu: goto label_2e23bc;
        case 0x2e23c0u: goto label_2e23c0;
        case 0x2e23c4u: goto label_2e23c4;
        case 0x2e23c8u: goto label_2e23c8;
        case 0x2e23ccu: goto label_2e23cc;
        case 0x2e23d0u: goto label_2e23d0;
        case 0x2e23d4u: goto label_2e23d4;
        case 0x2e23d8u: goto label_2e23d8;
        case 0x2e23dcu: goto label_2e23dc;
        case 0x2e23e0u: goto label_2e23e0;
        case 0x2e23e4u: goto label_2e23e4;
        case 0x2e23e8u: goto label_2e23e8;
        case 0x2e23ecu: goto label_2e23ec;
        case 0x2e23f0u: goto label_2e23f0;
        case 0x2e23f4u: goto label_2e23f4;
        case 0x2e23f8u: goto label_2e23f8;
        case 0x2e23fcu: goto label_2e23fc;
        case 0x2e2400u: goto label_2e2400;
        case 0x2e2404u: goto label_2e2404;
        case 0x2e2408u: goto label_2e2408;
        case 0x2e240cu: goto label_2e240c;
        case 0x2e2410u: goto label_2e2410;
        case 0x2e2414u: goto label_2e2414;
        case 0x2e2418u: goto label_2e2418;
        case 0x2e241cu: goto label_2e241c;
        case 0x2e2420u: goto label_2e2420;
        case 0x2e2424u: goto label_2e2424;
        case 0x2e2428u: goto label_2e2428;
        case 0x2e242cu: goto label_2e242c;
        case 0x2e2430u: goto label_2e2430;
        case 0x2e2434u: goto label_2e2434;
        case 0x2e2438u: goto label_2e2438;
        case 0x2e243cu: goto label_2e243c;
        case 0x2e2440u: goto label_2e2440;
        case 0x2e2444u: goto label_2e2444;
        case 0x2e2448u: goto label_2e2448;
        case 0x2e244cu: goto label_2e244c;
        case 0x2e2450u: goto label_2e2450;
        case 0x2e2454u: goto label_2e2454;
        case 0x2e2458u: goto label_2e2458;
        case 0x2e245cu: goto label_2e245c;
        case 0x2e2460u: goto label_2e2460;
        case 0x2e2464u: goto label_2e2464;
        case 0x2e2468u: goto label_2e2468;
        case 0x2e246cu: goto label_2e246c;
        case 0x2e2470u: goto label_2e2470;
        case 0x2e2474u: goto label_2e2474;
        case 0x2e2478u: goto label_2e2478;
        case 0x2e247cu: goto label_2e247c;
        case 0x2e2480u: goto label_2e2480;
        case 0x2e2484u: goto label_2e2484;
        case 0x2e2488u: goto label_2e2488;
        case 0x2e248cu: goto label_2e248c;
        case 0x2e2490u: goto label_2e2490;
        case 0x2e2494u: goto label_2e2494;
        case 0x2e2498u: goto label_2e2498;
        case 0x2e249cu: goto label_2e249c;
        case 0x2e24a0u: goto label_2e24a0;
        case 0x2e24a4u: goto label_2e24a4;
        case 0x2e24a8u: goto label_2e24a8;
        case 0x2e24acu: goto label_2e24ac;
        case 0x2e24b0u: goto label_2e24b0;
        case 0x2e24b4u: goto label_2e24b4;
        case 0x2e24b8u: goto label_2e24b8;
        case 0x2e24bcu: goto label_2e24bc;
        case 0x2e24c0u: goto label_2e24c0;
        case 0x2e24c4u: goto label_2e24c4;
        case 0x2e24c8u: goto label_2e24c8;
        case 0x2e24ccu: goto label_2e24cc;
        case 0x2e24d0u: goto label_2e24d0;
        case 0x2e24d4u: goto label_2e24d4;
        case 0x2e24d8u: goto label_2e24d8;
        case 0x2e24dcu: goto label_2e24dc;
        case 0x2e24e0u: goto label_2e24e0;
        case 0x2e24e4u: goto label_2e24e4;
        case 0x2e24e8u: goto label_2e24e8;
        case 0x2e24ecu: goto label_2e24ec;
        case 0x2e24f0u: goto label_2e24f0;
        case 0x2e24f4u: goto label_2e24f4;
        case 0x2e24f8u: goto label_2e24f8;
        case 0x2e24fcu: goto label_2e24fc;
        case 0x2e2500u: goto label_2e2500;
        case 0x2e2504u: goto label_2e2504;
        case 0x2e2508u: goto label_2e2508;
        case 0x2e250cu: goto label_2e250c;
        case 0x2e2510u: goto label_2e2510;
        case 0x2e2514u: goto label_2e2514;
        case 0x2e2518u: goto label_2e2518;
        case 0x2e251cu: goto label_2e251c;
        case 0x2e2520u: goto label_2e2520;
        case 0x2e2524u: goto label_2e2524;
        case 0x2e2528u: goto label_2e2528;
        case 0x2e252cu: goto label_2e252c;
        case 0x2e2530u: goto label_2e2530;
        case 0x2e2534u: goto label_2e2534;
        case 0x2e2538u: goto label_2e2538;
        case 0x2e253cu: goto label_2e253c;
        case 0x2e2540u: goto label_2e2540;
        case 0x2e2544u: goto label_2e2544;
        case 0x2e2548u: goto label_2e2548;
        case 0x2e254cu: goto label_2e254c;
        case 0x2e2550u: goto label_2e2550;
        case 0x2e2554u: goto label_2e2554;
        case 0x2e2558u: goto label_2e2558;
        case 0x2e255cu: goto label_2e255c;
        case 0x2e2560u: goto label_2e2560;
        case 0x2e2564u: goto label_2e2564;
        case 0x2e2568u: goto label_2e2568;
        case 0x2e256cu: goto label_2e256c;
        case 0x2e2570u: goto label_2e2570;
        case 0x2e2574u: goto label_2e2574;
        case 0x2e2578u: goto label_2e2578;
        case 0x2e257cu: goto label_2e257c;
        case 0x2e2580u: goto label_2e2580;
        case 0x2e2584u: goto label_2e2584;
        case 0x2e2588u: goto label_2e2588;
        case 0x2e258cu: goto label_2e258c;
        case 0x2e2590u: goto label_2e2590;
        case 0x2e2594u: goto label_2e2594;
        case 0x2e2598u: goto label_2e2598;
        case 0x2e259cu: goto label_2e259c;
        case 0x2e25a0u: goto label_2e25a0;
        case 0x2e25a4u: goto label_2e25a4;
        case 0x2e25a8u: goto label_2e25a8;
        case 0x2e25acu: goto label_2e25ac;
        case 0x2e25b0u: goto label_2e25b0;
        case 0x2e25b4u: goto label_2e25b4;
        case 0x2e25b8u: goto label_2e25b8;
        case 0x2e25bcu: goto label_2e25bc;
        case 0x2e25c0u: goto label_2e25c0;
        case 0x2e25c4u: goto label_2e25c4;
        case 0x2e25c8u: goto label_2e25c8;
        case 0x2e25ccu: goto label_2e25cc;
        case 0x2e25d0u: goto label_2e25d0;
        case 0x2e25d4u: goto label_2e25d4;
        case 0x2e25d8u: goto label_2e25d8;
        case 0x2e25dcu: goto label_2e25dc;
        case 0x2e25e0u: goto label_2e25e0;
        case 0x2e25e4u: goto label_2e25e4;
        case 0x2e25e8u: goto label_2e25e8;
        case 0x2e25ecu: goto label_2e25ec;
        case 0x2e25f0u: goto label_2e25f0;
        case 0x2e25f4u: goto label_2e25f4;
        case 0x2e25f8u: goto label_2e25f8;
        case 0x2e25fcu: goto label_2e25fc;
        case 0x2e2600u: goto label_2e2600;
        case 0x2e2604u: goto label_2e2604;
        case 0x2e2608u: goto label_2e2608;
        case 0x2e260cu: goto label_2e260c;
        case 0x2e2610u: goto label_2e2610;
        case 0x2e2614u: goto label_2e2614;
        case 0x2e2618u: goto label_2e2618;
        case 0x2e261cu: goto label_2e261c;
        case 0x2e2620u: goto label_2e2620;
        case 0x2e2624u: goto label_2e2624;
        case 0x2e2628u: goto label_2e2628;
        case 0x2e262cu: goto label_2e262c;
        case 0x2e2630u: goto label_2e2630;
        case 0x2e2634u: goto label_2e2634;
        case 0x2e2638u: goto label_2e2638;
        case 0x2e263cu: goto label_2e263c;
        case 0x2e2640u: goto label_2e2640;
        case 0x2e2644u: goto label_2e2644;
        case 0x2e2648u: goto label_2e2648;
        case 0x2e264cu: goto label_2e264c;
        case 0x2e2650u: goto label_2e2650;
        case 0x2e2654u: goto label_2e2654;
        case 0x2e2658u: goto label_2e2658;
        case 0x2e265cu: goto label_2e265c;
        case 0x2e2660u: goto label_2e2660;
        case 0x2e2664u: goto label_2e2664;
        case 0x2e2668u: goto label_2e2668;
        case 0x2e266cu: goto label_2e266c;
        case 0x2e2670u: goto label_2e2670;
        case 0x2e2674u: goto label_2e2674;
        case 0x2e2678u: goto label_2e2678;
        case 0x2e267cu: goto label_2e267c;
        case 0x2e2680u: goto label_2e2680;
        case 0x2e2684u: goto label_2e2684;
        case 0x2e2688u: goto label_2e2688;
        case 0x2e268cu: goto label_2e268c;
        case 0x2e2690u: goto label_2e2690;
        case 0x2e2694u: goto label_2e2694;
        case 0x2e2698u: goto label_2e2698;
        case 0x2e269cu: goto label_2e269c;
        case 0x2e26a0u: goto label_2e26a0;
        case 0x2e26a4u: goto label_2e26a4;
        case 0x2e26a8u: goto label_2e26a8;
        case 0x2e26acu: goto label_2e26ac;
        case 0x2e26b0u: goto label_2e26b0;
        case 0x2e26b4u: goto label_2e26b4;
        case 0x2e26b8u: goto label_2e26b8;
        case 0x2e26bcu: goto label_2e26bc;
        case 0x2e26c0u: goto label_2e26c0;
        case 0x2e26c4u: goto label_2e26c4;
        case 0x2e26c8u: goto label_2e26c8;
        case 0x2e26ccu: goto label_2e26cc;
        case 0x2e26d0u: goto label_2e26d0;
        case 0x2e26d4u: goto label_2e26d4;
        case 0x2e26d8u: goto label_2e26d8;
        case 0x2e26dcu: goto label_2e26dc;
        case 0x2e26e0u: goto label_2e26e0;
        case 0x2e26e4u: goto label_2e26e4;
        case 0x2e26e8u: goto label_2e26e8;
        case 0x2e26ecu: goto label_2e26ec;
        case 0x2e26f0u: goto label_2e26f0;
        case 0x2e26f4u: goto label_2e26f4;
        case 0x2e26f8u: goto label_2e26f8;
        case 0x2e26fcu: goto label_2e26fc;
        case 0x2e2700u: goto label_2e2700;
        case 0x2e2704u: goto label_2e2704;
        case 0x2e2708u: goto label_2e2708;
        case 0x2e270cu: goto label_2e270c;
        case 0x2e2710u: goto label_2e2710;
        case 0x2e2714u: goto label_2e2714;
        case 0x2e2718u: goto label_2e2718;
        case 0x2e271cu: goto label_2e271c;
        case 0x2e2720u: goto label_2e2720;
        case 0x2e2724u: goto label_2e2724;
        case 0x2e2728u: goto label_2e2728;
        case 0x2e272cu: goto label_2e272c;
        case 0x2e2730u: goto label_2e2730;
        case 0x2e2734u: goto label_2e2734;
        case 0x2e2738u: goto label_2e2738;
        case 0x2e273cu: goto label_2e273c;
        case 0x2e2740u: goto label_2e2740;
        case 0x2e2744u: goto label_2e2744;
        case 0x2e2748u: goto label_2e2748;
        case 0x2e274cu: goto label_2e274c;
        case 0x2e2750u: goto label_2e2750;
        case 0x2e2754u: goto label_2e2754;
        case 0x2e2758u: goto label_2e2758;
        case 0x2e275cu: goto label_2e275c;
        case 0x2e2760u: goto label_2e2760;
        case 0x2e2764u: goto label_2e2764;
        case 0x2e2768u: goto label_2e2768;
        case 0x2e276cu: goto label_2e276c;
        case 0x2e2770u: goto label_2e2770;
        case 0x2e2774u: goto label_2e2774;
        case 0x2e2778u: goto label_2e2778;
        case 0x2e277cu: goto label_2e277c;
        case 0x2e2780u: goto label_2e2780;
        case 0x2e2784u: goto label_2e2784;
        case 0x2e2788u: goto label_2e2788;
        case 0x2e278cu: goto label_2e278c;
        case 0x2e2790u: goto label_2e2790;
        case 0x2e2794u: goto label_2e2794;
        case 0x2e2798u: goto label_2e2798;
        case 0x2e279cu: goto label_2e279c;
        case 0x2e27a0u: goto label_2e27a0;
        case 0x2e27a4u: goto label_2e27a4;
        case 0x2e27a8u: goto label_2e27a8;
        case 0x2e27acu: goto label_2e27ac;
        case 0x2e27b0u: goto label_2e27b0;
        case 0x2e27b4u: goto label_2e27b4;
        case 0x2e27b8u: goto label_2e27b8;
        case 0x2e27bcu: goto label_2e27bc;
        case 0x2e27c0u: goto label_2e27c0;
        case 0x2e27c4u: goto label_2e27c4;
        case 0x2e27c8u: goto label_2e27c8;
        case 0x2e27ccu: goto label_2e27cc;
        case 0x2e27d0u: goto label_2e27d0;
        case 0x2e27d4u: goto label_2e27d4;
        case 0x2e27d8u: goto label_2e27d8;
        case 0x2e27dcu: goto label_2e27dc;
        case 0x2e27e0u: goto label_2e27e0;
        case 0x2e27e4u: goto label_2e27e4;
        case 0x2e27e8u: goto label_2e27e8;
        case 0x2e27ecu: goto label_2e27ec;
        case 0x2e27f0u: goto label_2e27f0;
        case 0x2e27f4u: goto label_2e27f4;
        case 0x2e27f8u: goto label_2e27f8;
        case 0x2e27fcu: goto label_2e27fc;
        case 0x2e2800u: goto label_2e2800;
        case 0x2e2804u: goto label_2e2804;
        case 0x2e2808u: goto label_2e2808;
        case 0x2e280cu: goto label_2e280c;
        case 0x2e2810u: goto label_2e2810;
        case 0x2e2814u: goto label_2e2814;
        case 0x2e2818u: goto label_2e2818;
        case 0x2e281cu: goto label_2e281c;
        case 0x2e2820u: goto label_2e2820;
        case 0x2e2824u: goto label_2e2824;
        case 0x2e2828u: goto label_2e2828;
        case 0x2e282cu: goto label_2e282c;
        case 0x2e2830u: goto label_2e2830;
        case 0x2e2834u: goto label_2e2834;
        case 0x2e2838u: goto label_2e2838;
        case 0x2e283cu: goto label_2e283c;
        case 0x2e2840u: goto label_2e2840;
        case 0x2e2844u: goto label_2e2844;
        case 0x2e2848u: goto label_2e2848;
        case 0x2e284cu: goto label_2e284c;
        case 0x2e2850u: goto label_2e2850;
        case 0x2e2854u: goto label_2e2854;
        case 0x2e2858u: goto label_2e2858;
        case 0x2e285cu: goto label_2e285c;
        case 0x2e2860u: goto label_2e2860;
        case 0x2e2864u: goto label_2e2864;
        case 0x2e2868u: goto label_2e2868;
        case 0x2e286cu: goto label_2e286c;
        case 0x2e2870u: goto label_2e2870;
        case 0x2e2874u: goto label_2e2874;
        case 0x2e2878u: goto label_2e2878;
        case 0x2e287cu: goto label_2e287c;
        case 0x2e2880u: goto label_2e2880;
        case 0x2e2884u: goto label_2e2884;
        case 0x2e2888u: goto label_2e2888;
        case 0x2e288cu: goto label_2e288c;
        case 0x2e2890u: goto label_2e2890;
        case 0x2e2894u: goto label_2e2894;
        case 0x2e2898u: goto label_2e2898;
        case 0x2e289cu: goto label_2e289c;
        case 0x2e28a0u: goto label_2e28a0;
        case 0x2e28a4u: goto label_2e28a4;
        case 0x2e28a8u: goto label_2e28a8;
        case 0x2e28acu: goto label_2e28ac;
        case 0x2e28b0u: goto label_2e28b0;
        case 0x2e28b4u: goto label_2e28b4;
        case 0x2e28b8u: goto label_2e28b8;
        case 0x2e28bcu: goto label_2e28bc;
        case 0x2e28c0u: goto label_2e28c0;
        case 0x2e28c4u: goto label_2e28c4;
        case 0x2e28c8u: goto label_2e28c8;
        case 0x2e28ccu: goto label_2e28cc;
        case 0x2e28d0u: goto label_2e28d0;
        case 0x2e28d4u: goto label_2e28d4;
        case 0x2e28d8u: goto label_2e28d8;
        case 0x2e28dcu: goto label_2e28dc;
        case 0x2e28e0u: goto label_2e28e0;
        case 0x2e28e4u: goto label_2e28e4;
        case 0x2e28e8u: goto label_2e28e8;
        case 0x2e28ecu: goto label_2e28ec;
        case 0x2e28f0u: goto label_2e28f0;
        case 0x2e28f4u: goto label_2e28f4;
        default: break;
    }

    ctx->pc = 0x2e2230u;

label_2e2230:
    // 0x2e2230: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e2230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2e2234:
    // 0x2e2234: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2e2234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2e2238:
    // 0x2e2238: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2e2238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2e223c:
    // 0x2e223c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e223cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e2240:
    // 0x2e2240: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2e2240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2e2244:
    // 0x2e2244: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e2244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2e2248:
    // 0x2e2248: 0x9202003b  lbu         $v0, 0x3B($s0)
    ctx->pc = 0x2e2248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
label_2e224c:
    // 0x2e224c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e224cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e2250:
    // 0x2e2250: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e2250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e2254:
    // 0x2e2254: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2e2254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2e2258:
    // 0x2e2258: 0xa202003b  sb          $v0, 0x3B($s0)
    ctx->pc = 0x2e2258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 2));
label_2e225c:
    // 0x2e225c: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x2e225cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e2260:
    // 0x2e2260: 0xc08ab90  jal         func_22AE40
label_2e2264:
    if (ctx->pc == 0x2E2264u) {
        ctx->pc = 0x2E2264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2260u;
        // 0x2e2264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2268u;
        goto label_2e2268;
    }
    ctx->pc = 0x2E2260u;
    SET_GPR_U32(ctx, 31, 0x2E2268u);
    ctx->pc = 0x2E2264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2260u;
    // 0x2e2264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x2E2260u, 0x2E2268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2268u;
label_2e2268:
    // 0x2e2268: 0xc0e409a  jal         func_390268
label_2e226c:
    if (ctx->pc == 0x2E226Cu) {
        ctx->pc = 0x2E226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2268u;
        // 0x2e226c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2270u;
        goto label_2e2270;
    }
    ctx->pc = 0x2E2268u;
    SET_GPR_U32(ctx, 31, 0x2E2270u);
    ctx->pc = 0x2E226Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2268u;
    // 0x2e226c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E2268u, 0x2E2270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2270u;
label_2e2270:
    // 0x2e2270: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e2270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e2274:
    // 0x2e2274: 0x9203003b  lbu         $v1, 0x3B($s0)
    ctx->pc = 0x2e2274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
label_2e2278:
    // 0x2e2278: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2e2278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2e227c:
    // 0x2e227c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2e227cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_2e2280:
    // 0x2e2280: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2e2284:
    if (ctx->pc == 0x2E2284u) {
        ctx->pc = 0x2E2284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2280u;
        // 0x2e2284: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2288u;
        goto label_2e2288;
    }
    ctx->pc = 0x2E2280u;
    {
        const bool branch_taken_0x2e2280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2280) {
            ctx->pc = 0x2E2284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2280u;
            // 0x2e2284: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2288u;
            goto label_2e2288;
        }
    }
    ctx->pc = 0x2E2288u;
label_2e2288:
    // 0x2e2288: 0x2010  mfhi        $a0
    ctx->pc = 0x2e2288u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2e228c:
    // 0x2e228c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2e2290:
    if (ctx->pc == 0x2E2290u) {
        ctx->pc = 0x2E2294u;
        goto label_2e2294;
    }
    ctx->pc = 0x2E228Cu;
    {
        const bool branch_taken_0x2e228c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e228c) {
            ctx->pc = 0x2E22A4u;
            goto label_2e22a4;
        }
    }
    ctx->pc = 0x2E2294u;
label_2e2294:
    // 0x2e2294: 0xc0b86d8  jal         func_2E1B60
label_2e2298:
    if (ctx->pc == 0x2E2298u) {
        ctx->pc = 0x2E2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2294u;
        // 0x2e2298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E229Cu;
        goto label_2e229c;
    }
    ctx->pc = 0x2E2294u;
    SET_GPR_U32(ctx, 31, 0x2E229Cu);
    ctx->pc = 0x2E2298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2294u;
    // 0x2e2298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1B60u, 0x2E2294u, 0x2E229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E229Cu;
label_2e229c:
    // 0x2e229c: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
label_2e22a0:
    if (ctx->pc == 0x2E22A0u) {
        ctx->pc = 0x2E22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E229Cu;
        // 0x2e22a0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E22A4u;
        goto label_2e22a4;
    }
    ctx->pc = 0x2E229Cu;
    {
        const bool branch_taken_0x2e229c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e229c) {
            ctx->pc = 0x2E22A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E229Cu;
            // 0x2e22a0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E23CCu;
            goto label_2e23cc;
        }
    }
    ctx->pc = 0x2E22A4u;
label_2e22a4:
    // 0x2e22a4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_2e22a8:
    if (ctx->pc == 0x2E22A8u) {
        ctx->pc = 0x2E22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22A4u;
        // 0x2e22a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E22ACu;
        goto label_2e22ac;
    }
    ctx->pc = 0x2E22A4u;
    {
        const bool branch_taken_0x2e22a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22A4u;
        // 0x2e22a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e22a4) {
            ctx->pc = 0x2E22F8u;
            goto label_2e22f8;
        }
    }
    ctx->pc = 0x2E22ACu;
label_2e22ac:
    // 0x2e22ac: 0x9203003c  lbu         $v1, 0x3C($s0)
    ctx->pc = 0x2e22acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_2e22b0:
    // 0x2e22b0: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_2e22b4:
    if (ctx->pc == 0x2E22B4u) {
        ctx->pc = 0x2E22B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22B0u;
        // 0x2e22b4: 0x9204003b  lbu         $a0, 0x3B($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E22B8u;
        goto label_2e22b8;
    }
    ctx->pc = 0x2E22B0u;
    {
        const bool branch_taken_0x2e22b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e22b0) {
            ctx->pc = 0x2E22B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E22B0u;
            // 0x2e22b4: 0x9204003b  lbu         $a0, 0x3B($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E22DCu;
            goto label_2e22dc;
        }
    }
    ctx->pc = 0x2E22B8u;
label_2e22b8:
    // 0x2e22b8: 0xc089f98  jal         func_227E60
label_2e22bc:
    if (ctx->pc == 0x2E22BCu) {
        ctx->pc = 0x2E22BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22B8u;
        // 0x2e22bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E22C0u;
        goto label_2e22c0;
    }
    ctx->pc = 0x2E22B8u;
    SET_GPR_U32(ctx, 31, 0x2E22C0u);
    ctx->pc = 0x2E22BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E22B8u;
    // 0x2e22bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2E22B8u, 0x2E22C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E22C0u;
label_2e22c0:
    // 0x2e22c0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2e22c4:
    if (ctx->pc == 0x2E22C4u) {
        ctx->pc = 0x2E22C8u;
        goto label_2e22c8;
    }
    ctx->pc = 0x2E22C0u;
    {
        const bool branch_taken_0x2e22c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e22c0) {
            ctx->pc = 0x2E22F8u;
            goto label_2e22f8;
        }
    }
    ctx->pc = 0x2E22C8u;
label_2e22c8:
    // 0x2e22c8: 0xc088edc  jal         func_223B70
label_2e22cc:
    if (ctx->pc == 0x2E22CCu) {
        ctx->pc = 0x2E22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22C8u;
        // 0x2e22cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E22D0u;
        goto label_2e22d0;
    }
    ctx->pc = 0x2E22C8u;
    SET_GPR_U32(ctx, 31, 0x2E22D0u);
    ctx->pc = 0x2E22CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E22C8u;
    // 0x2e22cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2E22C8u, 0x2E22D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E22D0u;
label_2e22d0:
    // 0x2e22d0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2e22d4:
    if (ctx->pc == 0x2E22D4u) {
        ctx->pc = 0x2E22D8u;
        goto label_2e22d8;
    }
    ctx->pc = 0x2E22D0u;
    {
        const bool branch_taken_0x2e22d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e22d0) {
            ctx->pc = 0x2E22F8u;
            goto label_2e22f8;
        }
    }
    ctx->pc = 0x2E22D8u;
label_2e22d8:
    // 0x2e22d8: 0x9204003b  lbu         $a0, 0x3B($s0)
    ctx->pc = 0x2e22d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
label_2e22dc:
    // 0x2e22dc: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2e22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2e22e0:
    // 0x2e22e0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2e22e4:
    if (ctx->pc == 0x2E22E4u) {
        ctx->pc = 0x2E22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22E0u;
        // 0x2e22e4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E22E8u;
        goto label_2e22e8;
    }
    ctx->pc = 0x2E22E0u;
    {
        const bool branch_taken_0x2e22e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e22e0) {
            ctx->pc = 0x2E22E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E22E0u;
            // 0x2e22e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E22E8u;
            goto label_2e22e8;
        }
    }
    ctx->pc = 0x2E22E8u;
label_2e22e8:
    // 0x2e22e8: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2e22e8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2e22ec:
    // 0x2e22ec: 0x1810  mfhi        $v1
    ctx->pc = 0x2e22ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2e22f0:
    // 0x2e22f0: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_2e22f4:
    if (ctx->pc == 0x2E22F4u) {
        ctx->pc = 0x2E22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22F0u;
        // 0x2e22f4: 0x9204003b  lbu         $a0, 0x3B($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E22F8u;
        goto label_2e22f8;
    }
    ctx->pc = 0x2E22F0u;
    {
        const bool branch_taken_0x2e22f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e22f0) {
            ctx->pc = 0x2E22F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E22F0u;
            // 0x2e22f4: 0x9204003b  lbu         $a0, 0x3B($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E230Cu;
            goto label_2e230c;
        }
    }
    ctx->pc = 0x2E22F8u;
label_2e22f8:
    // 0x2e22f8: 0xc0b8706  jal         func_2E1C18
label_2e22fc:
    if (ctx->pc == 0x2E22FCu) {
        ctx->pc = 0x2E22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22F8u;
        // 0x2e22fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2300u;
        goto label_2e2300;
    }
    ctx->pc = 0x2E22F8u;
    SET_GPR_U32(ctx, 31, 0x2E2300u);
    ctx->pc = 0x2E22FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E22F8u;
    // 0x2e22fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1C18u, 0x2E22F8u, 0x2E2300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2300u;
label_2e2300:
    // 0x2e2300: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
label_2e2304:
    if (ctx->pc == 0x2E2304u) {
        ctx->pc = 0x2E2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2300u;
        // 0x2e2304: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2308u;
        goto label_2e2308;
    }
    ctx->pc = 0x2E2300u;
    {
        const bool branch_taken_0x2e2300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2300) {
            ctx->pc = 0x2E2304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2300u;
            // 0x2e2304: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E23CCu;
            goto label_2e23cc;
        }
    }
    ctx->pc = 0x2E2308u;
label_2e2308:
    // 0x2e2308: 0x9204003b  lbu         $a0, 0x3B($s0)
    ctx->pc = 0x2e2308u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
label_2e230c:
    // 0x2e230c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2e230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e2310:
    // 0x2e2310: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2e2314:
    if (ctx->pc == 0x2E2314u) {
        ctx->pc = 0x2E2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2310u;
        // 0x2e2314: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2318u;
        goto label_2e2318;
    }
    ctx->pc = 0x2E2310u;
    {
        const bool branch_taken_0x2e2310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2310) {
            ctx->pc = 0x2E2314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2310u;
            // 0x2e2314: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2318u;
            goto label_2e2318;
        }
    }
    ctx->pc = 0x2E2318u;
label_2e2318:
    // 0x2e2318: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2e2318u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2e231c:
    // 0x2e231c: 0x1810  mfhi        $v1
    ctx->pc = 0x2e231cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2e2320:
    // 0x2e2320: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_2e2324:
    if (ctx->pc == 0x2E2324u) {
        ctx->pc = 0x2E2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2320u;
        // 0x2e2324: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2328u;
        goto label_2e2328;
    }
    ctx->pc = 0x2E2320u;
    {
        const bool branch_taken_0x2e2320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2320) {
            ctx->pc = 0x2E2324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2320u;
            // 0x2e2324: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E233Cu;
            goto label_2e233c;
        }
    }
    ctx->pc = 0x2E2328u;
label_2e2328:
    // 0x2e2328: 0xc0b8784  jal         func_2E1E10
label_2e232c:
    if (ctx->pc == 0x2E232Cu) {
        ctx->pc = 0x2E232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2328u;
        // 0x2e232c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2330u;
        goto label_2e2330;
    }
    ctx->pc = 0x2E2328u;
    SET_GPR_U32(ctx, 31, 0x2E2330u);
    ctx->pc = 0x2E232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2328u;
    // 0x2e232c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1E10u, 0x2E2328u, 0x2E2330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2330u;
label_2e2330:
    // 0x2e2330: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_2e2334:
    if (ctx->pc == 0x2E2334u) {
        ctx->pc = 0x2E2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2330u;
        // 0x2e2334: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2338u;
        goto label_2e2338;
    }
    ctx->pc = 0x2E2330u;
    {
        const bool branch_taken_0x2e2330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2330) {
            ctx->pc = 0x2E2334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2330u;
            // 0x2e2334: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E23CCu;
            goto label_2e23cc;
        }
    }
    ctx->pc = 0x2E2338u;
label_2e2338:
    // 0x2e2338: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e2338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e233c:
    // 0x2e233c: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2e233cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2e2340:
    // 0x2e2340: 0x1c600021  bgtz        $v1, . + 4 + (0x21 << 2)
label_2e2344:
    if (ctx->pc == 0x2E2344u) {
        ctx->pc = 0x2E2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2340u;
        // 0x2e2344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2348u;
        goto label_2e2348;
    }
    ctx->pc = 0x2E2340u;
    {
        const bool branch_taken_0x2e2340 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2E2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2340u;
        // 0x2e2344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2340) {
            ctx->pc = 0x2E23C8u;
            goto label_2e23c8;
        }
    }
    ctx->pc = 0x2E2348u;
label_2e2348:
    // 0x2e2348: 0xc08bfbc  jal         func_22FEF0
label_2e234c:
    if (ctx->pc == 0x2E234Cu) {
        ctx->pc = 0x2E234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2348u;
        // 0x2e234c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2350u;
        goto label_2e2350;
    }
    ctx->pc = 0x2E2348u;
    SET_GPR_U32(ctx, 31, 0x2E2350u);
    ctx->pc = 0x2E234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2348u;
    // 0x2e234c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2E2348u, 0x2E2350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2350u;
label_2e2350:
    // 0x2e2350: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2e2350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2e2354:
    // 0x2e2354: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2e2354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e2358:
    // 0x2e2358: 0x94620032  lhu         $v0, 0x32($v1)
    ctx->pc = 0x2e2358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
label_2e235c:
    // 0x2e235c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2e2360:
    // 0x2e2360: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e2360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e2364:
    // 0x2e2364: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e2364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e2368:
    // 0x2e2368: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x2e2368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2e236c:
    // 0x2e236c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e2370:
    // 0x2e2370: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2e2370u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2e2374:
    // 0x2e2374: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2e2374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2e2378:
    // 0x2e2378: 0x60f809  jalr        $v1
label_2e237c:
    if (ctx->pc == 0x2E237Cu) {
        ctx->pc = 0x2E237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2378u;
        // 0x2e237c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2380u;
        goto label_2e2380;
    }
    ctx->pc = 0x2E2378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E2380u);
        ctx->pc = 0x2E237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2378u;
        // 0x2e237c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2378u, 0x2E2380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E2380u;
label_2e2380:
    // 0x2e2380: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2e2380u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e2384:
    // 0x2e2384: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e2384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e2388:
    // 0x2e2388: 0xc0a367c  jal         func_28D9F0
label_2e238c:
    if (ctx->pc == 0x2E238Cu) {
        ctx->pc = 0x2E238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2388u;
        // 0x2e238c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2390u;
        goto label_2e2390;
    }
    ctx->pc = 0x2E2388u;
    SET_GPR_U32(ctx, 31, 0x2E2390u);
    ctx->pc = 0x2E238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2388u;
    // 0x2e238c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E2388u, 0x2E2390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2390u;
label_2e2390:
    // 0x2e2390: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e2390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e2394:
    // 0x2e2394: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2e2398:
    if (ctx->pc == 0x2E2398u) {
        ctx->pc = 0x2E2398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2394u;
        // 0x2e2398: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E239Cu;
        goto label_2e239c;
    }
    ctx->pc = 0x2E2394u;
    {
        const bool branch_taken_0x2e2394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2394u;
        // 0x2e2398: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2394) {
            ctx->pc = 0x2E23C4u;
            goto label_2e23c4;
        }
    }
    ctx->pc = 0x2E239Cu;
label_2e239c:
    // 0x2e239c: 0xc60c0034  lwc1        $f12, 0x34($s0)
    ctx->pc = 0x2e239cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e23a0:
    // 0x2e23a0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e23a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e23a4:
    // 0x2e23a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e23a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e23a8:
    // 0x2e23a8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2e23a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e23ac:
    // 0x2e23ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e23acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e23b0:
    // 0x2e23b0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2e23b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2e23b4:
    // 0x2e23b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2e23b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2e23b8:
    // 0x2e23b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e23b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e23bc:
    // 0x2e23bc: 0xc0beeb8  jal         func_2FBAE0
label_2e23c0:
    if (ctx->pc == 0x2E23C0u) {
        ctx->pc = 0x2E23C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E23BCu;
        // 0x2e23c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E23C4u;
        goto label_2e23c4;
    }
    ctx->pc = 0x2E23BCu;
    SET_GPR_U32(ctx, 31, 0x2E23C4u);
    ctx->pc = 0x2E23C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E23BCu;
    // 0x2e23c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBAE0u, 0x2E23BCu, 0x2E23C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E23C4u;
label_2e23c4:
    // 0x2e23c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e23c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e23c8:
    // 0x2e23c8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2e23c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e23cc:
    // 0x2e23cc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2e23ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e23d0:
    // 0x2e23d0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2e23d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e23d4:
    // 0x2e23d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e23d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e23d8:
    // 0x2e23d8: 0x3e00008  jr          $ra
label_2e23dc:
    if (ctx->pc == 0x2E23DCu) {
        ctx->pc = 0x2E23DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E23D8u;
        // 0x2e23dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E23E0u;
        goto label_2e23e0;
    }
    ctx->pc = 0x2E23D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E23DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E23D8u;
        // 0x2e23dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E23D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E23E0u;
label_2e23e0:
    // 0x2e23e0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e23e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2e23e4:
    // 0x2e23e4: 0x0  nop
    ctx->pc = 0x2e23e4u;
    // NOP
label_2e23e8:
    // 0x2e23e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e23e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2e23ec:
    // 0x2e23ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e23ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2e23f0:
    // 0x2e23f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e23f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2e23f4:
    // 0x2e23f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e23f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e23f8:
    // 0x2e23f8: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x2e23f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
label_2e23fc:
    // 0x2e23fc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2e23fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2e2400:
    // 0x2e2400: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e2400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e2404:
    // 0x2e2404: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e2404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2e2408:
    // 0x2e2408: 0x26314b00  addiu       $s1, $s1, 0x4B00
    ctx->pc = 0x2e2408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 19200));
label_2e240c:
    // 0x2e240c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2e240cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2e2410:
    // 0x2e2410: 0x26440034  addiu       $a0, $s2, 0x34
    ctx->pc = 0x2e2410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
label_2e2414:
    // 0x2e2414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e2418:
    // 0x2e2418: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2e2418u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2e241c:
    // 0x2e241c: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2e241cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2e2420:
    // 0x2e2420: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2e2420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e2424:
    // 0x2e2424: 0x8cb30048  lw          $s3, 0x48($a1)
    ctx->pc = 0x2e2424u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2e2428:
    // 0x2e2428: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e2428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e242c:
    // 0x2e242c: 0x84500092  lh          $s0, 0x92($v0)
    ctx->pc = 0x2e242cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_2e2430:
    // 0x2e2430: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2e2430u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2e2434:
    // 0x2e2434: 0xc0e409a  jal         func_390268
label_2e2438:
    if (ctx->pc == 0x2E2438u) {
        ctx->pc = 0x2E2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2434u;
        // 0x2e2438: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E243Cu;
        goto label_2e243c;
    }
    ctx->pc = 0x2E2434u;
    SET_GPR_U32(ctx, 31, 0x2E243Cu);
    ctx->pc = 0x2E2438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2434u;
    // 0x2e2438: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E2434u, 0x2E243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E243Cu;
label_2e243c:
    // 0x2e243c: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x2e243cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_2e2440:
    // 0x2e2440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e2444:
    // 0x2e2444: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e2444u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e2448:
    // 0x2e2448: 0xc0cdb62  jal         func_336D88
label_2e244c:
    if (ctx->pc == 0x2E244Cu) {
        ctx->pc = 0x2E244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2448u;
        // 0x2e244c: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2450u;
        goto label_2e2450;
    }
    ctx->pc = 0x2E2448u;
    SET_GPR_U32(ctx, 31, 0x2E2450u);
    ctx->pc = 0x2E244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2448u;
    // 0x2e244c: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2E2448u, 0x2E2450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2450u;
label_2e2450:
    // 0x2e2450: 0x86430050  lh          $v1, 0x50($s2)
    ctx->pc = 0x2e2450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
label_2e2454:
    // 0x2e2454: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2e2454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2e2458:
    // 0x2e2458: 0x1040011c  beqz        $v0, . + 4 + (0x11C << 2)
label_2e245c:
    if (ctx->pc == 0x2E245Cu) {
        ctx->pc = 0x2E245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2458u;
        // 0x2e245c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2460u;
        goto label_2e2460;
    }
    ctx->pc = 0x2E2458u;
    {
        const bool branch_taken_0x2e2458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2458u;
        // 0x2e245c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2458) {
            ctx->pc = 0x2E28CCu;
            goto label_2e28cc;
        }
    }
    ctx->pc = 0x2E2460u;
label_2e2460:
    // 0x2e2460: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2e2460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2e2464:
    // 0x2e2464: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e2464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e2468:
    // 0x2e2468: 0x24426be0  addiu       $v0, $v0, 0x6BE0
    ctx->pc = 0x2e2468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27616));
label_2e246c:
    // 0x2e246c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e246cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e2470:
    // 0x2e2470: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e2470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e2474:
    // 0x2e2474: 0x800008  jr          $a0
label_2e2478:
    if (ctx->pc == 0x2E2478u) {
        ctx->pc = 0x2E247Cu;
        goto label_2e247c;
    }
    ctx->pc = 0x2E2474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E247Cu: goto label_2e247c;
            case 0x2E250Cu: goto label_2e250c;
            case 0x2E2594u: goto label_2e2594;
            case 0x2E2810u: goto label_2e2810;
            case 0x2E2844u: goto label_2e2844;
            case 0x2E28CCu: goto label_2e28cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2474u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E247Cu;
label_2e247c:
    // 0x2e247c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2e247cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2e2480:
    // 0x2e2480: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2484:
    // 0x2e2484: 0x0  nop
    ctx->pc = 0x2e2484u;
    // NOP
label_2e2488:
    // 0x2e2488: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e2488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e248c:
    // 0x2e248c: 0x0  nop
    ctx->pc = 0x2e248cu;
    // NOP
label_2e2490:
    // 0x2e2490: 0x4500010f  bc1f        . + 4 + (0x10F << 2)
label_2e2494:
    if (ctx->pc == 0x2E2494u) {
        ctx->pc = 0x2E2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2490u;
        // 0x2e2494: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2498u;
        goto label_2e2498;
    }
    ctx->pc = 0x2E2490u;
    {
        const bool branch_taken_0x2e2490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2490u;
        // 0x2e2494: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2490) {
            ctx->pc = 0x2E28D0u;
            goto label_2e28d0;
        }
    }
    ctx->pc = 0x2E2498u;
label_2e2498:
    // 0x2e2498: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2e2498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2e249c:
    // 0x2e249c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e249cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e24a0:
    // 0x2e24a0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2e24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2e24a4:
    // 0x2e24a4: 0xc0a367c  jal         func_28D9F0
label_2e24a8:
    if (ctx->pc == 0x2E24A8u) {
        ctx->pc = 0x2E24A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E24A4u;
        // 0x2e24a8: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E24ACu;
        goto label_2e24ac;
    }
    ctx->pc = 0x2E24A4u;
    SET_GPR_U32(ctx, 31, 0x2E24ACu);
    ctx->pc = 0x2E24A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E24A4u;
    // 0x2e24a8: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E24A4u, 0x2E24ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E24ACu;
label_2e24ac:
    // 0x2e24ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e24acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e24b0:
    // 0x2e24b0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2e24b4:
    if (ctx->pc == 0x2E24B4u) {
        ctx->pc = 0x2E24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E24B0u;
        // 0x2e24b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E24B8u;
        goto label_2e24b8;
    }
    ctx->pc = 0x2E24B0u;
    {
        const bool branch_taken_0x2e24b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E24B0u;
        // 0x2e24b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e24b0) {
            ctx->pc = 0x2E24F4u;
            goto label_2e24f4;
        }
    }
    ctx->pc = 0x2E24B8u;
label_2e24b8:
    // 0x2e24b8: 0xc10587a  jal         func_4161E8
label_2e24bc:
    if (ctx->pc == 0x2E24BCu) {
        ctx->pc = 0x2E24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E24B8u;
        // 0x2e24bc: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E24C0u;
        goto label_2e24c0;
    }
    ctx->pc = 0x2E24B8u;
    SET_GPR_U32(ctx, 31, 0x2E24C0u);
    ctx->pc = 0x2E24BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E24B8u;
    // 0x2e24bc: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2E24B8u, 0x2E24C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E24C0u;
label_2e24c0:
    // 0x2e24c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2e24c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2e24c4:
    // 0x2e24c4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e24c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e24c8:
    // 0x2e24c8: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2e24c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2e24cc:
    // 0x2e24cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e24ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e24d0:
    // 0x2e24d0: 0x8e470038  lw          $a3, 0x38($s2)
    ctx->pc = 0x2e24d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2e24d4:
    // 0x2e24d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e24d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e24d8:
    // 0x2e24d8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e24d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2e24dc:
    // 0x2e24dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e24dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e24e0:
    // 0x2e24e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e24e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e24e4:
    // 0x2e24e4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2e24e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e24e8:
    // 0x2e24e8: 0xc0bee7a  jal         func_2FB9E8
label_2e24ec:
    if (ctx->pc == 0x2E24ECu) {
        ctx->pc = 0x2E24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E24E8u;
        // 0x2e24ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E24F0u;
        goto label_2e24f0;
    }
    ctx->pc = 0x2E24E8u;
    SET_GPR_U32(ctx, 31, 0x2E24F0u);
    ctx->pc = 0x2E24ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E24E8u;
    // 0x2e24ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2E24E8u, 0x2E24F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E24F0u;
label_2e24f0:
    // 0x2e24f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e24f4:
    // 0x2e24f4: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x2e24f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2e24f8:
    // 0x2e24f8: 0xa6420050  sh          $v0, 0x50($s2)
    ctx->pc = 0x2e24f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 80), (uint16_t)GPR_U32(ctx, 2));
label_2e24fc:
    // 0x2e24fc: 0xc0a48cc  jal         func_292330
label_2e2500:
    if (ctx->pc == 0x2E2500u) {
        ctx->pc = 0x2E2500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E24FCu;
        // 0x2e2500: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2504u;
        goto label_2e2504;
    }
    ctx->pc = 0x2E24FCu;
    SET_GPR_U32(ctx, 31, 0x2E2504u);
    ctx->pc = 0x2E2500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E24FCu;
    // 0x2e2500: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x2E24FCu, 0x2E2504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2504u;
label_2e2504:
    // 0x2e2504: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_2e2508:
    if (ctx->pc == 0x2E2508u) {
        ctx->pc = 0x2E2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2504u;
        // 0x2e2508: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E250Cu;
        goto label_2e250c;
    }
    ctx->pc = 0x2E2504u;
    {
        const bool branch_taken_0x2e2504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2504u;
        // 0x2e2508: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2504) {
            ctx->pc = 0x2E28D0u;
            goto label_2e28d0;
        }
    }
    ctx->pc = 0x2E250Cu;
label_2e250c:
    // 0x2e250c: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x2e250cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2510:
    // 0x2e2510: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e2510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e2514:
    // 0x2e2514: 0x0  nop
    ctx->pc = 0x2e2514u;
    // NOP
label_2e2518:
    // 0x2e2518: 0x450000ed  bc1f        . + 4 + (0xED << 2)
label_2e251c:
    if (ctx->pc == 0x2E251Cu) {
        ctx->pc = 0x2E251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2518u;
        // 0x2e251c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2520u;
        goto label_2e2520;
    }
    ctx->pc = 0x2E2518u;
    {
        const bool branch_taken_0x2e2518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2518u;
        // 0x2e251c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2518) {
            ctx->pc = 0x2E28D0u;
            goto label_2e28d0;
        }
    }
    ctx->pc = 0x2E2520u;
label_2e2520:
    // 0x2e2520: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2e2520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2e2524:
    // 0x2e2524: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e2524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e2528:
    // 0x2e2528: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2e2528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2e252c:
    // 0x2e252c: 0xc0a367c  jal         func_28D9F0
label_2e2530:
    if (ctx->pc == 0x2E2530u) {
        ctx->pc = 0x2E2530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E252Cu;
        // 0x2e2530: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2534u;
        goto label_2e2534;
    }
    ctx->pc = 0x2E252Cu;
    SET_GPR_U32(ctx, 31, 0x2E2534u);
    ctx->pc = 0x2E2530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E252Cu;
    // 0x2e2530: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E252Cu, 0x2E2534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2534u;
label_2e2534:
    // 0x2e2534: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e2534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e2538:
    // 0x2e2538: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2e253c:
    if (ctx->pc == 0x2E253Cu) {
        ctx->pc = 0x2E253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2538u;
        // 0x2e253c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2540u;
        goto label_2e2540;
    }
    ctx->pc = 0x2E2538u;
    {
        const bool branch_taken_0x2e2538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2538u;
        // 0x2e253c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2538) {
            ctx->pc = 0x2E257Cu;
            goto label_2e257c;
        }
    }
    ctx->pc = 0x2E2540u;
label_2e2540:
    // 0x2e2540: 0xc10587a  jal         func_4161E8
label_2e2544:
    if (ctx->pc == 0x2E2544u) {
        ctx->pc = 0x2E2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2540u;
        // 0x2e2544: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2548u;
        goto label_2e2548;
    }
    ctx->pc = 0x2E2540u;
    SET_GPR_U32(ctx, 31, 0x2E2548u);
    ctx->pc = 0x2E2544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2540u;
    // 0x2e2544: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2E2540u, 0x2E2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2548u;
label_2e2548:
    // 0x2e2548: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2e2548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2e254c:
    // 0x2e254c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e254cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e2550:
    // 0x2e2550: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2e2550u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2e2554:
    // 0x2e2554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e2558:
    // 0x2e2558: 0x8e470038  lw          $a3, 0x38($s2)
    ctx->pc = 0x2e2558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2e255c:
    // 0x2e255c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e255cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e2560:
    // 0x2e2560: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e2560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2e2564:
    // 0x2e2564: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e2564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e2568:
    // 0x2e2568: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e2568u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e256c:
    // 0x2e256c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2e256cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e2570:
    // 0x2e2570: 0xc0bee7a  jal         func_2FB9E8
label_2e2574:
    if (ctx->pc == 0x2E2574u) {
        ctx->pc = 0x2E2574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2570u;
        // 0x2e2574: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2578u;
        goto label_2e2578;
    }
    ctx->pc = 0x2E2570u;
    SET_GPR_U32(ctx, 31, 0x2E2578u);
    ctx->pc = 0x2E2574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2570u;
    // 0x2e2574: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2E2570u, 0x2E2578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2578u;
label_2e2578:
    // 0x2e2578: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e2578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e257c:
    // 0x2e257c: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x2e257cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2e2580:
    // 0x2e2580: 0xa6420050  sh          $v0, 0x50($s2)
    ctx->pc = 0x2e2580u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 80), (uint16_t)GPR_U32(ctx, 2));
label_2e2584:
    // 0x2e2584: 0xc0a48cc  jal         func_292330
label_2e2588:
    if (ctx->pc == 0x2E2588u) {
        ctx->pc = 0x2E2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2584u;
        // 0x2e2588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E258Cu;
        goto label_2e258c;
    }
    ctx->pc = 0x2E2584u;
    SET_GPR_U32(ctx, 31, 0x2E258Cu);
    ctx->pc = 0x2E2588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2584u;
    // 0x2e2588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x2E2584u, 0x2E258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E258Cu;
label_2e258c:
    // 0x2e258c: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_2e2590:
    if (ctx->pc == 0x2E2590u) {
        ctx->pc = 0x2E2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E258Cu;
        // 0x2e2590: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2594u;
        goto label_2e2594;
    }
    ctx->pc = 0x2E258Cu;
    {
        const bool branch_taken_0x2e258c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E258Cu;
        // 0x2e2590: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e258c) {
            ctx->pc = 0x2E28D0u;
            goto label_2e28d0;
        }
    }
    ctx->pc = 0x2E2594u;
label_2e2594:
    // 0x2e2594: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e2594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e2598:
    // 0x2e2598: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2e2598u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2e259c:
    // 0x2e259c: 0x5c60001d  bgtzl       $v1, . + 4 + (0x1D << 2)
label_2e25a0:
    if (ctx->pc == 0x2E25A0u) {
        ctx->pc = 0x2E25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E259Cu;
        // 0x2e25a0: 0x92420052  lbu         $v0, 0x52($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 82)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E25A4u;
        goto label_2e25a4;
    }
    ctx->pc = 0x2E259Cu;
    {
        const bool branch_taken_0x2e259c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2e259c) {
            ctx->pc = 0x2E25A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E259Cu;
            // 0x2e25a0: 0x92420052  lbu         $v0, 0x52($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 82)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2614u;
            goto label_2e2614;
        }
    }
    ctx->pc = 0x2E25A4u;
label_2e25a4:
    // 0x2e25a4: 0xc0b81f4  jal         func_2E07D0
label_2e25a8:
    if (ctx->pc == 0x2E25A8u) {
        ctx->pc = 0x2E25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25A4u;
        // 0x2e25a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E25ACu;
        goto label_2e25ac;
    }
    ctx->pc = 0x2E25A4u;
    SET_GPR_U32(ctx, 31, 0x2E25ACu);
    ctx->pc = 0x2E25A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E25A4u;
    // 0x2e25a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E07D0u, 0x2E25A4u, 0x2E25ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E25ACu;
label_2e25ac:
    // 0x2e25ac: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x2e25acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2e25b0:
    // 0x2e25b0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2e25b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2e25b4:
    // 0x2e25b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e25b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e25b8:
    // 0x2e25b8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e25b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e25bc:
    // 0x2e25bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e25bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e25c0:
    // 0x2e25c0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2e25c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e25c4:
    // 0x2e25c4: 0xc0a367c  jal         func_28D9F0
label_2e25c8:
    if (ctx->pc == 0x2E25C8u) {
        ctx->pc = 0x2E25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25C4u;
        // 0x2e25c8: 0xae450028  sw          $a1, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E25CCu;
        goto label_2e25cc;
    }
    ctx->pc = 0x2E25C4u;
    SET_GPR_U32(ctx, 31, 0x2E25CCu);
    ctx->pc = 0x2E25C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E25C4u;
    // 0x2e25c8: 0xae450028  sw          $a1, 0x28($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E25C4u, 0x2E25CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E25CCu;
label_2e25cc:
    // 0x2e25cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e25ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e25d0:
    // 0x2e25d0: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_2e25d4:
    if (ctx->pc == 0x2E25D4u) {
        ctx->pc = 0x2E25D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25D0u;
        // 0x2e25d4: 0x92420052  lbu         $v0, 0x52($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 82)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E25D8u;
        goto label_2e25d8;
    }
    ctx->pc = 0x2E25D0u;
    {
        const bool branch_taken_0x2e25d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e25d0) {
            ctx->pc = 0x2E25D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E25D0u;
            // 0x2e25d4: 0x92420052  lbu         $v0, 0x52($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 82)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2614u;
            goto label_2e2614;
        }
    }
    ctx->pc = 0x2E25D8u;
label_2e25d8:
    // 0x2e25d8: 0xc10587a  jal         func_4161E8
label_2e25dc:
    if (ctx->pc == 0x2E25DCu) {
        ctx->pc = 0x2E25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25D8u;
        // 0x2e25dc: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E25E0u;
        goto label_2e25e0;
    }
    ctx->pc = 0x2E25D8u;
    SET_GPR_U32(ctx, 31, 0x2E25E0u);
    ctx->pc = 0x2E25DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E25D8u;
    // 0x2e25dc: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2E25D8u, 0x2E25E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E25E0u;
label_2e25e0:
    // 0x2e25e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2e25e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2e25e4:
    // 0x2e25e4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e25e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e25e8:
    // 0x2e25e8: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2e25e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2e25ec:
    // 0x2e25ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e25ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e25f0:
    // 0x2e25f0: 0x8e470038  lw          $a3, 0x38($s2)
    ctx->pc = 0x2e25f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2e25f4:
    // 0x2e25f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e25f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e25f8:
    // 0x2e25f8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e25f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2e25fc:
    // 0x2e25fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e25fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e2600:
    // 0x2e2600: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e2600u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2604:
    // 0x2e2604: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2e2604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e2608:
    // 0x2e2608: 0xc0bee7a  jal         func_2FB9E8
label_2e260c:
    if (ctx->pc == 0x2E260Cu) {
        ctx->pc = 0x2E260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2608u;
        // 0x2e260c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2610u;
        goto label_2e2610;
    }
    ctx->pc = 0x2E2608u;
    SET_GPR_U32(ctx, 31, 0x2E2610u);
    ctx->pc = 0x2E260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2608u;
    // 0x2e260c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2E2608u, 0x2E2610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2610u;
label_2e2610:
    // 0x2e2610: 0x92420052  lbu         $v0, 0x52($s2)
    ctx->pc = 0x2e2610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 82)));
label_2e2614:
    // 0x2e2614: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
label_2e2618:
    if (ctx->pc == 0x2E2618u) {
        ctx->pc = 0x2E2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2614u;
        // 0x2e2618: 0xc640003c  lwc1        $f0, 0x3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E261Cu;
        goto label_2e261c;
    }
    ctx->pc = 0x2E2614u;
    {
        const bool branch_taken_0x2e2614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2614) {
            ctx->pc = 0x2E2618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2614u;
            // 0x2e2618: 0xc640003c  lwc1        $f0, 0x3C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E26F4u;
            goto label_2e26f4;
        }
    }
    ctx->pc = 0x2E261Cu;
label_2e261c:
    // 0x2e261c: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x2e261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_2e2620:
    // 0x2e2620: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2e2620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_2e2624:
    // 0x2e2624: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x2e2624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2e2628:
    // 0x2e2628: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2e262c:
    if (ctx->pc == 0x2E262Cu) {
        ctx->pc = 0x2E262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2628u;
        // 0x2e262c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2630u;
        goto label_2e2630;
    }
    ctx->pc = 0x2E2628u;
    {
        const bool branch_taken_0x2e2628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2628u;
        // 0x2e262c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2628) {
            ctx->pc = 0x2E26D8u;
            goto label_2e26d8;
        }
    }
    ctx->pc = 0x2E2630u;
label_2e2630:
    // 0x2e2630: 0x9642004c  lhu         $v0, 0x4C($s2)
    ctx->pc = 0x2e2630u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 76)));
label_2e2634:
    // 0x2e2634: 0xa2400052  sb          $zero, 0x52($s2)
    ctx->pc = 0x2e2634u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 82), (uint8_t)GPR_U32(ctx, 0));
label_2e2638:
    // 0x2e2638: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e2638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e263c:
    // 0x2e263c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e263cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e2640:
    // 0x2e2640: 0xa642004c  sh          $v0, 0x4C($s2)
    ctx->pc = 0x2e2640u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 76), (uint16_t)GPR_U32(ctx, 2));
label_2e2644:
    // 0x2e2644: 0xc0a367c  jal         func_28D9F0
label_2e2648:
    if (ctx->pc == 0x2E2648u) {
        ctx->pc = 0x2E2648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2644u;
        // 0x2e2648: 0xa6430050  sh          $v1, 0x50($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 80), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E264Cu;
        goto label_2e264c;
    }
    ctx->pc = 0x2E2644u;
    SET_GPR_U32(ctx, 31, 0x2E264Cu);
    ctx->pc = 0x2E2648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2644u;
    // 0x2e2648: 0xa6430050  sh          $v1, 0x50($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 80), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E2644u, 0x2E264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E264Cu;
label_2e264c:
    // 0x2e264c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2e2650:
    if (ctx->pc == 0x2E2650u) {
        ctx->pc = 0x2E2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E264Cu;
        // 0x2e2650: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2654u;
        goto label_2e2654;
    }
    ctx->pc = 0x2E264Cu;
    {
        const bool branch_taken_0x2e264c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E264Cu;
        // 0x2e2650: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e264c) {
            ctx->pc = 0x2E2668u;
            goto label_2e2668;
        }
    }
    ctx->pc = 0x2E2654u;
label_2e2654:
    // 0x2e2654: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e2654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e2658:
    // 0x2e2658: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e2658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e265c:
    // 0x2e265c: 0xc0bf3ca  jal         func_2FCF28
label_2e2660:
    if (ctx->pc == 0x2E2660u) {
        ctx->pc = 0x2E2660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E265Cu;
        // 0x2e2660: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2664u;
        goto label_2e2664;
    }
    ctx->pc = 0x2E265Cu;
    SET_GPR_U32(ctx, 31, 0x2E2664u);
    ctx->pc = 0x2E2660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E265Cu;
    // 0x2e2660: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF28u, 0x2E265Cu, 0x2E2664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2664u;
label_2e2664:
    // 0x2e2664: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2e2664u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2e2668:
    // 0x2e2668: 0xae530048  sw          $s3, 0x48($s2)
    ctx->pc = 0x2e2668u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 19));
label_2e266c:
    // 0x2e266c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2e266cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2e2670:
    // 0x2e2670: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x2e2670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_2e2674:
    // 0x2e2674: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e2674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e2678:
    // 0x2e2678: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2e2678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2e267c:
    // 0x2e267c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2e267cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2e2680:
    // 0x2e2680: 0x40f809  jalr        $v0
label_2e2684:
    if (ctx->pc == 0x2E2684u) {
        ctx->pc = 0x2E2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2680u;
        // 0x2e2684: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2688u;
        goto label_2e2688;
    }
    ctx->pc = 0x2E2680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E2688u);
        ctx->pc = 0x2E2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2680u;
        // 0x2e2684: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2680u, 0x2E2688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E2688u;
label_2e2688:
    // 0x2e2688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e2688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e268c:
    // 0x2e268c: 0x54430020  bnel        $v0, $v1, . + 4 + (0x20 << 2)
label_2e2690:
    if (ctx->pc == 0x2E2690u) {
        ctx->pc = 0x2E2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E268Cu;
        // 0x2e2690: 0x92420053  lbu         $v0, 0x53($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 83)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2694u;
        goto label_2e2694;
    }
    ctx->pc = 0x2E268Cu;
    {
        const bool branch_taken_0x2e268c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e268c) {
            ctx->pc = 0x2E2690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E268Cu;
            // 0x2e2690: 0x92420053  lbu         $v0, 0x53($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 83)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2710u;
            goto label_2e2710;
        }
    }
    ctx->pc = 0x2E2694u;
label_2e2694:
    // 0x2e2694: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2e2694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2e2698:
    // 0x2e2698: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e2698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e269c:
    // 0x2e269c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e269cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e26a0:
    // 0x2e26a0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x2e26a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_2e26a4:
    // 0x2e26a4: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2e26a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_2e26a8:
    // 0x2e26a8: 0x60f809  jalr        $v1
label_2e26ac:
    if (ctx->pc == 0x2E26ACu) {
        ctx->pc = 0x2E26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26A8u;
        // 0x2e26ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E26B0u;
        goto label_2e26b0;
    }
    ctx->pc = 0x2E26A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E26B0u);
        ctx->pc = 0x2E26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26A8u;
        // 0x2e26ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E26A8u, 0x2E26B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E26B0u;
label_2e26b0:
    // 0x2e26b0: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x2e26b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2e26b4:
    // 0x2e26b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e26b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e26b8:
    // 0x2e26b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e26b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e26bc:
    // 0x2e26bc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2e26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2e26c0:
    // 0x2e26c0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2e26c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2e26c4:
    // 0x2e26c4: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2e26c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2e26c8:
    // 0x2e26c8: 0x60f809  jalr        $v1
label_2e26cc:
    if (ctx->pc == 0x2E26CCu) {
        ctx->pc = 0x2E26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26C8u;
        // 0x2e26cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E26D0u;
        goto label_2e26d0;
    }
    ctx->pc = 0x2E26C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E26D0u);
        ctx->pc = 0x2E26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26C8u;
        // 0x2e26cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E26C8u, 0x2E26D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E26D0u;
label_2e26d0:
    // 0x2e26d0: 0x1000000f  b           . + 4 + (0xF << 2)
label_2e26d4:
    if (ctx->pc == 0x2E26D4u) {
        ctx->pc = 0x2E26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26D0u;
        // 0x2e26d4: 0x92420053  lbu         $v0, 0x53($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 83)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E26D8u;
        goto label_2e26d8;
    }
    ctx->pc = 0x2E26D0u;
    {
        const bool branch_taken_0x2e26d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26D0u;
        // 0x2e26d4: 0x92420053  lbu         $v0, 0x53($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 83)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26d0) {
            ctx->pc = 0x2E2710u;
            goto label_2e2710;
        }
    }
    ctx->pc = 0x2E26D8u;
label_2e26d8:
    // 0x2e26d8: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x2e26d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e26dc:
    // 0x2e26dc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e26dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e26e0:
    // 0x2e26e0: 0x0  nop
    ctx->pc = 0x2e26e0u;
    // NOP
label_2e26e4:
    // 0x2e26e4: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_2e26e8:
    if (ctx->pc == 0x2E26E8u) {
        ctx->pc = 0x2E26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26E4u;
        // 0x2e26e8: 0xa2400052  sb          $zero, 0x52($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 82), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E26ECu;
        goto label_2e26ec;
    }
    ctx->pc = 0x2E26E4u;
    {
        const bool branch_taken_0x2e26e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e26e4) {
            ctx->pc = 0x2E26E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E26E4u;
            // 0x2e26e8: 0xa2400052  sb          $zero, 0x52($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 82), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E270Cu;
            goto label_2e270c;
        }
    }
    ctx->pc = 0x2E26ECu;
label_2e26ec:
    // 0x2e26ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e26f0:
    if (ctx->pc == 0x2E26F0u) {
        ctx->pc = 0x2E26F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26ECu;
        // 0x2e26f0: 0x92420053  lbu         $v0, 0x53($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 83)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E26F4u;
        goto label_2e26f4;
    }
    ctx->pc = 0x2E26ECu;
    {
        const bool branch_taken_0x2e26ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E26F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26ECu;
        // 0x2e26f0: 0x92420053  lbu         $v0, 0x53($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 83)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26ec) {
            ctx->pc = 0x2E2710u;
            goto label_2e2710;
        }
    }
    ctx->pc = 0x2E26F4u;
label_2e26f4:
    // 0x2e26f4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e26f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e26f8:
    // 0x2e26f8: 0x0  nop
    ctx->pc = 0x2e26f8u;
    // NOP
label_2e26fc:
    // 0x2e26fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2e2700:
    if (ctx->pc == 0x2E2700u) {
        ctx->pc = 0x2E2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26FCu;
        // 0x2e2700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2704u;
        goto label_2e2704;
    }
    ctx->pc = 0x2E26FCu;
    {
        const bool branch_taken_0x2e26fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26FCu;
        // 0x2e2700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26fc) {
            ctx->pc = 0x2E270Cu;
            goto label_2e270c;
        }
    }
    ctx->pc = 0x2E2704u;
label_2e2704:
    // 0x2e2704: 0xae530048  sw          $s3, 0x48($s2)
    ctx->pc = 0x2e2704u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 19));
label_2e2708:
    // 0x2e2708: 0xa2420052  sb          $v0, 0x52($s2)
    ctx->pc = 0x2e2708u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 82), (uint8_t)GPR_U32(ctx, 2));
label_2e270c:
    // 0x2e270c: 0x92420053  lbu         $v0, 0x53($s2)
    ctx->pc = 0x2e270cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 83)));
label_2e2710:
    // 0x2e2710: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_2e2714:
    if (ctx->pc == 0x2E2714u) {
        ctx->pc = 0x2E2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2710u;
        // 0x2e2714: 0xc6400040  lwc1        $f0, 0x40($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2718u;
        goto label_2e2718;
    }
    ctx->pc = 0x2E2710u;
    {
        const bool branch_taken_0x2e2710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2710) {
            ctx->pc = 0x2E2714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2710u;
            // 0x2e2714: 0xc6400040  lwc1        $f0, 0x40($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E27F4u;
            goto label_2e27f4;
        }
    }
    ctx->pc = 0x2E2718u;
label_2e2718:
    // 0x2e2718: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x2e2718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_2e271c:
    // 0x2e271c: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2e271cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_2e2720:
    // 0x2e2720: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x2e2720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2e2724:
    // 0x2e2724: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_2e2728:
    if (ctx->pc == 0x2E2728u) {
        ctx->pc = 0x2E2728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2724u;
        // 0x2e2728: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E272Cu;
        goto label_2e272c;
    }
    ctx->pc = 0x2E2724u;
    {
        const bool branch_taken_0x2e2724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2724u;
        // 0x2e2728: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2724) {
            ctx->pc = 0x2E27D8u;
            goto label_2e27d8;
        }
    }
    ctx->pc = 0x2E272Cu;
label_2e272c:
    // 0x2e272c: 0x9642004e  lhu         $v0, 0x4E($s2)
    ctx->pc = 0x2e272cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
label_2e2730:
    // 0x2e2730: 0xa2400053  sb          $zero, 0x53($s2)
    ctx->pc = 0x2e2730u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 83), (uint8_t)GPR_U32(ctx, 0));
label_2e2734:
    // 0x2e2734: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e2734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e2738:
    // 0x2e2738: 0xae530048  sw          $s3, 0x48($s2)
    ctx->pc = 0x2e2738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 19));
label_2e273c:
    // 0x2e273c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e273cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e2740:
    // 0x2e2740: 0xa642004e  sh          $v0, 0x4E($s2)
    ctx->pc = 0x2e2740u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 78), (uint16_t)GPR_U32(ctx, 2));
label_2e2744:
    // 0x2e2744: 0xc0a367c  jal         func_28D9F0
label_2e2748:
    if (ctx->pc == 0x2E2748u) {
        ctx->pc = 0x2E2748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2744u;
        // 0x2e2748: 0xa6430050  sh          $v1, 0x50($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 80), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E274Cu;
        goto label_2e274c;
    }
    ctx->pc = 0x2E2744u;
    SET_GPR_U32(ctx, 31, 0x2E274Cu);
    ctx->pc = 0x2E2748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2744u;
    // 0x2e2748: 0xa6430050  sh          $v1, 0x50($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 80), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E2744u, 0x2E274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E274Cu;
label_2e274c:
    // 0x2e274c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2e2750:
    if (ctx->pc == 0x2E2750u) {
        ctx->pc = 0x2E2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E274Cu;
        // 0x2e2750: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2754u;
        goto label_2e2754;
    }
    ctx->pc = 0x2E274Cu;
    {
        const bool branch_taken_0x2e274c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E274Cu;
        // 0x2e2750: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e274c) {
            ctx->pc = 0x2E2768u;
            goto label_2e2768;
        }
    }
    ctx->pc = 0x2E2754u;
label_2e2754:
    // 0x2e2754: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e2754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e2758:
    // 0x2e2758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e2758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e275c:
    // 0x2e275c: 0xc0bf3ca  jal         func_2FCF28
label_2e2760:
    if (ctx->pc == 0x2E2760u) {
        ctx->pc = 0x2E2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E275Cu;
        // 0x2e2760: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2764u;
        goto label_2e2764;
    }
    ctx->pc = 0x2E275Cu;
    SET_GPR_U32(ctx, 31, 0x2E2764u);
    ctx->pc = 0x2E2760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E275Cu;
    // 0x2e2760: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF28u, 0x2E275Cu, 0x2E2764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2764u;
label_2e2764:
    // 0x2e2764: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2e2764u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2e2768:
    // 0x2e2768: 0xae530048  sw          $s3, 0x48($s2)
    ctx->pc = 0x2e2768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 19));
label_2e276c:
    // 0x2e276c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2e276cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2e2770:
    // 0x2e2770: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x2e2770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_2e2774:
    // 0x2e2774: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e2774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e2778:
    // 0x2e2778: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2e2778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2e277c:
    // 0x2e277c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2e277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2e2780:
    // 0x2e2780: 0x40f809  jalr        $v0
label_2e2784:
    if (ctx->pc == 0x2E2784u) {
        ctx->pc = 0x2E2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2780u;
        // 0x2e2784: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2788u;
        goto label_2e2788;
    }
    ctx->pc = 0x2E2780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E2788u);
        ctx->pc = 0x2E2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2780u;
        // 0x2e2784: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2780u, 0x2E2788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E2788u;
label_2e2788:
    // 0x2e2788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e2788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e278c:
    // 0x2e278c: 0x54430050  bnel        $v0, $v1, . + 4 + (0x50 << 2)
label_2e2790:
    if (ctx->pc == 0x2E2790u) {
        ctx->pc = 0x2E2790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E278Cu;
        // 0x2e2790: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2794u;
        goto label_2e2794;
    }
    ctx->pc = 0x2E278Cu;
    {
        const bool branch_taken_0x2e278c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e278c) {
            ctx->pc = 0x2E2790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E278Cu;
            // 0x2e2790: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E28D0u;
            goto label_2e28d0;
        }
    }
    ctx->pc = 0x2E2794u;
label_2e2794:
    // 0x2e2794: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2e2794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2e2798:
    // 0x2e2798: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e2798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e279c:
    // 0x2e279c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e27a0:
    // 0x2e27a0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x2e27a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_2e27a4:
    // 0x2e27a4: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2e27a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_2e27a8:
    // 0x2e27a8: 0x60f809  jalr        $v1
label_2e27ac:
    if (ctx->pc == 0x2E27ACu) {
        ctx->pc = 0x2E27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27A8u;
        // 0x2e27ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E27B0u;
        goto label_2e27b0;
    }
    ctx->pc = 0x2E27A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E27B0u);
        ctx->pc = 0x2E27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27A8u;
        // 0x2e27ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E27A8u, 0x2E27B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E27B0u;
label_2e27b0:
    // 0x2e27b0: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x2e27b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2e27b4:
    // 0x2e27b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e27b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e27b8:
    // 0x2e27b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e27b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e27bc:
    // 0x2e27bc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2e27bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2e27c0:
    // 0x2e27c0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2e27c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2e27c4:
    // 0x2e27c4: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2e27c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2e27c8:
    // 0x2e27c8: 0x60f809  jalr        $v1
label_2e27cc:
    if (ctx->pc == 0x2E27CCu) {
        ctx->pc = 0x2E27CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27C8u;
        // 0x2e27cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E27D0u;
        goto label_2e27d0;
    }
    ctx->pc = 0x2E27C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E27D0u);
        ctx->pc = 0x2E27CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27C8u;
        // 0x2e27cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E27C8u, 0x2E27D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E27D0u;
label_2e27d0:
    // 0x2e27d0: 0x1000003f  b           . + 4 + (0x3F << 2)
label_2e27d4:
    if (ctx->pc == 0x2E27D4u) {
        ctx->pc = 0x2E27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27D0u;
        // 0x2e27d4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E27D8u;
        goto label_2e27d8;
    }
    ctx->pc = 0x2E27D0u;
    {
        const bool branch_taken_0x2e27d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27D0u;
        // 0x2e27d4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27d0) {
            ctx->pc = 0x2E28D0u;
            goto label_2e28d0;
        }
    }
    ctx->pc = 0x2E27D8u;
label_2e27d8:
    // 0x2e27d8: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x2e27d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e27dc:
    // 0x2e27dc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e27dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e27e0:
    // 0x2e27e0: 0x0  nop
    ctx->pc = 0x2e27e0u;
    // NOP
label_2e27e4:
    // 0x2e27e4: 0x45030039  bc1tl       . + 4 + (0x39 << 2)
label_2e27e8:
    if (ctx->pc == 0x2E27E8u) {
        ctx->pc = 0x2E27E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27E4u;
        // 0x2e27e8: 0xa2400053  sb          $zero, 0x53($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 83), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E27ECu;
        goto label_2e27ec;
    }
    ctx->pc = 0x2E27E4u;
    {
        const bool branch_taken_0x2e27e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e27e4) {
            ctx->pc = 0x2E27E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E27E4u;
            // 0x2e27e8: 0xa2400053  sb          $zero, 0x53($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 83), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E28CCu;
            goto label_2e28cc;
        }
    }
    ctx->pc = 0x2E27ECu;
label_2e27ec:
    // 0x2e27ec: 0x10000038  b           . + 4 + (0x38 << 2)
label_2e27f0:
    if (ctx->pc == 0x2E27F0u) {
        ctx->pc = 0x2E27F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27ECu;
        // 0x2e27f0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E27F4u;
        goto label_2e27f4;
    }
    ctx->pc = 0x2E27ECu;
    {
        const bool branch_taken_0x2e27ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E27F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27ECu;
        // 0x2e27f0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27ec) {
            ctx->pc = 0x2E28D0u;
            goto label_2e28d0;
        }
    }
    ctx->pc = 0x2E27F4u;
label_2e27f4:
    // 0x2e27f4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e27f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e27f8:
    // 0x2e27f8: 0x0  nop
    ctx->pc = 0x2e27f8u;
    // NOP
label_2e27fc:
    // 0x2e27fc: 0x45000033  bc1f        . + 4 + (0x33 << 2)
label_2e2800:
    if (ctx->pc == 0x2E2800u) {
        ctx->pc = 0x2E2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27FCu;
        // 0x2e2800: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2804u;
        goto label_2e2804;
    }
    ctx->pc = 0x2E27FCu;
    {
        const bool branch_taken_0x2e27fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27FCu;
        // 0x2e2800: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27fc) {
            ctx->pc = 0x2E28CCu;
            goto label_2e28cc;
        }
    }
    ctx->pc = 0x2E2804u;
label_2e2804:
    // 0x2e2804: 0xae530048  sw          $s3, 0x48($s2)
    ctx->pc = 0x2e2804u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 19));
label_2e2808:
    // 0x2e2808: 0x10000030  b           . + 4 + (0x30 << 2)
label_2e280c:
    if (ctx->pc == 0x2E280Cu) {
        ctx->pc = 0x2E280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2808u;
        // 0x2e280c: 0xa2420053  sb          $v0, 0x53($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 83), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2810u;
        goto label_2e2810;
    }
    ctx->pc = 0x2E2808u;
    {
        const bool branch_taken_0x2e2808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2808u;
        // 0x2e280c: 0xa2420053  sb          $v0, 0x53($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 83), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2808) {
            ctx->pc = 0x2E28CCu;
            goto label_2e28cc;
        }
    }
    ctx->pc = 0x2E2810u;
label_2e2810:
    // 0x2e2810: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x2e2810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_2e2814:
    // 0x2e2814: 0x24422710  addiu       $v0, $v0, 0x2710
    ctx->pc = 0x2e2814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10000));
label_2e2818:
    // 0x2e2818: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x2e2818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2e281c:
    // 0x2e281c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_2e2820:
    if (ctx->pc == 0x2E2820u) {
        ctx->pc = 0x2E2820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E281Cu;
        // 0x2e2820: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2824u;
        goto label_2e2824;
    }
    ctx->pc = 0x2E281Cu;
    {
        const bool branch_taken_0x2e281c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E281Cu;
        // 0x2e2820: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e281c) {
            ctx->pc = 0x2E28C8u;
            goto label_2e28c8;
        }
    }
    ctx->pc = 0x2E2824u;
label_2e2824:
    // 0x2e2824: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x2e2824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2828:
    // 0x2e2828: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e2828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2e282c:
    // 0x2e282c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2e282cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2e2830:
    // 0x2e2830: 0x0  nop
    ctx->pc = 0x2e2830u;
    // NOP
label_2e2834:
    // 0x2e2834: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2e2834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_2e2838:
    // 0x2e2838: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e2838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e283c:
    // 0x2e283c: 0x1000000c  b           . + 4 + (0xC << 2)
label_2e2840:
    if (ctx->pc == 0x2E2840u) {
        ctx->pc = 0x2E2844u;
        goto label_2e2844;
    }
    ctx->pc = 0x2E283Cu;
    {
        const bool branch_taken_0x2e283c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e283c) {
            ctx->pc = 0x2E2870u;
            goto label_2e2870;
        }
    }
    ctx->pc = 0x2E2844u;
label_2e2844:
    // 0x2e2844: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x2e2844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_2e2848:
    // 0x2e2848: 0x24422710  addiu       $v0, $v0, 0x2710
    ctx->pc = 0x2e2848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10000));
label_2e284c:
    // 0x2e284c: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x2e284cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2e2850:
    // 0x2e2850: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_2e2854:
    if (ctx->pc == 0x2E2854u) {
        ctx->pc = 0x2E2854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2850u;
        // 0x2e2854: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2858u;
        goto label_2e2858;
    }
    ctx->pc = 0x2E2850u;
    {
        const bool branch_taken_0x2e2850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2850u;
        // 0x2e2854: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2850) {
            ctx->pc = 0x2E28C8u;
            goto label_2e28c8;
        }
    }
    ctx->pc = 0x2E2858u;
label_2e2858:
    // 0x2e2858: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x2e2858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e285c:
    // 0x2e285c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e285cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2e2860:
    // 0x2e2860: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2e2860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2e2864:
    // 0x2e2864: 0x0  nop
    ctx->pc = 0x2e2864u;
    // NOP
label_2e2868:
    // 0x2e2868: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2e2868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_2e286c:
    // 0x2e286c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e286cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e2870:
    // 0x2e2870: 0x0  nop
    ctx->pc = 0x2e2870u;
    // NOP
label_2e2874:
    // 0x2e2874: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_2e2878:
    if (ctx->pc == 0x2E2878u) {
        ctx->pc = 0x2E2878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2874u;
        // 0x2e2878: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E287Cu;
        goto label_2e287c;
    }
    ctx->pc = 0x2E2874u;
    {
        const bool branch_taken_0x2e2874 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2874u;
        // 0x2e2878: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2874) {
            ctx->pc = 0x2E28D0u;
            goto label_2e28d0;
        }
    }
    ctx->pc = 0x2E287Cu;
label_2e287c:
    // 0x2e287c: 0xc0a367c  jal         func_28D9F0
label_2e2880:
    if (ctx->pc == 0x2E2880u) {
        ctx->pc = 0x2E2880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E287Cu;
        // 0x2e2880: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2884u;
        goto label_2e2884;
    }
    ctx->pc = 0x2E287Cu;
    SET_GPR_U32(ctx, 31, 0x2E2884u);
    ctx->pc = 0x2E2880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E287Cu;
    // 0x2e2880: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E287Cu, 0x2E2884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2884u;
label_2e2884:
    // 0x2e2884: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e2884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e2888:
    // 0x2e2888: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_2e288c:
    if (ctx->pc == 0x2E288Cu) {
        ctx->pc = 0x2E288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2888u;
        // 0x2e288c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2890u;
        goto label_2e2890;
    }
    ctx->pc = 0x2E2888u;
    {
        const bool branch_taken_0x2e2888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2888u;
        // 0x2e288c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2888) {
            ctx->pc = 0x2E28C8u;
            goto label_2e28c8;
        }
    }
    ctx->pc = 0x2E2890u;
label_2e2890:
    // 0x2e2890: 0xc10587a  jal         func_4161E8
label_2e2894:
    if (ctx->pc == 0x2E2894u) {
        ctx->pc = 0x2E2894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2890u;
        // 0x2e2894: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2898u;
        goto label_2e2898;
    }
    ctx->pc = 0x2E2890u;
    SET_GPR_U32(ctx, 31, 0x2E2898u);
    ctx->pc = 0x2E2894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2890u;
    // 0x2e2894: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2E2890u, 0x2E2898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2898u;
label_2e2898:
    // 0x2e2898: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2e2898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2e289c:
    // 0x2e289c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e289cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e28a0:
    // 0x2e28a0: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2e28a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2e28a4:
    // 0x2e28a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e28a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e28a8:
    // 0x2e28a8: 0x8e470038  lw          $a3, 0x38($s2)
    ctx->pc = 0x2e28a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2e28ac:
    // 0x2e28ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e28acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e28b0:
    // 0x2e28b0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2e28b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2e28b4:
    // 0x2e28b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e28b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e28b8:
    // 0x2e28b8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2e28b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e28bc:
    // 0x2e28bc: 0xc0bee7a  jal         func_2FB9E8
label_2e28c0:
    if (ctx->pc == 0x2E28C0u) {
        ctx->pc = 0x2E28C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E28BCu;
        // 0x2e28c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E28C4u;
        goto label_2e28c4;
    }
    ctx->pc = 0x2E28BCu;
    SET_GPR_U32(ctx, 31, 0x2E28C4u);
    ctx->pc = 0x2E28C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E28BCu;
    // 0x2e28c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2E28BCu, 0x2E28C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E28C4u;
label_2e28c4:
    // 0x2e28c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e28c8:
    // 0x2e28c8: 0xa6420050  sh          $v0, 0x50($s2)
    ctx->pc = 0x2e28c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 80), (uint16_t)GPR_U32(ctx, 2));
label_2e28cc:
    // 0x2e28cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e28ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e28d0:
    // 0x2e28d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e28d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e28d4:
    // 0x2e28d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e28d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e28d8:
    // 0x2e28d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e28d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e28dc:
    // 0x2e28dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2e28dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e28e0:
    // 0x2e28e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e28e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e28e4:
    // 0x2e28e4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2e28e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2e28e8:
    // 0x2e28e8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2e28e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e28ec:
    // 0x2e28ec: 0x3e00008  jr          $ra
label_2e28f0:
    if (ctx->pc == 0x2E28F0u) {
        ctx->pc = 0x2E28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E28ECu;
        // 0x2e28f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E28F4u;
        goto label_2e28f4;
    }
    ctx->pc = 0x2E28ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E28ECu;
        // 0x2e28f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E28ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E28F4u;
label_2e28f4:
    // 0x2e28f4: 0x0  nop
    ctx->pc = 0x2e28f4u;
    // NOP
    ctx->pc = 0x2e28f8u;
}
