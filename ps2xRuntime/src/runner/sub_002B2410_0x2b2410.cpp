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

// Function: sub_002B2410
// Address: 0x2b2410 - 0x2b2b90
void sub_002B2410_0x2b2410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2410_0x2b2410");
#endif

    switch (ctx->pc) {
        case 0x2b2410u: goto label_2b2410;
        case 0x2b2414u: goto label_2b2414;
        case 0x2b2418u: goto label_2b2418;
        case 0x2b241cu: goto label_2b241c;
        case 0x2b2420u: goto label_2b2420;
        case 0x2b2424u: goto label_2b2424;
        case 0x2b2428u: goto label_2b2428;
        case 0x2b242cu: goto label_2b242c;
        case 0x2b2430u: goto label_2b2430;
        case 0x2b2434u: goto label_2b2434;
        case 0x2b2438u: goto label_2b2438;
        case 0x2b243cu: goto label_2b243c;
        case 0x2b2440u: goto label_2b2440;
        case 0x2b2444u: goto label_2b2444;
        case 0x2b2448u: goto label_2b2448;
        case 0x2b244cu: goto label_2b244c;
        case 0x2b2450u: goto label_2b2450;
        case 0x2b2454u: goto label_2b2454;
        case 0x2b2458u: goto label_2b2458;
        case 0x2b245cu: goto label_2b245c;
        case 0x2b2460u: goto label_2b2460;
        case 0x2b2464u: goto label_2b2464;
        case 0x2b2468u: goto label_2b2468;
        case 0x2b246cu: goto label_2b246c;
        case 0x2b2470u: goto label_2b2470;
        case 0x2b2474u: goto label_2b2474;
        case 0x2b2478u: goto label_2b2478;
        case 0x2b247cu: goto label_2b247c;
        case 0x2b2480u: goto label_2b2480;
        case 0x2b2484u: goto label_2b2484;
        case 0x2b2488u: goto label_2b2488;
        case 0x2b248cu: goto label_2b248c;
        case 0x2b2490u: goto label_2b2490;
        case 0x2b2494u: goto label_2b2494;
        case 0x2b2498u: goto label_2b2498;
        case 0x2b249cu: goto label_2b249c;
        case 0x2b24a0u: goto label_2b24a0;
        case 0x2b24a4u: goto label_2b24a4;
        case 0x2b24a8u: goto label_2b24a8;
        case 0x2b24acu: goto label_2b24ac;
        case 0x2b24b0u: goto label_2b24b0;
        case 0x2b24b4u: goto label_2b24b4;
        case 0x2b24b8u: goto label_2b24b8;
        case 0x2b24bcu: goto label_2b24bc;
        case 0x2b24c0u: goto label_2b24c0;
        case 0x2b24c4u: goto label_2b24c4;
        case 0x2b24c8u: goto label_2b24c8;
        case 0x2b24ccu: goto label_2b24cc;
        case 0x2b24d0u: goto label_2b24d0;
        case 0x2b24d4u: goto label_2b24d4;
        case 0x2b24d8u: goto label_2b24d8;
        case 0x2b24dcu: goto label_2b24dc;
        case 0x2b24e0u: goto label_2b24e0;
        case 0x2b24e4u: goto label_2b24e4;
        case 0x2b24e8u: goto label_2b24e8;
        case 0x2b24ecu: goto label_2b24ec;
        case 0x2b24f0u: goto label_2b24f0;
        case 0x2b24f4u: goto label_2b24f4;
        case 0x2b24f8u: goto label_2b24f8;
        case 0x2b24fcu: goto label_2b24fc;
        case 0x2b2500u: goto label_2b2500;
        case 0x2b2504u: goto label_2b2504;
        case 0x2b2508u: goto label_2b2508;
        case 0x2b250cu: goto label_2b250c;
        case 0x2b2510u: goto label_2b2510;
        case 0x2b2514u: goto label_2b2514;
        case 0x2b2518u: goto label_2b2518;
        case 0x2b251cu: goto label_2b251c;
        case 0x2b2520u: goto label_2b2520;
        case 0x2b2524u: goto label_2b2524;
        case 0x2b2528u: goto label_2b2528;
        case 0x2b252cu: goto label_2b252c;
        case 0x2b2530u: goto label_2b2530;
        case 0x2b2534u: goto label_2b2534;
        case 0x2b2538u: goto label_2b2538;
        case 0x2b253cu: goto label_2b253c;
        case 0x2b2540u: goto label_2b2540;
        case 0x2b2544u: goto label_2b2544;
        case 0x2b2548u: goto label_2b2548;
        case 0x2b254cu: goto label_2b254c;
        case 0x2b2550u: goto label_2b2550;
        case 0x2b2554u: goto label_2b2554;
        case 0x2b2558u: goto label_2b2558;
        case 0x2b255cu: goto label_2b255c;
        case 0x2b2560u: goto label_2b2560;
        case 0x2b2564u: goto label_2b2564;
        case 0x2b2568u: goto label_2b2568;
        case 0x2b256cu: goto label_2b256c;
        case 0x2b2570u: goto label_2b2570;
        case 0x2b2574u: goto label_2b2574;
        case 0x2b2578u: goto label_2b2578;
        case 0x2b257cu: goto label_2b257c;
        case 0x2b2580u: goto label_2b2580;
        case 0x2b2584u: goto label_2b2584;
        case 0x2b2588u: goto label_2b2588;
        case 0x2b258cu: goto label_2b258c;
        case 0x2b2590u: goto label_2b2590;
        case 0x2b2594u: goto label_2b2594;
        case 0x2b2598u: goto label_2b2598;
        case 0x2b259cu: goto label_2b259c;
        case 0x2b25a0u: goto label_2b25a0;
        case 0x2b25a4u: goto label_2b25a4;
        case 0x2b25a8u: goto label_2b25a8;
        case 0x2b25acu: goto label_2b25ac;
        case 0x2b25b0u: goto label_2b25b0;
        case 0x2b25b4u: goto label_2b25b4;
        case 0x2b25b8u: goto label_2b25b8;
        case 0x2b25bcu: goto label_2b25bc;
        case 0x2b25c0u: goto label_2b25c0;
        case 0x2b25c4u: goto label_2b25c4;
        case 0x2b25c8u: goto label_2b25c8;
        case 0x2b25ccu: goto label_2b25cc;
        case 0x2b25d0u: goto label_2b25d0;
        case 0x2b25d4u: goto label_2b25d4;
        case 0x2b25d8u: goto label_2b25d8;
        case 0x2b25dcu: goto label_2b25dc;
        case 0x2b25e0u: goto label_2b25e0;
        case 0x2b25e4u: goto label_2b25e4;
        case 0x2b25e8u: goto label_2b25e8;
        case 0x2b25ecu: goto label_2b25ec;
        case 0x2b25f0u: goto label_2b25f0;
        case 0x2b25f4u: goto label_2b25f4;
        case 0x2b25f8u: goto label_2b25f8;
        case 0x2b25fcu: goto label_2b25fc;
        case 0x2b2600u: goto label_2b2600;
        case 0x2b2604u: goto label_2b2604;
        case 0x2b2608u: goto label_2b2608;
        case 0x2b260cu: goto label_2b260c;
        case 0x2b2610u: goto label_2b2610;
        case 0x2b2614u: goto label_2b2614;
        case 0x2b2618u: goto label_2b2618;
        case 0x2b261cu: goto label_2b261c;
        case 0x2b2620u: goto label_2b2620;
        case 0x2b2624u: goto label_2b2624;
        case 0x2b2628u: goto label_2b2628;
        case 0x2b262cu: goto label_2b262c;
        case 0x2b2630u: goto label_2b2630;
        case 0x2b2634u: goto label_2b2634;
        case 0x2b2638u: goto label_2b2638;
        case 0x2b263cu: goto label_2b263c;
        case 0x2b2640u: goto label_2b2640;
        case 0x2b2644u: goto label_2b2644;
        case 0x2b2648u: goto label_2b2648;
        case 0x2b264cu: goto label_2b264c;
        case 0x2b2650u: goto label_2b2650;
        case 0x2b2654u: goto label_2b2654;
        case 0x2b2658u: goto label_2b2658;
        case 0x2b265cu: goto label_2b265c;
        case 0x2b2660u: goto label_2b2660;
        case 0x2b2664u: goto label_2b2664;
        case 0x2b2668u: goto label_2b2668;
        case 0x2b266cu: goto label_2b266c;
        case 0x2b2670u: goto label_2b2670;
        case 0x2b2674u: goto label_2b2674;
        case 0x2b2678u: goto label_2b2678;
        case 0x2b267cu: goto label_2b267c;
        case 0x2b2680u: goto label_2b2680;
        case 0x2b2684u: goto label_2b2684;
        case 0x2b2688u: goto label_2b2688;
        case 0x2b268cu: goto label_2b268c;
        case 0x2b2690u: goto label_2b2690;
        case 0x2b2694u: goto label_2b2694;
        case 0x2b2698u: goto label_2b2698;
        case 0x2b269cu: goto label_2b269c;
        case 0x2b26a0u: goto label_2b26a0;
        case 0x2b26a4u: goto label_2b26a4;
        case 0x2b26a8u: goto label_2b26a8;
        case 0x2b26acu: goto label_2b26ac;
        case 0x2b26b0u: goto label_2b26b0;
        case 0x2b26b4u: goto label_2b26b4;
        case 0x2b26b8u: goto label_2b26b8;
        case 0x2b26bcu: goto label_2b26bc;
        case 0x2b26c0u: goto label_2b26c0;
        case 0x2b26c4u: goto label_2b26c4;
        case 0x2b26c8u: goto label_2b26c8;
        case 0x2b26ccu: goto label_2b26cc;
        case 0x2b26d0u: goto label_2b26d0;
        case 0x2b26d4u: goto label_2b26d4;
        case 0x2b26d8u: goto label_2b26d8;
        case 0x2b26dcu: goto label_2b26dc;
        case 0x2b26e0u: goto label_2b26e0;
        case 0x2b26e4u: goto label_2b26e4;
        case 0x2b26e8u: goto label_2b26e8;
        case 0x2b26ecu: goto label_2b26ec;
        case 0x2b26f0u: goto label_2b26f0;
        case 0x2b26f4u: goto label_2b26f4;
        case 0x2b26f8u: goto label_2b26f8;
        case 0x2b26fcu: goto label_2b26fc;
        case 0x2b2700u: goto label_2b2700;
        case 0x2b2704u: goto label_2b2704;
        case 0x2b2708u: goto label_2b2708;
        case 0x2b270cu: goto label_2b270c;
        case 0x2b2710u: goto label_2b2710;
        case 0x2b2714u: goto label_2b2714;
        case 0x2b2718u: goto label_2b2718;
        case 0x2b271cu: goto label_2b271c;
        case 0x2b2720u: goto label_2b2720;
        case 0x2b2724u: goto label_2b2724;
        case 0x2b2728u: goto label_2b2728;
        case 0x2b272cu: goto label_2b272c;
        case 0x2b2730u: goto label_2b2730;
        case 0x2b2734u: goto label_2b2734;
        case 0x2b2738u: goto label_2b2738;
        case 0x2b273cu: goto label_2b273c;
        case 0x2b2740u: goto label_2b2740;
        case 0x2b2744u: goto label_2b2744;
        case 0x2b2748u: goto label_2b2748;
        case 0x2b274cu: goto label_2b274c;
        case 0x2b2750u: goto label_2b2750;
        case 0x2b2754u: goto label_2b2754;
        case 0x2b2758u: goto label_2b2758;
        case 0x2b275cu: goto label_2b275c;
        case 0x2b2760u: goto label_2b2760;
        case 0x2b2764u: goto label_2b2764;
        case 0x2b2768u: goto label_2b2768;
        case 0x2b276cu: goto label_2b276c;
        case 0x2b2770u: goto label_2b2770;
        case 0x2b2774u: goto label_2b2774;
        case 0x2b2778u: goto label_2b2778;
        case 0x2b277cu: goto label_2b277c;
        case 0x2b2780u: goto label_2b2780;
        case 0x2b2784u: goto label_2b2784;
        case 0x2b2788u: goto label_2b2788;
        case 0x2b278cu: goto label_2b278c;
        case 0x2b2790u: goto label_2b2790;
        case 0x2b2794u: goto label_2b2794;
        case 0x2b2798u: goto label_2b2798;
        case 0x2b279cu: goto label_2b279c;
        case 0x2b27a0u: goto label_2b27a0;
        case 0x2b27a4u: goto label_2b27a4;
        case 0x2b27a8u: goto label_2b27a8;
        case 0x2b27acu: goto label_2b27ac;
        case 0x2b27b0u: goto label_2b27b0;
        case 0x2b27b4u: goto label_2b27b4;
        case 0x2b27b8u: goto label_2b27b8;
        case 0x2b27bcu: goto label_2b27bc;
        case 0x2b27c0u: goto label_2b27c0;
        case 0x2b27c4u: goto label_2b27c4;
        case 0x2b27c8u: goto label_2b27c8;
        case 0x2b27ccu: goto label_2b27cc;
        case 0x2b27d0u: goto label_2b27d0;
        case 0x2b27d4u: goto label_2b27d4;
        case 0x2b27d8u: goto label_2b27d8;
        case 0x2b27dcu: goto label_2b27dc;
        case 0x2b27e0u: goto label_2b27e0;
        case 0x2b27e4u: goto label_2b27e4;
        case 0x2b27e8u: goto label_2b27e8;
        case 0x2b27ecu: goto label_2b27ec;
        case 0x2b27f0u: goto label_2b27f0;
        case 0x2b27f4u: goto label_2b27f4;
        case 0x2b27f8u: goto label_2b27f8;
        case 0x2b27fcu: goto label_2b27fc;
        case 0x2b2800u: goto label_2b2800;
        case 0x2b2804u: goto label_2b2804;
        case 0x2b2808u: goto label_2b2808;
        case 0x2b280cu: goto label_2b280c;
        case 0x2b2810u: goto label_2b2810;
        case 0x2b2814u: goto label_2b2814;
        case 0x2b2818u: goto label_2b2818;
        case 0x2b281cu: goto label_2b281c;
        case 0x2b2820u: goto label_2b2820;
        case 0x2b2824u: goto label_2b2824;
        case 0x2b2828u: goto label_2b2828;
        case 0x2b282cu: goto label_2b282c;
        case 0x2b2830u: goto label_2b2830;
        case 0x2b2834u: goto label_2b2834;
        case 0x2b2838u: goto label_2b2838;
        case 0x2b283cu: goto label_2b283c;
        case 0x2b2840u: goto label_2b2840;
        case 0x2b2844u: goto label_2b2844;
        case 0x2b2848u: goto label_2b2848;
        case 0x2b284cu: goto label_2b284c;
        case 0x2b2850u: goto label_2b2850;
        case 0x2b2854u: goto label_2b2854;
        case 0x2b2858u: goto label_2b2858;
        case 0x2b285cu: goto label_2b285c;
        case 0x2b2860u: goto label_2b2860;
        case 0x2b2864u: goto label_2b2864;
        case 0x2b2868u: goto label_2b2868;
        case 0x2b286cu: goto label_2b286c;
        case 0x2b2870u: goto label_2b2870;
        case 0x2b2874u: goto label_2b2874;
        case 0x2b2878u: goto label_2b2878;
        case 0x2b287cu: goto label_2b287c;
        case 0x2b2880u: goto label_2b2880;
        case 0x2b2884u: goto label_2b2884;
        case 0x2b2888u: goto label_2b2888;
        case 0x2b288cu: goto label_2b288c;
        case 0x2b2890u: goto label_2b2890;
        case 0x2b2894u: goto label_2b2894;
        case 0x2b2898u: goto label_2b2898;
        case 0x2b289cu: goto label_2b289c;
        case 0x2b28a0u: goto label_2b28a0;
        case 0x2b28a4u: goto label_2b28a4;
        case 0x2b28a8u: goto label_2b28a8;
        case 0x2b28acu: goto label_2b28ac;
        case 0x2b28b0u: goto label_2b28b0;
        case 0x2b28b4u: goto label_2b28b4;
        case 0x2b28b8u: goto label_2b28b8;
        case 0x2b28bcu: goto label_2b28bc;
        case 0x2b28c0u: goto label_2b28c0;
        case 0x2b28c4u: goto label_2b28c4;
        case 0x2b28c8u: goto label_2b28c8;
        case 0x2b28ccu: goto label_2b28cc;
        case 0x2b28d0u: goto label_2b28d0;
        case 0x2b28d4u: goto label_2b28d4;
        case 0x2b28d8u: goto label_2b28d8;
        case 0x2b28dcu: goto label_2b28dc;
        case 0x2b28e0u: goto label_2b28e0;
        case 0x2b28e4u: goto label_2b28e4;
        case 0x2b28e8u: goto label_2b28e8;
        case 0x2b28ecu: goto label_2b28ec;
        case 0x2b28f0u: goto label_2b28f0;
        case 0x2b28f4u: goto label_2b28f4;
        case 0x2b28f8u: goto label_2b28f8;
        case 0x2b28fcu: goto label_2b28fc;
        case 0x2b2900u: goto label_2b2900;
        case 0x2b2904u: goto label_2b2904;
        case 0x2b2908u: goto label_2b2908;
        case 0x2b290cu: goto label_2b290c;
        case 0x2b2910u: goto label_2b2910;
        case 0x2b2914u: goto label_2b2914;
        case 0x2b2918u: goto label_2b2918;
        case 0x2b291cu: goto label_2b291c;
        case 0x2b2920u: goto label_2b2920;
        case 0x2b2924u: goto label_2b2924;
        case 0x2b2928u: goto label_2b2928;
        case 0x2b292cu: goto label_2b292c;
        case 0x2b2930u: goto label_2b2930;
        case 0x2b2934u: goto label_2b2934;
        case 0x2b2938u: goto label_2b2938;
        case 0x2b293cu: goto label_2b293c;
        case 0x2b2940u: goto label_2b2940;
        case 0x2b2944u: goto label_2b2944;
        case 0x2b2948u: goto label_2b2948;
        case 0x2b294cu: goto label_2b294c;
        case 0x2b2950u: goto label_2b2950;
        case 0x2b2954u: goto label_2b2954;
        case 0x2b2958u: goto label_2b2958;
        case 0x2b295cu: goto label_2b295c;
        case 0x2b2960u: goto label_2b2960;
        case 0x2b2964u: goto label_2b2964;
        case 0x2b2968u: goto label_2b2968;
        case 0x2b296cu: goto label_2b296c;
        case 0x2b2970u: goto label_2b2970;
        case 0x2b2974u: goto label_2b2974;
        case 0x2b2978u: goto label_2b2978;
        case 0x2b297cu: goto label_2b297c;
        case 0x2b2980u: goto label_2b2980;
        case 0x2b2984u: goto label_2b2984;
        case 0x2b2988u: goto label_2b2988;
        case 0x2b298cu: goto label_2b298c;
        case 0x2b2990u: goto label_2b2990;
        case 0x2b2994u: goto label_2b2994;
        case 0x2b2998u: goto label_2b2998;
        case 0x2b299cu: goto label_2b299c;
        case 0x2b29a0u: goto label_2b29a0;
        case 0x2b29a4u: goto label_2b29a4;
        case 0x2b29a8u: goto label_2b29a8;
        case 0x2b29acu: goto label_2b29ac;
        case 0x2b29b0u: goto label_2b29b0;
        case 0x2b29b4u: goto label_2b29b4;
        case 0x2b29b8u: goto label_2b29b8;
        case 0x2b29bcu: goto label_2b29bc;
        case 0x2b29c0u: goto label_2b29c0;
        case 0x2b29c4u: goto label_2b29c4;
        case 0x2b29c8u: goto label_2b29c8;
        case 0x2b29ccu: goto label_2b29cc;
        case 0x2b29d0u: goto label_2b29d0;
        case 0x2b29d4u: goto label_2b29d4;
        case 0x2b29d8u: goto label_2b29d8;
        case 0x2b29dcu: goto label_2b29dc;
        case 0x2b29e0u: goto label_2b29e0;
        case 0x2b29e4u: goto label_2b29e4;
        case 0x2b29e8u: goto label_2b29e8;
        case 0x2b29ecu: goto label_2b29ec;
        case 0x2b29f0u: goto label_2b29f0;
        case 0x2b29f4u: goto label_2b29f4;
        case 0x2b29f8u: goto label_2b29f8;
        case 0x2b29fcu: goto label_2b29fc;
        case 0x2b2a00u: goto label_2b2a00;
        case 0x2b2a04u: goto label_2b2a04;
        case 0x2b2a08u: goto label_2b2a08;
        case 0x2b2a0cu: goto label_2b2a0c;
        case 0x2b2a10u: goto label_2b2a10;
        case 0x2b2a14u: goto label_2b2a14;
        case 0x2b2a18u: goto label_2b2a18;
        case 0x2b2a1cu: goto label_2b2a1c;
        case 0x2b2a20u: goto label_2b2a20;
        case 0x2b2a24u: goto label_2b2a24;
        case 0x2b2a28u: goto label_2b2a28;
        case 0x2b2a2cu: goto label_2b2a2c;
        case 0x2b2a30u: goto label_2b2a30;
        case 0x2b2a34u: goto label_2b2a34;
        case 0x2b2a38u: goto label_2b2a38;
        case 0x2b2a3cu: goto label_2b2a3c;
        case 0x2b2a40u: goto label_2b2a40;
        case 0x2b2a44u: goto label_2b2a44;
        case 0x2b2a48u: goto label_2b2a48;
        case 0x2b2a4cu: goto label_2b2a4c;
        case 0x2b2a50u: goto label_2b2a50;
        case 0x2b2a54u: goto label_2b2a54;
        case 0x2b2a58u: goto label_2b2a58;
        case 0x2b2a5cu: goto label_2b2a5c;
        case 0x2b2a60u: goto label_2b2a60;
        case 0x2b2a64u: goto label_2b2a64;
        case 0x2b2a68u: goto label_2b2a68;
        case 0x2b2a6cu: goto label_2b2a6c;
        case 0x2b2a70u: goto label_2b2a70;
        case 0x2b2a74u: goto label_2b2a74;
        case 0x2b2a78u: goto label_2b2a78;
        case 0x2b2a7cu: goto label_2b2a7c;
        case 0x2b2a80u: goto label_2b2a80;
        case 0x2b2a84u: goto label_2b2a84;
        case 0x2b2a88u: goto label_2b2a88;
        case 0x2b2a8cu: goto label_2b2a8c;
        case 0x2b2a90u: goto label_2b2a90;
        case 0x2b2a94u: goto label_2b2a94;
        case 0x2b2a98u: goto label_2b2a98;
        case 0x2b2a9cu: goto label_2b2a9c;
        case 0x2b2aa0u: goto label_2b2aa0;
        case 0x2b2aa4u: goto label_2b2aa4;
        case 0x2b2aa8u: goto label_2b2aa8;
        case 0x2b2aacu: goto label_2b2aac;
        case 0x2b2ab0u: goto label_2b2ab0;
        case 0x2b2ab4u: goto label_2b2ab4;
        case 0x2b2ab8u: goto label_2b2ab8;
        case 0x2b2abcu: goto label_2b2abc;
        case 0x2b2ac0u: goto label_2b2ac0;
        case 0x2b2ac4u: goto label_2b2ac4;
        case 0x2b2ac8u: goto label_2b2ac8;
        case 0x2b2accu: goto label_2b2acc;
        case 0x2b2ad0u: goto label_2b2ad0;
        case 0x2b2ad4u: goto label_2b2ad4;
        case 0x2b2ad8u: goto label_2b2ad8;
        case 0x2b2adcu: goto label_2b2adc;
        case 0x2b2ae0u: goto label_2b2ae0;
        case 0x2b2ae4u: goto label_2b2ae4;
        case 0x2b2ae8u: goto label_2b2ae8;
        case 0x2b2aecu: goto label_2b2aec;
        case 0x2b2af0u: goto label_2b2af0;
        case 0x2b2af4u: goto label_2b2af4;
        case 0x2b2af8u: goto label_2b2af8;
        case 0x2b2afcu: goto label_2b2afc;
        case 0x2b2b00u: goto label_2b2b00;
        case 0x2b2b04u: goto label_2b2b04;
        case 0x2b2b08u: goto label_2b2b08;
        case 0x2b2b0cu: goto label_2b2b0c;
        case 0x2b2b10u: goto label_2b2b10;
        case 0x2b2b14u: goto label_2b2b14;
        case 0x2b2b18u: goto label_2b2b18;
        case 0x2b2b1cu: goto label_2b2b1c;
        case 0x2b2b20u: goto label_2b2b20;
        case 0x2b2b24u: goto label_2b2b24;
        case 0x2b2b28u: goto label_2b2b28;
        case 0x2b2b2cu: goto label_2b2b2c;
        case 0x2b2b30u: goto label_2b2b30;
        case 0x2b2b34u: goto label_2b2b34;
        case 0x2b2b38u: goto label_2b2b38;
        case 0x2b2b3cu: goto label_2b2b3c;
        case 0x2b2b40u: goto label_2b2b40;
        case 0x2b2b44u: goto label_2b2b44;
        case 0x2b2b48u: goto label_2b2b48;
        case 0x2b2b4cu: goto label_2b2b4c;
        case 0x2b2b50u: goto label_2b2b50;
        case 0x2b2b54u: goto label_2b2b54;
        case 0x2b2b58u: goto label_2b2b58;
        case 0x2b2b5cu: goto label_2b2b5c;
        case 0x2b2b60u: goto label_2b2b60;
        case 0x2b2b64u: goto label_2b2b64;
        case 0x2b2b68u: goto label_2b2b68;
        case 0x2b2b6cu: goto label_2b2b6c;
        case 0x2b2b70u: goto label_2b2b70;
        case 0x2b2b74u: goto label_2b2b74;
        case 0x2b2b78u: goto label_2b2b78;
        case 0x2b2b7cu: goto label_2b2b7c;
        case 0x2b2b80u: goto label_2b2b80;
        case 0x2b2b84u: goto label_2b2b84;
        case 0x2b2b88u: goto label_2b2b88;
        case 0x2b2b8cu: goto label_2b2b8c;
        default: break;
    }

    ctx->pc = 0x2b2410u;

