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

// Function: sub_004B2BD0
// Address: 0x4b2bd0 - 0x4b3190
void sub_004B2BD0_0x4b2bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2BD0_0x4b2bd0");
#endif

    switch (ctx->pc) {
        case 0x4b2bd0u: goto label_4b2bd0;
        case 0x4b2bd4u: goto label_4b2bd4;
        case 0x4b2bd8u: goto label_4b2bd8;
        case 0x4b2bdcu: goto label_4b2bdc;
        case 0x4b2be0u: goto label_4b2be0;
        case 0x4b2be4u: goto label_4b2be4;
        case 0x4b2be8u: goto label_4b2be8;
        case 0x4b2becu: goto label_4b2bec;
        case 0x4b2bf0u: goto label_4b2bf0;
        case 0x4b2bf4u: goto label_4b2bf4;
        case 0x4b2bf8u: goto label_4b2bf8;
        case 0x4b2bfcu: goto label_4b2bfc;
        case 0x4b2c00u: goto label_4b2c00;
        case 0x4b2c04u: goto label_4b2c04;
        case 0x4b2c08u: goto label_4b2c08;
        case 0x4b2c0cu: goto label_4b2c0c;
        case 0x4b2c10u: goto label_4b2c10;
        case 0x4b2c14u: goto label_4b2c14;
        case 0x4b2c18u: goto label_4b2c18;
        case 0x4b2c1cu: goto label_4b2c1c;
        case 0x4b2c20u: goto label_4b2c20;
        case 0x4b2c24u: goto label_4b2c24;
        case 0x4b2c28u: goto label_4b2c28;
        case 0x4b2c2cu: goto label_4b2c2c;
        case 0x4b2c30u: goto label_4b2c30;
        case 0x4b2c34u: goto label_4b2c34;
        case 0x4b2c38u: goto label_4b2c38;
        case 0x4b2c3cu: goto label_4b2c3c;
        case 0x4b2c40u: goto label_4b2c40;
        case 0x4b2c44u: goto label_4b2c44;
        case 0x4b2c48u: goto label_4b2c48;
        case 0x4b2c4cu: goto label_4b2c4c;
        case 0x4b2c50u: goto label_4b2c50;
        case 0x4b2c54u: goto label_4b2c54;
        case 0x4b2c58u: goto label_4b2c58;
        case 0x4b2c5cu: goto label_4b2c5c;
        case 0x4b2c60u: goto label_4b2c60;
        case 0x4b2c64u: goto label_4b2c64;
        case 0x4b2c68u: goto label_4b2c68;
        case 0x4b2c6cu: goto label_4b2c6c;
        case 0x4b2c70u: goto label_4b2c70;
        case 0x4b2c74u: goto label_4b2c74;
        case 0x4b2c78u: goto label_4b2c78;
        case 0x4b2c7cu: goto label_4b2c7c;
        case 0x4b2c80u: goto label_4b2c80;
        case 0x4b2c84u: goto label_4b2c84;
        case 0x4b2c88u: goto label_4b2c88;
        case 0x4b2c8cu: goto label_4b2c8c;
        case 0x4b2c90u: goto label_4b2c90;
        case 0x4b2c94u: goto label_4b2c94;
        case 0x4b2c98u: goto label_4b2c98;
        case 0x4b2c9cu: goto label_4b2c9c;
        case 0x4b2ca0u: goto label_4b2ca0;
        case 0x4b2ca4u: goto label_4b2ca4;
        case 0x4b2ca8u: goto label_4b2ca8;
        case 0x4b2cacu: goto label_4b2cac;
        case 0x4b2cb0u: goto label_4b2cb0;
        case 0x4b2cb4u: goto label_4b2cb4;
        case 0x4b2cb8u: goto label_4b2cb8;
        case 0x4b2cbcu: goto label_4b2cbc;
        case 0x4b2cc0u: goto label_4b2cc0;
        case 0x4b2cc4u: goto label_4b2cc4;
        case 0x4b2cc8u: goto label_4b2cc8;
        case 0x4b2cccu: goto label_4b2ccc;
        case 0x4b2cd0u: goto label_4b2cd0;
        case 0x4b2cd4u: goto label_4b2cd4;
        case 0x4b2cd8u: goto label_4b2cd8;
        case 0x4b2cdcu: goto label_4b2cdc;
        case 0x4b2ce0u: goto label_4b2ce0;
        case 0x4b2ce4u: goto label_4b2ce4;
        case 0x4b2ce8u: goto label_4b2ce8;
        case 0x4b2cecu: goto label_4b2cec;
        case 0x4b2cf0u: goto label_4b2cf0;
        case 0x4b2cf4u: goto label_4b2cf4;
        case 0x4b2cf8u: goto label_4b2cf8;
        case 0x4b2cfcu: goto label_4b2cfc;
        case 0x4b2d00u: goto label_4b2d00;
        case 0x4b2d04u: goto label_4b2d04;
        case 0x4b2d08u: goto label_4b2d08;
        case 0x4b2d0cu: goto label_4b2d0c;
        case 0x4b2d10u: goto label_4b2d10;
        case 0x4b2d14u: goto label_4b2d14;
        case 0x4b2d18u: goto label_4b2d18;
        case 0x4b2d1cu: goto label_4b2d1c;
        case 0x4b2d20u: goto label_4b2d20;
        case 0x4b2d24u: goto label_4b2d24;
        case 0x4b2d28u: goto label_4b2d28;
        case 0x4b2d2cu: goto label_4b2d2c;
        case 0x4b2d30u: goto label_4b2d30;
        case 0x4b2d34u: goto label_4b2d34;
        case 0x4b2d38u: goto label_4b2d38;
        case 0x4b2d3cu: goto label_4b2d3c;
        case 0x4b2d40u: goto label_4b2d40;
        case 0x4b2d44u: goto label_4b2d44;
        case 0x4b2d48u: goto label_4b2d48;
        case 0x4b2d4cu: goto label_4b2d4c;
        case 0x4b2d50u: goto label_4b2d50;
        case 0x4b2d54u: goto label_4b2d54;
        case 0x4b2d58u: goto label_4b2d58;
        case 0x4b2d5cu: goto label_4b2d5c;
        case 0x4b2d60u: goto label_4b2d60;
        case 0x4b2d64u: goto label_4b2d64;
        case 0x4b2d68u: goto label_4b2d68;
        case 0x4b2d6cu: goto label_4b2d6c;
        case 0x4b2d70u: goto label_4b2d70;
        case 0x4b2d74u: goto label_4b2d74;
        case 0x4b2d78u: goto label_4b2d78;
        case 0x4b2d7cu: goto label_4b2d7c;
        case 0x4b2d80u: goto label_4b2d80;
        case 0x4b2d84u: goto label_4b2d84;
        case 0x4b2d88u: goto label_4b2d88;
        case 0x4b2d8cu: goto label_4b2d8c;
        case 0x4b2d90u: goto label_4b2d90;
        case 0x4b2d94u: goto label_4b2d94;
        case 0x4b2d98u: goto label_4b2d98;
        case 0x4b2d9cu: goto label_4b2d9c;
        case 0x4b2da0u: goto label_4b2da0;
        case 0x4b2da4u: goto label_4b2da4;
        case 0x4b2da8u: goto label_4b2da8;
        case 0x4b2dacu: goto label_4b2dac;
        case 0x4b2db0u: goto label_4b2db0;
        case 0x4b2db4u: goto label_4b2db4;
        case 0x4b2db8u: goto label_4b2db8;
        case 0x4b2dbcu: goto label_4b2dbc;
        case 0x4b2dc0u: goto label_4b2dc0;
        case 0x4b2dc4u: goto label_4b2dc4;
        case 0x4b2dc8u: goto label_4b2dc8;
        case 0x4b2dccu: goto label_4b2dcc;
        case 0x4b2dd0u: goto label_4b2dd0;
        case 0x4b2dd4u: goto label_4b2dd4;
        case 0x4b2dd8u: goto label_4b2dd8;
        case 0x4b2ddcu: goto label_4b2ddc;
        case 0x4b2de0u: goto label_4b2de0;
        case 0x4b2de4u: goto label_4b2de4;
        case 0x4b2de8u: goto label_4b2de8;
        case 0x4b2decu: goto label_4b2dec;
        case 0x4b2df0u: goto label_4b2df0;
        case 0x4b2df4u: goto label_4b2df4;
        case 0x4b2df8u: goto label_4b2df8;
        case 0x4b2dfcu: goto label_4b2dfc;
        case 0x4b2e00u: goto label_4b2e00;
        case 0x4b2e04u: goto label_4b2e04;
        case 0x4b2e08u: goto label_4b2e08;
        case 0x4b2e0cu: goto label_4b2e0c;
        case 0x4b2e10u: goto label_4b2e10;
        case 0x4b2e14u: goto label_4b2e14;
        case 0x4b2e18u: goto label_4b2e18;
        case 0x4b2e1cu: goto label_4b2e1c;
        case 0x4b2e20u: goto label_4b2e20;
        case 0x4b2e24u: goto label_4b2e24;
        case 0x4b2e28u: goto label_4b2e28;
        case 0x4b2e2cu: goto label_4b2e2c;
        case 0x4b2e30u: goto label_4b2e30;
        case 0x4b2e34u: goto label_4b2e34;
        case 0x4b2e38u: goto label_4b2e38;
        case 0x4b2e3cu: goto label_4b2e3c;
        case 0x4b2e40u: goto label_4b2e40;
        case 0x4b2e44u: goto label_4b2e44;
        case 0x4b2e48u: goto label_4b2e48;
        case 0x4b2e4cu: goto label_4b2e4c;
        case 0x4b2e50u: goto label_4b2e50;
        case 0x4b2e54u: goto label_4b2e54;
        case 0x4b2e58u: goto label_4b2e58;
        case 0x4b2e5cu: goto label_4b2e5c;
        case 0x4b2e60u: goto label_4b2e60;
        case 0x4b2e64u: goto label_4b2e64;
        case 0x4b2e68u: goto label_4b2e68;
        case 0x4b2e6cu: goto label_4b2e6c;
        case 0x4b2e70u: goto label_4b2e70;
        case 0x4b2e74u: goto label_4b2e74;
        case 0x4b2e78u: goto label_4b2e78;
        case 0x4b2e7cu: goto label_4b2e7c;
        case 0x4b2e80u: goto label_4b2e80;
        case 0x4b2e84u: goto label_4b2e84;
        case 0x4b2e88u: goto label_4b2e88;
        case 0x4b2e8cu: goto label_4b2e8c;
        case 0x4b2e90u: goto label_4b2e90;
        case 0x4b2e94u: goto label_4b2e94;
        case 0x4b2e98u: goto label_4b2e98;
        case 0x4b2e9cu: goto label_4b2e9c;
        case 0x4b2ea0u: goto label_4b2ea0;
        case 0x4b2ea4u: goto label_4b2ea4;
        case 0x4b2ea8u: goto label_4b2ea8;
        case 0x4b2eacu: goto label_4b2eac;
        case 0x4b2eb0u: goto label_4b2eb0;
        case 0x4b2eb4u: goto label_4b2eb4;
        case 0x4b2eb8u: goto label_4b2eb8;
        case 0x4b2ebcu: goto label_4b2ebc;
        case 0x4b2ec0u: goto label_4b2ec0;
        case 0x4b2ec4u: goto label_4b2ec4;
        case 0x4b2ec8u: goto label_4b2ec8;
        case 0x4b2eccu: goto label_4b2ecc;
        case 0x4b2ed0u: goto label_4b2ed0;
        case 0x4b2ed4u: goto label_4b2ed4;
        case 0x4b2ed8u: goto label_4b2ed8;
        case 0x4b2edcu: goto label_4b2edc;
        case 0x4b2ee0u: goto label_4b2ee0;
        case 0x4b2ee4u: goto label_4b2ee4;
        case 0x4b2ee8u: goto label_4b2ee8;
        case 0x4b2eecu: goto label_4b2eec;
        case 0x4b2ef0u: goto label_4b2ef0;
        case 0x4b2ef4u: goto label_4b2ef4;
        case 0x4b2ef8u: goto label_4b2ef8;
        case 0x4b2efcu: goto label_4b2efc;
        case 0x4b2f00u: goto label_4b2f00;
        case 0x4b2f04u: goto label_4b2f04;
        case 0x4b2f08u: goto label_4b2f08;
        case 0x4b2f0cu: goto label_4b2f0c;
        case 0x4b2f10u: goto label_4b2f10;
        case 0x4b2f14u: goto label_4b2f14;
        case 0x4b2f18u: goto label_4b2f18;
        case 0x4b2f1cu: goto label_4b2f1c;
        case 0x4b2f20u: goto label_4b2f20;
        case 0x4b2f24u: goto label_4b2f24;
        case 0x4b2f28u: goto label_4b2f28;
        case 0x4b2f2cu: goto label_4b2f2c;
        case 0x4b2f30u: goto label_4b2f30;
        case 0x4b2f34u: goto label_4b2f34;
        case 0x4b2f38u: goto label_4b2f38;
        case 0x4b2f3cu: goto label_4b2f3c;
        case 0x4b2f40u: goto label_4b2f40;
        case 0x4b2f44u: goto label_4b2f44;
        case 0x4b2f48u: goto label_4b2f48;
        case 0x4b2f4cu: goto label_4b2f4c;
        case 0x4b2f50u: goto label_4b2f50;
        case 0x4b2f54u: goto label_4b2f54;
        case 0x4b2f58u: goto label_4b2f58;
        case 0x4b2f5cu: goto label_4b2f5c;
        case 0x4b2f60u: goto label_4b2f60;
        case 0x4b2f64u: goto label_4b2f64;
        case 0x4b2f68u: goto label_4b2f68;
        case 0x4b2f6cu: goto label_4b2f6c;
        case 0x4b2f70u: goto label_4b2f70;
        case 0x4b2f74u: goto label_4b2f74;
        case 0x4b2f78u: goto label_4b2f78;
        case 0x4b2f7cu: goto label_4b2f7c;
        case 0x4b2f80u: goto label_4b2f80;
        case 0x4b2f84u: goto label_4b2f84;
        case 0x4b2f88u: goto label_4b2f88;
        case 0x4b2f8cu: goto label_4b2f8c;
        case 0x4b2f90u: goto label_4b2f90;
        case 0x4b2f94u: goto label_4b2f94;
        case 0x4b2f98u: goto label_4b2f98;
        case 0x4b2f9cu: goto label_4b2f9c;
        case 0x4b2fa0u: goto label_4b2fa0;
        case 0x4b2fa4u: goto label_4b2fa4;
        case 0x4b2fa8u: goto label_4b2fa8;
        case 0x4b2facu: goto label_4b2fac;
        case 0x4b2fb0u: goto label_4b2fb0;
        case 0x4b2fb4u: goto label_4b2fb4;
        case 0x4b2fb8u: goto label_4b2fb8;
        case 0x4b2fbcu: goto label_4b2fbc;
        case 0x4b2fc0u: goto label_4b2fc0;
        case 0x4b2fc4u: goto label_4b2fc4;
        case 0x4b2fc8u: goto label_4b2fc8;
        case 0x4b2fccu: goto label_4b2fcc;
        case 0x4b2fd0u: goto label_4b2fd0;
        case 0x4b2fd4u: goto label_4b2fd4;
        case 0x4b2fd8u: goto label_4b2fd8;
        case 0x4b2fdcu: goto label_4b2fdc;
        case 0x4b2fe0u: goto label_4b2fe0;
        case 0x4b2fe4u: goto label_4b2fe4;
        case 0x4b2fe8u: goto label_4b2fe8;
        case 0x4b2fecu: goto label_4b2fec;
        case 0x4b2ff0u: goto label_4b2ff0;
        case 0x4b2ff4u: goto label_4b2ff4;
        case 0x4b2ff8u: goto label_4b2ff8;
        case 0x4b2ffcu: goto label_4b2ffc;
        case 0x4b3000u: goto label_4b3000;
        case 0x4b3004u: goto label_4b3004;
        case 0x4b3008u: goto label_4b3008;
        case 0x4b300cu: goto label_4b300c;
        case 0x4b3010u: goto label_4b3010;
        case 0x4b3014u: goto label_4b3014;
        case 0x4b3018u: goto label_4b3018;
        case 0x4b301cu: goto label_4b301c;
        case 0x4b3020u: goto label_4b3020;
        case 0x4b3024u: goto label_4b3024;
        case 0x4b3028u: goto label_4b3028;
        case 0x4b302cu: goto label_4b302c;
        case 0x4b3030u: goto label_4b3030;
        case 0x4b3034u: goto label_4b3034;
        case 0x4b3038u: goto label_4b3038;
        case 0x4b303cu: goto label_4b303c;
        case 0x4b3040u: goto label_4b3040;
        case 0x4b3044u: goto label_4b3044;
        case 0x4b3048u: goto label_4b3048;
        case 0x4b304cu: goto label_4b304c;
        case 0x4b3050u: goto label_4b3050;
        case 0x4b3054u: goto label_4b3054;
        case 0x4b3058u: goto label_4b3058;
        case 0x4b305cu: goto label_4b305c;
        case 0x4b3060u: goto label_4b3060;
        case 0x4b3064u: goto label_4b3064;
        case 0x4b3068u: goto label_4b3068;
        case 0x4b306cu: goto label_4b306c;
        case 0x4b3070u: goto label_4b3070;
        case 0x4b3074u: goto label_4b3074;
        case 0x4b3078u: goto label_4b3078;
        case 0x4b307cu: goto label_4b307c;
        case 0x4b3080u: goto label_4b3080;
        case 0x4b3084u: goto label_4b3084;
        case 0x4b3088u: goto label_4b3088;
        case 0x4b308cu: goto label_4b308c;
        case 0x4b3090u: goto label_4b3090;
        case 0x4b3094u: goto label_4b3094;
        case 0x4b3098u: goto label_4b3098;
        case 0x4b309cu: goto label_4b309c;
        case 0x4b30a0u: goto label_4b30a0;
        case 0x4b30a4u: goto label_4b30a4;
        case 0x4b30a8u: goto label_4b30a8;
        case 0x4b30acu: goto label_4b30ac;
        case 0x4b30b0u: goto label_4b30b0;
        case 0x4b30b4u: goto label_4b30b4;
        case 0x4b30b8u: goto label_4b30b8;
        case 0x4b30bcu: goto label_4b30bc;
        case 0x4b30c0u: goto label_4b30c0;
        case 0x4b30c4u: goto label_4b30c4;
        case 0x4b30c8u: goto label_4b30c8;
        case 0x4b30ccu: goto label_4b30cc;
        case 0x4b30d0u: goto label_4b30d0;
        case 0x4b30d4u: goto label_4b30d4;
        case 0x4b30d8u: goto label_4b30d8;
        case 0x4b30dcu: goto label_4b30dc;
        case 0x4b30e0u: goto label_4b30e0;
        case 0x4b30e4u: goto label_4b30e4;
        case 0x4b30e8u: goto label_4b30e8;
        case 0x4b30ecu: goto label_4b30ec;
        case 0x4b30f0u: goto label_4b30f0;
        case 0x4b30f4u: goto label_4b30f4;
        case 0x4b30f8u: goto label_4b30f8;
        case 0x4b30fcu: goto label_4b30fc;
        case 0x4b3100u: goto label_4b3100;
        case 0x4b3104u: goto label_4b3104;
        case 0x4b3108u: goto label_4b3108;
        case 0x4b310cu: goto label_4b310c;
        case 0x4b3110u: goto label_4b3110;
        case 0x4b3114u: goto label_4b3114;
        case 0x4b3118u: goto label_4b3118;
        case 0x4b311cu: goto label_4b311c;
        case 0x4b3120u: goto label_4b3120;
        case 0x4b3124u: goto label_4b3124;
        case 0x4b3128u: goto label_4b3128;
        case 0x4b312cu: goto label_4b312c;
        case 0x4b3130u: goto label_4b3130;
        case 0x4b3134u: goto label_4b3134;
        case 0x4b3138u: goto label_4b3138;
        case 0x4b313cu: goto label_4b313c;
        case 0x4b3140u: goto label_4b3140;
        case 0x4b3144u: goto label_4b3144;
        case 0x4b3148u: goto label_4b3148;
        case 0x4b314cu: goto label_4b314c;
        case 0x4b3150u: goto label_4b3150;
        case 0x4b3154u: goto label_4b3154;
        case 0x4b3158u: goto label_4b3158;
        case 0x4b315cu: goto label_4b315c;
        case 0x4b3160u: goto label_4b3160;
        case 0x4b3164u: goto label_4b3164;
        case 0x4b3168u: goto label_4b3168;
        case 0x4b316cu: goto label_4b316c;
        case 0x4b3170u: goto label_4b3170;
        case 0x4b3174u: goto label_4b3174;
        case 0x4b3178u: goto label_4b3178;
        case 0x4b317cu: goto label_4b317c;
        case 0x4b3180u: goto label_4b3180;
        case 0x4b3184u: goto label_4b3184;
        case 0x4b3188u: goto label_4b3188;
        case 0x4b318cu: goto label_4b318c;
        default: break;
    }

    ctx->pc = 0x4b2bd0u;

