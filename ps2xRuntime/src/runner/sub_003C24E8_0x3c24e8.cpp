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

// Function: sub_003C24E8
// Address: 0x3c24e8 - 0x3c2a48
void sub_003C24E8_0x3c24e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C24E8_0x3c24e8");
#endif

    switch (ctx->pc) {
        case 0x3c24e8u: goto label_3c24e8;
        case 0x3c24ecu: goto label_3c24ec;
        case 0x3c24f0u: goto label_3c24f0;
        case 0x3c24f4u: goto label_3c24f4;
        case 0x3c24f8u: goto label_3c24f8;
        case 0x3c24fcu: goto label_3c24fc;
        case 0x3c2500u: goto label_3c2500;
        case 0x3c2504u: goto label_3c2504;
        case 0x3c2508u: goto label_3c2508;
        case 0x3c250cu: goto label_3c250c;
        case 0x3c2510u: goto label_3c2510;
        case 0x3c2514u: goto label_3c2514;
        case 0x3c2518u: goto label_3c2518;
        case 0x3c251cu: goto label_3c251c;
        case 0x3c2520u: goto label_3c2520;
        case 0x3c2524u: goto label_3c2524;
        case 0x3c2528u: goto label_3c2528;
        case 0x3c252cu: goto label_3c252c;
        case 0x3c2530u: goto label_3c2530;
        case 0x3c2534u: goto label_3c2534;
        case 0x3c2538u: goto label_3c2538;
        case 0x3c253cu: goto label_3c253c;
        case 0x3c2540u: goto label_3c2540;
        case 0x3c2544u: goto label_3c2544;
        case 0x3c2548u: goto label_3c2548;
        case 0x3c254cu: goto label_3c254c;
        case 0x3c2550u: goto label_3c2550;
        case 0x3c2554u: goto label_3c2554;
        case 0x3c2558u: goto label_3c2558;
        case 0x3c255cu: goto label_3c255c;
        case 0x3c2560u: goto label_3c2560;
        case 0x3c2564u: goto label_3c2564;
        case 0x3c2568u: goto label_3c2568;
        case 0x3c256cu: goto label_3c256c;
        case 0x3c2570u: goto label_3c2570;
        case 0x3c2574u: goto label_3c2574;
        case 0x3c2578u: goto label_3c2578;
        case 0x3c257cu: goto label_3c257c;
        case 0x3c2580u: goto label_3c2580;
        case 0x3c2584u: goto label_3c2584;
        case 0x3c2588u: goto label_3c2588;
        case 0x3c258cu: goto label_3c258c;
        case 0x3c2590u: goto label_3c2590;
        case 0x3c2594u: goto label_3c2594;
        case 0x3c2598u: goto label_3c2598;
        case 0x3c259cu: goto label_3c259c;
        case 0x3c25a0u: goto label_3c25a0;
        case 0x3c25a4u: goto label_3c25a4;
        case 0x3c25a8u: goto label_3c25a8;
        case 0x3c25acu: goto label_3c25ac;
        case 0x3c25b0u: goto label_3c25b0;
        case 0x3c25b4u: goto label_3c25b4;
        case 0x3c25b8u: goto label_3c25b8;
        case 0x3c25bcu: goto label_3c25bc;
        case 0x3c25c0u: goto label_3c25c0;
        case 0x3c25c4u: goto label_3c25c4;
        case 0x3c25c8u: goto label_3c25c8;
        case 0x3c25ccu: goto label_3c25cc;
        case 0x3c25d0u: goto label_3c25d0;
        case 0x3c25d4u: goto label_3c25d4;
        case 0x3c25d8u: goto label_3c25d8;
        case 0x3c25dcu: goto label_3c25dc;
        case 0x3c25e0u: goto label_3c25e0;
        case 0x3c25e4u: goto label_3c25e4;
        case 0x3c25e8u: goto label_3c25e8;
        case 0x3c25ecu: goto label_3c25ec;
        case 0x3c25f0u: goto label_3c25f0;
        case 0x3c25f4u: goto label_3c25f4;
        case 0x3c25f8u: goto label_3c25f8;
        case 0x3c25fcu: goto label_3c25fc;
        case 0x3c2600u: goto label_3c2600;
        case 0x3c2604u: goto label_3c2604;
        case 0x3c2608u: goto label_3c2608;
        case 0x3c260cu: goto label_3c260c;
        case 0x3c2610u: goto label_3c2610;
        case 0x3c2614u: goto label_3c2614;
        case 0x3c2618u: goto label_3c2618;
        case 0x3c261cu: goto label_3c261c;
        case 0x3c2620u: goto label_3c2620;
        case 0x3c2624u: goto label_3c2624;
        case 0x3c2628u: goto label_3c2628;
        case 0x3c262cu: goto label_3c262c;
        case 0x3c2630u: goto label_3c2630;
        case 0x3c2634u: goto label_3c2634;
        case 0x3c2638u: goto label_3c2638;
        case 0x3c263cu: goto label_3c263c;
        case 0x3c2640u: goto label_3c2640;
        case 0x3c2644u: goto label_3c2644;
        case 0x3c2648u: goto label_3c2648;
        case 0x3c264cu: goto label_3c264c;
        case 0x3c2650u: goto label_3c2650;
        case 0x3c2654u: goto label_3c2654;
        case 0x3c2658u: goto label_3c2658;
        case 0x3c265cu: goto label_3c265c;
        case 0x3c2660u: goto label_3c2660;
        case 0x3c2664u: goto label_3c2664;
        case 0x3c2668u: goto label_3c2668;
        case 0x3c266cu: goto label_3c266c;
        case 0x3c2670u: goto label_3c2670;
        case 0x3c2674u: goto label_3c2674;
        case 0x3c2678u: goto label_3c2678;
        case 0x3c267cu: goto label_3c267c;
        case 0x3c2680u: goto label_3c2680;
        case 0x3c2684u: goto label_3c2684;
        case 0x3c2688u: goto label_3c2688;
        case 0x3c268cu: goto label_3c268c;
        case 0x3c2690u: goto label_3c2690;
        case 0x3c2694u: goto label_3c2694;
        case 0x3c2698u: goto label_3c2698;
        case 0x3c269cu: goto label_3c269c;
        case 0x3c26a0u: goto label_3c26a0;
        case 0x3c26a4u: goto label_3c26a4;
        case 0x3c26a8u: goto label_3c26a8;
        case 0x3c26acu: goto label_3c26ac;
        case 0x3c26b0u: goto label_3c26b0;
        case 0x3c26b4u: goto label_3c26b4;
        case 0x3c26b8u: goto label_3c26b8;
        case 0x3c26bcu: goto label_3c26bc;
        case 0x3c26c0u: goto label_3c26c0;
        case 0x3c26c4u: goto label_3c26c4;
        case 0x3c26c8u: goto label_3c26c8;
        case 0x3c26ccu: goto label_3c26cc;
        case 0x3c26d0u: goto label_3c26d0;
        case 0x3c26d4u: goto label_3c26d4;
        case 0x3c26d8u: goto label_3c26d8;
        case 0x3c26dcu: goto label_3c26dc;
        case 0x3c26e0u: goto label_3c26e0;
        case 0x3c26e4u: goto label_3c26e4;
        case 0x3c26e8u: goto label_3c26e8;
        case 0x3c26ecu: goto label_3c26ec;
        case 0x3c26f0u: goto label_3c26f0;
        case 0x3c26f4u: goto label_3c26f4;
        case 0x3c26f8u: goto label_3c26f8;
        case 0x3c26fcu: goto label_3c26fc;
        case 0x3c2700u: goto label_3c2700;
        case 0x3c2704u: goto label_3c2704;
        case 0x3c2708u: goto label_3c2708;
        case 0x3c270cu: goto label_3c270c;
        case 0x3c2710u: goto label_3c2710;
        case 0x3c2714u: goto label_3c2714;
        case 0x3c2718u: goto label_3c2718;
        case 0x3c271cu: goto label_3c271c;
        case 0x3c2720u: goto label_3c2720;
        case 0x3c2724u: goto label_3c2724;
        case 0x3c2728u: goto label_3c2728;
        case 0x3c272cu: goto label_3c272c;
        case 0x3c2730u: goto label_3c2730;
        case 0x3c2734u: goto label_3c2734;
        case 0x3c2738u: goto label_3c2738;
        case 0x3c273cu: goto label_3c273c;
        case 0x3c2740u: goto label_3c2740;
        case 0x3c2744u: goto label_3c2744;
        case 0x3c2748u: goto label_3c2748;
        case 0x3c274cu: goto label_3c274c;
        case 0x3c2750u: goto label_3c2750;
        case 0x3c2754u: goto label_3c2754;
        case 0x3c2758u: goto label_3c2758;
        case 0x3c275cu: goto label_3c275c;
        case 0x3c2760u: goto label_3c2760;
        case 0x3c2764u: goto label_3c2764;
        case 0x3c2768u: goto label_3c2768;
        case 0x3c276cu: goto label_3c276c;
        case 0x3c2770u: goto label_3c2770;
        case 0x3c2774u: goto label_3c2774;
        case 0x3c2778u: goto label_3c2778;
        case 0x3c277cu: goto label_3c277c;
        case 0x3c2780u: goto label_3c2780;
        case 0x3c2784u: goto label_3c2784;
        case 0x3c2788u: goto label_3c2788;
        case 0x3c278cu: goto label_3c278c;
        case 0x3c2790u: goto label_3c2790;
        case 0x3c2794u: goto label_3c2794;
        case 0x3c2798u: goto label_3c2798;
        case 0x3c279cu: goto label_3c279c;
        case 0x3c27a0u: goto label_3c27a0;
        case 0x3c27a4u: goto label_3c27a4;
        case 0x3c27a8u: goto label_3c27a8;
        case 0x3c27acu: goto label_3c27ac;
        case 0x3c27b0u: goto label_3c27b0;
        case 0x3c27b4u: goto label_3c27b4;
        case 0x3c27b8u: goto label_3c27b8;
        case 0x3c27bcu: goto label_3c27bc;
        case 0x3c27c0u: goto label_3c27c0;
        case 0x3c27c4u: goto label_3c27c4;
        case 0x3c27c8u: goto label_3c27c8;
        case 0x3c27ccu: goto label_3c27cc;
        case 0x3c27d0u: goto label_3c27d0;
        case 0x3c27d4u: goto label_3c27d4;
        case 0x3c27d8u: goto label_3c27d8;
        case 0x3c27dcu: goto label_3c27dc;
        case 0x3c27e0u: goto label_3c27e0;
        case 0x3c27e4u: goto label_3c27e4;
        case 0x3c27e8u: goto label_3c27e8;
        case 0x3c27ecu: goto label_3c27ec;
        case 0x3c27f0u: goto label_3c27f0;
        case 0x3c27f4u: goto label_3c27f4;
        case 0x3c27f8u: goto label_3c27f8;
        case 0x3c27fcu: goto label_3c27fc;
        case 0x3c2800u: goto label_3c2800;
        case 0x3c2804u: goto label_3c2804;
        case 0x3c2808u: goto label_3c2808;
        case 0x3c280cu: goto label_3c280c;
        case 0x3c2810u: goto label_3c2810;
        case 0x3c2814u: goto label_3c2814;
        case 0x3c2818u: goto label_3c2818;
        case 0x3c281cu: goto label_3c281c;
        case 0x3c2820u: goto label_3c2820;
        case 0x3c2824u: goto label_3c2824;
        case 0x3c2828u: goto label_3c2828;
        case 0x3c282cu: goto label_3c282c;
        case 0x3c2830u: goto label_3c2830;
        case 0x3c2834u: goto label_3c2834;
        case 0x3c2838u: goto label_3c2838;
        case 0x3c283cu: goto label_3c283c;
        case 0x3c2840u: goto label_3c2840;
        case 0x3c2844u: goto label_3c2844;
        case 0x3c2848u: goto label_3c2848;
        case 0x3c284cu: goto label_3c284c;
        case 0x3c2850u: goto label_3c2850;
        case 0x3c2854u: goto label_3c2854;
        case 0x3c2858u: goto label_3c2858;
        case 0x3c285cu: goto label_3c285c;
        case 0x3c2860u: goto label_3c2860;
        case 0x3c2864u: goto label_3c2864;
        case 0x3c2868u: goto label_3c2868;
        case 0x3c286cu: goto label_3c286c;
        case 0x3c2870u: goto label_3c2870;
        case 0x3c2874u: goto label_3c2874;
        case 0x3c2878u: goto label_3c2878;
        case 0x3c287cu: goto label_3c287c;
        case 0x3c2880u: goto label_3c2880;
        case 0x3c2884u: goto label_3c2884;
        case 0x3c2888u: goto label_3c2888;
        case 0x3c288cu: goto label_3c288c;
        case 0x3c2890u: goto label_3c2890;
        case 0x3c2894u: goto label_3c2894;
        case 0x3c2898u: goto label_3c2898;
        case 0x3c289cu: goto label_3c289c;
        case 0x3c28a0u: goto label_3c28a0;
        case 0x3c28a4u: goto label_3c28a4;
        case 0x3c28a8u: goto label_3c28a8;
        case 0x3c28acu: goto label_3c28ac;
        case 0x3c28b0u: goto label_3c28b0;
        case 0x3c28b4u: goto label_3c28b4;
        case 0x3c28b8u: goto label_3c28b8;
        case 0x3c28bcu: goto label_3c28bc;
        case 0x3c28c0u: goto label_3c28c0;
        case 0x3c28c4u: goto label_3c28c4;
        case 0x3c28c8u: goto label_3c28c8;
        case 0x3c28ccu: goto label_3c28cc;
        case 0x3c28d0u: goto label_3c28d0;
        case 0x3c28d4u: goto label_3c28d4;
        case 0x3c28d8u: goto label_3c28d8;
        case 0x3c28dcu: goto label_3c28dc;
        case 0x3c28e0u: goto label_3c28e0;
        case 0x3c28e4u: goto label_3c28e4;
        case 0x3c28e8u: goto label_3c28e8;
        case 0x3c28ecu: goto label_3c28ec;
        case 0x3c28f0u: goto label_3c28f0;
        case 0x3c28f4u: goto label_3c28f4;
        case 0x3c28f8u: goto label_3c28f8;
        case 0x3c28fcu: goto label_3c28fc;
        case 0x3c2900u: goto label_3c2900;
        case 0x3c2904u: goto label_3c2904;
        case 0x3c2908u: goto label_3c2908;
        case 0x3c290cu: goto label_3c290c;
        case 0x3c2910u: goto label_3c2910;
        case 0x3c2914u: goto label_3c2914;
        case 0x3c2918u: goto label_3c2918;
        case 0x3c291cu: goto label_3c291c;
        case 0x3c2920u: goto label_3c2920;
        case 0x3c2924u: goto label_3c2924;
        case 0x3c2928u: goto label_3c2928;
        case 0x3c292cu: goto label_3c292c;
        case 0x3c2930u: goto label_3c2930;
        case 0x3c2934u: goto label_3c2934;
        case 0x3c2938u: goto label_3c2938;
        case 0x3c293cu: goto label_3c293c;
        case 0x3c2940u: goto label_3c2940;
        case 0x3c2944u: goto label_3c2944;
        case 0x3c2948u: goto label_3c2948;
        case 0x3c294cu: goto label_3c294c;
        case 0x3c2950u: goto label_3c2950;
        case 0x3c2954u: goto label_3c2954;
        case 0x3c2958u: goto label_3c2958;
        case 0x3c295cu: goto label_3c295c;
        case 0x3c2960u: goto label_3c2960;
        case 0x3c2964u: goto label_3c2964;
        case 0x3c2968u: goto label_3c2968;
        case 0x3c296cu: goto label_3c296c;
        case 0x3c2970u: goto label_3c2970;
        case 0x3c2974u: goto label_3c2974;
        case 0x3c2978u: goto label_3c2978;
        case 0x3c297cu: goto label_3c297c;
        case 0x3c2980u: goto label_3c2980;
        case 0x3c2984u: goto label_3c2984;
        case 0x3c2988u: goto label_3c2988;
        case 0x3c298cu: goto label_3c298c;
        case 0x3c2990u: goto label_3c2990;
        case 0x3c2994u: goto label_3c2994;
        case 0x3c2998u: goto label_3c2998;
        case 0x3c299cu: goto label_3c299c;
        case 0x3c29a0u: goto label_3c29a0;
        case 0x3c29a4u: goto label_3c29a4;
        case 0x3c29a8u: goto label_3c29a8;
        case 0x3c29acu: goto label_3c29ac;
        case 0x3c29b0u: goto label_3c29b0;
        case 0x3c29b4u: goto label_3c29b4;
        case 0x3c29b8u: goto label_3c29b8;
        case 0x3c29bcu: goto label_3c29bc;
        case 0x3c29c0u: goto label_3c29c0;
        case 0x3c29c4u: goto label_3c29c4;
        case 0x3c29c8u: goto label_3c29c8;
        case 0x3c29ccu: goto label_3c29cc;
        case 0x3c29d0u: goto label_3c29d0;
        case 0x3c29d4u: goto label_3c29d4;
        case 0x3c29d8u: goto label_3c29d8;
        case 0x3c29dcu: goto label_3c29dc;
        case 0x3c29e0u: goto label_3c29e0;
        case 0x3c29e4u: goto label_3c29e4;
        case 0x3c29e8u: goto label_3c29e8;
        case 0x3c29ecu: goto label_3c29ec;
        case 0x3c29f0u: goto label_3c29f0;
        case 0x3c29f4u: goto label_3c29f4;
        case 0x3c29f8u: goto label_3c29f8;
        case 0x3c29fcu: goto label_3c29fc;
        case 0x3c2a00u: goto label_3c2a00;
        case 0x3c2a04u: goto label_3c2a04;
        case 0x3c2a08u: goto label_3c2a08;
        case 0x3c2a0cu: goto label_3c2a0c;
        case 0x3c2a10u: goto label_3c2a10;
        case 0x3c2a14u: goto label_3c2a14;
        case 0x3c2a18u: goto label_3c2a18;
        case 0x3c2a1cu: goto label_3c2a1c;
        case 0x3c2a20u: goto label_3c2a20;
        case 0x3c2a24u: goto label_3c2a24;
        case 0x3c2a28u: goto label_3c2a28;
        case 0x3c2a2cu: goto label_3c2a2c;
        case 0x3c2a30u: goto label_3c2a30;
        case 0x3c2a34u: goto label_3c2a34;
        case 0x3c2a38u: goto label_3c2a38;
        case 0x3c2a3cu: goto label_3c2a3c;
        case 0x3c2a40u: goto label_3c2a40;
        case 0x3c2a44u: goto label_3c2a44;
        default: break;
    }

    ctx->pc = 0x3c24e8u;

