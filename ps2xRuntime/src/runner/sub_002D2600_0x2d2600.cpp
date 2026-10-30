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

// Function: sub_002D2600
// Address: 0x2d2600 - 0x2d2df8
void sub_002D2600_0x2d2600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2600_0x2d2600");
#endif

    switch (ctx->pc) {
        case 0x2d2600u: goto label_2d2600;
        case 0x2d2604u: goto label_2d2604;
        case 0x2d2608u: goto label_2d2608;
        case 0x2d260cu: goto label_2d260c;
        case 0x2d2610u: goto label_2d2610;
        case 0x2d2614u: goto label_2d2614;
        case 0x2d2618u: goto label_2d2618;
        case 0x2d261cu: goto label_2d261c;
        case 0x2d2620u: goto label_2d2620;
        case 0x2d2624u: goto label_2d2624;
        case 0x2d2628u: goto label_2d2628;
        case 0x2d262cu: goto label_2d262c;
        case 0x2d2630u: goto label_2d2630;
        case 0x2d2634u: goto label_2d2634;
        case 0x2d2638u: goto label_2d2638;
        case 0x2d263cu: goto label_2d263c;
        case 0x2d2640u: goto label_2d2640;
        case 0x2d2644u: goto label_2d2644;
        case 0x2d2648u: goto label_2d2648;
        case 0x2d264cu: goto label_2d264c;
        case 0x2d2650u: goto label_2d2650;
        case 0x2d2654u: goto label_2d2654;
        case 0x2d2658u: goto label_2d2658;
        case 0x2d265cu: goto label_2d265c;
        case 0x2d2660u: goto label_2d2660;
        case 0x2d2664u: goto label_2d2664;
        case 0x2d2668u: goto label_2d2668;
        case 0x2d266cu: goto label_2d266c;
        case 0x2d2670u: goto label_2d2670;
        case 0x2d2674u: goto label_2d2674;
        case 0x2d2678u: goto label_2d2678;
        case 0x2d267cu: goto label_2d267c;
        case 0x2d2680u: goto label_2d2680;
        case 0x2d2684u: goto label_2d2684;
        case 0x2d2688u: goto label_2d2688;
        case 0x2d268cu: goto label_2d268c;
        case 0x2d2690u: goto label_2d2690;
        case 0x2d2694u: goto label_2d2694;
        case 0x2d2698u: goto label_2d2698;
        case 0x2d269cu: goto label_2d269c;
        case 0x2d26a0u: goto label_2d26a0;
        case 0x2d26a4u: goto label_2d26a4;
        case 0x2d26a8u: goto label_2d26a8;
        case 0x2d26acu: goto label_2d26ac;
        case 0x2d26b0u: goto label_2d26b0;
        case 0x2d26b4u: goto label_2d26b4;
        case 0x2d26b8u: goto label_2d26b8;
        case 0x2d26bcu: goto label_2d26bc;
        case 0x2d26c0u: goto label_2d26c0;
        case 0x2d26c4u: goto label_2d26c4;
        case 0x2d26c8u: goto label_2d26c8;
        case 0x2d26ccu: goto label_2d26cc;
        case 0x2d26d0u: goto label_2d26d0;
        case 0x2d26d4u: goto label_2d26d4;
        case 0x2d26d8u: goto label_2d26d8;
        case 0x2d26dcu: goto label_2d26dc;
        case 0x2d26e0u: goto label_2d26e0;
        case 0x2d26e4u: goto label_2d26e4;
        case 0x2d26e8u: goto label_2d26e8;
        case 0x2d26ecu: goto label_2d26ec;
        case 0x2d26f0u: goto label_2d26f0;
        case 0x2d26f4u: goto label_2d26f4;
        case 0x2d26f8u: goto label_2d26f8;
        case 0x2d26fcu: goto label_2d26fc;
        case 0x2d2700u: goto label_2d2700;
        case 0x2d2704u: goto label_2d2704;
        case 0x2d2708u: goto label_2d2708;
        case 0x2d270cu: goto label_2d270c;
        case 0x2d2710u: goto label_2d2710;
        case 0x2d2714u: goto label_2d2714;
        case 0x2d2718u: goto label_2d2718;
        case 0x2d271cu: goto label_2d271c;
        case 0x2d2720u: goto label_2d2720;
        case 0x2d2724u: goto label_2d2724;
        case 0x2d2728u: goto label_2d2728;
        case 0x2d272cu: goto label_2d272c;
        case 0x2d2730u: goto label_2d2730;
        case 0x2d2734u: goto label_2d2734;
        case 0x2d2738u: goto label_2d2738;
        case 0x2d273cu: goto label_2d273c;
        case 0x2d2740u: goto label_2d2740;
        case 0x2d2744u: goto label_2d2744;
        case 0x2d2748u: goto label_2d2748;
        case 0x2d274cu: goto label_2d274c;
        case 0x2d2750u: goto label_2d2750;
        case 0x2d2754u: goto label_2d2754;
        case 0x2d2758u: goto label_2d2758;
        case 0x2d275cu: goto label_2d275c;
        case 0x2d2760u: goto label_2d2760;
        case 0x2d2764u: goto label_2d2764;
        case 0x2d2768u: goto label_2d2768;
        case 0x2d276cu: goto label_2d276c;
        case 0x2d2770u: goto label_2d2770;
        case 0x2d2774u: goto label_2d2774;
        case 0x2d2778u: goto label_2d2778;
        case 0x2d277cu: goto label_2d277c;
        case 0x2d2780u: goto label_2d2780;
        case 0x2d2784u: goto label_2d2784;
        case 0x2d2788u: goto label_2d2788;
        case 0x2d278cu: goto label_2d278c;
        case 0x2d2790u: goto label_2d2790;
        case 0x2d2794u: goto label_2d2794;
        case 0x2d2798u: goto label_2d2798;
        case 0x2d279cu: goto label_2d279c;
        case 0x2d27a0u: goto label_2d27a0;
        case 0x2d27a4u: goto label_2d27a4;
        case 0x2d27a8u: goto label_2d27a8;
        case 0x2d27acu: goto label_2d27ac;
        case 0x2d27b0u: goto label_2d27b0;
        case 0x2d27b4u: goto label_2d27b4;
        case 0x2d27b8u: goto label_2d27b8;
        case 0x2d27bcu: goto label_2d27bc;
        case 0x2d27c0u: goto label_2d27c0;
        case 0x2d27c4u: goto label_2d27c4;
        case 0x2d27c8u: goto label_2d27c8;
        case 0x2d27ccu: goto label_2d27cc;
        case 0x2d27d0u: goto label_2d27d0;
        case 0x2d27d4u: goto label_2d27d4;
        case 0x2d27d8u: goto label_2d27d8;
        case 0x2d27dcu: goto label_2d27dc;
        case 0x2d27e0u: goto label_2d27e0;
        case 0x2d27e4u: goto label_2d27e4;
        case 0x2d27e8u: goto label_2d27e8;
        case 0x2d27ecu: goto label_2d27ec;
        case 0x2d27f0u: goto label_2d27f0;
        case 0x2d27f4u: goto label_2d27f4;
        case 0x2d27f8u: goto label_2d27f8;
        case 0x2d27fcu: goto label_2d27fc;
        case 0x2d2800u: goto label_2d2800;
        case 0x2d2804u: goto label_2d2804;
        case 0x2d2808u: goto label_2d2808;
        case 0x2d280cu: goto label_2d280c;
        case 0x2d2810u: goto label_2d2810;
        case 0x2d2814u: goto label_2d2814;
        case 0x2d2818u: goto label_2d2818;
        case 0x2d281cu: goto label_2d281c;
        case 0x2d2820u: goto label_2d2820;
        case 0x2d2824u: goto label_2d2824;
        case 0x2d2828u: goto label_2d2828;
        case 0x2d282cu: goto label_2d282c;
        case 0x2d2830u: goto label_2d2830;
        case 0x2d2834u: goto label_2d2834;
        case 0x2d2838u: goto label_2d2838;
        case 0x2d283cu: goto label_2d283c;
        case 0x2d2840u: goto label_2d2840;
        case 0x2d2844u: goto label_2d2844;
        case 0x2d2848u: goto label_2d2848;
        case 0x2d284cu: goto label_2d284c;
        case 0x2d2850u: goto label_2d2850;
        case 0x2d2854u: goto label_2d2854;
        case 0x2d2858u: goto label_2d2858;
        case 0x2d285cu: goto label_2d285c;
        case 0x2d2860u: goto label_2d2860;
        case 0x2d2864u: goto label_2d2864;
        case 0x2d2868u: goto label_2d2868;
        case 0x2d286cu: goto label_2d286c;
        case 0x2d2870u: goto label_2d2870;
        case 0x2d2874u: goto label_2d2874;
        case 0x2d2878u: goto label_2d2878;
        case 0x2d287cu: goto label_2d287c;
        case 0x2d2880u: goto label_2d2880;
        case 0x2d2884u: goto label_2d2884;
        case 0x2d2888u: goto label_2d2888;
        case 0x2d288cu: goto label_2d288c;
        case 0x2d2890u: goto label_2d2890;
        case 0x2d2894u: goto label_2d2894;
        case 0x2d2898u: goto label_2d2898;
        case 0x2d289cu: goto label_2d289c;
        case 0x2d28a0u: goto label_2d28a0;
        case 0x2d28a4u: goto label_2d28a4;
        case 0x2d28a8u: goto label_2d28a8;
        case 0x2d28acu: goto label_2d28ac;
        case 0x2d28b0u: goto label_2d28b0;
        case 0x2d28b4u: goto label_2d28b4;
        case 0x2d28b8u: goto label_2d28b8;
        case 0x2d28bcu: goto label_2d28bc;
        case 0x2d28c0u: goto label_2d28c0;
        case 0x2d28c4u: goto label_2d28c4;
        case 0x2d28c8u: goto label_2d28c8;
        case 0x2d28ccu: goto label_2d28cc;
        case 0x2d28d0u: goto label_2d28d0;
        case 0x2d28d4u: goto label_2d28d4;
        case 0x2d28d8u: goto label_2d28d8;
        case 0x2d28dcu: goto label_2d28dc;
        case 0x2d28e0u: goto label_2d28e0;
        case 0x2d28e4u: goto label_2d28e4;
        case 0x2d28e8u: goto label_2d28e8;
        case 0x2d28ecu: goto label_2d28ec;
        case 0x2d28f0u: goto label_2d28f0;
        case 0x2d28f4u: goto label_2d28f4;
        case 0x2d28f8u: goto label_2d28f8;
        case 0x2d28fcu: goto label_2d28fc;
        case 0x2d2900u: goto label_2d2900;
        case 0x2d2904u: goto label_2d2904;
        case 0x2d2908u: goto label_2d2908;
        case 0x2d290cu: goto label_2d290c;
        case 0x2d2910u: goto label_2d2910;
        case 0x2d2914u: goto label_2d2914;
        case 0x2d2918u: goto label_2d2918;
        case 0x2d291cu: goto label_2d291c;
        case 0x2d2920u: goto label_2d2920;
        case 0x2d2924u: goto label_2d2924;
        case 0x2d2928u: goto label_2d2928;
        case 0x2d292cu: goto label_2d292c;
        case 0x2d2930u: goto label_2d2930;
        case 0x2d2934u: goto label_2d2934;
        case 0x2d2938u: goto label_2d2938;
        case 0x2d293cu: goto label_2d293c;
        case 0x2d2940u: goto label_2d2940;
        case 0x2d2944u: goto label_2d2944;
        case 0x2d2948u: goto label_2d2948;
        case 0x2d294cu: goto label_2d294c;
        case 0x2d2950u: goto label_2d2950;
        case 0x2d2954u: goto label_2d2954;
        case 0x2d2958u: goto label_2d2958;
        case 0x2d295cu: goto label_2d295c;
        case 0x2d2960u: goto label_2d2960;
        case 0x2d2964u: goto label_2d2964;
        case 0x2d2968u: goto label_2d2968;
        case 0x2d296cu: goto label_2d296c;
        case 0x2d2970u: goto label_2d2970;
        case 0x2d2974u: goto label_2d2974;
        case 0x2d2978u: goto label_2d2978;
        case 0x2d297cu: goto label_2d297c;
        case 0x2d2980u: goto label_2d2980;
        case 0x2d2984u: goto label_2d2984;
        case 0x2d2988u: goto label_2d2988;
        case 0x2d298cu: goto label_2d298c;
        case 0x2d2990u: goto label_2d2990;
        case 0x2d2994u: goto label_2d2994;
        case 0x2d2998u: goto label_2d2998;
        case 0x2d299cu: goto label_2d299c;
        case 0x2d29a0u: goto label_2d29a0;
        case 0x2d29a4u: goto label_2d29a4;
        case 0x2d29a8u: goto label_2d29a8;
        case 0x2d29acu: goto label_2d29ac;
        case 0x2d29b0u: goto label_2d29b0;
        case 0x2d29b4u: goto label_2d29b4;
        case 0x2d29b8u: goto label_2d29b8;
        case 0x2d29bcu: goto label_2d29bc;
        case 0x2d29c0u: goto label_2d29c0;
        case 0x2d29c4u: goto label_2d29c4;
        case 0x2d29c8u: goto label_2d29c8;
        case 0x2d29ccu: goto label_2d29cc;
        case 0x2d29d0u: goto label_2d29d0;
        case 0x2d29d4u: goto label_2d29d4;
        case 0x2d29d8u: goto label_2d29d8;
        case 0x2d29dcu: goto label_2d29dc;
        case 0x2d29e0u: goto label_2d29e0;
        case 0x2d29e4u: goto label_2d29e4;
        case 0x2d29e8u: goto label_2d29e8;
        case 0x2d29ecu: goto label_2d29ec;
        case 0x2d29f0u: goto label_2d29f0;
        case 0x2d29f4u: goto label_2d29f4;
        case 0x2d29f8u: goto label_2d29f8;
        case 0x2d29fcu: goto label_2d29fc;
        case 0x2d2a00u: goto label_2d2a00;
        case 0x2d2a04u: goto label_2d2a04;
        case 0x2d2a08u: goto label_2d2a08;
        case 0x2d2a0cu: goto label_2d2a0c;
        case 0x2d2a10u: goto label_2d2a10;
        case 0x2d2a14u: goto label_2d2a14;
        case 0x2d2a18u: goto label_2d2a18;
        case 0x2d2a1cu: goto label_2d2a1c;
        case 0x2d2a20u: goto label_2d2a20;
        case 0x2d2a24u: goto label_2d2a24;
        case 0x2d2a28u: goto label_2d2a28;
        case 0x2d2a2cu: goto label_2d2a2c;
        case 0x2d2a30u: goto label_2d2a30;
        case 0x2d2a34u: goto label_2d2a34;
        case 0x2d2a38u: goto label_2d2a38;
        case 0x2d2a3cu: goto label_2d2a3c;
        case 0x2d2a40u: goto label_2d2a40;
        case 0x2d2a44u: goto label_2d2a44;
        case 0x2d2a48u: goto label_2d2a48;
        case 0x2d2a4cu: goto label_2d2a4c;
        case 0x2d2a50u: goto label_2d2a50;
        case 0x2d2a54u: goto label_2d2a54;
        case 0x2d2a58u: goto label_2d2a58;
        case 0x2d2a5cu: goto label_2d2a5c;
        case 0x2d2a60u: goto label_2d2a60;
        case 0x2d2a64u: goto label_2d2a64;
        case 0x2d2a68u: goto label_2d2a68;
        case 0x2d2a6cu: goto label_2d2a6c;
        case 0x2d2a70u: goto label_2d2a70;
        case 0x2d2a74u: goto label_2d2a74;
        case 0x2d2a78u: goto label_2d2a78;
        case 0x2d2a7cu: goto label_2d2a7c;
        case 0x2d2a80u: goto label_2d2a80;
        case 0x2d2a84u: goto label_2d2a84;
        case 0x2d2a88u: goto label_2d2a88;
        case 0x2d2a8cu: goto label_2d2a8c;
        case 0x2d2a90u: goto label_2d2a90;
        case 0x2d2a94u: goto label_2d2a94;
        case 0x2d2a98u: goto label_2d2a98;
        case 0x2d2a9cu: goto label_2d2a9c;
        case 0x2d2aa0u: goto label_2d2aa0;
        case 0x2d2aa4u: goto label_2d2aa4;
        case 0x2d2aa8u: goto label_2d2aa8;
        case 0x2d2aacu: goto label_2d2aac;
        case 0x2d2ab0u: goto label_2d2ab0;
        case 0x2d2ab4u: goto label_2d2ab4;
        case 0x2d2ab8u: goto label_2d2ab8;
        case 0x2d2abcu: goto label_2d2abc;
        case 0x2d2ac0u: goto label_2d2ac0;
        case 0x2d2ac4u: goto label_2d2ac4;
        case 0x2d2ac8u: goto label_2d2ac8;
        case 0x2d2accu: goto label_2d2acc;
        case 0x2d2ad0u: goto label_2d2ad0;
        case 0x2d2ad4u: goto label_2d2ad4;
        case 0x2d2ad8u: goto label_2d2ad8;
        case 0x2d2adcu: goto label_2d2adc;
        case 0x2d2ae0u: goto label_2d2ae0;
        case 0x2d2ae4u: goto label_2d2ae4;
        case 0x2d2ae8u: goto label_2d2ae8;
        case 0x2d2aecu: goto label_2d2aec;
        case 0x2d2af0u: goto label_2d2af0;
        case 0x2d2af4u: goto label_2d2af4;
        case 0x2d2af8u: goto label_2d2af8;
        case 0x2d2afcu: goto label_2d2afc;
        case 0x2d2b00u: goto label_2d2b00;
        case 0x2d2b04u: goto label_2d2b04;
        case 0x2d2b08u: goto label_2d2b08;
        case 0x2d2b0cu: goto label_2d2b0c;
        case 0x2d2b10u: goto label_2d2b10;
        case 0x2d2b14u: goto label_2d2b14;
        case 0x2d2b18u: goto label_2d2b18;
        case 0x2d2b1cu: goto label_2d2b1c;
        case 0x2d2b20u: goto label_2d2b20;
        case 0x2d2b24u: goto label_2d2b24;
        case 0x2d2b28u: goto label_2d2b28;
        case 0x2d2b2cu: goto label_2d2b2c;
        case 0x2d2b30u: goto label_2d2b30;
        case 0x2d2b34u: goto label_2d2b34;
        case 0x2d2b38u: goto label_2d2b38;
        case 0x2d2b3cu: goto label_2d2b3c;
        case 0x2d2b40u: goto label_2d2b40;
        case 0x2d2b44u: goto label_2d2b44;
        case 0x2d2b48u: goto label_2d2b48;
        case 0x2d2b4cu: goto label_2d2b4c;
        case 0x2d2b50u: goto label_2d2b50;
        case 0x2d2b54u: goto label_2d2b54;
        case 0x2d2b58u: goto label_2d2b58;
        case 0x2d2b5cu: goto label_2d2b5c;
        case 0x2d2b60u: goto label_2d2b60;
        case 0x2d2b64u: goto label_2d2b64;
        case 0x2d2b68u: goto label_2d2b68;
        case 0x2d2b6cu: goto label_2d2b6c;
        case 0x2d2b70u: goto label_2d2b70;
        case 0x2d2b74u: goto label_2d2b74;
        case 0x2d2b78u: goto label_2d2b78;
        case 0x2d2b7cu: goto label_2d2b7c;
        case 0x2d2b80u: goto label_2d2b80;
        case 0x2d2b84u: goto label_2d2b84;
        case 0x2d2b88u: goto label_2d2b88;
        case 0x2d2b8cu: goto label_2d2b8c;
        case 0x2d2b90u: goto label_2d2b90;
        case 0x2d2b94u: goto label_2d2b94;
        case 0x2d2b98u: goto label_2d2b98;
        case 0x2d2b9cu: goto label_2d2b9c;
        case 0x2d2ba0u: goto label_2d2ba0;
        case 0x2d2ba4u: goto label_2d2ba4;
        case 0x2d2ba8u: goto label_2d2ba8;
        case 0x2d2bacu: goto label_2d2bac;
        case 0x2d2bb0u: goto label_2d2bb0;
        case 0x2d2bb4u: goto label_2d2bb4;
        case 0x2d2bb8u: goto label_2d2bb8;
        case 0x2d2bbcu: goto label_2d2bbc;
        case 0x2d2bc0u: goto label_2d2bc0;
        case 0x2d2bc4u: goto label_2d2bc4;
        case 0x2d2bc8u: goto label_2d2bc8;
        case 0x2d2bccu: goto label_2d2bcc;
        case 0x2d2bd0u: goto label_2d2bd0;
        case 0x2d2bd4u: goto label_2d2bd4;
        case 0x2d2bd8u: goto label_2d2bd8;
        case 0x2d2bdcu: goto label_2d2bdc;
        case 0x2d2be0u: goto label_2d2be0;
        case 0x2d2be4u: goto label_2d2be4;
        case 0x2d2be8u: goto label_2d2be8;
        case 0x2d2becu: goto label_2d2bec;
        case 0x2d2bf0u: goto label_2d2bf0;
        case 0x2d2bf4u: goto label_2d2bf4;
        case 0x2d2bf8u: goto label_2d2bf8;
        case 0x2d2bfcu: goto label_2d2bfc;
        case 0x2d2c00u: goto label_2d2c00;
        case 0x2d2c04u: goto label_2d2c04;
        case 0x2d2c08u: goto label_2d2c08;
        case 0x2d2c0cu: goto label_2d2c0c;
        case 0x2d2c10u: goto label_2d2c10;
        case 0x2d2c14u: goto label_2d2c14;
        case 0x2d2c18u: goto label_2d2c18;
        case 0x2d2c1cu: goto label_2d2c1c;
        case 0x2d2c20u: goto label_2d2c20;
        case 0x2d2c24u: goto label_2d2c24;
        case 0x2d2c28u: goto label_2d2c28;
        case 0x2d2c2cu: goto label_2d2c2c;
        case 0x2d2c30u: goto label_2d2c30;
        case 0x2d2c34u: goto label_2d2c34;
        case 0x2d2c38u: goto label_2d2c38;
        case 0x2d2c3cu: goto label_2d2c3c;
        case 0x2d2c40u: goto label_2d2c40;
        case 0x2d2c44u: goto label_2d2c44;
        case 0x2d2c48u: goto label_2d2c48;
        case 0x2d2c4cu: goto label_2d2c4c;
        case 0x2d2c50u: goto label_2d2c50;
        case 0x2d2c54u: goto label_2d2c54;
        case 0x2d2c58u: goto label_2d2c58;
        case 0x2d2c5cu: goto label_2d2c5c;
        case 0x2d2c60u: goto label_2d2c60;
        case 0x2d2c64u: goto label_2d2c64;
        case 0x2d2c68u: goto label_2d2c68;
        case 0x2d2c6cu: goto label_2d2c6c;
        case 0x2d2c70u: goto label_2d2c70;
        case 0x2d2c74u: goto label_2d2c74;
        case 0x2d2c78u: goto label_2d2c78;
        case 0x2d2c7cu: goto label_2d2c7c;
        case 0x2d2c80u: goto label_2d2c80;
        case 0x2d2c84u: goto label_2d2c84;
        case 0x2d2c88u: goto label_2d2c88;
        case 0x2d2c8cu: goto label_2d2c8c;
        case 0x2d2c90u: goto label_2d2c90;
        case 0x2d2c94u: goto label_2d2c94;
        case 0x2d2c98u: goto label_2d2c98;
        case 0x2d2c9cu: goto label_2d2c9c;
        case 0x2d2ca0u: goto label_2d2ca0;
        case 0x2d2ca4u: goto label_2d2ca4;
        case 0x2d2ca8u: goto label_2d2ca8;
        case 0x2d2cacu: goto label_2d2cac;
        case 0x2d2cb0u: goto label_2d2cb0;
        case 0x2d2cb4u: goto label_2d2cb4;
        case 0x2d2cb8u: goto label_2d2cb8;
        case 0x2d2cbcu: goto label_2d2cbc;
        case 0x2d2cc0u: goto label_2d2cc0;
        case 0x2d2cc4u: goto label_2d2cc4;
        case 0x2d2cc8u: goto label_2d2cc8;
        case 0x2d2cccu: goto label_2d2ccc;
        case 0x2d2cd0u: goto label_2d2cd0;
        case 0x2d2cd4u: goto label_2d2cd4;
        case 0x2d2cd8u: goto label_2d2cd8;
        case 0x2d2cdcu: goto label_2d2cdc;
        case 0x2d2ce0u: goto label_2d2ce0;
        case 0x2d2ce4u: goto label_2d2ce4;
        case 0x2d2ce8u: goto label_2d2ce8;
        case 0x2d2cecu: goto label_2d2cec;
        case 0x2d2cf0u: goto label_2d2cf0;
        case 0x2d2cf4u: goto label_2d2cf4;
        case 0x2d2cf8u: goto label_2d2cf8;
        case 0x2d2cfcu: goto label_2d2cfc;
        case 0x2d2d00u: goto label_2d2d00;
        case 0x2d2d04u: goto label_2d2d04;
        case 0x2d2d08u: goto label_2d2d08;
        case 0x2d2d0cu: goto label_2d2d0c;
        case 0x2d2d10u: goto label_2d2d10;
        case 0x2d2d14u: goto label_2d2d14;
        case 0x2d2d18u: goto label_2d2d18;
        case 0x2d2d1cu: goto label_2d2d1c;
        case 0x2d2d20u: goto label_2d2d20;
        case 0x2d2d24u: goto label_2d2d24;
        case 0x2d2d28u: goto label_2d2d28;
        case 0x2d2d2cu: goto label_2d2d2c;
        case 0x2d2d30u: goto label_2d2d30;
        case 0x2d2d34u: goto label_2d2d34;
        case 0x2d2d38u: goto label_2d2d38;
        case 0x2d2d3cu: goto label_2d2d3c;
        case 0x2d2d40u: goto label_2d2d40;
        case 0x2d2d44u: goto label_2d2d44;
        case 0x2d2d48u: goto label_2d2d48;
        case 0x2d2d4cu: goto label_2d2d4c;
        case 0x2d2d50u: goto label_2d2d50;
        case 0x2d2d54u: goto label_2d2d54;
        case 0x2d2d58u: goto label_2d2d58;
        case 0x2d2d5cu: goto label_2d2d5c;
        case 0x2d2d60u: goto label_2d2d60;
        case 0x2d2d64u: goto label_2d2d64;
        case 0x2d2d68u: goto label_2d2d68;
        case 0x2d2d6cu: goto label_2d2d6c;
        case 0x2d2d70u: goto label_2d2d70;
        case 0x2d2d74u: goto label_2d2d74;
        case 0x2d2d78u: goto label_2d2d78;
        case 0x2d2d7cu: goto label_2d2d7c;
        case 0x2d2d80u: goto label_2d2d80;
        case 0x2d2d84u: goto label_2d2d84;
        case 0x2d2d88u: goto label_2d2d88;
        case 0x2d2d8cu: goto label_2d2d8c;
        case 0x2d2d90u: goto label_2d2d90;
        case 0x2d2d94u: goto label_2d2d94;
        case 0x2d2d98u: goto label_2d2d98;
        case 0x2d2d9cu: goto label_2d2d9c;
        case 0x2d2da0u: goto label_2d2da0;
        case 0x2d2da4u: goto label_2d2da4;
        case 0x2d2da8u: goto label_2d2da8;
        case 0x2d2dacu: goto label_2d2dac;
        case 0x2d2db0u: goto label_2d2db0;
        case 0x2d2db4u: goto label_2d2db4;
        case 0x2d2db8u: goto label_2d2db8;
        case 0x2d2dbcu: goto label_2d2dbc;
        case 0x2d2dc0u: goto label_2d2dc0;
        case 0x2d2dc4u: goto label_2d2dc4;
        case 0x2d2dc8u: goto label_2d2dc8;
        case 0x2d2dccu: goto label_2d2dcc;
        case 0x2d2dd0u: goto label_2d2dd0;
        case 0x2d2dd4u: goto label_2d2dd4;
        case 0x2d2dd8u: goto label_2d2dd8;
        case 0x2d2ddcu: goto label_2d2ddc;
        case 0x2d2de0u: goto label_2d2de0;
        case 0x2d2de4u: goto label_2d2de4;
        case 0x2d2de8u: goto label_2d2de8;
        case 0x2d2decu: goto label_2d2dec;
        case 0x2d2df0u: goto label_2d2df0;
        case 0x2d2df4u: goto label_2d2df4;
        default: break;
    }

    ctx->pc = 0x2d2600u;

