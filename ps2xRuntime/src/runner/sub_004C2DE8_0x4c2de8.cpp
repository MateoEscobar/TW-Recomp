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

// Function: sub_004C2DE8
// Address: 0x4c2de8 - 0x4c3528
void sub_004C2DE8_0x4c2de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C2DE8_0x4c2de8");
#endif

    switch (ctx->pc) {
        case 0x4c2de8u: goto label_4c2de8;
        case 0x4c2decu: goto label_4c2dec;
        case 0x4c2df0u: goto label_4c2df0;
        case 0x4c2df4u: goto label_4c2df4;
        case 0x4c2df8u: goto label_4c2df8;
        case 0x4c2dfcu: goto label_4c2dfc;
        case 0x4c2e00u: goto label_4c2e00;
        case 0x4c2e04u: goto label_4c2e04;
        case 0x4c2e08u: goto label_4c2e08;
        case 0x4c2e0cu: goto label_4c2e0c;
        case 0x4c2e10u: goto label_4c2e10;
        case 0x4c2e14u: goto label_4c2e14;
        case 0x4c2e18u: goto label_4c2e18;
        case 0x4c2e1cu: goto label_4c2e1c;
        case 0x4c2e20u: goto label_4c2e20;
        case 0x4c2e24u: goto label_4c2e24;
        case 0x4c2e28u: goto label_4c2e28;
        case 0x4c2e2cu: goto label_4c2e2c;
        case 0x4c2e30u: goto label_4c2e30;
        case 0x4c2e34u: goto label_4c2e34;
        case 0x4c2e38u: goto label_4c2e38;
        case 0x4c2e3cu: goto label_4c2e3c;
        case 0x4c2e40u: goto label_4c2e40;
        case 0x4c2e44u: goto label_4c2e44;
        case 0x4c2e48u: goto label_4c2e48;
        case 0x4c2e4cu: goto label_4c2e4c;
        case 0x4c2e50u: goto label_4c2e50;
        case 0x4c2e54u: goto label_4c2e54;
        case 0x4c2e58u: goto label_4c2e58;
        case 0x4c2e5cu: goto label_4c2e5c;
        case 0x4c2e60u: goto label_4c2e60;
        case 0x4c2e64u: goto label_4c2e64;
        case 0x4c2e68u: goto label_4c2e68;
        case 0x4c2e6cu: goto label_4c2e6c;
        case 0x4c2e70u: goto label_4c2e70;
        case 0x4c2e74u: goto label_4c2e74;
        case 0x4c2e78u: goto label_4c2e78;
        case 0x4c2e7cu: goto label_4c2e7c;
        case 0x4c2e80u: goto label_4c2e80;
        case 0x4c2e84u: goto label_4c2e84;
        case 0x4c2e88u: goto label_4c2e88;
        case 0x4c2e8cu: goto label_4c2e8c;
        case 0x4c2e90u: goto label_4c2e90;
        case 0x4c2e94u: goto label_4c2e94;
        case 0x4c2e98u: goto label_4c2e98;
        case 0x4c2e9cu: goto label_4c2e9c;
        case 0x4c2ea0u: goto label_4c2ea0;
        case 0x4c2ea4u: goto label_4c2ea4;
        case 0x4c2ea8u: goto label_4c2ea8;
        case 0x4c2eacu: goto label_4c2eac;
        case 0x4c2eb0u: goto label_4c2eb0;
        case 0x4c2eb4u: goto label_4c2eb4;
        case 0x4c2eb8u: goto label_4c2eb8;
        case 0x4c2ebcu: goto label_4c2ebc;
        case 0x4c2ec0u: goto label_4c2ec0;
        case 0x4c2ec4u: goto label_4c2ec4;
        case 0x4c2ec8u: goto label_4c2ec8;
        case 0x4c2eccu: goto label_4c2ecc;
        case 0x4c2ed0u: goto label_4c2ed0;
        case 0x4c2ed4u: goto label_4c2ed4;
        case 0x4c2ed8u: goto label_4c2ed8;
        case 0x4c2edcu: goto label_4c2edc;
        case 0x4c2ee0u: goto label_4c2ee0;
        case 0x4c2ee4u: goto label_4c2ee4;
        case 0x4c2ee8u: goto label_4c2ee8;
        case 0x4c2eecu: goto label_4c2eec;
        case 0x4c2ef0u: goto label_4c2ef0;
        case 0x4c2ef4u: goto label_4c2ef4;
        case 0x4c2ef8u: goto label_4c2ef8;
        case 0x4c2efcu: goto label_4c2efc;
        case 0x4c2f00u: goto label_4c2f00;
        case 0x4c2f04u: goto label_4c2f04;
        case 0x4c2f08u: goto label_4c2f08;
        case 0x4c2f0cu: goto label_4c2f0c;
        case 0x4c2f10u: goto label_4c2f10;
        case 0x4c2f14u: goto label_4c2f14;
        case 0x4c2f18u: goto label_4c2f18;
        case 0x4c2f1cu: goto label_4c2f1c;
        case 0x4c2f20u: goto label_4c2f20;
        case 0x4c2f24u: goto label_4c2f24;
        case 0x4c2f28u: goto label_4c2f28;
        case 0x4c2f2cu: goto label_4c2f2c;
        case 0x4c2f30u: goto label_4c2f30;
        case 0x4c2f34u: goto label_4c2f34;
        case 0x4c2f38u: goto label_4c2f38;
        case 0x4c2f3cu: goto label_4c2f3c;
        case 0x4c2f40u: goto label_4c2f40;
        case 0x4c2f44u: goto label_4c2f44;
        case 0x4c2f48u: goto label_4c2f48;
        case 0x4c2f4cu: goto label_4c2f4c;
        case 0x4c2f50u: goto label_4c2f50;
        case 0x4c2f54u: goto label_4c2f54;
        case 0x4c2f58u: goto label_4c2f58;
        case 0x4c2f5cu: goto label_4c2f5c;
        case 0x4c2f60u: goto label_4c2f60;
        case 0x4c2f64u: goto label_4c2f64;
        case 0x4c2f68u: goto label_4c2f68;
        case 0x4c2f6cu: goto label_4c2f6c;
        case 0x4c2f70u: goto label_4c2f70;
        case 0x4c2f74u: goto label_4c2f74;
        case 0x4c2f78u: goto label_4c2f78;
        case 0x4c2f7cu: goto label_4c2f7c;
        case 0x4c2f80u: goto label_4c2f80;
        case 0x4c2f84u: goto label_4c2f84;
        case 0x4c2f88u: goto label_4c2f88;
        case 0x4c2f8cu: goto label_4c2f8c;
        case 0x4c2f90u: goto label_4c2f90;
        case 0x4c2f94u: goto label_4c2f94;
        case 0x4c2f98u: goto label_4c2f98;
        case 0x4c2f9cu: goto label_4c2f9c;
        case 0x4c2fa0u: goto label_4c2fa0;
        case 0x4c2fa4u: goto label_4c2fa4;
        case 0x4c2fa8u: goto label_4c2fa8;
        case 0x4c2facu: goto label_4c2fac;
        case 0x4c2fb0u: goto label_4c2fb0;
        case 0x4c2fb4u: goto label_4c2fb4;
        case 0x4c2fb8u: goto label_4c2fb8;
        case 0x4c2fbcu: goto label_4c2fbc;
        case 0x4c2fc0u: goto label_4c2fc0;
        case 0x4c2fc4u: goto label_4c2fc4;
        case 0x4c2fc8u: goto label_4c2fc8;
        case 0x4c2fccu: goto label_4c2fcc;
        case 0x4c2fd0u: goto label_4c2fd0;
        case 0x4c2fd4u: goto label_4c2fd4;
        case 0x4c2fd8u: goto label_4c2fd8;
        case 0x4c2fdcu: goto label_4c2fdc;
        case 0x4c2fe0u: goto label_4c2fe0;
        case 0x4c2fe4u: goto label_4c2fe4;
        case 0x4c2fe8u: goto label_4c2fe8;
        case 0x4c2fecu: goto label_4c2fec;
        case 0x4c2ff0u: goto label_4c2ff0;
        case 0x4c2ff4u: goto label_4c2ff4;
        case 0x4c2ff8u: goto label_4c2ff8;
        case 0x4c2ffcu: goto label_4c2ffc;
        case 0x4c3000u: goto label_4c3000;
        case 0x4c3004u: goto label_4c3004;
        case 0x4c3008u: goto label_4c3008;
        case 0x4c300cu: goto label_4c300c;
        case 0x4c3010u: goto label_4c3010;
        case 0x4c3014u: goto label_4c3014;
        case 0x4c3018u: goto label_4c3018;
        case 0x4c301cu: goto label_4c301c;
        case 0x4c3020u: goto label_4c3020;
        case 0x4c3024u: goto label_4c3024;
        case 0x4c3028u: goto label_4c3028;
        case 0x4c302cu: goto label_4c302c;
        case 0x4c3030u: goto label_4c3030;
        case 0x4c3034u: goto label_4c3034;
        case 0x4c3038u: goto label_4c3038;
        case 0x4c303cu: goto label_4c303c;
        case 0x4c3040u: goto label_4c3040;
        case 0x4c3044u: goto label_4c3044;
        case 0x4c3048u: goto label_4c3048;
        case 0x4c304cu: goto label_4c304c;
        case 0x4c3050u: goto label_4c3050;
        case 0x4c3054u: goto label_4c3054;
        case 0x4c3058u: goto label_4c3058;
        case 0x4c305cu: goto label_4c305c;
        case 0x4c3060u: goto label_4c3060;
        case 0x4c3064u: goto label_4c3064;
        case 0x4c3068u: goto label_4c3068;
        case 0x4c306cu: goto label_4c306c;
        case 0x4c3070u: goto label_4c3070;
        case 0x4c3074u: goto label_4c3074;
        case 0x4c3078u: goto label_4c3078;
        case 0x4c307cu: goto label_4c307c;
        case 0x4c3080u: goto label_4c3080;
        case 0x4c3084u: goto label_4c3084;
        case 0x4c3088u: goto label_4c3088;
        case 0x4c308cu: goto label_4c308c;
        case 0x4c3090u: goto label_4c3090;
        case 0x4c3094u: goto label_4c3094;
        case 0x4c3098u: goto label_4c3098;
        case 0x4c309cu: goto label_4c309c;
        case 0x4c30a0u: goto label_4c30a0;
        case 0x4c30a4u: goto label_4c30a4;
        case 0x4c30a8u: goto label_4c30a8;
        case 0x4c30acu: goto label_4c30ac;
        case 0x4c30b0u: goto label_4c30b0;
        case 0x4c30b4u: goto label_4c30b4;
        case 0x4c30b8u: goto label_4c30b8;
        case 0x4c30bcu: goto label_4c30bc;
        case 0x4c30c0u: goto label_4c30c0;
        case 0x4c30c4u: goto label_4c30c4;
        case 0x4c30c8u: goto label_4c30c8;
        case 0x4c30ccu: goto label_4c30cc;
        case 0x4c30d0u: goto label_4c30d0;
        case 0x4c30d4u: goto label_4c30d4;
        case 0x4c30d8u: goto label_4c30d8;
        case 0x4c30dcu: goto label_4c30dc;
        case 0x4c30e0u: goto label_4c30e0;
        case 0x4c30e4u: goto label_4c30e4;
        case 0x4c30e8u: goto label_4c30e8;
        case 0x4c30ecu: goto label_4c30ec;
        case 0x4c30f0u: goto label_4c30f0;
        case 0x4c30f4u: goto label_4c30f4;
        case 0x4c30f8u: goto label_4c30f8;
        case 0x4c30fcu: goto label_4c30fc;
        case 0x4c3100u: goto label_4c3100;
        case 0x4c3104u: goto label_4c3104;
        case 0x4c3108u: goto label_4c3108;
        case 0x4c310cu: goto label_4c310c;
        case 0x4c3110u: goto label_4c3110;
        case 0x4c3114u: goto label_4c3114;
        case 0x4c3118u: goto label_4c3118;
        case 0x4c311cu: goto label_4c311c;
        case 0x4c3120u: goto label_4c3120;
        case 0x4c3124u: goto label_4c3124;
        case 0x4c3128u: goto label_4c3128;
        case 0x4c312cu: goto label_4c312c;
        case 0x4c3130u: goto label_4c3130;
        case 0x4c3134u: goto label_4c3134;
        case 0x4c3138u: goto label_4c3138;
        case 0x4c313cu: goto label_4c313c;
        case 0x4c3140u: goto label_4c3140;
        case 0x4c3144u: goto label_4c3144;
        case 0x4c3148u: goto label_4c3148;
        case 0x4c314cu: goto label_4c314c;
        case 0x4c3150u: goto label_4c3150;
        case 0x4c3154u: goto label_4c3154;
        case 0x4c3158u: goto label_4c3158;
        case 0x4c315cu: goto label_4c315c;
        case 0x4c3160u: goto label_4c3160;
        case 0x4c3164u: goto label_4c3164;
        case 0x4c3168u: goto label_4c3168;
        case 0x4c316cu: goto label_4c316c;
        case 0x4c3170u: goto label_4c3170;
        case 0x4c3174u: goto label_4c3174;
        case 0x4c3178u: goto label_4c3178;
        case 0x4c317cu: goto label_4c317c;
        case 0x4c3180u: goto label_4c3180;
        case 0x4c3184u: goto label_4c3184;
        case 0x4c3188u: goto label_4c3188;
        case 0x4c318cu: goto label_4c318c;
        case 0x4c3190u: goto label_4c3190;
        case 0x4c3194u: goto label_4c3194;
        case 0x4c3198u: goto label_4c3198;
        case 0x4c319cu: goto label_4c319c;
        case 0x4c31a0u: goto label_4c31a0;
        case 0x4c31a4u: goto label_4c31a4;
        case 0x4c31a8u: goto label_4c31a8;
        case 0x4c31acu: goto label_4c31ac;
        case 0x4c31b0u: goto label_4c31b0;
        case 0x4c31b4u: goto label_4c31b4;
        case 0x4c31b8u: goto label_4c31b8;
        case 0x4c31bcu: goto label_4c31bc;
        case 0x4c31c0u: goto label_4c31c0;
        case 0x4c31c4u: goto label_4c31c4;
        case 0x4c31c8u: goto label_4c31c8;
        case 0x4c31ccu: goto label_4c31cc;
        case 0x4c31d0u: goto label_4c31d0;
        case 0x4c31d4u: goto label_4c31d4;
        case 0x4c31d8u: goto label_4c31d8;
        case 0x4c31dcu: goto label_4c31dc;
        case 0x4c31e0u: goto label_4c31e0;
        case 0x4c31e4u: goto label_4c31e4;
        case 0x4c31e8u: goto label_4c31e8;
        case 0x4c31ecu: goto label_4c31ec;
        case 0x4c31f0u: goto label_4c31f0;
        case 0x4c31f4u: goto label_4c31f4;
        case 0x4c31f8u: goto label_4c31f8;
        case 0x4c31fcu: goto label_4c31fc;
        case 0x4c3200u: goto label_4c3200;
        case 0x4c3204u: goto label_4c3204;
        case 0x4c3208u: goto label_4c3208;
        case 0x4c320cu: goto label_4c320c;
        case 0x4c3210u: goto label_4c3210;
        case 0x4c3214u: goto label_4c3214;
        case 0x4c3218u: goto label_4c3218;
        case 0x4c321cu: goto label_4c321c;
        case 0x4c3220u: goto label_4c3220;
        case 0x4c3224u: goto label_4c3224;
        case 0x4c3228u: goto label_4c3228;
        case 0x4c322cu: goto label_4c322c;
        case 0x4c3230u: goto label_4c3230;
        case 0x4c3234u: goto label_4c3234;
        case 0x4c3238u: goto label_4c3238;
        case 0x4c323cu: goto label_4c323c;
        case 0x4c3240u: goto label_4c3240;
        case 0x4c3244u: goto label_4c3244;
        case 0x4c3248u: goto label_4c3248;
        case 0x4c324cu: goto label_4c324c;
        case 0x4c3250u: goto label_4c3250;
        case 0x4c3254u: goto label_4c3254;
        case 0x4c3258u: goto label_4c3258;
        case 0x4c325cu: goto label_4c325c;
        case 0x4c3260u: goto label_4c3260;
        case 0x4c3264u: goto label_4c3264;
        case 0x4c3268u: goto label_4c3268;
        case 0x4c326cu: goto label_4c326c;
        case 0x4c3270u: goto label_4c3270;
        case 0x4c3274u: goto label_4c3274;
        case 0x4c3278u: goto label_4c3278;
        case 0x4c327cu: goto label_4c327c;
        case 0x4c3280u: goto label_4c3280;
        case 0x4c3284u: goto label_4c3284;
        case 0x4c3288u: goto label_4c3288;
        case 0x4c328cu: goto label_4c328c;
        case 0x4c3290u: goto label_4c3290;
        case 0x4c3294u: goto label_4c3294;
        case 0x4c3298u: goto label_4c3298;
        case 0x4c329cu: goto label_4c329c;
        case 0x4c32a0u: goto label_4c32a0;
        case 0x4c32a4u: goto label_4c32a4;
        case 0x4c32a8u: goto label_4c32a8;
        case 0x4c32acu: goto label_4c32ac;
        case 0x4c32b0u: goto label_4c32b0;
        case 0x4c32b4u: goto label_4c32b4;
        case 0x4c32b8u: goto label_4c32b8;
        case 0x4c32bcu: goto label_4c32bc;
        case 0x4c32c0u: goto label_4c32c0;
        case 0x4c32c4u: goto label_4c32c4;
        case 0x4c32c8u: goto label_4c32c8;
        case 0x4c32ccu: goto label_4c32cc;
        case 0x4c32d0u: goto label_4c32d0;
        case 0x4c32d4u: goto label_4c32d4;
        case 0x4c32d8u: goto label_4c32d8;
        case 0x4c32dcu: goto label_4c32dc;
        case 0x4c32e0u: goto label_4c32e0;
        case 0x4c32e4u: goto label_4c32e4;
        case 0x4c32e8u: goto label_4c32e8;
        case 0x4c32ecu: goto label_4c32ec;
        case 0x4c32f0u: goto label_4c32f0;
        case 0x4c32f4u: goto label_4c32f4;
        case 0x4c32f8u: goto label_4c32f8;
        case 0x4c32fcu: goto label_4c32fc;
        case 0x4c3300u: goto label_4c3300;
        case 0x4c3304u: goto label_4c3304;
        case 0x4c3308u: goto label_4c3308;
        case 0x4c330cu: goto label_4c330c;
        case 0x4c3310u: goto label_4c3310;
        case 0x4c3314u: goto label_4c3314;
        case 0x4c3318u: goto label_4c3318;
        case 0x4c331cu: goto label_4c331c;
        case 0x4c3320u: goto label_4c3320;
        case 0x4c3324u: goto label_4c3324;
        case 0x4c3328u: goto label_4c3328;
        case 0x4c332cu: goto label_4c332c;
        case 0x4c3330u: goto label_4c3330;
        case 0x4c3334u: goto label_4c3334;
        case 0x4c3338u: goto label_4c3338;
        case 0x4c333cu: goto label_4c333c;
        case 0x4c3340u: goto label_4c3340;
        case 0x4c3344u: goto label_4c3344;
        case 0x4c3348u: goto label_4c3348;
        case 0x4c334cu: goto label_4c334c;
        case 0x4c3350u: goto label_4c3350;
        case 0x4c3354u: goto label_4c3354;
        case 0x4c3358u: goto label_4c3358;
        case 0x4c335cu: goto label_4c335c;
        case 0x4c3360u: goto label_4c3360;
        case 0x4c3364u: goto label_4c3364;
        case 0x4c3368u: goto label_4c3368;
        case 0x4c336cu: goto label_4c336c;
        case 0x4c3370u: goto label_4c3370;
        case 0x4c3374u: goto label_4c3374;
        case 0x4c3378u: goto label_4c3378;
        case 0x4c337cu: goto label_4c337c;
        case 0x4c3380u: goto label_4c3380;
        case 0x4c3384u: goto label_4c3384;
        case 0x4c3388u: goto label_4c3388;
        case 0x4c338cu: goto label_4c338c;
        case 0x4c3390u: goto label_4c3390;
        case 0x4c3394u: goto label_4c3394;
        case 0x4c3398u: goto label_4c3398;
        case 0x4c339cu: goto label_4c339c;
        case 0x4c33a0u: goto label_4c33a0;
        case 0x4c33a4u: goto label_4c33a4;
        case 0x4c33a8u: goto label_4c33a8;
        case 0x4c33acu: goto label_4c33ac;
        case 0x4c33b0u: goto label_4c33b0;
        case 0x4c33b4u: goto label_4c33b4;
        case 0x4c33b8u: goto label_4c33b8;
        case 0x4c33bcu: goto label_4c33bc;
        case 0x4c33c0u: goto label_4c33c0;
        case 0x4c33c4u: goto label_4c33c4;
        case 0x4c33c8u: goto label_4c33c8;
        case 0x4c33ccu: goto label_4c33cc;
        case 0x4c33d0u: goto label_4c33d0;
        case 0x4c33d4u: goto label_4c33d4;
        case 0x4c33d8u: goto label_4c33d8;
        case 0x4c33dcu: goto label_4c33dc;
        case 0x4c33e0u: goto label_4c33e0;
        case 0x4c33e4u: goto label_4c33e4;
        case 0x4c33e8u: goto label_4c33e8;
        case 0x4c33ecu: goto label_4c33ec;
        case 0x4c33f0u: goto label_4c33f0;
        case 0x4c33f4u: goto label_4c33f4;
        case 0x4c33f8u: goto label_4c33f8;
        case 0x4c33fcu: goto label_4c33fc;
        case 0x4c3400u: goto label_4c3400;
        case 0x4c3404u: goto label_4c3404;
        case 0x4c3408u: goto label_4c3408;
        case 0x4c340cu: goto label_4c340c;
        case 0x4c3410u: goto label_4c3410;
        case 0x4c3414u: goto label_4c3414;
        case 0x4c3418u: goto label_4c3418;
        case 0x4c341cu: goto label_4c341c;
        case 0x4c3420u: goto label_4c3420;
        case 0x4c3424u: goto label_4c3424;
        case 0x4c3428u: goto label_4c3428;
        case 0x4c342cu: goto label_4c342c;
        case 0x4c3430u: goto label_4c3430;
        case 0x4c3434u: goto label_4c3434;
        case 0x4c3438u: goto label_4c3438;
        case 0x4c343cu: goto label_4c343c;
        case 0x4c3440u: goto label_4c3440;
        case 0x4c3444u: goto label_4c3444;
        case 0x4c3448u: goto label_4c3448;
        case 0x4c344cu: goto label_4c344c;
        case 0x4c3450u: goto label_4c3450;
        case 0x4c3454u: goto label_4c3454;
        case 0x4c3458u: goto label_4c3458;
        case 0x4c345cu: goto label_4c345c;
        case 0x4c3460u: goto label_4c3460;
        case 0x4c3464u: goto label_4c3464;
        case 0x4c3468u: goto label_4c3468;
        case 0x4c346cu: goto label_4c346c;
        case 0x4c3470u: goto label_4c3470;
        case 0x4c3474u: goto label_4c3474;
        case 0x4c3478u: goto label_4c3478;
        case 0x4c347cu: goto label_4c347c;
        case 0x4c3480u: goto label_4c3480;
        case 0x4c3484u: goto label_4c3484;
        case 0x4c3488u: goto label_4c3488;
        case 0x4c348cu: goto label_4c348c;
        case 0x4c3490u: goto label_4c3490;
        case 0x4c3494u: goto label_4c3494;
        case 0x4c3498u: goto label_4c3498;
        case 0x4c349cu: goto label_4c349c;
        case 0x4c34a0u: goto label_4c34a0;
        case 0x4c34a4u: goto label_4c34a4;
        case 0x4c34a8u: goto label_4c34a8;
        case 0x4c34acu: goto label_4c34ac;
        case 0x4c34b0u: goto label_4c34b0;
        case 0x4c34b4u: goto label_4c34b4;
        case 0x4c34b8u: goto label_4c34b8;
        case 0x4c34bcu: goto label_4c34bc;
        case 0x4c34c0u: goto label_4c34c0;
        case 0x4c34c4u: goto label_4c34c4;
        case 0x4c34c8u: goto label_4c34c8;
        case 0x4c34ccu: goto label_4c34cc;
        case 0x4c34d0u: goto label_4c34d0;
        case 0x4c34d4u: goto label_4c34d4;
        case 0x4c34d8u: goto label_4c34d8;
        case 0x4c34dcu: goto label_4c34dc;
        case 0x4c34e0u: goto label_4c34e0;
        case 0x4c34e4u: goto label_4c34e4;
        case 0x4c34e8u: goto label_4c34e8;
        case 0x4c34ecu: goto label_4c34ec;
        case 0x4c34f0u: goto label_4c34f0;
        case 0x4c34f4u: goto label_4c34f4;
        case 0x4c34f8u: goto label_4c34f8;
        case 0x4c34fcu: goto label_4c34fc;
        case 0x4c3500u: goto label_4c3500;
        case 0x4c3504u: goto label_4c3504;
        case 0x4c3508u: goto label_4c3508;
        case 0x4c350cu: goto label_4c350c;
        case 0x4c3510u: goto label_4c3510;
        case 0x4c3514u: goto label_4c3514;
        case 0x4c3518u: goto label_4c3518;
        case 0x4c351cu: goto label_4c351c;
        case 0x4c3520u: goto label_4c3520;
        case 0x4c3524u: goto label_4c3524;
        default: break;
    }

    ctx->pc = 0x4c2de8u;