label_3c24e8:
    // 0x3c24e8: 0x27bdfad0  addiu       $sp, $sp, -0x530
    ctx->pc = 0x3c24e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965968));
label_3c24ec:
    // 0x3c24ec: 0x7fb504c0  sq          $s5, 0x4C0($sp)
    ctx->pc = 0x3c24ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 21));
label_3c24f0:
    // 0x3c24f0: 0x7fb604b0  sq          $s6, 0x4B0($sp)
    ctx->pc = 0x3c24f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 22));
label_3c24f4:
    // 0x3c24f4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3c24f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c24f8:
    // 0x3c24f8: 0x7fb00510  sq          $s0, 0x510($sp)
    ctx->pc = 0x3c24f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 16));
label_3c24fc:
    // 0x3c24fc: 0x7fb10500  sq          $s1, 0x500($sp)
    ctx->pc = 0x3c24fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 17));
label_3c2500:
    // 0x3c2500: 0x7fb204f0  sq          $s2, 0x4F0($sp)
    ctx->pc = 0x3c2500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 18));
label_3c2504:
    // 0x3c2504: 0x7fb304e0  sq          $s3, 0x4E0($sp)
    ctx->pc = 0x3c2504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 19));
label_3c2508:
    // 0x3c2508: 0x7fb404d0  sq          $s4, 0x4D0($sp)
    ctx->pc = 0x3c2508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 20));