label_2d2600:
    // 0x2d2600: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2d2600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_2d2604:
    // 0x2d2604: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2d2604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_2d2608:
    // 0x2d2608: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2d2608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_2d260c:
    // 0x2d260c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d260cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d2610:
    // 0x2d2610: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d2610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2d2614:
    // 0x2d2614: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2d2614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2d2618:
    // 0x2d2618: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2d2618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_2d261c:
    // 0x2d261c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2d261cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_2d2620:
    // 0x2d2620: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2d2620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_2d2624:
    // 0x2d2624: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2d2624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_2d2628:
    // 0x2d2628: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2d2628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_2d262c:
    // 0x2d262c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2d262cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_2d2630:
    // 0x2d2630: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2d2630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2d2634:
    // 0x2d2634: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x2d2634u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_2d2638:
    // 0x2d2638: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x2d2638u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_2d263c:
    // 0x2d263c: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x2d263cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_2d2640:
    // 0x2d2640: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x2d2640u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_2d2644:
    // 0x2d2644: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d2644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d2648:
    // 0x2d2648: 0xc0e409a  jal         func_390268
label_2d264c:
    if (ctx->pc == 0x2D264Cu) {
        ctx->pc = 0x2D264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2648u;
        // 0x2d264c: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2650u;
        goto label_2d2650;
    }
    ctx->pc = 0x2D2648u;
    SET_GPR_U32(ctx, 31, 0x2D2650u);
    ctx->pc = 0x2D264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2648u;
    // 0x2d264c: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D2648u, 0x2D2650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2650u;
