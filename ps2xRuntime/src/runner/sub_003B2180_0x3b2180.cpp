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

// Function: sub_003B2180
// Address: 0x3b2180 - 0x3b2f40
void sub_003B2180_0x3b2180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2180_0x3b2180");
#endif

    switch (ctx->pc) {
        case 0x3b2180u: goto label_3b2180;
        case 0x3b2184u: goto label_3b2184;
        case 0x3b2188u: goto label_3b2188;
        case 0x3b218cu: goto label_3b218c;
        case 0x3b2190u: goto label_3b2190;
        case 0x3b2194u: goto label_3b2194;
        case 0x3b2198u: goto label_3b2198;
        case 0x3b219cu: goto label_3b219c;
        case 0x3b21a0u: goto label_3b21a0;
        case 0x3b21a4u: goto label_3b21a4;
        case 0x3b21a8u: goto label_3b21a8;
        case 0x3b21acu: goto label_3b21ac;
        case 0x3b21b0u: goto label_3b21b0;
        case 0x3b21b4u: goto label_3b21b4;
        case 0x3b21b8u: goto label_3b21b8;
        case 0x3b21bcu: goto label_3b21bc;
        case 0x3b21c0u: goto label_3b21c0;
        case 0x3b21c4u: goto label_3b21c4;
        case 0x3b21c8u: goto label_3b21c8;
        case 0x3b21ccu: goto label_3b21cc;
        case 0x3b21d0u: goto label_3b21d0;
        case 0x3b21d4u: goto label_3b21d4;
        case 0x3b21d8u: goto label_3b21d8;
        case 0x3b21dcu: goto label_3b21dc;
        case 0x3b21e0u: goto label_3b21e0;
        case 0x3b21e4u: goto label_3b21e4;
        case 0x3b21e8u: goto label_3b21e8;
        case 0x3b21ecu: goto label_3b21ec;
        case 0x3b21f0u: goto label_3b21f0;
        case 0x3b21f4u: goto label_3b21f4;
        case 0x3b21f8u: goto label_3b21f8;
        case 0x3b21fcu: goto label_3b21fc;
        case 0x3b2200u: goto label_3b2200;
        case 0x3b2204u: goto label_3b2204;
        case 0x3b2208u: goto label_3b2208;
        case 0x3b220cu: goto label_3b220c;
        case 0x3b2210u: goto label_3b2210;
        case 0x3b2214u: goto label_3b2214;
        case 0x3b2218u: goto label_3b2218;
        case 0x3b221cu: goto label_3b221c;
        case 0x3b2220u: goto label_3b2220;
        case 0x3b2224u: goto label_3b2224;
        case 0x3b2228u: goto label_3b2228;
        case 0x3b222cu: goto label_3b222c;
        case 0x3b2230u: goto label_3b2230;
        case 0x3b2234u: goto label_3b2234;
        case 0x3b2238u: goto label_3b2238;
        case 0x3b223cu: goto label_3b223c;
        case 0x3b2240u: goto label_3b2240;
        case 0x3b2244u: goto label_3b2244;
        case 0x3b2248u: goto label_3b2248;
        case 0x3b224cu: goto label_3b224c;
        case 0x3b2250u: goto label_3b2250;
        case 0x3b2254u: goto label_3b2254;
        case 0x3b2258u: goto label_3b2258;
        case 0x3b225cu: goto label_3b225c;
        case 0x3b2260u: goto label_3b2260;
        case 0x3b2264u: goto label_3b2264;
        case 0x3b2268u: goto label_3b2268;
        case 0x3b226cu: goto label_3b226c;
        case 0x3b2270u: goto label_3b2270;
        case 0x3b2274u: goto label_3b2274;
        case 0x3b2278u: goto label_3b2278;
        case 0x3b227cu: goto label_3b227c;
        case 0x3b2280u: goto label_3b2280;
        case 0x3b2284u: goto label_3b2284;
        case 0x3b2288u: goto label_3b2288;
        case 0x3b228cu: goto label_3b228c;
        case 0x3b2290u: goto label_3b2290;
        case 0x3b2294u: goto label_3b2294;
        case 0x3b2298u: goto label_3b2298;
        case 0x3b229cu: goto label_3b229c;
        case 0x3b22a0u: goto label_3b22a0;
        case 0x3b22a4u: goto label_3b22a4;
        case 0x3b22a8u: goto label_3b22a8;
        case 0x3b22acu: goto label_3b22ac;
        case 0x3b22b0u: goto label_3b22b0;
        case 0x3b22b4u: goto label_3b22b4;
        case 0x3b22b8u: goto label_3b22b8;
        case 0x3b22bcu: goto label_3b22bc;
        case 0x3b22c0u: goto label_3b22c0;
        case 0x3b22c4u: goto label_3b22c4;
        case 0x3b22c8u: goto label_3b22c8;
        case 0x3b22ccu: goto label_3b22cc;
        case 0x3b22d0u: goto label_3b22d0;
        case 0x3b22d4u: goto label_3b22d4;
        case 0x3b22d8u: goto label_3b22d8;
        case 0x3b22dcu: goto label_3b22dc;
        case 0x3b22e0u: goto label_3b22e0;
        case 0x3b22e4u: goto label_3b22e4;
        case 0x3b22e8u: goto label_3b22e8;
        case 0x3b22ecu: goto label_3b22ec;
        case 0x3b22f0u: goto label_3b22f0;
        case 0x3b22f4u: goto label_3b22f4;
        case 0x3b22f8u: goto label_3b22f8;
        case 0x3b22fcu: goto label_3b22fc;
        case 0x3b2300u: goto label_3b2300;
        case 0x3b2304u: goto label_3b2304;
        case 0x3b2308u: goto label_3b2308;
        case 0x3b230cu: goto label_3b230c;
        case 0x3b2310u: goto label_3b2310;
        case 0x3b2314u: goto label_3b2314;
        case 0x3b2318u: goto label_3b2318;
        case 0x3b231cu: goto label_3b231c;
        case 0x3b2320u: goto label_3b2320;
        case 0x3b2324u: goto label_3b2324;
        case 0x3b2328u: goto label_3b2328;
        case 0x3b232cu: goto label_3b232c;
        case 0x3b2330u: goto label_3b2330;
        case 0x3b2334u: goto label_3b2334;
        case 0x3b2338u: goto label_3b2338;
        case 0x3b233cu: goto label_3b233c;
        case 0x3b2340u: goto label_3b2340;
        case 0x3b2344u: goto label_3b2344;
        case 0x3b2348u: goto label_3b2348;
        case 0x3b234cu: goto label_3b234c;
        case 0x3b2350u: goto label_3b2350;
        case 0x3b2354u: goto label_3b2354;
        case 0x3b2358u: goto label_3b2358;
        case 0x3b235cu: goto label_3b235c;
        case 0x3b2360u: goto label_3b2360;
        case 0x3b2364u: goto label_3b2364;
        case 0x3b2368u: goto label_3b2368;
        case 0x3b236cu: goto label_3b236c;
        case 0x3b2370u: goto label_3b2370;
        case 0x3b2374u: goto label_3b2374;
        case 0x3b2378u: goto label_3b2378;
        case 0x3b237cu: goto label_3b237c;
        case 0x3b2380u: goto label_3b2380;
        case 0x3b2384u: goto label_3b2384;
        case 0x3b2388u: goto label_3b2388;
        case 0x3b238cu: goto label_3b238c;
        case 0x3b2390u: goto label_3b2390;
        case 0x3b2394u: goto label_3b2394;
        case 0x3b2398u: goto label_3b2398;
        case 0x3b239cu: goto label_3b239c;
        case 0x3b23a0u: goto label_3b23a0;
        case 0x3b23a4u: goto label_3b23a4;
        case 0x3b23a8u: goto label_3b23a8;
        case 0x3b23acu: goto label_3b23ac;
        case 0x3b23b0u: goto label_3b23b0;
        case 0x3b23b4u: goto label_3b23b4;
        case 0x3b23b8u: goto label_3b23b8;
        case 0x3b23bcu: goto label_3b23bc;
        case 0x3b23c0u: goto label_3b23c0;
        case 0x3b23c4u: goto label_3b23c4;
        case 0x3b23c8u: goto label_3b23c8;
        case 0x3b23ccu: goto label_3b23cc;
        case 0x3b23d0u: goto label_3b23d0;
        case 0x3b23d4u: goto label_3b23d4;
        case 0x3b23d8u: goto label_3b23d8;
        case 0x3b23dcu: goto label_3b23dc;
        case 0x3b23e0u: goto label_3b23e0;
        case 0x3b23e4u: goto label_3b23e4;
        case 0x3b23e8u: goto label_3b23e8;
        case 0x3b23ecu: goto label_3b23ec;
        case 0x3b23f0u: goto label_3b23f0;
        case 0x3b23f4u: goto label_3b23f4;
        case 0x3b23f8u: goto label_3b23f8;
        case 0x3b23fcu: goto label_3b23fc;
        case 0x3b2400u: goto label_3b2400;
        case 0x3b2404u: goto label_3b2404;
        case 0x3b2408u: goto label_3b2408;
        case 0x3b240cu: goto label_3b240c;
        case 0x3b2410u: goto label_3b2410;
        case 0x3b2414u: goto label_3b2414;
        case 0x3b2418u: goto label_3b2418;
        case 0x3b241cu: goto label_3b241c;
        case 0x3b2420u: goto label_3b2420;
        case 0x3b2424u: goto label_3b2424;
        case 0x3b2428u: goto label_3b2428;
        case 0x3b242cu: goto label_3b242c;
        case 0x3b2430u: goto label_3b2430;
        case 0x3b2434u: goto label_3b2434;
        case 0x3b2438u: goto label_3b2438;
        case 0x3b243cu: goto label_3b243c;
        case 0x3b2440u: goto label_3b2440;
        case 0x3b2444u: goto label_3b2444;
        case 0x3b2448u: goto label_3b2448;
        case 0x3b244cu: goto label_3b244c;
        case 0x3b2450u: goto label_3b2450;
        case 0x3b2454u: goto label_3b2454;
        case 0x3b2458u: goto label_3b2458;
        case 0x3b245cu: goto label_3b245c;
        case 0x3b2460u: goto label_3b2460;
        case 0x3b2464u: goto label_3b2464;
        case 0x3b2468u: goto label_3b2468;
        case 0x3b246cu: goto label_3b246c;
        case 0x3b2470u: goto label_3b2470;
        case 0x3b2474u: goto label_3b2474;
        case 0x3b2478u: goto label_3b2478;
        case 0x3b247cu: goto label_3b247c;
        case 0x3b2480u: goto label_3b2480;
        case 0x3b2484u: goto label_3b2484;
        case 0x3b2488u: goto label_3b2488;
        case 0x3b248cu: goto label_3b248c;
        case 0x3b2490u: goto label_3b2490;
        case 0x3b2494u: goto label_3b2494;
        case 0x3b2498u: goto label_3b2498;
        case 0x3b249cu: goto label_3b249c;
        case 0x3b24a0u: goto label_3b24a0;
        case 0x3b24a4u: goto label_3b24a4;
        case 0x3b24a8u: goto label_3b24a8;
        case 0x3b24acu: goto label_3b24ac;
        case 0x3b24b0u: goto label_3b24b0;
        case 0x3b24b4u: goto label_3b24b4;
        case 0x3b24b8u: goto label_3b24b8;
        case 0x3b24bcu: goto label_3b24bc;
        case 0x3b24c0u: goto label_3b24c0;
        case 0x3b24c4u: goto label_3b24c4;
        case 0x3b24c8u: goto label_3b24c8;
        case 0x3b24ccu: goto label_3b24cc;
        case 0x3b24d0u: goto label_3b24d0;
        case 0x3b24d4u: goto label_3b24d4;
        case 0x3b24d8u: goto label_3b24d8;
        case 0x3b24dcu: goto label_3b24dc;
        case 0x3b24e0u: goto label_3b24e0;
        case 0x3b24e4u: goto label_3b24e4;
        case 0x3b24e8u: goto label_3b24e8;
        case 0x3b24ecu: goto label_3b24ec;
        case 0x3b24f0u: goto label_3b24f0;
        case 0x3b24f4u: goto label_3b24f4;
        case 0x3b24f8u: goto label_3b24f8;
        case 0x3b24fcu: goto label_3b24fc;
        case 0x3b2500u: goto label_3b2500;
        case 0x3b2504u: goto label_3b2504;
        case 0x3b2508u: goto label_3b2508;
        case 0x3b250cu: goto label_3b250c;
        case 0x3b2510u: goto label_3b2510;
        case 0x3b2514u: goto label_3b2514;
        case 0x3b2518u: goto label_3b2518;
        case 0x3b251cu: goto label_3b251c;
        case 0x3b2520u: goto label_3b2520;
        case 0x3b2524u: goto label_3b2524;
        case 0x3b2528u: goto label_3b2528;
        case 0x3b252cu: goto label_3b252c;
        case 0x3b2530u: goto label_3b2530;
        case 0x3b2534u: goto label_3b2534;
        case 0x3b2538u: goto label_3b2538;
        case 0x3b253cu: goto label_3b253c;
        case 0x3b2540u: goto label_3b2540;
        case 0x3b2544u: goto label_3b2544;
        case 0x3b2548u: goto label_3b2548;
        case 0x3b254cu: goto label_3b254c;
        case 0x3b2550u: goto label_3b2550;
        case 0x3b2554u: goto label_3b2554;
        case 0x3b2558u: goto label_3b2558;
        case 0x3b255cu: goto label_3b255c;
        case 0x3b2560u: goto label_3b2560;
        case 0x3b2564u: goto label_3b2564;
        case 0x3b2568u: goto label_3b2568;
        case 0x3b256cu: goto label_3b256c;
        case 0x3b2570u: goto label_3b2570;
        case 0x3b2574u: goto label_3b2574;
        case 0x3b2578u: goto label_3b2578;
        case 0x3b257cu: goto label_3b257c;
        case 0x3b2580u: goto label_3b2580;
        case 0x3b2584u: goto label_3b2584;
        case 0x3b2588u: goto label_3b2588;
        case 0x3b258cu: goto label_3b258c;
        case 0x3b2590u: goto label_3b2590;
        case 0x3b2594u: goto label_3b2594;
        case 0x3b2598u: goto label_3b2598;
        case 0x3b259cu: goto label_3b259c;
        case 0x3b25a0u: goto label_3b25a0;
        case 0x3b25a4u: goto label_3b25a4;
        case 0x3b25a8u: goto label_3b25a8;
        case 0x3b25acu: goto label_3b25ac;
        case 0x3b25b0u: goto label_3b25b0;
        case 0x3b25b4u: goto label_3b25b4;
        case 0x3b25b8u: goto label_3b25b8;
        case 0x3b25bcu: goto label_3b25bc;
        case 0x3b25c0u: goto label_3b25c0;
        case 0x3b25c4u: goto label_3b25c4;
        case 0x3b25c8u: goto label_3b25c8;
        case 0x3b25ccu: goto label_3b25cc;
        case 0x3b25d0u: goto label_3b25d0;
        case 0x3b25d4u: goto label_3b25d4;
        case 0x3b25d8u: goto label_3b25d8;
        case 0x3b25dcu: goto label_3b25dc;
        case 0x3b25e0u: goto label_3b25e0;
        case 0x3b25e4u: goto label_3b25e4;
        case 0x3b25e8u: goto label_3b25e8;
        case 0x3b25ecu: goto label_3b25ec;
        case 0x3b25f0u: goto label_3b25f0;
        case 0x3b25f4u: goto label_3b25f4;
        case 0x3b25f8u: goto label_3b25f8;
        case 0x3b25fcu: goto label_3b25fc;
        case 0x3b2600u: goto label_3b2600;
        case 0x3b2604u: goto label_3b2604;
        case 0x3b2608u: goto label_3b2608;
        case 0x3b260cu: goto label_3b260c;
        case 0x3b2610u: goto label_3b2610;
        case 0x3b2614u: goto label_3b2614;
        case 0x3b2618u: goto label_3b2618;
        case 0x3b261cu: goto label_3b261c;
        case 0x3b2620u: goto label_3b2620;
        case 0x3b2624u: goto label_3b2624;
        case 0x3b2628u: goto label_3b2628;
        case 0x3b262cu: goto label_3b262c;
        case 0x3b2630u: goto label_3b2630;
        case 0x3b2634u: goto label_3b2634;
        case 0x3b2638u: goto label_3b2638;
        case 0x3b263cu: goto label_3b263c;
        case 0x3b2640u: goto label_3b2640;
        case 0x3b2644u: goto label_3b2644;
        case 0x3b2648u: goto label_3b2648;
        case 0x3b264cu: goto label_3b264c;
        case 0x3b2650u: goto label_3b2650;
        case 0x3b2654u: goto label_3b2654;
        case 0x3b2658u: goto label_3b2658;
        case 0x3b265cu: goto label_3b265c;
        case 0x3b2660u: goto label_3b2660;
        case 0x3b2664u: goto label_3b2664;
        case 0x3b2668u: goto label_3b2668;
        case 0x3b266cu: goto label_3b266c;
        case 0x3b2670u: goto label_3b2670;
        case 0x3b2674u: goto label_3b2674;
        case 0x3b2678u: goto label_3b2678;
        case 0x3b267cu: goto label_3b267c;
        case 0x3b2680u: goto label_3b2680;
        case 0x3b2684u: goto label_3b2684;
        case 0x3b2688u: goto label_3b2688;
        case 0x3b268cu: goto label_3b268c;
        case 0x3b2690u: goto label_3b2690;
        case 0x3b2694u: goto label_3b2694;
        case 0x3b2698u: goto label_3b2698;
        case 0x3b269cu: goto label_3b269c;
        case 0x3b26a0u: goto label_3b26a0;
        case 0x3b26a4u: goto label_3b26a4;
        case 0x3b26a8u: goto label_3b26a8;
        case 0x3b26acu: goto label_3b26ac;
        case 0x3b26b0u: goto label_3b26b0;
        case 0x3b26b4u: goto label_3b26b4;
        case 0x3b26b8u: goto label_3b26b8;
        case 0x3b26bcu: goto label_3b26bc;
        case 0x3b26c0u: goto label_3b26c0;
        case 0x3b26c4u: goto label_3b26c4;
        case 0x3b26c8u: goto label_3b26c8;
        case 0x3b26ccu: goto label_3b26cc;
        case 0x3b26d0u: goto label_3b26d0;
        case 0x3b26d4u: goto label_3b26d4;
        case 0x3b26d8u: goto label_3b26d8;
        case 0x3b26dcu: goto label_3b26dc;
        case 0x3b26e0u: goto label_3b26e0;
        case 0x3b26e4u: goto label_3b26e4;
        case 0x3b26e8u: goto label_3b26e8;
        case 0x3b26ecu: goto label_3b26ec;
        case 0x3b26f0u: goto label_3b26f0;
        case 0x3b26f4u: goto label_3b26f4;
        case 0x3b26f8u: goto label_3b26f8;
        case 0x3b26fcu: goto label_3b26fc;
        case 0x3b2700u: goto label_3b2700;
        case 0x3b2704u: goto label_3b2704;
        case 0x3b2708u: goto label_3b2708;
        case 0x3b270cu: goto label_3b270c;
        case 0x3b2710u: goto label_3b2710;
        case 0x3b2714u: goto label_3b2714;
        case 0x3b2718u: goto label_3b2718;
        case 0x3b271cu: goto label_3b271c;
        case 0x3b2720u: goto label_3b2720;
        case 0x3b2724u: goto label_3b2724;
        case 0x3b2728u: goto label_3b2728;
        case 0x3b272cu: goto label_3b272c;
        case 0x3b2730u: goto label_3b2730;
        case 0x3b2734u: goto label_3b2734;
        case 0x3b2738u: goto label_3b2738;
        case 0x3b273cu: goto label_3b273c;
        case 0x3b2740u: goto label_3b2740;
        case 0x3b2744u: goto label_3b2744;
        case 0x3b2748u: goto label_3b2748;
        case 0x3b274cu: goto label_3b274c;
        case 0x3b2750u: goto label_3b2750;
        case 0x3b2754u: goto label_3b2754;
        case 0x3b2758u: goto label_3b2758;
        case 0x3b275cu: goto label_3b275c;
        case 0x3b2760u: goto label_3b2760;
        case 0x3b2764u: goto label_3b2764;
        case 0x3b2768u: goto label_3b2768;
        case 0x3b276cu: goto label_3b276c;
        case 0x3b2770u: goto label_3b2770;
        case 0x3b2774u: goto label_3b2774;
        case 0x3b2778u: goto label_3b2778;
        case 0x3b277cu: goto label_3b277c;
        case 0x3b2780u: goto label_3b2780;
        case 0x3b2784u: goto label_3b2784;
        case 0x3b2788u: goto label_3b2788;
        case 0x3b278cu: goto label_3b278c;
        case 0x3b2790u: goto label_3b2790;
        case 0x3b2794u: goto label_3b2794;
        case 0x3b2798u: goto label_3b2798;
        case 0x3b279cu: goto label_3b279c;
        case 0x3b27a0u: goto label_3b27a0;
        case 0x3b27a4u: goto label_3b27a4;
        case 0x3b27a8u: goto label_3b27a8;
        case 0x3b27acu: goto label_3b27ac;
        case 0x3b27b0u: goto label_3b27b0;
        case 0x3b27b4u: goto label_3b27b4;
        case 0x3b27b8u: goto label_3b27b8;
        case 0x3b27bcu: goto label_3b27bc;
        case 0x3b27c0u: goto label_3b27c0;
        case 0x3b27c4u: goto label_3b27c4;
        case 0x3b27c8u: goto label_3b27c8;
        case 0x3b27ccu: goto label_3b27cc;
        case 0x3b27d0u: goto label_3b27d0;
        case 0x3b27d4u: goto label_3b27d4;
        case 0x3b27d8u: goto label_3b27d8;
        case 0x3b27dcu: goto label_3b27dc;
        case 0x3b27e0u: goto label_3b27e0;
        case 0x3b27e4u: goto label_3b27e4;
        case 0x3b27e8u: goto label_3b27e8;
        case 0x3b27ecu: goto label_3b27ec;
        case 0x3b27f0u: goto label_3b27f0;
        case 0x3b27f4u: goto label_3b27f4;
        case 0x3b27f8u: goto label_3b27f8;
        case 0x3b27fcu: goto label_3b27fc;
        case 0x3b2800u: goto label_3b2800;
        case 0x3b2804u: goto label_3b2804;
        case 0x3b2808u: goto label_3b2808;
        case 0x3b280cu: goto label_3b280c;
        case 0x3b2810u: goto label_3b2810;
        case 0x3b2814u: goto label_3b2814;
        case 0x3b2818u: goto label_3b2818;
        case 0x3b281cu: goto label_3b281c;
        case 0x3b2820u: goto label_3b2820;
        case 0x3b2824u: goto label_3b2824;
        case 0x3b2828u: goto label_3b2828;
        case 0x3b282cu: goto label_3b282c;
        case 0x3b2830u: goto label_3b2830;
        case 0x3b2834u: goto label_3b2834;
        case 0x3b2838u: goto label_3b2838;
        case 0x3b283cu: goto label_3b283c;
        case 0x3b2840u: goto label_3b2840;
        case 0x3b2844u: goto label_3b2844;
        case 0x3b2848u: goto label_3b2848;
        case 0x3b284cu: goto label_3b284c;
        case 0x3b2850u: goto label_3b2850;
        case 0x3b2854u: goto label_3b2854;
        case 0x3b2858u: goto label_3b2858;
        case 0x3b285cu: goto label_3b285c;
        case 0x3b2860u: goto label_3b2860;
        case 0x3b2864u: goto label_3b2864;
        case 0x3b2868u: goto label_3b2868;
        case 0x3b286cu: goto label_3b286c;
        case 0x3b2870u: goto label_3b2870;
        case 0x3b2874u: goto label_3b2874;
        case 0x3b2878u: goto label_3b2878;
        case 0x3b287cu: goto label_3b287c;
        case 0x3b2880u: goto label_3b2880;
        case 0x3b2884u: goto label_3b2884;
        case 0x3b2888u: goto label_3b2888;
        case 0x3b288cu: goto label_3b288c;
        case 0x3b2890u: goto label_3b2890;
        case 0x3b2894u: goto label_3b2894;
        case 0x3b2898u: goto label_3b2898;
        case 0x3b289cu: goto label_3b289c;
        case 0x3b28a0u: goto label_3b28a0;
        case 0x3b28a4u: goto label_3b28a4;
        case 0x3b28a8u: goto label_3b28a8;
        case 0x3b28acu: goto label_3b28ac;
        case 0x3b28b0u: goto label_3b28b0;
        case 0x3b28b4u: goto label_3b28b4;
        case 0x3b28b8u: goto label_3b28b8;
        case 0x3b28bcu: goto label_3b28bc;
        case 0x3b28c0u: goto label_3b28c0;
        case 0x3b28c4u: goto label_3b28c4;
        case 0x3b28c8u: goto label_3b28c8;
        case 0x3b28ccu: goto label_3b28cc;
        case 0x3b28d0u: goto label_3b28d0;
        case 0x3b28d4u: goto label_3b28d4;
        case 0x3b28d8u: goto label_3b28d8;
        case 0x3b28dcu: goto label_3b28dc;
        case 0x3b28e0u: goto label_3b28e0;
        case 0x3b28e4u: goto label_3b28e4;
        case 0x3b28e8u: goto label_3b28e8;
        case 0x3b28ecu: goto label_3b28ec;
        case 0x3b28f0u: goto label_3b28f0;
        case 0x3b28f4u: goto label_3b28f4;
        case 0x3b28f8u: goto label_3b28f8;
        case 0x3b28fcu: goto label_3b28fc;
        case 0x3b2900u: goto label_3b2900;
        case 0x3b2904u: goto label_3b2904;
        case 0x3b2908u: goto label_3b2908;
        case 0x3b290cu: goto label_3b290c;
        case 0x3b2910u: goto label_3b2910;
        case 0x3b2914u: goto label_3b2914;
        case 0x3b2918u: goto label_3b2918;
        case 0x3b291cu: goto label_3b291c;
        case 0x3b2920u: goto label_3b2920;
        case 0x3b2924u: goto label_3b2924;
        case 0x3b2928u: goto label_3b2928;
        case 0x3b292cu: goto label_3b292c;
        case 0x3b2930u: goto label_3b2930;
        case 0x3b2934u: goto label_3b2934;
        case 0x3b2938u: goto label_3b2938;
        case 0x3b293cu: goto label_3b293c;
        case 0x3b2940u: goto label_3b2940;
        case 0x3b2944u: goto label_3b2944;
        case 0x3b2948u: goto label_3b2948;
        case 0x3b294cu: goto label_3b294c;
        case 0x3b2950u: goto label_3b2950;
        case 0x3b2954u: goto label_3b2954;
        case 0x3b2958u: goto label_3b2958;
        case 0x3b295cu: goto label_3b295c;
        case 0x3b2960u: goto label_3b2960;
        case 0x3b2964u: goto label_3b2964;
        case 0x3b2968u: goto label_3b2968;
        case 0x3b296cu: goto label_3b296c;
        case 0x3b2970u: goto label_3b2970;
        case 0x3b2974u: goto label_3b2974;
        case 0x3b2978u: goto label_3b2978;
        case 0x3b297cu: goto label_3b297c;
        case 0x3b2980u: goto label_3b2980;
        case 0x3b2984u: goto label_3b2984;
        case 0x3b2988u: goto label_3b2988;
        case 0x3b298cu: goto label_3b298c;
        case 0x3b2990u: goto label_3b2990;
        case 0x3b2994u: goto label_3b2994;
        case 0x3b2998u: goto label_3b2998;
        case 0x3b299cu: goto label_3b299c;
        case 0x3b29a0u: goto label_3b29a0;
        case 0x3b29a4u: goto label_3b29a4;
        case 0x3b29a8u: goto label_3b29a8;
        case 0x3b29acu: goto label_3b29ac;
        case 0x3b29b0u: goto label_3b29b0;
        case 0x3b29b4u: goto label_3b29b4;
        case 0x3b29b8u: goto label_3b29b8;
        case 0x3b29bcu: goto label_3b29bc;
        case 0x3b29c0u: goto label_3b29c0;
        case 0x3b29c4u: goto label_3b29c4;
        case 0x3b29c8u: goto label_3b29c8;
        case 0x3b29ccu: goto label_3b29cc;
        case 0x3b29d0u: goto label_3b29d0;
        case 0x3b29d4u: goto label_3b29d4;
        case 0x3b29d8u: goto label_3b29d8;
        case 0x3b29dcu: goto label_3b29dc;
        case 0x3b29e0u: goto label_3b29e0;
        case 0x3b29e4u: goto label_3b29e4;
        case 0x3b29e8u: goto label_3b29e8;
        case 0x3b29ecu: goto label_3b29ec;
        case 0x3b29f0u: goto label_3b29f0;
        case 0x3b29f4u: goto label_3b29f4;
        case 0x3b29f8u: goto label_3b29f8;
        case 0x3b29fcu: goto label_3b29fc;
        case 0x3b2a00u: goto label_3b2a00;
        case 0x3b2a04u: goto label_3b2a04;
        case 0x3b2a08u: goto label_3b2a08;
        case 0x3b2a0cu: goto label_3b2a0c;
        case 0x3b2a10u: goto label_3b2a10;
        case 0x3b2a14u: goto label_3b2a14;
        case 0x3b2a18u: goto label_3b2a18;
        case 0x3b2a1cu: goto label_3b2a1c;
        case 0x3b2a20u: goto label_3b2a20;
        case 0x3b2a24u: goto label_3b2a24;
        case 0x3b2a28u: goto label_3b2a28;
        case 0x3b2a2cu: goto label_3b2a2c;
        case 0x3b2a30u: goto label_3b2a30;
        case 0x3b2a34u: goto label_3b2a34;
        case 0x3b2a38u: goto label_3b2a38;
        case 0x3b2a3cu: goto label_3b2a3c;
        case 0x3b2a40u: goto label_3b2a40;
        case 0x3b2a44u: goto label_3b2a44;
        case 0x3b2a48u: goto label_3b2a48;
        case 0x3b2a4cu: goto label_3b2a4c;
        case 0x3b2a50u: goto label_3b2a50;
        case 0x3b2a54u: goto label_3b2a54;
        case 0x3b2a58u: goto label_3b2a58;
        case 0x3b2a5cu: goto label_3b2a5c;
        case 0x3b2a60u: goto label_3b2a60;
        case 0x3b2a64u: goto label_3b2a64;
        case 0x3b2a68u: goto label_3b2a68;
        case 0x3b2a6cu: goto label_3b2a6c;
        case 0x3b2a70u: goto label_3b2a70;
        case 0x3b2a74u: goto label_3b2a74;
        case 0x3b2a78u: goto label_3b2a78;
        case 0x3b2a7cu: goto label_3b2a7c;
        case 0x3b2a80u: goto label_3b2a80;
        case 0x3b2a84u: goto label_3b2a84;
        case 0x3b2a88u: goto label_3b2a88;
        case 0x3b2a8cu: goto label_3b2a8c;
        case 0x3b2a90u: goto label_3b2a90;
        case 0x3b2a94u: goto label_3b2a94;
        case 0x3b2a98u: goto label_3b2a98;
        case 0x3b2a9cu: goto label_3b2a9c;
        case 0x3b2aa0u: goto label_3b2aa0;
        case 0x3b2aa4u: goto label_3b2aa4;
        case 0x3b2aa8u: goto label_3b2aa8;
        case 0x3b2aacu: goto label_3b2aac;
        case 0x3b2ab0u: goto label_3b2ab0;
        case 0x3b2ab4u: goto label_3b2ab4;
        case 0x3b2ab8u: goto label_3b2ab8;
        case 0x3b2abcu: goto label_3b2abc;
        case 0x3b2ac0u: goto label_3b2ac0;
        case 0x3b2ac4u: goto label_3b2ac4;
        case 0x3b2ac8u: goto label_3b2ac8;
        case 0x3b2accu: goto label_3b2acc;
        case 0x3b2ad0u: goto label_3b2ad0;
        case 0x3b2ad4u: goto label_3b2ad4;
        case 0x3b2ad8u: goto label_3b2ad8;
        case 0x3b2adcu: goto label_3b2adc;
        case 0x3b2ae0u: goto label_3b2ae0;
        case 0x3b2ae4u: goto label_3b2ae4;
        case 0x3b2ae8u: goto label_3b2ae8;
        case 0x3b2aecu: goto label_3b2aec;
        case 0x3b2af0u: goto label_3b2af0;
        case 0x3b2af4u: goto label_3b2af4;
        case 0x3b2af8u: goto label_3b2af8;
        case 0x3b2afcu: goto label_3b2afc;
        case 0x3b2b00u: goto label_3b2b00;
        case 0x3b2b04u: goto label_3b2b04;
        case 0x3b2b08u: goto label_3b2b08;
        case 0x3b2b0cu: goto label_3b2b0c;
        case 0x3b2b10u: goto label_3b2b10;
        case 0x3b2b14u: goto label_3b2b14;
        case 0x3b2b18u: goto label_3b2b18;
        case 0x3b2b1cu: goto label_3b2b1c;
        case 0x3b2b20u: goto label_3b2b20;
        case 0x3b2b24u: goto label_3b2b24;
        case 0x3b2b28u: goto label_3b2b28;
        case 0x3b2b2cu: goto label_3b2b2c;
        case 0x3b2b30u: goto label_3b2b30;
        case 0x3b2b34u: goto label_3b2b34;
        case 0x3b2b38u: goto label_3b2b38;
        case 0x3b2b3cu: goto label_3b2b3c;
        case 0x3b2b40u: goto label_3b2b40;
        case 0x3b2b44u: goto label_3b2b44;
        case 0x3b2b48u: goto label_3b2b48;
        case 0x3b2b4cu: goto label_3b2b4c;
        case 0x3b2b50u: goto label_3b2b50;
        case 0x3b2b54u: goto label_3b2b54;
        case 0x3b2b58u: goto label_3b2b58;
        case 0x3b2b5cu: goto label_3b2b5c;
        case 0x3b2b60u: goto label_3b2b60;
        case 0x3b2b64u: goto label_3b2b64;
        case 0x3b2b68u: goto label_3b2b68;
        case 0x3b2b6cu: goto label_3b2b6c;
        case 0x3b2b70u: goto label_3b2b70;
        case 0x3b2b74u: goto label_3b2b74;
        case 0x3b2b78u: goto label_3b2b78;
        case 0x3b2b7cu: goto label_3b2b7c;
        case 0x3b2b80u: goto label_3b2b80;
        case 0x3b2b84u: goto label_3b2b84;
        case 0x3b2b88u: goto label_3b2b88;
        case 0x3b2b8cu: goto label_3b2b8c;
        case 0x3b2b90u: goto label_3b2b90;
        case 0x3b2b94u: goto label_3b2b94;
        case 0x3b2b98u: goto label_3b2b98;
        case 0x3b2b9cu: goto label_3b2b9c;
        case 0x3b2ba0u: goto label_3b2ba0;
        case 0x3b2ba4u: goto label_3b2ba4;
        case 0x3b2ba8u: goto label_3b2ba8;
        case 0x3b2bacu: goto label_3b2bac;
        case 0x3b2bb0u: goto label_3b2bb0;
        case 0x3b2bb4u: goto label_3b2bb4;
        case 0x3b2bb8u: goto label_3b2bb8;
        case 0x3b2bbcu: goto label_3b2bbc;
        case 0x3b2bc0u: goto label_3b2bc0;
        case 0x3b2bc4u: goto label_3b2bc4;
        case 0x3b2bc8u: goto label_3b2bc8;
        case 0x3b2bccu: goto label_3b2bcc;
        case 0x3b2bd0u: goto label_3b2bd0;
        case 0x3b2bd4u: goto label_3b2bd4;
        case 0x3b2bd8u: goto label_3b2bd8;
        case 0x3b2bdcu: goto label_3b2bdc;
        case 0x3b2be0u: goto label_3b2be0;
        case 0x3b2be4u: goto label_3b2be4;
        case 0x3b2be8u: goto label_3b2be8;
        case 0x3b2becu: goto label_3b2bec;
        case 0x3b2bf0u: goto label_3b2bf0;
        case 0x3b2bf4u: goto label_3b2bf4;
        case 0x3b2bf8u: goto label_3b2bf8;
        case 0x3b2bfcu: goto label_3b2bfc;
        case 0x3b2c00u: goto label_3b2c00;
        case 0x3b2c04u: goto label_3b2c04;
        case 0x3b2c08u: goto label_3b2c08;
        case 0x3b2c0cu: goto label_3b2c0c;
        case 0x3b2c10u: goto label_3b2c10;
        case 0x3b2c14u: goto label_3b2c14;
        case 0x3b2c18u: goto label_3b2c18;
        case 0x3b2c1cu: goto label_3b2c1c;
        case 0x3b2c20u: goto label_3b2c20;
        case 0x3b2c24u: goto label_3b2c24;
        case 0x3b2c28u: goto label_3b2c28;
        case 0x3b2c2cu: goto label_3b2c2c;
        case 0x3b2c30u: goto label_3b2c30;
        case 0x3b2c34u: goto label_3b2c34;
        case 0x3b2c38u: goto label_3b2c38;
        case 0x3b2c3cu: goto label_3b2c3c;
        case 0x3b2c40u: goto label_3b2c40;
        case 0x3b2c44u: goto label_3b2c44;
        case 0x3b2c48u: goto label_3b2c48;
        case 0x3b2c4cu: goto label_3b2c4c;
        case 0x3b2c50u: goto label_3b2c50;
        case 0x3b2c54u: goto label_3b2c54;
        case 0x3b2c58u: goto label_3b2c58;
        case 0x3b2c5cu: goto label_3b2c5c;
        case 0x3b2c60u: goto label_3b2c60;
        case 0x3b2c64u: goto label_3b2c64;
        case 0x3b2c68u: goto label_3b2c68;
        case 0x3b2c6cu: goto label_3b2c6c;
        case 0x3b2c70u: goto label_3b2c70;
        case 0x3b2c74u: goto label_3b2c74;
        case 0x3b2c78u: goto label_3b2c78;
        case 0x3b2c7cu: goto label_3b2c7c;
        case 0x3b2c80u: goto label_3b2c80;
        case 0x3b2c84u: goto label_3b2c84;
        case 0x3b2c88u: goto label_3b2c88;
        case 0x3b2c8cu: goto label_3b2c8c;
        case 0x3b2c90u: goto label_3b2c90;
        case 0x3b2c94u: goto label_3b2c94;
        case 0x3b2c98u: goto label_3b2c98;
        case 0x3b2c9cu: goto label_3b2c9c;
        case 0x3b2ca0u: goto label_3b2ca0;
        case 0x3b2ca4u: goto label_3b2ca4;
        case 0x3b2ca8u: goto label_3b2ca8;
        case 0x3b2cacu: goto label_3b2cac;
        case 0x3b2cb0u: goto label_3b2cb0;
        case 0x3b2cb4u: goto label_3b2cb4;
        case 0x3b2cb8u: goto label_3b2cb8;
        case 0x3b2cbcu: goto label_3b2cbc;
        case 0x3b2cc0u: goto label_3b2cc0;
        case 0x3b2cc4u: goto label_3b2cc4;
        case 0x3b2cc8u: goto label_3b2cc8;
        case 0x3b2cccu: goto label_3b2ccc;
        case 0x3b2cd0u: goto label_3b2cd0;
        case 0x3b2cd4u: goto label_3b2cd4;
        case 0x3b2cd8u: goto label_3b2cd8;
        case 0x3b2cdcu: goto label_3b2cdc;
        case 0x3b2ce0u: goto label_3b2ce0;
        case 0x3b2ce4u: goto label_3b2ce4;
        case 0x3b2ce8u: goto label_3b2ce8;
        case 0x3b2cecu: goto label_3b2cec;
        case 0x3b2cf0u: goto label_3b2cf0;
        case 0x3b2cf4u: goto label_3b2cf4;
        case 0x3b2cf8u: goto label_3b2cf8;
        case 0x3b2cfcu: goto label_3b2cfc;
        case 0x3b2d00u: goto label_3b2d00;
        case 0x3b2d04u: goto label_3b2d04;
        case 0x3b2d08u: goto label_3b2d08;
        case 0x3b2d0cu: goto label_3b2d0c;
        case 0x3b2d10u: goto label_3b2d10;
        case 0x3b2d14u: goto label_3b2d14;
        case 0x3b2d18u: goto label_3b2d18;
        case 0x3b2d1cu: goto label_3b2d1c;
        case 0x3b2d20u: goto label_3b2d20;
        case 0x3b2d24u: goto label_3b2d24;
        case 0x3b2d28u: goto label_3b2d28;
        case 0x3b2d2cu: goto label_3b2d2c;
        case 0x3b2d30u: goto label_3b2d30;
        case 0x3b2d34u: goto label_3b2d34;
        case 0x3b2d38u: goto label_3b2d38;
        case 0x3b2d3cu: goto label_3b2d3c;
        case 0x3b2d40u: goto label_3b2d40;
        case 0x3b2d44u: goto label_3b2d44;
        case 0x3b2d48u: goto label_3b2d48;
        case 0x3b2d4cu: goto label_3b2d4c;
        case 0x3b2d50u: goto label_3b2d50;
        case 0x3b2d54u: goto label_3b2d54;
        case 0x3b2d58u: goto label_3b2d58;
        case 0x3b2d5cu: goto label_3b2d5c;
        case 0x3b2d60u: goto label_3b2d60;
        case 0x3b2d64u: goto label_3b2d64;
        case 0x3b2d68u: goto label_3b2d68;
        case 0x3b2d6cu: goto label_3b2d6c;
        case 0x3b2d70u: goto label_3b2d70;
        case 0x3b2d74u: goto label_3b2d74;
        case 0x3b2d78u: goto label_3b2d78;
        case 0x3b2d7cu: goto label_3b2d7c;
        case 0x3b2d80u: goto label_3b2d80;
        case 0x3b2d84u: goto label_3b2d84;
        case 0x3b2d88u: goto label_3b2d88;
        case 0x3b2d8cu: goto label_3b2d8c;
        case 0x3b2d90u: goto label_3b2d90;
        case 0x3b2d94u: goto label_3b2d94;
        case 0x3b2d98u: goto label_3b2d98;
        case 0x3b2d9cu: goto label_3b2d9c;
        case 0x3b2da0u: goto label_3b2da0;
        case 0x3b2da4u: goto label_3b2da4;
        case 0x3b2da8u: goto label_3b2da8;
        case 0x3b2dacu: goto label_3b2dac;
        case 0x3b2db0u: goto label_3b2db0;
        case 0x3b2db4u: goto label_3b2db4;
        case 0x3b2db8u: goto label_3b2db8;
        case 0x3b2dbcu: goto label_3b2dbc;
        case 0x3b2dc0u: goto label_3b2dc0;
        case 0x3b2dc4u: goto label_3b2dc4;
        case 0x3b2dc8u: goto label_3b2dc8;
        case 0x3b2dccu: goto label_3b2dcc;
        case 0x3b2dd0u: goto label_3b2dd0;
        case 0x3b2dd4u: goto label_3b2dd4;
        case 0x3b2dd8u: goto label_3b2dd8;
        case 0x3b2ddcu: goto label_3b2ddc;
        case 0x3b2de0u: goto label_3b2de0;
        case 0x3b2de4u: goto label_3b2de4;
        case 0x3b2de8u: goto label_3b2de8;
        case 0x3b2decu: goto label_3b2dec;
        case 0x3b2df0u: goto label_3b2df0;
        case 0x3b2df4u: goto label_3b2df4;
        case 0x3b2df8u: goto label_3b2df8;
        case 0x3b2dfcu: goto label_3b2dfc;
        case 0x3b2e00u: goto label_3b2e00;
        case 0x3b2e04u: goto label_3b2e04;
        case 0x3b2e08u: goto label_3b2e08;
        case 0x3b2e0cu: goto label_3b2e0c;
        case 0x3b2e10u: goto label_3b2e10;
        case 0x3b2e14u: goto label_3b2e14;
        case 0x3b2e18u: goto label_3b2e18;
        case 0x3b2e1cu: goto label_3b2e1c;
        case 0x3b2e20u: goto label_3b2e20;
        case 0x3b2e24u: goto label_3b2e24;
        case 0x3b2e28u: goto label_3b2e28;
        case 0x3b2e2cu: goto label_3b2e2c;
        case 0x3b2e30u: goto label_3b2e30;
        case 0x3b2e34u: goto label_3b2e34;
        case 0x3b2e38u: goto label_3b2e38;
        case 0x3b2e3cu: goto label_3b2e3c;
        case 0x3b2e40u: goto label_3b2e40;
        case 0x3b2e44u: goto label_3b2e44;
        case 0x3b2e48u: goto label_3b2e48;
        case 0x3b2e4cu: goto label_3b2e4c;
        case 0x3b2e50u: goto label_3b2e50;
        case 0x3b2e54u: goto label_3b2e54;
        case 0x3b2e58u: goto label_3b2e58;
        case 0x3b2e5cu: goto label_3b2e5c;
        case 0x3b2e60u: goto label_3b2e60;
        case 0x3b2e64u: goto label_3b2e64;
        case 0x3b2e68u: goto label_3b2e68;
        case 0x3b2e6cu: goto label_3b2e6c;
        case 0x3b2e70u: goto label_3b2e70;
        case 0x3b2e74u: goto label_3b2e74;
        case 0x3b2e78u: goto label_3b2e78;
        case 0x3b2e7cu: goto label_3b2e7c;
        case 0x3b2e80u: goto label_3b2e80;
        case 0x3b2e84u: goto label_3b2e84;
        case 0x3b2e88u: goto label_3b2e88;
        case 0x3b2e8cu: goto label_3b2e8c;
        case 0x3b2e90u: goto label_3b2e90;
        case 0x3b2e94u: goto label_3b2e94;
        case 0x3b2e98u: goto label_3b2e98;
        case 0x3b2e9cu: goto label_3b2e9c;
        case 0x3b2ea0u: goto label_3b2ea0;
        case 0x3b2ea4u: goto label_3b2ea4;
        case 0x3b2ea8u: goto label_3b2ea8;
        case 0x3b2eacu: goto label_3b2eac;
        case 0x3b2eb0u: goto label_3b2eb0;
        case 0x3b2eb4u: goto label_3b2eb4;
        case 0x3b2eb8u: goto label_3b2eb8;
        case 0x3b2ebcu: goto label_3b2ebc;
        case 0x3b2ec0u: goto label_3b2ec0;
        case 0x3b2ec4u: goto label_3b2ec4;
        case 0x3b2ec8u: goto label_3b2ec8;
        case 0x3b2eccu: goto label_3b2ecc;
        case 0x3b2ed0u: goto label_3b2ed0;
        case 0x3b2ed4u: goto label_3b2ed4;
        case 0x3b2ed8u: goto label_3b2ed8;
        case 0x3b2edcu: goto label_3b2edc;
        case 0x3b2ee0u: goto label_3b2ee0;
        case 0x3b2ee4u: goto label_3b2ee4;
        case 0x3b2ee8u: goto label_3b2ee8;
        case 0x3b2eecu: goto label_3b2eec;
        case 0x3b2ef0u: goto label_3b2ef0;
        case 0x3b2ef4u: goto label_3b2ef4;
        case 0x3b2ef8u: goto label_3b2ef8;
        case 0x3b2efcu: goto label_3b2efc;
        case 0x3b2f00u: goto label_3b2f00;
        case 0x3b2f04u: goto label_3b2f04;
        case 0x3b2f08u: goto label_3b2f08;
        case 0x3b2f0cu: goto label_3b2f0c;
        case 0x3b2f10u: goto label_3b2f10;
        case 0x3b2f14u: goto label_3b2f14;
        case 0x3b2f18u: goto label_3b2f18;
        case 0x3b2f1cu: goto label_3b2f1c;
        case 0x3b2f20u: goto label_3b2f20;
        case 0x3b2f24u: goto label_3b2f24;
        case 0x3b2f28u: goto label_3b2f28;
        case 0x3b2f2cu: goto label_3b2f2c;
        case 0x3b2f30u: goto label_3b2f30;
        case 0x3b2f34u: goto label_3b2f34;
        case 0x3b2f38u: goto label_3b2f38;
        case 0x3b2f3cu: goto label_3b2f3c;
        default: break;
    }

    ctx->pc = 0x3b2180u;