label_4b2bd0:
    // 0x4b2bd0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x4b2bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_4b2bd4:
    // 0x4b2bd4: 0x3122000e  andi        $v0, $t1, 0xE
    ctx->pc = 0x4b2bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)14);
label_4b2bd8:
    // 0x4b2bd8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4b2bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4b2bdc:
    // 0x4b2bdc: 0x91203  sra         $v0, $t1, 8
    ctx->pc = 0x4b2bdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 8));
label_4b2be0:
    // 0x4b2be0: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x4b2be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_4b2be4:
    // 0x4b2be4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4b2be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4b2be8:
    // 0x4b2be8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4b2be8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4b2bec:
    // 0x4b2bec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b2becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4b2bf0:
    // 0x4b2bf0: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x4b2bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
label_4b2bf4:
    // 0x4b2bf4: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x4b2bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_4b2bf8:
    // 0x4b2bf8: 0x26a3ffbb  addiu       $v1, $s5, -0x45
    ctx->pc = 0x4b2bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967227));
label_4b2bfc:
    // 0x4b2bfc: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x4b2bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_4b2c00:
    // 0x4b2c00: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4b2c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b2c04:
    // 0x4b2c04: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x4b2c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_4b2c08:
    // 0x4b2c08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4b2c08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b2c0c:
    // 0x4b2c0c: 0xafaa0020  sw          $t2, 0x20($sp)
    ctx->pc = 0x4b2c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 10));