label_2d2650:
    // 0x2d2650: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d2650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d2654:
    // 0x2d2654: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d2654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d2658:
    // 0x2d2658: 0x1280004f  beqz        $s4, . + 4 + (0x4F << 2)
label_2d265c:
    if (ctx->pc == 0x2D265Cu) {
        ctx->pc = 0x2D265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2658u;
        // 0x2d265c: 0x8c5e020c  lw          $fp, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2660u;
        goto label_2d2660;
    }
    ctx->pc = 0x2D2658u;
    {
        const bool branch_taken_0x2d2658 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2658u;
        // 0x2d265c: 0x8c5e020c  lw          $fp, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2658) {
            ctx->pc = 0x2D2798u;
            goto label_2d2798;
        }
    }
    ctx->pc = 0x2D2660u;
label_2d2660:
    // 0x2d2660: 0x124001d4  beqz        $s2, . + 4 + (0x1D4 << 2)
label_2d2664:
    if (ctx->pc == 0x2D2664u) {
        ctx->pc = 0x2D2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2660u;
        // 0x2d2664: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2668u;
        goto label_2d2668;
    }
    ctx->pc = 0x2D2660u;
    {
        const bool branch_taken_0x2d2660 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2660u;
        // 0x2d2664: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2660) {
            ctx->pc = 0x2D2DB4u;
            goto label_2d2db4;
        }
    }
    ctx->pc = 0x2D2668u;
label_2d2668:
    // 0x2d2668: 0xc089fac  jal         func_227EB0
label_2d266c:
    if (ctx->pc == 0x2D266Cu) {
        ctx->pc = 0x2D266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2668u;
        // 0x2d266c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2670u;
        goto label_2d2670;
    }
    ctx->pc = 0x2D2668u;
    SET_GPR_U32(ctx, 31, 0x2D2670u);
    ctx->pc = 0x2D266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2668u;
    // 0x2d266c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x2D2668u, 0x2D2670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2670u;
label_2d2670:
    // 0x2d2670: 0x144001d0  bnez        $v0, . + 4 + (0x1D0 << 2)
label_2d2674:
    if (ctx->pc == 0x2D2674u) {
        ctx->pc = 0x2D2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2670u;
        // 0x2d2674: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2678u;
        goto label_2d2678;
    }
    ctx->pc = 0x2D2670u;
    {
        const bool branch_taken_0x2d2670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2670u;
        // 0x2d2674: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2670) {
            ctx->pc = 0x2D2DB4u;
            goto label_2d2db4;
        }
    }
    ctx->pc = 0x2D2678u;
label_2d2678:
    // 0x2d2678: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d2678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d267c:
    // 0x2d267c: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2d267cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2d2680:
    // 0x2d2680: 0x1c6001cc  bgtz        $v1, . + 4 + (0x1CC << 2)
label_2d2684:
    if (ctx->pc == 0x2D2684u) {
        ctx->pc = 0x2D2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2680u;
        // 0x2d2684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2688u;
        goto label_2d2688;
    }
    ctx->pc = 0x2D2680u;
    {
        const bool branch_taken_0x2d2680 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2D2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2680u;
        // 0x2d2684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2680) {
            ctx->pc = 0x2D2DB4u;
            goto label_2d2db4;
        }
    }
    ctx->pc = 0x2D2688u;
label_2d2688:
    // 0x2d2688: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x2d2688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_2d268c:
    // 0x2d268c: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x2d268cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_2d2690:
    // 0x2d2690: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x2d2690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_2d2694:
    // 0x2d2694: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2d2694u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d2698:
    // 0x2d2698: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x2d2698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_2d269c:
    // 0x2d269c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2d269cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2d26a0:
    // 0x2d26a0: 0x24734b00  addiu       $s3, $v1, 0x4B00
    ctx->pc = 0x2d26a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2d26a4:
    // 0x2d26a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d26a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2d26a8:
    // 0x2d26a8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2d26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2d26ac:
    // 0x2d26ac: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2d26acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d26b0:
    // 0x2d26b0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d26b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d26b4:
    // 0x2d26b4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d26b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d26b8:
    // 0x2d26b8: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2d26b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2d26bc:
    // 0x2d26bc: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2d26bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d26c0:
    // 0x2d26c0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2d26c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2d26c4:
    // 0x2d26c4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2d26c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d26c8:
    // 0x2d26c8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d26c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2d26cc:
    // 0x2d26cc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d26ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d26d0:
    // 0x2d26d0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d26d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d26d4:
    // 0x2d26d4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d26d4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2d26d8:
    // 0x2d26d8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2d26d8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2d26dc:
    // 0x2d26dc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2d26dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2d26e0:
    // 0x2d26e0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d26e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2d26e4:
    // 0x2d26e4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2d26e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2d26e8:
    // 0x2d26e8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2d26e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2d26ec:
    // 0x2d26ec: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2d26ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2d26f0:
    // 0x2d26f0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2d26f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_2d26f4:
    // 0x2d26f4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2d26f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2d26f8:
    // 0x2d26f8: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x2d26f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_2d26fc:
    // 0x2d26fc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2d26fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2d2700:
    // 0x2d2700: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x2d2700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d2704:
    // 0x2d2704: 0x0  nop
    ctx->pc = 0x2d2704u;
    // NOP
label_2d2708:
    // 0x2d2708: 0x45010023  bc1t        . + 4 + (0x23 << 2)
label_2d270c:
    if (ctx->pc == 0x2D270Cu) {
        ctx->pc = 0x2D270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2708u;
        // 0x2d270c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2710u;
        goto label_2d2710;
    }
    ctx->pc = 0x2D2708u;
    {
        const bool branch_taken_0x2d2708 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2708u;
        // 0x2d270c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2708) {
            ctx->pc = 0x2D2798u;
            goto label_2d2798;
        }
    }
    ctx->pc = 0x2D2710u;
label_2d2710:
    // 0x2d2710: 0x86d00002  lh          $s0, 0x2($s6)
    ctx->pc = 0x2d2710u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_2d2714:
    // 0x2d2714: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d2714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2d2718:
    // 0x2d2718: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2d2718u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2d271c:
    // 0x2d271c: 0xc05959e  jal         func_165678
label_2d2720:
    if (ctx->pc == 0x2D2720u) {
        ctx->pc = 0x2D2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D271Cu;
        // 0x2d2720: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2724u;
        goto label_2d2724;
    }
    ctx->pc = 0x2D271Cu;
    SET_GPR_U32(ctx, 31, 0x2D2724u);
    ctx->pc = 0x2D2720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D271Cu;
    // 0x2d2720: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2D271Cu, 0x2D2724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2724u;