label_4c2de8:
    // 0x4c2de8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4c2de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4c2dec:
    // 0x4c2dec: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x4c2decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_4c2df0:
    // 0x4c2df0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x4c2df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_4c2df4:
    // 0x4c2df4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4c2df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4c2df8:
    // 0x4c2df8: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x4c2df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_4c2dfc:
    // 0x4c2dfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c2dfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c2e00:
    // 0x4c2e00: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x4c2e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_4c2e04:
    // 0x4c2e04: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x4c2e04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4c2e08:
    // 0x4c2e08: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x4c2e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_4c2e0c:
    // 0x4c2e0c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x4c2e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_4c2e10:
    // 0x4c2e10: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x4c2e10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_4c2e14:
    // 0x4c2e14: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x4c2e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_4c2e18:
    // 0x4c2e18: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4c2e18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c2e1c:
    // 0x4c2e1c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x4c2e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_4c2e20:
    // 0x4c2e20: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x4c2e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_4c2e24:
    // 0x4c2e24: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x4c2e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_4c2e28:
    // 0x4c2e28: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x4c2e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_4c2e2c:
    // 0x4c2e2c: 0xafa80044  sw          $t0, 0x44($sp)
    ctx->pc = 0x4c2e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 8));
label_4c2e30:
    // 0x4c2e30: 0xafa90048  sw          $t1, 0x48($sp)
    ctx->pc = 0x4c2e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 9));