label_3c250c:
    // 0x3c250c: 0x7fb704a0  sq          $s7, 0x4A0($sp)
    ctx->pc = 0x3c250cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 23));
label_3c2510:
    // 0x3c2510: 0xffbf0490  sd          $ra, 0x490($sp)
    ctx->pc = 0x3c2510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 31));
label_3c2514:
    // 0x3c2514: 0xe7b50528  swc1        $f21, 0x528($sp)
    ctx->pc = 0x3c2514u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1320), bits); }
label_3c2518:
    // 0x3c2518: 0xe7b40520  swc1        $f20, 0x520($sp)
    ctx->pc = 0x3c2518u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
label_3c251c:
    // 0x3c251c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3c251cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3c2520:
    // 0x3c2520: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c2520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c2524:
    // 0x3c2524: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c2524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c2528:
    // 0x3c2528: 0x40f809  jalr        $v0
label_3c252c:
    if (ctx->pc == 0x3C252Cu) {
        ctx->pc = 0x3C252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2528u;
        // 0x3c252c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2530u;
        goto label_3c2530;
    }
    ctx->pc = 0x3C2528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2530u);
        ctx->pc = 0x3C252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2528u;
        // 0x3c252c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2528u, 0x3C2530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2530u;
label_3c2530:
    // 0x3c2530: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3c2530u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2534:
    // 0x3c2534: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x3c2534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3c2538:
    // 0x3c2538: 0x8ec3001c  lw          $v1, 0x1C($s6)
    ctx->pc = 0x3c2538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_3c253c:
    // 0x3c253c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3c253cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c2540:
    // 0x3c2540: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3c2544:
    if (ctx->pc == 0x3C2544u) {
        ctx->pc = 0x3C2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2540u;
        // 0x3c2544: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2548u;
        goto label_3c2548;
    }
    ctx->pc = 0x3C2540u;
    {
        const bool branch_taken_0x3c2540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2540) {
            ctx->pc = 0x3C2544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2540u;
            // 0x3c2544: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2550u;
            goto label_3c2550;
        }
    }
    ctx->pc = 0x3C2548u;
label_3c2548:
    // 0x3c2548: 0x10000132  b           . + 4 + (0x132 << 2)
label_3c254c:
    if (ctx->pc == 0x3C254Cu) {
        ctx->pc = 0x3C254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2548u;
        // 0x3c254c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2550u;
        goto label_3c2550;
    }
    ctx->pc = 0x3C2548u;
    {
        const bool branch_taken_0x3c2548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2548u;
        // 0x3c254c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2548) {
            ctx->pc = 0x3C2A14u;
            goto label_3c2a14;
        }
    }
    ctx->pc = 0x3C2550u;
label_3c2550:
    // 0x3c2550: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3c2550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3c2554:
    // 0x3c2554: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3c2554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3c2558:
    // 0x3c2558: 0x40f809  jalr        $v0
label_3c255c:
    if (ctx->pc == 0x3C255Cu) {
        ctx->pc = 0x3C255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2558u;
        // 0x3c255c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2560u;
        goto label_3c2560;
    }
    ctx->pc = 0x3C2558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2560u);
        ctx->pc = 0x3C255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2558u;
        // 0x3c255c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2558u, 0x3C2560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2560u;
label_3c2560:
    // 0x3c2560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c2560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2564:
    // 0x3c2564: 0x8ec30024  lw          $v1, 0x24($s6)
    ctx->pc = 0x3c2564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_3c2568:
    // 0x3c2568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c256c:
    // 0x3c256c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_3c2570:
    if (ctx->pc == 0x3C2570u) {
        ctx->pc = 0x3C2574u;
        goto label_3c2574;
    }
    ctx->pc = 0x3C256Cu;
    {
        const bool branch_taken_0x3c256c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c256c) {
            ctx->pc = 0x3C25A8u;
            goto label_3c25a8;
        }
    }
    ctx->pc = 0x3C2574u;