label_2d2724:
    // 0x2d2724: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x2d2724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_2d2728:
    // 0x2d2728: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2d2728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d272c:
    // 0x2d272c: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x2d272cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_2d2730:
    // 0x2d2730: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2d2730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2d2734:
    // 0x2d2734: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d2734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d2738:
    // 0x2d2738: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2d2738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2d273c:
    // 0x2d273c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2d273cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2d2740:
    // 0x2d2740: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2d2740u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2d2744:
    // 0x2d2744: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d2744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2d2748:
    // 0x2d2748: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2d2748u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2d274c:
    // 0x2d274c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d274cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d2750:
    // 0x2d2750: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2d2750u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2d2754:
    // 0x2d2754: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d2754u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d2758:
    // 0x2d2758: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d2758u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2d275c:
    // 0x2d275c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2d275cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2d2760:
    // 0x2d2760: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d2760u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d2764:
    // 0x2d2764: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2d2764u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2d2768:
    // 0x2d2768: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2d2768u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2d276c:
    // 0x2d276c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2d276cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2d2770:
    // 0x2d2770: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2d2770u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2d2774:
    // 0x2d2774: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2d2774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2d2778:
    // 0x2d2778: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2d2778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2d277c:
    // 0x2d277c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2d277cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2d2780:
    // 0x2d2780: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x2d2780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2d2784:
    // 0x2d2784: 0x0  nop
    ctx->pc = 0x2d2784u;
    // NOP
label_2d2788:
    // 0x2d2788: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2d2788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d278c:
    // 0x2d278c: 0x0  nop
    ctx->pc = 0x2d278cu;
    // NOP
label_2d2790:
    // 0x2d2790: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2d2794:
    if (ctx->pc == 0x2D2794u) {
        ctx->pc = 0x2D2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2790u;
        // 0x2d2794: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2798u;
        goto label_2d2798;
    }
    ctx->pc = 0x2D2790u;
    {
        const bool branch_taken_0x2d2790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2790u;
        // 0x2d2794: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2790) {
            ctx->pc = 0x2D27A0u;
            goto label_2d27a0;
        }
    }
    ctx->pc = 0x2D2798u;
label_2d2798:
    // 0x2d2798: 0x10000186  b           . + 4 + (0x186 << 2)
label_2d279c:
    if (ctx->pc == 0x2D279Cu) {
        ctx->pc = 0x2D279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2798u;
        // 0x2d279c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D27A0u;
        goto label_2d27a0;
    }
    ctx->pc = 0x2D2798u;
    {
        const bool branch_taken_0x2d2798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2798u;
        // 0x2d279c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2798) {
            ctx->pc = 0x2D2DB4u;
            goto label_2d2db4;
        }
    }
    ctx->pc = 0x2D27A0u;
label_2d27a0:
    // 0x2d27a0: 0x87c300e2  lh          $v1, 0xE2($fp)
    ctx->pc = 0x2d27a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 226)));
label_2d27a4:
    // 0x2d27a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d27a8:
    // 0x2d27a8: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_2d27ac:
    if (ctx->pc == 0x2D27ACu) {
        ctx->pc = 0x2D27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27A8u;
        // 0x2d27ac: 0x86a60002  lh          $a2, 0x2($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D27B0u;
        goto label_2d27b0;
    }
    ctx->pc = 0x2D27A8u;
    {
        const bool branch_taken_0x2d27a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d27a8) {
            ctx->pc = 0x2D27ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D27A8u;
            // 0x2d27ac: 0x86a60002  lh          $a2, 0x2($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D27E8u;
            goto label_2d27e8;
        }
    }
    ctx->pc = 0x2D27B0u;
label_2d27b0:
    // 0x2d27b0: 0x86c20002  lh          $v0, 0x2($s6)
    ctx->pc = 0x2d27b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_2d27b4:
    // 0x2d27b4: 0xa7c200e2  sh          $v0, 0xE2($fp)
    ctx->pc = 0x2d27b4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 226), (uint16_t)GPR_U32(ctx, 2));
label_2d27b8:
    // 0x2d27b8: 0x824303b8  lb          $v1, 0x3B8($s2)
    ctx->pc = 0x2d27b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 952)));
label_2d27bc:
    // 0x2d27bc: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
label_2d27c0:
    if (ctx->pc == 0x2D27C0u) {
        ctx->pc = 0x2D27C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27BCu;
        // 0x2d27c0: 0x86a60002  lh          $a2, 0x2($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D27C4u;
        goto label_2d27c4;
    }
    ctx->pc = 0x2D27BCu;
    {
        const bool branch_taken_0x2d27bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d27bc) {
            ctx->pc = 0x2D27C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D27BCu;
            // 0x2d27c0: 0x86a60002  lh          $a2, 0x2($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D27E8u;
            goto label_2d27e8;
        }
    }
    ctx->pc = 0x2D27C4u;
label_2d27c4:
    // 0x2d27c4: 0xc087502  jal         func_21D408
label_2d27c8:
    if (ctx->pc == 0x2D27C8u) {
        ctx->pc = 0x2D27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27C4u;
        // 0x2d27c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D27CCu;
        goto label_2d27cc;
    }
    ctx->pc = 0x2D27C4u;
    SET_GPR_U32(ctx, 31, 0x2D27CCu);
    ctx->pc = 0x2D27C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D27C4u;
    // 0x2d27c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D27C4u, 0x2D27CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D27CCu;
label_2d27cc:
    // 0x2d27cc: 0x8c43026c  lw          $v1, 0x26C($v0)
    ctx->pc = 0x2d27ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
label_2d27d0:
    // 0x2d27d0: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x2d27d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_2d27d4:
    // 0x2d27d4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2d27d8:
    if (ctx->pc == 0x2D27D8u) {
        ctx->pc = 0x2D27D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27D4u;
        // 0x2d27d8: 0x86a60002  lh          $a2, 0x2($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D27DCu;
        goto label_2d27dc;
    }
    ctx->pc = 0x2D27D4u;
    {
        const bool branch_taken_0x2d27d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d27d4) {
            ctx->pc = 0x2D27D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D27D4u;
            // 0x2d27d8: 0x86a60002  lh          $a2, 0x2($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D27E8u;
            goto label_2d27e8;
        }
    }
    ctx->pc = 0x2D27DCu;
label_2d27dc:
    // 0x2d27dc: 0xc095fce  jal         func_257F38
label_2d27e0:
    if (ctx->pc == 0x2D27E0u) {
        ctx->pc = 0x2D27E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27DCu;
        // 0x2d27e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D27E4u;
        goto label_2d27e4;
    }
    ctx->pc = 0x2D27DCu;
    SET_GPR_U32(ctx, 31, 0x2D27E4u);
    ctx->pc = 0x2D27E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D27DCu;
    // 0x2d27e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2D27DCu, 0x2D27E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D27E4u;
label_2d27e4:
    // 0x2d27e4: 0x86a60002  lh          $a2, 0x2($s5)
    ctx->pc = 0x2d27e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2d27e8:
    // 0x2d27e8: 0x26e74b00  addiu       $a3, $s7, 0x4B00
    ctx->pc = 0x2d27e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
label_2d27ec:
    // 0x2d27ec: 0x86c50002  lh          $a1, 0x2($s6)
    ctx->pc = 0x2d27ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_2d27f0:
    // 0x2d27f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2d27f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d27f4:
    // 0x2d27f4: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2d27f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2d27f8:
    // 0x2d27f8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d27f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2d27fc:
    // 0x2d27fc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2d27fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2d2800:
    // 0x2d2800: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2d2800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2d2804:
    // 0x2d2804: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2d2804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2d2808:
    // 0x2d2808: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2d2808u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2d280c:
    // 0x2d280c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d280cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d2810:
    // 0x2d2810: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d2810u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2d2814:
    // 0x2d2814: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d2814u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d2818:
    // 0x2d2818: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d2818u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2d281c:
    // 0x2d281c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2d281cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2d2820:
    // 0x2d2820: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2d2820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2d2824:
    // 0x2d2824: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2d2824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2d2828:
    // 0x2d2828: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2d2828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2d282c:
    // 0x2d282c: 0x86c50002  lh          $a1, 0x2($s6)
    ctx->pc = 0x2d282cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_2d2830:
    // 0x2d2830: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d2830u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2d2834:
    // 0x2d2834: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2d2834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2d2838:
    // 0x2d2838: 0xc0cd8ec  jal         func_3363B0
label_2d283c:
    if (ctx->pc == 0x2D283Cu) {
        ctx->pc = 0x2D283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2838u;
        // 0x2d283c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2840u;
        goto label_2d2840;
    }
    ctx->pc = 0x2D2838u;
    SET_GPR_U32(ctx, 31, 0x2D2840u);
    ctx->pc = 0x2D283Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2838u;
    // 0x2d283c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2D2838u, 0x2D2840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2840u;
label_2d2840:
    // 0x2d2840: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2d2840u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d2844:
    // 0x2d2844: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d2844u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d2848:
    // 0x2d2848: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x2d2848u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2d284c:
    // 0x2d284c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2d284cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2d2850:
    // 0x2d2850: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2d2850u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_2d2854:
    // 0x2d2854: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2d2854u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d2858:
    // 0x2d2858: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d2858u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d285c:
    // 0x2d285c: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x2d285cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d2860:
    // 0x2d2860: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2d2860u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d2864:
    // 0x2d2864: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2d2864u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2d2868:
    // 0x2d2868: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x2d2868u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2d286c:
    // 0x2d286c: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d286cu;
    // VWAITQ (Q already resolved in this runtime)
label_2d2870:
    // 0x2d2870: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x2d2870u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2d2874:
    // 0x2d2874: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2d2874u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2d2878:
    // 0x2d2878: 0x4484a800  mtc1        $a0, $f21
    ctx->pc = 0x2d2878u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2d287c:
    // 0x2d287c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d287cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2d2880:
    // 0x2d2880: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d2880u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d2884:
    // 0x2d2884: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x2d2884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2d2888:
    // 0x2d2888: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2d2888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2d288c:
    // 0x2d288c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2d288cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_2d2890:
    // 0x2d2890: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2d2890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_2d2894:
    // 0x2d2894: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2d2894u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_2d2898:
    // 0x2d2898: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d2898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d289c:
    // 0x2d289c: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x2d289cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2d28a0:
    // 0x2d28a0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2d28a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2d28a4:
    // 0x2d28a4: 0xc12e29c  jal         func_4B8A70
label_2d28a8:
    if (ctx->pc == 0x2D28A8u) {
        ctx->pc = 0x2D28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28A4u;
        // 0x2d28a8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D28ACu;
        goto label_2d28ac;
    }
    ctx->pc = 0x2D28A4u;
    SET_GPR_U32(ctx, 31, 0x2D28ACu);
    ctx->pc = 0x2D28A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D28A4u;
    // 0x2d28a8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2D28A4u, 0x2D28ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D28ACu;
label_2d28ac:
    // 0x2d28ac: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2d28acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2d28b0:
    // 0x2d28b0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2d28b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2d28b4:
    // 0x2d28b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d28b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d28b8:
    // 0x2d28b8: 0xc12e29c  jal         func_4B8A70
label_2d28bc:
    if (ctx->pc == 0x2D28BCu) {
        ctx->pc = 0x2D28C0u;
        goto label_2d28c0;
    }
    ctx->pc = 0x2D28B8u;
    SET_GPR_U32(ctx, 31, 0x2D28C0u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2D28B8u, 0x2D28C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D28C0u;
label_2d28c0:
    // 0x2d28c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2d28c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d28c4:
    // 0x2d28c4: 0x0  nop
    ctx->pc = 0x2d28c4u;
    // NOP
label_2d28c8:
    // 0x2d28c8: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_2d28cc:
    if (ctx->pc == 0x2D28CCu) {
        ctx->pc = 0x2D28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28C8u;
        // 0x2d28cc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D28D0u;
        goto label_2d28d0;
    }
    ctx->pc = 0x2D28C8u;
    {
        const bool branch_taken_0x2d28c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28C8u;
        // 0x2d28cc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d28c8) {
            ctx->pc = 0x2D2994u;
            goto label_2d2994;
        }
    }
    ctx->pc = 0x2D28D0u;
label_2d28d0:
    // 0x2d28d0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2d28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d28d4:
    // 0x2d28d4: 0x8e03b734  lw          $v1, -0x48CC($s0)
    ctx->pc = 0x2d28d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_2d28d8:
    // 0x2d28d8: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2d28d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2d28dc:
    // 0x2d28dc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2d28dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2d28e0:
    // 0x2d28e0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2d28e4:
    if (ctx->pc == 0x2D28E4u) {
        ctx->pc = 0x2D28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28E0u;
        // 0x2d28e4: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D28E8u;
        goto label_2d28e8;
    }
    ctx->pc = 0x2D28E0u;
    {
        const bool branch_taken_0x2d28e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28E0u;
        // 0x2d28e4: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d28e0) {
            ctx->pc = 0x2D2940u;
            goto label_2d2940;
        }
    }
    ctx->pc = 0x2D28E8u;
label_2d28e8:
    // 0x2d28e8: 0x824203b8  lb          $v0, 0x3B8($s2)
    ctx->pc = 0x2d28e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 952)));