label_2b2410:
    // 0x2b2410: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2b2410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_2b2414:
    // 0x2b2414: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x2b2414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_2b2418:
    // 0x2b2418: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x2b2418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_2b241c:
    // 0x2b241c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b241cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b2420:
    // 0x2b2420: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x2b2420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_2b2424:
    // 0x2b2424: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2b2424u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2428:
    // 0x2b2428: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x2b2428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_2b242c:
    // 0x2b242c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x2b242cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_2b2430:
    // 0x2b2430: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x2b2430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_2b2434:
    // 0x2b2434: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x2b2434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_2b2438:
    // 0x2b2438: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x2b2438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_2b243c:
    // 0x2b243c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2b243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_2b2440:
    // 0x2b2440: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b2440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2b2444:
    // 0x2b2444: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x2b2444u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_2b2448:
    // 0x2b2448: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x2b2448u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_2b244c:
    // 0x2b244c: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x2b244cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2b2450:
    // 0x2b2450: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b2450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b2454:
    // 0x2b2454: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b2454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b2458:
    // 0x2b2458: 0xc0a3678  jal         func_28D9E0
label_2b245c:
    if (ctx->pc == 0x2B245Cu) {
        ctx->pc = 0x2B245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2458u;
        // 0x2b245c: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2460u;
        goto label_2b2460;
    }
    ctx->pc = 0x2B2458u;
    SET_GPR_U32(ctx, 31, 0x2B2460u);
    ctx->pc = 0x2B245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2458u;
    // 0x2b245c: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9E0u, 0x2B2458u, 0x2B2460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2460u;