label_4c2e34:
    // 0x4c2e34: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4c2e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_4c2e38:
    // 0x4c2e38: 0x8fbe00a8  lw          $fp, 0xA8($sp)
    ctx->pc = 0x4c2e38u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_4c2e3c:
    // 0x4c2e3c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_4c2e40:
    if (ctx->pc == 0x4C2E40u) {
        ctx->pc = 0x4C2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2E3Cu;
        // 0x4c2e40: 0x8fb400b0  lw          $s4, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2E44u;
        goto label_4c2e44;
    }
    ctx->pc = 0x4C2E3Cu;
    {
        const bool branch_taken_0x4c2e3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2E3Cu;
        // 0x4c2e40: 0x8fb400b0  lw          $s4, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2e3c) {
            ctx->pc = 0x4C2E4Cu;
            goto label_4c2e4c;
        }
    }
    ctx->pc = 0x4C2E44u;
label_4c2e44:
    // 0x4c2e44: 0x56c00003  bnel        $s6, $zero, . + 4 + (0x3 << 2)
label_4c2e48:
    if (ctx->pc == 0x4C2E48u) {
        ctx->pc = 0x4C2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2E44u;
        // 0x4c2e48: 0x8e250254  lw          $a1, 0x254($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2E4Cu;
        goto label_4c2e4c;
    }
    ctx->pc = 0x4C2E44u;
    {
        const bool branch_taken_0x4c2e44 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c2e44) {
            ctx->pc = 0x4C2E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2E44u;
            // 0x4c2e48: 0x8e250254  lw          $a1, 0x254($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2E54u;
            goto label_4c2e54;
        }
    }
    ctx->pc = 0x4C2E4Cu;
label_4c2e4c:
    // 0x4c2e4c: 0x100001aa  b           . + 4 + (0x1AA << 2)
label_4c2e50:
    if (ctx->pc == 0x4C2E50u) {
        ctx->pc = 0x4C2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2E4Cu;
        // 0x4c2e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2E54u;
        goto label_4c2e54;
    }
    ctx->pc = 0x4C2E4Cu;
    {
        const bool branch_taken_0x4c2e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2E4Cu;
        // 0x4c2e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2e4c) {
            ctx->pc = 0x4C34F8u;
            goto label_4c34f8;
        }
    }
    ctx->pc = 0x4C2E54u;
label_4c2e54:
    // 0x4c2e54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c2e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c2e58:
    // 0x4c2e58: 0xc13399c  jal         func_4CE670
label_4c2e5c:
    if (ctx->pc == 0x4C2E5Cu) {
        ctx->pc = 0x4C2E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2E58u;
        // 0x4c2e5c: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2E60u;
        goto label_4c2e60;
    }
    ctx->pc = 0x4C2E58u;
    SET_GPR_U32(ctx, 31, 0x4C2E60u);
    ctx->pc = 0x4C2E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2E58u;
    // 0x4c2e5c: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4C2E58u, 0x4C2E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2E60u;
label_4c2e60:
    // 0x4c2e60: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x4c2e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4c2e64:
    // 0x4c2e64: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4c2e64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c2e68:
    // 0x4c2e68: 0x8e250254  lw          $a1, 0x254($s1)
    ctx->pc = 0x4c2e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
label_4c2e6c:
    // 0x4c2e6c: 0xc13399c  jal         func_4CE670
label_4c2e70:
    if (ctx->pc == 0x4C2E70u) {
        ctx->pc = 0x4C2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2E6Cu;
        // 0x4c2e70: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2E74u;
        goto label_4c2e74;
    }
    ctx->pc = 0x4C2E6Cu;
    SET_GPR_U32(ctx, 31, 0x4C2E74u);
    ctx->pc = 0x4C2E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2E6Cu;
    // 0x4c2e70: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4C2E6Cu, 0x4C2E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2E74u;
label_4c2e74:
    // 0x4c2e74: 0x8e250258  lw          $a1, 0x258($s1)
    ctx->pc = 0x4c2e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_4c2e78:
    // 0x4c2e78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4c2e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4c2e7c:
    // 0x4c2e7c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x4c2e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_4c2e80:
    // 0x4c2e80: 0xc13399c  jal         func_4CE670
label_4c2e84:
    if (ctx->pc == 0x4C2E84u) {
        ctx->pc = 0x4C2E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2E80u;
        // 0x4c2e84: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2E88u;
        goto label_4c2e88;
    }
    ctx->pc = 0x4C2E80u;
    SET_GPR_U32(ctx, 31, 0x4C2E88u);
    ctx->pc = 0x4C2E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2E80u;
    // 0x4c2e84: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4C2E80u, 0x4C2E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2E88u;
label_4c2e88:
    // 0x4c2e88: 0x8e250258  lw          $a1, 0x258($s1)
    ctx->pc = 0x4c2e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_4c2e8c:
    // 0x4c2e8c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4c2e8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c2e90:
    // 0x4c2e90: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x4c2e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4c2e94:
    // 0x4c2e94: 0xc13399c  jal         func_4CE670
label_4c2e98:
    if (ctx->pc == 0x4C2E98u) {
        ctx->pc = 0x4C2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2E94u;
        // 0x4c2e98: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2E9Cu;
        goto label_4c2e9c;
    }
    ctx->pc = 0x4C2E94u;
    SET_GPR_U32(ctx, 31, 0x4C2E9Cu);
    ctx->pc = 0x4C2E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2E94u;
    // 0x4c2e98: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4C2E94u, 0x4C2E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2E9Cu;
label_4c2e9c:
    // 0x4c2e9c: 0x8e260258  lw          $a2, 0x258($s1)
    ctx->pc = 0x4c2e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_4c2ea0:
    // 0x4c2ea0: 0x8e250254  lw          $a1, 0x254($s1)
    ctx->pc = 0x4c2ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
label_4c2ea4:
    // 0x4c2ea4: 0x2a6202b  sltu        $a0, $s5, $a2
    ctx->pc = 0x4c2ea4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4c2ea8:
    // 0x4c2ea8: 0x8e270310  lw          $a3, 0x310($s1)
    ctx->pc = 0x4c2ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_4c2eac:
    // 0x4c2eac: 0xc4a80a  movz        $s5, $a2, $a0
    ctx->pc = 0x4c2eacu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 6));
label_4c2eb0:
    // 0x4c2eb0: 0x265182b  sltu        $v1, $s3, $a1
    ctx->pc = 0x4c2eb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4c2eb4:
    // 0x4c2eb4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x4c2eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4c2eb8:
    // 0x4c2eb8: 0xa3980a  movz        $s3, $a1, $v1
    ctx->pc = 0x4c2eb8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
label_4c2ebc:
    // 0x4c2ebc: 0xd5f023  subu        $fp, $a2, $s5
    ctx->pc = 0x4c2ebcu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_4c2ec0:
    // 0x4c2ec0: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x4c2ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_4c2ec4:
    // 0x4c2ec4: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x4c2ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4c2ec8:
    // 0x4c2ec8: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x4c2ec8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c2ecc:
    // 0x4c2ecc: 0xc4202b  sltu        $a0, $a2, $a0
    ctx->pc = 0x4c2eccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c2ed0:
    // 0x4c2ed0: 0xb32823  subu        $a1, $a1, $s3
    ctx->pc = 0x4c2ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_4c2ed4:
    // 0x4c2ed4: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x4c2ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4c2ed8:
    // 0x4c2ed8: 0x44f00a  movz        $fp, $v0, $a0
    ctx->pc = 0x4c2ed8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
label_4c2edc:
    // 0x4c2edc: 0xa3300b  movn        $a2, $a1, $v1
    ctx->pc = 0x4c2edcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
label_4c2ee0:
    // 0x4c2ee0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_4c2ee4:
    if (ctx->pc == 0x4C2EE4u) {
        ctx->pc = 0x4C2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2EE0u;
        // 0x4c2ee4: 0xafa600a0  sw          $a2, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2EE8u;
        goto label_4c2ee8;
    }
    ctx->pc = 0x4C2EE0u;
    {
        const bool branch_taken_0x4c2ee0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2EE0u;
        // 0x4c2ee4: 0xafa600a0  sw          $a2, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2ee0) {
            ctx->pc = 0x4C2EF8u;
            goto label_4c2ef8;
        }
    }
    ctx->pc = 0x4C2EE8u;
label_4c2ee8:
    // 0x4c2ee8: 0x13c00183  beqz        $fp, . + 4 + (0x183 << 2)
label_4c2eec:
    if (ctx->pc == 0x4C2EECu) {
        ctx->pc = 0x4C2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2EE8u;
        // 0x4c2eec: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2EF0u;
        goto label_4c2ef0;
    }
    ctx->pc = 0x4C2EE8u;
    {
        const bool branch_taken_0x4c2ee8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2EE8u;
        // 0x4c2eec: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2ee8) {
            ctx->pc = 0x4C34F8u;
            goto label_4c34f8;
        }
    }
    ctx->pc = 0x4C2EF0u;
label_4c2ef0:
    // 0x4c2ef0: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
label_4c2ef4:
    if (ctx->pc == 0x4C2EF4u) {
        ctx->pc = 0x4C2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2EF0u;
        // 0x4c2ef4: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2EF8u;
        goto label_4c2ef8;
    }
    ctx->pc = 0x4C2EF0u;
    {
        const bool branch_taken_0x4c2ef0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2ef0) {
            ctx->pc = 0x4C2EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2EF0u;
            // 0x4c2ef4: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2F00u;
            goto label_4c2f00;
        }
    }
    ctx->pc = 0x4C2EF8u;
label_4c2ef8:
    // 0x4c2ef8: 0x1000017f  b           . + 4 + (0x17F << 2)
label_4c2efc:
    if (ctx->pc == 0x4C2EFCu) {
        ctx->pc = 0x4C2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2EF8u;
        // 0x4c2efc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2F00u;
        goto label_4c2f00;
    }
    ctx->pc = 0x4C2EF8u;
    {
        const bool branch_taken_0x4c2ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2EF8u;
        // 0x4c2efc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2ef8) {
            ctx->pc = 0x4C34F8u;
            goto label_4c34f8;
        }
    }
    ctx->pc = 0x4C2F00u;
label_4c2f00:
    // 0x4c2f00: 0x3c037003  lui         $v1, 0x7003
    ctx->pc = 0x4c2f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28675 << 16));
label_4c2f04:
    // 0x4c2f04: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x4c2f04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c2f08:
    // 0x4c2f08: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x4c2f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_4c2f0c:
    // 0x4c2f0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c2f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4c2f10:
    // 0x4c2f10: 0xae370138  sw          $s7, 0x138($s1)
    ctx->pc = 0x4c2f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 23));