label_3c2574:
    // 0x3c2574: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x3c2574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3c2578:
    // 0x3c2578: 0xc6c1001c  lwc1        $f1, 0x1C($s6)
    ctx->pc = 0x3c2578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c257c:
    // 0x3c257c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c257cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c2580:
    // 0x3c2580: 0xc6c20020  lwc1        $f2, 0x20($s6)
    ctx->pc = 0x3c2580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c2584:
    // 0x3c2584: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x3c2584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
label_3c2588:
    // 0x3c2588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c2588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c258c:
    // 0x3c258c: 0x0  nop
    ctx->pc = 0x3c258cu;
    // NOP
label_3c2590:
    // 0x3c2590: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c2590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c2594:
    // 0x3c2594: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3c2594u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3c2598:
    // 0x3c2598: 0x0  nop
    ctx->pc = 0x3c2598u;
    // NOP
label_3c259c:
    // 0x3c259c: 0x0  nop
    ctx->pc = 0x3c259cu;
    // NOP
label_3c25a0:
    // 0x3c25a0: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x3c25a0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_3c25a4:
    // 0x3c25a4: 0xe6a200c0  swc1        $f2, 0xC0($s5)
    ctx->pc = 0x3c25a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 192), bits); }
label_3c25a8:
    // 0x3c25a8: 0xc0e9694  jal         func_3A5A50
label_3c25ac:
    if (ctx->pc == 0x3C25ACu) {
        ctx->pc = 0x3C25ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25A8u;
        // 0x3c25ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C25B0u;
        goto label_3c25b0;
    }
    ctx->pc = 0x3C25A8u;
    SET_GPR_U32(ctx, 31, 0x3C25B0u);
    ctx->pc = 0x3C25ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C25A8u;
    // 0x3c25ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3C25A8u, 0x3C25B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C25B0u;
label_3c25b0:
    // 0x3c25b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3c25b4:
    if (ctx->pc == 0x3C25B4u) {
        ctx->pc = 0x3C25B8u;
        goto label_3c25b8;
    }
    ctx->pc = 0x3C25B0u;
    {
        const bool branch_taken_0x3c25b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c25b0) {
            ctx->pc = 0x3C25C0u;
            goto label_3c25c0;
        }
    }
    ctx->pc = 0x3C25B8u;
label_3c25b8:
    // 0x3c25b8: 0x8ec2001c  lw          $v0, 0x1C($s6)
    ctx->pc = 0x3c25b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_3c25bc:
    // 0x3c25bc: 0xaec20018  sw          $v0, 0x18($s6)
    ctx->pc = 0x3c25bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
label_3c25c0:
    // 0x3c25c0: 0xc0e87c0  jal         func_3A1F00
label_3c25c4:
    if (ctx->pc == 0x3C25C4u) {
        ctx->pc = 0x3C25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25C0u;
        // 0x3c25c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C25C8u;
        goto label_3c25c8;
    }
    ctx->pc = 0x3C25C0u;
    SET_GPR_U32(ctx, 31, 0x3C25C8u);
    ctx->pc = 0x3C25C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C25C0u;
    // 0x3c25c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3C25C0u, 0x3C25C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C25C8u;
label_3c25c8:
    // 0x3c25c8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c25c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3c25cc:
    // 0x3c25cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c25ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c25d0:
    // 0x3c25d0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3c25d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3c25d4:
    // 0x3c25d4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3c25d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c25d8:
    // 0x3c25d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c25d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c25dc:
    // 0x3c25dc: 0x0  nop
    ctx->pc = 0x3c25dcu;
    // NOP
label_3c25e0:
    // 0x3c25e0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_3c25e4:
    if (ctx->pc == 0x3C25E4u) {
        ctx->pc = 0x3C25E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25E0u;
        // 0x3c25e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C25E8u;
        goto label_3c25e8;
    }
    ctx->pc = 0x3C25E0u;
    {
        const bool branch_taken_0x3c25e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C25E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25E0u;
        // 0x3c25e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c25e0) {
            ctx->pc = 0x3C2618u;
            goto label_3c2618;
        }
    }
    ctx->pc = 0x3C25E8u;
label_3c25e8:
    // 0x3c25e8: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x3c25e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
label_3c25ec:
    // 0x3c25ec: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x3c25ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_3c25f0:
    // 0x3c25f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c25f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c25f4:
    // 0x3c25f4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3c25f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3c25f8:
    // 0x3c25f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3c25f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3c25fc:
    // 0x3c25fc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3c25fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3c2600:
    // 0x3c2600: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3c2600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3c2604:
    // 0x3c2604: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3c2604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3c2608:
    // 0x3c2608: 0x40f809  jalr        $v0
label_3c260c:
    if (ctx->pc == 0x3C260Cu) {
        ctx->pc = 0x3C260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2608u;
        // 0x3c260c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2610u;
        goto label_3c2610;
    }
    ctx->pc = 0x3C2608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2610u);
        ctx->pc = 0x3C260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2608u;
        // 0x3c260c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2608u, 0x3C2610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2610u;
label_3c2610:
    // 0x3c2610: 0x1000000a  b           . + 4 + (0xA << 2)
label_3c2614:
    if (ctx->pc == 0x3C2614u) {
        ctx->pc = 0x3C2614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2610u;
        // 0x3c2614: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2618u;
        goto label_3c2618;
    }
    ctx->pc = 0x3C2610u;
    {
        const bool branch_taken_0x3c2610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2610u;
        // 0x3c2614: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2610) {
            ctx->pc = 0x3C263Cu;
            goto label_3c263c;
        }
    }
    ctx->pc = 0x3C2618u;
label_3c2618:
    // 0x3c2618: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x3c2618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
label_3c261c:
    // 0x3c261c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3c261cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_3c2620:
    // 0x3c2620: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3c2624:
    if (ctx->pc == 0x3C2624u) {
        ctx->pc = 0x3C2624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2620u;
        // 0x3c2624: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2628u;
        goto label_3c2628;
    }
    ctx->pc = 0x3C2620u;
    {
        const bool branch_taken_0x3c2620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2620u;
        // 0x3c2624: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2620) {
            ctx->pc = 0x3C263Cu;
            goto label_3c263c;
        }
    }
    ctx->pc = 0x3C2628u;
label_3c2628:
    // 0x3c2628: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x3c2628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3c262c:
    // 0x3c262c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3c262cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_3c2630:
    // 0x3c2630: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c2630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3c2634:
    // 0x3c2634: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x3c2634u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_3c2638:
    // 0x3c2638: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3c2638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_3c263c:
    // 0x3c263c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3c263cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_3c2640:
    // 0x3c2640: 0x104000dd  beqz        $v0, . + 4 + (0xDD << 2)
label_3c2644:
    if (ctx->pc == 0x3C2644u) {
        ctx->pc = 0x3C2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2640u;
        // 0x3c2644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2648u;
        goto label_3c2648;
    }
    ctx->pc = 0x3C2640u;
    {
        const bool branch_taken_0x3c2640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2640u;
        // 0x3c2644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2640) {
            ctx->pc = 0x3C29B8u;
            goto label_3c29b8;
        }
    }
    ctx->pc = 0x3C2648u;
label_3c2648:
    // 0x3c2648: 0x8ed00024  lw          $s0, 0x24($s6)
    ctx->pc = 0x3c2648u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_3c264c:
    // 0x3c264c: 0x5602004a  bnel        $s0, $v0, . + 4 + (0x4A << 2)
label_3c2650:
    if (ctx->pc == 0x3C2650u) {
        ctx->pc = 0x3C2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C264Cu;
        // 0x3c2650: 0x8ec50010  lw          $a1, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2654u;
        goto label_3c2654;
    }
    ctx->pc = 0x3C264Cu;
    {
        const bool branch_taken_0x3c264c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c264c) {
            ctx->pc = 0x3C2650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C264Cu;
            // 0x3c2650: 0x8ec50010  lw          $a1, 0x10($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2778u;
            goto label_3c2778;
        }
    }
    ctx->pc = 0x3C2654u;