label_3b2180:
    // 0x3b2180: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x3b2180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_3b2184:
    // 0x3b2184: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x3b2184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
label_3b2188:
    // 0x3b2188: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x3b2188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
label_3b218c:
    // 0x3b218c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b218cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b2190:
    // 0x3b2190: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x3b2190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
label_3b2194:
    // 0x3b2194: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3b2194u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b2198:
    // 0x3b2198: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x3b2198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
label_3b219c:
    // 0x3b219c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b219cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b21a0:
    // 0x3b21a0: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x3b21a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
label_3b21a4:
    // 0x3b21a4: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x3b21a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
label_3b21a8:
    // 0x3b21a8: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x3b21a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
label_3b21ac:
    // 0x3b21ac: 0x7fbe00f0  sq          $fp, 0xF0($sp)
    ctx->pc = 0x3b21acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 30));
label_3b21b0:
    // 0x3b21b0: 0xe7ba01b0  swc1        $f26, 0x1B0($sp)
    ctx->pc = 0x3b21b0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_3b21b4:
    // 0x3b21b4: 0xe7b901a8  swc1        $f25, 0x1A8($sp)
    ctx->pc = 0x3b21b4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_3b21b8:
    // 0x3b21b8: 0xe7b801a0  swc1        $f24, 0x1A0($sp)
    ctx->pc = 0x3b21b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_3b21bc:
    // 0x3b21bc: 0xe7b70198  swc1        $f23, 0x198($sp)
    ctx->pc = 0x3b21bcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_3b21c0:
    // 0x3b21c0: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x3b21c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_3b21c4:
    // 0x3b21c4: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x3b21c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_3b21c8:
    // 0x3b21c8: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x3b21c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_3b21cc:
    // 0x3b21cc: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x3b21ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