label_4c2f14:
    // 0x4c2f14: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_4c2f18:
    if (ctx->pc == 0x4C2F18u) {
        ctx->pc = 0x4C2F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2F14u;
        // 0x4c2f18: 0x282a025  or          $s4, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2F1Cu;
        goto label_4c2f1c;
    }
    ctx->pc = 0x4C2F14u;
    {
        const bool branch_taken_0x4c2f14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C2F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2F14u;
        // 0x4c2f18: 0x282a025  or          $s4, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2f14) {
            ctx->pc = 0x4C2F28u;
            goto label_4c2f28;
        }
    }
    ctx->pc = 0x4C2F1Cu;
label_4c2f1c:
    // 0x4c2f1c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c2f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4c2f20:
    // 0x4c2f20: 0x3442f7ff  ori         $v0, $v0, 0xF7FF
    ctx->pc = 0x4c2f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63487);
label_4c2f24:
    // 0x4c2f24: 0x282a024  and         $s4, $s4, $v0
    ctx->pc = 0x4c2f24u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_4c2f28:
    // 0x4c2f28: 0x3284000f  andi        $a0, $s4, 0xF
    ctx->pc = 0x4c2f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
label_4c2f2c:
    // 0x4c2f2c: 0xc132874  jal         func_4CA1D0
label_4c2f30:
    if (ctx->pc == 0x4C2F30u) {
        ctx->pc = 0x4C2F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2F2Cu;
        // 0x4c2f30: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2F34u;
        goto label_4c2f34;
    }
    ctx->pc = 0x4C2F2Cu;
    SET_GPR_U32(ctx, 31, 0x4C2F34u);
    ctx->pc = 0x4C2F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2F2Cu;
    // 0x4c2f30: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CA1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CA1D0u, 0x4C2F2Cu, 0x4C2F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2F34u;
label_4c2f34:
    // 0x4c2f34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4c2f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4c2f38:
    // 0x4c2f38: 0x443000a  bgezl       $v0, . + 4 + (0xA << 2)
label_4c2f3c:
    if (ctx->pc == 0x4C2F3Cu) {
        ctx->pc = 0x4C2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2F38u;
        // 0x4c2f3c: 0x8e220300  lw          $v0, 0x300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2F40u;
        goto label_4c2f40;
    }
    ctx->pc = 0x4C2F38u;
    {
        const bool branch_taken_0x4c2f38 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4c2f38) {
            ctx->pc = 0x4C2F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2F38u;
            // 0x4c2f3c: 0x8e220300  lw          $v0, 0x300($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2F64u;
            goto label_4c2f64;
        }
    }
    ctx->pc = 0x4C2F40u;
label_4c2f40:
    // 0x4c2f40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x4c2f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_4c2f44:
    // 0x4c2f44: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_4c2f48:
    // 0x4c2f48: 0x2041823  subu        $v1, $s0, $a0
    ctx->pc = 0x4c2f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_4c2f4c:
    // 0x4c2f4c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4c2f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4c2f50:
    // 0x4c2f50: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x4c2f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_4c2f54:
    // 0x4c2f54: 0x800013  mtlo        $a0
    ctx->pc = 0x4c2f54u;
    ctx->lo = GPR_U64(ctx, 4);
label_4c2f58:
    // 0x4c2f58: 0x70431000  madd        $v0, $v0, $v1
    ctx->pc = 0x4c2f58u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4c2f5c:
    // 0x4c2f5c: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x4c2f5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_4c2f60:
    // 0x4c2f60: 0x8e220300  lw          $v0, 0x300($s1)
    ctx->pc = 0x4c2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_4c2f64:
    // 0x4c2f64: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
label_4c2f68:
    if (ctx->pc == 0x4C2F68u) {
        ctx->pc = 0x4C2F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2F64u;
        // 0x4c2f68: 0x8e220108  lw          $v0, 0x108($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2F6Cu;
        goto label_4c2f6c;
    }
    ctx->pc = 0x4C2F64u;
    {
        const bool branch_taken_0x4c2f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2f64) {
            ctx->pc = 0x4C2F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2F64u;
            // 0x4c2f68: 0x8e220108  lw          $v0, 0x108($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3088u;
            goto label_4c3088;
        }
    }
    ctx->pc = 0x4C2F6Cu;
label_4c2f6c:
    // 0x4c2f6c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4c2f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4c2f70:
    // 0x4c2f70: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
label_4c2f74:
    if (ctx->pc == 0x4C2F74u) {
        ctx->pc = 0x4C2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2F70u;
        // 0x4c2f74: 0x8e220108  lw          $v0, 0x108($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2F78u;
        goto label_4c2f78;
    }
    ctx->pc = 0x4C2F70u;
    {
        const bool branch_taken_0x4c2f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2f70) {
            ctx->pc = 0x4C2F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2F70u;
            // 0x4c2f74: 0x8e220108  lw          $v0, 0x108($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3088u;
            goto label_4c3088;
        }
    }
    ctx->pc = 0x4C2F78u;
label_4c2f78:
    // 0x4c2f78: 0x8e2200fc  lw          $v0, 0xFC($s1)
    ctx->pc = 0x4c2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_4c2f7c:
    // 0x4c2f7c: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
label_4c2f80:
    if (ctx->pc == 0x4C2F80u) {
        ctx->pc = 0x4C2F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2F7Cu;
        // 0x4c2f80: 0x8e220108  lw          $v0, 0x108($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2F84u;
        goto label_4c2f84;
    }
    ctx->pc = 0x4C2F7Cu;
    {
        const bool branch_taken_0x4c2f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c2f7c) {
            ctx->pc = 0x4C2F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2F7Cu;
            // 0x4c2f80: 0x8e220108  lw          $v0, 0x108($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3088u;
            goto label_4c3088;
        }
    }
    ctx->pc = 0x4C2F84u;
label_4c2f84:
    // 0x4c2f84: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x4c2f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
label_4c2f88:
    // 0x4c2f88: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4c2f8c:
    if (ctx->pc == 0x4C2F8Cu) {
        ctx->pc = 0x4C2F90u;
        goto label_4c2f90;
    }
    ctx->pc = 0x4C2F88u;
    {
        const bool branch_taken_0x4c2f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c2f88) {
            ctx->pc = 0x4C2FACu;
            goto label_4c2fac;
        }
    }
    ctx->pc = 0x4C2F90u;
label_4c2f90:
    // 0x4c2f90: 0xc1334f4  jal         func_4CD3D0
label_4c2f94:
    if (ctx->pc == 0x4C2F94u) {
        ctx->pc = 0x4C2F98u;
        goto label_4c2f98;
    }
    ctx->pc = 0x4C2F90u;
    SET_GPR_U32(ctx, 31, 0x4C2F98u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C2F90u, 0x4C2F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2F98u;
label_4c2f98:
    // 0x4c2f98: 0x8e230270  lw          $v1, 0x270($s1)
    ctx->pc = 0x4c2f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_4c2f9c:
    // 0x4c2f9c: 0xae220280  sw          $v0, 0x280($s1)
    ctx->pc = 0x4c2f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 2));
label_4c2fa0:
    // 0x4c2fa0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4c2fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4c2fa4:
    // 0x4c2fa4: 0xae200348  sw          $zero, 0x348($s1)
    ctx->pc = 0x4c2fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 840), GPR_U32(ctx, 0));
label_4c2fa8:
    // 0x4c2fa8: 0xae230284  sw          $v1, 0x284($s1)
    ctx->pc = 0x4c2fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 3));
label_4c2fac:
    // 0x4c2fac: 0xc1334f4  jal         func_4CD3D0
label_4c2fb0:
    if (ctx->pc == 0x4C2FB0u) {
        ctx->pc = 0x4C2FB4u;
        goto label_4c2fb4;
    }
    ctx->pc = 0x4C2FACu;
    SET_GPR_U32(ctx, 31, 0x4C2FB4u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C2FACu, 0x4C2FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2FB4u;
label_4c2fb4:
    // 0x4c2fb4: 0x8e230284  lw          $v1, 0x284($s1)
    ctx->pc = 0x4c2fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
label_4c2fb8:
    // 0x4c2fb8: 0x240703e8  addiu       $a3, $zero, 0x3E8
    ctx->pc = 0x4c2fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4c2fbc:
    // 0x4c2fbc: 0x8e240270  lw          $a0, 0x270($s1)
    ctx->pc = 0x4c2fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_4c2fc0:
    // 0x4c2fc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4c2fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c2fc4:
    // 0x4c2fc4: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x4c2fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_4c2fc8:
    // 0x4c2fc8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x4c2fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4c2fcc:
    // 0x4c2fcc: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x4c2fccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4c2fd0:
    // 0x4c2fd0: 0xc13399c  jal         func_4CE670
label_4c2fd4:
    if (ctx->pc == 0x4C2FD4u) {
        ctx->pc = 0x4C2FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2FD0u;
        // 0x4c2fd4: 0x872018  mult        $a0, $a0, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2FD8u;
        goto label_4c2fd8;
    }
    ctx->pc = 0x4C2FD0u;
    SET_GPR_U32(ctx, 31, 0x4C2FD8u);
    ctx->pc = 0x4C2FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2FD0u;
    // 0x4c2fd4: 0x872018  mult        $a0, $a0, $a3 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4C2FD0u, 0x4C2FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2FD8u;
label_4c2fd8:
    // 0x4c2fd8: 0x8e230308  lw          $v1, 0x308($s1)
    ctx->pc = 0x4c2fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c2fdc:
    // 0x4c2fdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c2fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c2fe0:
    // 0x4c2fe0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4c2fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4c2fe4:
    // 0x4c2fe4: 0xc1339e8  jal         func_4CE7A0
label_4c2fe8:
    if (ctx->pc == 0x4C2FE8u) {
        ctx->pc = 0x4C2FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2FE4u;
        // 0x4c2fe8: 0x8c65006c  lw          $a1, 0x6C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2FECu;
        goto label_4c2fec;
    }
    ctx->pc = 0x4C2FE4u;
    SET_GPR_U32(ctx, 31, 0x4C2FECu);
    ctx->pc = 0x4C2FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2FE4u;
    // 0x4c2fe8: 0x8c65006c  lw          $a1, 0x6C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE7A0u, 0x4C2FE4u, 0x4C2FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2FECu;
label_4c2fec:
    // 0x4c2fec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c2fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c2ff0:
    // 0x4c2ff0: 0x8e230340  lw          $v1, 0x340($s1)
    ctx->pc = 0x4c2ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_4c2ff4:
    // 0x4c2ff4: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x4c2ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
label_4c2ff8:
    // 0x4c2ff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c2ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c2ffc:
    // 0x4c2ffc: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x4c2ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4c3000:
    // 0x4c3000: 0x204182b  sltu        $v1, $s0, $a0
    ctx->pc = 0x4c3000u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c3004:
    // 0x4c3004: 0x5460001f  bnel        $v1, $zero, . + 4 + (0x1F << 2)
label_4c3008:
    if (ctx->pc == 0x4C3008u) {
        ctx->pc = 0x4C3008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3004u;
        // 0x4c3008: 0xae20030c  sw          $zero, 0x30C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C300Cu;
        goto label_4c300c;
    }
    ctx->pc = 0x4C3004u;
    {
        const bool branch_taken_0x4c3004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3004) {
            ctx->pc = 0x4C3008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3004u;
            // 0x4c3008: 0xae20030c  sw          $zero, 0x30C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 780), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3084u;
            goto label_4c3084;
        }
    }
    ctx->pc = 0x4C300Cu;
label_4c300c:
    // 0x4c300c: 0x8e220288  lw          $v0, 0x288($s1)
    ctx->pc = 0x4c300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
label_4c3010:
    // 0x4c3010: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x4c3010u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_4c3014:
    // 0x4c3014: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x4c3014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4c3018:
    // 0x4c3018: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_4c301c:
    if (ctx->pc == 0x4C301Cu) {
        ctx->pc = 0x4C301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3018u;
        // 0x4c301c: 0xae20033c  sw          $zero, 0x33C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3020u;
        goto label_4c3020;
    }
    ctx->pc = 0x4C3018u;
    {
        const bool branch_taken_0x4c3018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3018) {
            ctx->pc = 0x4C301Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3018u;
            // 0x4c301c: 0xae20033c  sw          $zero, 0x33C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3080u;
            goto label_4c3080;
        }
    }
    ctx->pc = 0x4C3020u;
label_4c3020:
    // 0x4c3020: 0x8e22033c  lw          $v0, 0x33C($s1)
    ctx->pc = 0x4c3020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
