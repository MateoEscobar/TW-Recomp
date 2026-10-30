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

// Function: sub_002C2430
// Address: 0x2c2430 - 0x2c2d38
void sub_002C2430_0x2c2430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2430_0x2c2430");
#endif

    switch (ctx->pc) {
        case 0x2c2430u: goto label_2c2430;
        case 0x2c2434u: goto label_2c2434;
        case 0x2c2438u: goto label_2c2438;
        case 0x2c243cu: goto label_2c243c;
        case 0x2c2440u: goto label_2c2440;
        case 0x2c2444u: goto label_2c2444;
        case 0x2c2448u: goto label_2c2448;
        case 0x2c244cu: goto label_2c244c;
        case 0x2c2450u: goto label_2c2450;
        case 0x2c2454u: goto label_2c2454;
        case 0x2c2458u: goto label_2c2458;
        case 0x2c245cu: goto label_2c245c;
        case 0x2c2460u: goto label_2c2460;
        case 0x2c2464u: goto label_2c2464;
        case 0x2c2468u: goto label_2c2468;
        case 0x2c246cu: goto label_2c246c;
        case 0x2c2470u: goto label_2c2470;
        case 0x2c2474u: goto label_2c2474;
        case 0x2c2478u: goto label_2c2478;
        case 0x2c247cu: goto label_2c247c;
        case 0x2c2480u: goto label_2c2480;
        case 0x2c2484u: goto label_2c2484;
        case 0x2c2488u: goto label_2c2488;
        case 0x2c248cu: goto label_2c248c;
        case 0x2c2490u: goto label_2c2490;
        case 0x2c2494u: goto label_2c2494;
        case 0x2c2498u: goto label_2c2498;
        case 0x2c249cu: goto label_2c249c;
        case 0x2c24a0u: goto label_2c24a0;
        case 0x2c24a4u: goto label_2c24a4;
        case 0x2c24a8u: goto label_2c24a8;
        case 0x2c24acu: goto label_2c24ac;
        case 0x2c24b0u: goto label_2c24b0;
        case 0x2c24b4u: goto label_2c24b4;
        case 0x2c24b8u: goto label_2c24b8;
        case 0x2c24bcu: goto label_2c24bc;
        case 0x2c24c0u: goto label_2c24c0;
        case 0x2c24c4u: goto label_2c24c4;
        case 0x2c24c8u: goto label_2c24c8;
        case 0x2c24ccu: goto label_2c24cc;
        case 0x2c24d0u: goto label_2c24d0;
        case 0x2c24d4u: goto label_2c24d4;
        case 0x2c24d8u: goto label_2c24d8;
        case 0x2c24dcu: goto label_2c24dc;
        case 0x2c24e0u: goto label_2c24e0;
        case 0x2c24e4u: goto label_2c24e4;
        case 0x2c24e8u: goto label_2c24e8;
        case 0x2c24ecu: goto label_2c24ec;
        case 0x2c24f0u: goto label_2c24f0;
        case 0x2c24f4u: goto label_2c24f4;
        case 0x2c24f8u: goto label_2c24f8;
        case 0x2c24fcu: goto label_2c24fc;
        case 0x2c2500u: goto label_2c2500;
        case 0x2c2504u: goto label_2c2504;
        case 0x2c2508u: goto label_2c2508;
        case 0x2c250cu: goto label_2c250c;
        case 0x2c2510u: goto label_2c2510;
        case 0x2c2514u: goto label_2c2514;
        case 0x2c2518u: goto label_2c2518;
        case 0x2c251cu: goto label_2c251c;
        case 0x2c2520u: goto label_2c2520;
        case 0x2c2524u: goto label_2c2524;
        case 0x2c2528u: goto label_2c2528;
        case 0x2c252cu: goto label_2c252c;
        case 0x2c2530u: goto label_2c2530;
        case 0x2c2534u: goto label_2c2534;
        case 0x2c2538u: goto label_2c2538;
        case 0x2c253cu: goto label_2c253c;
        case 0x2c2540u: goto label_2c2540;
        case 0x2c2544u: goto label_2c2544;
        case 0x2c2548u: goto label_2c2548;
        case 0x2c254cu: goto label_2c254c;
        case 0x2c2550u: goto label_2c2550;
        case 0x2c2554u: goto label_2c2554;
        case 0x2c2558u: goto label_2c2558;
        case 0x2c255cu: goto label_2c255c;
        case 0x2c2560u: goto label_2c2560;
        case 0x2c2564u: goto label_2c2564;
        case 0x2c2568u: goto label_2c2568;
        case 0x2c256cu: goto label_2c256c;
        case 0x2c2570u: goto label_2c2570;
        case 0x2c2574u: goto label_2c2574;
        case 0x2c2578u: goto label_2c2578;
        case 0x2c257cu: goto label_2c257c;
        case 0x2c2580u: goto label_2c2580;
        case 0x2c2584u: goto label_2c2584;
        case 0x2c2588u: goto label_2c2588;
        case 0x2c258cu: goto label_2c258c;
        case 0x2c2590u: goto label_2c2590;
        case 0x2c2594u: goto label_2c2594;
        case 0x2c2598u: goto label_2c2598;
        case 0x2c259cu: goto label_2c259c;
        case 0x2c25a0u: goto label_2c25a0;
        case 0x2c25a4u: goto label_2c25a4;
        case 0x2c25a8u: goto label_2c25a8;
        case 0x2c25acu: goto label_2c25ac;
        case 0x2c25b0u: goto label_2c25b0;
        case 0x2c25b4u: goto label_2c25b4;
        case 0x2c25b8u: goto label_2c25b8;
        case 0x2c25bcu: goto label_2c25bc;
        case 0x2c25c0u: goto label_2c25c0;
        case 0x2c25c4u: goto label_2c25c4;
        case 0x2c25c8u: goto label_2c25c8;
        case 0x2c25ccu: goto label_2c25cc;
        case 0x2c25d0u: goto label_2c25d0;
        case 0x2c25d4u: goto label_2c25d4;
        case 0x2c25d8u: goto label_2c25d8;
        case 0x2c25dcu: goto label_2c25dc;
        case 0x2c25e0u: goto label_2c25e0;
        case 0x2c25e4u: goto label_2c25e4;
        case 0x2c25e8u: goto label_2c25e8;
        case 0x2c25ecu: goto label_2c25ec;
        case 0x2c25f0u: goto label_2c25f0;
        case 0x2c25f4u: goto label_2c25f4;
        case 0x2c25f8u: goto label_2c25f8;
        case 0x2c25fcu: goto label_2c25fc;
        case 0x2c2600u: goto label_2c2600;
        case 0x2c2604u: goto label_2c2604;
        case 0x2c2608u: goto label_2c2608;
        case 0x2c260cu: goto label_2c260c;
        case 0x2c2610u: goto label_2c2610;
        case 0x2c2614u: goto label_2c2614;
        case 0x2c2618u: goto label_2c2618;
        case 0x2c261cu: goto label_2c261c;
        case 0x2c2620u: goto label_2c2620;
        case 0x2c2624u: goto label_2c2624;
        case 0x2c2628u: goto label_2c2628;
        case 0x2c262cu: goto label_2c262c;
        case 0x2c2630u: goto label_2c2630;
        case 0x2c2634u: goto label_2c2634;
        case 0x2c2638u: goto label_2c2638;
        case 0x2c263cu: goto label_2c263c;
        case 0x2c2640u: goto label_2c2640;
        case 0x2c2644u: goto label_2c2644;
        case 0x2c2648u: goto label_2c2648;
        case 0x2c264cu: goto label_2c264c;
        case 0x2c2650u: goto label_2c2650;
        case 0x2c2654u: goto label_2c2654;
        case 0x2c2658u: goto label_2c2658;
        case 0x2c265cu: goto label_2c265c;
        case 0x2c2660u: goto label_2c2660;
        case 0x2c2664u: goto label_2c2664;
        case 0x2c2668u: goto label_2c2668;
        case 0x2c266cu: goto label_2c266c;
        case 0x2c2670u: goto label_2c2670;
        case 0x2c2674u: goto label_2c2674;
        case 0x2c2678u: goto label_2c2678;
        case 0x2c267cu: goto label_2c267c;
        case 0x2c2680u: goto label_2c2680;
        case 0x2c2684u: goto label_2c2684;
        case 0x2c2688u: goto label_2c2688;
        case 0x2c268cu: goto label_2c268c;
        case 0x2c2690u: goto label_2c2690;
        case 0x2c2694u: goto label_2c2694;
        case 0x2c2698u: goto label_2c2698;
        case 0x2c269cu: goto label_2c269c;
        case 0x2c26a0u: goto label_2c26a0;
        case 0x2c26a4u: goto label_2c26a4;
        case 0x2c26a8u: goto label_2c26a8;
        case 0x2c26acu: goto label_2c26ac;
        case 0x2c26b0u: goto label_2c26b0;
        case 0x2c26b4u: goto label_2c26b4;
        case 0x2c26b8u: goto label_2c26b8;
        case 0x2c26bcu: goto label_2c26bc;
        case 0x2c26c0u: goto label_2c26c0;
        case 0x2c26c4u: goto label_2c26c4;
        case 0x2c26c8u: goto label_2c26c8;
        case 0x2c26ccu: goto label_2c26cc;
        case 0x2c26d0u: goto label_2c26d0;
        case 0x2c26d4u: goto label_2c26d4;
        case 0x2c26d8u: goto label_2c26d8;
        case 0x2c26dcu: goto label_2c26dc;
        case 0x2c26e0u: goto label_2c26e0;
        case 0x2c26e4u: goto label_2c26e4;
        case 0x2c26e8u: goto label_2c26e8;
        case 0x2c26ecu: goto label_2c26ec;
        case 0x2c26f0u: goto label_2c26f0;
        case 0x2c26f4u: goto label_2c26f4;
        case 0x2c26f8u: goto label_2c26f8;
        case 0x2c26fcu: goto label_2c26fc;
        case 0x2c2700u: goto label_2c2700;
        case 0x2c2704u: goto label_2c2704;
        case 0x2c2708u: goto label_2c2708;
        case 0x2c270cu: goto label_2c270c;
        case 0x2c2710u: goto label_2c2710;
        case 0x2c2714u: goto label_2c2714;
        case 0x2c2718u: goto label_2c2718;
        case 0x2c271cu: goto label_2c271c;
        case 0x2c2720u: goto label_2c2720;
        case 0x2c2724u: goto label_2c2724;
        case 0x2c2728u: goto label_2c2728;
        case 0x2c272cu: goto label_2c272c;
        case 0x2c2730u: goto label_2c2730;
        case 0x2c2734u: goto label_2c2734;
        case 0x2c2738u: goto label_2c2738;
        case 0x2c273cu: goto label_2c273c;
        case 0x2c2740u: goto label_2c2740;
        case 0x2c2744u: goto label_2c2744;
        case 0x2c2748u: goto label_2c2748;
        case 0x2c274cu: goto label_2c274c;
        case 0x2c2750u: goto label_2c2750;
        case 0x2c2754u: goto label_2c2754;
        case 0x2c2758u: goto label_2c2758;
        case 0x2c275cu: goto label_2c275c;
        case 0x2c2760u: goto label_2c2760;
        case 0x2c2764u: goto label_2c2764;
        case 0x2c2768u: goto label_2c2768;
        case 0x2c276cu: goto label_2c276c;
        case 0x2c2770u: goto label_2c2770;
        case 0x2c2774u: goto label_2c2774;
        case 0x2c2778u: goto label_2c2778;
        case 0x2c277cu: goto label_2c277c;
        case 0x2c2780u: goto label_2c2780;
        case 0x2c2784u: goto label_2c2784;
        case 0x2c2788u: goto label_2c2788;
        case 0x2c278cu: goto label_2c278c;
        case 0x2c2790u: goto label_2c2790;
        case 0x2c2794u: goto label_2c2794;
        case 0x2c2798u: goto label_2c2798;
        case 0x2c279cu: goto label_2c279c;
        case 0x2c27a0u: goto label_2c27a0;
        case 0x2c27a4u: goto label_2c27a4;
        case 0x2c27a8u: goto label_2c27a8;
        case 0x2c27acu: goto label_2c27ac;
        case 0x2c27b0u: goto label_2c27b0;
        case 0x2c27b4u: goto label_2c27b4;
        case 0x2c27b8u: goto label_2c27b8;
        case 0x2c27bcu: goto label_2c27bc;
        case 0x2c27c0u: goto label_2c27c0;
        case 0x2c27c4u: goto label_2c27c4;
        case 0x2c27c8u: goto label_2c27c8;
        case 0x2c27ccu: goto label_2c27cc;
        case 0x2c27d0u: goto label_2c27d0;
        case 0x2c27d4u: goto label_2c27d4;
        case 0x2c27d8u: goto label_2c27d8;
        case 0x2c27dcu: goto label_2c27dc;
        case 0x2c27e0u: goto label_2c27e0;
        case 0x2c27e4u: goto label_2c27e4;
        case 0x2c27e8u: goto label_2c27e8;
        case 0x2c27ecu: goto label_2c27ec;
        case 0x2c27f0u: goto label_2c27f0;
        case 0x2c27f4u: goto label_2c27f4;
        case 0x2c27f8u: goto label_2c27f8;
        case 0x2c27fcu: goto label_2c27fc;
        case 0x2c2800u: goto label_2c2800;
        case 0x2c2804u: goto label_2c2804;
        case 0x2c2808u: goto label_2c2808;
        case 0x2c280cu: goto label_2c280c;
        case 0x2c2810u: goto label_2c2810;
        case 0x2c2814u: goto label_2c2814;
        case 0x2c2818u: goto label_2c2818;
        case 0x2c281cu: goto label_2c281c;
        case 0x2c2820u: goto label_2c2820;
        case 0x2c2824u: goto label_2c2824;
        case 0x2c2828u: goto label_2c2828;
        case 0x2c282cu: goto label_2c282c;
        case 0x2c2830u: goto label_2c2830;
        case 0x2c2834u: goto label_2c2834;
        case 0x2c2838u: goto label_2c2838;
        case 0x2c283cu: goto label_2c283c;
        case 0x2c2840u: goto label_2c2840;
        case 0x2c2844u: goto label_2c2844;
        case 0x2c2848u: goto label_2c2848;
        case 0x2c284cu: goto label_2c284c;
        case 0x2c2850u: goto label_2c2850;
        case 0x2c2854u: goto label_2c2854;
        case 0x2c2858u: goto label_2c2858;
        case 0x2c285cu: goto label_2c285c;
        case 0x2c2860u: goto label_2c2860;
        case 0x2c2864u: goto label_2c2864;
        case 0x2c2868u: goto label_2c2868;
        case 0x2c286cu: goto label_2c286c;
        case 0x2c2870u: goto label_2c2870;
        case 0x2c2874u: goto label_2c2874;
        case 0x2c2878u: goto label_2c2878;
        case 0x2c287cu: goto label_2c287c;
        case 0x2c2880u: goto label_2c2880;
        case 0x2c2884u: goto label_2c2884;
        case 0x2c2888u: goto label_2c2888;
        case 0x2c288cu: goto label_2c288c;
        case 0x2c2890u: goto label_2c2890;
        case 0x2c2894u: goto label_2c2894;
        case 0x2c2898u: goto label_2c2898;
        case 0x2c289cu: goto label_2c289c;
        case 0x2c28a0u: goto label_2c28a0;
        case 0x2c28a4u: goto label_2c28a4;
        case 0x2c28a8u: goto label_2c28a8;
        case 0x2c28acu: goto label_2c28ac;
        case 0x2c28b0u: goto label_2c28b0;
        case 0x2c28b4u: goto label_2c28b4;
        case 0x2c28b8u: goto label_2c28b8;
        case 0x2c28bcu: goto label_2c28bc;
        case 0x2c28c0u: goto label_2c28c0;
        case 0x2c28c4u: goto label_2c28c4;
        case 0x2c28c8u: goto label_2c28c8;
        case 0x2c28ccu: goto label_2c28cc;
        case 0x2c28d0u: goto label_2c28d0;
        case 0x2c28d4u: goto label_2c28d4;
        case 0x2c28d8u: goto label_2c28d8;
        case 0x2c28dcu: goto label_2c28dc;
        case 0x2c28e0u: goto label_2c28e0;
        case 0x2c28e4u: goto label_2c28e4;
        case 0x2c28e8u: goto label_2c28e8;
        case 0x2c28ecu: goto label_2c28ec;
        case 0x2c28f0u: goto label_2c28f0;
        case 0x2c28f4u: goto label_2c28f4;
        case 0x2c28f8u: goto label_2c28f8;
        case 0x2c28fcu: goto label_2c28fc;
        case 0x2c2900u: goto label_2c2900;
        case 0x2c2904u: goto label_2c2904;
        case 0x2c2908u: goto label_2c2908;
        case 0x2c290cu: goto label_2c290c;
        case 0x2c2910u: goto label_2c2910;
        case 0x2c2914u: goto label_2c2914;
        case 0x2c2918u: goto label_2c2918;
        case 0x2c291cu: goto label_2c291c;
        case 0x2c2920u: goto label_2c2920;
        case 0x2c2924u: goto label_2c2924;
        case 0x2c2928u: goto label_2c2928;
        case 0x2c292cu: goto label_2c292c;
        case 0x2c2930u: goto label_2c2930;
        case 0x2c2934u: goto label_2c2934;
        case 0x2c2938u: goto label_2c2938;
        case 0x2c293cu: goto label_2c293c;
        case 0x2c2940u: goto label_2c2940;
        case 0x2c2944u: goto label_2c2944;
        case 0x2c2948u: goto label_2c2948;
        case 0x2c294cu: goto label_2c294c;
        case 0x2c2950u: goto label_2c2950;
        case 0x2c2954u: goto label_2c2954;
        case 0x2c2958u: goto label_2c2958;
        case 0x2c295cu: goto label_2c295c;
        case 0x2c2960u: goto label_2c2960;
        case 0x2c2964u: goto label_2c2964;
        case 0x2c2968u: goto label_2c2968;
        case 0x2c296cu: goto label_2c296c;
        case 0x2c2970u: goto label_2c2970;
        case 0x2c2974u: goto label_2c2974;
        case 0x2c2978u: goto label_2c2978;
        case 0x2c297cu: goto label_2c297c;
        case 0x2c2980u: goto label_2c2980;
        case 0x2c2984u: goto label_2c2984;
        case 0x2c2988u: goto label_2c2988;
        case 0x2c298cu: goto label_2c298c;
        case 0x2c2990u: goto label_2c2990;
        case 0x2c2994u: goto label_2c2994;
        case 0x2c2998u: goto label_2c2998;
        case 0x2c299cu: goto label_2c299c;
        case 0x2c29a0u: goto label_2c29a0;
        case 0x2c29a4u: goto label_2c29a4;
        case 0x2c29a8u: goto label_2c29a8;
        case 0x2c29acu: goto label_2c29ac;
        case 0x2c29b0u: goto label_2c29b0;
        case 0x2c29b4u: goto label_2c29b4;
        case 0x2c29b8u: goto label_2c29b8;
        case 0x2c29bcu: goto label_2c29bc;
        case 0x2c29c0u: goto label_2c29c0;
        case 0x2c29c4u: goto label_2c29c4;
        case 0x2c29c8u: goto label_2c29c8;
        case 0x2c29ccu: goto label_2c29cc;
        case 0x2c29d0u: goto label_2c29d0;
        case 0x2c29d4u: goto label_2c29d4;
        case 0x2c29d8u: goto label_2c29d8;
        case 0x2c29dcu: goto label_2c29dc;
        case 0x2c29e0u: goto label_2c29e0;
        case 0x2c29e4u: goto label_2c29e4;
        case 0x2c29e8u: goto label_2c29e8;
        case 0x2c29ecu: goto label_2c29ec;
        case 0x2c29f0u: goto label_2c29f0;
        case 0x2c29f4u: goto label_2c29f4;
        case 0x2c29f8u: goto label_2c29f8;
        case 0x2c29fcu: goto label_2c29fc;
        case 0x2c2a00u: goto label_2c2a00;
        case 0x2c2a04u: goto label_2c2a04;
        case 0x2c2a08u: goto label_2c2a08;
        case 0x2c2a0cu: goto label_2c2a0c;
        case 0x2c2a10u: goto label_2c2a10;
        case 0x2c2a14u: goto label_2c2a14;
        case 0x2c2a18u: goto label_2c2a18;
        case 0x2c2a1cu: goto label_2c2a1c;
        case 0x2c2a20u: goto label_2c2a20;
        case 0x2c2a24u: goto label_2c2a24;
        case 0x2c2a28u: goto label_2c2a28;
        case 0x2c2a2cu: goto label_2c2a2c;
        case 0x2c2a30u: goto label_2c2a30;
        case 0x2c2a34u: goto label_2c2a34;
        case 0x2c2a38u: goto label_2c2a38;
        case 0x2c2a3cu: goto label_2c2a3c;
        case 0x2c2a40u: goto label_2c2a40;
        case 0x2c2a44u: goto label_2c2a44;
        case 0x2c2a48u: goto label_2c2a48;
        case 0x2c2a4cu: goto label_2c2a4c;
        case 0x2c2a50u: goto label_2c2a50;
        case 0x2c2a54u: goto label_2c2a54;
        case 0x2c2a58u: goto label_2c2a58;
        case 0x2c2a5cu: goto label_2c2a5c;
        case 0x2c2a60u: goto label_2c2a60;
        case 0x2c2a64u: goto label_2c2a64;
        case 0x2c2a68u: goto label_2c2a68;
        case 0x2c2a6cu: goto label_2c2a6c;
        case 0x2c2a70u: goto label_2c2a70;
        case 0x2c2a74u: goto label_2c2a74;
        case 0x2c2a78u: goto label_2c2a78;
        case 0x2c2a7cu: goto label_2c2a7c;
        case 0x2c2a80u: goto label_2c2a80;
        case 0x2c2a84u: goto label_2c2a84;
        case 0x2c2a88u: goto label_2c2a88;
        case 0x2c2a8cu: goto label_2c2a8c;
        case 0x2c2a90u: goto label_2c2a90;
        case 0x2c2a94u: goto label_2c2a94;
        case 0x2c2a98u: goto label_2c2a98;
        case 0x2c2a9cu: goto label_2c2a9c;
        case 0x2c2aa0u: goto label_2c2aa0;
        case 0x2c2aa4u: goto label_2c2aa4;
        case 0x2c2aa8u: goto label_2c2aa8;
        case 0x2c2aacu: goto label_2c2aac;
        case 0x2c2ab0u: goto label_2c2ab0;
        case 0x2c2ab4u: goto label_2c2ab4;
        case 0x2c2ab8u: goto label_2c2ab8;
        case 0x2c2abcu: goto label_2c2abc;
        case 0x2c2ac0u: goto label_2c2ac0;
        case 0x2c2ac4u: goto label_2c2ac4;
        case 0x2c2ac8u: goto label_2c2ac8;
        case 0x2c2accu: goto label_2c2acc;
        case 0x2c2ad0u: goto label_2c2ad0;
        case 0x2c2ad4u: goto label_2c2ad4;
        case 0x2c2ad8u: goto label_2c2ad8;
        case 0x2c2adcu: goto label_2c2adc;
        case 0x2c2ae0u: goto label_2c2ae0;
        case 0x2c2ae4u: goto label_2c2ae4;
        case 0x2c2ae8u: goto label_2c2ae8;
        case 0x2c2aecu: goto label_2c2aec;
        case 0x2c2af0u: goto label_2c2af0;
        case 0x2c2af4u: goto label_2c2af4;
        case 0x2c2af8u: goto label_2c2af8;
        case 0x2c2afcu: goto label_2c2afc;
        case 0x2c2b00u: goto label_2c2b00;
        case 0x2c2b04u: goto label_2c2b04;
        case 0x2c2b08u: goto label_2c2b08;
        case 0x2c2b0cu: goto label_2c2b0c;
        case 0x2c2b10u: goto label_2c2b10;
        case 0x2c2b14u: goto label_2c2b14;
        case 0x2c2b18u: goto label_2c2b18;
        case 0x2c2b1cu: goto label_2c2b1c;
        case 0x2c2b20u: goto label_2c2b20;
        case 0x2c2b24u: goto label_2c2b24;
        case 0x2c2b28u: goto label_2c2b28;
        case 0x2c2b2cu: goto label_2c2b2c;
        case 0x2c2b30u: goto label_2c2b30;
        case 0x2c2b34u: goto label_2c2b34;
        case 0x2c2b38u: goto label_2c2b38;
        case 0x2c2b3cu: goto label_2c2b3c;
        case 0x2c2b40u: goto label_2c2b40;
        case 0x2c2b44u: goto label_2c2b44;
        case 0x2c2b48u: goto label_2c2b48;
        case 0x2c2b4cu: goto label_2c2b4c;
        case 0x2c2b50u: goto label_2c2b50;
        case 0x2c2b54u: goto label_2c2b54;
        case 0x2c2b58u: goto label_2c2b58;
        case 0x2c2b5cu: goto label_2c2b5c;
        case 0x2c2b60u: goto label_2c2b60;
        case 0x2c2b64u: goto label_2c2b64;
        case 0x2c2b68u: goto label_2c2b68;
        case 0x2c2b6cu: goto label_2c2b6c;
        case 0x2c2b70u: goto label_2c2b70;
        case 0x2c2b74u: goto label_2c2b74;
        case 0x2c2b78u: goto label_2c2b78;
        case 0x2c2b7cu: goto label_2c2b7c;
        case 0x2c2b80u: goto label_2c2b80;
        case 0x2c2b84u: goto label_2c2b84;
        case 0x2c2b88u: goto label_2c2b88;
        case 0x2c2b8cu: goto label_2c2b8c;
        case 0x2c2b90u: goto label_2c2b90;
        case 0x2c2b94u: goto label_2c2b94;
        case 0x2c2b98u: goto label_2c2b98;
        case 0x2c2b9cu: goto label_2c2b9c;
        case 0x2c2ba0u: goto label_2c2ba0;
        case 0x2c2ba4u: goto label_2c2ba4;
        case 0x2c2ba8u: goto label_2c2ba8;
        case 0x2c2bacu: goto label_2c2bac;
        case 0x2c2bb0u: goto label_2c2bb0;
        case 0x2c2bb4u: goto label_2c2bb4;
        case 0x2c2bb8u: goto label_2c2bb8;
        case 0x2c2bbcu: goto label_2c2bbc;
        case 0x2c2bc0u: goto label_2c2bc0;
        case 0x2c2bc4u: goto label_2c2bc4;
        case 0x2c2bc8u: goto label_2c2bc8;
        case 0x2c2bccu: goto label_2c2bcc;
        case 0x2c2bd0u: goto label_2c2bd0;
        case 0x2c2bd4u: goto label_2c2bd4;
        case 0x2c2bd8u: goto label_2c2bd8;
        case 0x2c2bdcu: goto label_2c2bdc;
        case 0x2c2be0u: goto label_2c2be0;
        case 0x2c2be4u: goto label_2c2be4;
        case 0x2c2be8u: goto label_2c2be8;
        case 0x2c2becu: goto label_2c2bec;
        case 0x2c2bf0u: goto label_2c2bf0;
        case 0x2c2bf4u: goto label_2c2bf4;
        case 0x2c2bf8u: goto label_2c2bf8;
        case 0x2c2bfcu: goto label_2c2bfc;
        case 0x2c2c00u: goto label_2c2c00;
        case 0x2c2c04u: goto label_2c2c04;
        case 0x2c2c08u: goto label_2c2c08;
        case 0x2c2c0cu: goto label_2c2c0c;
        case 0x2c2c10u: goto label_2c2c10;
        case 0x2c2c14u: goto label_2c2c14;
        case 0x2c2c18u: goto label_2c2c18;
        case 0x2c2c1cu: goto label_2c2c1c;
        case 0x2c2c20u: goto label_2c2c20;
        case 0x2c2c24u: goto label_2c2c24;
        case 0x2c2c28u: goto label_2c2c28;
        case 0x2c2c2cu: goto label_2c2c2c;
        case 0x2c2c30u: goto label_2c2c30;
        case 0x2c2c34u: goto label_2c2c34;
        case 0x2c2c38u: goto label_2c2c38;
        case 0x2c2c3cu: goto label_2c2c3c;
        case 0x2c2c40u: goto label_2c2c40;
        case 0x2c2c44u: goto label_2c2c44;
        case 0x2c2c48u: goto label_2c2c48;
        case 0x2c2c4cu: goto label_2c2c4c;
        case 0x2c2c50u: goto label_2c2c50;
        case 0x2c2c54u: goto label_2c2c54;
        case 0x2c2c58u: goto label_2c2c58;
        case 0x2c2c5cu: goto label_2c2c5c;
        case 0x2c2c60u: goto label_2c2c60;
        case 0x2c2c64u: goto label_2c2c64;
        case 0x2c2c68u: goto label_2c2c68;
        case 0x2c2c6cu: goto label_2c2c6c;
        case 0x2c2c70u: goto label_2c2c70;
        case 0x2c2c74u: goto label_2c2c74;
        case 0x2c2c78u: goto label_2c2c78;
        case 0x2c2c7cu: goto label_2c2c7c;
        case 0x2c2c80u: goto label_2c2c80;
        case 0x2c2c84u: goto label_2c2c84;
        case 0x2c2c88u: goto label_2c2c88;
        case 0x2c2c8cu: goto label_2c2c8c;
        case 0x2c2c90u: goto label_2c2c90;
        case 0x2c2c94u: goto label_2c2c94;
        case 0x2c2c98u: goto label_2c2c98;
        case 0x2c2c9cu: goto label_2c2c9c;
        case 0x2c2ca0u: goto label_2c2ca0;
        case 0x2c2ca4u: goto label_2c2ca4;
        case 0x2c2ca8u: goto label_2c2ca8;
        case 0x2c2cacu: goto label_2c2cac;
        case 0x2c2cb0u: goto label_2c2cb0;
        case 0x2c2cb4u: goto label_2c2cb4;
        case 0x2c2cb8u: goto label_2c2cb8;
        case 0x2c2cbcu: goto label_2c2cbc;
        case 0x2c2cc0u: goto label_2c2cc0;
        case 0x2c2cc4u: goto label_2c2cc4;
        case 0x2c2cc8u: goto label_2c2cc8;
        case 0x2c2cccu: goto label_2c2ccc;
        case 0x2c2cd0u: goto label_2c2cd0;
        case 0x2c2cd4u: goto label_2c2cd4;
        case 0x2c2cd8u: goto label_2c2cd8;
        case 0x2c2cdcu: goto label_2c2cdc;
        case 0x2c2ce0u: goto label_2c2ce0;
        case 0x2c2ce4u: goto label_2c2ce4;
        case 0x2c2ce8u: goto label_2c2ce8;
        case 0x2c2cecu: goto label_2c2cec;
        case 0x2c2cf0u: goto label_2c2cf0;
        case 0x2c2cf4u: goto label_2c2cf4;
        case 0x2c2cf8u: goto label_2c2cf8;
        case 0x2c2cfcu: goto label_2c2cfc;
        case 0x2c2d00u: goto label_2c2d00;
        case 0x2c2d04u: goto label_2c2d04;
        case 0x2c2d08u: goto label_2c2d08;
        case 0x2c2d0cu: goto label_2c2d0c;
        case 0x2c2d10u: goto label_2c2d10;
        case 0x2c2d14u: goto label_2c2d14;
        case 0x2c2d18u: goto label_2c2d18;
        case 0x2c2d1cu: goto label_2c2d1c;
        case 0x2c2d20u: goto label_2c2d20;
        case 0x2c2d24u: goto label_2c2d24;
        case 0x2c2d28u: goto label_2c2d28;
        case 0x2c2d2cu: goto label_2c2d2c;
        case 0x2c2d30u: goto label_2c2d30;
        case 0x2c2d34u: goto label_2c2d34;
        default: break;
    }

    ctx->pc = 0x2c2430u;