label_3b21d0:
    // 0x3b21d0: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x3b21d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
label_3b21d4:
    // 0x3b21d4: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x3b21d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_3b21d8:
    // 0x3b21d8: 0xc0ea12a  jal         func_3A84A8
label_3b21dc:
    if (ctx->pc == 0x3B21DCu) {
        ctx->pc = 0x3B21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B21D8u;
        // 0x3b21dc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B21E0u;
        goto label_3b21e0;
    }
    ctx->pc = 0x3B21D8u;
    SET_GPR_U32(ctx, 31, 0x3B21E0u);
    ctx->pc = 0x3B21DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B21D8u;
    // 0x3b21dc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B21D8u, 0x3B21E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B21E0u;
label_3b21e0:
    // 0x3b21e0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3b21e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3b21e4:
    // 0x3b21e4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b21e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b21e8:
    // 0x3b21e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3b21e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3b21ec:
    // 0x3b21ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b21ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b21f0:
    // 0x3b21f0: 0x247eb8b8  addiu       $fp, $v1, -0x4748
    ctx->pc = 0x3b21f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3b21f4:
    // 0x3b21f4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3b21f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3b21f8:
    // 0x3b21f8: 0xc0ea12a  jal         func_3A84A8
label_3b21fc:
    if (ctx->pc == 0x3B21FCu) {
        ctx->pc = 0x3B21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B21F8u;
        // 0x3b21fc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2200u;
        goto label_3b2200;
    }
    ctx->pc = 0x3B21F8u;
    SET_GPR_U32(ctx, 31, 0x3B2200u);
    ctx->pc = 0x3B21FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B21F8u;
    // 0x3b21fc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B21F8u, 0x3B2200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2200u;
label_3b2200:
    // 0x3b2200: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3b2200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3b2204:
    // 0x3b2204: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3b2204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3b2208:
    // 0x3b2208: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b2208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b220c:
    // 0x3b220c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b220cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b2210:
    // 0x3b2210: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b2210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b2214:
    // 0x3b2214: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3b2214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3b2218:
    // 0x3b2218: 0xc0ea146  jal         func_3A8518
label_3b221c:
    if (ctx->pc == 0x3B221Cu) {
        ctx->pc = 0x3B221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2218u;
        // 0x3b221c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2220u;
        goto label_3b2220;
    }
    ctx->pc = 0x3B2218u;
    SET_GPR_U32(ctx, 31, 0x3B2220u);
    ctx->pc = 0x3B221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2218u;
    // 0x3b221c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B2218u, 0x3B2220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2220u;
label_3b2220:
    // 0x3b2220: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x3b2220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
label_3b2224:
    // 0x3b2224: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3b2224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3b2228:
    // 0x3b2228: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3b2228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3b222c:
    // 0x3b222c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3b222cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3b2230:
    // 0x3b2230: 0xc0ea146  jal         func_3A8518
label_3b2234:
    if (ctx->pc == 0x3B2234u) {
        ctx->pc = 0x3B2234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2230u;
        // 0x3b2234: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2238u;
        goto label_3b2238;
    }
    ctx->pc = 0x3B2230u;
    SET_GPR_U32(ctx, 31, 0x3B2238u);
    ctx->pc = 0x3B2234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2230u;
    // 0x3b2234: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B2230u, 0x3B2238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2238u;
label_3b2238:
    // 0x3b2238: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3b2238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3b223c:
    // 0x3b223c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3b223cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3b2240:
    // 0x3b2240: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b2240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b2244:
    // 0x3b2244: 0xc0ea14c  jal         func_3A8530
label_3b2248:
    if (ctx->pc == 0x3B2248u) {
        ctx->pc = 0x3B2248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2244u;
        // 0x3b2248: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B224Cu;
        goto label_3b224c;
    }
    ctx->pc = 0x3B2244u;
    SET_GPR_U32(ctx, 31, 0x3B224Cu);
    ctx->pc = 0x3B2248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2244u;
    // 0x3b2248: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B2244u, 0x3B224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B224Cu;
label_3b224c:
    // 0x3b224c: 0x3c014070  lui         $at, 0x4070
    ctx->pc = 0x3b224cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16496 << 16));
label_3b2250:
    // 0x3b2250: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3b2250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3b2254:
    // 0x3b2254: 0xc0ea14c  jal         func_3A8530
label_3b2258:
    if (ctx->pc == 0x3B2258u) {
        ctx->pc = 0x3B2258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2254u;
        // 0x3b2258: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B225Cu;
        goto label_3b225c;
    }
    ctx->pc = 0x3B2254u;
    SET_GPR_U32(ctx, 31, 0x3B225Cu);
    ctx->pc = 0x3B2258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2254u;
    // 0x3b2258: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B2254u, 0x3B225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B225Cu;
label_3b225c:
    // 0x3b225c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x3b225cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3b2260:
    // 0x3b2260: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3b2260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3b2264:
    // 0x3b2264: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x3b2264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_3b2268:
    // 0x3b2268: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x3b2268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3b226c:
    // 0x3b226c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3b226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3b2270:
    // 0x3b2270: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3b2270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b2274:
    // 0x3b2274: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x3b2274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3b2278:
    // 0x3b2278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b2278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b227c:
    // 0x3b227c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x3b227cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_3b2280:
    // 0x3b2280: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x3b2280u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b2284:
    // 0x3b2284: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3b2284u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3b2288:
    // 0x3b2288: 0xc0e90ca  jal         func_3A4328
label_3b228c:
    if (ctx->pc == 0x3B228Cu) {
        ctx->pc = 0x3B228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2288u;
        // 0x3b228c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2290u;
        goto label_3b2290;
    }
    ctx->pc = 0x3B2288u;
    SET_GPR_U32(ctx, 31, 0x3B2290u);
    ctx->pc = 0x3B228Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2288u;
    // 0x3b228c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B2288u, 0x3B2290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2290u;
label_3b2290:
    // 0x3b2290: 0x7ba40060  lq          $a0, 0x60($sp)
    ctx->pc = 0x3b2290u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b2294:
    // 0x3b2294: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b2294u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3b2298:
    // 0x3b2298: 0x7aa30020  lq          $v1, 0x20($s5)
    ctx->pc = 0x3b2298u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 32)));
label_3b229c:
    // 0x3b229c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b229cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b22a0:
    // 0x3b22a0: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x3b22a0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b22a4:
    // 0x3b22a4: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x3b22a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_3b22a8:
    // 0x3b22a8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x3b22a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3b22ac:
    // 0x3b22ac: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3b22acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b22b0:
    // 0x3b22b0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3b22b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b22b4:
    // 0x3b22b4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3b22b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b22b8:
    // 0x3b22b8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3b22b8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3b22bc:
    // 0x3b22bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x3b22bcu;
    // VWAITQ (Q already resolved in this runtime)
label_3b22c0:
    // 0x3b22c0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3b22c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b22c4:
    // 0x3b22c4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3b22c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b22c8:
    // 0x3b22c8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3b22c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3b22cc:
    // 0x3b22cc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b22ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b22d0:
    // 0x3b22d0: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x3b22d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
label_3b22d4:
    // 0x3b22d4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3b22d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3b22d8:
    // 0x3b22d8: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b22d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b22dc:
    // 0x3b22dc: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b22dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b22e0:
    // 0x3b22e0: 0xc0cd518  jal         func_335460
label_3b22e4:
    if (ctx->pc == 0x3B22E4u) {
        ctx->pc = 0x3B22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B22E0u;
        // 0x3b22e4: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B22E8u;
        goto label_3b22e8;
    }
    ctx->pc = 0x3B22E0u;
    SET_GPR_U32(ctx, 31, 0x3B22E8u);
    ctx->pc = 0x3B22E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B22E0u;
    // 0x3b22e4: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B22E0u, 0x3B22E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B22E8u;
label_3b22e8:
    // 0x3b22e8: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x3b22e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b22ec:
    // 0x3b22ec: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3b22ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b22f0:
    // 0x3b22f0: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x3b22f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b22f4:
    // 0x3b22f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b22f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b22f8:
    // 0x3b22f8: 0xe7b60084  swc1        $f22, 0x84($sp)
    ctx->pc = 0x3b22f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b22fc:
    // 0x3b22fc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3b22fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3b2300:
    // 0x3b2300: 0xe697000c  swc1        $f23, 0xC($s4)
    ctx->pc = 0x3b2300u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3b2304:
    // 0x3b2304: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b2304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b2308:
    // 0x3b2308: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b2308u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b230c:
    // 0x3b230c: 0xc136b18  jal         func_4DAC60