label_4c3024:
    // 0x4c3024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c3024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c3028:
    // 0x4c3028: 0x2c430004  sltiu       $v1, $v0, 0x4
    ctx->pc = 0x4c3028u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_4c302c:
    // 0x4c302c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_4c3030:
    if (ctx->pc == 0x4C3030u) {
        ctx->pc = 0x4C3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C302Cu;
        // 0x4c3030: 0xae22033c  sw          $v0, 0x33C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3034u;
        goto label_4c3034;
    }
    ctx->pc = 0x4C302Cu;
    {
        const bool branch_taken_0x4c302c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C302Cu;
        // 0x4c3030: 0xae22033c  sw          $v0, 0x33C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c302c) {
            ctx->pc = 0x4C303Cu;
            goto label_4c303c;
        }
    }
    ctx->pc = 0x4C3034u;
label_4c3034:
    // 0x4c3034: 0x10000013  b           . + 4 + (0x13 << 2)
label_4c3038:
    if (ctx->pc == 0x4C3038u) {
        ctx->pc = 0x4C3038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3034u;
        // 0x4c3038: 0xae20033c  sw          $zero, 0x33C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C303Cu;
        goto label_4c303c;
    }
    ctx->pc = 0x4C3034u;
    {
        const bool branch_taken_0x4c3034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3034u;
        // 0x4c3038: 0xae20033c  sw          $zero, 0x33C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3034) {
            ctx->pc = 0x4C3084u;
            goto label_4c3084;
        }
    }
    ctx->pc = 0x4C303Cu;
label_4c303c:
    // 0x4c303c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x4c303cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_4c3040:
    // 0x4c3040: 0x2831024  and         $v0, $s4, $v1
    ctx->pc = 0x4c3040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
label_4c3044:
    // 0x4c3044: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4c3048:
    if (ctx->pc == 0x4C3048u) {
        ctx->pc = 0x4C3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3044u;
        // 0x4c3048: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C304Cu;
        goto label_4c304c;
    }
    ctx->pc = 0x4C3044u;
    {
        const bool branch_taken_0x4c3044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3044u;
        // 0x4c3048: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3044) {
            ctx->pc = 0x4C305Cu;
            goto label_4c305c;
        }
    }
    ctx->pc = 0x4C304Cu;
label_4c304c:
    // 0x4c304c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x4c304cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_4c3050:
    // 0x4c3050: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c3050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4c3054:
    // 0x4c3054: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_4c3058:
    if (ctx->pc == 0x4C3058u) {
        ctx->pc = 0x4C3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3054u;
        // 0x4c3058: 0x8e230314  lw          $v1, 0x314($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C305Cu;
        goto label_4c305c;
    }
    ctx->pc = 0x4C3054u;
    {
        const bool branch_taken_0x4c3054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3054) {
            ctx->pc = 0x4C3058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3054u;
            // 0x4c3058: 0x8e230314  lw          $v1, 0x314($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3064u;
            goto label_4c3064;
        }
    }
    ctx->pc = 0x4C305Cu;
label_4c305c:
    // 0x4c305c: 0x10000009  b           . + 4 + (0x9 << 2)
label_4c3060:
    if (ctx->pc == 0x4C3060u) {
        ctx->pc = 0x4C3060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C305Cu;
        // 0x4c3060: 0xafa6004c  sw          $a2, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3064u;
        goto label_4c3064;
    }
    ctx->pc = 0x4C305Cu;
    {
        const bool branch_taken_0x4c305c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C305Cu;
        // 0x4c3060: 0xafa6004c  sw          $a2, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c305c) {
            ctx->pc = 0x4C3084u;
            goto label_4c3084;
        }
    }
    ctx->pc = 0x4C3064u;
label_4c3064:
    // 0x4c3064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c3064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c3068:
    // 0x4c3068: 0xae37030c  sw          $s7, 0x30C($s1)
    ctx->pc = 0x4c3068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 780), GPR_U32(ctx, 23));
label_4c306c:
    // 0x4c306c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4c306cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4c3070:
    // 0x4c3070: 0xae200138  sw          $zero, 0x138($s1)
    ctx->pc = 0x4c3070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 0));
label_4c3074:
    // 0x4c3074: 0xae230314  sw          $v1, 0x314($s1)
    ctx->pc = 0x4c3074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 3));
label_4c3078:
    // 0x4c3078: 0x1000011f  b           . + 4 + (0x11F << 2)
label_4c307c:
    if (ctx->pc == 0x4C307Cu) {
        ctx->pc = 0x4C307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3078u;
        // 0x4c307c: 0xae370310  sw          $s7, 0x310($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 784), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3080u;
        goto label_4c3080;
    }
    ctx->pc = 0x4C3078u;
    {
        const bool branch_taken_0x4c3078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3078u;
        // 0x4c307c: 0xae370310  sw          $s7, 0x310($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 784), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3078) {
            ctx->pc = 0x4C34F8u;
            goto label_4c34f8;
        }
    }
    ctx->pc = 0x4C3080u;
label_4c3080:
    // 0x4c3080: 0xae20030c  sw          $zero, 0x30C($s1)
    ctx->pc = 0x4c3080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 780), GPR_U32(ctx, 0));
label_4c3084:
    // 0x4c3084: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x4c3084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_4c3088:
    // 0x4c3088: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
label_4c308c:
    if (ctx->pc == 0x4C308Cu) {
        ctx->pc = 0x4C308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3088u;
        // 0x4c308c: 0xae3402e8  sw          $s4, 0x2E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3090u;
        goto label_4c3090;
    }
    ctx->pc = 0x4C3088u;
    {
        const bool branch_taken_0x4c3088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3088) {
            ctx->pc = 0x4C308Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3088u;
            // 0x4c308c: 0xae3402e8  sw          $s4, 0x2E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3134u;
            goto label_4c3134;
        }
    }
    ctx->pc = 0x4C3090u;
label_4c3090:
    // 0x4c3090: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x4c3090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_4c3094:
    // 0x4c3094: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_4c3098:
    if (ctx->pc == 0x4C3098u) {
        ctx->pc = 0x4C3098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3094u;
        // 0x4c3098: 0xae3402e8  sw          $s4, 0x2E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C309Cu;
        goto label_4c309c;
    }
    ctx->pc = 0x4C3094u;
    {
        const bool branch_taken_0x4c3094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3094) {
            ctx->pc = 0x4C3098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3094u;
            // 0x4c3098: 0xae3402e8  sw          $s4, 0x2E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3134u;
            goto label_4c3134;
        }
    }
    ctx->pc = 0x4C309Cu;
label_4c309c:
    // 0x4c309c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x4c309cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_4c30a0:
    // 0x4c30a0: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x4c30a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_4c30a4:
    // 0x4c30a4: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_4c30a8:
    if (ctx->pc == 0x4C30A8u) {
        ctx->pc = 0x4C30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C30A4u;
        // 0x4c30a8: 0xae3402e8  sw          $s4, 0x2E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C30ACu;
        goto label_4c30ac;
    }
    ctx->pc = 0x4C30A4u;
    {
        const bool branch_taken_0x4c30a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c30a4) {
            ctx->pc = 0x4C30A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C30A4u;
            // 0x4c30a8: 0xae3402e8  sw          $s4, 0x2E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3134u;
            goto label_4c3134;
        }
    }
    ctx->pc = 0x4C30ACu;
label_4c30ac:
    // 0x4c30ac: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x4c30acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_4c30b0:
    // 0x4c30b0: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x4c30b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_4c30b4:
    // 0x4c30b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c30b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c30b8:
    // 0x4c30b8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4c30b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c30bc:
    // 0x4c30bc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_4c30c0:
    if (ctx->pc == 0x4C30C0u) {
        ctx->pc = 0x4C30C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C30BCu;
        // 0x4c30c0: 0x8e240154  lw          $a0, 0x154($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C30C4u;
        goto label_4c30c4;
    }
    ctx->pc = 0x4C30BCu;
    {
        const bool branch_taken_0x4c30bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c30bc) {
            ctx->pc = 0x4C30C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C30BCu;
            // 0x4c30c0: 0x8e240154  lw          $a0, 0x154($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C30C4u;
            goto label_4c30c4;
        }
    }
    ctx->pc = 0x4C30C4u;
label_4c30c4:
    // 0x4c30c4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x4c30c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4c30c8:
    // 0x4c30c8: 0x8e230158  lw          $v1, 0x158($s1)
    ctx->pc = 0x4c30c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
label_4c30cc:
    // 0x4c30cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4c30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4c30d0:
    // 0x4c30d0: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x4c30d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_4c30d4:
    // 0x4c30d4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x4c30d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c30d8:
    // 0x4c30d8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_4c30dc:
    if (ctx->pc == 0x4C30DCu) {
        ctx->pc = 0x4C30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C30D8u;
        // 0x4c30dc: 0x3c170053  lui         $s7, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C30E0u;
        goto label_4c30e0;
    }
    ctx->pc = 0x4C30D8u;
    {
        const bool branch_taken_0x4c30d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C30D8u;
        // 0x4c30dc: 0x3c170053  lui         $s7, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c30d8) {
            ctx->pc = 0x4C3130u;
            goto label_4c3130;
        }
    }
    ctx->pc = 0x4C30E0u;
label_4c30e0:
    // 0x4c30e0: 0x2630020c  addiu       $s0, $s1, 0x20C
    ctx->pc = 0x4c30e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 524));
label_4c30e4:
    // 0x4c30e4: 0x8ee4278c  lw          $a0, 0x278C($s7)
    ctx->pc = 0x4c30e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10124)));
label_4c30e8:
    // 0x4c30e8: 0xc132380  jal         func_4C8E00
label_4c30ec:
    if (ctx->pc == 0x4C30ECu) {
        ctx->pc = 0x4C30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C30E8u;
        // 0x4c30ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C30F0u;
        goto label_4c30f0;
    }
    ctx->pc = 0x4C30E8u;
    SET_GPR_U32(ctx, 31, 0x4C30F0u);
    ctx->pc = 0x4C30ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C30E8u;
    // 0x4c30ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E00u, 0x4C30E8u, 0x4C30F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C30F0u;
label_4c30f0:
    // 0x4c30f0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_4c30f4:
    if (ctx->pc == 0x4C30F4u) {
        ctx->pc = 0x4C30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C30F0u;
        // 0x4c30f4: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C30F8u;
        goto label_4c30f8;
    }
    ctx->pc = 0x4C30F0u;
    {
        const bool branch_taken_0x4c30f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c30f0) {
            ctx->pc = 0x4C30F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C30F0u;
            // 0x4c30f4: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3118u;
            goto label_4c3118;
        }
    }
    ctx->pc = 0x4C30F8u;
label_4c30f8:
    // 0x4c30f8: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x4c30f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_4c30fc:
    // 0x4c30fc: 0x40f809  jalr        $v0
label_4c3100:
    if (ctx->pc == 0x4C3100u) {
        ctx->pc = 0x4C3100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C30FCu;
        // 0x4c3100: 0x26240110  addiu       $a0, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3104u;
        goto label_4c3104;
    }
    ctx->pc = 0x4C30FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C3104u);
        ctx->pc = 0x4C3100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C30FCu;
        // 0x4c3100: 0x26240110  addiu       $a0, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C30FCu, 0x4C3104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C3104u;
label_4c3104:
    // 0x4c3104: 0x8ee4278c  lw          $a0, 0x278C($s7)
    ctx->pc = 0x4c3104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10124)));
label_4c3108:
    // 0x4c3108: 0xc132386  jal         func_4C8E18
label_4c310c:
    if (ctx->pc == 0x4C310Cu) {
        ctx->pc = 0x4C310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3108u;
        // 0x4c310c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3110u;
        goto label_4c3110;
    }
    ctx->pc = 0x4C3108u;
    SET_GPR_U32(ctx, 31, 0x4C3110u);
    ctx->pc = 0x4C310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3108u;
    // 0x4c310c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E18u, 0x4C3108u, 0x4C3110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3110u;
label_4c3110:
    // 0x4c3110: 0x10000008  b           . + 4 + (0x8 << 2)
label_4c3114:
    if (ctx->pc == 0x4C3114u) {
        ctx->pc = 0x4C3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3110u;
        // 0x4c3114: 0xae3402e8  sw          $s4, 0x2E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3118u;
        goto label_4c3118;
    }
    ctx->pc = 0x4C3110u;
    {
        const bool branch_taken_0x4c3110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3110u;
        // 0x4c3114: 0xae3402e8  sw          $s4, 0x2E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3110) {
            ctx->pc = 0x4C3134u;
            goto label_4c3134;
        }
    }
    ctx->pc = 0x4C3118u;