label_3c2654:
    // 0x3c2654: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c2654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c2658:
    // 0x3c2658: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3c2658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3c265c:
    // 0x3c265c: 0x2456b8b8  addiu       $s6, $v0, -0x4748
    ctx->pc = 0x3c265cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3c2660:
    // 0x3c2660: 0xc0cd4ee  jal         func_3353B8
label_3c2664:
    if (ctx->pc == 0x3C2664u) {
        ctx->pc = 0x3C2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2660u;
        // 0x3c2664: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2668u;
        goto label_3c2668;
    }
    ctx->pc = 0x3C2660u;
    SET_GPR_U32(ctx, 31, 0x3C2668u);
    ctx->pc = 0x3C2664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2660u;
    // 0x3c2664: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C2660u, 0x3C2668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2668u;
label_3c2668:
    // 0x3c2668: 0x145000ea  bne         $v0, $s0, . + 4 + (0xEA << 2)
label_3c266c:
    if (ctx->pc == 0x3C266Cu) {
        ctx->pc = 0x3C266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2668u;
        // 0x3c266c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2670u;
        goto label_3c2670;
    }
    ctx->pc = 0x3C2668u;
    {
        const bool branch_taken_0x3c2668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3C266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2668u;
        // 0x3c266c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2668) {
            ctx->pc = 0x3C2A14u;
            goto label_3c2a14;
        }
    }
    ctx->pc = 0x3C2670u;
label_3c2670:
    // 0x3c2670: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x3c2670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
label_3c2674:
    // 0x3c2674: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c2674u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c2678:
    // 0x3c2678: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3c2678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3c267c:
    // 0x3c267c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c267cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c2680:
    // 0x3c2680: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3c2680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3c2684:
    // 0x3c2684: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c2684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c2688:
    // 0x3c2688: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c2688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c268c:
    // 0x3c268c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3c268cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3c2690:
    // 0x3c2690: 0xc0cd518  jal         func_335460
label_3c2694:
    if (ctx->pc == 0x3C2694u) {
        ctx->pc = 0x3C2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2690u;
        // 0x3c2694: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2698u;
        goto label_3c2698;
    }
    ctx->pc = 0x3C2690u;
    SET_GPR_U32(ctx, 31, 0x3C2698u);
    ctx->pc = 0x3C2694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2690u;
    // 0x3c2694: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C2690u, 0x3C2698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2698u;
label_3c2698:
    // 0x3c2698: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3c2698u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3c269c:
    // 0x3c269c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3c269cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3c26a0:
    // 0x3c26a0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3c26a0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3c26a4:
    // 0x3c26a4: 0xc0cd518  jal         func_335460
label_3c26a8:
    if (ctx->pc == 0x3C26A8u) {
        ctx->pc = 0x3C26A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C26A4u;
        // 0x3c26a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C26ACu;
        goto label_3c26ac;
    }
    ctx->pc = 0x3C26A4u;
    SET_GPR_U32(ctx, 31, 0x3C26ACu);
    ctx->pc = 0x3C26A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C26A4u;
    // 0x3c26a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C26A4u, 0x3C26ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C26ACu;
label_3c26ac:
    // 0x3c26ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c26acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c26b0:
    // 0x3c26b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c26b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c26b4:
    // 0x3c26b4: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x3c26b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c26b8:
    // 0x3c26b8: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x3c26b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3c26bc:
    // 0x3c26bc: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3c26bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3c26c0:
    // 0x3c26c0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3c26c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3c26c4:
    // 0x3c26c4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c26c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3c26c8:
    // 0x3c26c8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3c26c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3c26cc:
    // 0x3c26cc: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x3c26ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3c26d0:
    // 0x3c26d0: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x3c26d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3c26d4:
    // 0x3c26d4: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3c26d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c26d8:
    // 0x3c26d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3c26d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c26dc:
    // 0x3c26dc: 0x26312ce0  addiu       $s1, $s1, 0x2CE0
    ctx->pc = 0x3c26dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11488));
label_3c26e0:
    // 0x3c26e0: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3c26e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c26e4:
    // 0x3c26e4: 0x26102e40  addiu       $s0, $s0, 0x2E40
    ctx->pc = 0x3c26e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11840));
label_3c26e8:
    // 0x3c26e8: 0x7aa20010  lq          $v0, 0x10($s5)
    ctx->pc = 0x3c26e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_3c26ec:
    // 0x3c26ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c26ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c26f0:
    // 0x3c26f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3c26f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c26f4:
    // 0x3c26f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3c26f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c26f8:
    // 0x3c26f8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3c26f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c26fc:
    // 0x3c26fc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3c26fcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3c2700:
    // 0x3c2700: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3c2700u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3c2704:
    // 0x3c2704: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3c2704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3c2708:
    // 0x3c2708: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c2708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c270c:
    // 0x3c270c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3c270cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3c2710:
    // 0x3c2710: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3c2710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3c2714:
    // 0x3c2714: 0xc0cd4ee  jal         func_3353B8
label_3c2718:
    if (ctx->pc == 0x3C2718u) {
        ctx->pc = 0x3C2718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2714u;
        // 0x3c2718: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C271Cu;
        goto label_3c271c;
    }
    ctx->pc = 0x3C2714u;
    SET_GPR_U32(ctx, 31, 0x3C271Cu);
    ctx->pc = 0x3C2718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2714u;
    // 0x3c2718: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C2714u, 0x3C271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C271Cu;
label_3c271c:
    // 0x3c271c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c271cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3c2720:
    // 0x3c2720: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x3c2720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_3c2724:
    // 0x3c2724: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3c2724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3c2728:
    // 0x3c2728: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c2728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c272c:
    // 0x3c272c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3c272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3c2730:
    // 0x3c2730: 0x3c013f0f  lui         $at, 0x3F0F
    ctx->pc = 0x3c2730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16143 << 16));
label_3c2734:
    // 0x3c2734: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x3c2734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_3c2738:
    // 0x3c2738: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c2738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c273c:
    // 0x3c273c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c273cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c2740:
    // 0x3c2740: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c2740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c2744:
    // 0x3c2744: 0xc0cd518  jal         func_335460
label_3c2748:
    if (ctx->pc == 0x3C2748u) {
        ctx->pc = 0x3C2748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2744u;
        // 0x3c2748: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C274Cu;
        goto label_3c274c;
    }
    ctx->pc = 0x3C2744u;
    SET_GPR_U32(ctx, 31, 0x3C274Cu);
    ctx->pc = 0x3C2748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2744u;
    // 0x3c2748: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C2744u, 0x3C274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C274Cu;
label_3c274c:
    // 0x3c274c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c274cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c2750:
    // 0x3c2750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c2754:
    // 0x3c2754: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3c2754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3c2758:
    // 0x3c2758: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3c2758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c275c:
    // 0x3c275c: 0xc0e9fa6  jal         func_3A7E98
label_3c2760:
    if (ctx->pc == 0x3C2760u) {
        ctx->pc = 0x3C2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C275Cu;
        // 0x3c2760: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2764u;
        goto label_3c2764;
    }
    ctx->pc = 0x3C275Cu;
    SET_GPR_U32(ctx, 31, 0x3C2764u);
    ctx->pc = 0x3C2760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C275Cu;
    // 0x3c2760: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C275Cu, 0x3C2764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2764u;
label_3c2764:
    // 0x3c2764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c2764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c2768:
    // 0x3c2768: 0xc0f15bc  jal         func_3C56F0
label_3c276c:
    if (ctx->pc == 0x3C276Cu) {
        ctx->pc = 0x3C276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2768u;
        // 0x3c276c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2770u;
        goto label_3c2770;
    }
    ctx->pc = 0x3C2768u;
    SET_GPR_U32(ctx, 31, 0x3C2770u);
    ctx->pc = 0x3C276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2768u;
    // 0x3c276c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C2768u, 0x3C2770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2770u;