label_3b2310:
    if (ctx->pc == 0x3B2310u) {
        ctx->pc = 0x3B2310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B230Cu;
        // 0x3b2310: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2314u;
        goto label_3b2314;
    }
    ctx->pc = 0x3B230Cu;
    SET_GPR_U32(ctx, 31, 0x3B2314u);
    ctx->pc = 0x3B2310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B230Cu;
    // 0x3b2310: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B230Cu, 0x3B2314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2314u;
label_3b2314:
    // 0x3b2314: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b2314u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b2318:
    // 0x3b2318: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b2318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b231c:
    // 0x3b231c: 0x34a56964  ori         $a1, $a1, 0x6964
    ctx->pc = 0x3b231cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
label_3b2320:
    // 0x3b2320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b2320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b2324:
    // 0x3b2324: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b2324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b2328:
    // 0x3b2328: 0xc0f15f6  jal         func_3C57D8
label_3b232c:
    if (ctx->pc == 0x3B232Cu) {
        ctx->pc = 0x3B232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2328u;
        // 0x3b232c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2330u;
        goto label_3b2330;
    }
    ctx->pc = 0x3B2328u;
    SET_GPR_U32(ctx, 31, 0x3B2330u);
    ctx->pc = 0x3B232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2328u;
    // 0x3b232c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B2328u, 0x3B2330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2330u;
label_3b2330:
    // 0x3b2330: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3b2330u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_3b2334:
    // 0x3b2334: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3b2334u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3b2338:
    // 0x3b2338: 0xc0cd518  jal         func_335460
label_3b233c:
    if (ctx->pc == 0x3B233Cu) {
        ctx->pc = 0x3B233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2338u;
        // 0x3b233c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2340u;
        goto label_3b2340;
    }
    ctx->pc = 0x3B2338u;
    SET_GPR_U32(ctx, 31, 0x3B2340u);
    ctx->pc = 0x3B233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2338u;
    // 0x3b233c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B2338u, 0x3B2340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2340u;
label_3b2340:
    // 0x3b2340: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3b2340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b2344:
    // 0x3b2344: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b2344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b2348:
    // 0x3b2348: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x3b2348u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b234c:
    // 0x3b234c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3b234cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3b2350:
    // 0x3b2350: 0xe7b60084  swc1        $f22, 0x84($sp)
    ctx->pc = 0x3b2350u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b2354:
    // 0x3b2354: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b2354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b2358:
    // 0x3b2358: 0xe697000c  swc1        $f23, 0xC($s4)
    ctx->pc = 0x3b2358u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3b235c:
    // 0x3b235c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b235cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b2360:
    // 0x3b2360: 0xc136b18  jal         func_4DAC60
label_3b2364:
    if (ctx->pc == 0x3B2364u) {
        ctx->pc = 0x3B2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2360u;
        // 0x3b2364: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2368u;
        goto label_3b2368;
    }
    ctx->pc = 0x3B2360u;
    SET_GPR_U32(ctx, 31, 0x3B2368u);
    ctx->pc = 0x3B2364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2360u;
    // 0x3b2364: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B2360u, 0x3B2368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2368u;
label_3b2368:
    // 0x3b2368: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b2368u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b236c:
    // 0x3b236c: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b236cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b2370:
    // 0x3b2370: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x3b2370u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_3b2374:
    // 0x3b2374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b2374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b2378:
    // 0x3b2378: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b2378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b237c:
    // 0x3b237c: 0xc0f15f6  jal         func_3C57D8
label_3b2380:
    if (ctx->pc == 0x3B2380u) {
        ctx->pc = 0x3B2380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B237Cu;
        // 0x3b2380: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2384u;
        goto label_3b2384;
    }
    ctx->pc = 0x3B237Cu;
    SET_GPR_U32(ctx, 31, 0x3B2384u);
    ctx->pc = 0x3B2380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B237Cu;
    // 0x3b2380: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B237Cu, 0x3B2384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2384u;
label_3b2384:
    // 0x3b2384: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x3b2384u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b2388:
    // 0x3b2388: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b2388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b238c:
    // 0x3b238c: 0xe7b60084  swc1        $f22, 0x84($sp)
    ctx->pc = 0x3b238cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b2390:
    // 0x3b2390: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3b2390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3b2394:
    // 0x3b2394: 0xe6940008  swc1        $f20, 0x8($s4)
    ctx->pc = 0x3b2394u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_3b2398:
    // 0x3b2398: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b2398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b239c:
    // 0x3b239c: 0xe697000c  swc1        $f23, 0xC($s4)
    ctx->pc = 0x3b239cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3b23a0:
    // 0x3b23a0: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b23a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b23a4:
    // 0x3b23a4: 0xc136b18  jal         func_4DAC60
label_3b23a8:
    if (ctx->pc == 0x3B23A8u) {
        ctx->pc = 0x3B23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B23A4u;
        // 0x3b23a8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B23ACu;
        goto label_3b23ac;
    }
    ctx->pc = 0x3B23A4u;
    SET_GPR_U32(ctx, 31, 0x3B23ACu);
    ctx->pc = 0x3B23A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B23A4u;
    // 0x3b23a8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B23A4u, 0x3B23ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B23ACu;
label_3b23ac:
    // 0x3b23ac: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b23acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b23b0:
    // 0x3b23b0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3b23b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3b23b4:
    // 0x3b23b4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3b23b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3b23b8:
    // 0x3b23b8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b23b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b23bc:
    // 0x3b23bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b23bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b23c0:
    // 0x3b23c0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b23c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b23c4:
    // 0x3b23c4: 0xc136b24  jal         func_4DAC90
label_3b23c8:
    if (ctx->pc == 0x3B23C8u) {
        ctx->pc = 0x3B23C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B23C4u;
        // 0x3b23c8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B23CCu;
        goto label_3b23cc;
    }
    ctx->pc = 0x3B23C4u;
    SET_GPR_U32(ctx, 31, 0x3B23CCu);
    ctx->pc = 0x3B23C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B23C4u;
    // 0x3b23c8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B23C4u, 0x3B23CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B23CCu;
label_3b23cc:
    // 0x3b23cc: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b23ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b23d0:
    // 0x3b23d0: 0x3c075040  lui         $a3, 0x5040
    ctx->pc = 0x3b23d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20544 << 16));
label_3b23d4:
    // 0x3b23d4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3b23d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_3b23d8:
    // 0x3b23d8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3b23d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3b23dc:
    // 0x3b23dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b23dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b23e0:
    // 0x3b23e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b23e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b23e4:
    // 0x3b23e4: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x3b23e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_3b23e8:
    // 0x3b23e8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3b23e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3b23ec:
    // 0x3b23ec: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3b23ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3b23f0:
    // 0x3b23f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b23f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b23f4:
    // 0x3b23f4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3b23f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3b23f8:
    // 0x3b23f8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3b23f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3b23fc:
    // 0x3b23fc: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3b23fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_3b2400:
    // 0x3b2400: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b2400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b2404:
    // 0x3b2404: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3b2404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3b2408:
    // 0x3b2408: 0x34e739ff  ori         $a3, $a3, 0x39FF
    ctx->pc = 0x3b2408u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)14847);
label_3b240c:
    // 0x3b240c: 0xc0f16c0  jal         func_3C5B00
label_3b2410:
    if (ctx->pc == 0x3B2410u) {
        ctx->pc = 0x3B2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B240Cu;
        // 0x3b2410: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2414u;
        goto label_3b2414;
    }
    ctx->pc = 0x3B240Cu;
    SET_GPR_U32(ctx, 31, 0x3B2414u);
    ctx->pc = 0x3B2410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B240Cu;
    // 0x3b2410: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3B240Cu, 0x3B2414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2414u;
label_3b2414:
    // 0x3b2414: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x3b2414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3b2418:
    // 0x3b2418: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3b2418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3b241c:
    // 0x3b241c: 0x1c4002b2  bgtz        $v0, . + 4 + (0x2B2 << 2)
label_3b2420:
    if (ctx->pc == 0x3B2420u) {
        ctx->pc = 0x3B2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B241Cu;
        // 0x3b2420: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2424u;
        goto label_3b2424;
    }
    ctx->pc = 0x3B241Cu;
    {
        const bool branch_taken_0x3b241c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3B2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B241Cu;
        // 0x3b2420: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b241c) {
            ctx->pc = 0x3B2EE8u;
            goto label_3b2ee8;
        }
    }
    ctx->pc = 0x3B2424u;
label_3b2424:
    // 0x3b2424: 0x8ea400d8  lw          $a0, 0xD8($s5)
    ctx->pc = 0x3b2424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
label_3b2428:
    // 0x3b2428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b2428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b242c:
    // 0x3b242c: 0xc0e91b2  jal         func_3A46C8
label_3b2430:
    if (ctx->pc == 0x3B2430u) {
        ctx->pc = 0x3B2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B242Cu;
        // 0x3b2430: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2434u;
        goto label_3b2434;
    }
    ctx->pc = 0x3B242Cu;
    SET_GPR_U32(ctx, 31, 0x3B2434u);
    ctx->pc = 0x3B2430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B242Cu;
    // 0x3b2430: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3B242Cu, 0x3B2434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2434u;
label_3b2434:
    // 0x3b2434: 0xc0e91b2  jal         func_3A46C8
label_3b2438:
    if (ctx->pc == 0x3B2438u) {
        ctx->pc = 0x3B2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2434u;
        // 0x3b2438: 0x8ea400dc  lw          $a0, 0xDC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B243Cu;
        goto label_3b243c;
    }
    ctx->pc = 0x3B2434u;
    SET_GPR_U32(ctx, 31, 0x3B243Cu);
    ctx->pc = 0x3B2438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2434u;
    // 0x3b2438: 0x8ea400dc  lw          $a0, 0xDC($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3B2434u, 0x3B243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B243Cu;
label_3b243c:
    // 0x3b243c: 0xc0e92c0  jal         func_3A4B00
label_3b2440:
    if (ctx->pc == 0x3B2440u) {
        ctx->pc = 0x3B2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B243Cu;
        // 0x3b2440: 0x8ea400e0  lw          $a0, 0xE0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2444u;
        goto label_3b2444;
    }
    ctx->pc = 0x3B243Cu;
    SET_GPR_U32(ctx, 31, 0x3B2444u);
    ctx->pc = 0x3B2440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B243Cu;
    // 0x3b2440: 0x8ea400e0  lw          $a0, 0xE0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B00u, 0x3B243Cu, 0x3B2444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2444u;
label_3b2444:
    // 0x3b2444: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3b2444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3b2448:
    // 0x3b2448: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b2448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b244c:
    // 0x3b244c: 0xc0e9666  jal         func_3A5998
label_3b2450:
    if (ctx->pc == 0x3B2450u) {
        ctx->pc = 0x3B2450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B244Cu;
        // 0x3b2450: 0x24a52180  addiu       $a1, $a1, 0x2180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2454u;
        goto label_3b2454;
    }
    ctx->pc = 0x3B244Cu;
    SET_GPR_U32(ctx, 31, 0x3B2454u);
    ctx->pc = 0x3B2450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B244Cu;
    // 0x3b2450: 0x24a52180  addiu       $a1, $a1, 0x2180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3B244Cu, 0x3B2454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2454u;
label_3b2454:
    // 0x3b2454: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3b2458:
    if (ctx->pc == 0x3B2458u) {
        ctx->pc = 0x3B2458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2454u;
        // 0x3b2458: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B245Cu;
        goto label_3b245c;
    }
    ctx->pc = 0x3B2454u;
    {
        const bool branch_taken_0x3b2454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2454u;
        // 0x3b2458: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2454) {
            ctx->pc = 0x3B24A0u;
            goto label_3b24a0;
        }
    }
    ctx->pc = 0x3B245Cu;
label_3b245c:
    // 0x3b245c: 0x3c058555  lui         $a1, 0x8555
    ctx->pc = 0x3b245cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34133 << 16));
label_3b2460:
    // 0x3b2460: 0x34a59495  ori         $a1, $a1, 0x9495
    ctx->pc = 0x3b2460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38037);
label_3b2464:
    // 0x3b2464: 0xc0e9ba2  jal         func_3A6E88
label_3b2468:
    if (ctx->pc == 0x3B2468u) {
        ctx->pc = 0x3B2468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2464u;
        // 0x3b2468: 0xafa000d4  sw          $zero, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B246Cu;
        goto label_3b246c;
    }
    ctx->pc = 0x3B2464u;
    SET_GPR_U32(ctx, 31, 0x3B246Cu);
    ctx->pc = 0x3B2468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2464u;
    // 0x3b2468: 0xafa000d4  sw          $zero, 0xD4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E88u, 0x3B2464u, 0x3B246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B246Cu;
label_3b246c:
    // 0x3b246c: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x3b246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3b2470:
    // 0x3b2470: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3b2470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3b2474:
    // 0x3b2474: 0x3c057f97  lui         $a1, 0x7F97
    ctx->pc = 0x3b2474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32663 << 16));
label_3b2478:
    // 0x3b2478: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b2478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b247c:
    // 0x3b247c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b247cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3b2480:
    // 0x3b2480: 0x34a5c350  ori         $a1, $a1, 0xC350
    ctx->pc = 0x3b2480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50000);
label_3b2484:
    // 0x3b2484: 0xc0e9132  jal         func_3A44C8
label_3b2488:
    if (ctx->pc == 0x3B2488u) {
        ctx->pc = 0x3B2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2484u;
        // 0x3b2488: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B248Cu;
        goto label_3b248c;
    }
    ctx->pc = 0x3B2484u;
    SET_GPR_U32(ctx, 31, 0x3B248Cu);
    ctx->pc = 0x3B2488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2484u;
    // 0x3b2488: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3B2484u, 0x3B248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B248Cu;
label_3b248c:
    // 0x3b248c: 0xaea200c4  sw          $v0, 0xC4($s5)
    ctx->pc = 0x3b248cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 2));
label_3b2490:
    // 0x3b2490: 0xc0e94d0  jal         func_3A5340
label_3b2494:
    if (ctx->pc == 0x3B2494u) {
        ctx->pc = 0x3B2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2490u;
        // 0x3b2494: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2498u;
        goto label_3b2498;
    }
    ctx->pc = 0x3B2490u;
    SET_GPR_U32(ctx, 31, 0x3B2498u);
    ctx->pc = 0x3B2494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2490u;
    // 0x3b2494: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5340u, 0x3B2490u, 0x3B2498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2498u;
label_3b2498:
    // 0x3b2498: 0x10000262  b           . + 4 + (0x262 << 2)
label_3b249c:
    if (ctx->pc == 0x3B249Cu) {
        ctx->pc = 0x3B249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2498u;
        // 0x3b249c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B24A0u;
        goto label_3b24a0;
    }
    ctx->pc = 0x3B2498u;
    {
        const bool branch_taken_0x3b2498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2498u;
        // 0x3b249c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2498) {
            ctx->pc = 0x3B2E24u;
            goto label_3b2e24;
        }
    }
    ctx->pc = 0x3B24A0u;
label_3b24a0:
    // 0x3b24a0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3b24a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3b24a4:
    // 0x3b24a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b24a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b24a8:
    // 0x3b24a8: 0xc0e9666  jal         func_3A5998
label_3b24ac:
    if (ctx->pc == 0x3B24ACu) {
        ctx->pc = 0x3B24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B24A8u;
        // 0x3b24ac: 0x24a52190  addiu       $a1, $a1, 0x2190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B24B0u;
        goto label_3b24b0;
    }
    ctx->pc = 0x3B24A8u;
    SET_GPR_U32(ctx, 31, 0x3B24B0u);
    ctx->pc = 0x3B24ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B24A8u;
    // 0x3b24ac: 0x24a52190  addiu       $a1, $a1, 0x2190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3B24A8u, 0x3B24B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B24B0u;
label_3b24b0:
    // 0x3b24b0: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
label_3b24b4:
    if (ctx->pc == 0x3B24B4u) {
        ctx->pc = 0x3B24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B24B0u;
        // 0x3b24b4: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B24B8u;
        goto label_3b24b8;
    }
    ctx->pc = 0x3B24B0u;
    {
        const bool branch_taken_0x3b24b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B24B0u;
        // 0x3b24b4: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b24b0) {
            ctx->pc = 0x3B2670u;
            goto label_3b2670;
        }
    }
    ctx->pc = 0x3B24B8u;
label_3b24b8:
    // 0x3b24b8: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3b24b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b24bc:
    // 0x3b24bc: 0x24841720  addiu       $a0, $a0, 0x1720
    ctx->pc = 0x3b24bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5920));
label_3b24c0:
    // 0x3b24c0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3b24c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3b24c4:
    // 0x3b24c4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3b24c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b24c8:
    // 0x3b24c8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3b24c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b24cc:
    // 0x3b24cc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b24ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b24d0:
    // 0x3b24d0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b24d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b24d4:
    // 0x3b24d4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b24d4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b24d8:
    // 0x3b24d8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b24d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b24dc:
    // 0x3b24dc: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b24dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b24e0:
    // 0x3b24e0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b24e0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b24e4:
    // 0x3b24e4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b24e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b24e8:
    // 0x3b24e8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b24e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b24ec:
    // 0x3b24ec: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b24ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b24f0:
    // 0x3b24f0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b24f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b24f4:
    // 0x3b24f4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b24f4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b24f8:
    // 0x3b24f8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b24f8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b24fc:
    // 0x3b24fc: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b24fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b2500:
    // 0x3b2500: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b2500u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b2504:
    // 0x3b2504: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3b2504u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b2508:
    // 0x3b2508: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3b2508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3b250c:
    // 0x3b250c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3b250cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3b2510:
    // 0x3b2510: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b2510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b2514:
    // 0x3b2514: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b2514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3b2518:
    // 0x3b2518: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3b2518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3b251c:
    // 0x3b251c: 0xc136b18  jal         func_4DAC60
label_3b2520:
    if (ctx->pc == 0x3B2520u) {
        ctx->pc = 0x3B2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B251Cu;
        // 0x3b2520: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2524u;
        goto label_3b2524;
    }
    ctx->pc = 0x3B251Cu;
    SET_GPR_U32(ctx, 31, 0x3B2524u);
    ctx->pc = 0x3B2520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B251Cu;
    // 0x3b2520: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B251Cu, 0x3B2524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2524u;
label_3b2524:
    // 0x3b2524: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b2524u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b2528:
    // 0x3b2528: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b2528u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b252c:
    // 0x3b252c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b252cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3b2530:
    // 0x3b2530: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b2530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b2534:
    // 0x3b2534: 0xc0cd518  jal         func_335460
label_3b2538:
    if (ctx->pc == 0x3B2538u) {
        ctx->pc = 0x3B2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2534u;
        // 0x3b2538: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B253Cu;
        goto label_3b253c;
    }
    ctx->pc = 0x3B2534u;
    SET_GPR_U32(ctx, 31, 0x3B253Cu);
    ctx->pc = 0x3B2538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2534u;
    // 0x3b2538: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B2534u, 0x3B253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B253Cu;
label_3b253c:
    // 0x3b253c: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x3b253cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b2540:
    // 0x3b2540: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x3b2540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3b2544:
    // 0x3b2544: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x3b2544u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3b2548:
    // 0x3b2548: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3b2548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3b254c:
    // 0x3b254c: 0xe7b600a4  swc1        $f22, 0xA4($sp)
    ctx->pc = 0x3b254cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3b2550:
    // 0x3b2550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b2550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b2554:
    // 0x3b2554: 0xe617000c  swc1        $f23, 0xC($s0)
    ctx->pc = 0x3b2554u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3b2558:
    // 0x3b2558: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x3b2558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3b255c:
    // 0x3b255c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b255cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b2560:
    // 0x3b2560: 0xc136b18  jal         func_4DAC60