label_4c3118:
    // 0x4c3118: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x4c3118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_4c311c:
    // 0x4c311c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c311cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4c3120:
    // 0x4c3120: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4c3124:
    if (ctx->pc == 0x4C3124u) {
        ctx->pc = 0x4C3124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3120u;
        // 0x4c3124: 0xae3402e8  sw          $s4, 0x2E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3128u;
        goto label_4c3128;
    }
    ctx->pc = 0x4C3120u;
    {
        const bool branch_taken_0x4c3120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3120) {
            ctx->pc = 0x4C3124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3120u;
            // 0x4c3124: 0xae3402e8  sw          $s4, 0x2E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3134u;
            goto label_4c3134;
        }
    }
    ctx->pc = 0x4C3128u;
label_4c3128:
    // 0x4c3128: 0xc132388  jal         func_4C8E20
label_4c312c:
    if (ctx->pc == 0x4C312Cu) {
        ctx->pc = 0x4C3130u;
        goto label_4c3130;
    }
    ctx->pc = 0x4C3128u;
    SET_GPR_U32(ctx, 31, 0x4C3130u);
    ctx->pc = 0x4C8E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E20u, 0x4C3128u, 0x4C3130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3130u;
label_4c3130:
    // 0x4c3130: 0xae3402e8  sw          $s4, 0x2E8($s1)
    ctx->pc = 0x4c3130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 20));
label_4c3134:
    // 0x4c3134: 0x6830071  bgezl       $s4, . + 4 + (0x71 << 2)
label_4c3138:
    if (ctx->pc == 0x4C3138u) {
        ctx->pc = 0x4C3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3134u;
        // 0x4c3138: 0x8e2202f8  lw          $v0, 0x2F8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C313Cu;
        goto label_4c313c;
    }
    ctx->pc = 0x4C3134u;
    {
        const bool branch_taken_0x4c3134 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x4c3134) {
            ctx->pc = 0x4C3138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3134u;
            // 0x4c3138: 0x8e2202f8  lw          $v0, 0x2F8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C32FCu;
            goto label_4c32fc;
        }
    }
    ctx->pc = 0x4C313Cu;
label_4c313c:
    // 0x4c313c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4c313cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4c3140:
    // 0x4c3140: 0x1242000e  beq         $s2, $v0, . + 4 + (0xE << 2)
label_4c3144:
    if (ctx->pc == 0x4C3144u) {
        ctx->pc = 0x4C3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3140u;
        // 0x4c3144: 0x2e420006  sltiu       $v0, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3148u;
        goto label_4c3148;
    }
    ctx->pc = 0x4C3140u;
    {
        const bool branch_taken_0x4c3140 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3140u;
        // 0x4c3144: 0x2e420006  sltiu       $v0, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3140) {
            ctx->pc = 0x4C317Cu;
            goto label_4c317c;
        }
    }
    ctx->pc = 0x4C3148u;
label_4c3148:
    // 0x4c3148: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4c314c:
    if (ctx->pc == 0x4C314Cu) {
        ctx->pc = 0x4C314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3148u;
        // 0x4c314c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3150u;
        goto label_4c3150;
    }
    ctx->pc = 0x4C3148u;
    {
        const bool branch_taken_0x4c3148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3148u;
        // 0x4c314c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3148) {
            ctx->pc = 0x4C3160u;
            goto label_4c3160;
        }
    }
    ctx->pc = 0x4C3150u;
label_4c3150:
    // 0x4c3150: 0x52420024  beql        $s2, $v0, . + 4 + (0x24 << 2)
label_4c3154:
    if (ctx->pc == 0x4C3154u) {
        ctx->pc = 0x4C3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3150u;
        // 0x4c3154: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3158u;
        goto label_4c3158;
    }
    ctx->pc = 0x4C3150u;
    {
        const bool branch_taken_0x4c3150 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c3150) {
            ctx->pc = 0x4C3154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3150u;
            // 0x4c3154: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C31E4u;
            goto label_4c31e4;
        }
    }
    ctx->pc = 0x4C3158u;
label_4c3158:
    // 0x4c3158: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_4c315c:
    if (ctx->pc == 0x4C315Cu) {
        ctx->pc = 0x4C3160u;
        goto label_4c3160;
    }
    ctx->pc = 0x4C3158u;
    {
        const bool branch_taken_0x4c3158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3158) {
            ctx->pc = 0x4C34F0u;
            goto label_4c34f0;
        }
    }
    ctx->pc = 0x4C3160u;
label_4c3160:
    // 0x4c3160: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4c3160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4c3164:
    // 0x4c3164: 0x12420035  beq         $s2, $v0, . + 4 + (0x35 << 2)
label_4c3168:
    if (ctx->pc == 0x4C3168u) {
        ctx->pc = 0x4C3168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3164u;
        // 0x4c3168: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C316Cu;
        goto label_4c316c;
    }
    ctx->pc = 0x4C3164u;
    {
        const bool branch_taken_0x4c3164 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C3168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3164u;
        // 0x4c3168: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3164) {
            ctx->pc = 0x4C323Cu;
            goto label_4c323c;
        }
    }
    ctx->pc = 0x4C316Cu;
label_4c316c:
    // 0x4c316c: 0x5242004d  beql        $s2, $v0, . + 4 + (0x4D << 2)
label_4c3170:
    if (ctx->pc == 0x4C3170u) {
        ctx->pc = 0x4C3170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C316Cu;
        // 0x4c3170: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3174u;
        goto label_4c3174;
    }
    ctx->pc = 0x4C316Cu;
    {
        const bool branch_taken_0x4c316c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c316c) {
            ctx->pc = 0x4C3170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C316Cu;
            // 0x4c3170: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C32A4u;
            goto label_4c32a4;
        }
    }
    ctx->pc = 0x4C3174u;
label_4c3174:
    // 0x4c3174: 0x100000de  b           . + 4 + (0xDE << 2)
label_4c3178:
    if (ctx->pc == 0x4C3178u) {
        ctx->pc = 0x4C317Cu;
        goto label_4c317c;
    }
    ctx->pc = 0x4C3174u;
    {
        const bool branch_taken_0x4c3174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3174) {
            ctx->pc = 0x4C34F0u;
            goto label_4c34f0;
        }
    }
    ctx->pc = 0x4C317Cu;
label_4c317c:
    // 0x4c317c: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x4c317cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_4c3180:
    // 0x4c3180: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_4c3184:
    if (ctx->pc == 0x4C3184u) {
        ctx->pc = 0x4C3184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3180u;
        // 0x4c3184: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3188u;
        goto label_4c3188;
    }
    ctx->pc = 0x4C3180u;
    {
        const bool branch_taken_0x4c3180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3180u;
        // 0x4c3184: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3180) {
            ctx->pc = 0x4C31E0u;
            goto label_4c31e0;
        }
    }
    ctx->pc = 0x4C3188u;
label_4c3188:
    // 0x4c3188: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x4c3188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_4c318c:
    // 0x4c318c: 0x8e2b00d0  lw          $t3, 0xD0($s1)
    ctx->pc = 0x4c318cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_4c3190:
    // 0x4c3190: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x4c3190u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c3194:
    // 0x4c3194: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c3194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c3198:
    // 0x4c3198: 0x8e2a00cc  lw          $t2, 0xCC($s1)
    ctx->pc = 0x4c3198u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_4c319c:
    // 0x4c319c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x4c319cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4c31a0:
    // 0x4c31a0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x4c31a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_4c31a4:
    // 0x4c31a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4c31a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c31a8:
    // 0x4c31a8: 0x8c6c00c4  lw          $t4, 0xC4($v1)
    ctx->pc = 0x4c31a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_4c31ac:
    // 0x4c31ac: 0x8c4800bc  lw          $t0, 0xBC($v0)
    ctx->pc = 0x4c31acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_4c31b0:
    // 0x4c31b0: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x4c31b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
label_4c31b4:
    // 0x4c31b4: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x4c31b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
label_4c31b8:
    // 0x4c31b8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x4c31b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_4c31bc:
    // 0x4c31bc: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x4c31bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4c31c0:
    // 0x4c31c0: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x4c31c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4c31c4:
    // 0x4c31c4: 0x8fab00a0  lw          $t3, 0xA0($sp)
    ctx->pc = 0x4c31c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4c31c8:
    // 0x4c31c8: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x4c31c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
label_4c31cc:
    // 0x4c31cc: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x4c31ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
label_4c31d0:
    // 0x4c31d0: 0xc132dba  jal         func_4CB6E8
label_4c31d4:
    if (ctx->pc == 0x4C31D4u) {
        ctx->pc = 0x4C31D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C31D0u;
        // 0x4c31d4: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C31D8u;
        goto label_4c31d8;
    }
    ctx->pc = 0x4C31D0u;
    SET_GPR_U32(ctx, 31, 0x4C31D8u);
    ctx->pc = 0x4C31D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C31D0u;
    // 0x4c31d4: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CB6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CB6E8u, 0x4C31D0u, 0x4C31D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C31D8u;
label_4c31d8:
    // 0x4c31d8: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_4c31dc:
    if (ctx->pc == 0x4C31DCu) {
        ctx->pc = 0x4C31E0u;
        goto label_4c31e0;
    }
    ctx->pc = 0x4C31D8u;
    {
        const bool branch_taken_0x4c31d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c31d8) {
            ctx->pc = 0x4C34F0u;
            goto label_4c34f0;
        }
    }
    ctx->pc = 0x4C31E0u;
label_4c31e0:
    // 0x4c31e0: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x4c31e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_4c31e4:
    // 0x4c31e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4c31e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4c31e8:
    // 0x4c31e8: 0x8e2b00d0  lw          $t3, 0xD0($s1)
    ctx->pc = 0x4c31e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_4c31ec:
    // 0x4c31ec: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x4c31ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c31f0:
    // 0x4c31f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c31f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c31f4:
    // 0x4c31f4: 0x8e2a00cc  lw          $t2, 0xCC($s1)
    ctx->pc = 0x4c31f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_4c31f8:
    // 0x4c31f8: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x4c31f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4c31fc:
    // 0x4c31fc: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x4c31fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_4c3200:
    // 0x4c3200: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4c3200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c3204:
    // 0x4c3204: 0x8c6c00c4  lw          $t4, 0xC4($v1)
    ctx->pc = 0x4c3204u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_4c3208:
    // 0x4c3208: 0x8c4800bc  lw          $t0, 0xBC($v0)
    ctx->pc = 0x4c3208u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_4c320c:
    // 0x4c320c: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x4c320cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
label_4c3210:
    // 0x4c3210: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x4c3210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
label_4c3214:
    // 0x4c3214: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x4c3214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_4c3218:
    // 0x4c3218: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x4c3218u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4c321c:
    // 0x4c321c: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x4c321cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4c3220:
    // 0x4c3220: 0x8fab00a0  lw          $t3, 0xA0($sp)
    ctx->pc = 0x4c3220u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4c3224:
    // 0x4c3224: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x4c3224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
label_4c3228:
    // 0x4c3228: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x4c3228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
label_4c322c:
    // 0x4c322c: 0xc132d46  jal         func_4CB518
label_4c3230:
    if (ctx->pc == 0x4C3230u) {
        ctx->pc = 0x4C3230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C322Cu;
        // 0x4c3230: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3234u;
        goto label_4c3234;
    }
    ctx->pc = 0x4C322Cu;
    SET_GPR_U32(ctx, 31, 0x4C3234u);
    ctx->pc = 0x4C3230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C322Cu;
    // 0x4c3230: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CB518u, 0x4C322Cu, 0x4C3234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3234u;
label_4c3234:
    // 0x4c3234: 0x100000ae  b           . + 4 + (0xAE << 2)
label_4c3238:
    if (ctx->pc == 0x4C3238u) {
        ctx->pc = 0x4C323Cu;
        goto label_4c323c;
    }
    ctx->pc = 0x4C3234u;
    {
        const bool branch_taken_0x4c3234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3234) {
            ctx->pc = 0x4C34F0u;
            goto label_4c34f0;
        }
    }
    ctx->pc = 0x4C323Cu;
label_4c323c:
    // 0x4c323c: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x4c323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_4c3240:
    // 0x4c3240: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_4c3244:
    if (ctx->pc == 0x4C3244u) {
        ctx->pc = 0x4C3244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3240u;
        // 0x4c3244: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3248u;
        goto label_4c3248;
    }
    ctx->pc = 0x4C3240u;
    {
        const bool branch_taken_0x4c3240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3240u;
        // 0x4c3244: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3240) {
            ctx->pc = 0x4C32A0u;
            goto label_4c32a0;
        }
    }
    ctx->pc = 0x4C3248u;