label_2b2460:
    // 0x2b2460: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2b2464:
    if (ctx->pc == 0x2B2464u) {
        ctx->pc = 0x2B2468u;
        goto label_2b2468;
    }
    ctx->pc = 0x2B2460u;
    {
        const bool branch_taken_0x2b2460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2460) {
            ctx->pc = 0x2B2498u;
            goto label_2b2498;
        }
    }
    ctx->pc = 0x2B2468u;
label_2b2468:
    // 0x2b2468: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b2468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b246c:
    // 0x2b246c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2b246cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2b2470:
    // 0x2b2470: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x2b2470u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2b2474:
    // 0x2b2474: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2b2478:
    if (ctx->pc == 0x2B2478u) {
        ctx->pc = 0x2B247Cu;
        goto label_2b247c;
    }
    ctx->pc = 0x2B2474u;
    {
        const bool branch_taken_0x2b2474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2474) {
            ctx->pc = 0x2B2498u;
            goto label_2b2498;
        }
    }
    ctx->pc = 0x2B247Cu;
label_2b247c:
    // 0x2b247c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2b247cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2b2480:
    // 0x2b2480: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2b2480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2b2484:
    // 0x2b2484: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2b2484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2b2488:
    // 0x2b2488: 0x40f809  jalr        $v0
label_2b248c:
    if (ctx->pc == 0x2B248Cu) {
        ctx->pc = 0x2B248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2488u;
        // 0x2b248c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2490u;
        goto label_2b2490;
    }
    ctx->pc = 0x2B2488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B2490u);
        ctx->pc = 0x2B248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2488u;
        // 0x2b248c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2488u, 0x2B2490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B2490u;
label_2b2490:
    // 0x2b2490: 0x38420014  xori        $v0, $v0, 0x14
    ctx->pc = 0x2b2490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)20);
label_2b2494:
    // 0x2b2494: 0x202b00a  movz        $s6, $s0, $v0
    ctx->pc = 0x2b2494u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 16));
label_2b2498:
    // 0x2b2498: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_2b249c:
    if (ctx->pc == 0x2B249Cu) {
        ctx->pc = 0x2B249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2498u;
        // 0x2b249c: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B24A0u;
        goto label_2b24a0;
    }
    ctx->pc = 0x2B2498u;
    {
        const bool branch_taken_0x2b2498 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2498u;
        // 0x2b249c: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2498) {
            ctx->pc = 0x2B24B0u;
            goto label_2b24b0;
        }
    }
    ctx->pc = 0x2B24A0u;
label_2b24a0:
    // 0x2b24a0: 0x96c2004c  lhu         $v0, 0x4C($s6)
    ctx->pc = 0x2b24a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 76)));
label_2b24a4:
    // 0x2b24a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b24a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b24a8:
    // 0x2b24a8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2b24a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2b24ac:
    // 0x2b24ac: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x2b24acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_2b24b0:
    // 0x2b24b0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2b24b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2b24b4:
    // 0x2b24b4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b24b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b24b8:
    // 0x2b24b8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2b24b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b24bc:
    // 0x2b24bc: 0xc0e409a  jal         func_390268
label_2b24c0:
    if (ctx->pc == 0x2B24C0u) {
        ctx->pc = 0x2B24C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24BCu;
        // 0x2b24c0: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B24C4u;
        goto label_2b24c4;
    }
    ctx->pc = 0x2B24BCu;
    SET_GPR_U32(ctx, 31, 0x2B24C4u);
    ctx->pc = 0x2B24C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B24BCu;
    // 0x2b24c0: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B24BCu, 0x2B24C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B24C4u;
label_2b24c4:
    // 0x2b24c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b24c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b24c8:
    // 0x2b24c8: 0xc0a34d6  jal         func_28D358
label_2b24cc:
    if (ctx->pc == 0x2B24CCu) {
        ctx->pc = 0x2B24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24C8u;
        // 0x2b24cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B24D0u;
        goto label_2b24d0;
    }
    ctx->pc = 0x2B24C8u;
    SET_GPR_U32(ctx, 31, 0x2B24D0u);
    ctx->pc = 0x2B24CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B24C8u;
    // 0x2b24cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2B24C8u, 0x2B24D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B24D0u;
label_2b24d0:
    // 0x2b24d0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b24d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b24d4:
    // 0x2b24d4: 0x56a00004  bnel        $s5, $zero, . + 4 + (0x4 << 2)
label_2b24d8:
    if (ctx->pc == 0x2B24D8u) {
        ctx->pc = 0x2B24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24D4u;
        // 0x2b24d8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B24DCu;
        goto label_2b24dc;
    }
    ctx->pc = 0x2B24D4u;
    {
        const bool branch_taken_0x2b24d4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b24d4) {
            ctx->pc = 0x2B24D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B24D4u;
            // 0x2b24d8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B24E8u;
            goto label_2b24e8;
        }
    }
    ctx->pc = 0x2B24DCu;
label_2b24dc:
    // 0x2b24dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b24dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b24e0:
    // 0x2b24e0: 0x1000019c  b           . + 4 + (0x19C << 2)
label_2b24e4:
    if (ctx->pc == 0x2B24E4u) {
        ctx->pc = 0x2B24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24E0u;
        // 0x2b24e4: 0x16100b  movn        $v0, $zero, $s6 (Delay Slot)
        if (GPR_U64(ctx, 22) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B24E8u;
        goto label_2b24e8;
    }
    ctx->pc = 0x2B24E0u;
    {
        const bool branch_taken_0x2b24e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24E0u;
        // 0x2b24e4: 0x16100b  movn        $v0, $zero, $s6 (Delay Slot)
        if (GPR_U64(ctx, 22) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b24e0) {
            ctx->pc = 0x2B2B54u;
            goto label_2b2b54;
        }
    }
    ctx->pc = 0x2B24E8u;
label_2b24e8:
    // 0x2b24e8: 0xc0a3fde  jal         func_28FF78
label_2b24ec:
    if (ctx->pc == 0x2B24ECu) {
        ctx->pc = 0x2B24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24E8u;
        // 0x2b24ec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B24F0u;
        goto label_2b24f0;
    }
    ctx->pc = 0x2B24E8u;
    SET_GPR_U32(ctx, 31, 0x2B24F0u);
    ctx->pc = 0x2B24ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B24E8u;
    // 0x2b24ec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF78u, 0x2B24E8u, 0x2B24F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B24F0u;
label_2b24f0:
    // 0x2b24f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2b24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2b24f4:
    // 0x2b24f4: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x2b24f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2b24f8:
    // 0x2b24f8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2b24f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2b24fc:
    // 0x2b24fc: 0x8c900048  lw          $s0, 0x48($a0)
    ctx->pc = 0x2b24fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2b2500:
    // 0x2b2500: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x2b2500u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2b2504:
    // 0x2b2504: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_2b2508:
    if (ctx->pc == 0x2B2508u) {
        ctx->pc = 0x2B2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2504u;
        // 0x2b2508: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B250Cu;
        goto label_2b250c;
    }
    ctx->pc = 0x2B2504u;
    {
        const bool branch_taken_0x2b2504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2504u;
        // 0x2b2508: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2504) {
            ctx->pc = 0x2B258Cu;
            goto label_2b258c;
        }
    }
    ctx->pc = 0x2B250Cu;
label_2b250c:
    // 0x2b250c: 0x24051770  addiu       $a1, $zero, 0x1770
    ctx->pc = 0x2b250cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_2b2510:
    // 0x2b2510: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2b2510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2b2514:
    // 0x2b2514: 0xc0cd4fc  jal         func_3353F0