label_3c2770:
    // 0x3c2770: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_3c2774:
    if (ctx->pc == 0x3C2774u) {
        ctx->pc = 0x3C2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2770u;
        // 0x3c2774: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2778u;
        goto label_3c2778;
    }
    ctx->pc = 0x3C2770u;
    {
        const bool branch_taken_0x3c2770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2770u;
        // 0x3c2774: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2770) {
            ctx->pc = 0x3C2A14u;
            goto label_3c2a14;
        }
    }
    ctx->pc = 0x3C2778u;
label_3c2778:
    // 0x3c2778: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x3c2778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_3c277c:
    // 0x3c277c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3c2780:
    if (ctx->pc == 0x3C2780u) {
        ctx->pc = 0x3C2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C277Cu;
        // 0x3c2780: 0x7aa300a0  lq          $v1, 0xA0($s5) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2784u;
        goto label_3c2784;
    }
    ctx->pc = 0x3C277Cu;
    {
        const bool branch_taken_0x3c277c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c277c) {
            ctx->pc = 0x3C2780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C277Cu;
            // 0x3c2780: 0x7aa300a0  lq          $v1, 0xA0($s5) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C27B8u;
            goto label_3c27b8;
        }
    }
    ctx->pc = 0x3C2784u;
label_3c2784:
    // 0x3c2784: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c2784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c2788:
    // 0x3c2788: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_3c278c:
    if (ctx->pc == 0x3C278Cu) {
        ctx->pc = 0x3C278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2788u;
        // 0x3c278c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2790u;
        goto label_3c2790;
    }
    ctx->pc = 0x3C2788u;
    {
        const bool branch_taken_0x3c2788 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2788u;
        // 0x3c278c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2788) {
            ctx->pc = 0x3C27B4u;
            goto label_3c27b4;
        }
    }
    ctx->pc = 0x3C2790u;
label_3c2790:
    // 0x3c2790: 0x96a600d8  lhu         $a2, 0xD8($s5)
    ctx->pc = 0x3c2790u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 216)));
label_3c2794:
    // 0x3c2794: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3c2794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3c2798:
    // 0x3c2798: 0x26a70010  addiu       $a3, $s5, 0x10
    ctx->pc = 0x3c2798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_3c279c:
    // 0x3c279c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c279cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c27a0:
    // 0x3c27a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c27a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c27a4:
    // 0x3c27a4: 0xc04420c  jal         func_110830
label_3c27a8:
    if (ctx->pc == 0x3C27A8u) {
        ctx->pc = 0x3C27A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C27A4u;
        // 0x3c27a8: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C27ACu;
        goto label_3c27ac;
    }
    ctx->pc = 0x3C27A4u;
    SET_GPR_U32(ctx, 31, 0x3C27ACu);
    ctx->pc = 0x3C27A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C27A4u;
    // 0x3c27a8: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x3C27A4u, 0x3C27ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C27ACu;
label_3c27ac:
    // 0x3c27ac: 0x10000099  b           . + 4 + (0x99 << 2)
label_3c27b0:
    if (ctx->pc == 0x3C27B0u) {
        ctx->pc = 0x3C27B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C27ACu;
        // 0x3c27b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C27B4u;
        goto label_3c27b4;
    }
    ctx->pc = 0x3C27ACu;
    {
        const bool branch_taken_0x3c27ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C27B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C27ACu;
        // 0x3c27b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c27ac) {
            ctx->pc = 0x3C2A14u;
            goto label_3c2a14;
        }
    }
    ctx->pc = 0x3C27B4u;
label_3c27b4:
    // 0x3c27b4: 0x7aa300a0  lq          $v1, 0xA0($s5)
    ctx->pc = 0x3c27b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 160)));
label_3c27b8:
    // 0x3c27b8: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x3c27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_3c27bc:
    // 0x3c27bc: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3c27bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_3c27c0:
    // 0x3c27c0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3c27c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3c27c4:
    // 0x3c27c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3c27c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c27c8:
    // 0x3c27c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c27c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3c27cc:
    // 0x3c27cc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3c27ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3c27d0:
    // 0x3c27d0: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x3c27d0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_3c27d4:
    // 0x3c27d4: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x3c27d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3c27d8:
    // 0x3c27d8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3c27d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c27dc:
    // 0x3c27dc: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x3c27dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3c27e0:
    // 0x3c27e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c27e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c27e4:
    // 0x3c27e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c27e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c27e8:
    // 0x3c27e8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3c27e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c27ec:
    // 0x3c27ec: 0xaea50054  sw          $a1, 0x54($s5)
    ctx->pc = 0x3c27ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 5));
label_3c27f0:
    // 0x3c27f0: 0x45000030  bc1f        . + 4 + (0x30 << 2)
label_3c27f4:
    if (ctx->pc == 0x3C27F4u) {
        ctx->pc = 0x3C27F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C27F0u;
        // 0x3c27f4: 0xe7a1001c  swc1        $f1, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C27F8u;
        goto label_3c27f8;
    }
    ctx->pc = 0x3C27F0u;
    {
        const bool branch_taken_0x3c27f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C27F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C27F0u;
        // 0x3c27f4: 0xe7a1001c  swc1        $f1, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c27f0) {
            ctx->pc = 0x3C28B4u;
            goto label_3c28b4;
        }
    }
    ctx->pc = 0x3C27F8u;
label_3c27f8:
    // 0x3c27f8: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x3c27f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
label_3c27fc:
    // 0x3c27fc: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x3c27fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_3c2800:
    // 0x3c2800: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c2800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3c2804:
    // 0x3c2804: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3c2804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c2808:
    // 0x3c2808: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3c2808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_3c280c:
    // 0x3c280c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c280cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3c2810:
    // 0x3c2810: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x3c2810u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_3c2814:
    // 0x3c2814: 0x8ec30024  lw          $v1, 0x24($s6)
    ctx->pc = 0x3c2814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_3c2818:
    // 0x3c2818: 0x54640027  bnel        $v1, $a0, . + 4 + (0x27 << 2)
label_3c281c:
    if (ctx->pc == 0x3C281Cu) {
        ctx->pc = 0x3C281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2818u;
        // 0x3c281c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2820u;
        goto label_3c2820;
    }
    ctx->pc = 0x3C2818u;
    {
        const bool branch_taken_0x3c2818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3c2818) {
            ctx->pc = 0x3C281Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2818u;
            // 0x3c281c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C28B8u;
            goto label_3c28b8;
        }
    }
    ctx->pc = 0x3C2820u;
label_3c2820:
    // 0x3c2820: 0x7aa20010  lq          $v0, 0x10($s5)
    ctx->pc = 0x3c2820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_3c2824:
    // 0x3c2824: 0x26f1b8b8  addiu       $s1, $s7, -0x4748
    ctx->pc = 0x3c2824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949048));
label_3c2828:
    // 0x3c2828: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3c2828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3c282c:
    // 0x3c282c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c282cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c2830:
    // 0x3c2830: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c2830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c2834:
    // 0x3c2834: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c2834u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c2838:
    // 0x3c2838: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x3c2838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
label_3c283c:
    // 0x3c283c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x3c283cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_3c2840:
    // 0x3c2840: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c2840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c2844:
    // 0x3c2844: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x3c2844u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c2848:
    // 0x3c2848: 0x27b30430  addiu       $s3, $sp, 0x430
    ctx->pc = 0x3c2848u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3c284c:
    // 0x3c284c: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3c284cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3c2850:
    // 0x3c2850: 0x26102cf0  addiu       $s0, $s0, 0x2CF0
    ctx->pc = 0x3c2850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11504));
label_3c2854:
    // 0x3c2854: 0xc0cd518  jal         func_335460
label_3c2858:
    if (ctx->pc == 0x3C2858u) {
        ctx->pc = 0x3C2858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2854u;
        // 0x3c2858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C285Cu;
        goto label_3c285c;
    }
    ctx->pc = 0x3C2854u;
    SET_GPR_U32(ctx, 31, 0x3C285Cu);
    ctx->pc = 0x3C2858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2854u;
    // 0x3c2858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C2854u, 0x3C285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C285Cu;
label_3c285c:
    // 0x3c285c: 0x27b20440  addiu       $s2, $sp, 0x440
    ctx->pc = 0x3c285cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c2860:
    // 0x3c2860: 0xe7a00440  swc1        $f0, 0x440($sp)
    ctx->pc = 0x3c2860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3c2864:
    // 0x3c2864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c2864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c2868:
    // 0x3c2868: 0xc0cd4ee  jal         func_3353B8