label_3b2564:
    if (ctx->pc == 0x3B2564u) {
        ctx->pc = 0x3B2564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2560u;
        // 0x3b2564: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2568u;
        goto label_3b2568;
    }
    ctx->pc = 0x3B2560u;
    SET_GPR_U32(ctx, 31, 0x3B2568u);
    ctx->pc = 0x3B2564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2560u;
    // 0x3b2564: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B2560u, 0x3B2568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2568u;
label_3b2568:
    // 0x3b2568: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b2568u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b256c:
    // 0x3b256c: 0x3c058555  lui         $a1, 0x8555
    ctx->pc = 0x3b256cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34133 << 16));
label_3b2570:
    // 0x3b2570: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b2570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b2574:
    // 0x3b2574: 0x34a59495  ori         $a1, $a1, 0x9495
    ctx->pc = 0x3b2574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38037);
label_3b2578:
    // 0x3b2578: 0xc0e9ba2  jal         func_3A6E88
label_3b257c:
    if (ctx->pc == 0x3B257Cu) {
        ctx->pc = 0x3B257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2578u;
        // 0x3b257c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2580u;
        goto label_3b2580;
    }
    ctx->pc = 0x3B2578u;
    SET_GPR_U32(ctx, 31, 0x3B2580u);
    ctx->pc = 0x3B257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2578u;
    // 0x3b257c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E88u, 0x3B2578u, 0x3B2580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2580u;
label_3b2580:
    // 0x3b2580: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3b2580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3b2584:
    // 0x3b2584: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b2584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2588:
    // 0x3b2588: 0xe7b600a4  swc1        $f22, 0xA4($sp)
    ctx->pc = 0x3b2588u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3b258c:
    // 0x3b258c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3b258cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3b2590:
    // 0x3b2590: 0xe7b600a8  swc1        $f22, 0xA8($sp)
    ctx->pc = 0x3b2590u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3b2594:
    // 0x3b2594: 0xe617000c  swc1        $f23, 0xC($s0)
    ctx->pc = 0x3b2594u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3b2598:
    // 0x3b2598: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3b2598u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b259c:
    // 0x3b259c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3b259cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b25a0:
    // 0x3b25a0: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b25a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3b25a4:
    // 0x3b25a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b25a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b25a8:
    // 0x3b25a8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b25a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b25ac:
    // 0x3b25ac: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b25acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b25b0:
    // 0x3b25b0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b25b0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b25b4:
    // 0x3b25b4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b25b4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b25b8:
    // 0x3b25b8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b25b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b25bc:
    // 0x3b25bc: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b25bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b25c0:
    // 0x3b25c0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b25c0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b25c4:
    // 0x3b25c4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b25c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b25c8:
    // 0x3b25c8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b25c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b25cc:
    // 0x3b25cc: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b25ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b25d0:
    // 0x3b25d0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b25d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b25d4:
    // 0x3b25d4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b25d4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b25d8:
    // 0x3b25d8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b25d8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b25dc:
    // 0x3b25dc: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b25dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b25e0:
    // 0x3b25e0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b25e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b25e4:
    // 0x3b25e4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b25e4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b25e8:
    // 0x3b25e8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b25e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b25ec:
    // 0x3b25ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b25ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b25f0:
    // 0x3b25f0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3b25f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3b25f4:
    // 0x3b25f4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b25f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b25f8:
    // 0x3b25f8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3b25f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3b25fc:
    // 0x3b25fc: 0xc136b18  jal         func_4DAC60
label_3b2600:
    if (ctx->pc == 0x3B2600u) {
        ctx->pc = 0x3B2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B25FCu;
        // 0x3b2600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2604u;
        goto label_3b2604;
    }
    ctx->pc = 0x3B25FCu;
    SET_GPR_U32(ctx, 31, 0x3B2604u);
    ctx->pc = 0x3B2600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B25FCu;
    // 0x3b2600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B25FCu, 0x3B2604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2604u;
label_3b2604:
    // 0x3b2604: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b2604u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b2608:
    // 0x3b2608: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b2608u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3b260c:
    // 0x3b260c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b260cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b2610:
    // 0x3b2610: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b2610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b2614:
    // 0x3b2614: 0xc0cd518  jal         func_335460
label_3b2618:
    if (ctx->pc == 0x3B2618u) {
        ctx->pc = 0x3B2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2614u;
        // 0x3b2618: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B261Cu;
        goto label_3b261c;
    }
    ctx->pc = 0x3B2614u;
    SET_GPR_U32(ctx, 31, 0x3B261Cu);
    ctx->pc = 0x3B2618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2614u;
    // 0x3b2618: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B2614u, 0x3B261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B261Cu;
label_3b261c:
    // 0x3b261c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x3b261cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3b2620:
    // 0x3b2620: 0xe7b600b4  swc1        $f22, 0xB4($sp)
    ctx->pc = 0x3b2620u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3b2624:
    // 0x3b2624: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x3b2624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3b2628:
    // 0x3b2628: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3b2628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3b262c:
    // 0x3b262c: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x3b262cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3b2630:
    // 0x3b2630: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3b2630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3b2634:
    // 0x3b2634: 0xe477000c  swc1        $f23, 0xC($v1)
    ctx->pc = 0x3b2634u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3b2638:
    // 0x3b2638: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b2638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b263c:
    // 0x3b263c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3b263cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b2640:
    // 0x3b2640: 0xc136b18  jal         func_4DAC60
label_3b2644:
    if (ctx->pc == 0x3B2644u) {
        ctx->pc = 0x3B2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2640u;
        // 0x3b2644: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2648u;
        goto label_3b2648;
    }
    ctx->pc = 0x3B2640u;
    SET_GPR_U32(ctx, 31, 0x3B2648u);
    ctx->pc = 0x3B2644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2640u;
    // 0x3b2644: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B2640u, 0x3B2648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2648u;
label_3b2648:
    // 0x3b2648: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3b2648u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b264c:
    // 0x3b264c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b264cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b2650:
    // 0x3b2650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b2650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b2654:
    // 0x3b2654: 0xc0e9ba2  jal         func_3A6E88
label_3b2658:
    if (ctx->pc == 0x3B2658u) {
        ctx->pc = 0x3B2658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2654u;
        // 0x3b2658: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B265Cu;
        goto label_3b265c;
    }
    ctx->pc = 0x3B2654u;
    SET_GPR_U32(ctx, 31, 0x3B265Cu);
    ctx->pc = 0x3B2658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2654u;
    // 0x3b2658: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E88u, 0x3B2654u, 0x3B265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B265Cu;
label_3b265c:
    // 0x3b265c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b265cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b2660:
    // 0x3b2660: 0xc0e9ba2  jal         func_3A6E88
label_3b2664:
    if (ctx->pc == 0x3B2664u) {
        ctx->pc = 0x3B2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2660u;
        // 0x3b2664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2668u;
        goto label_3b2668;
    }
    ctx->pc = 0x3B2660u;
    SET_GPR_U32(ctx, 31, 0x3B2668u);
    ctx->pc = 0x3B2664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2660u;
    // 0x3b2664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E88u, 0x3B2660u, 0x3B2668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2668u;
label_3b2668:
    // 0x3b2668: 0x100001ee  b           . + 4 + (0x1EE << 2)
label_3b266c:
    if (ctx->pc == 0x3B266Cu) {
        ctx->pc = 0x3B266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2668u;
        // 0x3b266c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2670u;
        goto label_3b2670;
    }
    ctx->pc = 0x3B2668u;
    {
        const bool branch_taken_0x3b2668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2668u;
        // 0x3b266c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2668) {
            ctx->pc = 0x3B2E24u;
            goto label_3b2e24;
        }
    }
    ctx->pc = 0x3B2670u;
label_3b2670:
    // 0x3b2670: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3b2670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3b2674:
    // 0x3b2674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b2674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b2678:
    // 0x3b2678: 0xc1073cc  jal         func_41CF30
label_3b267c:
    if (ctx->pc == 0x3B267Cu) {
        ctx->pc = 0x3B267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2678u;
        // 0x3b267c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2680u;
        goto label_3b2680;
    }
    ctx->pc = 0x3B2678u;
    SET_GPR_U32(ctx, 31, 0x3B2680u);
    ctx->pc = 0x3B267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2678u;
    // 0x3b267c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3B2678u, 0x3B2680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2680u;
label_3b2680:
    // 0x3b2680: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b2680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3b2684:
    // 0x3b2684: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
label_3b2688:
    if (ctx->pc == 0x3B2688u) {
        ctx->pc = 0x3B268Cu;
        goto label_3b268c;
    }
    ctx->pc = 0x3B2684u;
    {
        const bool branch_taken_0x3b2684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2684) {
            ctx->pc = 0x3B2A04u;
            goto label_3b2a04;
        }
    }
    ctx->pc = 0x3B268Cu;
label_3b268c:
    // 0x3b268c: 0xc0e8fc0  jal         func_3A3F00
label_3b2690:
    if (ctx->pc == 0x3B2690u) {
        ctx->pc = 0x3B2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B268Cu;
        // 0x3b2690: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2694u;
        goto label_3b2694;
    }
    ctx->pc = 0x3B268Cu;
    SET_GPR_U32(ctx, 31, 0x3B2694u);
    ctx->pc = 0x3B2690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B268Cu;
    // 0x3b2690: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3F00u, 0x3B268Cu, 0x3B2694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2694u;
label_3b2694:
    // 0x3b2694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b2694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b2698:
    // 0x3b2698: 0xc0e90ca  jal         func_3A4328
label_3b269c:
    if (ctx->pc == 0x3B269Cu) {
        ctx->pc = 0x3B269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2698u;
        // 0x3b269c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B26A0u;
        goto label_3b26a0;
    }
    ctx->pc = 0x3B2698u;
    SET_GPR_U32(ctx, 31, 0x3B26A0u);
    ctx->pc = 0x3B269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2698u;
    // 0x3b269c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B2698u, 0x3B26A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B26A0u;
label_3b26a0:
    // 0x3b26a0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3b26a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3b26a4:
    // 0x3b26a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3b26a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b26a8:
    // 0x3b26a8: 0xc136afa  jal         func_4DABE8
label_3b26ac:
    if (ctx->pc == 0x3B26ACu) {
        ctx->pc = 0x3B26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B26A8u;
        // 0x3b26ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B26B0u;
        goto label_3b26b0;
    }
    ctx->pc = 0x3B26A8u;
    SET_GPR_U32(ctx, 31, 0x3B26B0u);
    ctx->pc = 0x3B26ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B26A8u;
    // 0x3b26ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3B26A8u, 0x3B26B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B26B0u;
label_3b26b0:
    // 0x3b26b0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b26b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b26b4:
    // 0x3b26b4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3b26b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3b26b8:
    // 0x3b26b8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3b26b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3b26bc:
    // 0x3b26bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3b26bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3b26c0:
    // 0x3b26c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b26c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b26c4:
    // 0x3b26c4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3b26c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3b26c8:
    // 0x3b26c8: 0xc136b24  jal         func_4DAC90
label_3b26cc:
    if (ctx->pc == 0x3B26CCu) {
        ctx->pc = 0x3B26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B26C8u;
        // 0x3b26cc: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B26D0u;
        goto label_3b26d0;
    }
    ctx->pc = 0x3B26C8u;
    SET_GPR_U32(ctx, 31, 0x3B26D0u);
    ctx->pc = 0x3B26CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B26C8u;
    // 0x3b26cc: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B26C8u, 0x3B26D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B26D0u;
label_3b26d0:
    // 0x3b26d0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b26d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b26d4:
    // 0x3b26d4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3b26d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3b26d8:
    // 0x3b26d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b26d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b26dc:
    // 0x3b26dc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3b26dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3b26e0:
    // 0x3b26e0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3b26e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3b26e4:
    // 0x3b26e4: 0xc136b18  jal         func_4DAC60
label_3b26e8:
    if (ctx->pc == 0x3B26E8u) {
        ctx->pc = 0x3B26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B26E4u;
        // 0x3b26e8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B26ECu;
        goto label_3b26ec;
    }
    ctx->pc = 0x3B26E4u;
    SET_GPR_U32(ctx, 31, 0x3B26ECu);
    ctx->pc = 0x3B26E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B26E4u;
    // 0x3b26e8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B26E4u, 0x3B26ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B26ECu;
label_3b26ec:
    // 0x3b26ec: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3b26ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b26f0:
    // 0x3b26f0: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b26f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b26f4:
    // 0x3b26f4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b26f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b26f8:
    // 0x3b26f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b26f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b26fc:
    // 0x3b26fc: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b26fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b2700:
    // 0x3b2700: 0xc0f15f6  jal         func_3C57D8
label_3b2704:
    if (ctx->pc == 0x3B2704u) {
        ctx->pc = 0x3B2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2700u;
        // 0x3b2704: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2708u;
        goto label_3b2708;
    }
    ctx->pc = 0x3B2700u;
    SET_GPR_U32(ctx, 31, 0x3B2708u);
    ctx->pc = 0x3B2704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2700u;
    // 0x3b2704: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B2700u, 0x3B2708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2708u;
label_3b2708:
    // 0x3b2708: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b2708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b270c:
    // 0x3b270c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3b270cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3b2710:
    // 0x3b2710: 0xc136b18  jal         func_4DAC60
label_3b2714:
    if (ctx->pc == 0x3B2714u) {
        ctx->pc = 0x3B2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2710u;
        // 0x3b2714: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2718u;
        goto label_3b2718;
    }
    ctx->pc = 0x3B2710u;
    SET_GPR_U32(ctx, 31, 0x3B2718u);
    ctx->pc = 0x3B2714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2710u;
    // 0x3b2714: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B2710u, 0x3B2718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2718u;
label_3b2718:
    // 0x3b2718: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b2718u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b271c:
    // 0x3b271c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3b271cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_3b2720:
    // 0x3b2720: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3b2720u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3b2724:
    // 0x3b2724: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b2724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b2728:
    // 0x3b2728: 0xc0cd518  jal         func_335460
label_3b272c:
    if (ctx->pc == 0x3B272Cu) {
        ctx->pc = 0x3B272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2728u;
        // 0x3b272c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2730u;
        goto label_3b2730;
    }
    ctx->pc = 0x3B2728u;
    SET_GPR_U32(ctx, 31, 0x3B2730u);
    ctx->pc = 0x3B272Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2728u;
    // 0x3b272c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B2728u, 0x3B2730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2730u;
label_3b2730:
    // 0x3b2730: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x3b2730u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3b2734:
    // 0x3b2734: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3b2734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3b2738:
    // 0x3b2738: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x3b2738u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b273c:
    // 0x3b273c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3b273cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3b2740:
    // 0x3b2740: 0xe7b60094  swc1        $f22, 0x94($sp)
    ctx->pc = 0x3b2740u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b2744:
    // 0x3b2744: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b2744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b2748:
    // 0x3b2748: 0xe677000c  swc1        $f23, 0xC($s3)
    ctx->pc = 0x3b2748u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3b274c:
    // 0x3b274c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b274cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b2750:
    // 0x3b2750: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b2750u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b2754:
    // 0x3b2754: 0xc136b18  jal         func_4DAC60
label_3b2758:
    if (ctx->pc == 0x3B2758u) {
        ctx->pc = 0x3B2758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2754u;
        // 0x3b2758: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B275Cu;
        goto label_3b275c;
    }
    ctx->pc = 0x3B2754u;
    SET_GPR_U32(ctx, 31, 0x3B275Cu);
    ctx->pc = 0x3B2758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2754u;
    // 0x3b2758: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B2754u, 0x3B275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B275Cu;
label_3b275c:
    // 0x3b275c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b275cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b2760:
    // 0x3b2760: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b2760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b2764:
    // 0x3b2764: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x3b2764u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_3b2768:
    // 0x3b2768: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b2768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b276c:
    // 0x3b276c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b276cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b2770:
    // 0x3b2770: 0xc0f15f6  jal         func_3C57D8
label_3b2774:
    if (ctx->pc == 0x3B2774u) {
        ctx->pc = 0x3B2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2770u;
        // 0x3b2774: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2778u;
        goto label_3b2778;
    }
    ctx->pc = 0x3B2770u;
    SET_GPR_U32(ctx, 31, 0x3B2778u);
    ctx->pc = 0x3B2774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2770u;
    // 0x3b2774: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B2770u, 0x3B2778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2778u;
label_3b2778:
    // 0x3b2778: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b2778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b277c:
    // 0x3b277c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b277cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b2780:
    // 0x3b2780: 0xc136b18  jal         func_4DAC60
label_3b2784:
    if (ctx->pc == 0x3B2784u) {
        ctx->pc = 0x3B2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2780u;
        // 0x3b2784: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2788u;
        goto label_3b2788;
    }
    ctx->pc = 0x3B2780u;
    SET_GPR_U32(ctx, 31, 0x3B2788u);
    ctx->pc = 0x3B2784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2780u;
    // 0x3b2784: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B2780u, 0x3B2788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2788u;
label_3b2788:
    // 0x3b2788: 0x7ba40080  lq          $a0, 0x80($sp)
    ctx->pc = 0x3b2788u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b278c:
    // 0x3b278c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3b278cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_3b2790:
    // 0x3b2790: 0x26311720  addiu       $s1, $s1, 0x1720
    ctx->pc = 0x3b2790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5920));
label_3b2794:
    // 0x3b2794: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3b2794u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b2798:
    // 0x3b2798: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x3b2798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
label_3b279c:
    // 0x3b279c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x3b279cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_3b27a0:
    // 0x3b27a0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3b27a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b27a4:
    // 0x3b27a4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3b27a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b27a8:
    // 0x3b27a8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b27a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b27ac:
    // 0x3b27ac: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b27acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b27b0:
    // 0x3b27b0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b27b0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b27b4:
    // 0x3b27b4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b27b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b27b8:
    // 0x3b27b8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b27b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b27bc:
    // 0x3b27bc: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b27bcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b27c0:
    // 0x3b27c0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b27c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b27c4:
    // 0x3b27c4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b27c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b27c8:
    // 0x3b27c8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b27c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b27cc:
    // 0x3b27cc: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b27ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b27d0:
    // 0x3b27d0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b27d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b27d4:
    // 0x3b27d4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b27d4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b27d8:
    // 0x3b27d8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b27d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b27dc:
    // 0x3b27dc: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b27dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b27e0:
    // 0x3b27e0: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3b27e0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b27e4:
    // 0x3b27e4: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3b27e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3b27e8:
    // 0x3b27e8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3b27e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3b27ec:
    // 0x3b27ec: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b27ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3b27f0:
    // 0x3b27f0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b27f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b27f4:
    // 0x3b27f4: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3b27f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3b27f8:
    // 0x3b27f8: 0xc136b18  jal         func_4DAC60
label_3b27fc:
    if (ctx->pc == 0x3B27FCu) {
        ctx->pc = 0x3B27FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B27F8u;
        // 0x3b27fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2800u;
        goto label_3b2800;
    }
    ctx->pc = 0x3B27F8u;
    SET_GPR_U32(ctx, 31, 0x3B2800u);
    ctx->pc = 0x3B27FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B27F8u;
    // 0x3b27fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B27F8u, 0x3B2800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2800u;
label_3b2800:
    // 0x3b2800: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3b2800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3b2804:
    // 0x3b2804: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3b2804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3b2808:
    // 0x3b2808: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b2808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b280c:
    // 0x3b280c: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b280cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b2810:
    // 0x3b2810: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b2810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b2814:
    // 0x3b2814: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b2814u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b2818:
    // 0x3b2818: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b2818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b281c:
    // 0x3b281c: 0xc0f15f6  jal         func_3C57D8
label_3b2820:
    if (ctx->pc == 0x3B2820u) {
        ctx->pc = 0x3B2820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B281Cu;
        // 0x3b2820: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2824u;
        goto label_3b2824;
    }
    ctx->pc = 0x3B281Cu;
    SET_GPR_U32(ctx, 31, 0x3B2824u);
    ctx->pc = 0x3B2820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B281Cu;
    // 0x3b2820: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B281Cu, 0x3B2824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2824u;