label_4c3248:
    // 0x4c3248: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x4c3248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_4c324c:
    // 0x4c324c: 0x8e2b00d0  lw          $t3, 0xD0($s1)
    ctx->pc = 0x4c324cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_4c3250:
    // 0x4c3250: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x4c3250u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c3254:
    // 0x4c3254: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c3254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c3258:
    // 0x4c3258: 0x8e2a00cc  lw          $t2, 0xCC($s1)
    ctx->pc = 0x4c3258u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_4c325c:
    // 0x4c325c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x4c325cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4c3260:
    // 0x4c3260: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x4c3260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_4c3264:
    // 0x4c3264: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4c3264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c3268:
    // 0x4c3268: 0x8c6c00c4  lw          $t4, 0xC4($v1)
    ctx->pc = 0x4c3268u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_4c326c:
    // 0x4c326c: 0x8c4800bc  lw          $t0, 0xBC($v0)
    ctx->pc = 0x4c326cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_4c3270:
    // 0x4c3270: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x4c3270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
label_4c3274:
    // 0x4c3274: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x4c3274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
label_4c3278:
    // 0x4c3278: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x4c3278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_4c327c:
    // 0x4c327c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x4c327cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4c3280:
    // 0x4c3280: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x4c3280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4c3284:
    // 0x4c3284: 0x8fab00a0  lw          $t3, 0xA0($sp)
    ctx->pc = 0x4c3284u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4c3288:
    // 0x4c3288: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x4c3288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
label_4c328c:
    // 0x4c328c: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x4c328cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
label_4c3290:
    // 0x4c3290: 0xc132da6  jal         func_4CB698
label_4c3294:
    if (ctx->pc == 0x4C3294u) {
        ctx->pc = 0x4C3294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3290u;
        // 0x4c3294: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3298u;
        goto label_4c3298;
    }
    ctx->pc = 0x4C3290u;
    SET_GPR_U32(ctx, 31, 0x4C3298u);
    ctx->pc = 0x4C3294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3290u;
    // 0x4c3294: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CB698u, 0x4C3290u, 0x4C3298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3298u;
label_4c3298:
    // 0x4c3298: 0x10000095  b           . + 4 + (0x95 << 2)
label_4c329c:
    if (ctx->pc == 0x4C329Cu) {
        ctx->pc = 0x4C32A0u;
        goto label_4c32a0;
    }
    ctx->pc = 0x4C3298u;
    {
        const bool branch_taken_0x4c3298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3298) {
            ctx->pc = 0x4C34F0u;
            goto label_4c34f0;
        }
    }
    ctx->pc = 0x4C32A0u;
label_4c32a0:
    // 0x4c32a0: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x4c32a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_4c32a4:
    // 0x4c32a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4c32a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4c32a8:
    // 0x4c32a8: 0x8e2b00d0  lw          $t3, 0xD0($s1)
    ctx->pc = 0x4c32a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_4c32ac:
    // 0x4c32ac: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x4c32acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c32b0:
    // 0x4c32b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c32b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c32b4:
    // 0x4c32b4: 0x8e2a00cc  lw          $t2, 0xCC($s1)
    ctx->pc = 0x4c32b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_4c32b8:
    // 0x4c32b8: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x4c32b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4c32bc:
    // 0x4c32bc: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x4c32bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_4c32c0:
    // 0x4c32c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4c32c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c32c4:
    // 0x4c32c4: 0x8c6c00c4  lw          $t4, 0xC4($v1)
    ctx->pc = 0x4c32c4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_4c32c8:
    // 0x4c32c8: 0x8c4800bc  lw          $t0, 0xBC($v0)
    ctx->pc = 0x4c32c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_4c32cc:
    // 0x4c32cc: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x4c32ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
label_4c32d0:
    // 0x4c32d0: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x4c32d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
label_4c32d4:
    // 0x4c32d4: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x4c32d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_4c32d8:
    // 0x4c32d8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x4c32d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4c32dc:
    // 0x4c32dc: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x4c32dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4c32e0:
    // 0x4c32e0: 0x8fab00a0  lw          $t3, 0xA0($sp)
    ctx->pc = 0x4c32e0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4c32e4:
    // 0x4c32e4: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x4c32e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
label_4c32e8:
    // 0x4c32e8: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x4c32e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
label_4c32ec:
    // 0x4c32ec: 0xc132d5a  jal         func_4CB568
label_4c32f0:
    if (ctx->pc == 0x4C32F0u) {
        ctx->pc = 0x4C32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C32ECu;
        // 0x4c32f0: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C32F4u;
        goto label_4c32f4;
    }
    ctx->pc = 0x4C32ECu;
    SET_GPR_U32(ctx, 31, 0x4C32F4u);
    ctx->pc = 0x4C32F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C32ECu;
    // 0x4c32f0: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CB568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CB568u, 0x4C32ECu, 0x4C32F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C32F4u;
label_4c32f4:
    // 0x4c32f4: 0x1000007e  b           . + 4 + (0x7E << 2)
label_4c32f8:
    if (ctx->pc == 0x4C32F8u) {
        ctx->pc = 0x4C32FCu;
        goto label_4c32fc;
    }
    ctx->pc = 0x4C32F4u;
    {
        const bool branch_taken_0x4c32f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c32f4) {
            ctx->pc = 0x4C34F0u;
            goto label_4c34f0;
        }
    }
    ctx->pc = 0x4C32FCu;
label_4c32fc:
    // 0x4c32fc: 0x8e2302fc  lw          $v1, 0x2FC($s1)
    ctx->pc = 0x4c32fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 764)));
label_4c3300:
    // 0x4c3300: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4c3300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c3304:
    // 0x4c3304: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
label_4c3308:
    if (ctx->pc == 0x4C3308u) {
        ctx->pc = 0x4C3308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3304u;
        // 0x4c3308: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C330Cu;
        goto label_4c330c;
    }
    ctx->pc = 0x4C3304u;
    {
        const bool branch_taken_0x4c3304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C3308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3304u;
        // 0x4c3308: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3304) {
            ctx->pc = 0x4C3140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c3140;
        }
    }
    ctx->pc = 0x4C330Cu;
label_4c330c:
    // 0x4c330c: 0x1242000e  beq         $s2, $v0, . + 4 + (0xE << 2)
label_4c3310:
    if (ctx->pc == 0x4C3310u) {
        ctx->pc = 0x4C3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C330Cu;
        // 0x4c3310: 0x2e420006  sltiu       $v0, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3314u;
        goto label_4c3314;
    }
    ctx->pc = 0x4C330Cu;
    {
        const bool branch_taken_0x4c330c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C330Cu;
        // 0x4c3310: 0x2e420006  sltiu       $v0, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c330c) {
            ctx->pc = 0x4C3348u;
            goto label_4c3348;
        }
    }
    ctx->pc = 0x4C3314u;
label_4c3314:
    // 0x4c3314: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4c3318:
    if (ctx->pc == 0x4C3318u) {
        ctx->pc = 0x4C3318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3314u;
        // 0x4c3318: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C331Cu;
        goto label_4c331c;
    }
    ctx->pc = 0x4C3314u;
    {
        const bool branch_taken_0x4c3314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3314u;
        // 0x4c3318: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3314) {
            ctx->pc = 0x4C332Cu;
            goto label_4c332c;
        }
    }
    ctx->pc = 0x4C331Cu;
label_4c331c:
    // 0x4c331c: 0x52420027  beql        $s2, $v0, . + 4 + (0x27 << 2)
label_4c3320:
    if (ctx->pc == 0x4C3320u) {
        ctx->pc = 0x4C3320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C331Cu;
        // 0x4c3320: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3324u;
        goto label_4c3324;
    }
    ctx->pc = 0x4C331Cu;
    {
        const bool branch_taken_0x4c331c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c331c) {
            ctx->pc = 0x4C3320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C331Cu;
            // 0x4c3320: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C33BCu;
            goto label_4c33bc;
        }
    }
    ctx->pc = 0x4C3324u;
label_4c3324:
    // 0x4c3324: 0x10000072  b           . + 4 + (0x72 << 2)
label_4c3328:
    if (ctx->pc == 0x4C3328u) {
        ctx->pc = 0x4C332Cu;
        goto label_4c332c;
    }
    ctx->pc = 0x4C3324u;
    {
        const bool branch_taken_0x4c3324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3324) {
            ctx->pc = 0x4C34F0u;
            goto label_4c34f0;
        }
    }
    ctx->pc = 0x4C332Cu;
label_4c332c:
    // 0x4c332c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4c332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4c3330:
    // 0x4c3330: 0x1242003b  beq         $s2, $v0, . + 4 + (0x3B << 2)
label_4c3334:
    if (ctx->pc == 0x4C3334u) {
        ctx->pc = 0x4C3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3330u;
        // 0x4c3334: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3338u;
        goto label_4c3338;
    }
    ctx->pc = 0x4C3330u;
    {
        const bool branch_taken_0x4c3330 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3330u;
        // 0x4c3334: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3330) {
            ctx->pc = 0x4C3420u;
            goto label_4c3420;
        }
    }
    ctx->pc = 0x4C3338u;
label_4c3338:
    // 0x4c3338: 0x52420056  beql        $s2, $v0, . + 4 + (0x56 << 2)
label_4c333c:
    if (ctx->pc == 0x4C333Cu) {
        ctx->pc = 0x4C333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3338u;
        // 0x4c333c: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3340u;
        goto label_4c3340;
    }
    ctx->pc = 0x4C3338u;
    {
        const bool branch_taken_0x4c3338 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c3338) {
            ctx->pc = 0x4C333Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3338u;
            // 0x4c333c: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3494u;
            goto label_4c3494;
        }
    }
    ctx->pc = 0x4C3340u;
label_4c3340:
    // 0x4c3340: 0x1000006b  b           . + 4 + (0x6B << 2)
label_4c3344:
    if (ctx->pc == 0x4C3344u) {
        ctx->pc = 0x4C3348u;
        goto label_4c3348;
    }
    ctx->pc = 0x4C3340u;
    {
        const bool branch_taken_0x4c3340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3340) {
            ctx->pc = 0x4C34F0u;
            goto label_4c34f0;
        }
    }
    ctx->pc = 0x4C3348u;
label_4c3348:
    // 0x4c3348: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x4c3348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_4c334c:
    // 0x4c334c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4c3350:
    if (ctx->pc == 0x4C3350u) {
        ctx->pc = 0x4C3350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C334Cu;
        // 0x4c3350: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3354u;
        goto label_4c3354;
    }
    ctx->pc = 0x4C334Cu;
    {
        const bool branch_taken_0x4c334c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C334Cu;
        // 0x4c3350: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c334c) {
            ctx->pc = 0x4C33B8u;
            goto label_4c33b8;
        }
    }
    ctx->pc = 0x4C3354u;
label_4c3354:
    // 0x4c3354: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x4c3354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_4c3358:
    // 0x4c3358: 0x8e2e00cc  lw          $t6, 0xCC($s1)
    ctx->pc = 0x4c3358u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_4c335c:
    // 0x4c335c: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x4c335cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c3360:
    // 0x4c3360: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c3360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c3364:
    // 0x4c3364: 0x8e2d00d0  lw          $t5, 0xD0($s1)
    ctx->pc = 0x4c3364u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_4c3368:
    // 0x4c3368: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x4c3368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4c336c:
    // 0x4c336c: 0x8e2800dc  lw          $t0, 0xDC($s1)
    ctx->pc = 0x4c336cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_4c3370:
    // 0x4c3370: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4c3370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c3374:
    // 0x4c3374: 0x8c6c00c4  lw          $t4, 0xC4($v1)
    ctx->pc = 0x4c3374u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_4c3378:
    // 0x4c3378: 0x8c4a00bc  lw          $t2, 0xBC($v0)
    ctx->pc = 0x4c3378u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_4c337c:
    // 0x4c337c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x4c337cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4c3380:
    // 0x4c3380: 0x8e2900e0  lw          $t1, 0xE0($s1)
    ctx->pc = 0x4c3380u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_4c3384:
    // 0x4c3384: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x4c3384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_4c3388:
    // 0x4c3388: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x4c3388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_4c338c:
    // 0x4c338c: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x4c338cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4c3390:
    // 0x4c3390: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x4c3390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
label_4c3394:
    // 0x4c3394: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4c3394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_4c3398:
    // 0x4c3398: 0xafbe0010  sw          $fp, 0x10($sp)
    ctx->pc = 0x4c3398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 30));
label_4c339c:
    // 0x4c339c: 0xafae0018  sw          $t6, 0x18($sp)
    ctx->pc = 0x4c339cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
label_4c33a0:
    // 0x4c33a0: 0xafad0020  sw          $t5, 0x20($sp)
    ctx->pc = 0x4c33a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 13));
label_4c33a4:
    // 0x4c33a4: 0xafac0028  sw          $t4, 0x28($sp)
    ctx->pc = 0x4c33a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 12));