label_4b2c10:
    // 0x4b2c10: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4b2c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4b2c14:
    // 0x4b2c14: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4b2c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4b2c18:
    // 0x4b2c18: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b2c18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b2c1c:
    // 0x4b2c1c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x4b2c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_4b2c20:
    // 0x4b2c20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4b2c20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b2c24:
    // 0x4b2c24: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x4b2c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_4b2c28:
    // 0x4b2c28: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4b2c28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b2c2c:
    // 0x4b2c2c: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x4b2c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_4b2c30:
    // 0x4b2c30: 0x2c620023  sltiu       $v0, $v1, 0x23
    ctx->pc = 0x4b2c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
label_4b2c34:
    // 0x4b2c34: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x4b2c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_4b2c38:
    // 0x4b2c38: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x4b2c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_4b2c3c:
    // 0x4b2c3c: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x4b2c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
label_4b2c40:
    // 0x4b2c40: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4b2c44:
    if (ctx->pc == 0x4B2C44u) {
        ctx->pc = 0x4B2C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2C40u;
        // 0x4b2c44: 0xafab0024  sw          $t3, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2C48u;
        goto label_4b2c48;
    }
    ctx->pc = 0x4B2C40u;
    {
        const bool branch_taken_0x4b2c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2C40u;
        // 0x4b2c44: 0xafab0024  sw          $t3, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2c40) {
            ctx->pc = 0x4B2CACu;
            goto label_4b2cac;
        }
    }
    ctx->pc = 0x4B2C48u;
label_4b2c48:
    // 0x4b2c48: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4b2c4c:
    // 0x4b2c4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b2c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b2c50:
    // 0x4b2c50: 0x24420b20  addiu       $v0, $v0, 0xB20
    ctx->pc = 0x4b2c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2848));
label_4b2c54:
    // 0x4b2c54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b2c58:
    // 0x4b2c58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4b2c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b2c5c:
    // 0x4b2c5c: 0x800008  jr          $a0
label_4b2c60:
    if (ctx->pc == 0x4B2C60u) {
        ctx->pc = 0x4B2C64u;
        goto label_4b2c64;
    }
    ctx->pc = 0x4B2C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4B2C64u: goto label_4b2c64;
            case 0x4B2C6Cu: goto label_4b2c6c;
            case 0x4B2C80u: goto label_4b2c80;
            case 0x4B2CACu: goto label_4b2cac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2C5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4B2C64u;
label_4b2c64:
    // 0x4b2c64: 0x10000011  b           . + 4 + (0x11 << 2)
label_4b2c68:
    if (ctx->pc == 0x4B2C68u) {
        ctx->pc = 0x4B2C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2C64u;
        // 0x4b2c68: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2C6Cu;
        goto label_4b2c6c;
    }
    ctx->pc = 0x4B2C64u;
    {
        const bool branch_taken_0x4b2c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2C64u;
        // 0x4b2c68: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2c64) {
            ctx->pc = 0x4B2CACu;
            goto label_4b2cac;
        }
    }
    ctx->pc = 0x4B2C6Cu;
label_4b2c6c:
    // 0x4b2c6c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x4b2c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4b2c70:
    // 0x4b2c70: 0x3a0203e7  xori        $v0, $s0, 0x3E7
    ctx->pc = 0x4b2c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)999);
label_4b2c74:
    // 0x4b2c74: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x4b2c74u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_4b2c78:
    // 0x4b2c78: 0x1000000b  b           . + 4 + (0xB << 2)
label_4b2c7c:
    if (ctx->pc == 0x4B2C7Cu) {
        ctx->pc = 0x4B2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2C78u;
        // 0x4b2c7c: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2C80u;
        goto label_4b2c80;
    }
    ctx->pc = 0x4B2C78u;
    {
        const bool branch_taken_0x4b2c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2C78u;
        // 0x4b2c7c: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2c78) {
            ctx->pc = 0x4B2CA8u;
            goto label_4b2ca8;
        }
    }
    ctx->pc = 0x4B2C80u;
label_4b2c80:
    // 0x4b2c80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b2c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b2c84:
    // 0x4b2c84: 0x3aa30067  xori        $v1, $s5, 0x67
    ctx->pc = 0x4b2c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)103);
label_4b2c88:
    // 0x4b2c88: 0x31240100  andi        $a0, $t1, 0x100
    ctx->pc = 0x4b2c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)256);
label_4b2c8c:
    // 0x4b2c8c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x4b2c8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b2c90:
    // 0x4b2c90: 0x24170045  addiu       $s7, $zero, 0x45
    ctx->pc = 0x4b2c90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_4b2c94:
    // 0x4b2c94: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x4b2c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_4b2c98:
    // 0x4b2c98: 0x43b80a  movz        $s7, $v0, $v1
    ctx->pc = 0x4b2c98u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_4b2c9c:
    // 0x4b2c9c: 0x4500b  movn        $t2, $zero, $a0
    ctx->pc = 0x4b2c9cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_4b2ca0:
    // 0x4b2ca0: 0xb0800a  movz        $s0, $a1, $s0
    ctx->pc = 0x4b2ca0u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_4b2ca4:
    // 0x4b2ca4: 0x24150067  addiu       $s5, $zero, 0x67
    ctx->pc = 0x4b2ca4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_4b2ca8:
    // 0x4b2ca8: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x4b2ca8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b2cac:
    // 0x4b2cac: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x4b2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_4b2cb0:
    // 0x4b2cb0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_4b2cb4:
    if (ctx->pc == 0x4B2CB4u) {
        ctx->pc = 0x4B2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2CB0u;
        // 0x4b2cb4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2CB8u;
        goto label_4b2cb8;
    }
    ctx->pc = 0x4B2CB0u;
    {
        const bool branch_taken_0x4b2cb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2CB0u;
        // 0x4b2cb4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2cb0) {
            ctx->pc = 0x4B2CC0u;
            goto label_4b2cc0;
        }
    }
    ctx->pc = 0x4B2CB8u;
label_4b2cb8:
    // 0x4b2cb8: 0x3a820003  xori        $v0, $s4, 0x3
    ctx->pc = 0x4b2cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)3);
label_4b2cbc:
    // 0x4b2cbc: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x4b2cbcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_4b2cc0:
    // 0x4b2cc0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4b2cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b2cc4:
    // 0x4b2cc4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4b2cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b2cc8:
    // 0x4b2cc8: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x4b2cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4b2ccc:
    // 0x4b2ccc: 0x27a80014  addiu       $t0, $sp, 0x14
    ctx->pc = 0x4b2cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_4b2cd0:
    // 0x4b2cd0: 0x27a90018  addiu       $t1, $sp, 0x18
    ctx->pc = 0x4b2cd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_4b2cd4:
    // 0x4b2cd4: 0xc12d70e  jal         func_4B5C38
label_4b2cd8:
    if (ctx->pc == 0x4B2CD8u) {
        ctx->pc = 0x4B2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2CD4u;
        // 0x4b2cd8: 0x7faa0040  sq          $t2, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2CDCu;
        goto label_4b2cdc;
    }
    ctx->pc = 0x4B2CD4u;
    SET_GPR_U32(ctx, 31, 0x4B2CDCu);
    ctx->pc = 0x4B2CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2CD4u;
    // 0x4b2cd8: 0x7faa0040  sq          $t2, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5C38u, 0x4B2CD4u, 0x4B2CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2CDCu;
label_4b2cdc:
    // 0x4b2cdc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x4b2cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_4b2ce0:
    // 0x4b2ce0: 0x27b6000c  addiu       $s6, $sp, 0xC
    ctx->pc = 0x4b2ce0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_4b2ce4:
    // 0x4b2ce4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x4b2ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_4b2ce8:
    // 0x4b2ce8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b2ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b2cec:
    // 0x4b2cec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4b2cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4b2cf0:
    // 0x4b2cf0: 0x7baa0040  lq          $t2, 0x40($sp)
    ctx->pc = 0x4b2cf0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b2cf4:
    // 0x4b2cf4: 0x448823  subu        $s1, $v0, $a0
    ctx->pc = 0x4b2cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4b2cf8:
    // 0x4b2cf8: 0x1283002c  beq         $s4, $v1, . + 4 + (0x2C << 2)
label_4b2cfc:
    if (ctx->pc == 0x4B2CFCu) {
        ctx->pc = 0x4B2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2CF8u;
        // 0x4b2cfc: 0x234800a  movz        $s0, $s1, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2D00u;
        goto label_4b2d00;
    }
    ctx->pc = 0x4B2CF8u;
    {
        const bool branch_taken_0x4b2cf8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2CF8u;
        // 0x4b2cfc: 0x234800a  movz        $s0, $s1, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2cf8) {
            ctx->pc = 0x4B2DACu;
            goto label_4b2dac;
        }
    }
    ctx->pc = 0x4B2D00u;
label_4b2d00:
    // 0x4b2d00: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4b2d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4b2d04:
    // 0x4b2d04: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x4b2d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_4b2d08:
    // 0x4b2d08: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
label_4b2d0c:
    if (ctx->pc == 0x4B2D0Cu) {
        ctx->pc = 0x4B2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2D08u;
        // 0x4b2d0c: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2D10u;
        goto label_4b2d10;
    }
    ctx->pc = 0x4B2D08u;
    {
        const bool branch_taken_0x4b2d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2D08u;
        // 0x4b2d0c: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2d08) {
            ctx->pc = 0x4B2DB4u;
            goto label_4b2db4;
        }
    }
    ctx->pc = 0x4B2D10u;
label_4b2d10:
    // 0x4b2d10: 0x12a20004  beq         $s5, $v0, . + 4 + (0x4 << 2)
label_4b2d14:
    if (ctx->pc == 0x4B2D14u) {
        ctx->pc = 0x4B2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2D10u;
        // 0x4b2d14: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2D18u;
        goto label_4b2d18;
    }
    ctx->pc = 0x4B2D10u;
    {
        const bool branch_taken_0x4b2d10 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2D10u;
        // 0x4b2d14: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2d10) {
            ctx->pc = 0x4B2D24u;
            goto label_4b2d24;
        }
    }
    ctx->pc = 0x4B2D18u;
label_4b2d18:
    // 0x4b2d18: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x4b2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_4b2d1c:
    // 0x4b2d1c: 0x16a20006  bne         $s5, $v0, . + 4 + (0x6 << 2)