label_3b2824:
    // 0x3b2824: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b2824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b2828:
    // 0x3b2828: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b2828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b282c:
    // 0x3b282c: 0xc136b18  jal         func_4DAC60
label_3b2830:
    if (ctx->pc == 0x3B2830u) {
        ctx->pc = 0x3B2830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B282Cu;
        // 0x3b2830: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2834u;
        goto label_3b2834;
    }
    ctx->pc = 0x3B282Cu;
    SET_GPR_U32(ctx, 31, 0x3B2834u);
    ctx->pc = 0x3B2830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B282Cu;
    // 0x3b2830: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B282Cu, 0x3B2834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2834u;
label_3b2834:
    // 0x3b2834: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b2834u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b2838:
    // 0x3b2838: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x3b2838u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b283c:
    // 0x3b283c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3b283cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3b2840:
    // 0x3b2840: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b2840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b2844:
    // 0x3b2844: 0xe7b600a4  swc1        $f22, 0xA4($sp)
    ctx->pc = 0x3b2844u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3b2848:
    // 0x3b2848: 0xe7b600a8  swc1        $f22, 0xA8($sp)
    ctx->pc = 0x3b2848u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3b284c:
    // 0x3b284c: 0xe657000c  swc1        $f23, 0xC($s2)
    ctx->pc = 0x3b284cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b2850:
    // 0x3b2850: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3b2850u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b2854:
    // 0x3b2854: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3b2854u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b2858:
    // 0x3b2858: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b2858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3b285c:
    // 0x3b285c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b285cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b2860:
    // 0x3b2860: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b2860u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b2864:
    // 0x3b2864: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b2864u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b2868:
    // 0x3b2868: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b2868u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b286c:
    // 0x3b286c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b286cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b2870:
    // 0x3b2870: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b2870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b2874:
    // 0x3b2874: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b2874u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b2878:
    // 0x3b2878: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b2878u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b287c:
    // 0x3b287c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b287cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b2880:
    // 0x3b2880: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b2880u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b2884:
    // 0x3b2884: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b2884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b2888:
    // 0x3b2888: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b2888u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b288c:
    // 0x3b288c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b288cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b2890:
    // 0x3b2890: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b2890u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b2894:
    // 0x3b2894: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b2894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b2898:
    // 0x3b2898: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b2898u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b289c:
    // 0x3b289c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b289cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b28a0:
    // 0x3b28a0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b28a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b28a4:
    // 0x3b28a4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3b28a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3b28a8:
    // 0x3b28a8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3b28a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3b28ac:
    // 0x3b28ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b28acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b28b0:
    // 0x3b28b0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3b28b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3b28b4:
    // 0x3b28b4: 0xc136b18  jal         func_4DAC60
label_3b28b8:
    if (ctx->pc == 0x3B28B8u) {
        ctx->pc = 0x3B28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B28B4u;
        // 0x3b28b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B28BCu;
        goto label_3b28bc;
    }
    ctx->pc = 0x3B28B4u;
    SET_GPR_U32(ctx, 31, 0x3B28BCu);
    ctx->pc = 0x3B28B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B28B4u;
    // 0x3b28b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B28B4u, 0x3B28BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B28BCu;
label_3b28bc:
    // 0x3b28bc: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b28bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b28c0:
    // 0x3b28c0: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b28c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b28c4:
    // 0x3b28c4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b28c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b28c8:
    // 0x3b28c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b28c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b28cc:
    // 0x3b28cc: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b28ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b28d0:
    // 0x3b28d0: 0xc0f15f6  jal         func_3C57D8
label_3b28d4:
    if (ctx->pc == 0x3B28D4u) {
        ctx->pc = 0x3B28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B28D0u;
        // 0x3b28d4: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B28D8u;
        goto label_3b28d8;
    }
    ctx->pc = 0x3B28D0u;
    SET_GPR_U32(ctx, 31, 0x3B28D8u);
    ctx->pc = 0x3B28D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B28D0u;
    // 0x3b28d4: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B28D0u, 0x3B28D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B28D8u;
label_3b28d8:
    // 0x3b28d8: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x3b28d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3b28dc:
    // 0x3b28dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3b28dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b28e0:
    // 0x3b28e0: 0xc0e90ca  jal         func_3A4328
label_3b28e4:
    if (ctx->pc == 0x3B28E4u) {
        ctx->pc = 0x3B28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B28E0u;
        // 0x3b28e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B28E8u;
        goto label_3b28e8;
    }
    ctx->pc = 0x3B28E0u;
    SET_GPR_U32(ctx, 31, 0x3B28E8u);
    ctx->pc = 0x3B28E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B28E0u;
    // 0x3b28e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B28E0u, 0x3B28E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B28E8u;
label_3b28e8:
    // 0x3b28e8: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x3b28e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_3b28ec:
    // 0x3b28ec: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3b28ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b28f0:
    // 0x3b28f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b28f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b28f4:
    // 0x3b28f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b28f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b28f8:
    // 0x3b28f8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b28f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b28fc:
    // 0x3b28fc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b28fcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b2900:
    // 0x3b2900: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b2900u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b2904:
    // 0x3b2904: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b2904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b2908:
    // 0x3b2908: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b2908u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b290c:
    // 0x3b290c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b290cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b2910:
    // 0x3b2910: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b2910u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b2914:
    // 0x3b2914: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b2914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b2918:
    // 0x3b2918: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b2918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b291c:
    // 0x3b291c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b291cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b2920:
    // 0x3b2920: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b2920u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b2924:
    // 0x3b2924: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b2924u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b2928:
    // 0x3b2928: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b2928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b292c:
    // 0x3b292c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b292cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b2930:
    // 0x3b2930: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b2930u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b2934:
    // 0x3b2934: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b2934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b2938:
    // 0x3b2938: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b2938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b293c:
    // 0x3b293c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b293cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b2940:
    // 0x3b2940: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b2940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b2944:
    // 0x3b2944: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3b2944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3b2948:
    // 0x3b2948: 0xc136b18  jal         func_4DAC60
label_3b294c:
    if (ctx->pc == 0x3B294Cu) {
        ctx->pc = 0x3B294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2948u;
        // 0x3b294c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2950u;
        goto label_3b2950;
    }
    ctx->pc = 0x3B2948u;
    SET_GPR_U32(ctx, 31, 0x3B2950u);
    ctx->pc = 0x3B294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2948u;
    // 0x3b294c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B2948u, 0x3B2950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2950u;
label_3b2950:
    // 0x3b2950: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b2950u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b2954:
    // 0x3b2954: 0x3c059595  lui         $a1, 0x9595
    ctx->pc = 0x3b2954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38293 << 16));
label_3b2958:
    // 0x3b2958: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b2958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b295c:
    // 0x3b295c: 0x34a59595  ori         $a1, $a1, 0x9595
    ctx->pc = 0x3b295cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38293);
label_3b2960:
    // 0x3b2960: 0xc0e9ba2  jal         func_3A6E88
label_3b2964:
    if (ctx->pc == 0x3B2964u) {
        ctx->pc = 0x3B2964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2960u;
        // 0x3b2964: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2968u;
        goto label_3b2968;
    }
    ctx->pc = 0x3B2960u;
    SET_GPR_U32(ctx, 31, 0x3B2968u);
    ctx->pc = 0x3B2964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2960u;
    // 0x3b2964: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E88u, 0x3B2960u, 0x3B2968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2968u;
label_3b2968:
    // 0x3b2968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b2968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b296c:
    // 0x3b296c: 0xc0e90ca  jal         func_3A4328
label_3b2970:
    if (ctx->pc == 0x3B2970u) {
        ctx->pc = 0x3B2970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B296Cu;
        // 0x3b2970: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2974u;
        goto label_3b2974;
    }
    ctx->pc = 0x3B296Cu;
    SET_GPR_U32(ctx, 31, 0x3B2974u);
    ctx->pc = 0x3B2970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B296Cu;
    // 0x3b2970: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B296Cu, 0x3B2974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2974u;
label_3b2974:
    // 0x3b2974: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3b2974u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3b2978:
    // 0x3b2978: 0xe7b600a4  swc1        $f22, 0xA4($sp)
    ctx->pc = 0x3b2978u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3b297c:
    // 0x3b297c: 0xe7b600a8  swc1        $f22, 0xA8($sp)
    ctx->pc = 0x3b297cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3b2980:
    // 0x3b2980: 0xe657000c  swc1        $f23, 0xC($s2)
    ctx->pc = 0x3b2980u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b2984:
    // 0x3b2984: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3b2984u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b2988:
    // 0x3b2988: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3b2988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b298c:
    // 0x3b298c: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b298cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3b2990:
    // 0x3b2990: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b2990u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b2994:
    // 0x3b2994: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b2994u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b2998:
    // 0x3b2998: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b2998u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b299c:
    // 0x3b299c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b299cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b29a0:
    // 0x3b29a0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b29a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b29a4:
    // 0x3b29a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b29a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b29a8:
    // 0x3b29a8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b29a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b29ac:
    // 0x3b29ac: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b29acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b29b0:
    // 0x3b29b0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b29b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b29b4:
    // 0x3b29b4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b29b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b29b8:
    // 0x3b29b8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b29b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b29bc:
    // 0x3b29bc: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b29bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b29c0:
    // 0x3b29c0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b29c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b29c4:
    // 0x3b29c4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b29c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b29c8:
    // 0x3b29c8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b29c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b29cc:
    // 0x3b29cc: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b29ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b29d0:
    // 0x3b29d0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b29d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b29d4:
    // 0x3b29d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b29d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b29d8:
    // 0x3b29d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b29d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b29dc:
    // 0x3b29dc: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b29dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b29e0:
    // 0x3b29e0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b29e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b29e4:
    // 0x3b29e4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3b29e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3b29e8:
    // 0x3b29e8: 0xc136b18  jal         func_4DAC60
label_3b29ec:
    if (ctx->pc == 0x3B29ECu) {
        ctx->pc = 0x3B29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B29E8u;
        // 0x3b29ec: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B29F0u;
        goto label_3b29f0;
    }
    ctx->pc = 0x3B29E8u;
    SET_GPR_U32(ctx, 31, 0x3B29F0u);
    ctx->pc = 0x3B29ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B29E8u;
    // 0x3b29ec: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B29E8u, 0x3B29F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B29F0u;
label_3b29f0:
    // 0x3b29f0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b29f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b29f4:
    // 0x3b29f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b29f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b29f8:
    // 0x3b29f8: 0x34058537  ori         $a1, $zero, 0x8537
    ctx->pc = 0x3b29f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34103);
label_3b29fc:
    // 0x3b29fc: 0xc0e9ba2  jal         func_3A6E88
label_3b2a00:
    if (ctx->pc == 0x3B2A00u) {
        ctx->pc = 0x3B2A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B29FCu;
        // 0x3b2a00: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2A04u;
        goto label_3b2a04;
    }
    ctx->pc = 0x3B29FCu;
    SET_GPR_U32(ctx, 31, 0x3B2A04u);
    ctx->pc = 0x3B2A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B29FCu;
    // 0x3b2a00: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E88u, 0x3B29FCu, 0x3B2A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2A04u;
label_3b2a04:
    // 0x3b2a04: 0x3c05958d  lui         $a1, 0x958D
    ctx->pc = 0x3b2a04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38285 << 16));
label_3b2a08:
    // 0x3b2a08: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b2a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b2a0c:
    // 0x3b2a0c: 0xc0e9ba2  jal         func_3A6E88
label_3b2a10:
    if (ctx->pc == 0x3B2A10u) {
        ctx->pc = 0x3B2A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A0Cu;
        // 0x3b2a10: 0x34a59437  ori         $a1, $a1, 0x9437 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37943);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2A14u;
        goto label_3b2a14;
    }
    ctx->pc = 0x3B2A0Cu;
    SET_GPR_U32(ctx, 31, 0x3B2A14u);
    ctx->pc = 0x3B2A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2A0Cu;
    // 0x3b2a10: 0x34a59437  ori         $a1, $a1, 0x9437 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37943);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E88u, 0x3B2A0Cu, 0x3B2A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2A14u;
label_3b2a14:
    // 0x3b2a14: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3b2a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3b2a18:
    // 0x3b2a18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b2a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b2a1c:
    // 0x3b2a1c: 0xc1073cc  jal         func_41CF30
label_3b2a20:
    if (ctx->pc == 0x3B2A20u) {
        ctx->pc = 0x3B2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A1Cu;
        // 0x3b2a20: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2A24u;
        goto label_3b2a24;
    }
    ctx->pc = 0x3B2A1Cu;
    SET_GPR_U32(ctx, 31, 0x3B2A24u);
    ctx->pc = 0x3B2A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2A1Cu;
    // 0x3b2a20: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3B2A1Cu, 0x3B2A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2A24u;
label_3b2a24:
    // 0x3b2a24: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b2a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3b2a28:
    // 0x3b2a28: 0x144000fe  bnez        $v0, . + 4 + (0xFE << 2)
label_3b2a2c:
    if (ctx->pc == 0x3B2A2Cu) {
        ctx->pc = 0x3B2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A28u;
        // 0x3b2a2c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2A30u;
        goto label_3b2a30;
    }
    ctx->pc = 0x3B2A28u;
    {
        const bool branch_taken_0x3b2a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A28u;
        // 0x3b2a2c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2a28) {
            ctx->pc = 0x3B2E24u;
            goto label_3b2e24;
        }
    }
    ctx->pc = 0x3B2A30u;
label_3b2a30:
    // 0x3b2a30: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3b2a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3b2a34:
    // 0x3b2a34: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3b2a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3b2a38:
    // 0x3b2a38: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b2a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b2a3c:
    // 0x3b2a3c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b2a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b2a40:
    // 0x3b2a40: 0xc0cd518  jal         func_335460
label_3b2a44:
    if (ctx->pc == 0x3B2A44u) {
        ctx->pc = 0x3B2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A40u;
        // 0x3b2a44: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2A48u;
        goto label_3b2a48;
    }
    ctx->pc = 0x3B2A40u;
    SET_GPR_U32(ctx, 31, 0x3B2A48u);
    ctx->pc = 0x3B2A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2A40u;
    // 0x3b2a44: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B2A40u, 0x3B2A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2A48u;
label_3b2a48:
    // 0x3b2a48: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3b2a48u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3b2a4c:
    // 0x3b2a4c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b2a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b2a50:
    // 0x3b2a50: 0xc0cd4ee  jal         func_3353B8
label_3b2a54:
    if (ctx->pc == 0x3B2A54u) {
        ctx->pc = 0x3B2A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A50u;
        // 0x3b2a54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2A58u;
        goto label_3b2a58;
    }
    ctx->pc = 0x3B2A50u;
    SET_GPR_U32(ctx, 31, 0x3B2A58u);
    ctx->pc = 0x3B2A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2A50u;
    // 0x3b2a54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3B2A50u, 0x3B2A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2A58u;
label_3b2a58:
    // 0x3b2a58: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3b2a5c:
    if (ctx->pc == 0x3B2A5Cu) {
        ctx->pc = 0x3B2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A58u;
        // 0x3b2a5c: 0x27b10070  addiu       $s1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2A60u;
        goto label_3b2a60;
    }
    ctx->pc = 0x3B2A58u;
    {
        const bool branch_taken_0x3b2a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A58u;
        // 0x3b2a5c: 0x27b10070  addiu       $s1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2a58) {
            ctx->pc = 0x3B2A80u;
            goto label_3b2a80;
        }
    }
    ctx->pc = 0x3B2A60u;
label_3b2a60:
    // 0x3b2a60: 0x3c01beca  lui         $at, 0xBECA
    ctx->pc = 0x3b2a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48842 << 16));
label_3b2a64:
    // 0x3b2a64: 0x3421c083  ori         $at, $at, 0xC083
    ctx->pc = 0x3b2a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49283);
label_3b2a68:
    // 0x3b2a68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b2a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2a6c:
    // 0x3b2a6c: 0xe637000c  swc1        $f23, 0xC($s1)
    ctx->pc = 0x3b2a6cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b2a70:
    // 0x3b2a70: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b2a70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b2a74:
    // 0x3b2a74: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x3b2a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3b2a78:
    // 0x3b2a78: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b2a7c:
    if (ctx->pc == 0x3B2A7Cu) {
        ctx->pc = 0x3B2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A78u;
        // 0x3b2a7c: 0x261021a0  addiu       $s0, $s0, 0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2A80u;
        goto label_3b2a80;
    }
    ctx->pc = 0x3B2A78u;
    {
        const bool branch_taken_0x3b2a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A78u;
        // 0x3b2a7c: 0x261021a0  addiu       $s0, $s0, 0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2a78) {
            ctx->pc = 0x3B2A9Cu;
            goto label_3b2a9c;
        }
    }
    ctx->pc = 0x3B2A80u;
label_3b2a80:
    // 0x3b2a80: 0x3c01beca  lui         $at, 0xBECA
    ctx->pc = 0x3b2a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48842 << 16));
label_3b2a84:
    // 0x3b2a84: 0x3421c083  ori         $at, $at, 0xC083
    ctx->pc = 0x3b2a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49283);
label_3b2a88:
    // 0x3b2a88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b2a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2a8c:
    // 0x3b2a8c: 0xe637000c  swc1        $f23, 0xC($s1)
    ctx->pc = 0x3b2a8cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b2a90:
    // 0x3b2a90: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b2a90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b2a94:
    // 0x3b2a94: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x3b2a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3b2a98:
    // 0x3b2a98: 0x261021b0  addiu       $s0, $s0, 0x21B0
    ctx->pc = 0x3b2a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8624));
label_3b2a9c:
    // 0x3b2a9c: 0xe7b70070  swc1        $f23, 0x70($sp)
    ctx->pc = 0x3b2a9cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3b2aa0:
    // 0x3b2aa0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b2aa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b2aa4:
    // 0x3b2aa4: 0xe7b60074  swc1        $f22, 0x74($sp)
    ctx->pc = 0x3b2aa4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3b2aa8:
    // 0x3b2aa8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3b2aa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b2aac:
    // 0x3b2aac: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3b2aacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b2ab0:
    // 0x3b2ab0: 0xc12e310  jal         func_4B8C40
label_3b2ab4:
    if (ctx->pc == 0x3B2AB4u) {
        ctx->pc = 0x3B2AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2AB0u;
        // 0x3b2ab4: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2AB8u;
        goto label_3b2ab8;
    }
    ctx->pc = 0x3B2AB0u;
    SET_GPR_U32(ctx, 31, 0x3B2AB8u);
    ctx->pc = 0x3B2AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2AB0u;
    // 0x3b2ab4: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3B2AB0u, 0x3B2AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2AB8u;
label_3b2ab8:
    // 0x3b2ab8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3b2ab8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3b2abc:
    // 0x3b2abc: 0xc12e29c  jal         func_4B8A70
label_3b2ac0:
    if (ctx->pc == 0x3B2AC0u) {
        ctx->pc = 0x3B2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2ABCu;
        // 0x3b2ac0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2AC4u;
        goto label_3b2ac4;
    }
    ctx->pc = 0x3B2ABCu;
    SET_GPR_U32(ctx, 31, 0x3B2AC4u);
    ctx->pc = 0x3B2AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2ABCu;
    // 0x3b2ac0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3B2ABCu, 0x3B2AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2AC4u;