label_2c2430:
    // 0x2c2430: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2c2430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2c2434:
    // 0x2c2434: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2c2434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_2c2438:
    // 0x2c2438: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2c2438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_2c243c:
    // 0x2c243c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c243cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c2440:
    // 0x2c2440: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2c2440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_2c2444:
    // 0x2c2444: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x2c2444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_2c2448:
    // 0x2c2448: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2c2448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_2c244c:
    // 0x2c244c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2c244cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_2c2450:
    // 0x2c2450: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2c2450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_2c2454:
    // 0x2c2454: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2c2454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_2c2458:
    // 0x2c2458: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2c2458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_2c245c:
    // 0x2c245c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2c245cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2c2460:
    // 0x2c2460: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c2460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2c2464:
    // 0x2c2464: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2c2464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c2468:
    // 0x2c2468: 0xc0e40a2  jal         func_390288
label_2c246c:
    if (ctx->pc == 0x2C246Cu) {
        ctx->pc = 0x2C246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2468u;
        // 0x2c246c: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2470u;
        goto label_2c2470;
    }
    ctx->pc = 0x2C2468u;
    SET_GPR_U32(ctx, 31, 0x2C2470u);
    ctx->pc = 0x2C246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2468u;
    // 0x2c246c: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2C2468u, 0x2C2470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2470u;