label_4b2d20:
    if (ctx->pc == 0x4B2D20u) {
        ctx->pc = 0x4B2D24u;
        goto label_4b2d24;
    }
    ctx->pc = 0x4B2D1Cu;
    {
        const bool branch_taken_0x4b2d1c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b2d1c) {
            ctx->pc = 0x4B2D38u;
            goto label_4b2d38;
        }
    }
    ctx->pc = 0x4B2D24u;
label_4b2d24:
    // 0x4b2d24: 0x2882fffc  slti        $v0, $a0, -0x4
    ctx->pc = 0x4b2d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967292) ? 1 : 0);
label_4b2d28:
    // 0x4b2d28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4b2d2c:
    if (ctx->pc == 0x4B2D2Cu) {
        ctx->pc = 0x4B2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2D28u;
        // 0x4b2d2c: 0x90102a  slt         $v0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2D30u;
        goto label_4b2d30;
    }
    ctx->pc = 0x4B2D28u;
    {
        const bool branch_taken_0x4b2d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2D28u;
        // 0x4b2d2c: 0x90102a  slt         $v0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2d28) {
            ctx->pc = 0x4B2D38u;
            goto label_4b2d38;
        }
    }
    ctx->pc = 0x4B2D30u;
label_4b2d30:
    // 0x4b2d30: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_4b2d34:
    if (ctx->pc == 0x4B2D34u) {
        ctx->pc = 0x4B2D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2D30u;
        // 0x4b2d34: 0x3a850001  xori        $a1, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2D38u;
        goto label_4b2d38;
    }
    ctx->pc = 0x4B2D30u;
    {
        const bool branch_taken_0x4b2d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2D30u;
        // 0x4b2d34: 0x3a850001  xori        $a1, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2d30) {
            ctx->pc = 0x4B2DB8u;
            goto label_4b2db8;
        }
    }
    ctx->pc = 0x4B2D38u;
label_4b2d38:
    // 0x4b2d38: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_4b2d3c:
    if (ctx->pc == 0x4B2D3Cu) {
        ctx->pc = 0x4B2D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2D38u;
        // 0x4b2d3c: 0x2409002b  addiu       $t1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2D40u;
        goto label_4b2d40;
    }
    ctx->pc = 0x4B2D38u;
    {
        const bool branch_taken_0x4b2d38 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4B2D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2D38u;
        // 0x4b2d3c: 0x2409002b  addiu       $t1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2d38) {
            ctx->pc = 0x4B2D48u;
            goto label_4b2d48;
        }
    }
    ctx->pc = 0x4B2D40u;
label_4b2d40:
    // 0x4b2d40: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x4b2d40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_4b2d44:
    // 0x4b2d44: 0x42023  negu        $a0, $a0
    ctx->pc = 0x4b2d44u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_4b2d48:
    // 0x4b2d48: 0x3a850001  xori        $a1, $s4, 0x1
    ctx->pc = 0x4b2d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
label_4b2d4c:
    // 0x4b2d4c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x4b2d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4b2d50:
    // 0x4b2d50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b2d50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b2d54:
    // 0x4b2d54: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x4b2d54u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4b2d58:
    // 0x4b2d58: 0x50e80001  beql        $a3, $t0, . + 4 + (0x1 << 2)
label_4b2d5c:
    if (ctx->pc == 0x4B2D5Cu) {
        ctx->pc = 0x4B2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2D58u;
        // 0x4b2d5c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2D60u;
        goto label_4b2d60;
    }
    ctx->pc = 0x4B2D58u;
    {
        const bool branch_taken_0x4b2d58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x4b2d58) {
            ctx->pc = 0x4B2D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2D58u;
            // 0x4b2d5c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2D60u;
            goto label_4b2d60;
        }
    }
    ctx->pc = 0x4B2D60u;
label_4b2d60:
    // 0x4b2d60: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x4b2d60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_4b2d64:
    // 0x4b2d64: 0x1010  mfhi        $v0
    ctx->pc = 0x4b2d64u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4b2d68:
    // 0x4b2d68: 0x3012  mflo        $a2
    ctx->pc = 0x4b2d68u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_4b2d6c:
    // 0x4b2d6c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x4b2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_4b2d70:
    // 0x4b2d70: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4b2d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4b2d74:
    // 0x4b2d74: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x4b2d74u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_4b2d78:
    // 0x4b2d78: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x4b2d78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_4b2d7c:
    // 0x4b2d7c: 0x50e80001  beql        $a3, $t0, . + 4 + (0x1 << 2)
label_4b2d80:
    if (ctx->pc == 0x4B2D80u) {
        ctx->pc = 0x4B2D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2D7Cu;
        // 0x4b2d80: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2D84u;
        goto label_4b2d84;
    }
    ctx->pc = 0x4B2D7Cu;
    {
        const bool branch_taken_0x4b2d7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x4b2d7c) {
            ctx->pc = 0x4B2D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2D7Cu;
            // 0x4b2d80: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2D84u;
            goto label_4b2d84;
        }
    }
    ctx->pc = 0x4B2D84u;
label_4b2d84:
    // 0x4b2d84: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
label_4b2d88:
    if (ctx->pc == 0x4B2D88u) {
        ctx->pc = 0x4B2D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2D84u;
        // 0x4b2d88: 0x87001a  div         $zero, $a0, $a3 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2D8Cu;
        goto label_4b2d8c;
    }
    ctx->pc = 0x4B2D84u;
    {
        const bool branch_taken_0x4b2d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2d84) {
            ctx->pc = 0x4B2D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2D84u;
            // 0x4b2d88: 0x87001a  div         $zero, $a0, $a3 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b2d58;
        }
    }
    ctx->pc = 0x4B2D8Cu;
label_4b2d8c:
    // 0x4b2d8c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x4b2d8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_4b2d90:
    // 0x4b2d90: 0x24c20030  addiu       $v0, $a2, 0x30
    ctx->pc = 0x4b2d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_4b2d94:
    // 0x4b2d94: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x4b2d94u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_4b2d98:
    // 0x4b2d98: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x4b2d98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_4b2d9c:
    // 0x4b2d9c: 0xa2c90000  sb          $t1, 0x0($s6)
    ctx->pc = 0x4b2d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 9));
label_4b2da0:
    // 0x4b2da0: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x4b2da0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_4b2da4:
    // 0x4b2da4: 0x10000004  b           . + 4 + (0x4 << 2)
label_4b2da8:
    if (ctx->pc == 0x4B2DA8u) {
        ctx->pc = 0x4B2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2DA4u;
        // 0x4b2da8: 0xa2d70000  sb          $s7, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2DACu;
        goto label_4b2dac;
    }
    ctx->pc = 0x4B2DA4u;
    {
        const bool branch_taken_0x4b2da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2DA4u;
        // 0x4b2da8: 0xa2d70000  sb          $s7, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2da4) {
            ctx->pc = 0x4B2DB8u;
            goto label_4b2db8;
        }
    }
    ctx->pc = 0x4B2DACu;
label_4b2dac:
    // 0x4b2dac: 0x10000002  b           . + 4 + (0x2 << 2)
label_4b2db0:
    if (ctx->pc == 0x4B2DB0u) {
        ctx->pc = 0x4B2DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2DACu;
        // 0x4b2db0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2DB4u;
        goto label_4b2db4;
    }
    ctx->pc = 0x4B2DACu;
    {
        const bool branch_taken_0x4b2dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2DACu;
        // 0x4b2db0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2dac) {
            ctx->pc = 0x4B2DB8u;
            goto label_4b2db8;
        }
    }
    ctx->pc = 0x4B2DB4u;
label_4b2db4:
    // 0x4b2db4: 0x3a850001  xori        $a1, $s4, 0x1
    ctx->pc = 0x4b2db4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
label_4b2db8:
    // 0x4b2db8: 0x26c2fff4  addiu       $v0, $s6, -0xC
    ctx->pc = 0x4b2db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967284));
label_4b2dbc:
    // 0x4b2dbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b2dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b2dc0:
    // 0x4b2dc0: 0x3a2f023  subu        $fp, $sp, $v0
    ctx->pc = 0x4b2dc0u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_4b2dc4:
    // 0x4b2dc4: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
label_4b2dc8:
    if (ctx->pc == 0x4B2DC8u) {
        ctx->pc = 0x4B2DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2DC4u;
        // 0x4b2dc8: 0x65800a  movz        $s0, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2DCCu;
        goto label_4b2dcc;
    }
    ctx->pc = 0x4B2DC4u;
    {
        const bool branch_taken_0x4b2dc4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2DC4u;
        // 0x4b2dc8: 0x65800a  movz        $s0, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2dc4) {
            ctx->pc = 0x4B2DD0u;
            goto label_4b2dd0;
        }
    }
    ctx->pc = 0x4B2DCCu;
label_4b2dcc:
    // 0x4b2dcc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x4b2dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_4b2dd0:
    // 0x4b2dd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4b2dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4b2dd4:
    // 0x4b2dd4: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x4b2dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_4b2dd8:
    // 0x4b2dd8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_4b2ddc:
    if (ctx->pc == 0x4B2DDCu) {
        ctx->pc = 0x4B2DE0u;
        goto label_4b2de0;
    }
    ctx->pc = 0x4B2DD8u;
    {
        const bool branch_taken_0x4b2dd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b2dd8) {
            ctx->pc = 0x4B2DF0u;
            goto label_4b2df0;
        }
    }
    ctx->pc = 0x4B2DE0u;
label_4b2de0:
    // 0x4b2de0: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x4b2de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
label_4b2de4:
    // 0x4b2de4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4b2de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b2de8:
    // 0x4b2de8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4b2de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_4b2dec:
    // 0x4b2dec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b2decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b2df0:
    // 0x4b2df0: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
label_4b2df4:
    if (ctx->pc == 0x4B2DF4u) {
        ctx->pc = 0x4B2DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2DF0u;
        // 0x4b2df4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2DF8u;
        goto label_4b2df8;
    }
    ctx->pc = 0x4B2DF0u;
    {
        const bool branch_taken_0x4b2df0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2DF0u;
        // 0x4b2df4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2df0) {
            ctx->pc = 0x4B2E2Cu;
            goto label_4b2e2c;
        }
    }
    ctx->pc = 0x4B2DF8u;
label_4b2df8:
    // 0x4b2df8: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x4b2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_4b2dfc:
    // 0x4b2dfc: 0x16a20006  bne         $s5, $v0, . + 4 + (0x6 << 2)
label_4b2e00:
    if (ctx->pc == 0x4B2E00u) {
        ctx->pc = 0x4B2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2DFCu;
        // 0x4b2e00: 0x91102a  slt         $v0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2E04u;
        goto label_4b2e04;
    }
    ctx->pc = 0x4B2DFCu;
    {
        const bool branch_taken_0x4b2dfc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2DFCu;
        // 0x4b2e00: 0x91102a  slt         $v0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2dfc) {
            ctx->pc = 0x4B2E18u;
            goto label_4b2e18;
        }
    }
    ctx->pc = 0x4B2E04u;