label_2b2518:
    if (ctx->pc == 0x2B2518u) {
        ctx->pc = 0x2B2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2514u;
        // 0x2b2518: 0x24062ee0  addiu       $a2, $zero, 0x2EE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B251Cu;
        goto label_2b251c;
    }
    ctx->pc = 0x2B2514u;
    SET_GPR_U32(ctx, 31, 0x2B251Cu);
    ctx->pc = 0x2B2518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2514u;
    // 0x2b2518: 0x24062ee0  addiu       $a2, $zero, 0x2EE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2B2514u, 0x2B251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B251Cu;
label_2b251c:
    // 0x2b251c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b251cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b2520:
    // 0x2b2520: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b2520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2524:
    // 0x2b2524: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x2b2524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_2b2528:
    // 0x2b2528: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2b2528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b252c:
    // 0x2b252c: 0x54830018  bnel        $a0, $v1, . + 4 + (0x18 << 2)
label_2b2530:
    if (ctx->pc == 0x2B2530u) {
        ctx->pc = 0x2B2530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B252Cu;
        // 0x2b2530: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2534u;
        goto label_2b2534;
    }
    ctx->pc = 0x2B252Cu;
    {
        const bool branch_taken_0x2b252c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b252c) {
            ctx->pc = 0x2B2530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B252Cu;
            // 0x2b2530: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2590u;
            goto label_2b2590;
        }
    }
    ctx->pc = 0x2B2534u;
label_2b2534:
    // 0x2b2534: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x2b2534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2b2538:
    // 0x2b2538: 0xc0c6026  jal         func_318098
label_2b253c:
    if (ctx->pc == 0x2B253Cu) {
        ctx->pc = 0x2B253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2538u;
        // 0x2b253c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2540u;
        goto label_2b2540;
    }
    ctx->pc = 0x2B2538u;
    SET_GPR_U32(ctx, 31, 0x2B2540u);
    ctx->pc = 0x2B253Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2538u;
    // 0x2b253c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318098u, 0x2B2538u, 0x2B2540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2540u;
label_2b2540:
    // 0x2b2540: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2b2540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b2544:
    // 0x2b2544: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
label_2b2548:
    if (ctx->pc == 0x2B2548u) {
        ctx->pc = 0x2B2548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2544u;
        // 0x2b2548: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B254Cu;
        goto label_2b254c;
    }
    ctx->pc = 0x2B2544u;
    {
        const bool branch_taken_0x2b2544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b2544) {
            ctx->pc = 0x2B2548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2544u;
            // 0x2b2548: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2590u;
            goto label_2b2590;
        }
    }
    ctx->pc = 0x2B254Cu;
label_2b254c:
    // 0x2b254c: 0xc0a47b4  jal         func_291ED0
label_2b2550:
    if (ctx->pc == 0x2B2550u) {
        ctx->pc = 0x2B2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B254Cu;
        // 0x2b2550: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2554u;
        goto label_2b2554;
    }
    ctx->pc = 0x2B254Cu;
    SET_GPR_U32(ctx, 31, 0x2B2554u);
    ctx->pc = 0x2B2550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B254Cu;
    // 0x2b2550: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2B254Cu, 0x2B2554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2554u;
label_2b2554:
    // 0x2b2554: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2b2554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b2558:
    // 0x2b2558: 0x5444000d  bnel        $v0, $a0, . + 4 + (0xD << 2)
label_2b255c:
    if (ctx->pc == 0x2B255Cu) {
        ctx->pc = 0x2B255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2558u;
        // 0x2b255c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2560u;
        goto label_2b2560;
    }
    ctx->pc = 0x2B2558u;
    {
        const bool branch_taken_0x2b2558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b2558) {
            ctx->pc = 0x2B255Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2558u;
            // 0x2b255c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2590u;
            goto label_2b2590;
        }
    }
    ctx->pc = 0x2B2560u;
label_2b2560:
    // 0x2b2560: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2b2560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2b2564:
    // 0x2b2564: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b2564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b2568:
    // 0x2b2568: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b2568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b256c:
    // 0x2b256c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2b256cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2b2570:
    // 0x2b2570: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2b2570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2b2574:
    // 0x2b2574: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2b2574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2b2578:
    // 0x2b2578: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b2578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b257c:
    // 0x2b257c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b257cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2580:
    // 0x2b2580: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b2580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2584:
    // 0x2b2584: 0xc088178  jal         func_2205E0
label_2b2588:
    if (ctx->pc == 0x2B2588u) {
        ctx->pc = 0x2B2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2584u;
        // 0x2b2588: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B258Cu;
        goto label_2b258c;
    }
    ctx->pc = 0x2B2584u;
    SET_GPR_U32(ctx, 31, 0x2B258Cu);
    ctx->pc = 0x2B2588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2584u;
    // 0x2b2588: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2B2584u, 0x2B258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B258Cu;
label_2b258c:
    // 0x2b258c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2b258cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b2590:
    // 0x2b2590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2594:
    // 0x2b2594: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x2b2594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_2b2598:
    // 0x2b2598: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2b2598u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2b259c:
    // 0x2b259c: 0x1c40016d  bgtz        $v0, . + 4 + (0x16D << 2)
label_2b25a0:
    if (ctx->pc == 0x2B25A0u) {
        ctx->pc = 0x2B25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B259Cu;
        // 0x2b25a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B25A4u;
        goto label_2b25a4;
    }
    ctx->pc = 0x2B259Cu;
    {
        const bool branch_taken_0x2b259c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B259Cu;
        // 0x2b25a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b259c) {
            ctx->pc = 0x2B2B54u;
            goto label_2b2b54;
        }
    }
    ctx->pc = 0x2B25A4u;
label_2b25a4:
    // 0x2b25a4: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x2b25a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_2b25a8:
    // 0x2b25a8: 0x26b70090  addiu       $s7, $s5, 0x90
    ctx->pc = 0x2b25a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_2b25ac:
    // 0x2b25ac: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x2b25acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2b25b0:
    // 0x2b25b0: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2b25b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_2b25b4:
    // 0x2b25b4: 0x26144b00  addiu       $s4, $s0, 0x4B00
    ctx->pc = 0x2b25b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2b25b8:
    // 0x2b25b8: 0xc05959e  jal         func_165678
label_2b25bc:
    if (ctx->pc == 0x2B25BCu) {
        ctx->pc = 0x2B25BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25B8u;
        // 0x2b25bc: 0x247e0090  addiu       $fp, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B25C0u;
        goto label_2b25c0;
    }
    ctx->pc = 0x2B25B8u;
    SET_GPR_U32(ctx, 31, 0x2B25C0u);
    ctx->pc = 0x2B25BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B25B8u;
    // 0x2b25bc: 0x247e0090  addiu       $fp, $v1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2B25B8u, 0x2B25C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B25C0u;
label_2b25c0:
    // 0x2b25c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b25c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b25c4:
    // 0x2b25c4: 0x86e30002  lh          $v1, 0x2($s7)
    ctx->pc = 0x2b25c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2b25c8:
    // 0x2b25c8: 0x87c20002  lh          $v0, 0x2($fp)
    ctx->pc = 0x2b25c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_2b25cc:
    // 0x2b25cc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2b25ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2b25d0:
    // 0x2b25d0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b25d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2b25d4:
    // 0x2b25d4: 0x748821  addu        $s1, $v1, $s4
    ctx->pc = 0x2b25d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2b25d8:
    // 0x2b25d8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b25d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2b25dc:
    // 0x2b25dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b25dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b25e0:
    // 0x2b25e0: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x2b25e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_2b25e4:
    // 0x2b25e4: 0xc0cdb38  jal         func_336CE0
label_2b25e8:
    if (ctx->pc == 0x2B25E8u) {
        ctx->pc = 0x2B25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25E4u;
        // 0x2b25e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B25ECu;
        goto label_2b25ec;
    }
    ctx->pc = 0x2B25E4u;
    SET_GPR_U32(ctx, 31, 0x2B25ECu);
    ctx->pc = 0x2B25E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B25E4u;
    // 0x2b25e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B25E4u, 0x2B25ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B25ECu;
label_2b25ec:
    // 0x2b25ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b25ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b25f0:
    // 0x2b25f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b25f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b25f4:
    // 0x2b25f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b25f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b25f8:
    // 0x2b25f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b25f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b25fc:
    // 0x2b25fc: 0xc0889c4  jal         func_222710
label_2b2600:
    if (ctx->pc == 0x2B2600u) {
        ctx->pc = 0x2B2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25FCu;
        // 0x2b2600: 0xc44c012c  lwc1        $f12, 0x12C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2604u;
        goto label_2b2604;
    }
    ctx->pc = 0x2B25FCu;
    SET_GPR_U32(ctx, 31, 0x2B2604u);
    ctx->pc = 0x2B2600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B25FCu;
    // 0x2b2600: 0xc44c012c  lwc1        $f12, 0x12C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x222710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222710u, 0x2B25FCu, 0x2B2604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2604u;
label_2b2604:
    // 0x2b2604: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x2b2604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_2b2608:
    // 0x2b2608: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b260c:
    // 0x2b260c: 0x1604003f  bne         $s0, $a0, . + 4 + (0x3F << 2)
label_2b2610:
    if (ctx->pc == 0x2B2610u) {
        ctx->pc = 0x2B2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B260Cu;
        // 0x2b2610: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2614u;
        goto label_2b2614;
    }
    ctx->pc = 0x2B260Cu;
    {
        const bool branch_taken_0x2b260c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B260Cu;
        // 0x2b2610: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b260c) {
            ctx->pc = 0x2B270Cu;
            goto label_2b270c;
        }
    }
    ctx->pc = 0x2B2614u;
label_2b2614:
    // 0x2b2614: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b2614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b2618:
    // 0x2b2618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b2618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b261c:
    // 0x2b261c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b261cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2620:
    // 0x2b2620: 0xc0888dc  jal         func_222370
label_2b2624:
    if (ctx->pc == 0x2B2624u) {
        ctx->pc = 0x2B2624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2620u;
        // 0x2b2624: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2628u;
        goto label_2b2628;
    }
    ctx->pc = 0x2B2620u;
    SET_GPR_U32(ctx, 31, 0x2B2628u);
    ctx->pc = 0x2B2624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2620u;
    // 0x2b2624: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222370u, 0x2B2620u, 0x2B2628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2628u;
label_2b2628:
    // 0x2b2628: 0x14500038  bne         $v0, $s0, . + 4 + (0x38 << 2)
label_2b262c:
    if (ctx->pc == 0x2B262Cu) {
        ctx->pc = 0x2B262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2628u;
        // 0x2b262c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2630u;
        goto label_2b2630;
    }
    ctx->pc = 0x2B2628u;
    {
        const bool branch_taken_0x2b2628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2B262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2628u;
        // 0x2b262c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2628) {
            ctx->pc = 0x2B270Cu;
            goto label_2b270c;
        }
    }
    ctx->pc = 0x2B2630u;
label_2b2630:
    // 0x2b2630: 0xc087502  jal         func_21D408
label_2b2634:
    if (ctx->pc == 0x2B2634u) {
        ctx->pc = 0x2B2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2630u;
        // 0x2b2634: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2638u;
        goto label_2b2638;
    }
    ctx->pc = 0x2B2630u;
    SET_GPR_U32(ctx, 31, 0x2B2638u);
    ctx->pc = 0x2B2634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2630u;
    // 0x2b2634: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B2630u, 0x2B2638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2638u;
label_2b2638:
    // 0x2b2638: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x2b2638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_2b263c:
    // 0x2b263c: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_2b2640:
    if (ctx->pc == 0x2B2640u) {
        ctx->pc = 0x2B2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B263Cu;
        // 0x2b2640: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2644u;
        goto label_2b2644;
    }
    ctx->pc = 0x2B263Cu;
    {
        const bool branch_taken_0x2b263c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b263c) {
            ctx->pc = 0x2B2640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B263Cu;
            // 0x2b2640: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2680u;
            goto label_2b2680;
        }
    }
    ctx->pc = 0x2B2644u;