label_2d28ec:
    // 0x2d28ec: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2d28f0:
    if (ctx->pc == 0x2D28F0u) {
        ctx->pc = 0x2D28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28ECu;
        // 0x2d28f0: 0x2405007d  addiu       $a1, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D28F4u;
        goto label_2d28f4;
    }
    ctx->pc = 0x2D28ECu;
    {
        const bool branch_taken_0x2d28ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28ECu;
        // 0x2d28f0: 0x2405007d  addiu       $a1, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d28ec) {
            ctx->pc = 0x2D2944u;
            goto label_2d2944;
        }
    }
    ctx->pc = 0x2D28F4u;
label_2d28f4:
    // 0x2d28f4: 0xc0a47b4  jal         func_291ED0
label_2d28f8:
    if (ctx->pc == 0x2D28F8u) {
        ctx->pc = 0x2D28F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28F4u;
        // 0x2d28f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D28FCu;
        goto label_2d28fc;
    }
    ctx->pc = 0x2D28F4u;
    SET_GPR_U32(ctx, 31, 0x2D28FCu);
    ctx->pc = 0x2D28F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D28F4u;
    // 0x2d28f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2D28F4u, 0x2D28FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D28FCu;
label_2d28fc:
    // 0x2d28fc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2d2900:
    if (ctx->pc == 0x2D2900u) {
        ctx->pc = 0x2D2900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28FCu;
        // 0x2d2900: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2904u;
        goto label_2d2904;
    }
    ctx->pc = 0x2D28FCu;
    {
        const bool branch_taken_0x2d28fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28FCu;
        // 0x2d2900: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d28fc) {
            ctx->pc = 0x2D293Cu;
            goto label_2d293c;
        }
    }
    ctx->pc = 0x2D2904u;
label_2d2904:
    // 0x2d2904: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d2904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d2908:
    // 0x2d2908: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d2908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d290c:
    // 0x2d290c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2d290cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d2910:
    // 0x2d2910: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d2910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d2914:
    // 0x2d2914: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x2d2914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_2d2918:
    // 0x2d2918: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d2918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d291c:
    // 0x2d291c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d291cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2920:
    // 0x2d2920: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d2920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2924:
    // 0x2d2924: 0xc088178  jal         func_2205E0
label_2d2928:
    if (ctx->pc == 0x2D2928u) {
        ctx->pc = 0x2D2928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2924u;
        // 0x2d2928: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D292Cu;
        goto label_2d292c;
    }
    ctx->pc = 0x2D2924u;
    SET_GPR_U32(ctx, 31, 0x2D292Cu);
    ctx->pc = 0x2D2928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2924u;
    // 0x2d2928: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2D2924u, 0x2D292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D292Cu;
label_2d292c:
    // 0x2d292c: 0x8e03b734  lw          $v1, -0x48CC($s0)
    ctx->pc = 0x2d292cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_2d2930:
    // 0x2d2930: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2d2930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2d2934:
    // 0x2d2934: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x2d2934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_2d2938:
    // 0x2d2938: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2d2938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2d293c:
    // 0x2d293c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2d293cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2d2940:
    // 0x2d2940: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x2d2940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_2d2944:
    // 0x2d2944: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2d2944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2d2948:
    // 0x2d2948: 0xc0cd4fc  jal         func_3353F0
label_2d294c:
    if (ctx->pc == 0x2D294Cu) {
        ctx->pc = 0x2D294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2948u;
        // 0x2d294c: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2950u;
        goto label_2d2950;
    }
    ctx->pc = 0x2D2948u;
    SET_GPR_U32(ctx, 31, 0x2D2950u);
    ctx->pc = 0x2D294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2948u;
    // 0x2d294c: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2D2948u, 0x2D2950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2950u;
label_2d2950:
    // 0x2d2950: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d2950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d2954:
    // 0x2d2954: 0xc0a367c  jal         func_28D9F0
label_2d2958:
    if (ctx->pc == 0x2D2958u) {
        ctx->pc = 0x2D2958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2954u;
        // 0x2d2958: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D295Cu;
        goto label_2d295c;
    }
    ctx->pc = 0x2D2954u;
    SET_GPR_U32(ctx, 31, 0x2D295Cu);
    ctx->pc = 0x2D2958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2954u;
    // 0x2d2958: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D2954u, 0x2D295Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D295Cu;
label_2d295c:
    // 0x2d295c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d295cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d2960:
    // 0x2d2960: 0x10800113  beqz        $a0, . + 4 + (0x113 << 2)
label_2d2964:
    if (ctx->pc == 0x2D2964u) {
        ctx->pc = 0x2D2964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2960u;
        // 0x2d2964: 0x26e24b00  addiu       $v0, $s7, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2968u;
        goto label_2d2968;
    }
    ctx->pc = 0x2D2960u;
    {
        const bool branch_taken_0x2d2960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2960u;
        // 0x2d2964: 0x26e24b00  addiu       $v0, $s7, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2960) {
            ctx->pc = 0x2D2DB0u;
            goto label_2d2db0;
        }
    }
    ctx->pc = 0x2D2968u;
label_2d2968:
    // 0x2d2968: 0x86a60002  lh          $a2, 0x2($s5)
    ctx->pc = 0x2d2968u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2d296c:
    // 0x2d296c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d296cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d2970:
    // 0x2d2970: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d2970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d2974:
    // 0x2d2974: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2d2974u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2d2978:
    // 0x2d2978: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2d2978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2d297c:
    // 0x2d297c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d297cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2d2980:
    // 0x2d2980: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d2980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d2984:
    // 0x2d2984: 0xc0bf800  jal         func_2FE000
label_2d2988:
    if (ctx->pc == 0x2D2988u) {
        ctx->pc = 0x2D2988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2984u;
        // 0x2d2988: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D298Cu;
        goto label_2d298c;
    }
    ctx->pc = 0x2D2984u;
    SET_GPR_U32(ctx, 31, 0x2D298Cu);
    ctx->pc = 0x2D2988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2984u;
    // 0x2d2988: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2D2984u, 0x2D298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D298Cu;
label_2d298c:
    // 0x2d298c: 0x10000109  b           . + 4 + (0x109 << 2)
label_2d2990:
    if (ctx->pc == 0x2D2990u) {
        ctx->pc = 0x2D2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D298Cu;
        // 0x2d2990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2994u;
        goto label_2d2994;
    }
    ctx->pc = 0x2D298Cu;
    {
        const bool branch_taken_0x2d298c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D298Cu;
        // 0x2d2990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d298c) {
            ctx->pc = 0x2D2DB4u;
            goto label_2d2db4;
        }
    }
    ctx->pc = 0x2D2994u;
label_2d2994:
    // 0x2d2994: 0xc05959e  jal         func_165678
label_2d2998:
    if (ctx->pc == 0x2D2998u) {
        ctx->pc = 0x2D2998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2994u;
        // 0x2d2998: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D299Cu;
        goto label_2d299c;
    }
    ctx->pc = 0x2D2994u;
    SET_GPR_U32(ctx, 31, 0x2D299Cu);
    ctx->pc = 0x2D2998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2994u;
    // 0x2d2998: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2D2994u, 0x2D299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D299Cu;
label_2d299c:
    // 0x2d299c: 0x12820104  beq         $s4, $v0, . + 4 + (0x104 << 2)
label_2d29a0:
    if (ctx->pc == 0x2D29A0u) {
        ctx->pc = 0x2D29A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D299Cu;
        // 0x2d29a0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D29A4u;
        goto label_2d29a4;
    }
    ctx->pc = 0x2D299Cu;
    {
        const bool branch_taken_0x2d299c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D29A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D299Cu;
        // 0x2d29a0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d299c) {
            ctx->pc = 0x2D2DB0u;
            goto label_2d2db0;
        }
    }
    ctx->pc = 0x2D29A4u;
label_2d29a4:
    // 0x2d29a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d29a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d29a8:
    // 0x2d29a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d29a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2d29ac:
    // 0x2d29ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d29acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d29b0:
    // 0x2d29b0: 0xc4600140  lwc1        $f0, 0x140($v1)
    ctx->pc = 0x2d29b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d29b4:
    // 0x2d29b4: 0x824203b8  lb          $v0, 0x3B8($s2)
    ctx->pc = 0x2d29b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 952)));
label_2d29b8:
    // 0x2d29b8: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
label_2d29bc:
    if (ctx->pc == 0x2D29BCu) {
        ctx->pc = 0x2D29BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D29B8u;
        // 0x2d29bc: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D29C0u;
        goto label_2d29c0;
    }
    ctx->pc = 0x2D29B8u;
    {
        const bool branch_taken_0x2d29b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2D29BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D29B8u;
        // 0x2d29bc: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d29b8) {
            ctx->pc = 0x2D29D0u;
            goto label_2d29d0;
        }
    }
    ctx->pc = 0x2D29C0u;
label_2d29c0:
    // 0x2d29c0: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x2d29c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
label_2d29c4:
    // 0x2d29c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d29c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2d29c8:
    // 0x2d29c8: 0x10000011  b           . + 4 + (0x11 << 2)
label_2d29cc:
    if (ctx->pc == 0x2D29CCu) {
        ctx->pc = 0x2D29CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D29C8u;
        // 0x2d29cc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D29D0u;
        goto label_2d29d0;
    }
    ctx->pc = 0x2D29C8u;
    {
        const bool branch_taken_0x2d29c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D29CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D29C8u;
        // 0x2d29cc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d29c8) {
            ctx->pc = 0x2D2A10u;
            goto label_2d2a10;
        }
    }
    ctx->pc = 0x2D29D0u;
label_2d29d0:
    // 0x2d29d0: 0x924203bf  lbu         $v0, 0x3BF($s2)
    ctx->pc = 0x2d29d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 959)));
label_2d29d4:
    // 0x2d29d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2d29d8:
    if (ctx->pc == 0x2D29D8u) {
        ctx->pc = 0x2D29DCu;
        goto label_2d29dc;
    }
    ctx->pc = 0x2D29D4u;
    {
        const bool branch_taken_0x2d29d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d29d4) {
            ctx->pc = 0x2D2A04u;
            goto label_2d2a04;
        }
    }
    ctx->pc = 0x2D29DCu;
label_2d29dc:
    // 0x2d29dc: 0xc0893f4  jal         func_224FD0
label_2d29e0:
    if (ctx->pc == 0x2D29E0u) {
        ctx->pc = 0x2D29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D29DCu;
        // 0x2d29e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D29E4u;
        goto label_2d29e4;
    }
    ctx->pc = 0x2D29DCu;
    SET_GPR_U32(ctx, 31, 0x2D29E4u);
    ctx->pc = 0x2D29E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D29DCu;
    // 0x2d29e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224FD0u, 0x2D29DCu, 0x2D29E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D29E4u;
label_2d29e4:
    // 0x2d29e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2d29e8:
    if (ctx->pc == 0x2D29E8u) {
        ctx->pc = 0x2D29ECu;
        goto label_2d29ec;
    }
    ctx->pc = 0x2D29E4u;
    {
        const bool branch_taken_0x2d29e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d29e4) {
            ctx->pc = 0x2D2A04u;
            goto label_2d2a04;
        }
    }
    ctx->pc = 0x2D29ECu;
label_2d29ec:
    // 0x2d29ec: 0xc087502  jal         func_21D408
label_2d29f0:
    if (ctx->pc == 0x2D29F0u) {
        ctx->pc = 0x2D29F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D29ECu;
        // 0x2d29f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D29F4u;
        goto label_2d29f4;
    }
    ctx->pc = 0x2D29ECu;
    SET_GPR_U32(ctx, 31, 0x2D29F4u);
    ctx->pc = 0x2D29F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D29ECu;
    // 0x2d29f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D29ECu, 0x2D29F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D29F4u;
label_2d29f4:
    // 0x2d29f4: 0x8c43026c  lw          $v1, 0x26C($v0)
    ctx->pc = 0x2d29f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
label_2d29f8:
    // 0x2d29f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d29f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2d29fc:
    // 0x2d29fc: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_2d2a00:
    if (ctx->pc == 0x2D2A00u) {
        ctx->pc = 0x2D2A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D29FCu;
        // 0x2d2a00: 0xc620001c  lwc1        $f0, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2A04u;
        goto label_2d2a04;
    }
    ctx->pc = 0x2D29FCu;
    {
        const bool branch_taken_0x2d29fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d29fc) {
            ctx->pc = 0x2D2A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D29FCu;
            // 0x2d2a00: 0xc620001c  lwc1        $f0, 0x1C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2A14u;
            goto label_2d2a14;
        }
    }
    ctx->pc = 0x2D2A04u;