label_4b2e04:
    // 0x4b2e04: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_4b2e08:
    if (ctx->pc == 0x4B2E08u) {
        ctx->pc = 0x4B2E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E04u;
        // 0x4b2e08: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2E0Cu;
        goto label_4b2e0c;
    }
    ctx->pc = 0x4B2E04u;
    {
        const bool branch_taken_0x4b2e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E04u;
        // 0x4b2e08: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2e04) {
            ctx->pc = 0x4B2E2Cu;
            goto label_4b2e2c;
        }
    }
    ctx->pc = 0x4B2E0Cu;
label_4b2e0c:
    // 0x4b2e0c: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x4b2e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_4b2e10:
    // 0x4b2e10: 0x10000006  b           . + 4 + (0x6 << 2)
label_4b2e14:
    if (ctx->pc == 0x4B2E14u) {
        ctx->pc = 0x4B2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E10u;
        // 0x4b2e14: 0x2e2b823  subu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2E18u;
        goto label_4b2e18;
    }
    ctx->pc = 0x4B2E10u;
    {
        const bool branch_taken_0x4b2e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E10u;
        // 0x4b2e14: 0x2e2b823  subu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2e10) {
            ctx->pc = 0x4B2E2Cu;
            goto label_4b2e2c;
        }
    }
    ctx->pc = 0x4B2E18u;
label_4b2e18:
    // 0x4b2e18: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
label_4b2e1c:
    if (ctx->pc == 0x4B2E1Cu) {
        ctx->pc = 0x4B2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E18u;
        // 0x4b2e1c: 0x211b823  subu        $s7, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2E20u;
        goto label_4b2e20;
    }
    ctx->pc = 0x4B2E18u;
    {
        const bool branch_taken_0x4b2e18 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E18u;
        // 0x4b2e1c: 0x211b823  subu        $s7, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2e18) {
            ctx->pc = 0x4B2E2Cu;
            goto label_4b2e2c;
        }
    }
    ctx->pc = 0x4B2E20u;
label_4b2e20:
    // 0x4b2e20: 0x2041823  subu        $v1, $s0, $a0
    ctx->pc = 0x4b2e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_4b2e24:
    // 0x4b2e24: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x4b2e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_4b2e28:
    // 0x4b2e28: 0x62b80a  movz        $s7, $v1, $v0
    ctx->pc = 0x4b2e28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
label_4b2e2c:
    // 0x4b2e2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b2e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b2e30:
    // 0x4b2e30: 0x57102a  slt         $v0, $v0, $s7
    ctx->pc = 0x4b2e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_4b2e34:
    // 0x4b2e34: 0x2b80a  movz        $s7, $zero, $v0
    ctx->pc = 0x4b2e34u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_4b2e38:
    // 0x4b2e38: 0x16e00004  bnez        $s7, . + 4 + (0x4 << 2)
label_4b2e3c:
    if (ctx->pc == 0x4B2E3Cu) {
        ctx->pc = 0x4B2E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E38u;
        // 0x4b2e3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2E40u;
        goto label_4b2e40;
    }
    ctx->pc = 0x4B2E38u;
    {
        const bool branch_taken_0x4b2e38 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E38u;
        // 0x4b2e3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2e38) {
            ctx->pc = 0x4B2E4Cu;
            goto label_4b2e4c;
        }
    }
    ctx->pc = 0x4B2E40u;
label_4b2e40:
    // 0x4b2e40: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x4b2e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_4b2e44:
    // 0x4b2e44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4b2e48:
    if (ctx->pc == 0x4B2E48u) {
        ctx->pc = 0x4B2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E44u;
        // 0x4b2e48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2E4Cu;
        goto label_4b2e4c;
    }
    ctx->pc = 0x4B2E44u;
    {
        const bool branch_taken_0x4b2e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E44u;
        // 0x4b2e48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2e44) {
            ctx->pc = 0x4B2E50u;
            goto label_4b2e50;
        }
    }
    ctx->pc = 0x4B2E4Cu;
label_4b2e4c:
    // 0x4b2e4c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4b2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4b2e50:
    // 0x4b2e50: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4b2e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4b2e54:
    // 0x4b2e54: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_4b2e58:
    if (ctx->pc == 0x4B2E58u) {
        ctx->pc = 0x4B2E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E54u;
        // 0x4b2e58: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2E5Cu;
        goto label_4b2e5c;
    }
    ctx->pc = 0x4B2E54u;
    {
        const bool branch_taken_0x4b2e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E54u;
        // 0x4b2e58: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2e54) {
            ctx->pc = 0x4B2E6Cu;
            goto label_4b2e6c;
        }
    }
    ctx->pc = 0x4B2E5Cu;
label_4b2e5c:
    // 0x4b2e5c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x4b2e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_4b2e60:
    // 0x4b2e60: 0x2414002d  addiu       $s4, $zero, 0x2D
    ctx->pc = 0x4b2e60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_4b2e64:
    // 0x4b2e64: 0x10000009  b           . + 4 + (0x9 << 2)
label_4b2e68:
    if (ctx->pc == 0x4B2E68u) {
        ctx->pc = 0x4B2E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E64u;
        // 0x4b2e68: 0x2a00a  movz        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2E6Cu;
        goto label_4b2e6c;
    }
    ctx->pc = 0x4B2E64u;
    {
        const bool branch_taken_0x4b2e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E64u;
        // 0x4b2e68: 0x2a00a  movz        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2e64) {
            ctx->pc = 0x4B2E8Cu;
            goto label_4b2e8c;
        }
    }
    ctx->pc = 0x4B2E6Cu;
label_4b2e6c:
    // 0x4b2e6c: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x4b2e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4b2e70:
    // 0x4b2e70: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_4b2e74:
    if (ctx->pc == 0x4B2E74u) {
        ctx->pc = 0x4B2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E70u;
        // 0x4b2e74: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2E78u;
        goto label_4b2e78;
    }
    ctx->pc = 0x4B2E70u;
    {
        const bool branch_taken_0x4b2e70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E70u;
        // 0x4b2e74: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2e70) {
            ctx->pc = 0x4B2E80u;
            goto label_4b2e80;
        }
    }
    ctx->pc = 0x4B2E78u;
label_4b2e78:
    // 0x4b2e78: 0x10000002  b           . + 4 + (0x2 << 2)
label_4b2e7c:
    if (ctx->pc == 0x4B2E7Cu) {
        ctx->pc = 0x4B2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E78u;
        // 0x4b2e7c: 0x2414002b  addiu       $s4, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2E80u;
        goto label_4b2e80;
    }
    ctx->pc = 0x4B2E78u;
    {
        const bool branch_taken_0x4b2e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E78u;
        // 0x4b2e7c: 0x2414002b  addiu       $s4, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2e78) {
            ctx->pc = 0x4B2E84u;
            goto label_4b2e84;
        }
    }
    ctx->pc = 0x4B2E80u;
label_4b2e80:
    // 0x4b2e80: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x4b2e80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4b2e84:
    // 0x4b2e84: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x4b2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_4b2e88:
    // 0x4b2e88: 0x43a00b  movn        $s4, $v0, $v1
    ctx->pc = 0x4b2e88u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
label_4b2e8c:
    // 0x4b2e8c: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_4b2e90:
    if (ctx->pc == 0x4B2E90u) {
        ctx->pc = 0x4B2E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E8Cu;
        // 0x4b2e90: 0x27c30001  addiu       $v1, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2E94u;
        goto label_4b2e94;
    }
    ctx->pc = 0x4B2E8Cu;
    {
        const bool branch_taken_0x4b2e8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E8Cu;
        // 0x4b2e90: 0x27c30001  addiu       $v1, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2e8c) {
            ctx->pc = 0x4B2EA8u;
            goto label_4b2ea8;
        }
    }
    ctx->pc = 0x4B2E94u;
label_4b2e94:
    // 0x4b2e94: 0x2f11021  addu        $v0, $s7, $s1
    ctx->pc = 0x4b2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_4b2e98:
    // 0x4b2e98: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x4b2e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4b2e9c:
    // 0x4b2e9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b2e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b2ea0:
    // 0x4b2ea0: 0x10000005  b           . + 4 + (0x5 << 2)
label_4b2ea4:
    if (ctx->pc == 0x4B2EA4u) {
        ctx->pc = 0x4B2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2EA0u;
        // 0x4b2ea4: 0x451821  addu        $v1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2EA8u;
        goto label_4b2ea8;
    }
    ctx->pc = 0x4B2EA0u;
    {
        const bool branch_taken_0x4b2ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2EA0u;
        // 0x4b2ea4: 0x451821  addu        $v1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2ea0) {
            ctx->pc = 0x4B2EB8u;
            goto label_4b2eb8;
        }
    }
    ctx->pc = 0x4B2EA8u;
label_4b2ea8:
    // 0x4b2ea8: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x4b2ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4b2eac:
    // 0x4b2eac: 0x2f11821  addu        $v1, $s7, $s1
    ctx->pc = 0x4b2eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_4b2eb0:
    // 0x4b2eb0: 0xbe1021  addu        $v0, $a1, $fp
    ctx->pc = 0x4b2eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_4b2eb4:
    // 0x4b2eb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b2eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b2eb8:
    // 0x4b2eb8: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x4b2eb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4b2ebc:
    // 0x4b2ebc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4b2ec0:
    if (ctx->pc == 0x4B2EC0u) {
        ctx->pc = 0x4B2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2EBCu;
        // 0x4b2ec0: 0x911023  subu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2EC4u;
        goto label_4b2ec4;
    }
    ctx->pc = 0x4B2EBCu;
    {
        const bool branch_taken_0x4b2ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2EBCu;
        // 0x4b2ec0: 0x911023  subu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2ebc) {
            ctx->pc = 0x4B2ECCu;
            goto label_4b2ecc;
        }
    }
    ctx->pc = 0x4B2EC4u;
label_4b2ec4:
    // 0x4b2ec4: 0x10000005  b           . + 4 + (0x5 << 2)
label_4b2ec8:
    if (ctx->pc == 0x4B2EC8u) {
        ctx->pc = 0x4B2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2EC4u;
        // 0x4b2ec8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2ECCu;
        goto label_4b2ecc;
    }
    ctx->pc = 0x4B2EC4u;
    {
        const bool branch_taken_0x4b2ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2EC4u;
        // 0x4b2ec8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2ec4) {
            ctx->pc = 0x4B2EDCu;
            goto label_4b2edc;
        }
    }
    ctx->pc = 0x4B2ECCu;
label_4b2ecc:
    // 0x4b2ecc: 0x5c800003  bgtzl       $a0, . + 4 + (0x3 << 2)
label_4b2ed0:
    if (ctx->pc == 0x4B2ED0u) {
        ctx->pc = 0x4B2ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2ECCu;
        // 0x4b2ed0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2ED4u;
        goto label_4b2ed4;
    }
    ctx->pc = 0x4B2ECCu;
    {
        const bool branch_taken_0x4b2ecc = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x4b2ecc) {
            ctx->pc = 0x4B2ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2ECCu;
            // 0x4b2ed0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2EDCu;
            goto label_4b2edc;
        }
    }
    ctx->pc = 0x4B2ED4u;