label_2c2470:
    // 0x2c2470: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c2470u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2474:
    // 0x2c2474: 0x56e00003  bnel        $s7, $zero, . + 4 + (0x3 << 2)
label_2c2478:
    if (ctx->pc == 0x2C2478u) {
        ctx->pc = 0x2C2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2474u;
        // 0x2c2478: 0x8ee400d8  lw          $a0, 0xD8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C247Cu;
        goto label_2c247c;
    }
    ctx->pc = 0x2C2474u;
    {
        const bool branch_taken_0x2c2474 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2474) {
            ctx->pc = 0x2C2478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2474u;
            // 0x2c2478: 0x8ee400d8  lw          $a0, 0xD8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2484u;
            goto label_2c2484;
        }
    }
    ctx->pc = 0x2C247Cu;
label_2c247c:
    // 0x2c247c: 0x10000221  b           . + 4 + (0x221 << 2)
label_2c2480:
    if (ctx->pc == 0x2C2480u) {
        ctx->pc = 0x2C2480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C247Cu;
        // 0x2c2480: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2484u;
        goto label_2c2484;
    }
    ctx->pc = 0x2C247Cu;
    {
        const bool branch_taken_0x2c247c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C247Cu;
        // 0x2c2480: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c247c) {
            ctx->pc = 0x2C2D04u;
            goto label_2c2d04;
        }
    }
    ctx->pc = 0x2C2484u;
label_2c2484:
    // 0x2c2484: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c2484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c2488:
    // 0x2c2488: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2c2488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_2c248c:
    // 0x2c248c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2c248cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2c2490:
    // 0x2c2490: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2c2490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2c2494:
    // 0x2c2494: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_2c2498:
    if (ctx->pc == 0x2C2498u) {
        ctx->pc = 0x2C2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2494u;
        // 0x2c2498: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C249Cu;
        goto label_2c249c;
    }
    ctx->pc = 0x2C2494u;
    {
        const bool branch_taken_0x2c2494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2494) {
            ctx->pc = 0x2C2498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2494u;
            // 0x2c2498: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C24D0u;
            goto label_2c24d0;
        }
    }
    ctx->pc = 0x2C249Cu;
label_2c249c:
    // 0x2c249c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2c249cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_2c24a0:
    // 0x2c24a0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2c24a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2c24a4:
    // 0x2c24a4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2c24a8:
    if (ctx->pc == 0x2C24A8u) {
        ctx->pc = 0x2C24A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24A4u;
        // 0x2c24a8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C24ACu;
        goto label_2c24ac;
    }
    ctx->pc = 0x2C24A4u;
    {
        const bool branch_taken_0x2c24a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c24a4) {
            ctx->pc = 0x2C24A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C24A4u;
            // 0x2c24a8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C24D0u;
            goto label_2c24d0;
        }
    }
    ctx->pc = 0x2C24ACu;
label_2c24ac:
    // 0x2c24ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c24acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c24b0:
    // 0x2c24b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c24b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c24b4:
    // 0x2c24b4: 0xc0b087e  jal         func_2C21F8
label_2c24b8:
    if (ctx->pc == 0x2C24B8u) {
        ctx->pc = 0x2C24B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24B4u;
        // 0x2c24b8: 0xa2620046  sb          $v0, 0x46($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 70), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C24BCu;
        goto label_2c24bc;
    }
    ctx->pc = 0x2C24B4u;
    SET_GPR_U32(ctx, 31, 0x2C24BCu);
    ctx->pc = 0x2C24B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C24B4u;
    // 0x2c24b8: 0xa2620046  sb          $v0, 0x46($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 70), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C21F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C21F8u, 0x2C24B4u, 0x2C24BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C24BCu;
label_2c24bc:
    // 0x2c24bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c24bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c24c0:
    // 0x2c24c0: 0x10430210  beq         $v0, $v1, . + 4 + (0x210 << 2)
label_2c24c4:
    if (ctx->pc == 0x2C24C4u) {
        ctx->pc = 0x2C24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24C0u;
        // 0x2c24c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C24C8u;
        goto label_2c24c8;
    }
    ctx->pc = 0x2C24C0u;
    {
        const bool branch_taken_0x2c24c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24C0u;
        // 0x2c24c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24c0) {
            ctx->pc = 0x2C2D04u;
            goto label_2c2d04;
        }
    }
    ctx->pc = 0x2C24C8u;
label_2c24c8:
    // 0x2c24c8: 0xa2600046  sb          $zero, 0x46($s3)
    ctx->pc = 0x2c24c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 70), (uint8_t)GPR_U32(ctx, 0));
label_2c24cc:
    // 0x2c24cc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c24ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c24d0:
    // 0x2c24d0: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2c24d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2c24d4:
    // 0x2c24d4: 0x1c40020a  bgtz        $v0, . + 4 + (0x20A << 2)
label_2c24d8:
    if (ctx->pc == 0x2C24D8u) {
        ctx->pc = 0x2C24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24D4u;
        // 0x2c24d8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C24DCu;
        goto label_2c24dc;
    }
    ctx->pc = 0x2C24D4u;
    {
        const bool branch_taken_0x2c24d4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24D4u;
        // 0x2c24d8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24d4) {
            ctx->pc = 0x2C2D00u;
            goto label_2c2d00;
        }
    }
    ctx->pc = 0x2C24DCu;
label_2c24dc:
    // 0x2c24dc: 0x8e710038  lw          $s1, 0x38($s3)
    ctx->pc = 0x2c24dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_2c24e0:
    // 0x2c24e0: 0x162000c1  bnez        $s1, . + 4 + (0xC1 << 2)
label_2c24e4:
    if (ctx->pc == 0x2C24E4u) {
        ctx->pc = 0x2C24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24E0u;
        // 0x2c24e4: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C24E8u;
        goto label_2c24e8;
    }
    ctx->pc = 0x2C24E0u;
    {
        const bool branch_taken_0x2c24e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24E0u;
        // 0x2c24e4: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24e0) {
            ctx->pc = 0x2C27E8u;
            goto label_2c27e8;
        }
    }
    ctx->pc = 0x2C24E8u;
label_2c24e8:
    // 0x2c24e8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2c24e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_2c24ec:
    // 0x2c24ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c24ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c24f0:
    // 0x2c24f0: 0x54400203  bnel        $v0, $zero, . + 4 + (0x203 << 2)
label_2c24f4:
    if (ctx->pc == 0x2C24F4u) {
        ctx->pc = 0x2C24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24F0u;
        // 0x2c24f4: 0xae720038  sw          $s2, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C24F8u;
        goto label_2c24f8;
    }
    ctx->pc = 0x2C24F0u;
    {
        const bool branch_taken_0x2c24f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c24f0) {
            ctx->pc = 0x2C24F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C24F0u;
            // 0x2c24f4: 0xae720038  sw          $s2, 0x38($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2D00u;
            goto label_2c2d00;
        }
    }
    ctx->pc = 0x2C24F8u;
label_2c24f8:
    // 0x2c24f8: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2c24f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2c24fc:
    // 0x2c24fc: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x2c24fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_2c2500:
    // 0x2c2500: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2c2500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2c2504:
    // 0x2c2504: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
label_2c2508:
    if (ctx->pc == 0x2C2508u) {
        ctx->pc = 0x2C2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2504u;
        // 0x2c2508: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C250Cu;
        goto label_2c250c;
    }
    ctx->pc = 0x2C2504u;
    {
        const bool branch_taken_0x2c2504 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2504u;
        // 0x2c2508: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2504) {
            ctx->pc = 0x2C254Cu;
            goto label_2c254c;
        }
    }
    ctx->pc = 0x2C250Cu;
label_2c250c:
    // 0x2c250c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c250cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c2510:
    // 0x2c2510: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c2510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c2514:
    // 0x2c2514: 0x40f809  jalr        $v0
label_2c2518:
    if (ctx->pc == 0x2C2518u) {
        ctx->pc = 0x2C2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2514u;
        // 0x2c2518: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C251Cu;
        goto label_2c251c;
    }
    ctx->pc = 0x2C2514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C251Cu);
        ctx->pc = 0x2C2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2514u;
        // 0x2c2518: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2514u, 0x2C251Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C251Cu;
label_2c251c:
    // 0x2c251c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x2c251cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_2c2520:
    // 0x2c2520: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c2520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c2524:
    // 0x2c2524: 0x97a30056  lhu         $v1, 0x56($sp)
    ctx->pc = 0x2c2524u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 86)));
label_2c2528:
    // 0x2c2528: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2c2528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2c252c:
    // 0x2c252c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x2c252cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_2c2530:
    // 0x2c2530: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2c2530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2c2534:
    // 0x2c2534: 0xaee400d8  sw          $a0, 0xD8($s7)
    ctx->pc = 0x2c2534u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 216), GPR_U32(ctx, 4));
label_2c2538:
    // 0x2c2538: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2c2538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2c253c:
    // 0x2c253c: 0xa2720047  sb          $s2, 0x47($s3)
    ctx->pc = 0x2c253cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 71), (uint8_t)GPR_U32(ctx, 18));
label_2c2540:
    // 0x2c2540: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x2c2540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_2c2544:
    // 0x2c2544: 0x1000000c  b           . + 4 + (0xC << 2)
label_2c2548:
    if (ctx->pc == 0x2C2548u) {
        ctx->pc = 0x2C2548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2544u;
        // 0x2c2548: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C254Cu;
        goto label_2c254c;
    }
    ctx->pc = 0x2C2544u;
    {
        const bool branch_taken_0x2c2544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2544u;
        // 0x2c2548: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2544) {
            ctx->pc = 0x2C2578u;
            goto label_2c2578;
        }
    }
    ctx->pc = 0x2C254Cu;
label_2c254c:
    // 0x2c254c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c254cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c2550:
    // 0x2c2550: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c2550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c2554:
    // 0x2c2554: 0x40f809  jalr        $v0
label_2c2558:
    if (ctx->pc == 0x2C2558u) {
        ctx->pc = 0x2C2558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2554u;
        // 0x2c2558: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C255Cu;
        goto label_2c255c;
    }
    ctx->pc = 0x2C2554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C255Cu);
        ctx->pc = 0x2C2558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2554u;
        // 0x2c2558: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2554u, 0x2C255Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C255Cu;
label_2c255c:
    // 0x2c255c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2c255cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_2c2560:
    // 0x2c2560: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x2c2560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_2c2564:
    // 0x2c2564: 0x87a2005a  lh          $v0, 0x5A($sp)
    ctx->pc = 0x2c2564u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 90)));
label_2c2568:
    // 0x2c2568: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2c256c:
    if (ctx->pc == 0x2C256Cu) {
        ctx->pc = 0x2C256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2568u;
        // 0x2c256c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2570u;
        goto label_2c2570;
    }
    ctx->pc = 0x2C2568u;
    {
        const bool branch_taken_0x2c2568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2568u;
        // 0x2c256c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2568) {
            ctx->pc = 0x2C257Cu;
            goto label_2c257c;
        }
    }
    ctx->pc = 0x2C2570u;
label_2c2570:
    // 0x2c2570: 0x100001e3  b           . + 4 + (0x1E3 << 2)
label_2c2574:
    if (ctx->pc == 0x2C2574u) {
        ctx->pc = 0x2C2574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2570u;
        // 0x2c2574: 0xae720038  sw          $s2, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2578u;
        goto label_2c2578;
    }
    ctx->pc = 0x2C2570u;
    {
        const bool branch_taken_0x2c2570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2570u;
        // 0x2c2574: 0xae720038  sw          $s2, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2570) {
            ctx->pc = 0x2C2D00u;
            goto label_2c2d00;
        }
    }
    ctx->pc = 0x2C2578u;
label_2c2578:
    // 0x2c2578: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2c2578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2c257c:
    // 0x2c257c: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x2c257cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_2c2580:
    // 0x2c2580: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2c2580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2c2584:
    // 0x2c2584: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2c2584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2c2588:
    // 0x2c2588: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2c2588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2c258c:
    // 0x2c258c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_2c2590:
    if (ctx->pc == 0x2C2590u) {
        ctx->pc = 0x2C2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C258Cu;
        // 0x2c2590: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2594u;
        goto label_2c2594;
    }
    ctx->pc = 0x2C258Cu;
    {
        const bool branch_taken_0x2c258c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C258Cu;
        // 0x2c2590: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c258c) {
            ctx->pc = 0x2C2668u;
            goto label_2c2668;
        }
    }
    ctx->pc = 0x2C2594u;
label_2c2594:
    // 0x2c2594: 0x86a20092  lh          $v0, 0x92($s5)
    ctx->pc = 0x2c2594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2c2598:
    // 0x2c2598: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2c2598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2c259c:
    // 0x2c259c: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2c259cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2c25a0:
    // 0x2c25a0: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x2c25a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_2c25a4:
    // 0x2c25a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c25a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c25a8:
    // 0x2c25a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c25a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c25ac:
    // 0x2c25ac: 0xc0cdb38  jal         func_336CE0
label_2c25b0:
    if (ctx->pc == 0x2C25B0u) {
        ctx->pc = 0x2C25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25ACu;
        // 0x2c25b0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C25B4u;
        goto label_2c25b4;
    }
    ctx->pc = 0x2C25ACu;
    SET_GPR_U32(ctx, 31, 0x2C25B4u);
    ctx->pc = 0x2C25B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C25ACu;
    // 0x2c25b0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C25ACu, 0x2C25B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C25B4u;
label_2c25b4:
    // 0x2c25b4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2c25b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_2c25b8:
    // 0x2c25b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c25b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c25bc:
    // 0x2c25bc: 0x0  nop
    ctx->pc = 0x2c25bcu;
    // NOP
label_2c25c0:
    // 0x2c25c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c25c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c25c4:
    // 0x2c25c4: 0x0  nop
    ctx->pc = 0x2c25c4u;
    // NOP
label_2c25c8:
    // 0x2c25c8: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
label_2c25cc:
    if (ctx->pc == 0x2C25CCu) {
        ctx->pc = 0x2C25CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25C8u;
        // 0x2c25cc: 0x92630047  lbu         $v1, 0x47($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C25D0u;
        goto label_2c25d0;
    }
    ctx->pc = 0x2C25C8u;
    {
        const bool branch_taken_0x2c25c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c25c8) {
            ctx->pc = 0x2C25CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C25C8u;
            // 0x2c25cc: 0x92630047  lbu         $v1, 0x47($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2614u;
            goto label_2c2614;
        }
    }
    ctx->pc = 0x2C25D0u;
label_2c25d0:
    // 0x2c25d0: 0xc0a367c  jal         func_28D9F0