label_2b2644:
    // 0x2b2644: 0x86e40002  lh          $a0, 0x2($s7)
    ctx->pc = 0x2b2644u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2b2648:
    // 0x2b2648: 0x87c50002  lh          $a1, 0x2($fp)
    ctx->pc = 0x2b2648u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_2b264c:
    // 0x2b264c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b264cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2b2650:
    // 0x2b2650: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b2650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2b2654:
    // 0x2b2654: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2b2654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2b2658:
    // 0x2b2658: 0xc0cdb38  jal         func_336CE0
label_2b265c:
    if (ctx->pc == 0x2B265Cu) {
        ctx->pc = 0x2B265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2658u;
        // 0x2b265c: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2660u;
        goto label_2b2660;
    }
    ctx->pc = 0x2B2658u;
    SET_GPR_U32(ctx, 31, 0x2B2660u);
    ctx->pc = 0x2B265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2658u;
    // 0x2b265c: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B2658u, 0x2B2660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2660u;
label_2b2660:
    // 0x2b2660: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2b2660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2b2664:
    // 0x2b2664: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b2664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b2668:
    // 0x2b2668: 0x0  nop
    ctx->pc = 0x2b2668u;
    // NOP
label_2b266c:
    // 0x2b266c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b266cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b2670:
    // 0x2b2670: 0x0  nop
    ctx->pc = 0x2b2670u;
    // NOP
label_2b2674:
    // 0x2b2674: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_2b2678:
    if (ctx->pc == 0x2B2678u) {
        ctx->pc = 0x2B2678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2674u;
        // 0x2b2678: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B267Cu;
        goto label_2b267c;
    }
    ctx->pc = 0x2B2674u;
    {
        const bool branch_taken_0x2b2674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b2674) {
            ctx->pc = 0x2B2678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2674u;
            // 0x2b2678: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B267Cu;
            goto label_2b267c;
        }
    }
    ctx->pc = 0x2B267Cu;
label_2b267c:
    // 0x2b267c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b267cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b2680:
    // 0x2b2680: 0xc0a4162  jal         func_290588
label_2b2684:
    if (ctx->pc == 0x2B2684u) {
        ctx->pc = 0x2B2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2680u;
        // 0x2b2684: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2688u;
        goto label_2b2688;
    }
    ctx->pc = 0x2B2680u;
    SET_GPR_U32(ctx, 31, 0x2B2688u);
    ctx->pc = 0x2B2684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2680u;
    // 0x2b2684: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290588u, 0x2B2680u, 0x2B2688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2688u;
label_2b2688:
    // 0x2b2688: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x2b2688u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_2b268c:
    // 0x2b268c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2690:
    // 0x2b2690: 0x1622001e  bne         $s1, $v0, . + 4 + (0x1E << 2)
label_2b2694:
    if (ctx->pc == 0x2B2694u) {
        ctx->pc = 0x2B2698u;
        goto label_2b2698;
    }
    ctx->pc = 0x2B2690u;
    {
        const bool branch_taken_0x2b2690 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b2690) {
            ctx->pc = 0x2B270Cu;
            goto label_2b270c;
        }
    }
    ctx->pc = 0x2B2698u;
label_2b2698:
    // 0x2b2698: 0x16c00008  bnez        $s6, . + 4 + (0x8 << 2)
label_2b269c:
    if (ctx->pc == 0x2B269Cu) {
        ctx->pc = 0x2B26A0u;
        goto label_2b26a0;
    }
    ctx->pc = 0x2B2698u;
    {
        const bool branch_taken_0x2b2698 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2698) {
            ctx->pc = 0x2B26BCu;
            goto label_2b26bc;
        }
    }
    ctx->pc = 0x2B26A0u;
label_2b26a0:
    // 0x2b26a0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2b26a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_2b26a4:
    // 0x2b26a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b26a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b26a8:
    // 0x2b26a8: 0x0  nop
    ctx->pc = 0x2b26a8u;
    // NOP
label_2b26ac:
    // 0x2b26ac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2b26acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b26b0:
    // 0x2b26b0: 0x0  nop
    ctx->pc = 0x2b26b0u;
    // NOP
label_2b26b4:
    // 0x2b26b4: 0x45010127  bc1t        . + 4 + (0x127 << 2)
label_2b26b8:
    if (ctx->pc == 0x2B26B8u) {
        ctx->pc = 0x2B26B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26B4u;
        // 0x2b26b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B26BCu;
        goto label_2b26bc;
    }
    ctx->pc = 0x2B26B4u;
    {
        const bool branch_taken_0x2b26b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B26B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26B4u;
        // 0x2b26b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26b4) {
            ctx->pc = 0x2B2B54u;
            goto label_2b2b54;
        }
    }
    ctx->pc = 0x2B26BCu;
label_2b26bc:
    // 0x2b26bc: 0xc0a4e54  jal         func_293950
label_2b26c0:
    if (ctx->pc == 0x2B26C0u) {
        ctx->pc = 0x2B26C4u;
        goto label_2b26c4;
    }
    ctx->pc = 0x2B26BCu;
    SET_GPR_U32(ctx, 31, 0x2B26C4u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2B26BCu, 0x2B26C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B26C4u;
label_2b26c4:
    // 0x2b26c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b26c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b26c8:
    // 0x2b26c8: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2b26cc:
    if (ctx->pc == 0x2B26CCu) {
        ctx->pc = 0x2B26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26C8u;
        // 0x2b26cc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B26D0u;
        goto label_2b26d0;
    }
    ctx->pc = 0x2B26C8u;
    {
        const bool branch_taken_0x2b26c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b26c8) {
            ctx->pc = 0x2B26CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B26C8u;
            // 0x2b26cc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B26FCu;
            goto label_2b26fc;
        }
    }
    ctx->pc = 0x2B26D0u;
label_2b26d0:
    // 0x2b26d0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2b26d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2b26d4:
    // 0x2b26d4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b26d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b26d8:
    // 0x2b26d8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b26dc:
    // 0x2b26dc: 0x40f809  jalr        $v0
label_2b26e0:
    if (ctx->pc == 0x2B26E0u) {
        ctx->pc = 0x2B26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26DCu;
        // 0x2b26e0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B26E4u;
        goto label_2b26e4;
    }
    ctx->pc = 0x2B26DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B26E4u);
        ctx->pc = 0x2B26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26DCu;
        // 0x2b26e0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B26DCu, 0x2B26E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B26E4u;
label_2b26e4:
    // 0x2b26e4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b26e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b26e8:
    // 0x2b26e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b26e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b26ec:
    // 0x2b26ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b26ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b26f0:
    // 0x2b26f0: 0xc0abd6c  jal         func_2AF5B0
label_2b26f4:
    if (ctx->pc == 0x2B26F4u) {
        ctx->pc = 0x2B26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26F0u;
        // 0x2b26f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B26F8u;
        goto label_2b26f8;
    }
    ctx->pc = 0x2B26F0u;
    SET_GPR_U32(ctx, 31, 0x2B26F8u);
    ctx->pc = 0x2B26F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B26F0u;
    // 0x2b26f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x2B26F0u, 0x2B26F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B26F8u;
label_2b26f8:
    // 0x2b26f8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b26f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b26fc:
    // 0x2b26fc: 0xc0a35d6  jal         func_28D758
label_2b2700:
    if (ctx->pc == 0x2B2700u) {
        ctx->pc = 0x2B2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26FCu;
        // 0x2b2700: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2704u;
        goto label_2b2704;
    }
    ctx->pc = 0x2B26FCu;
    SET_GPR_U32(ctx, 31, 0x2B2704u);
    ctx->pc = 0x2B2700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B26FCu;
    // 0x2b2700: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2B26FCu, 0x2B2704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2704u;
label_2b2704:
    // 0x2b2704: 0x10000113  b           . + 4 + (0x113 << 2)
label_2b2708:
    if (ctx->pc == 0x2B2708u) {
        ctx->pc = 0x2B2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2704u;
        // 0x2b2708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B270Cu;
        goto label_2b270c;
    }
    ctx->pc = 0x2B2704u;
    {
        const bool branch_taken_0x2b2704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2704u;
        // 0x2b2708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2704) {
            ctx->pc = 0x2B2B54u;
            goto label_2b2b54;
        }
    }
    ctx->pc = 0x2B270Cu;
label_2b270c:
    // 0x2b270c: 0x56c00009  bnel        $s6, $zero, . + 4 + (0x9 << 2)
label_2b2710:
    if (ctx->pc == 0x2B2710u) {
        ctx->pc = 0x2B2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B270Cu;
        // 0x2b2710: 0x86620092  lh          $v0, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2714u;
        goto label_2b2714;
    }
    ctx->pc = 0x2B270Cu;
    {
        const bool branch_taken_0x2b270c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b270c) {
            ctx->pc = 0x2B2710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B270Cu;
            // 0x2b2710: 0x86620092  lh          $v0, 0x92($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2734u;
            goto label_2b2734;
        }
    }
    ctx->pc = 0x2B2714u;
label_2b2714:
    // 0x2b2714: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2b2714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_2b2718:
    // 0x2b2718: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b2718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b271c:
    // 0x2b271c: 0x0  nop
    ctx->pc = 0x2b271cu;
    // NOP
label_2b2720:
    // 0x2b2720: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2b2720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b2724:
    // 0x2b2724: 0x0  nop
    ctx->pc = 0x2b2724u;
    // NOP
label_2b2728:
    // 0x2b2728: 0x4501010a  bc1t        . + 4 + (0x10A << 2)
label_2b272c:
    if (ctx->pc == 0x2B272Cu) {
        ctx->pc = 0x2B272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2728u;
        // 0x2b272c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2730u;
        goto label_2b2730;
    }
    ctx->pc = 0x2B2728u;
    {
        const bool branch_taken_0x2b2728 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2728u;
        // 0x2b272c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2728) {
            ctx->pc = 0x2B2B54u;
            goto label_2b2b54;
        }
    }
    ctx->pc = 0x2B2730u;
label_2b2730:
    // 0x2b2730: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2b2730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2b2734:
    // 0x2b2734: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2b2734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2b2738:
    // 0x2b2738: 0x24834b00  addiu       $v1, $a0, 0x4B00
    ctx->pc = 0x2b2738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2b273c:
    // 0x2b273c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b273cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2b2740:
    // 0x2b2740: 0x12600066  beqz        $s3, . + 4 + (0x66 << 2)
label_2b2744:
    if (ctx->pc == 0x2B2744u) {
        ctx->pc = 0x2B2744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2740u;
        // 0x2b2744: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2748u;
        goto label_2b2748;
    }
    ctx->pc = 0x2B2740u;
    {
        const bool branch_taken_0x2b2740 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2740u;
        // 0x2b2744: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2740) {
            ctx->pc = 0x2B28DCu;
            goto label_2b28dc;
        }
    }
    ctx->pc = 0x2B2748u;
label_2b2748:
    // 0x2b2748: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b2748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b274c:
    // 0x2b274c: 0xc08750a  jal         func_21D428
label_2b2750:
    if (ctx->pc == 0x2B2750u) {
        ctx->pc = 0x2B2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B274Cu;
        // 0x2b2750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2754u;
        goto label_2b2754;
    }
    ctx->pc = 0x2B274Cu;
    SET_GPR_U32(ctx, 31, 0x2B2754u);
    ctx->pc = 0x2B2750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B274Cu;
    // 0x2b2750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2B274Cu, 0x2B2754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2754u;
label_2b2754:
    // 0x2b2754: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2758:
    // 0x2b2758: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x2b2758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2b275c:
    // 0x2b275c: 0xc0a58bc  jal         func_2962F0
label_2b2760:
    if (ctx->pc == 0x2B2760u) {
        ctx->pc = 0x2B2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B275Cu;
        // 0x2b2760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2764u;
        goto label_2b2764;
    }
    ctx->pc = 0x2B275Cu;
    SET_GPR_U32(ctx, 31, 0x2B2764u);
    ctx->pc = 0x2B2760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B275Cu;
    // 0x2b2760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2962F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962F0u, 0x2B275Cu, 0x2B2764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2764u;