label_3b2ac4:
    // 0x3b2ac4: 0xe7b60084  swc1        $f22, 0x84($sp)
    ctx->pc = 0x3b2ac4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b2ac8:
    // 0x3b2ac8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b2ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b2acc:
    // 0x3b2acc: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x3b2accu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b2ad0:
    // 0x3b2ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b2ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b2ad4:
    // 0x3b2ad4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x3b2ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_3b2ad8:
    // 0x3b2ad8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b2ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b2adc:
    // 0x3b2adc: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x3b2adcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b2ae0:
    // 0x3b2ae0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3b2ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b2ae4:
    // 0x3b2ae4: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b2ae4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b2ae8:
    // 0x3b2ae8: 0xc0e954c  jal         func_3A5530
label_3b2aec:
    if (ctx->pc == 0x3B2AECu) {
        ctx->pc = 0x3B2AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2AE8u;
        // 0x3b2aec: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2AF0u;
        goto label_3b2af0;
    }
    ctx->pc = 0x3B2AE8u;
    SET_GPR_U32(ctx, 31, 0x3B2AF0u);
    ctx->pc = 0x3B2AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2AE8u;
    // 0x3b2aec: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3B2AE8u, 0x3B2AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2AF0u;
label_3b2af0:
    // 0x3b2af0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b2af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b2af4:
    // 0x3b2af4: 0x3c057567  lui         $a1, 0x7567
    ctx->pc = 0x3b2af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30055 << 16));
label_3b2af8:
    // 0x3b2af8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b2af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b2afc:
    // 0x3b2afc: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3b2afcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3b2b00:
    // 0x3b2b00: 0xc0ea16a  jal         func_3A85A8
label_3b2b04:
    if (ctx->pc == 0x3B2B04u) {
        ctx->pc = 0x3B2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B00u;
        // 0x3b2b04: 0x34a557ff  ori         $a1, $a1, 0x57FF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22527);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2B08u;
        goto label_3b2b08;
    }
    ctx->pc = 0x3B2B00u;
    SET_GPR_U32(ctx, 31, 0x3B2B08u);
    ctx->pc = 0x3B2B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2B00u;
    // 0x3b2b04: 0x34a557ff  ori         $a1, $a1, 0x57FF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22527);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3B2B00u, 0x3B2B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2B08u;
label_3b2b08:
    // 0x3b2b08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b2b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b2b0c:
    // 0x3b2b0c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3b2b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3b2b10:
    // 0x3b2b10: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3b2b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b2b14:
    // 0x3b2b14: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3b2b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3b2b18:
    // 0x3b2b18: 0x2490b8b8  addiu       $s0, $a0, -0x4748
    ctx->pc = 0x3b2b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3b2b1c:
    // 0x3b2b1c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3b2b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b2b20:
    // 0x3b2b20: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3b2b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3b2b24:
    // 0x3b2b24: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3b2b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3b2b28:
    // 0x3b2b28: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3b2b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3b2b2c:
    // 0x3b2b2c: 0x60f809  jalr        $v1
label_3b2b30:
    if (ctx->pc == 0x3B2B30u) {
        ctx->pc = 0x3B2B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B2Cu;
        // 0x3b2b30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2B34u;
        goto label_3b2b34;
    }
    ctx->pc = 0x3B2B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B2B34u);
        ctx->pc = 0x3B2B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B2Cu;
        // 0x3b2b30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2B2Cu, 0x3B2B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2B34u;
label_3b2b34:
    // 0x3b2b34: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3b2b34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b2b38:
    // 0x3b2b38: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3b2b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3b2b3c:
    // 0x3b2b3c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b2b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b2b40:
    // 0x3b2b40: 0xc0ea158  jal         func_3A8560
label_3b2b44:
    if (ctx->pc == 0x3B2B44u) {
        ctx->pc = 0x3B2B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B40u;
        // 0x3b2b44: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2B48u;
        goto label_3b2b48;
    }
    ctx->pc = 0x3B2B40u;
    SET_GPR_U32(ctx, 31, 0x3B2B48u);
    ctx->pc = 0x3B2B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2B40u;
    // 0x3b2b44: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B2B40u, 0x3B2B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2B48u;
label_3b2b48:
    // 0x3b2b48: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x3b2b48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3b2b4c:
    // 0x3b2b4c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3b2b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3b2b50:
    // 0x3b2b50: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x3b2b50u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3b2b54:
    // 0x3b2b54: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b2b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b2b58:
    // 0x3b2b58: 0xe7b60074  swc1        $f22, 0x74($sp)
    ctx->pc = 0x3b2b58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3b2b5c:
    // 0x3b2b5c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x3b2b5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b2b60:
    // 0x3b2b60: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3b2b60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b2b64:
    // 0x3b2b64: 0xc0ea158  jal         func_3A8560
label_3b2b68:
    if (ctx->pc == 0x3B2B68u) {
        ctx->pc = 0x3B2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B64u;
        // 0x3b2b68: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2B6Cu;
        goto label_3b2b6c;
    }
    ctx->pc = 0x3B2B64u;
    SET_GPR_U32(ctx, 31, 0x3B2B6Cu);
    ctx->pc = 0x3B2B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2B64u;
    // 0x3b2b68: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B2B64u, 0x3B2B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2B6Cu;
label_3b2b6c:
    // 0x3b2b6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b2b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b2b70:
    // 0x3b2b70: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b2b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b2b74:
    // 0x3b2b74: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3b2b74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b2b78:
    // 0x3b2b78: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b2b78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b2b7c:
    // 0x3b2b7c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b2b80:
    // 0x3b2b80: 0x40f809  jalr        $v0
label_3b2b84:
    if (ctx->pc == 0x3B2B84u) {
        ctx->pc = 0x3B2B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B80u;
        // 0x3b2b84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2B88u;
        goto label_3b2b88;
    }
    ctx->pc = 0x3B2B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B2B88u);
        ctx->pc = 0x3B2B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B80u;
        // 0x3b2b84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2B80u, 0x3B2B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2B88u;
label_3b2b88:
    // 0x3b2b88: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3b2b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3b2b8c:
    // 0x3b2b8c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3b2b8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3b2b90:
    // 0x3b2b90: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b2b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b2b94:
    // 0x3b2b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b2b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b2b98:
    // 0x3b2b98: 0xc0cd518  jal         func_335460
label_3b2b9c:
    if (ctx->pc == 0x3B2B9Cu) {
        ctx->pc = 0x3B2B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B98u;
        // 0x3b2b9c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2BA0u;
        goto label_3b2ba0;
    }
    ctx->pc = 0x3B2B98u;
    SET_GPR_U32(ctx, 31, 0x3B2BA0u);
    ctx->pc = 0x3B2B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2B98u;
    // 0x3b2b9c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B2B98u, 0x3B2BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2BA0u;
label_3b2ba0:
    // 0x3b2ba0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3b2ba0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3b2ba4:
    // 0x3b2ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b2ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b2ba8:
    // 0x3b2ba8: 0xc0cd4ee  jal         func_3353B8
label_3b2bac:
    if (ctx->pc == 0x3B2BACu) {
        ctx->pc = 0x3B2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2BA8u;
        // 0x3b2bac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2BB0u;
        goto label_3b2bb0;
    }
    ctx->pc = 0x3B2BA8u;
    SET_GPR_U32(ctx, 31, 0x3B2BB0u);
    ctx->pc = 0x3B2BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2BA8u;
    // 0x3b2bac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3B2BA8u, 0x3B2BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2BB0u;
label_3b2bb0:
    // 0x3b2bb0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3b2bb4:
    if (ctx->pc == 0x3B2BB4u) {
        ctx->pc = 0x3B2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2BB0u;
        // 0x3b2bb4: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2BB8u;
        goto label_3b2bb8;
    }
    ctx->pc = 0x3B2BB0u;
    {
        const bool branch_taken_0x3b2bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2bb0) {
            ctx->pc = 0x3B2BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2BB0u;
            // 0x3b2bb4: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2BD4u;
            goto label_3b2bd4;
        }
    }
    ctx->pc = 0x3B2BB8u;
label_3b2bb8:
    // 0x3b2bb8: 0x3c01befd  lui         $at, 0xBEFD
    ctx->pc = 0x3b2bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48893 << 16));
label_3b2bbc:
    // 0x3b2bbc: 0x3421f3b6  ori         $at, $at, 0xF3B6
    ctx->pc = 0x3b2bbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62390);
label_3b2bc0:
    // 0x3b2bc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b2bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2bc4:
    // 0x3b2bc4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b2bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b2bc8:
    // 0x3b2bc8: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x3b2bc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3b2bcc:
    // 0x3b2bcc: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b2bd0:
    if (ctx->pc == 0x3B2BD0u) {
        ctx->pc = 0x3B2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2BCCu;
        // 0x3b2bd0: 0x261021a0  addiu       $s0, $s0, 0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2BD4u;
        goto label_3b2bd4;
    }
    ctx->pc = 0x3B2BCCu;
    {
        const bool branch_taken_0x3b2bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2BCCu;
        // 0x3b2bd0: 0x261021a0  addiu       $s0, $s0, 0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2bcc) {
            ctx->pc = 0x3B2BE8u;
            goto label_3b2be8;
        }
    }
    ctx->pc = 0x3B2BD4u;
label_3b2bd4:
    // 0x3b2bd4: 0x3c01befd  lui         $at, 0xBEFD
    ctx->pc = 0x3b2bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48893 << 16));
label_3b2bd8:
    // 0x3b2bd8: 0x3421f3b6  ori         $at, $at, 0xF3B6
    ctx->pc = 0x3b2bd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62390);
label_3b2bdc:
    // 0x3b2bdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b2bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2be0:
    // 0x3b2be0: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x3b2be0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3b2be4:
    // 0x3b2be4: 0x261021b0  addiu       $s0, $s0, 0x21B0
    ctx->pc = 0x3b2be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8624));
label_3b2be8:
    // 0x3b2be8: 0xe7b60074  swc1        $f22, 0x74($sp)
    ctx->pc = 0x3b2be8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3b2bec:
    // 0x3b2bec: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b2becu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b2bf0:
    // 0x3b2bf0: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x3b2bf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b2bf4:
    // 0x3b2bf4: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x3b2bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3b2bf8:
    // 0x3b2bf8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3b2bf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b2bfc:
    // 0x3b2bfc: 0xc12e310  jal         func_4B8C40
label_3b2c00:
    if (ctx->pc == 0x3B2C00u) {
        ctx->pc = 0x3B2C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2BFCu;
        // 0x3b2c00: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2C04u;
        goto label_3b2c04;
    }
    ctx->pc = 0x3B2BFCu;
    SET_GPR_U32(ctx, 31, 0x3B2C04u);
    ctx->pc = 0x3B2C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2BFCu;
    // 0x3b2c00: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3B2BFCu, 0x3B2C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2C04u;
label_3b2c04:
    // 0x3b2c04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3b2c04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3b2c08:
    // 0x3b2c08: 0xc12e29c  jal         func_4B8A70
label_3b2c0c:
    if (ctx->pc == 0x3B2C0Cu) {
        ctx->pc = 0x3B2C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C08u;
        // 0x3b2c0c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2C10u;
        goto label_3b2c10;
    }
    ctx->pc = 0x3B2C08u;
    SET_GPR_U32(ctx, 31, 0x3B2C10u);
    ctx->pc = 0x3B2C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2C08u;
    // 0x3b2c0c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3B2C08u, 0x3B2C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2C10u;
label_3b2c10:
    // 0x3b2c10: 0xe7b60084  swc1        $f22, 0x84($sp)
    ctx->pc = 0x3b2c10u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b2c14:
    // 0x3b2c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b2c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b2c18:
    // 0x3b2c18: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x3b2c18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b2c1c:
    // 0x3b2c1c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b2c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b2c20:
    // 0x3b2c20: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x3b2c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_3b2c24:
    // 0x3b2c24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b2c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b2c28:
    // 0x3b2c28: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x3b2c28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b2c2c:
    // 0x3b2c2c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3b2c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b2c30:
    // 0x3b2c30: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b2c30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b2c34:
    // 0x3b2c34: 0xc0e954c  jal         func_3A5530
label_3b2c38:
    if (ctx->pc == 0x3B2C38u) {
        ctx->pc = 0x3B2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C34u;
        // 0x3b2c38: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2C3Cu;
        goto label_3b2c3c;
    }
    ctx->pc = 0x3B2C34u;
    SET_GPR_U32(ctx, 31, 0x3B2C3Cu);
    ctx->pc = 0x3B2C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2C34u;
    // 0x3b2c38: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3B2C34u, 0x3B2C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2C3Cu;
label_3b2c3c:
    // 0x3b2c3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b2c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b2c40:
    // 0x3b2c40: 0x3c057567  lui         $a1, 0x7567
    ctx->pc = 0x3b2c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30055 << 16));
label_3b2c44:
    // 0x3b2c44: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b2c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b2c48:
    // 0x3b2c48: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3b2c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3b2c4c:
    // 0x3b2c4c: 0xc0ea16a  jal         func_3A85A8
label_3b2c50:
    if (ctx->pc == 0x3B2C50u) {
        ctx->pc = 0x3B2C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C4Cu;
        // 0x3b2c50: 0x34a557ff  ori         $a1, $a1, 0x57FF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22527);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2C54u;
        goto label_3b2c54;
    }
    ctx->pc = 0x3B2C4Cu;
    SET_GPR_U32(ctx, 31, 0x3B2C54u);
    ctx->pc = 0x3B2C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2C4Cu;
    // 0x3b2c50: 0x34a557ff  ori         $a1, $a1, 0x57FF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22527);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3B2C4Cu, 0x3B2C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2C54u;
label_3b2c54:
    // 0x3b2c54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b2c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b2c58:
    // 0x3b2c58: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3b2c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3b2c5c:
    // 0x3b2c5c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3b2c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b2c60:
    // 0x3b2c60: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3b2c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3b2c64:
    // 0x3b2c64: 0x2470b8b8  addiu       $s0, $v1, -0x4748
    ctx->pc = 0x3b2c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3b2c68:
    // 0x3b2c68: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3b2c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b2c6c:
    // 0x3b2c6c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3b2c6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3b2c70:
    // 0x3b2c70: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3b2c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3b2c74:
    // 0x3b2c74: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3b2c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3b2c78:
    // 0x3b2c78: 0x60f809  jalr        $v1
label_3b2c7c:
    if (ctx->pc == 0x3B2C7Cu) {
        ctx->pc = 0x3B2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C78u;
        // 0x3b2c7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2C80u;
        goto label_3b2c80;
    }
    ctx->pc = 0x3B2C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B2C80u);
        ctx->pc = 0x3B2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C78u;
        // 0x3b2c7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2C78u, 0x3B2C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2C80u;
label_3b2c80:
    // 0x3b2c80: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3b2c80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b2c84:
    // 0x3b2c84: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3b2c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3b2c88:
    // 0x3b2c88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b2c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b2c8c:
    // 0x3b2c8c: 0xc0ea158  jal         func_3A8560
label_3b2c90:
    if (ctx->pc == 0x3B2C90u) {
        ctx->pc = 0x3B2C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C8Cu;
        // 0x3b2c90: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2C94u;
        goto label_3b2c94;
    }
    ctx->pc = 0x3B2C8Cu;
    SET_GPR_U32(ctx, 31, 0x3B2C94u);
    ctx->pc = 0x3B2C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2C8Cu;
    // 0x3b2c90: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B2C8Cu, 0x3B2C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2C94u;
label_3b2c94:
    // 0x3b2c94: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x3b2c94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3b2c98:
    // 0x3b2c98: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3b2c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3b2c9c:
    // 0x3b2c9c: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x3b2c9cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3b2ca0:
    // 0x3b2ca0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b2ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b2ca4:
    // 0x3b2ca4: 0xe7b60074  swc1        $f22, 0x74($sp)
    ctx->pc = 0x3b2ca4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3b2ca8:
    // 0x3b2ca8: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x3b2ca8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b2cac:
    // 0x3b2cac: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3b2cacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b2cb0:
    // 0x3b2cb0: 0xc0ea158  jal         func_3A8560
label_3b2cb4:
    if (ctx->pc == 0x3B2CB4u) {
        ctx->pc = 0x3B2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CB0u;
        // 0x3b2cb4: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2CB8u;
        goto label_3b2cb8;
    }
    ctx->pc = 0x3B2CB0u;
    SET_GPR_U32(ctx, 31, 0x3B2CB8u);
    ctx->pc = 0x3B2CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2CB0u;
    // 0x3b2cb4: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B2CB0u, 0x3B2CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2CB8u;
label_3b2cb8:
    // 0x3b2cb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b2cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b2cbc:
    // 0x3b2cbc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b2cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b2cc0:
    // 0x3b2cc0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3b2cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b2cc4:
    // 0x3b2cc4: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b2cc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b2cc8:
    // 0x3b2cc8: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b2cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b2ccc:
    // 0x3b2ccc: 0x40f809  jalr        $v0
label_3b2cd0:
    if (ctx->pc == 0x3B2CD0u) {
        ctx->pc = 0x3B2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CCCu;
        // 0x3b2cd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2CD4u;
        goto label_3b2cd4;
    }
    ctx->pc = 0x3B2CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B2CD4u);
        ctx->pc = 0x3B2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CCCu;
        // 0x3b2cd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2CCCu, 0x3B2CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2CD4u;
label_3b2cd4:
    // 0x3b2cd4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3b2cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3b2cd8:
    // 0x3b2cd8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3b2cd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3b2cdc:
    // 0x3b2cdc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b2cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b2ce0:
    // 0x3b2ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b2ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b2ce4:
    // 0x3b2ce4: 0xc0cd518  jal         func_335460
label_3b2ce8:
    if (ctx->pc == 0x3B2CE8u) {
        ctx->pc = 0x3B2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CE4u;
        // 0x3b2ce8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2CECu;
        goto label_3b2cec;
    }
    ctx->pc = 0x3B2CE4u;
    SET_GPR_U32(ctx, 31, 0x3B2CECu);
    ctx->pc = 0x3B2CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2CE4u;
    // 0x3b2ce8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B2CE4u, 0x3B2CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2CECu;
label_3b2cec:
    // 0x3b2cec: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3b2cecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3b2cf0:
    // 0x3b2cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b2cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b2cf4:
    // 0x3b2cf4: 0xc0cd4ee  jal         func_3353B8
label_3b2cf8:
    if (ctx->pc == 0x3B2CF8u) {
        ctx->pc = 0x3B2CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CF4u;
        // 0x3b2cf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2CFCu;
        goto label_3b2cfc;
    }
    ctx->pc = 0x3B2CF4u;
    SET_GPR_U32(ctx, 31, 0x3B2CFCu);
    ctx->pc = 0x3B2CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2CF4u;
    // 0x3b2cf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3B2CF4u, 0x3B2CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2CFCu;
label_3b2cfc:
    // 0x3b2cfc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3b2d00:
    if (ctx->pc == 0x3B2D00u) {
        ctx->pc = 0x3B2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CFCu;
        // 0x3b2d00: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2D04u;
        goto label_3b2d04;
    }
    ctx->pc = 0x3B2CFCu;
    {
        const bool branch_taken_0x3b2cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2cfc) {
            ctx->pc = 0x3B2D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2CFCu;
            // 0x3b2d00: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2D24u;
            goto label_3b2d24;
        }
    }
    ctx->pc = 0x3B2D04u;
label_3b2d04:
    // 0x3b2d04: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3b2d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3b2d08:
    // 0x3b2d08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b2d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2d0c:
    // 0x3b2d0c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b2d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b2d10:
    // 0x3b2d10: 0x3c01bf18  lui         $at, 0xBF18
    ctx->pc = 0x3b2d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48920 << 16));
label_3b2d14:
    // 0x3b2d14: 0x34219375  ori         $at, $at, 0x9375
    ctx->pc = 0x3b2d14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37749);