label_2d2a04:
    // 0x2d2a04: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2d2a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_2d2a08:
    // 0x2d2a08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d2a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2d2a0c:
    // 0x2d2a0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d2a0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2a10:
    // 0x2d2a10: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2d2a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d2a14:
    // 0x2d2a14: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2d2a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2d2a18:
    // 0x2d2a18: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2d2a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d2a1c:
    // 0x2d2a1c: 0x0  nop
    ctx->pc = 0x2d2a1cu;
    // NOP
label_2d2a20:
    // 0x2d2a20: 0x4502005e  bc1fl       . + 4 + (0x5E << 2)
label_2d2a24:
    if (ctx->pc == 0x2D2A24u) {
        ctx->pc = 0x2D2A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A20u;
        // 0x2d2a24: 0x87c300e2  lh          $v1, 0xE2($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 226)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2A28u;
        goto label_2d2a28;
    }
    ctx->pc = 0x2D2A20u;
    {
        const bool branch_taken_0x2d2a20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2a20) {
            ctx->pc = 0x2D2A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2A20u;
            // 0x2d2a24: 0x87c300e2  lh          $v1, 0xE2($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 226)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2B9Cu;
            goto label_2d2b9c;
        }
    }
    ctx->pc = 0x2D2A28u;
label_2d2a28:
    // 0x2d2a28: 0x5660000c  bnel        $s3, $zero, . + 4 + (0xC << 2)
label_2d2a2c:
    if (ctx->pc == 0x2D2A2Cu) {
        ctx->pc = 0x2D2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A28u;
        // 0x2d2a2c: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2A30u;
        goto label_2d2a30;
    }
    ctx->pc = 0x2D2A28u;
    {
        const bool branch_taken_0x2d2a28 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2a28) {
            ctx->pc = 0x2D2A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2A28u;
            // 0x2d2a2c: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2A5Cu;
            goto label_2d2a5c;
        }
    }
    ctx->pc = 0x2D2A30u;
label_2d2a30:
    // 0x2d2a30: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2d2a30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2d2a34:
    // 0x2d2a34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d2a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d2a38:
    // 0x2d2a38: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x2d2a38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_2d2a3c:
    // 0x2d2a3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d2a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d2a40:
    // 0x2d2a40: 0x0  nop
    ctx->pc = 0x2d2a40u;
    // NOP
label_2d2a44:
    // 0x2d2a44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d2a44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2d2a48:
    // 0x2d2a48: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2d2a48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d2a4c:
    // 0x2d2a4c: 0x0  nop
    ctx->pc = 0x2d2a4cu;
    // NOP
label_2d2a50:
    // 0x2d2a50: 0x45020052  bc1fl       . + 4 + (0x52 << 2)
label_2d2a54:
    if (ctx->pc == 0x2D2A54u) {
        ctx->pc = 0x2D2A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A50u;
        // 0x2d2a54: 0x87c300e2  lh          $v1, 0xE2($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 226)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2A58u;
        goto label_2d2a58;
    }
    ctx->pc = 0x2D2A50u;
    {
        const bool branch_taken_0x2d2a50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2a50) {
            ctx->pc = 0x2D2A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2A50u;
            // 0x2d2a54: 0x87c300e2  lh          $v1, 0xE2($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 226)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2B9Cu;
            goto label_2d2b9c;
        }
    }
    ctx->pc = 0x2D2A58u;
label_2d2a58:
    // 0x2d2a58: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x2d2a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2d2a5c:
    // 0x2d2a5c: 0x26f04b00  addiu       $s0, $s7, 0x4B00
    ctx->pc = 0x2d2a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
label_2d2a60:
    // 0x2d2a60: 0xc0a2ab0  jal         func_28AAC0
label_2d2a64:
    if (ctx->pc == 0x2D2A64u) {
        ctx->pc = 0x2D2A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A60u;
        // 0x2d2a64: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2A68u;
        goto label_2d2a68;
    }
    ctx->pc = 0x2D2A60u;
    SET_GPR_U32(ctx, 31, 0x2D2A68u);
    ctx->pc = 0x2D2A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2A60u;
    // 0x2d2a64: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2D2A60u, 0x2D2A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A68u;
label_2d2a68:
    // 0x2d2a68: 0x86a50002  lh          $a1, 0x2($s5)
    ctx->pc = 0x2d2a68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2d2a6c:
    // 0x2d2a6c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2d2a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2d2a70:
    // 0x2d2a70: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d2a70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2d2a74:
    // 0x2d2a74: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2d2a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2d2a78:
    // 0x2d2a78: 0xc0cd8ec  jal         func_3363B0
label_2d2a7c:
    if (ctx->pc == 0x2D2A7Cu) {
        ctx->pc = 0x2D2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A78u;
        // 0x2d2a7c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2A80u;
        goto label_2d2a80;
    }
    ctx->pc = 0x2D2A78u;
    SET_GPR_U32(ctx, 31, 0x2D2A80u);
    ctx->pc = 0x2D2A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2A78u;
    // 0x2d2a7c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2D2A78u, 0x2D2A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A80u;
label_2d2a80:
    // 0x2d2a80: 0xc64001ac  lwc1        $f0, 0x1AC($s2)
    ctx->pc = 0x2d2a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d2a84:
    // 0x2d2a84: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x2d2a84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d2a88:
    // 0x2d2a88: 0x86a50002  lh          $a1, 0x2($s5)
    ctx->pc = 0x2d2a88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2d2a8c:
    // 0x2d2a8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d2a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d2a90:
    // 0x2d2a90: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2d2a90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2d2a94:
    // 0x2d2a94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d2a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2a98:
    // 0x2d2a98: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d2a98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2d2a9c:
    // 0x2d2a9c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2d2a9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d2aa0:
    // 0x2d2aa0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d2aa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d2aa4:
    // 0x2d2aa4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d2aa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2d2aa8:
    // 0x2d2aa8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d2aa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2d2aac:
    // 0x2d2aac: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2d2aacu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2d2ab0:
    // 0x2d2ab0: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2d2ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2d2ab4:
    // 0x2d2ab4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2d2ab4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2d2ab8:
    // 0x2d2ab8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d2ab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2d2abc:
    // 0x2d2abc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d2abcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d2ac0:
    // 0x2d2ac0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d2ac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d2ac4:
    // 0x2d2ac4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d2ac4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2d2ac8:
    // 0x2d2ac8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2d2ac8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2d2acc:
    // 0x2d2acc: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2d2accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2d2ad0:
    // 0x2d2ad0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2d2ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2d2ad4:
    // 0x2d2ad4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d2ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d2ad8:
    // 0x2d2ad8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2d2ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2d2adc:
    // 0x2d2adc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2d2adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2d2ae0:
    // 0x2d2ae0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2d2ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_2d2ae4:
    // 0x2d2ae4: 0xc088878  jal         func_2221E0
label_2d2ae8:
    if (ctx->pc == 0x2D2AE8u) {
        ctx->pc = 0x2D2AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2AE4u;
        // 0x2d2ae8: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2AECu;
        goto label_2d2aec;
    }
    ctx->pc = 0x2D2AE4u;
    SET_GPR_U32(ctx, 31, 0x2D2AECu);
    ctx->pc = 0x2D2AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2AE4u;
    // 0x2d2ae8: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x2D2AE4u, 0x2D2AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2AECu;
label_2d2aec:
    // 0x2d2aec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2d2af0:
    if (ctx->pc == 0x2D2AF0u) {
        ctx->pc = 0x2D2AF4u;
        goto label_2d2af4;
    }
    ctx->pc = 0x2D2AECu;
    {
        const bool branch_taken_0x2d2aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2aec) {
            ctx->pc = 0x2D2B08u;
            goto label_2d2b08;
        }
    }
    ctx->pc = 0x2D2AF4u;
label_2d2af4:
    // 0x2d2af4: 0x86a20002  lh          $v0, 0x2($s5)
    ctx->pc = 0x2d2af4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2d2af8:
    // 0x2d2af8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d2af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2d2afc:
    // 0x2d2afc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2d2b00:
    // 0x2d2b00: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d2b00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d2b04:
    // 0x2d2b04: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2d2b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2d2b08:
    // 0x2d2b08: 0x16600012  bnez        $s3, . + 4 + (0x12 << 2)
label_2d2b0c:
    if (ctx->pc == 0x2D2B0Cu) {
        ctx->pc = 0x2D2B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B08u;
        // 0x2d2b0c: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2B10u;
        goto label_2d2b10;
    }
    ctx->pc = 0x2D2B08u;
    {
        const bool branch_taken_0x2d2b08 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B08u;
        // 0x2d2b0c: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b08) {
            ctx->pc = 0x2D2B54u;
            goto label_2d2b54;
        }
    }
    ctx->pc = 0x2D2B10u;
label_2d2b10:
    // 0x2d2b10: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x2d2b10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2d2b14:
    // 0x2d2b14: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d2b14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d2b18:
    // 0x2d2b18: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2d2b18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2d2b1c:
    // 0x2d2b1c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d2b1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2d2b20:
    // 0x2d2b20: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2d2b20u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2d2b24:
    // 0x2d2b24: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2d2b24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d2b28:
    // 0x2d2b28: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d2b28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2d2b2c:
    // 0x2d2b2c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d2b2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d2b30:
    // 0x2d2b30: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d2b30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d2b34:
    // 0x2d2b34: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d2b34u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2d2b38:
    // 0x2d2b38: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2d2b38u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2d2b3c:
    // 0x2d2b3c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2d2b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2d2b40:
    // 0x2d2b40: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2d2b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2d2b44:
    // 0x2d2b44: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2d2b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2d2b48:
    // 0x2d2b48: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2d2b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2d2b4c:
    // 0x2d2b4c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2d2b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2d2b50:
    // 0x2d2b50: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2d2b50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2d2b54:
    // 0x2d2b54: 0xc0a367c  jal         func_28D9F0
label_2d2b58:
    if (ctx->pc == 0x2D2B58u) {
        ctx->pc = 0x2D2B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B54u;
        // 0x2d2b58: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2B5Cu;
        goto label_2d2b5c;
    }
    ctx->pc = 0x2D2B54u;
    SET_GPR_U32(ctx, 31, 0x2D2B5Cu);
    ctx->pc = 0x2D2B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2B54u;
    // 0x2d2b58: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D2B54u, 0x2D2B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2B5Cu;
label_2d2b5c:
    // 0x2d2b5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d2b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d2b60:
    // 0x2d2b60: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2d2b64:
    if (ctx->pc == 0x2D2B64u) {
        ctx->pc = 0x2D2B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B60u;
        // 0x2d2b64: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2B68u;
        goto label_2d2b68;
    }
    ctx->pc = 0x2D2B60u;
    {
        const bool branch_taken_0x2d2b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B60u;
        // 0x2d2b64: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b60) {
            ctx->pc = 0x2D2B94u;
            goto label_2d2b94;
        }
    }
    ctx->pc = 0x2D2B68u;
label_2d2b68:
    // 0x2d2b68: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2d2b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2d2b6c:
    // 0x2d2b6c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2d2b6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d2b70:
    // 0x2d2b70: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2d2b70u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2d2b74:
    // 0x2d2b74: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d2b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d2b78:
    // 0x2d2b78: 0x2480a  movz        $t1, $zero, $v0
    ctx->pc = 0x2d2b78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_2d2b7c:
    // 0x2d2b7c: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x2d2b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2d2b80:
    // 0x2d2b80: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2d2b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d2b84:
    // 0x2d2b84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d2b84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d2b88:
    // 0x2d2b88: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d2b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2b8c:
    // 0x2d2b8c: 0xc0bee7a  jal         func_2FB9E8
label_2d2b90:
    if (ctx->pc == 0x2D2B90u) {
        ctx->pc = 0x2D2B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B8Cu;
        // 0x2d2b90: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2B94u;
        goto label_2d2b94;
    }
    ctx->pc = 0x2D2B8Cu;
    SET_GPR_U32(ctx, 31, 0x2D2B94u);
    ctx->pc = 0x2D2B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2B8Cu;
    // 0x2d2b90: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D2B8Cu, 0x2D2B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2B94u;
label_2d2b94:
    // 0x2d2b94: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2d2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_2d2b98:
    // 0x2d2b98: 0x87c300e2  lh          $v1, 0xE2($fp)
    ctx->pc = 0x2d2b98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 226)));
label_2d2b9c:
    // 0x2d2b9c: 0x86c20002  lh          $v0, 0x2($s6)
    ctx->pc = 0x2d2b9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_2d2ba0:
    // 0x2d2ba0: 0x14620084  bne         $v1, $v0, . + 4 + (0x84 << 2)