label_2c25d4:
    if (ctx->pc == 0x2C25D4u) {
        ctx->pc = 0x2C25D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25D0u;
        // 0x2c25d4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C25D8u;
        goto label_2c25d8;
    }
    ctx->pc = 0x2C25D0u;
    SET_GPR_U32(ctx, 31, 0x2C25D8u);
    ctx->pc = 0x2C25D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C25D0u;
    // 0x2c25d4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C25D0u, 0x2C25D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C25D8u;
label_2c25d8:
    // 0x2c25d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c25d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c25dc:
    // 0x2c25dc: 0x108001c8  beqz        $a0, . + 4 + (0x1C8 << 2)
label_2c25e0:
    if (ctx->pc == 0x2C25E0u) {
        ctx->pc = 0x2C25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25DCu;
        // 0x2c25e0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C25E4u;
        goto label_2c25e4;
    }
    ctx->pc = 0x2C25DCu;
    {
        const bool branch_taken_0x2c25dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25DCu;
        // 0x2c25e0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25dc) {
            ctx->pc = 0x2C2D00u;
            goto label_2c2d00;
        }
    }
    ctx->pc = 0x2C25E4u;
label_2c25e4:
    // 0x2c25e4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2c25e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c25e8:
    // 0x2c25e8: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2c25e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c25ec:
    // 0x2c25ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c25ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c25f0:
    // 0x2c25f0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2c25f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2c25f4:
    // 0x2c25f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c25f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c25f8:
    // 0x2c25f8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c25f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c25fc:
    // 0x2c25fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c25fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c2600:
    // 0x2c2600: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c2600u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2604:
    // 0x2c2604: 0xc0bee7a  jal         func_2FB9E8
label_2c2608:
    if (ctx->pc == 0x2C2608u) {
        ctx->pc = 0x2C2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2604u;
        // 0x2c2608: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C260Cu;
        goto label_2c260c;
    }
    ctx->pc = 0x2C2604u;
    SET_GPR_U32(ctx, 31, 0x2C260Cu);
    ctx->pc = 0x2C2608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2604u;
    // 0x2c2608: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C2604u, 0x2C260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C260Cu;
label_2c260c:
    // 0x2c260c: 0x100001bd  b           . + 4 + (0x1BD << 2)
label_2c2610:
    if (ctx->pc == 0x2C2610u) {
        ctx->pc = 0x2C2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C260Cu;
        // 0x2c2610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2614u;
        goto label_2c2614;
    }
    ctx->pc = 0x2C260Cu;
    {
        const bool branch_taken_0x2c260c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C260Cu;
        // 0x2c2610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c260c) {
            ctx->pc = 0x2C2D04u;
            goto label_2c2d04;
        }
    }
    ctx->pc = 0x2C2614u;
label_2c2614:
    // 0x2c2614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c2618:
    // 0x2c2618: 0x146201ba  bne         $v1, $v0, . + 4 + (0x1BA << 2)
label_2c261c:
    if (ctx->pc == 0x2C261Cu) {
        ctx->pc = 0x2C261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2618u;
        // 0x2c261c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2620u;
        goto label_2c2620;
    }
    ctx->pc = 0x2C2618u;
    {
        const bool branch_taken_0x2c2618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2618u;
        // 0x2c261c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2618) {
            ctx->pc = 0x2C2D04u;
            goto label_2c2d04;
        }
    }
    ctx->pc = 0x2C2620u;
label_2c2620:
    // 0x2c2620: 0xc0a367c  jal         func_28D9F0
label_2c2624:
    if (ctx->pc == 0x2C2624u) {
        ctx->pc = 0x2C2624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2620u;
        // 0x2c2624: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2628u;
        goto label_2c2628;
    }
    ctx->pc = 0x2C2620u;
    SET_GPR_U32(ctx, 31, 0x2C2628u);
    ctx->pc = 0x2C2624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2620u;
    // 0x2c2624: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C2620u, 0x2C2628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2628u;
label_2c2628:
    // 0x2c2628: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2c262c:
    if (ctx->pc == 0x2C262Cu) {
        ctx->pc = 0x2C262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2628u;
        // 0x2c262c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2630u;
        goto label_2c2630;
    }
    ctx->pc = 0x2C2628u;
    {
        const bool branch_taken_0x2c2628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2628u;
        // 0x2c262c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2628) {
            ctx->pc = 0x2C2650u;
            goto label_2c2650;
        }
    }
    ctx->pc = 0x2C2630u;
label_2c2630:
    // 0x2c2630: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2c2630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c2634:
    // 0x2c2634: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2c2634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2c2638:
    // 0x2c2638: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c2638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c263c:
    // 0x2c263c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c263cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c2640:
    // 0x2c2640: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2c2640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2c2644:
    // 0x2c2644: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2c2644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c2648:
    // 0x2c2648: 0xc0be8c0  jal         func_2FA300
label_2c264c:
    if (ctx->pc == 0x2C264Cu) {
        ctx->pc = 0x2C264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2648u;
        // 0x2c264c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2650u;
        goto label_2c2650;
    }
    ctx->pc = 0x2C2648u;
    SET_GPR_U32(ctx, 31, 0x2C2650u);
    ctx->pc = 0x2C264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2648u;
    // 0x2c264c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2C2648u, 0x2C2650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2650u;
label_2c2650:
    // 0x2c2650: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c2650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c2654:
    // 0x2c2654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c2654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c2658:
    // 0x2c2658: 0xc08ce24  jal         func_233890
label_2c265c:
    if (ctx->pc == 0x2C265Cu) {
        ctx->pc = 0x2C265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2658u;
        // 0x2c265c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2660u;
        goto label_2c2660;
    }
    ctx->pc = 0x2C2658u;
    SET_GPR_U32(ctx, 31, 0x2C2660u);
    ctx->pc = 0x2C265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2658u;
    // 0x2c265c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233890u, 0x2C2658u, 0x2C2660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2660u;
label_2c2660:
    // 0x2c2660: 0x100001a7  b           . + 4 + (0x1A7 << 2)
label_2c2664:
    if (ctx->pc == 0x2C2664u) {
        ctx->pc = 0x2C2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2660u;
        // 0x2c2664: 0xa2600047  sb          $zero, 0x47($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 71), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2668u;
        goto label_2c2668;
    }
    ctx->pc = 0x2C2660u;
    {
        const bool branch_taken_0x2c2660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2660u;
        // 0x2c2664: 0xa2600047  sb          $zero, 0x47($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 71), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2660) {
            ctx->pc = 0x2C2D00u;
            goto label_2c2d00;
        }
    }
    ctx->pc = 0x2C2668u;
label_2c2668:
    // 0x2c2668: 0x96620044  lhu         $v0, 0x44($s3)
    ctx->pc = 0x2c2668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
label_2c266c:
    // 0x2c266c: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_2c2670:
    if (ctx->pc == 0x2C2670u) {
        ctx->pc = 0x2C2670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C266Cu;
        // 0x2c2670: 0x86b00092  lh          $s0, 0x92($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2674u;
        goto label_2c2674;
    }
    ctx->pc = 0x2C266Cu;
    {
        const bool branch_taken_0x2c266c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c266c) {
            ctx->pc = 0x2C2670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C266Cu;
            // 0x2c2670: 0x86b00092  lh          $s0, 0x92($s5) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C26F0u;
            goto label_2c26f0;
        }
    }
    ctx->pc = 0x2C2674u;
label_2c2674:
    // 0x2c2674: 0xc0e4060  jal         func_390180
label_2c2678:
    if (ctx->pc == 0x2C2678u) {
        ctx->pc = 0x2C2678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2674u;
        // 0x2c2678: 0x26640034  addiu       $a0, $s3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C267Cu;
        goto label_2c267c;
    }
    ctx->pc = 0x2C2674u;
    SET_GPR_U32(ctx, 31, 0x2C267Cu);
    ctx->pc = 0x2C2678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2674u;
    // 0x2c2678: 0x26640034  addiu       $a0, $s3, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2C2674u, 0x2C267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C267Cu;
label_2c267c:
    // 0x2c267c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c267cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2680:
    // 0x2c2680: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_2c2684:
    if (ctx->pc == 0x2C2684u) {
        ctx->pc = 0x2C2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2680u;
        // 0x2c2684: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2688u;
        goto label_2c2688;
    }
    ctx->pc = 0x2C2680u;
    {
        const bool branch_taken_0x2c2680 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2680u;
        // 0x2c2684: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2680) {
            ctx->pc = 0x2C26E8u;
            goto label_2c26e8;
        }
    }
    ctx->pc = 0x2C2688u;
label_2c2688:
    // 0x2c2688: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2c2688u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2c268c:
    // 0x2c268c: 0xc0e8b48  jal         func_3A2D20
label_2c2690:
    if (ctx->pc == 0x2C2690u) {
        ctx->pc = 0x2C2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C268Cu;
        // 0x2c2690: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2694u;
        goto label_2c2694;
    }
    ctx->pc = 0x2C268Cu;
    SET_GPR_U32(ctx, 31, 0x2C2694u);
    ctx->pc = 0x2C2690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C268Cu;
    // 0x2c2690: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2C268Cu, 0x2C2694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2694u;
label_2c2694:
    // 0x2c2694: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2c2694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2c2698:
    // 0x2c2698: 0xc0e8b68  jal         func_3A2DA0
label_2c269c:
    if (ctx->pc == 0x2C269Cu) {
        ctx->pc = 0x2C269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2698u;
        // 0x2c269c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C26A0u;
        goto label_2c26a0;
    }
    ctx->pc = 0x2C2698u;
    SET_GPR_U32(ctx, 31, 0x2C26A0u);
    ctx->pc = 0x2C269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2698u;
    // 0x2c269c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2C2698u, 0x2C26A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26A0u;
label_2c26a0:
    // 0x2c26a0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2c26a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2c26a4:
    // 0x2c26a4: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x2c26a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_2c26a8:
    // 0x2c26a8: 0xc0e8b80  jal         func_3A2E00
label_2c26ac:
    if (ctx->pc == 0x2C26ACu) {
        ctx->pc = 0x2C26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26A8u;
        // 0x2c26ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C26B0u;
        goto label_2c26b0;
    }
    ctx->pc = 0x2C26A8u;
    SET_GPR_U32(ctx, 31, 0x2C26B0u);
    ctx->pc = 0x2C26ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26A8u;
    // 0x2c26ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x2C26A8u, 0x2C26B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26B0u;
label_2c26b0:
    // 0x2c26b0: 0xc0e8b50  jal         func_3A2D40
label_2c26b4:
    if (ctx->pc == 0x2C26B4u) {
        ctx->pc = 0x2C26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26B0u;
        // 0x2c26b4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C26B8u;
        goto label_2c26b8;
    }
    ctx->pc = 0x2C26B0u;
    SET_GPR_U32(ctx, 31, 0x2C26B8u);
    ctx->pc = 0x2C26B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26B0u;
    // 0x2c26b4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2C26B0u, 0x2C26B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26B8u;
label_2c26b8:
    // 0x2c26b8: 0xc0e8b48  jal         func_3A2D20
label_2c26bc:
    if (ctx->pc == 0x2C26BCu) {
        ctx->pc = 0x2C26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26B8u;
        // 0x2c26bc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C26C0u;
        goto label_2c26c0;
    }
    ctx->pc = 0x2C26B8u;
    SET_GPR_U32(ctx, 31, 0x2C26C0u);
    ctx->pc = 0x2C26BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26B8u;
    // 0x2c26bc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2C26B8u, 0x2C26C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26C0u;
label_2c26c0:
    // 0x2c26c0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2c26c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2c26c4:
    // 0x2c26c4: 0xc0e8b70  jal         func_3A2DC0
label_2c26c8:
    if (ctx->pc == 0x2C26C8u) {
        ctx->pc = 0x2C26C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26C4u;
        // 0x2c26c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C26CCu;
        goto label_2c26cc;
    }
    ctx->pc = 0x2C26C4u;
    SET_GPR_U32(ctx, 31, 0x2C26CCu);
    ctx->pc = 0x2C26C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26C4u;
    // 0x2c26c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x2C26C4u, 0x2C26CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26CCu;
label_2c26cc:
    // 0x2c26cc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2c26ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2c26d0:
    // 0x2c26d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c26d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c26d4:
    // 0x2c26d4: 0xc0e8b80  jal         func_3A2E00
label_2c26d8:
    if (ctx->pc == 0x2C26D8u) {
        ctx->pc = 0x2C26D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26D4u;
        // 0x2c26d8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C26DCu;
        goto label_2c26dc;
    }
    ctx->pc = 0x2C26D4u;
    SET_GPR_U32(ctx, 31, 0x2C26DCu);
    ctx->pc = 0x2C26D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26D4u;
    // 0x2c26d8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x2C26D4u, 0x2C26DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26DCu;
label_2c26dc:
    // 0x2c26dc: 0xc0e8b50  jal         func_3A2D40
label_2c26e0:
    if (ctx->pc == 0x2C26E0u) {
        ctx->pc = 0x2C26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26DCu;
        // 0x2c26e0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C26E4u;
        goto label_2c26e4;
    }
    ctx->pc = 0x2C26DCu;
    SET_GPR_U32(ctx, 31, 0x2C26E4u);
    ctx->pc = 0x2C26E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26DCu;
    // 0x2c26e0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2C26DCu, 0x2C26E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26E4u;
label_2c26e4:
    // 0x2c26e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c26e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c26e8:
    // 0x2c26e8: 0xa6620044  sh          $v0, 0x44($s3)
    ctx->pc = 0x2c26e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 68), (uint16_t)GPR_U32(ctx, 2));
label_2c26ec:
    // 0x2c26ec: 0x86b00092  lh          $s0, 0x92($s5)
    ctx->pc = 0x2c26ecu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2c26f0:
    // 0x2c26f0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2c26f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2c26f4:
    // 0x2c26f4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2c26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2c26f8:
    // 0x2c26f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c26f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c26fc:
    // 0x2c26fc: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2c26fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2c2700:
    // 0x2c2700: 0xc10587a  jal         func_4161E8
label_2c2704:
    if (ctx->pc == 0x2C2704u) {
        ctx->pc = 0x2C2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2700u;
        // 0x2c2704: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2708u;
        goto label_2c2708;
    }
    ctx->pc = 0x2C2700u;
    SET_GPR_U32(ctx, 31, 0x2C2708u);
    ctx->pc = 0x2C2704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2700u;
    // 0x2c2704: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C2700u, 0x2C2708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2708u;
label_2c2708:
    // 0x2c2708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c270c:
    // 0x2c270c: 0xc0cdb38  jal         func_336CE0
label_2c2710:
    if (ctx->pc == 0x2C2710u) {
        ctx->pc = 0x2C2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C270Cu;
        // 0x2c2710: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2714u;
        goto label_2c2714;
    }
    ctx->pc = 0x2C270Cu;
    SET_GPR_U32(ctx, 31, 0x2C2714u);
    ctx->pc = 0x2C2710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C270Cu;
    // 0x2c2710: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C270Cu, 0x2C2714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2714u;
label_2c2714:
    // 0x2c2714: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c2714u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2c2718:
    // 0x2c2718: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c2718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2c271c:
    // 0x2c271c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c271cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c2720:
    // 0x2c2720: 0x0  nop
    ctx->pc = 0x2c2720u;
    // NOP
label_2c2724:
    // 0x2c2724: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c2724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c2728:
    // 0x2c2728: 0x0  nop
    ctx->pc = 0x2c2728u;
    // NOP
label_2c272c:
    // 0x2c272c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_2c2730:
    if (ctx->pc == 0x2C2730u) {
        ctx->pc = 0x2C2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C272Cu;
        // 0x2c2730: 0x8e43b734  lw          $v1, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2734u;
        goto label_2c2734;
    }
    ctx->pc = 0x2C272Cu;
    {
        const bool branch_taken_0x2c272c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C272Cu;
        // 0x2c2730: 0x8e43b734  lw          $v1, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c272c) {
            ctx->pc = 0x2C27A8u;
            goto label_2c27a8;
        }
    }
    ctx->pc = 0x2C2734u;
label_2c2734:
    // 0x2c2734: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x2c2734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_2c2738:
    // 0x2c2738: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c2738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c273c:
    // 0x2c273c: 0x0  nop
    ctx->pc = 0x2c273cu;
    // NOP