label_4b2ed4:
    // 0x4b2ed4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x4b2ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4b2ed8:
    // 0x4b2ed8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4b2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4b2edc:
    // 0x4b2edc: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x4b2edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_4b2ee0:
    // 0x4b2ee0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4b2ee0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b2ee4:
    // 0x4b2ee4: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x4b2ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4b2ee8:
    // 0x4b2ee8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4b2ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4b2eec:
    // 0x4b2eec: 0x62a80b  movn        $s5, $v1, $v0
    ctx->pc = 0x4b2eecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
label_4b2ef0:
    // 0x4b2ef0: 0x1aa0000d  blez        $s5, . + 4 + (0xD << 2)
label_4b2ef4:
    if (ctx->pc == 0x4B2EF4u) {
        ctx->pc = 0x4B2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2EF0u;
        // 0x4b2ef4: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2EF8u;
        goto label_4b2ef8;
    }
    ctx->pc = 0x4B2EF0u;
    {
        const bool branch_taken_0x4b2ef0 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x4B2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2EF0u;
        // 0x4b2ef4: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2ef0) {
            ctx->pc = 0x4B2F28u;
            goto label_4b2f28;
        }
    }
    ctx->pc = 0x4B2EF8u;
label_4b2ef8:
    // 0x4b2ef8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b2ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b2efc:
    // 0x4b2efc: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_4b2f00:
    if (ctx->pc == 0x4B2F00u) {
        ctx->pc = 0x4B2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2EFCu;
        // 0x4b2f00: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2F04u;
        goto label_4b2f04;
    }
    ctx->pc = 0x4B2EFCu;
    {
        const bool branch_taken_0x4b2efc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2EFCu;
        // 0x4b2f00: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2efc) {
            ctx->pc = 0x4B2F28u;
            goto label_4b2f28;
        }
    }
    ctx->pc = 0x4B2F04u;
label_4b2f04:
    // 0x4b2f04: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_4b2f08:
    if (ctx->pc == 0x4B2F08u) {
        ctx->pc = 0x4B2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F04u;
        // 0x4b2f08: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2F0Cu;
        goto label_4b2f0c;
    }
    ctx->pc = 0x4B2F04u;
    {
        const bool branch_taken_0x4b2f04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F04u;
        // 0x4b2f08: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2f04) {
            ctx->pc = 0x4B2F28u;
            goto label_4b2f28;
        }
    }
    ctx->pc = 0x4B2F0Cu;
label_4b2f0c:
    // 0x4b2f0c: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x4b2f0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4b2f10:
    // 0x4b2f10: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x4b2f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b2f14:
    // 0x4b2f14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b2f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b2f18:
    // 0x4b2f18: 0xc12ca06  jal         func_4B2818
label_4b2f1c:
    if (ctx->pc == 0x4B2F1Cu) {
        ctx->pc = 0x4B2F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F18u;
        // 0x4b2f1c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2F20u;
        goto label_4b2f20;
    }
    ctx->pc = 0x4B2F18u;
    SET_GPR_U32(ctx, 31, 0x4B2F20u);
    ctx->pc = 0x4B2F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2F18u;
    // 0x4b2f1c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2818u, 0x4B2F18u, 0x4B2F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2F20u;
label_4b2f20:
    // 0x4b2f20: 0x1450008e  bne         $v0, $s0, . + 4 + (0x8E << 2)
label_4b2f24:
    if (ctx->pc == 0x4B2F24u) {
        ctx->pc = 0x4B2F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F20u;
        // 0x4b2f24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2F28u;
        goto label_4b2f28;
    }
    ctx->pc = 0x4B2F20u;
    {
        const bool branch_taken_0x4b2f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4B2F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F20u;
        // 0x4b2f24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2f20) {
            ctx->pc = 0x4B315Cu;
            goto label_4b315c;
        }
    }
    ctx->pc = 0x4B2F28u;
label_4b2f28:
    // 0x4b2f28: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_4b2f2c:
    if (ctx->pc == 0x4B2F2Cu) {
        ctx->pc = 0x4B2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F28u;
        // 0x4b2f2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2F30u;
        goto label_4b2f30;
    }
    ctx->pc = 0x4B2F28u;
    {
        const bool branch_taken_0x4b2f28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F28u;
        // 0x4b2f2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2f28) {
            ctx->pc = 0x4B2F40u;
            goto label_4b2f40;
        }
    }
    ctx->pc = 0x4B2F30u;
label_4b2f30:
    // 0x4b2f30: 0xc12cc82  jal         func_4B3208
label_4b2f34:
    if (ctx->pc == 0x4B2F34u) {
        ctx->pc = 0x4B2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F30u;
        // 0x4b2f34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2F38u;
        goto label_4b2f38;
    }
    ctx->pc = 0x4B2F30u;
    SET_GPR_U32(ctx, 31, 0x4B2F38u);
    ctx->pc = 0x4B2F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2F30u;
    // 0x4b2f34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3208u, 0x4B2F30u, 0x4B2F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2F38u;
label_4b2f38:
    // 0x4b2f38: 0x4400087  bltz        $v0, . + 4 + (0x87 << 2)
label_4b2f3c:
    if (ctx->pc == 0x4B2F3Cu) {
        ctx->pc = 0x4B2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F38u;
        // 0x4b2f3c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2F40u;
        goto label_4b2f40;
    }
    ctx->pc = 0x4B2F38u;
    {
        const bool branch_taken_0x4b2f38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F38u;
        // 0x4b2f3c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2f38) {
            ctx->pc = 0x4B3158u;
            goto label_4b3158;
        }
    }
    ctx->pc = 0x4B2F40u;
label_4b2f40:
    // 0x4b2f40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x4b2f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_4b2f44:
    // 0x4b2f44: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4b2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4b2f48:
    // 0x4b2f48: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_4b2f4c:
    if (ctx->pc == 0x4B2F4Cu) {
        ctx->pc = 0x4B2F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F48u;
        // 0x4b2f4c: 0x8fb00010  lw          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2F50u;
        goto label_4b2f50;
    }
    ctx->pc = 0x4B2F48u;
    {
        const bool branch_taken_0x4b2f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B2F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F48u;
        // 0x4b2f4c: 0x8fb00010  lw          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2f48) {
            ctx->pc = 0x4B2F7Cu;
            goto label_4b2f7c;
        }
    }
    ctx->pc = 0x4B2F50u;
label_4b2f50:
    // 0x4b2f50: 0x1aa00009  blez        $s5, . + 4 + (0x9 << 2)
label_4b2f54:
    if (ctx->pc == 0x4B2F54u) {
        ctx->pc = 0x4B2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F50u;
        // 0x4b2f54: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2F58u;
        goto label_4b2f58;
    }
    ctx->pc = 0x4B2F50u;
    {
        const bool branch_taken_0x4b2f50 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x4B2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F50u;
        // 0x4b2f54: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2f50) {
            ctx->pc = 0x4B2F78u;
            goto label_4b2f78;
        }
    }
    ctx->pc = 0x4B2F58u;
label_4b2f58:
    // 0x4b2f58: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x4b2f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_4b2f5c:
    // 0x4b2f5c: 0x2759821  addu        $s3, $s3, $s5
    ctx->pc = 0x4b2f5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_4b2f60:
    // 0x4b2f60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b2f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b2f64:
    // 0x4b2f64: 0xc12ca06  jal         func_4B2818
label_4b2f68:
    if (ctx->pc == 0x4B2F68u) {
        ctx->pc = 0x4B2F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F64u;
        // 0x4b2f68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2F6Cu;
        goto label_4b2f6c;
    }
    ctx->pc = 0x4B2F64u;
    SET_GPR_U32(ctx, 31, 0x4B2F6Cu);
    ctx->pc = 0x4B2F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2F64u;
    // 0x4b2f68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2818u, 0x4B2F64u, 0x4B2F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2F6Cu;
label_4b2f6c:
    // 0x4b2f6c: 0x1450007b  bne         $v0, $s0, . + 4 + (0x7B << 2)
label_4b2f70:
    if (ctx->pc == 0x4B2F70u) {
        ctx->pc = 0x4B2F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F6Cu;
        // 0x4b2f70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2F74u;
        goto label_4b2f74;
    }
    ctx->pc = 0x4B2F6Cu;
    {
        const bool branch_taken_0x4b2f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4B2F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F6Cu;
        // 0x4b2f70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2f6c) {
            ctx->pc = 0x4B315Cu;
            goto label_4b315c;
        }
    }
    ctx->pc = 0x4B2F74u;
label_4b2f74:
    // 0x4b2f74: 0x0  nop
    ctx->pc = 0x4b2f74u;
    // NOP
label_4b2f78:
    // 0x4b2f78: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x4b2f78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4b2f7c:
    // 0x4b2f7c: 0x1a000036  blez        $s0, . + 4 + (0x36 << 2)
label_4b2f80:
    if (ctx->pc == 0x4B2F80u) {
        ctx->pc = 0x4B2F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F7Cu;
        // 0x4b2f80: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2F84u;
        goto label_4b2f84;
    }
    ctx->pc = 0x4B2F7Cu;
    {
        const bool branch_taken_0x4b2f7c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4B2F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F7Cu;
        // 0x4b2f80: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2f7c) {
            ctx->pc = 0x4B3058u;
            goto label_4b3058;
        }
    }
    ctx->pc = 0x4B2F84u;
label_4b2f84:
    // 0x4b2f84: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_4b2f88:
    if (ctx->pc == 0x4B2F88u) {
        ctx->pc = 0x4B2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F84u;
        // 0x4b2f88: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2F8Cu;
        goto label_4b2f8c;
    }
    ctx->pc = 0x4B2F84u;
    {
        const bool branch_taken_0x4b2f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F84u;
        // 0x4b2f88: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2f84) {
            ctx->pc = 0x4B2FB8u;
            goto label_4b2fb8;
        }
    }
    ctx->pc = 0x4B2F8Cu;
label_4b2f8c:
    // 0x4b2f8c: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x4b2f8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_4b2f90:
    // 0x4b2f90: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4b2f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4b2f94:
    // 0x4b2f94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b2f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b2f98:
    // 0x4b2f98: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4b2f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4b2f9c:
    // 0x4b2f9c: 0x40f809  jalr        $v0
label_4b2fa0:
    if (ctx->pc == 0x4B2FA0u) {
        ctx->pc = 0x4B2FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F9Cu;
        // 0x4b2fa0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2FA4u;
        goto label_4b2fa4;
    }
    ctx->pc = 0x4B2F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B2FA4u);
        ctx->pc = 0x4B2FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F9Cu;
        // 0x4b2fa0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2F9Cu, 0x4B2FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B2FA4u;
label_4b2fa4:
    // 0x4b2fa4: 0x1450006c  bne         $v0, $s0, . + 4 + (0x6C << 2)
label_4b2fa8:
    if (ctx->pc == 0x4B2FA8u) {
        ctx->pc = 0x4B2FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2FA4u;
        // 0x4b2fa8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2FACu;
        goto label_4b2fac;
    }
    ctx->pc = 0x4B2FA4u;
    {
        const bool branch_taken_0x4b2fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4B2FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2FA4u;
        // 0x4b2fa8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2fa4) {
            ctx->pc = 0x4B3158u;
            goto label_4b3158;
        }
    }
    ctx->pc = 0x4B2FACu;