label_3c286c:
    if (ctx->pc == 0x3C286Cu) {
        ctx->pc = 0x3C286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2868u;
        // 0x3c286c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2870u;
        goto label_3c2870;
    }
    ctx->pc = 0x3C2868u;
    SET_GPR_U32(ctx, 31, 0x3C2870u);
    ctx->pc = 0x3C286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2868u;
    // 0x3c286c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C2868u, 0x3C2870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2870u;
label_3c2870:
    // 0x3c2870: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x3c2870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_3c2874:
    // 0x3c2874: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c2874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c2878:
    // 0x3c2878: 0xafa20450  sw          $v0, 0x450($sp)
    ctx->pc = 0x3c2878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 2));
label_3c287c:
    // 0x3c287c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c287cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c2880:
    // 0x3c2880: 0x27a90470  addiu       $t1, $sp, 0x470
    ctx->pc = 0x3c2880u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c2884:
    // 0x3c2884: 0x27aa0480  addiu       $t2, $sp, 0x480
    ctx->pc = 0x3c2884u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c2888:
    // 0x3c2888: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x3c2888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c288c:
    // 0x3c288c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c288cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c2890:
    // 0x3c2890: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3c2890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3c2894:
    // 0x3c2894: 0x27a80460  addiu       $t0, $sp, 0x460
    ctx->pc = 0x3c2894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c2898:
    // 0x3c2898: 0xafa00470  sw          $zero, 0x470($sp)
    ctx->pc = 0x3c2898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
label_3c289c:
    // 0x3c289c: 0xafa20460  sw          $v0, 0x460($sp)
    ctx->pc = 0x3c289cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 2));
label_3c28a0:
    // 0x3c28a0: 0xc0ea040  jal         func_3A8100
label_3c28a4:
    if (ctx->pc == 0x3C28A4u) {
        ctx->pc = 0x3C28A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28A0u;
        // 0x3c28a4: 0xafa00480  sw          $zero, 0x480($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C28A8u;
        goto label_3c28a8;
    }
    ctx->pc = 0x3C28A0u;
    SET_GPR_U32(ctx, 31, 0x3C28A8u);
    ctx->pc = 0x3C28A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C28A0u;
    // 0x3c28a4: 0xafa00480  sw          $zero, 0x480($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3C28A0u, 0x3C28A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C28A8u;
label_3c28a8:
    // 0x3c28a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c28a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c28ac:
    // 0x3c28ac: 0xc0f15bc  jal         func_3C56F0
label_3c28b0:
    if (ctx->pc == 0x3C28B0u) {
        ctx->pc = 0x3C28B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28ACu;
        // 0x3c28b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C28B4u;
        goto label_3c28b4;
    }
    ctx->pc = 0x3C28ACu;
    SET_GPR_U32(ctx, 31, 0x3C28B4u);
    ctx->pc = 0x3C28B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C28ACu;
    // 0x3c28b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C28ACu, 0x3C28B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C28B4u;
label_3c28b4:
    // 0x3c28b4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3c28b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3c28b8:
    // 0x3c28b8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c28b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3c28bc:
    // 0x3c28bc: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3c28bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3c28c0:
    // 0x3c28c0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3c28c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3c28c4:
    // 0x3c28c4: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3c28c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3c28c8:
    // 0x3c28c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c28c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c28cc:
    // 0x3c28cc: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3c28ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3c28d0:
    // 0x3c28d0: 0x60f809  jalr        $v1
label_3c28d4:
    if (ctx->pc == 0x3C28D4u) {
        ctx->pc = 0x3C28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28D0u;
        // 0x3c28d4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C28D8u;
        goto label_3c28d8;
    }
    ctx->pc = 0x3C28D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C28D8u);
        ctx->pc = 0x3C28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28D0u;
        // 0x3c28d4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C28D0u, 0x3C28D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C28D8u;
label_3c28d8:
    // 0x3c28d8: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3c28d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3c28dc:
    // 0x3c28dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c28dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c28e0:
    // 0x3c28e0: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x3c28e0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
label_3c28e4:
    // 0x3c28e4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3c28e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3c28e8:
    // 0x3c28e8: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3c28e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3c28ec:
    // 0x3c28ec: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x3c28ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3c28f0:
    // 0x3c28f0: 0x40f809  jalr        $v0
label_3c28f4:
    if (ctx->pc == 0x3C28F4u) {
        ctx->pc = 0x3C28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28F0u;
        // 0x3c28f4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C28F8u;
        goto label_3c28f8;
    }
    ctx->pc = 0x3C28F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C28F8u);
        ctx->pc = 0x3C28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28F0u;
        // 0x3c28f4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C28F0u, 0x3C28F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C28F8u;
label_3c28f8:
    // 0x3c28f8: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x3c28f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3c28fc:
    // 0x3c28fc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3c28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_3c2900:
    // 0x3c2900: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c2900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3c2904:
    // 0x3c2904: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3c2904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3c2908:
    // 0x3c2908: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3c2908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3c290c:
    // 0x3c290c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c290cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c2910:
    // 0x3c2910: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3c2910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3c2914:
    // 0x3c2914: 0x26e4b8b8  addiu       $a0, $s7, -0x4748
    ctx->pc = 0x3c2914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949048));
label_3c2918:
    // 0x3c2918: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x3c2918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_3c291c:
    // 0x3c291c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3c291cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3c2920:
    // 0x3c2920: 0xc0cd508  jal         func_335420
label_3c2924:
    if (ctx->pc == 0x3C2924u) {
        ctx->pc = 0x3C2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2920u;
        // 0x3c2924: 0xaea30054  sw          $v1, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2928u;
        goto label_3c2928;
    }
    ctx->pc = 0x3C2920u;
    SET_GPR_U32(ctx, 31, 0x3C2928u);
    ctx->pc = 0x3C2924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2920u;
    // 0x3c2924: 0xaea30054  sw          $v1, 0x54($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C2920u, 0x3C2928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2928u;
label_3c2928:
    // 0x3c2928: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c2928u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c292c:
    // 0x3c292c: 0xe7b50034  swc1        $f21, 0x34($sp)
    ctx->pc = 0x3c292cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3c2930:
    // 0x3c2930: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x3c2930u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3c2934:
    // 0x3c2934: 0xc12e310  jal         func_4B8C40
label_3c2938:
    if (ctx->pc == 0x3C2938u) {
        ctx->pc = 0x3C2938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2934u;
        // 0x3c2938: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C293Cu;
        goto label_3c293c;
    }
    ctx->pc = 0x3C2934u;
    SET_GPR_U32(ctx, 31, 0x3C293Cu);
    ctx->pc = 0x3C2938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2934u;
    // 0x3c2938: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3C2934u, 0x3C293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C293Cu;
label_3c293c:
    // 0x3c293c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3c293cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3c2940:
    // 0x3c2940: 0xc12e29c  jal         func_4B8A70
label_3c2944:
    if (ctx->pc == 0x3C2944u) {
        ctx->pc = 0x3C2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2940u;
        // 0x3c2944: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2948u;
        goto label_3c2948;
    }
    ctx->pc = 0x3C2940u;
    SET_GPR_U32(ctx, 31, 0x3C2948u);
    ctx->pc = 0x3C2944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2940u;
    // 0x3c2944: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3C2940u, 0x3C2948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2948u;
label_3c2948:
    // 0x3c2948: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3c2948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3c294c:
    // 0x3c294c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3c294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c2950:
    // 0x3c2950: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c2950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c2954:
    // 0x3c2954: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c2954u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c2958:
    // 0x3c2958: 0xc0cddf0  jal         func_3377C0
label_3c295c:
    if (ctx->pc == 0x3C295Cu) {
        ctx->pc = 0x3C295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2958u;
        // 0x3c295c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2960u;
        goto label_3c2960;
    }
    ctx->pc = 0x3C2958u;
    SET_GPR_U32(ctx, 31, 0x3C2960u);
    ctx->pc = 0x3C295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2958u;
    // 0x3c295c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3377C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3377C0u, 0x3C2958u, 0x3C2960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2960u;