label_2c2740:
    // 0x2c2740: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c2740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c2744:
    // 0x2c2744: 0x0  nop
    ctx->pc = 0x2c2744u;
    // NOP
label_2c2748:
    // 0x2c2748: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2c274c:
    if (ctx->pc == 0x2C274Cu) {
        ctx->pc = 0x2C274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2748u;
        // 0x2c274c: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2750u;
        goto label_2c2750;
    }
    ctx->pc = 0x2C2748u;
    {
        const bool branch_taken_0x2c2748 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2748u;
        // 0x2c274c: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2748) {
            ctx->pc = 0x2C2754u;
            goto label_2c2754;
        }
    }
    ctx->pc = 0x2C2750u;
label_2c2750:
    // 0x2c2750: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2c2750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c2754:
    // 0x2c2754: 0xc0a367c  jal         func_28D9F0
label_2c2758:
    if (ctx->pc == 0x2C2758u) {
        ctx->pc = 0x2C2758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2754u;
        // 0x2c2758: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C275Cu;
        goto label_2c275c;
    }
    ctx->pc = 0x2C2754u;
    SET_GPR_U32(ctx, 31, 0x2C275Cu);
    ctx->pc = 0x2C2758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2754u;
    // 0x2c2758: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C2754u, 0x2C275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C275Cu;
label_2c275c:
    // 0x2c275c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c275cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2760:
    // 0x2c2760: 0x12000168  beqz        $s0, . + 4 + (0x168 << 2)
label_2c2764:
    if (ctx->pc == 0x2C2764u) {
        ctx->pc = 0x2C2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2760u;
        // 0x2c2764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2768u;
        goto label_2c2768;
    }
    ctx->pc = 0x2C2760u;
    {
        const bool branch_taken_0x2c2760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2760u;
        // 0x2c2764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2760) {
            ctx->pc = 0x2C2D04u;
            goto label_2c2d04;
        }
    }
    ctx->pc = 0x2C2768u;
label_2c2768:
    // 0x2c2768: 0xc10587a  jal         func_4161E8
label_2c276c:
    if (ctx->pc == 0x2C276Cu) {
        ctx->pc = 0x2C276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2768u;
        // 0x2c276c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2770u;
        goto label_2c2770;
    }
    ctx->pc = 0x2C2768u;
    SET_GPR_U32(ctx, 31, 0x2C2770u);
    ctx->pc = 0x2C276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2768u;
    // 0x2c276c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C2768u, 0x2C2770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2770u;
label_2c2770:
    // 0x2c2770: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2c2770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2c2774:
    // 0x2c2774: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2c2774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c2778:
    // 0x2c2778: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2c2778u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2c277c:
    // 0x2c277c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c277cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2780:
    // 0x2c2780: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c2780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2c2784:
    // 0x2c2784: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c2784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c2788:
    // 0x2c2788: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c2788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c278c:
    // 0x2c278c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c278cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c2790:
    // 0x2c2790: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c2790u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2794:
    // 0x2c2794: 0x240903e8  addiu       $t1, $zero, 0x3E8
    ctx->pc = 0x2c2794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2c2798:
    // 0x2c2798: 0xc0bee7a  jal         func_2FB9E8
label_2c279c:
    if (ctx->pc == 0x2C279Cu) {
        ctx->pc = 0x2C279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2798u;
        // 0x2c279c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C27A0u;
        goto label_2c27a0;
    }
    ctx->pc = 0x2C2798u;
    SET_GPR_U32(ctx, 31, 0x2C27A0u);
    ctx->pc = 0x2C279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2798u;
    // 0x2c279c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C2798u, 0x2C27A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27A0u;
label_2c27a0:
    // 0x2c27a0: 0x10000158  b           . + 4 + (0x158 << 2)
label_2c27a4:
    if (ctx->pc == 0x2C27A4u) {
        ctx->pc = 0x2C27A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27A0u;
        // 0x2c27a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C27A8u;
        goto label_2c27a8;
    }
    ctx->pc = 0x2C27A0u;
    {
        const bool branch_taken_0x2c27a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C27A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27A0u;
        // 0x2c27a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c27a0) {
            ctx->pc = 0x2C2D04u;
            goto label_2c2d04;
        }
    }
    ctx->pc = 0x2C27A8u;
label_2c27a8:
    // 0x2c27a8: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x2c27a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_2c27ac:
    // 0x2c27ac: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2c27acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2c27b0:
    // 0x2c27b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2c27b4:
    // 0x2c27b4: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x2c27b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
label_2c27b8:
    // 0x2c27b8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2c27b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2c27bc:
    // 0x2c27bc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c27bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c27c0:
    // 0x2c27c0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c27c4:
    // 0x2c27c4: 0x40f809  jalr        $v0
label_2c27c8:
    if (ctx->pc == 0x2C27C8u) {
        ctx->pc = 0x2C27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27C4u;
        // 0x2c27c8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C27CCu;
        goto label_2c27cc;
    }
    ctx->pc = 0x2C27C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C27CCu);
        ctx->pc = 0x2C27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27C4u;
        // 0x2c27c8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C27C4u, 0x2C27CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C27CCu;
label_2c27cc:
    // 0x2c27cc: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2c27ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2c27d0:
    // 0x2c27d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c27d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c27d4:
    // 0x2c27d4: 0x24c650f8  addiu       $a2, $a2, 0x50F8
    ctx->pc = 0x2c27d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20728));
label_2c27d8:
    // 0x2c27d8: 0xc08e1a4  jal         func_238690
label_2c27dc:
    if (ctx->pc == 0x2C27DCu) {
        ctx->pc = 0x2C27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27D8u;
        // 0x2c27dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C27E0u;
        goto label_2c27e0;
    }
    ctx->pc = 0x2C27D8u;
    SET_GPR_U32(ctx, 31, 0x2C27E0u);
    ctx->pc = 0x2C27DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C27D8u;
    // 0x2c27dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2C27D8u, 0x2C27E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27E0u;
label_2c27e0:
    // 0x2c27e0: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_2c27e4:
    if (ctx->pc == 0x2C27E4u) {
        ctx->pc = 0x2C27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27E0u;
        // 0x2c27e4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C27E8u;
        goto label_2c27e8;
    }
    ctx->pc = 0x2C27E0u;
    {
        const bool branch_taken_0x2c27e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27E0u;
        // 0x2c27e4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c27e0) {
            ctx->pc = 0x2C2BBCu;
            goto label_2c2bbc;
        }
    }
    ctx->pc = 0x2C27E8u;
label_2c27e8:
    // 0x2c27e8: 0x1632004e  bne         $s1, $s2, . + 4 + (0x4E << 2)
label_2c27ec:
    if (ctx->pc == 0x2C27ECu) {
        ctx->pc = 0x2C27ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27E8u;
        // 0x2c27ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C27F0u;
        goto label_2c27f0;
    }
    ctx->pc = 0x2C27E8u;
    {
        const bool branch_taken_0x2c27e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x2C27ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27E8u;
        // 0x2c27ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c27e8) {
            ctx->pc = 0x2C2924u;
            goto label_2c2924;
        }
    }
    ctx->pc = 0x2C27F0u;
label_2c27f0:
    // 0x2c27f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2c27f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2c27f4:
    // 0x2c27f4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2c27f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_2c27f8:
    // 0x2c27f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c27f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c27fc:
    // 0x2c27fc: 0x144000ef  bnez        $v0, . + 4 + (0xEF << 2)
label_2c2800:
    if (ctx->pc == 0x2C2800u) {
        ctx->pc = 0x2C2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27FCu;
        // 0x2c2800: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2804u;
        goto label_2c2804;
    }
    ctx->pc = 0x2C27FCu;
    {
        const bool branch_taken_0x2c27fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27FCu;
        // 0x2c2800: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c27fc) {
            ctx->pc = 0x2C2BBCu;
            goto label_2c2bbc;
        }
    }
    ctx->pc = 0x2C2804u;
label_2c2804:
    // 0x2c2804: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2c2804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2c2808:
    // 0x2c2808: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c2808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c280c:
    // 0x2c280c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2c280cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2c2810:
    // 0x2c2810: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x2c2810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
label_2c2814:
    // 0x2c2814: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c2814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2c2818:
    // 0x2c2818: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2c2818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2c281c:
    // 0x2c281c: 0xc0cd508  jal         func_335420
label_2c2820:
    if (ctx->pc == 0x2C2820u) {
        ctx->pc = 0x2C2820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C281Cu;
        // 0x2c2820: 0x26700010  addiu       $s0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2824u;
        goto label_2c2824;
    }
    ctx->pc = 0x2C281Cu;
    SET_GPR_U32(ctx, 31, 0x2C2824u);
    ctx->pc = 0x2C2820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C281Cu;
    // 0x2c2820: 0x26700010  addiu       $s0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2C281Cu, 0x2C2824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2824u;
label_2c2824:
    // 0x2c2824: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2c2824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2c2828:
    // 0x2c2828: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2c2828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2c282c:
    // 0x2c282c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c282cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2c2830:
    // 0x2c2830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2834:
    // 0x2c2834: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c2834u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2c2838:
    // 0x2c2838: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c2838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c283c:
    // 0x2c283c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c283cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2840:
    // 0x2c2840: 0xc0a7cf2  jal         func_29F3C8
label_2c2844:
    if (ctx->pc == 0x2C2844u) {
        ctx->pc = 0x2C2844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2840u;
        // 0x2c2844: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2848u;
        goto label_2c2848;
    }
    ctx->pc = 0x2C2840u;
    SET_GPR_U32(ctx, 31, 0x2C2848u);
    ctx->pc = 0x2C2844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2840u;
    // 0x2c2844: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x2C2840u, 0x2C2848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2848u;
label_2c2848:
    // 0x2c2848: 0x1040012e  beqz        $v0, . + 4 + (0x12E << 2)
label_2c284c:
    if (ctx->pc == 0x2C284Cu) {
        ctx->pc = 0x2C284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2848u;
        // 0x2c284c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2850u;
        goto label_2c2850;
    }
    ctx->pc = 0x2C2848u;
    {
        const bool branch_taken_0x2c2848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2848u;
        // 0x2c284c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2848) {
            ctx->pc = 0x2C2D04u;
            goto label_2c2d04;
        }
    }
    ctx->pc = 0x2C2850u;
label_2c2850:
    // 0x2c2850: 0xc10587a  jal         func_4161E8
label_2c2854:
    if (ctx->pc == 0x2C2854u) {
        ctx->pc = 0x2C2854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2850u;
        // 0x2c2854: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2858u;
        goto label_2c2858;
    }
    ctx->pc = 0x2C2850u;
    SET_GPR_U32(ctx, 31, 0x2C2858u);
    ctx->pc = 0x2C2854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2850u;
    // 0x2c2854: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C2850u, 0x2C2858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2858u;
label_2c2858:
    // 0x2c2858: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c2858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c285c:
    // 0x2c285c: 0xc0cdb38  jal         func_336CE0
label_2c2860:
    if (ctx->pc == 0x2C2860u) {
        ctx->pc = 0x2C2860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C285Cu;
        // 0x2c2860: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2864u;
        goto label_2c2864;
    }
    ctx->pc = 0x2C285Cu;
    SET_GPR_U32(ctx, 31, 0x2C2864u);
    ctx->pc = 0x2C2860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C285Cu;
    // 0x2c2860: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C285Cu, 0x2C2864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2864u;
label_2c2864:
    // 0x2c2864: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2c2864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2c2868:
    // 0x2c2868: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c2868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c286c:
    // 0x2c286c: 0x0  nop
    ctx->pc = 0x2c286cu;
    // NOP
label_2c2870:
    // 0x2c2870: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c2870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c2874:
    // 0x2c2874: 0x0  nop
    ctx->pc = 0x2c2874u;
    // NOP
label_2c2878:
    // 0x2c2878: 0x45000121  bc1f        . + 4 + (0x121 << 2)
label_2c287c:
    if (ctx->pc == 0x2C287Cu) {
        ctx->pc = 0x2C287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2878u;
        // 0x2c287c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2880u;
        goto label_2c2880;
    }
    ctx->pc = 0x2C2878u;
    {
        const bool branch_taken_0x2c2878 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2878u;
        // 0x2c287c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2878) {
            ctx->pc = 0x2C2D00u;
            goto label_2c2d00;
        }
    }
    ctx->pc = 0x2C2880u;
label_2c2880:
    // 0x2c2880: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2c2880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2c2884:
    // 0x2c2884: 0xc0e409a  jal         func_390268
label_2c2888:
    if (ctx->pc == 0x2C2888u) {
        ctx->pc = 0x2C2888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2884u;
        // 0x2c2888: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C288Cu;
        goto label_2c288c;
    }
    ctx->pc = 0x2C2884u;
    SET_GPR_U32(ctx, 31, 0x2C288Cu);
    ctx->pc = 0x2C2888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2884u;
    // 0x2c2888: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C2884u, 0x2C288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C288Cu;
label_2c288c:
    // 0x2c288c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c2890:
    if (ctx->pc == 0x2C2890u) {
        ctx->pc = 0x2C2894u;
        goto label_2c2894;
    }
    ctx->pc = 0x2C288Cu;
    {
        const bool branch_taken_0x2c288c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c288c) {
            ctx->pc = 0x2C28B0u;
            goto label_2c28b0;
        }
    }
    ctx->pc = 0x2C2894u;
label_2c2894:
    // 0x2c2894: 0xc087502  jal         func_21D408
label_2c2898:
    if (ctx->pc == 0x2C2898u) {
        ctx->pc = 0x2C2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2894u;
        // 0x2c2898: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C289Cu;
        goto label_2c289c;
    }
    ctx->pc = 0x2C2894u;
    SET_GPR_U32(ctx, 31, 0x2C289Cu);
    ctx->pc = 0x2C2898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2894u;
    // 0x2c2898: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C2894u, 0x2C289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C289Cu;
label_2c289c:
    // 0x2c289c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2c289cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2c28a0:
    // 0x2c28a0: 0xc05a7f8  jal         func_169FE0
label_2c28a4:
    if (ctx->pc == 0x2C28A4u) {
        ctx->pc = 0x2C28A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28A0u;
        // 0x2c28a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C28A8u;
        goto label_2c28a8;
    }
    ctx->pc = 0x2C28A0u;
    SET_GPR_U32(ctx, 31, 0x2C28A8u);
    ctx->pc = 0x2C28A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C28A0u;
    // 0x2c28a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169FE0u, 0x2C28A0u, 0x2C28A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C28A8u;
label_2c28a8:
    // 0x2c28a8: 0x10510116  beq         $v0, $s1, . + 4 + (0x116 << 2)
label_2c28ac:
    if (ctx->pc == 0x2C28ACu) {
        ctx->pc = 0x2C28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28A8u;
        // 0x2c28ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C28B0u;
        goto label_2c28b0;
    }
    ctx->pc = 0x2C28A8u;
    {
        const bool branch_taken_0x2c28a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2C28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28A8u;
        // 0x2c28ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c28a8) {
            ctx->pc = 0x2C2D04u;
            goto label_2c2d04;
        }
    }
    ctx->pc = 0x2C28B0u;
label_2c28b0:
    // 0x2c28b0: 0xc0a367c  jal         func_28D9F0
label_2c28b4:
    if (ctx->pc == 0x2C28B4u) {
        ctx->pc = 0x2C28B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28B0u;
        // 0x2c28b4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C28B8u;
        goto label_2c28b8;
    }
    ctx->pc = 0x2C28B0u;
    SET_GPR_U32(ctx, 31, 0x2C28B8u);
    ctx->pc = 0x2C28B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C28B0u;
    // 0x2c28b4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C28B0u, 0x2C28B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C28B8u;
label_2c28b8:
    // 0x2c28b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c28b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c28bc:
    // 0x2c28bc: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2c28c0:
    if (ctx->pc == 0x2C28C0u) {
        ctx->pc = 0x2C28C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28BCu;
        // 0x2c28c0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C28C4u;
        goto label_2c28c4;
    }
    ctx->pc = 0x2C28BCu;
    {
        const bool branch_taken_0x2c28bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C28C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28BCu;
        // 0x2c28c0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c28bc) {
            ctx->pc = 0x2C28ECu;
            goto label_2c28ec;
        }
    }
    ctx->pc = 0x2C28C4u;