label_2d2ba4:
    if (ctx->pc == 0x2D2BA4u) {
        ctx->pc = 0x2D2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BA0u;
        // 0x2d2ba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2BA8u;
        goto label_2d2ba8;
    }
    ctx->pc = 0x2D2BA0u;
    {
        const bool branch_taken_0x2d2ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BA0u;
        // 0x2d2ba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2ba0) {
            ctx->pc = 0x2D2DB4u;
            goto label_2d2db4;
        }
    }
    ctx->pc = 0x2D2BA8u;
label_2d2ba8:
    // 0x2d2ba8: 0x824303b8  lb          $v1, 0x3B8($s2)
    ctx->pc = 0x2d2ba8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 952)));
label_2d2bac:
    // 0x2d2bac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2bb0:
    // 0x2d2bb0: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
label_2d2bb4:
    if (ctx->pc == 0x2D2BB4u) {
        ctx->pc = 0x2D2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BB0u;
        // 0x2d2bb4: 0x924503b8  lbu         $a1, 0x3B8($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2BB8u;
        goto label_2d2bb8;
    }
    ctx->pc = 0x2D2BB0u;
    {
        const bool branch_taken_0x2d2bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BB0u;
        // 0x2d2bb4: 0x924503b8  lbu         $a1, 0x3B8($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2bb0) {
            ctx->pc = 0x2D2C3Cu;
            goto label_2d2c3c;
        }
    }
    ctx->pc = 0x2D2BB8u;
label_2d2bb8:
    // 0x2d2bb8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2d2bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2d2bbc:
    // 0x2d2bbc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2d2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d2bc0:
    // 0x2d2bc0: 0x8e03b734  lw          $v1, -0x48CC($s0)
    ctx->pc = 0x2d2bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_2d2bc4:
    // 0x2d2bc4: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2d2bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2d2bc8:
    // 0x2d2bc8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2d2bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2d2bcc:
    // 0x2d2bcc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2d2bd0:
    if (ctx->pc == 0x2D2BD0u) {
        ctx->pc = 0x2D2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BCCu;
        // 0x2d2bd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2BD4u;
        goto label_2d2bd4;
    }
    ctx->pc = 0x2D2BCCu;
    {
        const bool branch_taken_0x2d2bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BCCu;
        // 0x2d2bd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2bcc) {
            ctx->pc = 0x2D2C3Cu;
            goto label_2d2c3c;
        }
    }
    ctx->pc = 0x2D2BD4u;
label_2d2bd4:
    // 0x2d2bd4: 0xc088680  jal         func_221A00
label_2d2bd8:
    if (ctx->pc == 0x2D2BD8u) {
        ctx->pc = 0x2D2BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BD4u;
        // 0x2d2bd8: 0x240502a1  addiu       $a1, $zero, 0x2A1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2BDCu;
        goto label_2d2bdc;
    }
    ctx->pc = 0x2D2BD4u;
    SET_GPR_U32(ctx, 31, 0x2D2BDCu);
    ctx->pc = 0x2D2BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2BD4u;
    // 0x2d2bd8: 0x240502a1  addiu       $a1, $zero, 0x2A1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x2D2BD4u, 0x2D2BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2BDCu;
label_2d2bdc:
    // 0x2d2bdc: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
label_2d2be0:
    if (ctx->pc == 0x2D2BE0u) {
        ctx->pc = 0x2D2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BDCu;
        // 0x2d2be0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2BE4u;
        goto label_2d2be4;
    }
    ctx->pc = 0x2D2BDCu;
    {
        const bool branch_taken_0x2d2bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BDCu;
        // 0x2d2be0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2bdc) {
            ctx->pc = 0x2D2DB0u;
            goto label_2d2db0;
        }
    }
    ctx->pc = 0x2D2BE4u;
label_2d2be4:
    // 0x2d2be4: 0x24051770  addiu       $a1, $zero, 0x1770
    ctx->pc = 0x2d2be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_2d2be8:
    // 0x2d2be8: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2d2be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2d2bec:
    // 0x2d2bec: 0xc0cd4fc  jal         func_3353F0
label_2d2bf0:
    if (ctx->pc == 0x2D2BF0u) {
        ctx->pc = 0x2D2BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BECu;
        // 0x2d2bf0: 0x24062710  addiu       $a2, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2BF4u;
        goto label_2d2bf4;
    }
    ctx->pc = 0x2D2BECu;
    SET_GPR_U32(ctx, 31, 0x2D2BF4u);
    ctx->pc = 0x2D2BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2BECu;
    // 0x2d2bf0: 0x24062710  addiu       $a2, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2D2BECu, 0x2D2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2BF4u;
label_2d2bf4:
    // 0x2d2bf4: 0x8e05b734  lw          $a1, -0x48CC($s0)
    ctx->pc = 0x2d2bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_2d2bf8:
    // 0x2d2bf8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d2bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d2bfc:
    // 0x2d2bfc: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2d2bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2d2c00:
    // 0x2d2c00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d2c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d2c04:
    // 0x2d2c04: 0xc0a367c  jal         func_28D9F0
label_2d2c08:
    if (ctx->pc == 0x2D2C08u) {
        ctx->pc = 0x2D2C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C04u;
        // 0x2d2c08: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2C0Cu;
        goto label_2d2c0c;
    }
    ctx->pc = 0x2D2C04u;
    SET_GPR_U32(ctx, 31, 0x2D2C0Cu);
    ctx->pc = 0x2D2C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2C04u;
    // 0x2d2c08: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D2C04u, 0x2D2C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C0Cu;
label_2d2c0c:
    // 0x2d2c0c: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
label_2d2c10:
    if (ctx->pc == 0x2D2C10u) {
        ctx->pc = 0x2D2C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C0Cu;
        // 0x2d2c10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2C14u;
        goto label_2d2c14;
    }
    ctx->pc = 0x2D2C0Cu;
    {
        const bool branch_taken_0x2d2c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C0Cu;
        // 0x2d2c10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c0c) {
            ctx->pc = 0x2D2DB0u;
            goto label_2d2db0;
        }
    }
    ctx->pc = 0x2D2C14u;
label_2d2c14:
    // 0x2d2c14: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d2c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d2c18:
    // 0x2d2c18: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d2c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2d2c1c:
    // 0x2d2c1c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d2c1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2d2c20:
    // 0x2d2c20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d2c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d2c24:
    // 0x2d2c24: 0x240602a1  addiu       $a2, $zero, 0x2A1
    ctx->pc = 0x2d2c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
label_2d2c28:
    // 0x2d2c28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d2c28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2c2c:
    // 0x2d2c2c: 0xc0be8c0  jal         func_2FA300
label_2d2c30:
    if (ctx->pc == 0x2D2C30u) {
        ctx->pc = 0x2D2C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C2Cu;
        // 0x2d2c30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2C34u;
        goto label_2d2c34;
    }
    ctx->pc = 0x2D2C2Cu;
    SET_GPR_U32(ctx, 31, 0x2D2C34u);
    ctx->pc = 0x2D2C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2C2Cu;
    // 0x2d2c30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2D2C2Cu, 0x2D2C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C34u;
label_2d2c34:
    // 0x2d2c34: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2d2c38:
    if (ctx->pc == 0x2D2C38u) {
        ctx->pc = 0x2D2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C34u;
        // 0x2d2c38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2C3Cu;
        goto label_2d2c3c;
    }
    ctx->pc = 0x2D2C34u;
    {
        const bool branch_taken_0x2d2c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C34u;
        // 0x2d2c38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c34) {
            ctx->pc = 0x2D2DB4u;
            goto label_2d2db4;
        }
    }
    ctx->pc = 0x2D2C3Cu;
label_2d2c3c:
    // 0x2d2c3c: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x2d2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2d2c40:
    // 0x2d2c40: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
label_2d2c44:
    if (ctx->pc == 0x2D2C44u) {
        ctx->pc = 0x2D2C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C40u;
        // 0x2d2c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2C48u;
        goto label_2d2c48;
    }
    ctx->pc = 0x2D2C40u;
    {
        const bool branch_taken_0x2d2c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C40u;
        // 0x2d2c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c40) {
            ctx->pc = 0x2D2DB4u;
            goto label_2d2db4;
        }
    }
    ctx->pc = 0x2D2C48u;
label_2d2c48:
    // 0x2d2c48: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2d2c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2d2c4c:
    // 0x2d2c4c: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x2d2c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2d2c50:
    // 0x2d2c50: 0x8ca2b734  lw          $v0, -0x48CC($a1)
    ctx->pc = 0x2d2c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2d2c54:
    // 0x2d2c54: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2d2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2d2c58:
    // 0x2d2c58: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x2d2c58u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2d2c5c:
    // 0x2d2c5c: 0x1080002e  beqz        $a0, . + 4 + (0x2E << 2)
label_2d2c60:
    if (ctx->pc == 0x2D2C60u) {
        ctx->pc = 0x2D2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C5Cu;
        // 0x2d2c60: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2C64u;
        goto label_2d2c64;
    }
    ctx->pc = 0x2D2C5Cu;
    {
        const bool branch_taken_0x2d2c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C5Cu;
        // 0x2d2c60: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c5c) {
            ctx->pc = 0x2D2D18u;
            goto label_2d2d18;
        }
    }
    ctx->pc = 0x2D2C64u;
label_2d2c64:
    // 0x2d2c64: 0x3c013fe9  lui         $at, 0x3FE9
    ctx->pc = 0x2d2c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16361 << 16));
label_2d2c68:
    // 0x2d2c68: 0x342147af  ori         $at, $at, 0x47AF
    ctx->pc = 0x2d2c68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18351);
label_2d2c6c:
    // 0x2d2c6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d2c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d2c70:
    // 0x2d2c70: 0x0  nop
    ctx->pc = 0x2d2c70u;
    // NOP
label_2d2c74:
    // 0x2d2c74: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x2d2c74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d2c78:
    // 0x2d2c78: 0x0  nop
    ctx->pc = 0x2d2c78u;
    // NOP
label_2d2c7c:
    // 0x2d2c7c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_2d2c80:
    if (ctx->pc == 0x2D2C80u) {
        ctx->pc = 0x2D2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C7Cu;
        // 0x2d2c80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2C84u;
        goto label_2d2c84;
    }
    ctx->pc = 0x2D2C7Cu;
    {
        const bool branch_taken_0x2d2c7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C7Cu;
        // 0x2d2c80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c7c) {
            ctx->pc = 0x2D2D18u;
            goto label_2d2d18;
        }
    }
    ctx->pc = 0x2D2C84u;
label_2d2c84:
    // 0x2d2c84: 0x925003bf  lbu         $s0, 0x3BF($s2)
    ctx->pc = 0x2d2c84u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 959)));
label_2d2c88:
    // 0x2d2c88: 0x16020024  bne         $s0, $v0, . + 4 + (0x24 << 2)
label_2d2c8c:
    if (ctx->pc == 0x2D2C8Cu) {
        ctx->pc = 0x2D2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C88u;
        // 0x2d2c8c: 0x8ea2b734  lw          $v0, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2C90u;
        goto label_2d2c90;
    }
    ctx->pc = 0x2D2C88u;
    {
        const bool branch_taken_0x2d2c88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C88u;
        // 0x2d2c8c: 0x8ea2b734  lw          $v0, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c88) {
            ctx->pc = 0x2D2D1Cu;
            goto label_2d2d1c;
        }
    }
    ctx->pc = 0x2D2C90u;
label_2d2c90:
    // 0x2d2c90: 0xc0893f4  jal         func_224FD0
label_2d2c94:
    if (ctx->pc == 0x2D2C94u) {
        ctx->pc = 0x2D2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C90u;
        // 0x2d2c94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2C98u;
        goto label_2d2c98;
    }
    ctx->pc = 0x2D2C90u;
    SET_GPR_U32(ctx, 31, 0x2D2C98u);
    ctx->pc = 0x2D2C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2C90u;
    // 0x2d2c94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224FD0u, 0x2D2C90u, 0x2D2C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C98u;
label_2d2c98:
    // 0x2d2c98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d2c98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d2c9c:
    // 0x2d2c9c: 0x1670001f  bne         $s3, $s0, . + 4 + (0x1F << 2)
label_2d2ca0:
    if (ctx->pc == 0x2D2CA0u) {
        ctx->pc = 0x2D2CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C9Cu;
        // 0x2d2ca0: 0x8ea2b734  lw          $v0, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2CA4u;
        goto label_2d2ca4;
    }
    ctx->pc = 0x2D2C9Cu;
    {
        const bool branch_taken_0x2d2c9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D2CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C9Cu;
        // 0x2d2ca0: 0x8ea2b734  lw          $v0, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c9c) {
            ctx->pc = 0x2D2D1Cu;
            goto label_2d2d1c;
        }
    }
    ctx->pc = 0x2D2CA4u;