label_4b2fac:
    // 0x4b2fac: 0x10000014  b           . + 4 + (0x14 << 2)
label_4b2fb0:
    if (ctx->pc == 0x4B2FB0u) {
        ctx->pc = 0x4B2FB4u;
        goto label_4b2fb4;
    }
    ctx->pc = 0x4B2FACu;
    {
        const bool branch_taken_0x4b2fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2fac) {
            ctx->pc = 0x4B3000u;
            goto label_4b3000;
        }
    }
    ctx->pc = 0x4B2FB4u;
label_4b2fb4:
    // 0x4b2fb4: 0x0  nop
    ctx->pc = 0x4b2fb4u;
    // NOP
label_4b2fb8:
    // 0x4b2fb8: 0x2719821  addu        $s3, $s3, $s1
    ctx->pc = 0x4b2fb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_4b2fbc:
    // 0x4b2fbc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4b2fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4b2fc0:
    // 0x4b2fc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b2fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b2fc4:
    // 0x4b2fc4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4b2fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4b2fc8:
    // 0x4b2fc8: 0x40f809  jalr        $v0
label_4b2fcc:
    if (ctx->pc == 0x4B2FCCu) {
        ctx->pc = 0x4B2FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2FC8u;
        // 0x4b2fcc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2FD0u;
        goto label_4b2fd0;
    }
    ctx->pc = 0x4B2FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B2FD0u);
        ctx->pc = 0x4B2FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2FC8u;
        // 0x4b2fcc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2FC8u, 0x4B2FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B2FD0u;
label_4b2fd0:
    // 0x4b2fd0: 0x14510061  bne         $v0, $s1, . + 4 + (0x61 << 2)
label_4b2fd4:
    if (ctx->pc == 0x4B2FD4u) {
        ctx->pc = 0x4B2FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2FD0u;
        // 0x4b2fd4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2FD8u;
        goto label_4b2fd8;
    }
    ctx->pc = 0x4B2FD0u;
    {
        const bool branch_taken_0x4b2fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4B2FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2FD0u;
        // 0x4b2fd4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2fd0) {
            ctx->pc = 0x4B3158u;
            goto label_4b3158;
        }
    }
    ctx->pc = 0x4B2FD8u;
label_4b2fd8:
    // 0x4b2fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b2fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b2fdc:
    // 0x4b2fdc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4b2fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4b2fe0:
    // 0x4b2fe0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x4b2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4b2fe4:
    // 0x4b2fe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b2fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b2fe8:
    // 0x4b2fe8: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4b2fe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4b2fec:
    // 0x4b2fec: 0xc12ca06  jal         func_4B2818
label_4b2ff0:
    if (ctx->pc == 0x4B2FF0u) {
        ctx->pc = 0x4B2FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2FECu;
        // 0x4b2ff0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2FF4u;
        goto label_4b2ff4;
    }
    ctx->pc = 0x4B2FECu;
    SET_GPR_U32(ctx, 31, 0x4B2FF4u);
    ctx->pc = 0x4B2FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2FECu;
    // 0x4b2ff0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2818u, 0x4B2FECu, 0x4B2FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2FF4u;
label_4b2ff4:
    // 0x4b2ff4: 0x14500058  bne         $v0, $s0, . + 4 + (0x58 << 2)
label_4b2ff8:
    if (ctx->pc == 0x4B2FF8u) {
        ctx->pc = 0x4B2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2FF4u;
        // 0x4b2ff8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2FFCu;
        goto label_4b2ffc;
    }
    ctx->pc = 0x4B2FF4u;
    {
        const bool branch_taken_0x4b2ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4B2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2FF4u;
        // 0x4b2ff8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2ff4) {
            ctx->pc = 0x4B3158u;
            goto label_4b3158;
        }
    }
    ctx->pc = 0x4B2FFCu;
label_4b2ffc:
    // 0x4b2ffc: 0x0  nop
    ctx->pc = 0x4b2ffcu;
    // NOP
label_4b3000:
    // 0x4b3000: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
label_4b3004:
    if (ctx->pc == 0x4B3004u) {
        ctx->pc = 0x4B3004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3000u;
        // 0x4b3004: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3008u;
        goto label_4b3008;
    }
    ctx->pc = 0x4B3000u;
    {
        const bool branch_taken_0x4b3000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3000u;
        // 0x4b3004: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3000) {
            ctx->pc = 0x4B30D0u;
            goto label_4b30d0;
        }
    }
    ctx->pc = 0x4B3008u;
label_4b3008:
    // 0x4b3008: 0xc12cc82  jal         func_4B3208
label_4b300c:
    if (ctx->pc == 0x4B300Cu) {
        ctx->pc = 0x4B300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3008u;
        // 0x4b300c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3010u;
        goto label_4b3010;
    }
    ctx->pc = 0x4B3008u;
    SET_GPR_U32(ctx, 31, 0x4B3010u);
    ctx->pc = 0x4B300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3008u;
    // 0x4b300c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3208u, 0x4B3008u, 0x4B3010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3010u;
label_4b3010:
    // 0x4b3010: 0x4400051  bltz        $v0, . + 4 + (0x51 << 2)
label_4b3014:
    if (ctx->pc == 0x4B3014u) {
        ctx->pc = 0x4B3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3010u;
        // 0x4b3014: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3018u;
        goto label_4b3018;
    }
    ctx->pc = 0x4B3010u;
    {
        const bool branch_taken_0x4b3010 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3010u;
        // 0x4b3014: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3010) {
            ctx->pc = 0x4B3158u;
            goto label_4b3158;
        }
    }
    ctx->pc = 0x4B3018u;
label_4b3018:
    // 0x4b3018: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x4b3018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_4b301c:
    // 0x4b301c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_4b3020:
    if (ctx->pc == 0x4B3020u) {
        ctx->pc = 0x4B3020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B301Cu;
        // 0x4b3020: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3024u;
        goto label_4b3024;
    }
    ctx->pc = 0x4B301Cu;
    {
        const bool branch_taken_0x4b301c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B301Cu;
        // 0x4b3020: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b301c) {
            ctx->pc = 0x4B30D0u;
            goto label_4b30d0;
        }
    }
    ctx->pc = 0x4B3024u;
label_4b3024:
    // 0x4b3024: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4b3024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4b3028:
    // 0x4b3028: 0x2248023  subu        $s0, $s1, $a0
    ctx->pc = 0x4b3028u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_4b302c:
    // 0x4b302c: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x4b302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_4b3030:
    // 0x4b3030: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x4b3030u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_4b3034:
    // 0x4b3034: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x4b3034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4b3038:
    // 0x4b3038: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4b3038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b303c:
    // 0x4b303c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4b303cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4b3040:
    // 0x4b3040: 0x40f809  jalr        $v0
label_4b3044:
    if (ctx->pc == 0x4B3044u) {
        ctx->pc = 0x4B3044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3040u;
        // 0x4b3044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3048u;
        goto label_4b3048;
    }
    ctx->pc = 0x4B3040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B3048u);
        ctx->pc = 0x4B3044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3040u;
        // 0x4b3044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3040u, 0x4B3048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B3048u;
label_4b3048:
    // 0x4b3048: 0x14500043  bne         $v0, $s0, . + 4 + (0x43 << 2)
label_4b304c:
    if (ctx->pc == 0x4B304Cu) {
        ctx->pc = 0x4B304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3048u;
        // 0x4b304c: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3050u;
        goto label_4b3050;
    }
    ctx->pc = 0x4B3048u;
    {
        const bool branch_taken_0x4b3048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4B304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3048u;
        // 0x4b304c: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3048) {
            ctx->pc = 0x4B3158u;
            goto label_4b3158;
        }
    }
    ctx->pc = 0x4B3050u;
label_4b3050:
    // 0x4b3050: 0x10000021  b           . + 4 + (0x21 << 2)
label_4b3054:
    if (ctx->pc == 0x4B3054u) {
        ctx->pc = 0x4B3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3050u;
        // 0x4b3054: 0x2779821  addu        $s3, $s3, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3058u;
        goto label_4b3058;
    }
    ctx->pc = 0x4B3050u;
    {
        const bool branch_taken_0x4b3050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3050u;
        // 0x4b3054: 0x2779821  addu        $s3, $s3, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3050) {
            ctx->pc = 0x4B30D8u;
            goto label_4b30d8;
        }
    }
    ctx->pc = 0x4B3058u;
label_4b3058:
    // 0x4b3058: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x4b3058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4b305c:
    // 0x4b305c: 0xc12cc82  jal         func_4B3208
label_4b3060:
    if (ctx->pc == 0x4B3060u) {
        ctx->pc = 0x4B3060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B305Cu;
        // 0x4b3060: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3064u;
        goto label_4b3064;
    }
    ctx->pc = 0x4B305Cu;
    SET_GPR_U32(ctx, 31, 0x4B3064u);
    ctx->pc = 0x4B3060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B305Cu;
    // 0x4b3060: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3208u, 0x4B305Cu, 0x4B3064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3064u;
label_4b3064:
    // 0x4b3064: 0x440003c  bltz        $v0, . + 4 + (0x3C << 2)
label_4b3068:
    if (ctx->pc == 0x4B3068u) {
        ctx->pc = 0x4B3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3064u;
        // 0x4b3068: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B306Cu;
        goto label_4b306c;
    }
    ctx->pc = 0x4B3064u;
    {
        const bool branch_taken_0x4b3064 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3064u;
        // 0x4b3068: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3064) {
            ctx->pc = 0x4B3158u;
            goto label_4b3158;
        }
    }
    ctx->pc = 0x4B306Cu;
label_4b306c:
    // 0x4b306c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_4b3070:
    if (ctx->pc == 0x4B3070u) {
        ctx->pc = 0x4B3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B306Cu;
        // 0x4b3070: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3074u;
        goto label_4b3074;
    }
    ctx->pc = 0x4B306Cu;
    {
        const bool branch_taken_0x4b306c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B306Cu;
        // 0x4b3070: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b306c) {
            ctx->pc = 0x4B30D0u;
            goto label_4b30d0;
        }
    }
    ctx->pc = 0x4B3074u;
label_4b3074:
    // 0x4b3074: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x4b3074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_4b3078:
    // 0x4b3078: 0xc12cc82  jal         func_4B3208
label_4b307c:
    if (ctx->pc == 0x4B307Cu) {
        ctx->pc = 0x4B307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3078u;
        // 0x4b307c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3080u;
        goto label_4b3080;
    }
    ctx->pc = 0x4B3078u;
    SET_GPR_U32(ctx, 31, 0x4B3080u);
    ctx->pc = 0x4B307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3078u;
    // 0x4b307c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3208u, 0x4B3078u, 0x4B3080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3080u;
label_4b3080:
    // 0x4b3080: 0x4400035  bltz        $v0, . + 4 + (0x35 << 2)
label_4b3084:
    if (ctx->pc == 0x4B3084u) {
        ctx->pc = 0x4B3084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3080u;
        // 0x4b3084: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3088u;
        goto label_4b3088;
    }
    ctx->pc = 0x4B3080u;
    {
        const bool branch_taken_0x4b3080 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B3084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3080u;
        // 0x4b3084: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3080) {
            ctx->pc = 0x4B3158u;
            goto label_4b3158;
        }
    }
    ctx->pc = 0x4B3088u;