label_2c28c4:
    // 0x2c28c4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2c28c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c28c8:
    // 0x2c28c8: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2c28c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c28cc:
    // 0x2c28cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c28ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c28d0:
    // 0x2c28d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c28d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2c28d4:
    // 0x2c28d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c28d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c28d8:
    // 0x2c28d8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c28d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c28dc:
    // 0x2c28dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c28dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c28e0:
    // 0x2c28e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c28e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c28e4:
    // 0x2c28e4: 0xc0bee7a  jal         func_2FB9E8
label_2c28e8:
    if (ctx->pc == 0x2C28E8u) {
        ctx->pc = 0x2C28E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28E4u;
        // 0x2c28e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C28ECu;
        goto label_2c28ec;
    }
    ctx->pc = 0x2C28E4u;
    SET_GPR_U32(ctx, 31, 0x2C28ECu);
    ctx->pc = 0x2C28E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C28E4u;
    // 0x2c28e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C28E4u, 0x2C28ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C28ECu;
label_2c28ec:
    // 0x2c28ec: 0xc0a367c  jal         func_28D9F0
label_2c28f0:
    if (ctx->pc == 0x2C28F0u) {
        ctx->pc = 0x2C28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28ECu;
        // 0x2c28f0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C28F4u;
        goto label_2c28f4;
    }
    ctx->pc = 0x2C28ECu;
    SET_GPR_U32(ctx, 31, 0x2C28F4u);
    ctx->pc = 0x2C28F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C28ECu;
    // 0x2c28f0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C28ECu, 0x2C28F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C28F4u;
label_2c28f4:
    // 0x2c28f4: 0x10400102  beqz        $v0, . + 4 + (0x102 << 2)
label_2c28f8:
    if (ctx->pc == 0x2C28F8u) {
        ctx->pc = 0x2C28F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28F4u;
        // 0x2c28f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C28FCu;
        goto label_2c28fc;
    }
    ctx->pc = 0x2C28F4u;
    {
        const bool branch_taken_0x2c28f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C28F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28F4u;
        // 0x2c28f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c28f4) {
            ctx->pc = 0x2C2D00u;
            goto label_2c2d00;
        }
    }
    ctx->pc = 0x2C28FCu;
label_2c28fc:
    // 0x2c28fc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2c28fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c2900:
    // 0x2c2900: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2c2900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2c2904:
    // 0x2c2904: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c2904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c2908:
    // 0x2c2908: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c2908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c290c:
    // 0x2c290c: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2c290cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2c2910:
    // 0x2c2910: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c2910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2914:
    // 0x2c2914: 0xc0be8c0  jal         func_2FA300
label_2c2918:
    if (ctx->pc == 0x2C2918u) {
        ctx->pc = 0x2C2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2914u;
        // 0x2c2918: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C291Cu;
        goto label_2c291c;
    }
    ctx->pc = 0x2C2914u;
    SET_GPR_U32(ctx, 31, 0x2C291Cu);
    ctx->pc = 0x2C2918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2914u;
    // 0x2c2918: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2C2914u, 0x2C291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C291Cu;
label_2c291c:
    // 0x2c291c: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_2c2920:
    if (ctx->pc == 0x2C2920u) {
        ctx->pc = 0x2C2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C291Cu;
        // 0x2c2920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2924u;
        goto label_2c2924;
    }
    ctx->pc = 0x2C291Cu;
    {
        const bool branch_taken_0x2c291c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C291Cu;
        // 0x2c2920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c291c) {
            ctx->pc = 0x2C2D04u;
            goto label_2c2d04;
        }
    }
    ctx->pc = 0x2C2924u;
label_2c2924:
    // 0x2c2924: 0x16220070  bne         $s1, $v0, . + 4 + (0x70 << 2)
label_2c2928:
    if (ctx->pc == 0x2C2928u) {
        ctx->pc = 0x2C2928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2924u;
        // 0x2c2928: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C292Cu;
        goto label_2c292c;
    }
    ctx->pc = 0x2C2924u;
    {
        const bool branch_taken_0x2c2924 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C2928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2924u;
        // 0x2c2928: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2924) {
            ctx->pc = 0x2C2AE8u;
            goto label_2c2ae8;
        }
    }
    ctx->pc = 0x2C292Cu;
label_2c292c:
    // 0x2c292c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2c292cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2c2930:
    // 0x2c2930: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x2c2930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_2c2934:
    // 0x2c2934: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2c2934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2c2938:
    // 0x2c2938: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2c2938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2c293c:
    // 0x2c293c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2c293cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2c2940:
    // 0x2c2940: 0x144000f0  bnez        $v0, . + 4 + (0xF0 << 2)
label_2c2944:
    if (ctx->pc == 0x2C2944u) {
        ctx->pc = 0x2C2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2940u;
        // 0x2c2944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2948u;
        goto label_2c2948;
    }
    ctx->pc = 0x2C2940u;
    {
        const bool branch_taken_0x2c2940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2940u;
        // 0x2c2944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2940) {
            ctx->pc = 0x2C2D04u;
            goto label_2c2d04;
        }
    }
    ctx->pc = 0x2C2948u;
label_2c2948:
    // 0x2c2948: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x2c2948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_2c294c:
    // 0x2c294c: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x2c294cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_2c2950:
    // 0x2c2950: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_2c2954:
    if (ctx->pc == 0x2C2954u) {
        ctx->pc = 0x2C2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2950u;
        // 0x2c2954: 0x27b6005c  addiu       $s6, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2958u;
        goto label_2c2958;
    }
    ctx->pc = 0x2C2950u;
    {
        const bool branch_taken_0x2c2950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2950u;
        // 0x2c2954: 0x27b6005c  addiu       $s6, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2950) {
            ctx->pc = 0x2C29F0u;
            goto label_2c29f0;
        }
    }
    ctx->pc = 0x2C2958u;
label_2c2958:
    // 0x2c2958: 0x8fc32c7c  lw          $v1, 0x2C7C($fp)
    ctx->pc = 0x2c2958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
label_2c295c:
    // 0x2c295c: 0x8c620840  lw          $v0, 0x840($v1)
    ctx->pc = 0x2c295cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
label_2c2960:
    // 0x2c2960: 0x94520018  lhu         $s2, 0x18($v0)
    ctx->pc = 0x2c2960u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_2c2964:
    // 0x2c2964: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
label_2c2968:
    if (ctx->pc == 0x2C2968u) {
        ctx->pc = 0x2C2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2964u;
        // 0x2c2968: 0x8c510014  lw          $s1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C296Cu;
        goto label_2c296c;
    }
    ctx->pc = 0x2C2964u;
    {
        const bool branch_taken_0x2c2964 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2964u;
        // 0x2c2968: 0x8c510014  lw          $s1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2964) {
            ctx->pc = 0x2C29E4u;
            goto label_2c29e4;
        }
    }
    ctx->pc = 0x2C296Cu;
label_2c296c:
    // 0x2c296c: 0x3c14003f  lui         $s4, 0x3F
    ctx->pc = 0x2c296cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63 << 16));
label_2c2970:
    // 0x2c2970: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x2c2970u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_2c2974:
    // 0x2c2974: 0x0  nop
    ctx->pc = 0x2c2974u;
    // NOP
label_2c2978:
    // 0x2c2978: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2c2978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2c297c:
    // 0x2c297c: 0x93a30050  lbu         $v1, 0x50($sp)
    ctx->pc = 0x2c297cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_2c2980:
    // 0x2c2980: 0x21582  srl         $v0, $v0, 22
    ctx->pc = 0x2c2980u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 22));
label_2c2984:
    // 0x2c2984: 0x54430015  bnel        $v0, $v1, . + 4 + (0x15 << 2)
label_2c2988:
    if (ctx->pc == 0x2C2988u) {
        ctx->pc = 0x2C2988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2984u;
        // 0x2c2988: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C298Cu;
        goto label_2c298c;
    }
    ctx->pc = 0x2C2984u;
    {
        const bool branch_taken_0x2c2984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c2984) {
            ctx->pc = 0x2C2988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2984u;
            // 0x2c2988: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C29DCu;
            goto label_2c29dc;
        }
    }
    ctx->pc = 0x2C298Cu;
label_2c298c:
    // 0x2c298c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2c298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2c2990:
    // 0x2c2990: 0x21442  srl         $v0, $v0, 17
    ctx->pc = 0x2c2990u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 17));
label_2c2994:
    // 0x2c2994: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c2994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c2998:
    // 0x2c2998: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_2c299c:
    if (ctx->pc == 0x2C299Cu) {
        ctx->pc = 0x2C299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2998u;
        // 0x2c299c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C29A0u;
        goto label_2c29a0;
    }
    ctx->pc = 0x2C2998u;
    {
        const bool branch_taken_0x2c2998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2998) {
            ctx->pc = 0x2C299Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2998u;
            // 0x2c299c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C29DCu;
            goto label_2c29dc;
        }
    }
    ctx->pc = 0x2C29A0u;
label_2c29a0:
    // 0x2c29a0: 0xc0e404c  jal         func_390130
label_2c29a4:
    if (ctx->pc == 0x2C29A4u) {
        ctx->pc = 0x2C29A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29A0u;
        // 0x2c29a4: 0x86240024  lh          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C29A8u;
        goto label_2c29a8;
    }
    ctx->pc = 0x2C29A0u;
    SET_GPR_U32(ctx, 31, 0x2C29A8u);
    ctx->pc = 0x2C29A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C29A0u;
    // 0x2c29a4: 0x86240024  lh          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2C29A0u, 0x2C29A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C29A8u;
label_2c29a8:
    // 0x2c29a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c29a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c29ac:
    // 0x2c29ac: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x2c29acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_2c29b0:
    // 0x2c29b0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2c29b4:
    if (ctx->pc == 0x2C29B4u) {
        ctx->pc = 0x2C29B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29B0u;
        // 0x2c29b4: 0xa6000114  sh          $zero, 0x114($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 276), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C29B8u;
        goto label_2c29b8;
    }
    ctx->pc = 0x2C29B0u;
    {
        const bool branch_taken_0x2c29b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c29b0) {
            ctx->pc = 0x2C29B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C29B0u;
            // 0x2c29b4: 0xa6000114  sh          $zero, 0x114($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 276), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C29CCu;
            goto label_2c29cc;
        }
    }
    ctx->pc = 0x2C29B8u;
label_2c29b8:
    // 0x2c29b8: 0xc0e5476  jal         func_3951D8
label_2c29bc:
    if (ctx->pc == 0x2C29BCu) {
        ctx->pc = 0x2C29BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29B8u;
        // 0x2c29bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C29C0u;
        goto label_2c29c0;
    }
    ctx->pc = 0x2C29B8u;
    SET_GPR_U32(ctx, 31, 0x2C29C0u);
    ctx->pc = 0x2C29BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C29B8u;
    // 0x2c29bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3951D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951D8u, 0x2C29B8u, 0x2C29C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C29C0u;
label_2c29c0:
    // 0x2c29c0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2c29c4:
    if (ctx->pc == 0x2C29C4u) {
        ctx->pc = 0x2C29C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29C0u;
        // 0x2c29c4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C29C8u;
        goto label_2c29c8;
    }
    ctx->pc = 0x2C29C0u;
    {
        const bool branch_taken_0x2c29c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c29c0) {
            ctx->pc = 0x2C29C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C29C0u;
            // 0x2c29c4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C29DCu;
            goto label_2c29dc;
        }
    }
    ctx->pc = 0x2C29C8u;
label_2c29c8:
    // 0x2c29c8: 0xa6000114  sh          $zero, 0x114($s0)
    ctx->pc = 0x2c29c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 276), (uint16_t)GPR_U32(ctx, 0));
label_2c29cc:
    // 0x2c29cc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2c29ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2c29d0:
    // 0x2c29d0: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2c29d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_2c29d4:
    // 0x2c29d4: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2c29d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2c29d8:
    // 0x2c29d8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2c29d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2c29dc:
    // 0x2c29dc: 0x1640ffe6  bnez        $s2, . + 4 + (-0x1A << 2)
label_2c29e0:
    if (ctx->pc == 0x2C29E0u) {
        ctx->pc = 0x2C29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29DCu;
        // 0x2c29e0: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C29E4u;
        goto label_2c29e4;
    }
    ctx->pc = 0x2C29DCu;
    {
        const bool branch_taken_0x2c29dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29DCu;
        // 0x2c29e0: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c29dc) {
            ctx->pc = 0x2C2978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2978;
        }
    }
    ctx->pc = 0x2C29E4u;
label_2c29e4:
    // 0x2c29e4: 0x93a40050  lbu         $a0, 0x50($sp)
    ctx->pc = 0x2c29e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_2c29e8:
    // 0x2c29e8: 0xc0e59de  jal         func_396778
label_2c29ec:
    if (ctx->pc == 0x2C29ECu) {
        ctx->pc = 0x2C29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29E8u;
        // 0x2c29ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C29F0u;
        goto label_2c29f0;
    }
    ctx->pc = 0x2C29E8u;
    SET_GPR_U32(ctx, 31, 0x2C29F0u);
    ctx->pc = 0x2C29ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C29E8u;
    // 0x2c29ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396778u, 0x2C29E8u, 0x2C29F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C29F0u;
label_2c29f0:
    // 0x2c29f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2c29f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2c29f4:
    // 0x2c29f4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2c29f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_2c29f8:
    // 0x2c29f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c29f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c29fc:
    // 0x2c29fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c29fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2c2a00:
    // 0x2c2a00: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2c2a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2c2a04:
    // 0x2c2a04: 0xaee200d8  sw          $v0, 0xD8($s7)
    ctx->pc = 0x2c2a04u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 216), GPR_U32(ctx, 2));
label_2c2a08:
    // 0x2c2a08: 0xc0e8b36  jal         func_3A2CD8
label_2c2a0c:
    if (ctx->pc == 0x2C2A0Cu) {
        ctx->pc = 0x2C2A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A08u;
        // 0x2c2a0c: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2A10u;
        goto label_2c2a10;
    }
    ctx->pc = 0x2C2A08u;
    SET_GPR_U32(ctx, 31, 0x2C2A10u);
    ctx->pc = 0x2C2A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A08u;
    // 0x2c2a0c: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2CD8u, 0x2C2A08u, 0x2C2A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A10u;
label_2c2a10:
    // 0x2c2a10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2a14:
    // 0x2c2a14: 0xc10587a  jal         func_4161E8
label_2c2a18:
    if (ctx->pc == 0x2C2A18u) {
        ctx->pc = 0x2C2A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A14u;
        // 0x2c2a18: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2A1Cu;
        goto label_2c2a1c;
    }
    ctx->pc = 0x2C2A14u;
    SET_GPR_U32(ctx, 31, 0x2C2A1Cu);
    ctx->pc = 0x2C2A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A14u;
    // 0x2c2a18: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C2A14u, 0x2C2A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A1Cu;
label_2c2a1c:
    // 0x2c2a1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c2a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2a20:
    // 0x2c2a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2a24:
    // 0x2c2a24: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2c2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2c2a28:
    // 0x2c2a28: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2c2a28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c2a2c:
    // 0x2c2a2c: 0xc0e71f6  jal         func_39C7D8
label_2c2a30:
    if (ctx->pc == 0x2C2A30u) {
        ctx->pc = 0x2C2A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A2Cu;
        // 0x2c2a30: 0x24465110  addiu       $a2, $v0, 0x5110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2A34u;
        goto label_2c2a34;
    }
    ctx->pc = 0x2C2A2Cu;
    SET_GPR_U32(ctx, 31, 0x2C2A34u);
    ctx->pc = 0x2C2A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A2Cu;
    // 0x2c2a30: 0x24465110  addiu       $a2, $v0, 0x5110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C7D8u, 0x2C2A2Cu, 0x2C2A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A34u;