label_2b2764:
    // 0x2b2764: 0x440004c  bltz        $v0, . + 4 + (0x4C << 2)
label_2b2768:
    if (ctx->pc == 0x2B2768u) {
        ctx->pc = 0x2B2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2764u;
        // 0x2b2768: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B276Cu;
        goto label_2b276c;
    }
    ctx->pc = 0x2B2764u;
    {
        const bool branch_taken_0x2b2764 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2764u;
        // 0x2b2768: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2764) {
            ctx->pc = 0x2B2898u;
            goto label_2b2898;
        }
    }
    ctx->pc = 0x2B276Cu;
label_2b276c:
    // 0x2b276c: 0xc0a58d6  jal         func_296358
label_2b2770:
    if (ctx->pc == 0x2B2770u) {
        ctx->pc = 0x2B2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B276Cu;
        // 0x2b2770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2774u;
        goto label_2b2774;
    }
    ctx->pc = 0x2B276Cu;
    SET_GPR_U32(ctx, 31, 0x2B2774u);
    ctx->pc = 0x2B2770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B276Cu;
    // 0x2b2770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296358u, 0x2B276Cu, 0x2B2774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2774u;
label_2b2774:
    // 0x2b2774: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b2774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2778:
    // 0x2b2778: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b2778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b277c:
    // 0x2b277c: 0x10c20035  beq         $a2, $v0, . + 4 + (0x35 << 2)
label_2b2780:
    if (ctx->pc == 0x2B2780u) {
        ctx->pc = 0x2B2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B277Cu;
        // 0x2b2780: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2784u;
        goto label_2b2784;
    }
    ctx->pc = 0x2B277Cu;
    {
        const bool branch_taken_0x2b277c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B277Cu;
        // 0x2b2780: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b277c) {
            ctx->pc = 0x2B2854u;
            goto label_2b2854;
        }
    }
    ctx->pc = 0x2B2784u;
label_2b2784:
    // 0x2b2784: 0xc0a5904  jal         func_296410
label_2b2788:
    if (ctx->pc == 0x2B2788u) {
        ctx->pc = 0x2B2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2784u;
        // 0x2b2788: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B278Cu;
        goto label_2b278c;
    }
    ctx->pc = 0x2B2784u;
    SET_GPR_U32(ctx, 31, 0x2B278Cu);
    ctx->pc = 0x2B2788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2784u;
    // 0x2b2788: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296410u, 0x2B2784u, 0x2B278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B278Cu;
label_2b278c:
    // 0x2b278c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2b278cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2b2790:
    // 0x2b2790: 0xc0cdb38  jal         func_336CE0
label_2b2794:
    if (ctx->pc == 0x2B2794u) {
        ctx->pc = 0x2B2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2790u;
        // 0x2b2794: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2798u;
        goto label_2b2798;
    }
    ctx->pc = 0x2B2790u;
    SET_GPR_U32(ctx, 31, 0x2B2798u);
    ctx->pc = 0x2B2794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2790u;
    // 0x2b2794: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B2790u, 0x2B2798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2798u;
label_2b2798:
    // 0x2b2798: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2b2798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b279c:
    // 0x2b279c: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x2b279cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
label_2b27a0:
    // 0x2b27a0: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2b27a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_2b27a4:
    // 0x2b27a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b27a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b27a8:
    // 0x2b27a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b27a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b27ac:
    // 0x2b27ac: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_2b27b0:
    if (ctx->pc == 0x2B27B0u) {
        ctx->pc = 0x2B27B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27ACu;
        // 0x2b27b0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B27B4u;
        goto label_2b27b4;
    }
    ctx->pc = 0x2B27ACu;
    {
        const bool branch_taken_0x2b27ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B27B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27ACu;
        // 0x2b27b0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27ac) {
            ctx->pc = 0x2B27ECu;
            goto label_2b27ec;
        }
    }
    ctx->pc = 0x2B27B4u;
label_2b27b4:
    // 0x2b27b4: 0x3c01441c  lui         $at, 0x441C
    ctx->pc = 0x2b27b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17436 << 16));
label_2b27b8:
    // 0x2b27b8: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x2b27b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_2b27bc:
    // 0x2b27bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b27bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b27c0:
    // 0x2b27c0: 0x0  nop
    ctx->pc = 0x2b27c0u;
    // NOP
label_2b27c4:
    // 0x2b27c4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2b27c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b27c8:
    // 0x2b27c8: 0x0  nop
    ctx->pc = 0x2b27c8u;
    // NOP
label_2b27cc:
    // 0x2b27cc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2b27d0:
    if (ctx->pc == 0x2B27D0u) {
        ctx->pc = 0x2B27D4u;
        goto label_2b27d4;
    }
    ctx->pc = 0x2B27CCu;
    {
        const bool branch_taken_0x2b27cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b27cc) {
            ctx->pc = 0x2B27ECu;
            goto label_2b27ec;
        }
    }
    ctx->pc = 0x2B27D4u;
label_2b27d4:
    // 0x2b27d4: 0x8e6201a8  lw          $v0, 0x1A8($s3)
    ctx->pc = 0x2b27d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
label_2b27d8:
    // 0x2b27d8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2b27d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2b27dc:
    // 0x2b27dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b27e0:
    if (ctx->pc == 0x2B27E0u) {
        ctx->pc = 0x2B27E4u;
        goto label_2b27e4;
    }
    ctx->pc = 0x2B27DCu;
    {
        const bool branch_taken_0x2b27dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b27dc) {
            ctx->pc = 0x2B27ECu;
            goto label_2b27ec;
        }
    }
    ctx->pc = 0x2B27E4u;
label_2b27e4:
    // 0x2b27e4: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x2b27e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
label_2b27e8:
    // 0x2b27e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b27e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b27ec:
    // 0x2b27ec: 0x0  nop
    ctx->pc = 0x2b27ecu;
    // NOP
label_2b27f0:
    // 0x2b27f0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2b27f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b27f4:
    // 0x2b27f4: 0x0  nop
    ctx->pc = 0x2b27f4u;
    // NOP
label_2b27f8:
    // 0x2b27f8: 0x45000038  bc1f        . + 4 + (0x38 << 2)
label_2b27fc:
    if (ctx->pc == 0x2B27FCu) {
        ctx->pc = 0x2B2800u;
        goto label_2b2800;
    }
    ctx->pc = 0x2B27F8u;
    {
        const bool branch_taken_0x2b27f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b27f8) {
            ctx->pc = 0x2B28DCu;
            goto label_2b28dc;
        }
    }
    ctx->pc = 0x2B2800u;
label_2b2800:
    // 0x2b2800: 0xc0a4e54  jal         func_293950
label_2b2804:
    if (ctx->pc == 0x2B2804u) {
        ctx->pc = 0x2B2808u;
        goto label_2b2808;
    }
    ctx->pc = 0x2B2800u;
    SET_GPR_U32(ctx, 31, 0x2B2808u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2B2800u, 0x2B2808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2808u;
label_2b2808:
    // 0x2b2808: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b280c:
    // 0x2b280c: 0x5200ffbb  beql        $s0, $zero, . + 4 + (-0x45 << 2)
label_2b2810:
    if (ctx->pc == 0x2B2810u) {
        ctx->pc = 0x2B2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B280Cu;
        // 0x2b2810: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2814u;
        goto label_2b2814;
    }
    ctx->pc = 0x2B280Cu;
    {
        const bool branch_taken_0x2b280c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b280c) {
            ctx->pc = 0x2B2810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B280Cu;
            // 0x2b2810: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B26FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b26fc;
        }
    }
    ctx->pc = 0x2B2814u;
label_2b2814:
    // 0x2b2814: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2b2814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b2818:
    // 0x2b2818: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b2818u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b281c:
    // 0x2b281c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b281cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b2820:
    // 0x2b2820: 0x40f809  jalr        $v0
label_2b2824:
    if (ctx->pc == 0x2B2824u) {
        ctx->pc = 0x2B2824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2820u;
        // 0x2b2824: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2828u;
        goto label_2b2828;
    }
    ctx->pc = 0x2B2820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B2828u);
        ctx->pc = 0x2B2824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2820u;
        // 0x2b2824: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2820u, 0x2B2828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B2828u;
label_2b2828:
    // 0x2b2828: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b2828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b282c:
    // 0x2b282c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b282cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2830:
    // 0x2b2830: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2b2830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_2b2834:
    // 0x2b2834: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2b2834u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2b2838:
    // 0x2b2838: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b2838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b283c:
    // 0x2b283c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b283cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b2840:
    // 0x2b2840: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b2840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2844:
    // 0x2b2844: 0xc0b7eea  jal         func_2DFBA8
label_2b2848:
    if (ctx->pc == 0x2B2848u) {
        ctx->pc = 0x2B2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2844u;
        // 0x2b2848: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B284Cu;
        goto label_2b284c;
    }
    ctx->pc = 0x2B2844u;
    SET_GPR_U32(ctx, 31, 0x2B284Cu);
    ctx->pc = 0x2B2848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2844u;
    // 0x2b2848: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBA8u, 0x2B2844u, 0x2B284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B284Cu;
label_2b284c:
    // 0x2b284c: 0x1000ffab  b           . + 4 + (-0x55 << 2)
label_2b2850:
    if (ctx->pc == 0x2B2850u) {
        ctx->pc = 0x2B2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B284Cu;
        // 0x2b2850: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2854u;
        goto label_2b2854;
    }
    ctx->pc = 0x2B284Cu;
    {
        const bool branch_taken_0x2b284c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B284Cu;
        // 0x2b2850: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b284c) {
            ctx->pc = 0x2B26FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b26fc;
        }
    }
    ctx->pc = 0x2B2854u;
label_2b2854:
    // 0x2b2854: 0xc0a367c  jal         func_28D9F0
label_2b2858:
    if (ctx->pc == 0x2B2858u) {
        ctx->pc = 0x2B2858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2854u;
        // 0x2b2858: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B285Cu;
        goto label_2b285c;
    }
    ctx->pc = 0x2B2854u;
    SET_GPR_U32(ctx, 31, 0x2B285Cu);
    ctx->pc = 0x2B2858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2854u;
    // 0x2b2858: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B2854u, 0x2B285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B285Cu;
label_2b285c:
    // 0x2b285c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b285cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2860:
    // 0x2b2860: 0x108000bb  beqz        $a0, . + 4 + (0xBB << 2)
label_2b2864:
    if (ctx->pc == 0x2B2864u) {
        ctx->pc = 0x2B2864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2860u;
        // 0x2b2864: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2868u;
        goto label_2b2868;
    }
    ctx->pc = 0x2B2860u;
    {
        const bool branch_taken_0x2b2860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2860u;
        // 0x2b2864: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2860) {
            ctx->pc = 0x2B2B50u;
            goto label_2b2b50;
        }
    }
    ctx->pc = 0x2B2868u;
label_2b2868:
    // 0x2b2868: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b2868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b286c:
    // 0x2b286c: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2b286cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2b2870:
    // 0x2b2870: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b2870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b2874:
    // 0x2b2874: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b2874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2b2878:
    // 0x2b2878: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b2878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b287c:
    // 0x2b287c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2b287cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b2880:
    // 0x2b2880: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b2880u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2884:
    // 0x2b2884: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2b2884u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b2888:
    // 0x2b2888: 0xc0bee7a  jal         func_2FB9E8
label_2b288c:
    if (ctx->pc == 0x2B288Cu) {
        ctx->pc = 0x2B288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2888u;
        // 0x2b288c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2890u;
        goto label_2b2890;
    }
    ctx->pc = 0x2B2888u;
    SET_GPR_U32(ctx, 31, 0x2B2890u);
    ctx->pc = 0x2B288Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2888u;
    // 0x2b288c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2B2888u, 0x2B2890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2890u;