label_3c2960:
    // 0x3c2960: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3c2960u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c2964:
    // 0x3c2964: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3c2964u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c2968:
    // 0x3c2968: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3c2968u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c296c:
    // 0x3c296c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3c296cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c2970:
    // 0x3c2970: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3c2970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c2974:
    // 0x3c2974: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3c2974u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c2978:
    // 0x3c2978: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3c2978u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c297c:
    // 0x3c297c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3c297cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c2980:
    // 0x3c2980: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3c2980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c2984:
    // 0x3c2984: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3c2984u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c2988:
    // 0x3c2988: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3c2988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c298c:
    // 0x3c298c: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3c298cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c2990:
    // 0x3c2990: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3c2990u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c2994:
    // 0x3c2994: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3c2994u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3c2998:
    // 0x3c2998: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3c2998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3c299c:
    // 0x3c299c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3c299cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c29a0:
    // 0x3c29a0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3c29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3c29a4:
    // 0x3c29a4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3c29a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3c29a8:
    // 0x3c29a8: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x3c29a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3c29ac:
    // 0x3c29ac: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x3c29acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_3c29b0:
    // 0x3c29b0: 0x60f809  jalr        $v1
label_3c29b4:
    if (ctx->pc == 0x3C29B4u) {
        ctx->pc = 0x3C29B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29B0u;
        // 0x3c29b4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C29B8u;
        goto label_3c29b8;
    }
    ctx->pc = 0x3C29B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C29B8u);
        ctx->pc = 0x3C29B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29B0u;
        // 0x3c29b4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C29B0u, 0x3C29B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C29B8u;
label_3c29b8:
    // 0x3c29b8: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x3c29b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3c29bc:
    // 0x3c29bc: 0x8ec3001c  lw          $v1, 0x1C($s6)
    ctx->pc = 0x3c29bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_3c29c0:
    // 0x3c29c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c29c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c29c4:
    // 0x3c29c4: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3c29c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c29c8:
    // 0x3c29c8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_3c29cc:
    if (ctx->pc == 0x3C29CCu) {
        ctx->pc = 0x3C29CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29C8u;
        // 0x3c29cc: 0xaec20018  sw          $v0, 0x18($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C29D0u;
        goto label_3c29d0;
    }
    ctx->pc = 0x3C29C8u;
    {
        const bool branch_taken_0x3c29c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C29CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29C8u;
        // 0x3c29cc: 0xaec20018  sw          $v0, 0x18($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c29c8) {
            ctx->pc = 0x3C2A04u;
            goto label_3c2a04;
        }
    }
    ctx->pc = 0x3C29D0u;
label_3c29d0:
    // 0x3c29d0: 0x8ea200b0  lw          $v0, 0xB0($s5)
    ctx->pc = 0x3c29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
label_3c29d4:
    // 0x3c29d4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3c29d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3c29d8:
    // 0x3c29d8: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3c29d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3c29dc:
    // 0x3c29dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c29dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3c29e0:
    // 0x3c29e0: 0xaea200b4  sw          $v0, 0xB4($s5)
    ctx->pc = 0x3c29e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 2));
label_3c29e4:
    // 0x3c29e4: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x3c29e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c29e8:
    // 0x3c29e8: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
label_3c29ec:
    if (ctx->pc == 0x3C29ECu) {
        ctx->pc = 0x3C29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29E8u;
        // 0x3c29ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C29F0u;
        goto label_3c29f0;
    }
    ctx->pc = 0x3C29E8u;
    {
        const bool branch_taken_0x3c29e8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3C29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29E8u;
        // 0x3c29ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c29e8) {
            ctx->pc = 0x3C2A14u;
            goto label_3c2a14;
        }
    }
    ctx->pc = 0x3C29F0u;
label_3c29f0:
    // 0x3c29f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c29f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c29f4:
    // 0x3c29f4: 0xc0e858c  jal         func_3A1630
label_3c29f8:
    if (ctx->pc == 0x3C29F8u) {
        ctx->pc = 0x3C29F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29F4u;
        // 0x3c29f8: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C29FCu;
        goto label_3c29fc;
    }
    ctx->pc = 0x3C29F4u;
    SET_GPR_U32(ctx, 31, 0x3C29FCu);
    ctx->pc = 0x3C29F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C29F4u;
    // 0x3c29f8: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C29F4u, 0x3C29FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C29FCu;
label_3c29fc:
    // 0x3c29fc: 0x10000005  b           . + 4 + (0x5 << 2)
label_3c2a00:
    if (ctx->pc == 0x3C2A00u) {
        ctx->pc = 0x3C2A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29FCu;
        // 0x3c2a00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2A04u;
        goto label_3c2a04;
    }
    ctx->pc = 0x3C29FCu;
    {
        const bool branch_taken_0x3c29fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29FCu;
        // 0x3c2a00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c29fc) {
            ctx->pc = 0x3C2A14u;
            goto label_3c2a14;
        }
    }
    ctx->pc = 0x3C2A04u;
label_3c2a04:
    // 0x3c2a04: 0x8ec50014  lw          $a1, 0x14($s6)
    ctx->pc = 0x3c2a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_3c2a08:
    // 0x3c2a08: 0xc0e858c  jal         func_3A1630
label_3c2a0c:
    if (ctx->pc == 0x3C2A0Cu) {
        ctx->pc = 0x3C2A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A08u;
        // 0x3c2a0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2A10u;
        goto label_3c2a10;
    }
    ctx->pc = 0x3C2A08u;
    SET_GPR_U32(ctx, 31, 0x3C2A10u);
    ctx->pc = 0x3C2A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2A08u;
    // 0x3c2a0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C2A08u, 0x3C2A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2A10u;
label_3c2a10:
    // 0x3c2a10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c2a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c2a14:
    // 0x3c2a14: 0x7bb00510  lq          $s0, 0x510($sp)
    ctx->pc = 0x3c2a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3c2a18:
    // 0x3c2a18: 0x7bb10500  lq          $s1, 0x500($sp)
    ctx->pc = 0x3c2a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3c2a1c:
    // 0x3c2a1c: 0x7bb204f0  lq          $s2, 0x4F0($sp)
    ctx->pc = 0x3c2a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3c2a20:
    // 0x3c2a20: 0x7bb304e0  lq          $s3, 0x4E0($sp)
    ctx->pc = 0x3c2a20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3c2a24:
    // 0x3c2a24: 0x7bb404d0  lq          $s4, 0x4D0($sp)
    ctx->pc = 0x3c2a24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3c2a28:
    // 0x3c2a28: 0x7bb504c0  lq          $s5, 0x4C0($sp)
    ctx->pc = 0x3c2a28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3c2a2c:
    // 0x3c2a2c: 0x7bb604b0  lq          $s6, 0x4B0($sp)
    ctx->pc = 0x3c2a2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c2a30:
    // 0x3c2a30: 0x7bb704a0  lq          $s7, 0x4A0($sp)
    ctx->pc = 0x3c2a30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c2a34:
    // 0x3c2a34: 0xdfbf0490  ld          $ra, 0x490($sp)
    ctx->pc = 0x3c2a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c2a38:
    // 0x3c2a38: 0xc7b50528  lwc1        $f21, 0x528($sp)
    ctx->pc = 0x3c2a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c2a3c:
    // 0x3c2a3c: 0xc7b40520  lwc1        $f20, 0x520($sp)
    ctx->pc = 0x3c2a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c2a40:
    // 0x3c2a40: 0x3e00008  jr          $ra
label_3c2a44:
    if (ctx->pc == 0x3C2A44u) {
        ctx->pc = 0x3C2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A40u;
        // 0x3c2a44: 0x27bd0530  addiu       $sp, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2A48u;
        goto label_fallthrough_0x3c2a40;
    }
    ctx->pc = 0x3C2A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A40u;
        // 0x3c2a44: 0x27bd0530  addiu       $sp, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c2a40:
    ctx->pc = 0x3C2A48u;
}