label_2c2a34:
    // 0x2c2a34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2a38:
    // 0x2c2a38: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2c2a3c:
    if (ctx->pc == 0x2C2A3Cu) {
        ctx->pc = 0x2C2A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A38u;
        // 0x2c2a3c: 0xc7a1005c  lwc1        $f1, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2A40u;
        goto label_2c2a40;
    }
    ctx->pc = 0x2C2A38u;
    {
        const bool branch_taken_0x2c2a38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A38u;
        // 0x2c2a3c: 0xc7a1005c  lwc1        $f1, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a38) {
            ctx->pc = 0x2C2A7Cu;
            goto label_2c2a7c;
        }
    }
    ctx->pc = 0x2C2A40u;
label_2c2a40:
    // 0x2c2a40: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x2c2a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
label_2c2a44:
    // 0x2c2a44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c2a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c2a48:
    // 0x2c2a48: 0x0  nop
    ctx->pc = 0x2c2a48u;
    // NOP
label_2c2a4c:
    // 0x2c2a4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c2a4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c2a50:
    // 0x2c2a50: 0x0  nop
    ctx->pc = 0x2c2a50u;
    // NOP
label_2c2a54:
    // 0x2c2a54: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2c2a58:
    if (ctx->pc == 0x2C2A58u) {
        ctx->pc = 0x2C2A5Cu;
        goto label_2c2a5c;
    }
    ctx->pc = 0x2C2A54u;
    {
        const bool branch_taken_0x2c2a54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2a54) {
            ctx->pc = 0x2C2A7Cu;
            goto label_2c2a7c;
        }
    }
    ctx->pc = 0x2C2A5Cu;
label_2c2a5c:
    // 0x2c2a5c: 0xc0e8b48  jal         func_3A2D20
label_2c2a60:
    if (ctx->pc == 0x2C2A60u) {
        ctx->pc = 0x2C2A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A5Cu;
        // 0x2c2a60: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2A64u;
        goto label_2c2a64;
    }
    ctx->pc = 0x2C2A5Cu;
    SET_GPR_U32(ctx, 31, 0x2C2A64u);
    ctx->pc = 0x2C2A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A5Cu;
    // 0x2c2a60: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2C2A5Cu, 0x2C2A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A64u;
label_2c2a64:
    // 0x2c2a64: 0x8fc42c7c  lw          $a0, 0x2C7C($fp)
    ctx->pc = 0x2c2a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
label_2c2a68:
    // 0x2c2a68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c2a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2a6c:
    // 0x2c2a6c: 0xc0e8b80  jal         func_3A2E00
label_2c2a70:
    if (ctx->pc == 0x2C2A70u) {
        ctx->pc = 0x2C2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A6Cu;
        // 0x2c2a70: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2A74u;
        goto label_2c2a74;
    }
    ctx->pc = 0x2C2A6Cu;
    SET_GPR_U32(ctx, 31, 0x2C2A74u);
    ctx->pc = 0x2C2A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A6Cu;
    // 0x2c2a70: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x2C2A6Cu, 0x2C2A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A74u;
label_2c2a74:
    // 0x2c2a74: 0xc0e8b50  jal         func_3A2D40
label_2c2a78:
    if (ctx->pc == 0x2C2A78u) {
        ctx->pc = 0x2C2A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A74u;
        // 0x2c2a78: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2A7Cu;
        goto label_2c2a7c;
    }
    ctx->pc = 0x2C2A74u;
    SET_GPR_U32(ctx, 31, 0x2C2A7Cu);
    ctx->pc = 0x2C2A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A74u;
    // 0x2c2a78: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2C2A74u, 0x2C2A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A7Cu;
label_2c2a7c:
    // 0x2c2a7c: 0xc0a367c  jal         func_28D9F0
label_2c2a80:
    if (ctx->pc == 0x2C2A80u) {
        ctx->pc = 0x2C2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A7Cu;
        // 0x2c2a80: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2A84u;
        goto label_2c2a84;
    }
    ctx->pc = 0x2C2A7Cu;
    SET_GPR_U32(ctx, 31, 0x2C2A84u);
    ctx->pc = 0x2C2A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A7Cu;
    // 0x2c2a80: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C2A7Cu, 0x2C2A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A84u;
label_2c2a84:
    // 0x2c2a84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2c2a88:
    if (ctx->pc == 0x2C2A88u) {
        ctx->pc = 0x2C2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A84u;
        // 0x2c2a88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2A8Cu;
        goto label_2c2a8c;
    }
    ctx->pc = 0x2C2A84u;
    {
        const bool branch_taken_0x2c2a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A84u;
        // 0x2c2a88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a84) {
            ctx->pc = 0x2C2AACu;
            goto label_2c2aac;
        }
    }
    ctx->pc = 0x2C2A8Cu;
label_2c2a8c:
    // 0x2c2a8c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2c2a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c2a90:
    // 0x2c2a90: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2c2a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2c2a94:
    // 0x2c2a94: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c2a94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c2a98:
    // 0x2c2a98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c2a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c2a9c:
    // 0x2c2a9c: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2c2a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2c2aa0:
    // 0x2c2aa0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2c2aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c2aa4:
    // 0x2c2aa4: 0xc0be8c0  jal         func_2FA300
label_2c2aa8:
    if (ctx->pc == 0x2C2AA8u) {
        ctx->pc = 0x2C2AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AA4u;
        // 0x2c2aa8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2AACu;
        goto label_2c2aac;
    }
    ctx->pc = 0x2C2AA4u;
    SET_GPR_U32(ctx, 31, 0x2C2AACu);
    ctx->pc = 0x2C2AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2AA4u;
    // 0x2c2aa8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2C2AA4u, 0x2C2AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2AACu;
label_2c2aac:
    // 0x2c2aac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c2aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c2ab0:
    // 0x2c2ab0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c2ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c2ab4:
    // 0x2c2ab4: 0xc08ce24  jal         func_233890
label_2c2ab8:
    if (ctx->pc == 0x2C2AB8u) {
        ctx->pc = 0x2C2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AB4u;
        // 0x2c2ab8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2ABCu;
        goto label_2c2abc;
    }
    ctx->pc = 0x2C2AB4u;
    SET_GPR_U32(ctx, 31, 0x2C2ABCu);
    ctx->pc = 0x2C2AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2AB4u;
    // 0x2c2ab8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233890u, 0x2C2AB4u, 0x2C2ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2ABCu;
label_2c2abc:
    // 0x2c2abc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2c2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2c2ac0:
    // 0x2c2ac0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c2ac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c2ac4:
    // 0x2c2ac4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c2ac8:
    // 0x2c2ac8: 0x40f809  jalr        $v0
label_2c2acc:
    if (ctx->pc == 0x2C2ACCu) {
        ctx->pc = 0x2C2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AC8u;
        // 0x2c2acc: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2AD0u;
        goto label_2c2ad0;
    }
    ctx->pc = 0x2C2AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C2AD0u);
        ctx->pc = 0x2C2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AC8u;
        // 0x2c2acc: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2AC8u, 0x2C2AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C2AD0u;
label_2c2ad0:
    // 0x2c2ad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2ad4:
    // 0x2c2ad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c2ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2ad8:
    // 0x2c2ad8: 0xc08e1a4  jal         func_238690
label_2c2adc:
    if (ctx->pc == 0x2C2ADCu) {
        ctx->pc = 0x2C2ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AD8u;
        // 0x2c2adc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2AE0u;
        goto label_2c2ae0;
    }
    ctx->pc = 0x2C2AD8u;
    SET_GPR_U32(ctx, 31, 0x2C2AE0u);
    ctx->pc = 0x2C2ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2AD8u;
    // 0x2c2adc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2C2AD8u, 0x2C2AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2AE0u;
label_2c2ae0:
    // 0x2c2ae0: 0x10000036  b           . + 4 + (0x36 << 2)
label_2c2ae4:
    if (ctx->pc == 0x2C2AE4u) {
        ctx->pc = 0x2C2AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AE0u;
        // 0x2c2ae4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2AE8u;
        goto label_2c2ae8;
    }
    ctx->pc = 0x2C2AE0u;
    {
        const bool branch_taken_0x2c2ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AE0u;
        // 0x2c2ae4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ae0) {
            ctx->pc = 0x2C2BBCu;
            goto label_2c2bbc;
        }
    }
    ctx->pc = 0x2C2AE8u;
label_2c2ae8:
    // 0x2c2ae8: 0x16220037  bne         $s1, $v0, . + 4 + (0x37 << 2)
label_2c2aec:
    if (ctx->pc == 0x2C2AECu) {
        ctx->pc = 0x2C2AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AE8u;
        // 0x2c2aec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2AF0u;
        goto label_2c2af0;
    }
    ctx->pc = 0x2C2AE8u;
    {
        const bool branch_taken_0x2c2ae8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C2AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AE8u;
        // 0x2c2aec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ae8) {
            ctx->pc = 0x2C2BC8u;
            goto label_2c2bc8;
        }
    }
    ctx->pc = 0x2C2AF0u;
label_2c2af0:
    // 0x2c2af0: 0x86a20092  lh          $v0, 0x92($s5)
    ctx->pc = 0x2c2af0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2c2af4:
    // 0x2c2af4: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2c2af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2c2af8:
    // 0x2c2af8: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2c2af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2c2afc:
    // 0x2c2afc: 0x26700020  addiu       $s0, $s3, 0x20
    ctx->pc = 0x2c2afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2c2b00:
    // 0x2c2b00: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c2b04:
    // 0x2c2b04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c2b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2b08:
    // 0x2c2b08: 0xc0cdb38  jal         func_336CE0
label_2c2b0c:
    if (ctx->pc == 0x2C2B0Cu) {
        ctx->pc = 0x2C2B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B08u;
        // 0x2c2b0c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2B10u;
        goto label_2c2b10;
    }
    ctx->pc = 0x2C2B08u;
    SET_GPR_U32(ctx, 31, 0x2C2B10u);
    ctx->pc = 0x2C2B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2B08u;
    // 0x2c2b0c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C2B08u, 0x2C2B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B10u;
label_2c2b10:
    // 0x2c2b10: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x2c2b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_2c2b14:
    // 0x2c2b14: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2c2b14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_2c2b18:
    // 0x2c2b18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c2b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c2b1c:
    // 0x2c2b1c: 0x0  nop
    ctx->pc = 0x2c2b1cu;
    // NOP
label_2c2b20:
    // 0x2c2b20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c2b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c2b24:
    // 0x2c2b24: 0x0  nop
    ctx->pc = 0x2c2b24u;
    // NOP
label_2c2b28:
    // 0x2c2b28: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_2c2b2c:
    if (ctx->pc == 0x2C2B2Cu) {
        ctx->pc = 0x2C2B30u;
        goto label_2c2b30;
    }
    ctx->pc = 0x2C2B28u;
    {
        const bool branch_taken_0x2c2b28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2b28) {
            ctx->pc = 0x2C2B78u;
            goto label_2c2b78;
        }
    }
    ctx->pc = 0x2C2B30u;
label_2c2b30:
    // 0x2c2b30: 0xc0a367c  jal         func_28D9F0
label_2c2b34:
    if (ctx->pc == 0x2C2B34u) {
        ctx->pc = 0x2C2B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B30u;
        // 0x2c2b34: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2B38u;
        goto label_2c2b38;
    }
    ctx->pc = 0x2C2B30u;
    SET_GPR_U32(ctx, 31, 0x2C2B38u);
    ctx->pc = 0x2C2B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2B30u;
    // 0x2c2b34: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C2B30u, 0x2C2B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B38u;
label_2c2b38:
    // 0x2c2b38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2b3c:
    // 0x2c2b3c: 0x10800070  beqz        $a0, . + 4 + (0x70 << 2)
label_2c2b40:
    if (ctx->pc == 0x2C2B40u) {
        ctx->pc = 0x2C2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B3Cu;
        // 0x2c2b40: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2B44u;
        goto label_2c2b44;
    }
    ctx->pc = 0x2C2B3Cu;
    {
        const bool branch_taken_0x2c2b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B3Cu;
        // 0x2c2b40: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b3c) {
            ctx->pc = 0x2C2D00u;
            goto label_2c2d00;
        }
    }
    ctx->pc = 0x2C2B44u;
label_2c2b44:
    // 0x2c2b44: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2c2b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c2b48:
    // 0x2c2b48: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2c2b48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c2b4c:
    // 0x2c2b4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c2b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2b50:
    // 0x2c2b50: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2c2b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2c2b54:
    // 0x2c2b54: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2c2b54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2c2b58:
    // 0x2c2b58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c2b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c2b5c:
    // 0x2c2b5c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c2b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c2b60:
    // 0x2c2b60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c2b60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2b64:
    // 0x2c2b64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c2b64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2b68:
    // 0x2c2b68: 0xc0bee7a  jal         func_2FB9E8
label_2c2b6c:
    if (ctx->pc == 0x2C2B6Cu) {
        ctx->pc = 0x2C2B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B68u;
        // 0x2c2b6c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2B70u;
        goto label_2c2b70;
    }
    ctx->pc = 0x2C2B68u;
    SET_GPR_U32(ctx, 31, 0x2C2B70u);
    ctx->pc = 0x2C2B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2B68u;
    // 0x2c2b6c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C2B68u, 0x2C2B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B70u;
label_2c2b70:
    // 0x2c2b70: 0x10000064  b           . + 4 + (0x64 << 2)
label_2c2b74:
    if (ctx->pc == 0x2C2B74u) {
        ctx->pc = 0x2C2B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B70u;
        // 0x2c2b74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2B78u;
        goto label_2c2b78;
    }
    ctx->pc = 0x2C2B70u;
    {
        const bool branch_taken_0x2c2b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B70u;
        // 0x2c2b74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b70) {
            ctx->pc = 0x2C2D04u;
            goto label_2c2d04;
        }
    }
    ctx->pc = 0x2C2B78u;
label_2c2b78:
    // 0x2c2b78: 0xc0a367c  jal         func_28D9F0
label_2c2b7c:
    if (ctx->pc == 0x2C2B7Cu) {
        ctx->pc = 0x2C2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B78u;
        // 0x2c2b7c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2B80u;
        goto label_2c2b80;
    }
    ctx->pc = 0x2C2B78u;
    SET_GPR_U32(ctx, 31, 0x2C2B80u);
    ctx->pc = 0x2C2B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2B78u;
    // 0x2c2b7c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C2B78u, 0x2C2B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B80u;
label_2c2b80:
    // 0x2c2b80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c2b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2b84:
    // 0x2c2b84: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2c2b88:
    if (ctx->pc == 0x2C2B88u) {
        ctx->pc = 0x2C2B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B84u;
        // 0x2c2b88: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2B8Cu;
        goto label_2c2b8c;
    }
    ctx->pc = 0x2C2B84u;
    {
        const bool branch_taken_0x2c2b84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B84u;
        // 0x2c2b88: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b84) {
            ctx->pc = 0x2C2BBCu;
            goto label_2c2bbc;
        }
    }
    ctx->pc = 0x2C2B8Cu;
label_2c2b8c:
    // 0x2c2b8c: 0xc10587a  jal         func_4161E8
label_2c2b90:
    if (ctx->pc == 0x2C2B90u) {
        ctx->pc = 0x2C2B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B8Cu;
        // 0x2c2b90: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2B94u;
        goto label_2c2b94;
    }
    ctx->pc = 0x2C2B8Cu;
    SET_GPR_U32(ctx, 31, 0x2C2B94u);
    ctx->pc = 0x2C2B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2B8Cu;
    // 0x2c2b90: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C2B8Cu, 0x2C2B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B94u;
label_2c2b94:
    // 0x2c2b94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2b98:
    // 0x2c2b98: 0xc0884f6  jal         func_2213D8
label_2c2b9c:
    if (ctx->pc == 0x2C2B9Cu) {
        ctx->pc = 0x2C2B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B98u;
        // 0x2c2b9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2BA0u;
        goto label_2c2ba0;
    }
    ctx->pc = 0x2C2B98u;
    SET_GPR_U32(ctx, 31, 0x2C2BA0u);
    ctx->pc = 0x2C2B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2B98u;
    // 0x2c2b9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2C2B98u, 0x2C2BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2BA0u;