label_4c33a8:
    // 0x4c33a8: 0xc132dea  jal         func_4CB7A8
label_4c33ac:
    if (ctx->pc == 0x4C33ACu) {
        ctx->pc = 0x4C33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C33A8u;
        // 0x4c33ac: 0xafb40030  sw          $s4, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C33B0u;
        goto label_4c33b0;
    }
    ctx->pc = 0x4C33A8u;
    SET_GPR_U32(ctx, 31, 0x4C33B0u);
    ctx->pc = 0x4C33ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C33A8u;
    // 0x4c33ac: 0xafb40030  sw          $s4, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CB7A8u, 0x4C33A8u, 0x4C33B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C33B0u;
label_4c33b0:
    // 0x4c33b0: 0x1000004f  b           . + 4 + (0x4F << 2)
label_4c33b4:
    if (ctx->pc == 0x4C33B4u) {
        ctx->pc = 0x4C33B8u;
        goto label_4c33b8;
    }
    ctx->pc = 0x4C33B0u;
    {
        const bool branch_taken_0x4c33b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c33b0) {
            ctx->pc = 0x4C34F0u;
            goto label_4c34f0;
        }
    }
    ctx->pc = 0x4C33B8u;
label_4c33b8:
    // 0x4c33b8: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x4c33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_4c33bc:
    // 0x4c33bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4c33bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4c33c0:
    // 0x4c33c0: 0x8e2e00cc  lw          $t6, 0xCC($s1)
    ctx->pc = 0x4c33c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_4c33c4:
    // 0x4c33c4: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x4c33c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c33c8:
    // 0x4c33c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c33cc:
    // 0x4c33cc: 0x8e2d00d0  lw          $t5, 0xD0($s1)
    ctx->pc = 0x4c33ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_4c33d0:
    // 0x4c33d0: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x4c33d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4c33d4:
    // 0x4c33d4: 0x8e2800dc  lw          $t0, 0xDC($s1)
    ctx->pc = 0x4c33d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_4c33d8:
    // 0x4c33d8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4c33d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c33dc:
    // 0x4c33dc: 0x8c6c00c4  lw          $t4, 0xC4($v1)
    ctx->pc = 0x4c33dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_4c33e0:
    // 0x4c33e0: 0x8c4a00bc  lw          $t2, 0xBC($v0)
    ctx->pc = 0x4c33e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_4c33e4:
    // 0x4c33e4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x4c33e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4c33e8:
    // 0x4c33e8: 0x8e2900e0  lw          $t1, 0xE0($s1)
    ctx->pc = 0x4c33e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_4c33ec:
    // 0x4c33ec: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x4c33ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_4c33f0:
    // 0x4c33f0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x4c33f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_4c33f4:
    // 0x4c33f4: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x4c33f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4c33f8:
    // 0x4c33f8: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x4c33f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
label_4c33fc:
    // 0x4c33fc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4c33fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_4c3400:
    // 0x4c3400: 0xafbe0010  sw          $fp, 0x10($sp)
    ctx->pc = 0x4c3400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 30));
label_4c3404:
    // 0x4c3404: 0xafae0018  sw          $t6, 0x18($sp)
    ctx->pc = 0x4c3404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
label_4c3408:
    // 0x4c3408: 0xafad0020  sw          $t5, 0x20($sp)
    ctx->pc = 0x4c3408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 13));
label_4c340c:
    // 0x4c340c: 0xafac0028  sw          $t4, 0x28($sp)
    ctx->pc = 0x4c340cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 12));
label_4c3410:
    // 0x4c3410: 0xc132d6e  jal         func_4CB5B8
label_4c3414:
    if (ctx->pc == 0x4C3414u) {
        ctx->pc = 0x4C3414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3410u;
        // 0x4c3414: 0xafb40030  sw          $s4, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3418u;
        goto label_4c3418;
    }
    ctx->pc = 0x4C3410u;
    SET_GPR_U32(ctx, 31, 0x4C3418u);
    ctx->pc = 0x4C3414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3410u;
    // 0x4c3414: 0xafb40030  sw          $s4, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CB5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CB5B8u, 0x4C3410u, 0x4C3418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3418u;
label_4c3418:
    // 0x4c3418: 0x10000035  b           . + 4 + (0x35 << 2)
label_4c341c:
    if (ctx->pc == 0x4C341Cu) {
        ctx->pc = 0x4C3420u;
        goto label_4c3420;
    }
    ctx->pc = 0x4C3418u;
    {
        const bool branch_taken_0x4c3418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3418) {
            ctx->pc = 0x4C34F0u;
            goto label_4c34f0;
        }
    }
    ctx->pc = 0x4C3420u;
label_4c3420:
    // 0x4c3420: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x4c3420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_4c3424:
    // 0x4c3424: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4c3428:
    if (ctx->pc == 0x4C3428u) {
        ctx->pc = 0x4C3428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3424u;
        // 0x4c3428: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C342Cu;
        goto label_4c342c;
    }
    ctx->pc = 0x4C3424u;
    {
        const bool branch_taken_0x4c3424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3424u;
        // 0x4c3428: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3424) {
            ctx->pc = 0x4C3490u;
            goto label_4c3490;
        }
    }
    ctx->pc = 0x4C342Cu;
label_4c342c:
    // 0x4c342c: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x4c342cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_4c3430:
    // 0x4c3430: 0x8e2e00cc  lw          $t6, 0xCC($s1)
    ctx->pc = 0x4c3430u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_4c3434:
    // 0x4c3434: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x4c3434u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c3438:
    // 0x4c3438: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c3438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c343c:
    // 0x4c343c: 0x8e2d00d0  lw          $t5, 0xD0($s1)
    ctx->pc = 0x4c343cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_4c3440:
    // 0x4c3440: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x4c3440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4c3444:
    // 0x4c3444: 0x8e2800dc  lw          $t0, 0xDC($s1)
    ctx->pc = 0x4c3444u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_4c3448:
    // 0x4c3448: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4c3448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c344c:
    // 0x4c344c: 0x8c6c00c4  lw          $t4, 0xC4($v1)
    ctx->pc = 0x4c344cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_4c3450:
    // 0x4c3450: 0x8c4a00bc  lw          $t2, 0xBC($v0)
    ctx->pc = 0x4c3450u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_4c3454:
    // 0x4c3454: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x4c3454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4c3458:
    // 0x4c3458: 0x8e2900e0  lw          $t1, 0xE0($s1)
    ctx->pc = 0x4c3458u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_4c345c:
    // 0x4c345c: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x4c345cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_4c3460:
    // 0x4c3460: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x4c3460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_4c3464:
    // 0x4c3464: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x4c3464u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4c3468:
    // 0x4c3468: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x4c3468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
label_4c346c:
    // 0x4c346c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4c346cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_4c3470:
    // 0x4c3470: 0xafbe0010  sw          $fp, 0x10($sp)
    ctx->pc = 0x4c3470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 30));
label_4c3474:
    // 0x4c3474: 0xafae0018  sw          $t6, 0x18($sp)
    ctx->pc = 0x4c3474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
label_4c3478:
    // 0x4c3478: 0xafad0020  sw          $t5, 0x20($sp)
    ctx->pc = 0x4c3478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 13));
label_4c347c:
    // 0x4c347c: 0xafac0028  sw          $t4, 0x28($sp)
    ctx->pc = 0x4c347cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 12));
label_4c3480:
    // 0x4c3480: 0xc132dce  jal         func_4CB738
label_4c3484:
    if (ctx->pc == 0x4C3484u) {
        ctx->pc = 0x4C3484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3480u;
        // 0x4c3484: 0xafb40030  sw          $s4, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3488u;
        goto label_4c3488;
    }
    ctx->pc = 0x4C3480u;
    SET_GPR_U32(ctx, 31, 0x4C3488u);
    ctx->pc = 0x4C3484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3480u;
    // 0x4c3484: 0xafb40030  sw          $s4, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CB738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CB738u, 0x4C3480u, 0x4C3488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3488u;
label_4c3488:
    // 0x4c3488: 0x10000019  b           . + 4 + (0x19 << 2)
label_4c348c:
    if (ctx->pc == 0x4C348Cu) {
        ctx->pc = 0x4C3490u;
        goto label_4c3490;
    }
    ctx->pc = 0x4C3488u;
    {
        const bool branch_taken_0x4c3488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3488) {
            ctx->pc = 0x4C34F0u;
            goto label_4c34f0;
        }
    }
    ctx->pc = 0x4C3490u;
label_4c3490:
    // 0x4c3490: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x4c3490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_4c3494:
    // 0x4c3494: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4c3494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4c3498:
    // 0x4c3498: 0x8e2e00cc  lw          $t6, 0xCC($s1)
    ctx->pc = 0x4c3498u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_4c349c:
    // 0x4c349c: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x4c349cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c34a0:
    // 0x4c34a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c34a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c34a4:
    // 0x4c34a4: 0x8e2d00d0  lw          $t5, 0xD0($s1)
    ctx->pc = 0x4c34a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_4c34a8:
    // 0x4c34a8: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x4c34a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4c34ac:
    // 0x4c34ac: 0x8e2800dc  lw          $t0, 0xDC($s1)
    ctx->pc = 0x4c34acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_4c34b0:
    // 0x4c34b0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4c34b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c34b4:
    // 0x4c34b4: 0x8c6c00c4  lw          $t4, 0xC4($v1)
    ctx->pc = 0x4c34b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_4c34b8:
    // 0x4c34b8: 0x8c4a00bc  lw          $t2, 0xBC($v0)
    ctx->pc = 0x4c34b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_4c34bc:
    // 0x4c34bc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x4c34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4c34c0:
    // 0x4c34c0: 0x8e2900e0  lw          $t1, 0xE0($s1)
    ctx->pc = 0x4c34c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_4c34c4:
    // 0x4c34c4: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x4c34c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_4c34c8:
    // 0x4c34c8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x4c34c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_4c34cc:
    // 0x4c34cc: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x4c34ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4c34d0:
    // 0x4c34d0: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x4c34d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
label_4c34d4:
    // 0x4c34d4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4c34d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_4c34d8:
    // 0x4c34d8: 0xafbe0010  sw          $fp, 0x10($sp)
    ctx->pc = 0x4c34d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 30));
label_4c34dc:
    // 0x4c34dc: 0xafae0018  sw          $t6, 0x18($sp)
    ctx->pc = 0x4c34dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
label_4c34e0:
    // 0x4c34e0: 0xafad0020  sw          $t5, 0x20($sp)
    ctx->pc = 0x4c34e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 13));
label_4c34e4:
    // 0x4c34e4: 0xafac0028  sw          $t4, 0x28($sp)
    ctx->pc = 0x4c34e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 12));
label_4c34e8:
    // 0x4c34e8: 0xc132d8a  jal         func_4CB628
label_4c34ec:
    if (ctx->pc == 0x4C34ECu) {
        ctx->pc = 0x4C34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C34E8u;
        // 0x4c34ec: 0xafb40030  sw          $s4, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C34F0u;
        goto label_4c34f0;
    }
    ctx->pc = 0x4C34E8u;
    SET_GPR_U32(ctx, 31, 0x4C34F0u);
    ctx->pc = 0x4C34ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C34E8u;
    // 0x4c34ec: 0xafb40030  sw          $s4, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CB628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CB628u, 0x4C34E8u, 0x4C34F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C34F0u;
label_4c34f0:
    // 0x4c34f0: 0xae200138  sw          $zero, 0x138($s1)
    ctx->pc = 0x4c34f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 0));
label_4c34f4:
    // 0x4c34f4: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x4c34f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_4c34f8:
    // 0x4c34f8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x4c34f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4c34fc:
    // 0x4c34fc: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x4c34fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_4c3500:
    // 0x4c3500: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x4c3500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4c3504:
    // 0x4c3504: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x4c3504u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_4c3508:
    // 0x4c3508: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x4c3508u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4c350c:
    // 0x4c350c: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x4c350cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_4c3510:
    // 0x4c3510: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x4c3510u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4c3514:
    // 0x4c3514: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x4c3514u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_4c3518:
    // 0x4c3518: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x4c3518u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4c351c:
    // 0x4c351c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x4c351cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_4c3520:
    // 0x4c3520: 0x3e00008  jr          $ra
label_4c3524:
    if (ctx->pc == 0x4C3524u) {
        ctx->pc = 0x4C3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3520u;
        // 0x4c3524: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3528u;
        goto label_fallthrough_0x4c3520;
    }
    ctx->pc = 0x4C3520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3520u;
        // 0x4c3524: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C3520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4c3520:
    ctx->pc = 0x4C3528u;
}