label_4b3088:
    // 0x4b3088: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4b3088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4b308c:
    // 0x4b308c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4b308cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4b3090:
    // 0x4b3090: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4b3090u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_4b3094:
    // 0x4b3094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b3094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b3098:
    // 0x4b3098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b3098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b309c:
    // 0x4b309c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4b309cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4b30a0:
    // 0x4b30a0: 0xc12ca06  jal         func_4B2818
label_4b30a4:
    if (ctx->pc == 0x4B30A4u) {
        ctx->pc = 0x4B30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B30A0u;
        // 0x4b30a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B30A8u;
        goto label_4b30a8;
    }
    ctx->pc = 0x4B30A0u;
    SET_GPR_U32(ctx, 31, 0x4B30A8u);
    ctx->pc = 0x4B30A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B30A0u;
    // 0x4b30a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2818u, 0x4B30A0u, 0x4B30A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B30A8u;
label_4b30a8:
    // 0x4b30a8: 0x1450002b  bne         $v0, $s0, . + 4 + (0x2B << 2)
label_4b30ac:
    if (ctx->pc == 0x4B30ACu) {
        ctx->pc = 0x4B30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B30A8u;
        // 0x4b30ac: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B30B0u;
        goto label_4b30b0;
    }
    ctx->pc = 0x4B30A8u;
    {
        const bool branch_taken_0x4b30a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4B30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B30A8u;
        // 0x4b30ac: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b30a8) {
            ctx->pc = 0x4B3158u;
            goto label_4b3158;
        }
    }
    ctx->pc = 0x4B30B0u;
label_4b30b0:
    // 0x4b30b0: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x4b30b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_4b30b4:
    // 0x4b30b4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4b30b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4b30b8:
    // 0x4b30b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b30b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b30bc:
    // 0x4b30bc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4b30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4b30c0:
    // 0x4b30c0: 0x40f809  jalr        $v0
label_4b30c4:
    if (ctx->pc == 0x4B30C4u) {
        ctx->pc = 0x4B30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B30C0u;
        // 0x4b30c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B30C8u;
        goto label_4b30c8;
    }
    ctx->pc = 0x4B30C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B30C8u);
        ctx->pc = 0x4B30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B30C0u;
        // 0x4b30c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B30C0u, 0x4B30C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B30C8u;
label_4b30c8:
    // 0x4b30c8: 0x14510024  bne         $v0, $s1, . + 4 + (0x24 << 2)
label_4b30cc:
    if (ctx->pc == 0x4B30CCu) {
        ctx->pc = 0x4B30CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B30C8u;
        // 0x4b30cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B30D0u;
        goto label_4b30d0;
    }
    ctx->pc = 0x4B30C8u;
    {
        const bool branch_taken_0x4b30c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4B30CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B30C8u;
        // 0x4b30cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b30c8) {
            ctx->pc = 0x4B315Cu;
            goto label_4b315c;
        }
    }
    ctx->pc = 0x4B30D0u;
label_4b30d0:
    // 0x4b30d0: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x4b30d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4b30d4:
    // 0x4b30d4: 0x2779821  addu        $s3, $s3, $s7
    ctx->pc = 0x4b30d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
label_4b30d8:
    // 0x4b30d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b30d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b30dc:
    // 0x4b30dc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4b30dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4b30e0:
    // 0x4b30e0: 0xc12ca06  jal         func_4B2818
label_4b30e4:
    if (ctx->pc == 0x4B30E4u) {
        ctx->pc = 0x4B30E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B30E0u;
        // 0x4b30e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B30E8u;
        goto label_4b30e8;
    }
    ctx->pc = 0x4B30E0u;
    SET_GPR_U32(ctx, 31, 0x4B30E8u);
    ctx->pc = 0x4B30E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B30E0u;
    // 0x4b30e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2818u, 0x4B30E0u, 0x4B30E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B30E8u;
label_4b30e8:
    // 0x4b30e8: 0x1450001c  bne         $v0, $s0, . + 4 + (0x1C << 2)
label_4b30ec:
    if (ctx->pc == 0x4B30ECu) {
        ctx->pc = 0x4B30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B30E8u;
        // 0x4b30ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B30F0u;
        goto label_4b30f0;
    }
    ctx->pc = 0x4B30E8u;
    {
        const bool branch_taken_0x4b30e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4B30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B30E8u;
        // 0x4b30ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b30e8) {
            ctx->pc = 0x4B315Cu;
            goto label_4b315c;
        }
    }
    ctx->pc = 0x4B30F0u;
label_4b30f0:
    // 0x4b30f0: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
label_4b30f4:
    if (ctx->pc == 0x4B30F4u) {
        ctx->pc = 0x4B30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B30F0u;
        // 0x4b30f4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B30F8u;
        goto label_4b30f8;
    }
    ctx->pc = 0x4B30F0u;
    {
        const bool branch_taken_0x4b30f0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B30F0u;
        // 0x4b30f4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b30f0) {
            ctx->pc = 0x4B3118u;
            goto label_4b3118;
        }
    }
    ctx->pc = 0x4B30F8u;
label_4b30f8:
    // 0x4b30f8: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x4b30f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_4b30fc:
    // 0x4b30fc: 0x27e9821  addu        $s3, $s3, $fp
    ctx->pc = 0x4b30fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
label_4b3100:
    // 0x4b3100: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b3100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b3104:
    // 0x4b3104: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4b3104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4b3108:
    // 0x4b3108: 0x40f809  jalr        $v0
label_4b310c:
    if (ctx->pc == 0x4B310Cu) {
        ctx->pc = 0x4B310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3108u;
        // 0x4b310c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3110u;
        goto label_4b3110;
    }
    ctx->pc = 0x4B3108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B3110u);
        ctx->pc = 0x4B310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3108u;
        // 0x4b310c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3108u, 0x4B3110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B3110u;
label_4b3110:
    // 0x4b3110: 0x145e0012  bne         $v0, $fp, . + 4 + (0x12 << 2)
label_4b3114:
    if (ctx->pc == 0x4B3114u) {
        ctx->pc = 0x4B3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3110u;
        // 0x4b3114: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3118u;
        goto label_4b3118;
    }
    ctx->pc = 0x4B3110u;
    {
        const bool branch_taken_0x4b3110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x4B3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3110u;
        // 0x4b3114: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3110) {
            ctx->pc = 0x4B315Cu;
            goto label_4b315c;
        }
    }
    ctx->pc = 0x4B3118u;
label_4b3118:
    // 0x4b3118: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x4b3118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_4b311c:
    // 0x4b311c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b311cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b3120:
    // 0x4b3120: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
label_4b3124:
    if (ctx->pc == 0x4B3124u) {
        ctx->pc = 0x4B3124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3120u;
        // 0x4b3124: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3128u;
        goto label_4b3128;
    }
    ctx->pc = 0x4B3120u;
    {
        const bool branch_taken_0x4b3120 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B3124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3120u;
        // 0x4b3124: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3120) {
            ctx->pc = 0x4B315Cu;
            goto label_4b315c;
        }
    }
    ctx->pc = 0x4B3128u;
label_4b3128:
    // 0x4b3128: 0x1aa0000c  blez        $s5, . + 4 + (0xC << 2)
label_4b312c:
    if (ctx->pc == 0x4B312Cu) {
        ctx->pc = 0x4B312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3128u;
        // 0x4b312c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3130u;
        goto label_4b3130;
    }
    ctx->pc = 0x4B3128u;
    {
        const bool branch_taken_0x4b3128 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x4B312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3128u;
        // 0x4b312c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3128) {
            ctx->pc = 0x4B315Cu;
            goto label_4b315c;
        }
    }
    ctx->pc = 0x4B3130u;
label_4b3130:
    // 0x4b3130: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x4b3130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_4b3134:
    // 0x4b3134: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b3134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b3138:
    // 0x4b3138: 0x2759821  addu        $s3, $s3, $s5
    ctx->pc = 0x4b3138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_4b313c:
    // 0x4b313c: 0xc12ca06  jal         func_4B2818
label_4b3140:
    if (ctx->pc == 0x4B3140u) {
        ctx->pc = 0x4B3140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B313Cu;
        // 0x4b3140: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3144u;
        goto label_4b3144;
    }
    ctx->pc = 0x4B313Cu;
    SET_GPR_U32(ctx, 31, 0x4B3144u);
    ctx->pc = 0x4B3140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B313Cu;
    // 0x4b3140: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2818u, 0x4B313Cu, 0x4B3144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3144u;
label_4b3144:
    // 0x4b3144: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
label_4b3148:
    if (ctx->pc == 0x4B3148u) {
        ctx->pc = 0x4B3148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3144u;
        // 0x4b3148: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B314Cu;
        goto label_4b314c;
    }
    ctx->pc = 0x4B3144u;
    {
        const bool branch_taken_0x4b3144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4B3148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3144u;
        // 0x4b3148: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3144) {
            ctx->pc = 0x4B315Cu;
            goto label_4b315c;
        }
    }
    ctx->pc = 0x4B314Cu;
label_4b314c:
    // 0x4b314c: 0x10000003  b           . + 4 + (0x3 << 2)
label_4b3150:
    if (ctx->pc == 0x4B3150u) {
        ctx->pc = 0x4B3150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B314Cu;
        // 0x4b3150: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3154u;
        goto label_4b3154;
    }
    ctx->pc = 0x4B314Cu;
    {
        const bool branch_taken_0x4b314c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B314Cu;
        // 0x4b3150: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b314c) {
            ctx->pc = 0x4B315Cu;
            goto label_4b315c;
        }
    }
    ctx->pc = 0x4B3154u;
label_4b3154:
    // 0x4b3154: 0x0  nop
    ctx->pc = 0x4b3154u;
    // NOP
label_4b3158:
    // 0x4b3158: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b3158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b315c:
    // 0x4b315c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x4b315cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_4b3160:
    // 0x4b3160: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x4b3160u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_4b3164:
    // 0x4b3164: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x4b3164u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_4b3168:
    // 0x4b3168: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x4b3168u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_4b316c:
    // 0x4b316c: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x4b316cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4b3170:
    // 0x4b3170: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x4b3170u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4b3174:
    // 0x4b3174: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x4b3174u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4b3178:
    // 0x4b3178: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x4b3178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4b317c:
    // 0x4b317c: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x4b317cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4b3180:
    // 0x4b3180: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x4b3180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4b3184:
    // 0x4b3184: 0x3e00008  jr          $ra
label_4b3188:
    if (ctx->pc == 0x4B3188u) {
        ctx->pc = 0x4B3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3184u;
        // 0x4b3188: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B318Cu;
        goto label_4b318c;
    }
    ctx->pc = 0x4B3184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3184u;
        // 0x4b3188: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B318Cu;
label_4b318c:
    // 0x4b318c: 0x0  nop
    ctx->pc = 0x4b318cu;
    // NOP
    ctx->pc = 0x4b3190u;
}