label_2d2ca4:
    // 0x2d2ca4: 0xc087502  jal         func_21D408
label_2d2ca8:
    if (ctx->pc == 0x2D2CA8u) {
        ctx->pc = 0x2D2CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CA4u;
        // 0x2d2ca8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2CACu;
        goto label_2d2cac;
    }
    ctx->pc = 0x2D2CA4u;
    SET_GPR_U32(ctx, 31, 0x2D2CACu);
    ctx->pc = 0x2D2CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2CA4u;
    // 0x2d2ca8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D2CA4u, 0x2D2CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2CACu;
label_2d2cac:
    // 0x2d2cac: 0x8c43026c  lw          $v1, 0x26C($v0)
    ctx->pc = 0x2d2cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
label_2d2cb0:
    // 0x2d2cb0: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x2d2cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_2d2cb4:
    // 0x2d2cb4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_2d2cb8:
    if (ctx->pc == 0x2D2CB8u) {
        ctx->pc = 0x2D2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CB4u;
        // 0x2d2cb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2CBCu;
        goto label_2d2cbc;
    }
    ctx->pc = 0x2D2CB4u;
    {
        const bool branch_taken_0x2d2cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CB4u;
        // 0x2d2cb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2cb4) {
            ctx->pc = 0x2D2D18u;
            goto label_2d2d18;
        }
    }
    ctx->pc = 0x2D2CBCu;
label_2d2cbc:
    // 0x2d2cbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d2cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d2cc0:
    // 0x2d2cc0: 0xc0891de  jal         func_224778
label_2d2cc4:
    if (ctx->pc == 0x2D2CC4u) {
        ctx->pc = 0x2D2CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CC0u;
        // 0x2d2cc4: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2CC8u;
        goto label_2d2cc8;
    }
    ctx->pc = 0x2D2CC0u;
    SET_GPR_U32(ctx, 31, 0x2D2CC8u);
    ctx->pc = 0x2D2CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2CC0u;
    // 0x2d2cc4: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2D2CC0u, 0x2D2CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2CC8u;
label_2d2cc8:
    // 0x2d2cc8: 0x1453003a  bne         $v0, $s3, . + 4 + (0x3A << 2)
label_2d2ccc:
    if (ctx->pc == 0x2D2CCCu) {
        ctx->pc = 0x2D2CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CC8u;
        // 0x2d2ccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2CD0u;
        goto label_2d2cd0;
    }
    ctx->pc = 0x2D2CC8u;
    {
        const bool branch_taken_0x2d2cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2D2CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CC8u;
        // 0x2d2ccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2cc8) {
            ctx->pc = 0x2D2DB4u;
            goto label_2d2db4;
        }
    }
    ctx->pc = 0x2D2CD0u;
label_2d2cd0:
    // 0x2d2cd0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2d2cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2d2cd4:
    // 0x2d2cd4: 0x24050e10  addiu       $a1, $zero, 0xE10
    ctx->pc = 0x2d2cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
label_2d2cd8:
    // 0x2d2cd8: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2d2cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2d2cdc:
    // 0x2d2cdc: 0xc0cd4fc  jal         func_3353F0
label_2d2ce0:
    if (ctx->pc == 0x2D2CE0u) {
        ctx->pc = 0x2D2CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CDCu;
        // 0x2d2ce0: 0x24061518  addiu       $a2, $zero, 0x1518 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2CE4u;
        goto label_2d2ce4;
    }
    ctx->pc = 0x2D2CDCu;
    SET_GPR_U32(ctx, 31, 0x2D2CE4u);
    ctx->pc = 0x2D2CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2CDCu;
    // 0x2d2ce0: 0x24061518  addiu       $a2, $zero, 0x1518 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2D2CDCu, 0x2D2CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2CE4u;
label_2d2ce4:
    // 0x2d2ce4: 0x8ea7b734  lw          $a3, -0x48CC($s5)
    ctx->pc = 0x2d2ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
label_2d2ce8:
    // 0x2d2ce8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d2ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d2cec:
    // 0x2d2cec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d2cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d2cf0:
    // 0x2d2cf0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x2d2cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2d2cf4:
    // 0x2d2cf4: 0x8ce30048  lw          $v1, 0x48($a3)
    ctx->pc = 0x2d2cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
label_2d2cf8:
    // 0x2d2cf8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d2cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2d2cfc:
    // 0x2d2cfc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d2cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d2d00:
    // 0x2d2d00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d2d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2d04:
    // 0x2d2d04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d2d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d2d08:
    // 0x2d2d08: 0xc0a3892  jal         func_28E248
label_2d2d0c:
    if (ctx->pc == 0x2D2D0Cu) {
        ctx->pc = 0x2D2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D08u;
        // 0x2d2d0c: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2D10u;
        goto label_2d2d10;
    }
    ctx->pc = 0x2D2D08u;
    SET_GPR_U32(ctx, 31, 0x2D2D10u);
    ctx->pc = 0x2D2D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2D08u;
    // 0x2d2d0c: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2D2D08u, 0x2D2D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D10u;
label_2d2d10:
    // 0x2d2d10: 0x10000028  b           . + 4 + (0x28 << 2)
label_2d2d14:
    if (ctx->pc == 0x2D2D14u) {
        ctx->pc = 0x2D2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D10u;
        // 0x2d2d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2D18u;
        goto label_2d2d18;
    }
    ctx->pc = 0x2D2D10u;
    {
        const bool branch_taken_0x2d2d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D10u;
        // 0x2d2d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d10) {
            ctx->pc = 0x2D2DB4u;
            goto label_2d2db4;
        }
    }
    ctx->pc = 0x2D2D18u;
label_2d2d18:
    // 0x2d2d18: 0x8ea2b734  lw          $v0, -0x48CC($s5)
    ctx->pc = 0x2d2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
label_2d2d1c:
    // 0x2d2d1c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2d2d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d2d20:
    // 0x2d2d20: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2d2d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2d2d24:
    // 0x2d2d24: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2d2d24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2d2d28:
    // 0x2d2d28: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_2d2d2c:
    if (ctx->pc == 0x2D2D2Cu) {
        ctx->pc = 0x2D2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D28u;
        // 0x2d2d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2D30u;
        goto label_2d2d30;
    }
    ctx->pc = 0x2D2D28u;
    {
        const bool branch_taken_0x2d2d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D28u;
        // 0x2d2d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d28) {
            ctx->pc = 0x2D2DB4u;
            goto label_2d2db4;
        }
    }
    ctx->pc = 0x2D2D30u;
label_2d2d30:
    // 0x2d2d30: 0xc0a47b4  jal         func_291ED0
label_2d2d34:
    if (ctx->pc == 0x2D2D34u) {
        ctx->pc = 0x2D2D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D30u;
        // 0x2d2d34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2D38u;
        goto label_2d2d38;
    }
    ctx->pc = 0x2D2D30u;
    SET_GPR_U32(ctx, 31, 0x2D2D38u);
    ctx->pc = 0x2D2D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2D30u;
    // 0x2d2d34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2D2D30u, 0x2D2D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D38u;
label_2d2d38:
    // 0x2d2d38: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2d2d3c:
    if (ctx->pc == 0x2D2D3Cu) {
        ctx->pc = 0x2D2D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D38u;
        // 0x2d2d3c: 0x8ea5b734  lw          $a1, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2D40u;
        goto label_2d2d40;
    }
    ctx->pc = 0x2D2D38u;
    {
        const bool branch_taken_0x2d2d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D38u;
        // 0x2d2d3c: 0x8ea5b734  lw          $a1, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d38) {
            ctx->pc = 0x2D2DB0u;
            goto label_2d2db0;
        }
    }
    ctx->pc = 0x2D2D40u;
label_2d2d40:
    // 0x2d2d40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d2d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d2d44:
    // 0x2d2d44: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2d2d44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2d2d48:
    // 0x2d2d48: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2d2d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2d2d4c:
    // 0x2d2d4c: 0x40f809  jalr        $v0
label_2d2d50:
    if (ctx->pc == 0x2D2D50u) {
        ctx->pc = 0x2D2D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D4Cu;
        // 0x2d2d50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2D54u;
        goto label_2d2d54;
    }
    ctx->pc = 0x2D2D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D2D54u);
        ctx->pc = 0x2D2D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D4Cu;
        // 0x2d2d50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2D4Cu, 0x2D2D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D2D54u;
label_2d2d54:
    // 0x2d2d54: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2d2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2d2d58:
    // 0x2d2d58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d2d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2d2d5c:
    // 0x2d2d5c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2d2d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2d2d60:
    // 0x2d2d60: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x2d2d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_2d2d64:
    // 0x2d2d64: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x2d2d64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2d2d68:
    // 0x2d2d68: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x2d2d68u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_2d2d6c:
    // 0x2d2d6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d2d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d2d70:
    // 0x2d2d70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d2d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d2d74:
    // 0x2d2d74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d2d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d2d78:
    // 0x2d2d78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d2d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2d7c:
    // 0x2d2d7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d2d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2d80:
    // 0x2d2d80: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d2d80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2d84:
    // 0x2d2d84: 0xc088178  jal         func_2205E0
label_2d2d88:
    if (ctx->pc == 0x2D2D88u) {
        ctx->pc = 0x2D2D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D84u;
        // 0x2d2d88: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2D8Cu;
        goto label_2d2d8c;
    }
    ctx->pc = 0x2D2D84u;
    SET_GPR_U32(ctx, 31, 0x2D2D8Cu);
    ctx->pc = 0x2D2D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2D84u;
    // 0x2d2d88: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2D2D84u, 0x2D2D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D8Cu;
label_2d2d8c:
    // 0x2d2d8c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2d2d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2d2d90:
    // 0x2d2d90: 0x24051770  addiu       $a1, $zero, 0x1770
    ctx->pc = 0x2d2d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_2d2d94:
    // 0x2d2d94: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2d2d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2d2d98:
    // 0x2d2d98: 0xc0cd4fc  jal         func_3353F0
label_2d2d9c:
    if (ctx->pc == 0x2D2D9Cu) {
        ctx->pc = 0x2D2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D98u;
        // 0x2d2d9c: 0x24062710  addiu       $a2, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2DA0u;
        goto label_2d2da0;
    }
    ctx->pc = 0x2D2D98u;
    SET_GPR_U32(ctx, 31, 0x2D2DA0u);
    ctx->pc = 0x2D2D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2D98u;
    // 0x2d2d9c: 0x24062710  addiu       $a2, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2D2D98u, 0x2D2DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2DA0u;
label_2d2da0:
    // 0x2d2da0: 0x8ea4b734  lw          $a0, -0x48CC($s5)
    ctx->pc = 0x2d2da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
label_2d2da4:
    // 0x2d2da4: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2d2da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2d2da8:
    // 0x2d2da8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d2da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d2dac:
    // 0x2d2dac: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x2d2dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_2d2db0:
    // 0x2d2db0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d2db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2db4:
    // 0x2d2db4: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2d2db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2d2db8:
    // 0x2d2db8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2d2db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2d2dbc:
    // 0x2d2dbc: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2d2dbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2d2dc0:
    // 0x2d2dc0: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2d2dc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2d2dc4:
    // 0x2d2dc4: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2d2dc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2d2dc8:
    // 0x2d2dc8: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2d2dc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2d2dcc:
    // 0x2d2dcc: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2d2dccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2d2dd0:
    // 0x2d2dd0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2d2dd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2d2dd4:
    // 0x2d2dd4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d2dd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2d2dd8:
    // 0x2d2dd8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2d2dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2d2ddc:
    // 0x2d2ddc: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x2d2ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2d2de0:
    // 0x2d2de0: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x2d2de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2d2de4:
    // 0x2d2de4: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x2d2de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2d2de8:
    // 0x2d2de8: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2d2de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d2dec:
    // 0x2d2dec: 0x3e00008  jr          $ra
label_2d2df0:
    if (ctx->pc == 0x2D2DF0u) {
        ctx->pc = 0x2D2DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DECu;
        // 0x2d2df0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2DF4u;
        goto label_2d2df4;
    }
    ctx->pc = 0x2D2DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DECu;
        // 0x2d2df0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2DF4u;
label_2d2df4:
    // 0x2d2df4: 0x0  nop
    ctx->pc = 0x2d2df4u;
    // NOP
    ctx->pc = 0x2d2df8u;
}