label_2b2890:
    // 0x2b2890: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_2b2894:
    if (ctx->pc == 0x2B2894u) {
        ctx->pc = 0x2B2894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2890u;
        // 0x2b2894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2898u;
        goto label_2b2898;
    }
    ctx->pc = 0x2B2890u;
    {
        const bool branch_taken_0x2b2890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2890u;
        // 0x2b2894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2890) {
            ctx->pc = 0x2B2B54u;
            goto label_2b2b54;
        }
    }
    ctx->pc = 0x2B2898u;
label_2b2898:
    // 0x2b2898: 0xc0a367c  jal         func_28D9F0
label_2b289c:
    if (ctx->pc == 0x2B289Cu) {
        ctx->pc = 0x2B289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2898u;
        // 0x2b289c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B28A0u;
        goto label_2b28a0;
    }
    ctx->pc = 0x2B2898u;
    SET_GPR_U32(ctx, 31, 0x2B28A0u);
    ctx->pc = 0x2B289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2898u;
    // 0x2b289c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B2898u, 0x2B28A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B28A0u;
label_2b28a0:
    // 0x2b28a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b28a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b28a4:
    // 0x2b28a4: 0x108000aa  beqz        $a0, . + 4 + (0xAA << 2)
label_2b28a8:
    if (ctx->pc == 0x2B28A8u) {
        ctx->pc = 0x2B28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28A4u;
        // 0x2b28a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B28ACu;
        goto label_2b28ac;
    }
    ctx->pc = 0x2B28A4u;
    {
        const bool branch_taken_0x2b28a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28A4u;
        // 0x2b28a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28a4) {
            ctx->pc = 0x2B2B50u;
            goto label_2b2b50;
        }
    }
    ctx->pc = 0x2B28ACu;
label_2b28ac:
    // 0x2b28ac: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b28acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b28b0:
    // 0x2b28b0: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2b28b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2b28b4:
    // 0x2b28b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b28b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b28b8:
    // 0x2b28b8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b28b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2b28bc:
    // 0x2b28bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b28bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b28c0:
    // 0x2b28c0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2b28c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b28c4:
    // 0x2b28c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b28c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b28c8:
    // 0x2b28c8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2b28c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b28cc:
    // 0x2b28cc: 0xc0bee7a  jal         func_2FB9E8
label_2b28d0:
    if (ctx->pc == 0x2B28D0u) {
        ctx->pc = 0x2B28D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28CCu;
        // 0x2b28d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B28D4u;
        goto label_2b28d4;
    }
    ctx->pc = 0x2B28CCu;
    SET_GPR_U32(ctx, 31, 0x2B28D4u);
    ctx->pc = 0x2B28D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B28CCu;
    // 0x2b28d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2B28CCu, 0x2B28D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B28D4u;
label_2b28d4:
    // 0x2b28d4: 0x1000009f  b           . + 4 + (0x9F << 2)
label_2b28d8:
    if (ctx->pc == 0x2B28D8u) {
        ctx->pc = 0x2B28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28D4u;
        // 0x2b28d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B28DCu;
        goto label_2b28dc;
    }
    ctx->pc = 0x2B28D4u;
    {
        const bool branch_taken_0x2b28d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28D4u;
        // 0x2b28d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28d4) {
            ctx->pc = 0x2B2B54u;
            goto label_2b2b54;
        }
    }
    ctx->pc = 0x2B28DCu;
label_2b28dc:
    // 0x2b28dc: 0x3c01441c  lui         $at, 0x441C
    ctx->pc = 0x2b28dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17436 << 16));
label_2b28e0:
    // 0x2b28e0: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x2b28e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_2b28e4:
    // 0x2b28e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b28e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b28e8:
    // 0x2b28e8: 0x0  nop
    ctx->pc = 0x2b28e8u;
    // NOP
label_2b28ec:
    // 0x2b28ec: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2b28ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b28f0:
    // 0x2b28f0: 0x0  nop
    ctx->pc = 0x2b28f0u;
    // NOP
label_2b28f4:
    // 0x2b28f4: 0x45000096  bc1f        . + 4 + (0x96 << 2)
label_2b28f8:
    if (ctx->pc == 0x2B28F8u) {
        ctx->pc = 0x2B28F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28F4u;
        // 0x2b28f8: 0x3c11006f  lui         $s1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B28FCu;
        goto label_2b28fc;
    }
    ctx->pc = 0x2B28F4u;
    {
        const bool branch_taken_0x2b28f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B28F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28F4u;
        // 0x2b28f8: 0x3c11006f  lui         $s1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28f4) {
            ctx->pc = 0x2B2B50u;
            goto label_2b2b50;
        }
    }
    ctx->pc = 0x2B28FCu;
label_2b28fc:
    // 0x2b28fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b28fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b2900:
    // 0x2b2900: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b2900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2b2904:
    // 0x2b2904: 0x2630b880  addiu       $s0, $s1, -0x4780
    ctx->pc = 0x2b2904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948992));
label_2b2908:
    // 0x2b2908: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2b2908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2b290c:
    // 0x2b290c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b290cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b2910:
    // 0x2b2910: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b2910u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2b2914:
    // 0x2b2914: 0xc0cd508  jal         func_335420
label_2b2918:
    if (ctx->pc == 0x2B2918u) {
        ctx->pc = 0x2B2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2914u;
        // 0x2b2918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B291Cu;
        goto label_2b291c;
    }
    ctx->pc = 0x2B2914u;
    SET_GPR_U32(ctx, 31, 0x2B291Cu);
    ctx->pc = 0x2B2918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2914u;
    // 0x2b2918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2B2914u, 0x2B291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B291Cu;
label_2b291c:
    // 0x2b291c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2b291cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2b2920:
    // 0x2b2920: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b2920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b2924:
    // 0x2b2924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b2924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b2928:
    // 0x2b2928: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b2928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b292c:
    // 0x2b292c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b292cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2b2930:
    // 0x2b2930: 0xc0cd508  jal         func_335420
label_2b2934:
    if (ctx->pc == 0x2B2934u) {
        ctx->pc = 0x2B2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2930u;
        // 0x2b2934: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2938u;
        goto label_2b2938;
    }
    ctx->pc = 0x2B2930u;
    SET_GPR_U32(ctx, 31, 0x2B2938u);
    ctx->pc = 0x2B2934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2930u;
    // 0x2b2934: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2B2930u, 0x2B2938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2938u;
label_2b2938:
    // 0x2b2938: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2b2938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2b293c:
    // 0x2b293c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2b293cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2b2940:
    // 0x2b2940: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b2940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b2944:
    // 0x2b2944: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2b2944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2b2948:
    // 0x2b2948: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b2948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2b294c:
    // 0x2b294c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b294cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b2950:
    // 0x2b2950: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x2b2950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_2b2954:
    // 0x2b2954: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2b2954u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b2958:
    // 0x2b2958: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2b2958u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2b295c:
    // 0x2b295c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2b295cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2b2960:
    // 0x2b2960: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x2b2960u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_2b2964:
    // 0x2b2964: 0xc12e310  jal         func_4B8C40
label_2b2968:
    if (ctx->pc == 0x2B2968u) {
        ctx->pc = 0x2B2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2964u;
        // 0x2b2968: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B296Cu;
        goto label_2b296c;
    }
    ctx->pc = 0x2B2964u;
    SET_GPR_U32(ctx, 31, 0x2B296Cu);
    ctx->pc = 0x2B2968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2964u;
    // 0x2b2968: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2B2964u, 0x2B296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B296Cu;
label_2b296c:
    // 0x2b296c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b296cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2b2970:
    // 0x2b2970: 0xc12e29c  jal         func_4B8A70
label_2b2974:
    if (ctx->pc == 0x2B2974u) {
        ctx->pc = 0x2B2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2970u;
        // 0x2b2974: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2978u;
        goto label_2b2978;
    }
    ctx->pc = 0x2B2970u;
    SET_GPR_U32(ctx, 31, 0x2B2978u);
    ctx->pc = 0x2B2974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2970u;
    // 0x2b2974: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2B2970u, 0x2B2978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2978u;
label_2b2978:
    // 0x2b2978: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2b2978u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b297c:
    // 0x2b297c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2b297cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2b2980:
    // 0x2b2980: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x2b2980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2b2984:
    // 0x2b2984: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x2b2984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
label_2b2988:
    // 0x2b2988: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b2988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2b298c:
    // 0x2b298c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2b298cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2b2990:
    // 0x2b2990: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2b2990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2b2994:
    // 0x2b2994: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2b2994u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2b2998:
    // 0x2b2998: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2b2998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2b299c:
    // 0x2b299c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2b299cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2b29a0:
    // 0x2b29a0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2b29a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b29a4:
    // 0x2b29a4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2b29a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b29a8:
    // 0x2b29a8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2b29a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b29ac:
    // 0x2b29ac: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2b29acu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2b29b0:
    // 0x2b29b0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2b29b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2b29b4:
    // 0x2b29b4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2b29b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2b29b8:
    // 0x2b29b8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2b29b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2b29bc:
    // 0x2b29bc: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2b29bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2b29c0:
    // 0x2b29c0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2b29c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b29c4:
    // 0x2b29c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b29c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2b29c8:
    // 0x2b29c8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2b29c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2b29cc:
    // 0x2b29cc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2b29ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2b29d0:
    // 0x2b29d0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2b29d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2b29d4:
    // 0x2b29d4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2b29d4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2b29d8:
    // 0x2b29d8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2b29d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2b29dc:
    // 0x2b29dc: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2b29dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2b29e0:
    // 0x2b29e0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2b29e0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2b29e4:
    // 0x2b29e4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2b29e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2b29e8:
    // 0x2b29e8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2b29e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2b29ec:
    // 0x2b29ec: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2b29ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2b29f0:
    // 0x2b29f0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2b29f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2b29f4:
    // 0x2b29f4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2b29f4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2b29f8:
    // 0x2b29f8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2b29f8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2b29fc:
    // 0x2b29fc: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2b29fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2b2a00:
    // 0x2b2a00: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2b2a00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2b2a04:
    // 0x2b2a04: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x2b2a04u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_2b2a08:
    // 0x2b2a08: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x2b2a08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2b2a0c:
    // 0x2b2a0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b2a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b2a10:
    // 0x2b2a10: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b2a10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2b2a14:
    // 0x2b2a14: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2b2a14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2b2a18:
    // 0x2b2a18: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2b2a18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2b2a1c:
    // 0x2b2a1c: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x2b2a1cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_2b2a20:
    // 0x2b2a20: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2b2a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2b2a24:
    // 0x2b2a24: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x2b2a24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2b2a28:
    // 0x2b2a28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b2a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2a2c:
    // 0x2b2a2c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b2a2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2b2a30:
    // 0x2b2a30: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x2b2a30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_2b2a34:
    // 0x2b2a34: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2b2a34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2b2a38:
    // 0x2b2a38: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2b2a38u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2b2a3c:
    // 0x2b2a3c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2b2a3cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2b2a40:
    // 0x2b2a40: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2b2a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2b2a44:
    // 0x2b2a44: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2b2a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2b2a48:
    // 0x2b2a48: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x2b2a48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b2a4c:
    // 0x2b2a4c: 0x7fa70050  sq          $a3, 0x50($sp)
    ctx->pc = 0x2b2a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
label_2b2a50:
    // 0x2b2a50: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2b2a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2b2a54:
    // 0x2b2a54: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x2b2a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_2b2a58:
    // 0x2b2a58: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x2b2a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
label_2b2a5c:
    // 0x2b2a5c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2b2a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2b2a60:
    // 0x2b2a60: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2b2a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2b2a64:
    // 0x2b2a64: 0xc088878  jal         func_2221E0
label_2b2a68:
    if (ctx->pc == 0x2B2A68u) {
        ctx->pc = 0x2B2A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A64u;
        // 0x2b2a68: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2A6Cu;
        goto label_2b2a6c;
    }
    ctx->pc = 0x2B2A64u;
    SET_GPR_U32(ctx, 31, 0x2B2A6Cu);
    ctx->pc = 0x2B2A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2A64u;
    // 0x2b2a68: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x2B2A64u, 0x2B2A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2A6Cu;