label_3b2d18:
    // 0x3b2d18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b2d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b2d1c:
    // 0x3b2d1c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b2d20:
    if (ctx->pc == 0x3B2D20u) {
        ctx->pc = 0x3B2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D1Cu;
        // 0x3b2d20: 0x261021a0  addiu       $s0, $s0, 0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2D24u;
        goto label_3b2d24;
    }
    ctx->pc = 0x3B2D1Cu;
    {
        const bool branch_taken_0x3b2d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D1Cu;
        // 0x3b2d20: 0x261021a0  addiu       $s0, $s0, 0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2d1c) {
            ctx->pc = 0x3B2D3Cu;
            goto label_3b2d3c;
        }
    }
    ctx->pc = 0x3B2D24u;
label_3b2d24:
    // 0x3b2d24: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3b2d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3b2d28:
    // 0x3b2d28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b2d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2d2c:
    // 0x3b2d2c: 0x3c01bf18  lui         $at, 0xBF18
    ctx->pc = 0x3b2d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48920 << 16));
label_3b2d30:
    // 0x3b2d30: 0x34219375  ori         $at, $at, 0x9375
    ctx->pc = 0x3b2d30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37749);
label_3b2d34:
    // 0x3b2d34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b2d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b2d38:
    // 0x3b2d38: 0x261021b0  addiu       $s0, $s0, 0x21B0
    ctx->pc = 0x3b2d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8624));
label_3b2d3c:
    // 0x3b2d3c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3b2d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3b2d40:
    // 0x3b2d40: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b2d40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b2d44:
    // 0x3b2d44: 0xe7b60074  swc1        $f22, 0x74($sp)
    ctx->pc = 0x3b2d44u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3b2d48:
    // 0x3b2d48: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x3b2d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3b2d4c:
    // 0x3b2d4c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x3b2d4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b2d50:
    // 0x3b2d50: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3b2d50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b2d54:
    // 0x3b2d54: 0xc12e310  jal         func_4B8C40
label_3b2d58:
    if (ctx->pc == 0x3B2D58u) {
        ctx->pc = 0x3B2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D54u;
        // 0x3b2d58: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2D5Cu;
        goto label_3b2d5c;
    }
    ctx->pc = 0x3B2D54u;
    SET_GPR_U32(ctx, 31, 0x3B2D5Cu);
    ctx->pc = 0x3B2D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2D54u;
    // 0x3b2d58: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3B2D54u, 0x3B2D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2D5Cu;
label_3b2d5c:
    // 0x3b2d5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3b2d5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3b2d60:
    // 0x3b2d60: 0xc12e29c  jal         func_4B8A70
label_3b2d64:
    if (ctx->pc == 0x3B2D64u) {
        ctx->pc = 0x3B2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D60u;
        // 0x3b2d64: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2D68u;
        goto label_3b2d68;
    }
    ctx->pc = 0x3B2D60u;
    SET_GPR_U32(ctx, 31, 0x3B2D68u);
    ctx->pc = 0x3B2D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2D60u;
    // 0x3b2d64: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3B2D60u, 0x3B2D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2D68u;
label_3b2d68:
    // 0x3b2d68: 0xe7b60084  swc1        $f22, 0x84($sp)
    ctx->pc = 0x3b2d68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b2d6c:
    // 0x3b2d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b2d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b2d70:
    // 0x3b2d70: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x3b2d70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b2d74:
    // 0x3b2d74: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b2d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b2d78:
    // 0x3b2d78: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x3b2d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_3b2d7c:
    // 0x3b2d7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b2d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b2d80:
    // 0x3b2d80: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x3b2d80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b2d84:
    // 0x3b2d84: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3b2d84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b2d88:
    // 0x3b2d88: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b2d88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b2d8c:
    // 0x3b2d8c: 0xc0e954c  jal         func_3A5530
label_3b2d90:
    if (ctx->pc == 0x3B2D90u) {
        ctx->pc = 0x3B2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D8Cu;
        // 0x3b2d90: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2D94u;
        goto label_3b2d94;
    }
    ctx->pc = 0x3B2D8Cu;
    SET_GPR_U32(ctx, 31, 0x3B2D94u);
    ctx->pc = 0x3B2D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2D8Cu;
    // 0x3b2d90: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3B2D8Cu, 0x3B2D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2D94u;
label_3b2d94:
    // 0x3b2d94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b2d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b2d98:
    // 0x3b2d98: 0x3c057567  lui         $a1, 0x7567
    ctx->pc = 0x3b2d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30055 << 16));
label_3b2d9c:
    // 0x3b2d9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b2d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b2da0:
    // 0x3b2da0: 0xc0ea16a  jal         func_3A85A8
label_3b2da4:
    if (ctx->pc == 0x3B2DA4u) {
        ctx->pc = 0x3B2DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2DA0u;
        // 0x3b2da4: 0x34a557ff  ori         $a1, $a1, 0x57FF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22527);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2DA8u;
        goto label_3b2da8;
    }
    ctx->pc = 0x3B2DA0u;
    SET_GPR_U32(ctx, 31, 0x3B2DA8u);
    ctx->pc = 0x3B2DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2DA0u;
    // 0x3b2da4: 0x34a557ff  ori         $a1, $a1, 0x57FF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22527);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3B2DA0u, 0x3B2DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2DA8u;
label_3b2da8:
    // 0x3b2da8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3b2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b2dac:
    // 0x3b2dac: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3b2dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b2db0:
    // 0x3b2db0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3b2db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3b2db4:
    // 0x3b2db4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3b2db4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3b2db8:
    // 0x3b2db8: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3b2db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3b2dbc:
    // 0x3b2dbc: 0x60f809  jalr        $v1
label_3b2dc0:
    if (ctx->pc == 0x3B2DC0u) {
        ctx->pc = 0x3B2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2DBCu;
        // 0x3b2dc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2DC4u;
        goto label_3b2dc4;
    }
    ctx->pc = 0x3B2DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B2DC4u);
        ctx->pc = 0x3B2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2DBCu;
        // 0x3b2dc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2DBCu, 0x3B2DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2DC4u;
label_3b2dc4:
    // 0x3b2dc4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3b2dc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b2dc8:
    // 0x3b2dc8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3b2dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3b2dcc:
    // 0x3b2dcc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b2dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b2dd0:
    // 0x3b2dd0: 0xc0ea158  jal         func_3A8560
label_3b2dd4:
    if (ctx->pc == 0x3B2DD4u) {
        ctx->pc = 0x3B2DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2DD0u;
        // 0x3b2dd4: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2DD8u;
        goto label_3b2dd8;
    }
    ctx->pc = 0x3B2DD0u;
    SET_GPR_U32(ctx, 31, 0x3B2DD8u);
    ctx->pc = 0x3B2DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2DD0u;
    // 0x3b2dd4: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B2DD0u, 0x3B2DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2DD8u;
label_3b2dd8:
    // 0x3b2dd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b2dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b2ddc:
    // 0x3b2ddc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b2ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2de0:
    // 0x3b2de0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b2de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b2de4:
    // 0x3b2de4: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x3b2de4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3b2de8:
    // 0x3b2de8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3b2de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3b2dec:
    // 0x3b2dec: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3b2decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3b2df0:
    // 0x3b2df0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3b2df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3b2df4:
    // 0x3b2df4: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x3b2df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b2df8:
    // 0x3b2df8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3b2df8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b2dfc:
    // 0x3b2dfc: 0xc0ea158  jal         func_3A8560
label_3b2e00:
    if (ctx->pc == 0x3B2E00u) {
        ctx->pc = 0x3B2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2DFCu;
        // 0x3b2e00: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2E04u;
        goto label_3b2e04;
    }
    ctx->pc = 0x3B2DFCu;
    SET_GPR_U32(ctx, 31, 0x3B2E04u);
    ctx->pc = 0x3B2E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2DFCu;
    // 0x3b2e00: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B2DFCu, 0x3B2E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2E04u;
label_3b2e04:
    // 0x3b2e04: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b2e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b2e08:
    // 0x3b2e08: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3b2e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b2e0c:
    // 0x3b2e0c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b2e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b2e10:
    // 0x3b2e10: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b2e10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b2e14:
    // 0x3b2e14: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b2e18:
    // 0x3b2e18: 0x40f809  jalr        $v0
label_3b2e1c:
    if (ctx->pc == 0x3B2E1Cu) {
        ctx->pc = 0x3B2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E18u;
        // 0x3b2e1c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2E20u;
        goto label_3b2e20;
    }
    ctx->pc = 0x3B2E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B2E20u);
        ctx->pc = 0x3B2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E18u;
        // 0x3b2e1c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2E18u, 0x3B2E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2E20u;
label_3b2e20:
    // 0x3b2e20: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3b2e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3b2e24:
    // 0x3b2e24: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b2e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b2e28:
    // 0x3b2e28: 0xc1073cc  jal         func_41CF30
label_3b2e2c:
    if (ctx->pc == 0x3B2E2Cu) {
        ctx->pc = 0x3B2E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E28u;
        // 0x3b2e2c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2E30u;
        goto label_3b2e30;
    }
    ctx->pc = 0x3B2E28u;
    SET_GPR_U32(ctx, 31, 0x3B2E30u);
    ctx->pc = 0x3B2E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2E28u;
    // 0x3b2e2c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3B2E28u, 0x3B2E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2E30u;
label_3b2e30:
    // 0x3b2e30: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3b2e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3b2e34:
    // 0x3b2e34: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3b2e38:
    if (ctx->pc == 0x3B2E38u) {
        ctx->pc = 0x3B2E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E34u;
        // 0x3b2e38: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2E3Cu;
        goto label_3b2e3c;
    }
    ctx->pc = 0x3B2E34u;
    {
        const bool branch_taken_0x3b2e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E34u;
        // 0x3b2e38: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2e34) {
            ctx->pc = 0x3B2E5Cu;
            goto label_3b2e5c;
        }
    }
    ctx->pc = 0x3B2E3Cu;
label_3b2e3c:
    // 0x3b2e3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b2e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b2e40:
    // 0x3b2e40: 0xc0e8dee  jal         func_3A37B8
label_3b2e44:
    if (ctx->pc == 0x3B2E44u) {
        ctx->pc = 0x3B2E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E40u;
        // 0x3b2e44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2E48u;
        goto label_3b2e48;
    }
    ctx->pc = 0x3B2E40u;
    SET_GPR_U32(ctx, 31, 0x3B2E48u);
    ctx->pc = 0x3B2E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2E40u;
    // 0x3b2e44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3B2E40u, 0x3B2E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2E48u;
label_3b2e48:
    // 0x3b2e48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b2e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b2e4c:
    // 0x3b2e4c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3b2e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b2e50:
    // 0x3b2e50: 0xc045ca0  jal         func_117280
label_3b2e54:
    if (ctx->pc == 0x3B2E54u) {
        ctx->pc = 0x3B2E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E50u;
        // 0x3b2e54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2E58u;
        goto label_3b2e58;
    }
    ctx->pc = 0x3B2E50u;
    SET_GPR_U32(ctx, 31, 0x3B2E58u);
    ctx->pc = 0x3B2E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2E50u;
    // 0x3b2e54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3B2E50u, 0x3B2E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2E58u;
label_3b2e58:
    // 0x3b2e58: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x3b2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3b2e5c:
    // 0x3b2e5c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3b2e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3b2e60:
    // 0x3b2e60: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3b2e64:
    if (ctx->pc == 0x3B2E64u) {
        ctx->pc = 0x3B2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E60u;
        // 0x3b2e64: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2E68u;
        goto label_3b2e68;
    }
    ctx->pc = 0x3B2E60u;
    {
        const bool branch_taken_0x3b2e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E60u;
        // 0x3b2e64: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2e60) {
            ctx->pc = 0x3B2EC0u;
            goto label_3b2ec0;
        }
    }
    ctx->pc = 0x3B2E68u;
label_3b2e68:
    // 0x3b2e68: 0xc0e8b48  jal         func_3A2D20
label_3b2e6c:
    if (ctx->pc == 0x3B2E6Cu) {
        ctx->pc = 0x3B2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E68u;
        // 0x3b2e6c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2E70u;
        goto label_3b2e70;
    }
    ctx->pc = 0x3B2E68u;
    SET_GPR_U32(ctx, 31, 0x3B2E70u);
    ctx->pc = 0x3B2E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2E68u;
    // 0x3b2e6c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3B2E68u, 0x3B2E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2E70u;
label_3b2e70:
    // 0x3b2e70: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x3b2e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3b2e74:
    // 0x3b2e74: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x3b2e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3b2e78:
    // 0x3b2e78: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x3b2e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3b2e7c:
    // 0x3b2e7c: 0xc0e8b80  jal         func_3A2E00
label_3b2e80:
    if (ctx->pc == 0x3B2E80u) {
        ctx->pc = 0x3B2E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E7Cu;
        // 0x3b2e80: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2E84u;
        goto label_3b2e84;
    }
    ctx->pc = 0x3B2E7Cu;
    SET_GPR_U32(ctx, 31, 0x3B2E84u);
    ctx->pc = 0x3B2E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2E7Cu;
    // 0x3b2e80: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3B2E7Cu, 0x3B2E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2E84u;
label_3b2e84:
    // 0x3b2e84: 0xc0e8b50  jal         func_3A2D40
label_3b2e88:
    if (ctx->pc == 0x3B2E88u) {
        ctx->pc = 0x3B2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E84u;
        // 0x3b2e88: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2E8Cu;
        goto label_3b2e8c;
    }
    ctx->pc = 0x3B2E84u;
    SET_GPR_U32(ctx, 31, 0x3B2E8Cu);
    ctx->pc = 0x3B2E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2E84u;
    // 0x3b2e88: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3B2E84u, 0x3B2E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2E8Cu;
label_3b2e8c:
    // 0x3b2e8c: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x3b2e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3b2e90:
    // 0x3b2e90: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3b2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3b2e94:
    // 0x3b2e94: 0x3c053b4f  lui         $a1, 0x3B4F
    ctx->pc = 0x3b2e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15183 << 16));
label_3b2e98:
    // 0x3b2e98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b2e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b2e9c:
    // 0x3b2e9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b2e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3b2ea0:
    // 0x3b2ea0: 0x34a5efad  ori         $a1, $a1, 0xEFAD
    ctx->pc = 0x3b2ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61357);
label_3b2ea4:
    // 0x3b2ea4: 0xc0e9132  jal         func_3A44C8
label_3b2ea8:
    if (ctx->pc == 0x3B2EA8u) {
        ctx->pc = 0x3B2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2EA4u;
        // 0x3b2ea8: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2EACu;
        goto label_3b2eac;
    }
    ctx->pc = 0x3B2EA4u;
    SET_GPR_U32(ctx, 31, 0x3B2EACu);
    ctx->pc = 0x3B2EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2EA4u;
    // 0x3b2ea8: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3B2EA4u, 0x3B2EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2EACu;
label_3b2eac:
    // 0x3b2eac: 0xaea200c4  sw          $v0, 0xC4($s5)
    ctx->pc = 0x3b2eacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 2));
label_3b2eb0:
    // 0x3b2eb0: 0xc0e94d0  jal         func_3A5340
label_3b2eb4:
    if (ctx->pc == 0x3B2EB4u) {
        ctx->pc = 0x3B2EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2EB0u;
        // 0x3b2eb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2EB8u;
        goto label_3b2eb8;
    }
    ctx->pc = 0x3B2EB0u;
    SET_GPR_U32(ctx, 31, 0x3B2EB8u);
    ctx->pc = 0x3B2EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2EB0u;
    // 0x3b2eb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5340u, 0x3B2EB0u, 0x3B2EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2EB8u;
label_3b2eb8:
    // 0x3b2eb8: 0x1000000b  b           . + 4 + (0xB << 2)
label_3b2ebc:
    if (ctx->pc == 0x3B2EBCu) {
        ctx->pc = 0x3B2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2EB8u;
        // 0x3b2ebc: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2EC0u;
        goto label_3b2ec0;
    }
    ctx->pc = 0x3B2EB8u;
    {
        const bool branch_taken_0x3b2eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2EB8u;
        // 0x3b2ebc: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2eb8) {
            ctx->pc = 0x3B2EE8u;
            goto label_3b2ee8;
        }
    }
    ctx->pc = 0x3B2EC0u;
label_3b2ec0:
    // 0x3b2ec0: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x3b2ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_3b2ec4:
    // 0x3b2ec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b2ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b2ec8:
    // 0x3b2ec8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_3b2ecc:
    if (ctx->pc == 0x3B2ECCu) {
        ctx->pc = 0x3B2ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2EC8u;
        // 0x3b2ecc: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2ED0u;
        goto label_3b2ed0;
    }
    ctx->pc = 0x3B2EC8u;
    {
        const bool branch_taken_0x3b2ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B2ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2EC8u;
        // 0x3b2ecc: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2ec8) {
            ctx->pc = 0x3B2EE8u;
            goto label_3b2ee8;
        }
    }
    ctx->pc = 0x3B2ED0u;
label_3b2ed0:
    // 0x3b2ed0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x3b2ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3b2ed4:
    // 0x3b2ed4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3b2ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3b2ed8:
    // 0x3b2ed8: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x3b2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3b2edc:
    // 0x3b2edc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3b2edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3b2ee0:
    // 0x3b2ee0: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x3b2ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_3b2ee4:
    // 0x3b2ee4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3b2ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3b2ee8:
    // 0x3b2ee8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b2ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b2eec:
    // 0x3b2eec: 0xc0e9bb2  jal         func_3A6EC8
label_3b2ef0:
    if (ctx->pc == 0x3B2EF0u) {
        ctx->pc = 0x3B2EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2EECu;
        // 0x3b2ef0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2EF4u;
        goto label_3b2ef4;
    }
    ctx->pc = 0x3B2EECu;
    SET_GPR_U32(ctx, 31, 0x3B2EF4u);
    ctx->pc = 0x3B2EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2EECu;
    // 0x3b2ef0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3B2EECu, 0x3B2EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2EF4u;
label_3b2ef4:
    // 0x3b2ef4: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x3b2ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_3b2ef8:
    // 0x3b2ef8: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x3b2ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_3b2efc:
    // 0x3b2efc: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x3b2efcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3b2f00:
    // 0x3b2f00: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x3b2f00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3b2f04:
    // 0x3b2f04: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x3b2f04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3b2f08:
    // 0x3b2f08: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x3b2f08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3b2f0c:
    // 0x3b2f0c: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x3b2f0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3b2f10:
    // 0x3b2f10: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x3b2f10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3b2f14:
    // 0x3b2f14: 0x7bbe00f0  lq          $fp, 0xF0($sp)
    ctx->pc = 0x3b2f14u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3b2f18:
    // 0x3b2f18: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x3b2f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_3b2f1c:
    // 0x3b2f1c: 0xc7ba01b0  lwc1        $f26, 0x1B0($sp)
    ctx->pc = 0x3b2f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3b2f20:
    // 0x3b2f20: 0xc7b901a8  lwc1        $f25, 0x1A8($sp)
    ctx->pc = 0x3b2f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3b2f24:
    // 0x3b2f24: 0xc7b801a0  lwc1        $f24, 0x1A0($sp)
    ctx->pc = 0x3b2f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3b2f28:
    // 0x3b2f28: 0xc7b70198  lwc1        $f23, 0x198($sp)
    ctx->pc = 0x3b2f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3b2f2c:
    // 0x3b2f2c: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x3b2f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3b2f30:
    // 0x3b2f30: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x3b2f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b2f34:
    // 0x3b2f34: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x3b2f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b2f38:
    // 0x3b2f38: 0x3e00008  jr          $ra
label_3b2f3c:
    if (ctx->pc == 0x3B2F3Cu) {
        ctx->pc = 0x3B2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F38u;
        // 0x3b2f3c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2F40u;
        goto label_fallthrough_0x3b2f38;
    }
    ctx->pc = 0x3B2F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F38u;
        // 0x3b2f3c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b2f38:
    ctx->pc = 0x3B2F40u;
}