label_2c2ba0:
    // 0x2c2ba0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2c2ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c2ba4:
    // 0x2c2ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c2ba8:
    // 0x2c2ba8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c2ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2bac:
    // 0x2c2bac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c2bacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2c2bb0:
    // 0x2c2bb0: 0xc0bf800  jal         func_2FE000
label_2c2bb4:
    if (ctx->pc == 0x2C2BB4u) {
        ctx->pc = 0x2C2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BB0u;
        // 0x2c2bb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2BB8u;
        goto label_2c2bb8;
    }
    ctx->pc = 0x2C2BB0u;
    SET_GPR_U32(ctx, 31, 0x2C2BB8u);
    ctx->pc = 0x2C2BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2BB0u;
    // 0x2c2bb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2C2BB0u, 0x2C2BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2BB8u;
label_2c2bb8:
    // 0x2c2bb8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2c2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c2bbc:
    // 0x2c2bbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2bc0:
    // 0x2c2bc0: 0x10000050  b           . + 4 + (0x50 << 2)
label_2c2bc4:
    if (ctx->pc == 0x2C2BC4u) {
        ctx->pc = 0x2C2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BC0u;
        // 0x2c2bc4: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2BC8u;
        goto label_2c2bc8;
    }
    ctx->pc = 0x2C2BC0u;
    {
        const bool branch_taken_0x2c2bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BC0u;
        // 0x2c2bc4: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2bc0) {
            ctx->pc = 0x2C2D04u;
            goto label_2c2d04;
        }
    }
    ctx->pc = 0x2C2BC8u;
label_2c2bc8:
    // 0x2c2bc8: 0x1622004e  bne         $s1, $v0, . + 4 + (0x4E << 2)
label_2c2bcc:
    if (ctx->pc == 0x2C2BCCu) {
        ctx->pc = 0x2C2BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BC8u;
        // 0x2c2bcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2BD0u;
        goto label_2c2bd0;
    }
    ctx->pc = 0x2C2BC8u;
    {
        const bool branch_taken_0x2c2bc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C2BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BC8u;
        // 0x2c2bcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2bc8) {
            ctx->pc = 0x2C2D04u;
            goto label_2c2d04;
        }
    }
    ctx->pc = 0x2C2BD0u;
label_2c2bd0:
    // 0x2c2bd0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2c2bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2c2bd4:
    // 0x2c2bd4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c2bd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c2bd8:
    // 0x2c2bd8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c2bdc:
    // 0x2c2bdc: 0x40f809  jalr        $v0
label_2c2be0:
    if (ctx->pc == 0x2C2BE0u) {
        ctx->pc = 0x2C2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BDCu;
        // 0x2c2be0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2BE4u;
        goto label_2c2be4;
    }
    ctx->pc = 0x2C2BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C2BE4u);
        ctx->pc = 0x2C2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BDCu;
        // 0x2c2be0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2BDCu, 0x2C2BE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C2BE4u;
label_2c2be4:
    // 0x2c2be4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2be8:
    // 0x2c2be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c2be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2bec:
    // 0x2c2bec: 0xc08e1a4  jal         func_238690
label_2c2bf0:
    if (ctx->pc == 0x2C2BF0u) {
        ctx->pc = 0x2C2BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BECu;
        // 0x2c2bf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2BF4u;
        goto label_2c2bf4;
    }
    ctx->pc = 0x2C2BECu;
    SET_GPR_U32(ctx, 31, 0x2C2BF4u);
    ctx->pc = 0x2C2BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2BECu;
    // 0x2c2bf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2C2BECu, 0x2C2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2BF4u;
label_2c2bf4:
    // 0x2c2bf4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2c2bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2c2bf8:
    // 0x2c2bf8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2c2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_2c2bfc:
    // 0x2c2bfc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c2bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2c2c00:
    // 0x2c2c00: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
label_2c2c04:
    if (ctx->pc == 0x2C2C04u) {
        ctx->pc = 0x2C2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C00u;
        // 0x2c2c04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2C08u;
        goto label_2c2c08;
    }
    ctx->pc = 0x2C2C00u;
    {
        const bool branch_taken_0x2c2c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C00u;
        // 0x2c2c04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c00) {
            ctx->pc = 0x2C2D04u;
            goto label_2c2d04;
        }
    }
    ctx->pc = 0x2C2C08u;
label_2c2c08:
    // 0x2c2c08: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2c2c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2c2c0c:
    // 0x2c2c0c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c2c0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c2c10:
    // 0x2c2c10: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c2c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c2c14:
    // 0x2c2c14: 0x40f809  jalr        $v0
label_2c2c18:
    if (ctx->pc == 0x2C2C18u) {
        ctx->pc = 0x2C2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C14u;
        // 0x2c2c18: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2C1Cu;
        goto label_2c2c1c;
    }
    ctx->pc = 0x2C2C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C2C1Cu);
        ctx->pc = 0x2C2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C14u;
        // 0x2c2c18: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2C14u, 0x2C2C1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C2C1Cu;
label_2c2c1c:
    // 0x2c2c1c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2c2c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_2c2c20:
    // 0x2c2c20: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2c2c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2c2c24:
    // 0x2c2c24: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x2c2c24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_2c2c28:
    // 0x2c2c28: 0x87a20062  lh          $v0, 0x62($sp)
    ctx->pc = 0x2c2c28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 98)));
label_2c2c2c:
    // 0x2c2c2c: 0x1482fe13  bne         $a0, $v0, . + 4 + (-0x1ED << 2)
label_2c2c30:
    if (ctx->pc == 0x2C2C30u) {
        ctx->pc = 0x2C2C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C2Cu;
        // 0x2c2c30: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2C34u;
        goto label_2c2c34;
    }
    ctx->pc = 0x2C2C2Cu;
    {
        const bool branch_taken_0x2c2c2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C2C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C2Cu;
        // 0x2c2c30: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c2c) {
            ctx->pc = 0x2C247Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c247c;
        }
    }
    ctx->pc = 0x2C2C34u;
label_2c2c34:
    // 0x2c2c34: 0xc10587a  jal         func_4161E8
label_2c2c38:
    if (ctx->pc == 0x2C2C38u) {
        ctx->pc = 0x2C2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C34u;
        // 0x2c2c38: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2C3Cu;
        goto label_2c2c3c;
    }
    ctx->pc = 0x2C2C34u;
    SET_GPR_U32(ctx, 31, 0x2C2C3Cu);
    ctx->pc = 0x2C2C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2C34u;
    // 0x2c2c38: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C2C34u, 0x2C2C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2C3Cu;
label_2c2c3c:
    // 0x2c2c3c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2c2c3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2c2c40:
    // 0x2c2c40: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2c2c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_2c2c44:
    // 0x2c2c44: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2c2c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c2c48:
    // 0x2c2c48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c2c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c2c4c:
    // 0x2c2c4c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2c2c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2c2c50:
    // 0x2c2c50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2c54:
    // 0x2c2c54: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c2c58:
    // 0x2c2c58: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2c2c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2c2c5c:
    // 0x2c2c5c: 0x0  nop
    ctx->pc = 0x2c2c5cu;
    // NOP
label_2c2c60:
    // 0x2c2c60: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2c2c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2c2c64:
    // 0x2c2c64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c2c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2c2c68:
    // 0x2c2c68: 0x0  nop
    ctx->pc = 0x2c2c68u;
    // NOP
label_2c2c6c:
    // 0x2c2c6c: 0x0  nop
    ctx->pc = 0x2c2c6cu;
    // NOP
label_2c2c70:
    // 0x2c2c70: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
label_2c2c74:
    if (ctx->pc == 0x2C2C74u) {
        ctx->pc = 0x2C2C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C70u;
        // 0x2c2c74: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2C78u;
        goto label_2c2c78;
    }
    ctx->pc = 0x2C2C70u;
    {
        const bool branch_taken_0x2c2c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C2C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C70u;
        // 0x2c2c74: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c70) {
            ctx->pc = 0x2C2C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2c60;
        }
    }
    ctx->pc = 0x2C2C78u;
label_2c2c78:
    // 0x2c2c78: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x2c2c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_2c2c7c:
    // 0x2c2c7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c2c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c2c80:
    // 0x2c2c80: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x2c2c80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_2c2c84:
    // 0x2c2c84: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c2c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c2c88:
    // 0x2c2c88: 0x24e7c4f8  addiu       $a3, $a3, -0x3B08
    ctx->pc = 0x2c2c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952184));
label_2c2c8c:
    // 0x2c2c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2c90:
    // 0x2c2c90: 0xc0a71b4  jal         func_29C6D0
label_2c2c94:
    if (ctx->pc == 0x2C2C94u) {
        ctx->pc = 0x2C2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C90u;
        // 0x2c2c94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2C98u;
        goto label_2c2c98;
    }
    ctx->pc = 0x2C2C90u;
    SET_GPR_U32(ctx, 31, 0x2C2C98u);
    ctx->pc = 0x2C2C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2C90u;
    // 0x2c2c94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C6D0u, 0x2C2C90u, 0x2C2C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2C98u;
label_2c2c98:
    // 0x2c2c98: 0xc137832  jal         func_4DE0C8
label_2c2c9c:
    if (ctx->pc == 0x2C2C9Cu) {
        ctx->pc = 0x2C2C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C98u;
        // 0x2c2c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2CA0u;
        goto label_2c2ca0;
    }
    ctx->pc = 0x2C2C98u;
    SET_GPR_U32(ctx, 31, 0x2C2CA0u);
    ctx->pc = 0x2C2C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2C98u;
    // 0x2c2c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2C2C98u, 0x2C2CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CA0u;
label_2c2ca0:
    // 0x2c2ca0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c2ca4:
    // 0x2c2ca4: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_2c2ca8:
    if (ctx->pc == 0x2C2CA8u) {
        ctx->pc = 0x2C2CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CA4u;
        // 0x2c2ca8: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2CACu;
        goto label_2c2cac;
    }
    ctx->pc = 0x2C2CA4u;
    {
        const bool branch_taken_0x2c2ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C2CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CA4u;
        // 0x2c2ca8: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ca4) {
            ctx->pc = 0x2C2CF0u;
            goto label_2c2cf0;
        }
    }
    ctx->pc = 0x2C2CACu;
label_2c2cac:
    // 0x2c2cac: 0xc0e4060  jal         func_390180
label_2c2cb0:
    if (ctx->pc == 0x2C2CB0u) {
        ctx->pc = 0x2C2CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CACu;
        // 0x2c2cb0: 0x26640034  addiu       $a0, $s3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2CB4u;
        goto label_2c2cb4;
    }
    ctx->pc = 0x2C2CACu;
    SET_GPR_U32(ctx, 31, 0x2C2CB4u);
    ctx->pc = 0x2C2CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2CACu;
    // 0x2c2cb0: 0x26640034  addiu       $a0, $s3, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2C2CACu, 0x2C2CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CB4u;
label_2c2cb4:
    // 0x2c2cb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c2cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2cb8:
    // 0x2c2cb8: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2c2cbc:
    if (ctx->pc == 0x2C2CBCu) {
        ctx->pc = 0x2C2CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CB8u;
        // 0x2c2cbc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2CC0u;
        goto label_2c2cc0;
    }
    ctx->pc = 0x2C2CB8u;
    {
        const bool branch_taken_0x2c2cb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CB8u;
        // 0x2c2cbc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2cb8) {
            ctx->pc = 0x2C2CECu;
            goto label_2c2cec;
        }
    }
    ctx->pc = 0x2C2CC0u;
label_2c2cc0:
    // 0x2c2cc0: 0xc0e8b48  jal         func_3A2D20
label_2c2cc4:
    if (ctx->pc == 0x2C2CC4u) {
        ctx->pc = 0x2C2CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CC0u;
        // 0x2c2cc4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2CC8u;
        goto label_2c2cc8;
    }
    ctx->pc = 0x2C2CC0u;
    SET_GPR_U32(ctx, 31, 0x2C2CC8u);
    ctx->pc = 0x2C2CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2CC0u;
    // 0x2c2cc4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2C2CC0u, 0x2C2CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CC8u;
label_2c2cc8:
    // 0x2c2cc8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2c2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2c2ccc:
    // 0x2c2ccc: 0xc0e8b68  jal         func_3A2DA0
label_2c2cd0:
    if (ctx->pc == 0x2C2CD0u) {
        ctx->pc = 0x2C2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CCCu;
        // 0x2c2cd0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2CD4u;
        goto label_2c2cd4;
    }
    ctx->pc = 0x2C2CCCu;
    SET_GPR_U32(ctx, 31, 0x2C2CD4u);
    ctx->pc = 0x2C2CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2CCCu;
    // 0x2c2cd0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2C2CCCu, 0x2C2CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CD4u;
label_2c2cd4:
    // 0x2c2cd4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2c2cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2c2cd8:
    // 0x2c2cd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c2cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c2cdc:
    // 0x2c2cdc: 0xc0e8b80  jal         func_3A2E00
label_2c2ce0:
    if (ctx->pc == 0x2C2CE0u) {
        ctx->pc = 0x2C2CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CDCu;
        // 0x2c2ce0: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2CE4u;
        goto label_2c2ce4;
    }
    ctx->pc = 0x2C2CDCu;
    SET_GPR_U32(ctx, 31, 0x2C2CE4u);
    ctx->pc = 0x2C2CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2CDCu;
    // 0x2c2ce0: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x2C2CDCu, 0x2C2CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CE4u;
label_2c2ce4:
    // 0x2c2ce4: 0xc0e8b50  jal         func_3A2D40
label_2c2ce8:
    if (ctx->pc == 0x2C2CE8u) {
        ctx->pc = 0x2C2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CE4u;
        // 0x2c2ce8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2CECu;
        goto label_2c2cec;
    }
    ctx->pc = 0x2C2CE4u;
    SET_GPR_U32(ctx, 31, 0x2C2CECu);
    ctx->pc = 0x2C2CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2CE4u;
    // 0x2c2ce8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2C2CE4u, 0x2C2CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CECu;
label_2c2cec:
    // 0x2c2cec: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2c2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2c2cf0:
    // 0x2c2cf0: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x2c2cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_2c2cf4:
    // 0x2c2cf4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2c2cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2c2cf8:
    // 0x2c2cf8: 0x1000fde0  b           . + 4 + (-0x220 << 2)
label_2c2cfc:
    if (ctx->pc == 0x2C2CFCu) {
        ctx->pc = 0x2C2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CF8u;
        // 0x2c2cfc: 0xaee300d8  sw          $v1, 0xD8($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2D00u;
        goto label_2c2d00;
    }
    ctx->pc = 0x2C2CF8u;
    {
        const bool branch_taken_0x2c2cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CF8u;
        // 0x2c2cfc: 0xaee300d8  sw          $v1, 0xD8($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2cf8) {
            ctx->pc = 0x2C247Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c247c;
        }
    }
    ctx->pc = 0x2C2D00u;
label_2c2d00:
    // 0x2c2d00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2d04:
    // 0x2c2d04: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2c2d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2c2d08:
    // 0x2c2d08: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2c2d08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2c2d0c:
    // 0x2c2d0c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2c2d0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2c2d10:
    // 0x2c2d10: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2c2d10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2c2d14:
    // 0x2c2d14: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2c2d14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2c2d18:
    // 0x2c2d18: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2c2d18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c2d1c:
    // 0x2c2d1c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2c2d1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2c2d20:
    // 0x2c2d20: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2c2d20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c2d24:
    // 0x2c2d24: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2c2d24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c2d28:
    // 0x2c2d28: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c2d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2c2d2c:
    // 0x2c2d2c: 0x3e00008  jr          $ra
label_2c2d30:
    if (ctx->pc == 0x2C2D30u) {
        ctx->pc = 0x2C2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D2Cu;
        // 0x2c2d30: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2D34u;
        goto label_2c2d34;
    }
    ctx->pc = 0x2C2D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D2Cu;
        // 0x2c2d30: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2D34u;
label_2c2d34:
    // 0x2c2d34: 0x0  nop
    ctx->pc = 0x2c2d34u;
    // NOP
    ctx->pc = 0x2c2d38u;
}