label_2b2a6c:
    // 0x2b2a6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b2a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2a70:
    // 0x2b2a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2a74:
    // 0x2b2a74: 0x16220037  bne         $s1, $v0, . + 4 + (0x37 << 2)
label_2b2a78:
    if (ctx->pc == 0x2B2A78u) {
        ctx->pc = 0x2B2A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A74u;
        // 0x2b2a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2A7Cu;
        goto label_2b2a7c;
    }
    ctx->pc = 0x2B2A74u;
    {
        const bool branch_taken_0x2b2a74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B2A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A74u;
        // 0x2b2a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2a74) {
            ctx->pc = 0x2B2B54u;
            goto label_2b2b54;
        }
    }
    ctx->pc = 0x2B2A7Cu;
label_2b2a7c:
    // 0x2b2a7c: 0xc087502  jal         func_21D408
label_2b2a80:
    if (ctx->pc == 0x2B2A80u) {
        ctx->pc = 0x2B2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A7Cu;
        // 0x2b2a80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2A84u;
        goto label_2b2a84;
    }
    ctx->pc = 0x2B2A7Cu;
    SET_GPR_U32(ctx, 31, 0x2B2A84u);
    ctx->pc = 0x2B2A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2A7Cu;
    // 0x2b2a80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B2A7Cu, 0x2B2A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2A84u;
label_2b2a84:
    // 0x2b2a84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b2a84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2a88:
    // 0x2b2a88: 0x906202d4  lbu         $v0, 0x2D4($v1)
    ctx->pc = 0x2b2a88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 724)));
label_2b2a8c:
    // 0x2b2a8c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x2b2a8cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b2a90:
    // 0x2b2a90: 0x16110006  bne         $s0, $s1, . + 4 + (0x6 << 2)
label_2b2a94:
    if (ctx->pc == 0x2B2A94u) {
        ctx->pc = 0x2B2A98u;
        goto label_2b2a98;
    }
    ctx->pc = 0x2B2A90u;
    {
        const bool branch_taken_0x2b2a90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2b2a90) {
            ctx->pc = 0x2B2AACu;
            goto label_2b2aac;
        }
    }
    ctx->pc = 0x2B2A98u;
label_2b2a98:
    // 0x2b2a98: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x2b2a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_2b2a9c:
    // 0x2b2a9c: 0xc05a7f8  jal         func_169FE0
label_2b2aa0:
    if (ctx->pc == 0x2B2AA0u) {
        ctx->pc = 0x2B2AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A9Cu;
        // 0x2b2aa0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2AA4u;
        goto label_2b2aa4;
    }
    ctx->pc = 0x2B2A9Cu;
    SET_GPR_U32(ctx, 31, 0x2B2AA4u);
    ctx->pc = 0x2B2AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2A9Cu;
    // 0x2b2aa0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169FE0u, 0x2B2A9Cu, 0x2B2AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2AA4u;
label_2b2aa4:
    // 0x2b2aa4: 0x50500017  beql        $v0, $s0, . + 4 + (0x17 << 2)
label_2b2aa8:
    if (ctx->pc == 0x2B2AA8u) {
        ctx->pc = 0x2B2AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AA4u;
        // 0x2b2aa8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2AACu;
        goto label_2b2aac;
    }
    ctx->pc = 0x2B2AA4u;
    {
        const bool branch_taken_0x2b2aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2b2aa4) {
            ctx->pc = 0x2B2AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2AA4u;
            // 0x2b2aa8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2B04u;
            goto label_2b2b04;
        }
    }
    ctx->pc = 0x2B2AACu;
label_2b2aac:
    // 0x2b2aac: 0xc0a367c  jal         func_28D9F0
label_2b2ab0:
    if (ctx->pc == 0x2B2AB0u) {
        ctx->pc = 0x2B2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AACu;
        // 0x2b2ab0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2AB4u;
        goto label_2b2ab4;
    }
    ctx->pc = 0x2B2AACu;
    SET_GPR_U32(ctx, 31, 0x2B2AB4u);
    ctx->pc = 0x2B2AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2AACu;
    // 0x2b2ab0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B2AACu, 0x2B2AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2AB4u;
label_2b2ab4:
    // 0x2b2ab4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b2ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2ab8:
    // 0x2b2ab8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2b2abc:
    if (ctx->pc == 0x2B2ABCu) {
        ctx->pc = 0x2B2ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AB8u;
        // 0x2b2abc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2AC0u;
        goto label_2b2ac0;
    }
    ctx->pc = 0x2B2AB8u;
    {
        const bool branch_taken_0x2b2ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AB8u;
        // 0x2b2abc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ab8) {
            ctx->pc = 0x2B2AE8u;
            goto label_2b2ae8;
        }
    }
    ctx->pc = 0x2B2AC0u;
label_2b2ac0:
    // 0x2b2ac0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b2ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b2ac4:
    // 0x2b2ac4: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2b2ac4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2b2ac8:
    // 0x2b2ac8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b2ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b2acc:
    // 0x2b2acc: 0x8e470020  lw          $a3, 0x20($s2)
    ctx->pc = 0x2b2accu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2b2ad0:
    // 0x2b2ad0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b2ad0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2ad4:
    // 0x2b2ad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b2ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b2ad8:
    // 0x2b2ad8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b2ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b2adc:
    // 0x2b2adc: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2b2adcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b2ae0:
    // 0x2b2ae0: 0xc0bee7a  jal         func_2FB9E8
label_2b2ae4:
    if (ctx->pc == 0x2B2AE4u) {
        ctx->pc = 0x2B2AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AE0u;
        // 0x2b2ae4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2AE8u;
        goto label_2b2ae8;
    }
    ctx->pc = 0x2B2AE0u;
    SET_GPR_U32(ctx, 31, 0x2B2AE8u);
    ctx->pc = 0x2B2AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2AE0u;
    // 0x2b2ae4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2B2AE0u, 0x2B2AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2AE8u;
label_2b2ae8:
    // 0x2b2ae8: 0x2664b880  addiu       $a0, $s3, -0x4780
    ctx->pc = 0x2b2ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294948992));
label_2b2aec:
    // 0x2b2aec: 0xc0cd4ee  jal         func_3353B8
label_2b2af0:
    if (ctx->pc == 0x2B2AF0u) {
        ctx->pc = 0x2B2AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AECu;
        // 0x2b2af0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2AF4u;
        goto label_2b2af4;
    }
    ctx->pc = 0x2B2AECu;
    SET_GPR_U32(ctx, 31, 0x2B2AF4u);
    ctx->pc = 0x2B2AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2AECu;
    // 0x2b2af0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B2AECu, 0x2B2AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2AF4u;
label_2b2af4:
    // 0x2b2af4: 0x2c42003d  sltiu       $v0, $v0, 0x3D
    ctx->pc = 0x2b2af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
label_2b2af8:
    // 0x2b2af8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2b2afc:
    if (ctx->pc == 0x2B2AFCu) {
        ctx->pc = 0x2B2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AF8u;
        // 0x2b2afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2B00u;
        goto label_2b2b00;
    }
    ctx->pc = 0x2B2AF8u;
    {
        const bool branch_taken_0x2b2af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AF8u;
        // 0x2b2afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2af8) {
            ctx->pc = 0x2B2B54u;
            goto label_2b2b54;
        }
    }
    ctx->pc = 0x2B2B00u;
label_2b2b00:
    // 0x2b2b00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b2b04:
    // 0x2b2b04: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2b2b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2b2b08:
    // 0x2b2b08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b2b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2b0c:
    // 0x2b2b0c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2b2b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2b2b10:
    // 0x2b2b10: 0xc058ff0  jal         func_163FC0
label_2b2b14:
    if (ctx->pc == 0x2B2B14u) {
        ctx->pc = 0x2B2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B10u;
        // 0x2b2b14: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2B18u;
        goto label_2b2b18;
    }
    ctx->pc = 0x2B2B10u;
    SET_GPR_U32(ctx, 31, 0x2B2B18u);
    ctx->pc = 0x2B2B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2B10u;
    // 0x2b2b14: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FC0u, 0x2B2B10u, 0x2B2B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2B18u;
label_2b2b18:
    // 0x2b2b18: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2b2b1c:
    if (ctx->pc == 0x2B2B1Cu) {
        ctx->pc = 0x2B2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B18u;
        // 0x2b2b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2B20u;
        goto label_2b2b20;
    }
    ctx->pc = 0x2B2B18u;
    {
        const bool branch_taken_0x2b2b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B18u;
        // 0x2b2b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b18) {
            ctx->pc = 0x2B2B54u;
            goto label_2b2b54;
        }
    }
    ctx->pc = 0x2B2B20u;
label_2b2b20:
    // 0x2b2b20: 0xc0a367c  jal         func_28D9F0
label_2b2b24:
    if (ctx->pc == 0x2B2B24u) {
        ctx->pc = 0x2B2B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B20u;
        // 0x2b2b24: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2B28u;
        goto label_2b2b28;
    }
    ctx->pc = 0x2B2B20u;
    SET_GPR_U32(ctx, 31, 0x2B2B28u);
    ctx->pc = 0x2B2B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2B20u;
    // 0x2b2b24: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B2B20u, 0x2B2B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2B28u;
label_2b2b28:
    // 0x2b2b28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2b2b2c:
    if (ctx->pc == 0x2B2B2Cu) {
        ctx->pc = 0x2B2B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B28u;
        // 0x2b2b2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2B30u;
        goto label_2b2b30;
    }
    ctx->pc = 0x2B2B28u;
    {
        const bool branch_taken_0x2b2b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B28u;
        // 0x2b2b2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b28) {
            ctx->pc = 0x2B2B50u;
            goto label_2b2b50;
        }
    }
    ctx->pc = 0x2B2B30u;
label_2b2b30:
    // 0x2b2b30: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b2b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b2b34:
    // 0x2b2b34: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2b2b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2b2b38:
    // 0x2b2b38: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b2b38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2b2b3c:
    // 0x2b2b3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b2b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b2b40:
    // 0x2b2b40: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2b2b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2b2b44:
    // 0x2b2b44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b2b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2b48:
    // 0x2b2b48: 0xc0be8c0  jal         func_2FA300
label_2b2b4c:
    if (ctx->pc == 0x2B2B4Cu) {
        ctx->pc = 0x2B2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B48u;
        // 0x2b2b4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2B50u;
        goto label_2b2b50;
    }
    ctx->pc = 0x2B2B48u;
    SET_GPR_U32(ctx, 31, 0x2B2B50u);
    ctx->pc = 0x2B2B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2B48u;
    // 0x2b2b4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2B2B48u, 0x2B2B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2B50u;
label_2b2b50:
    // 0x2b2b50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2b54:
    // 0x2b2b54: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2b2b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2b2b58:
    // 0x2b2b58: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2b2b58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2b2b5c:
    // 0x2b2b5c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2b2b5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2b2b60:
    // 0x2b2b60: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2b2b60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2b2b64:
    // 0x2b2b64: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2b2b64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2b2b68:
    // 0x2b2b68: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x2b2b68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2b2b6c:
    // 0x2b2b6c: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x2b2b6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2b2b70:
    // 0x2b2b70: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x2b2b70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2b2b74:
    // 0x2b2b74: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2b2b74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2b2b78:
    // 0x2b2b78: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b2b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b2b7c:
    // 0x2b2b7c: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x2b2b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2b2b80:
    // 0x2b2b80: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x2b2b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2b2b84:
    // 0x2b2b84: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2b2b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b2b88:
    // 0x2b2b88: 0x3e00008  jr          $ra
label_2b2b8c:
    if (ctx->pc == 0x2B2B8Cu) {
        ctx->pc = 0x2B2B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B88u;
        // 0x2b2b8c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2B90u;
        goto label_fallthrough_0x2b2b88;
    }
    ctx->pc = 0x2B2B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B88u;
        // 0x2b2b8c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b2b88:
    ctx->pc = 0x2B2B90u;
}
