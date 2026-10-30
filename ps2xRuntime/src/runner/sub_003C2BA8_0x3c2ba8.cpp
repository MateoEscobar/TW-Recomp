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

// Function: sub_003C2BA8
// Address: 0x3c2ba8 - 0x3c3078
void sub_003C2BA8_0x3c2ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2BA8_0x3c2ba8");
#endif

    switch (ctx->pc) {
        case 0x3c2ba8u: goto label_3c2ba8;
        case 0x3c2bacu: goto label_3c2bac;
        case 0x3c2bb0u: goto label_3c2bb0;
        case 0x3c2bb4u: goto label_3c2bb4;
        case 0x3c2bb8u: goto label_3c2bb8;
        case 0x3c2bbcu: goto label_3c2bbc;
        case 0x3c2bc0u: goto label_3c2bc0;
        case 0x3c2bc4u: goto label_3c2bc4;
        case 0x3c2bc8u: goto label_3c2bc8;
        case 0x3c2bccu: goto label_3c2bcc;
        case 0x3c2bd0u: goto label_3c2bd0;
        case 0x3c2bd4u: goto label_3c2bd4;
        case 0x3c2bd8u: goto label_3c2bd8;
        case 0x3c2bdcu: goto label_3c2bdc;
        case 0x3c2be0u: goto label_3c2be0;
        case 0x3c2be4u: goto label_3c2be4;
        case 0x3c2be8u: goto label_3c2be8;
        case 0x3c2becu: goto label_3c2bec;
        case 0x3c2bf0u: goto label_3c2bf0;
        case 0x3c2bf4u: goto label_3c2bf4;
        case 0x3c2bf8u: goto label_3c2bf8;
        case 0x3c2bfcu: goto label_3c2bfc;
        case 0x3c2c00u: goto label_3c2c00;
        case 0x3c2c04u: goto label_3c2c04;
        case 0x3c2c08u: goto label_3c2c08;
        case 0x3c2c0cu: goto label_3c2c0c;
        case 0x3c2c10u: goto label_3c2c10;
        case 0x3c2c14u: goto label_3c2c14;
        case 0x3c2c18u: goto label_3c2c18;
        case 0x3c2c1cu: goto label_3c2c1c;
        case 0x3c2c20u: goto label_3c2c20;
        case 0x3c2c24u: goto label_3c2c24;
        case 0x3c2c28u: goto label_3c2c28;
        case 0x3c2c2cu: goto label_3c2c2c;
        case 0x3c2c30u: goto label_3c2c30;
        case 0x3c2c34u: goto label_3c2c34;
        case 0x3c2c38u: goto label_3c2c38;
        case 0x3c2c3cu: goto label_3c2c3c;
        case 0x3c2c40u: goto label_3c2c40;
        case 0x3c2c44u: goto label_3c2c44;
        case 0x3c2c48u: goto label_3c2c48;
        case 0x3c2c4cu: goto label_3c2c4c;
        case 0x3c2c50u: goto label_3c2c50;
        case 0x3c2c54u: goto label_3c2c54;
        case 0x3c2c58u: goto label_3c2c58;
        case 0x3c2c5cu: goto label_3c2c5c;
        case 0x3c2c60u: goto label_3c2c60;
        case 0x3c2c64u: goto label_3c2c64;
        case 0x3c2c68u: goto label_3c2c68;
        case 0x3c2c6cu: goto label_3c2c6c;
        case 0x3c2c70u: goto label_3c2c70;
        case 0x3c2c74u: goto label_3c2c74;
        case 0x3c2c78u: goto label_3c2c78;
        case 0x3c2c7cu: goto label_3c2c7c;
        case 0x3c2c80u: goto label_3c2c80;
        case 0x3c2c84u: goto label_3c2c84;
        case 0x3c2c88u: goto label_3c2c88;
        case 0x3c2c8cu: goto label_3c2c8c;
        case 0x3c2c90u: goto label_3c2c90;
        case 0x3c2c94u: goto label_3c2c94;
        case 0x3c2c98u: goto label_3c2c98;
        case 0x3c2c9cu: goto label_3c2c9c;
        case 0x3c2ca0u: goto label_3c2ca0;
        case 0x3c2ca4u: goto label_3c2ca4;
        case 0x3c2ca8u: goto label_3c2ca8;
        case 0x3c2cacu: goto label_3c2cac;
        case 0x3c2cb0u: goto label_3c2cb0;
        case 0x3c2cb4u: goto label_3c2cb4;
        case 0x3c2cb8u: goto label_3c2cb8;
        case 0x3c2cbcu: goto label_3c2cbc;
        case 0x3c2cc0u: goto label_3c2cc0;
        case 0x3c2cc4u: goto label_3c2cc4;
        case 0x3c2cc8u: goto label_3c2cc8;
        case 0x3c2cccu: goto label_3c2ccc;
        case 0x3c2cd0u: goto label_3c2cd0;
        case 0x3c2cd4u: goto label_3c2cd4;
        case 0x3c2cd8u: goto label_3c2cd8;
        case 0x3c2cdcu: goto label_3c2cdc;
        case 0x3c2ce0u: goto label_3c2ce0;
        case 0x3c2ce4u: goto label_3c2ce4;
        case 0x3c2ce8u: goto label_3c2ce8;
        case 0x3c2cecu: goto label_3c2cec;
        case 0x3c2cf0u: goto label_3c2cf0;
        case 0x3c2cf4u: goto label_3c2cf4;
        case 0x3c2cf8u: goto label_3c2cf8;
        case 0x3c2cfcu: goto label_3c2cfc;
        case 0x3c2d00u: goto label_3c2d00;
        case 0x3c2d04u: goto label_3c2d04;
        case 0x3c2d08u: goto label_3c2d08;
        case 0x3c2d0cu: goto label_3c2d0c;
        case 0x3c2d10u: goto label_3c2d10;
        case 0x3c2d14u: goto label_3c2d14;
        case 0x3c2d18u: goto label_3c2d18;
        case 0x3c2d1cu: goto label_3c2d1c;
        case 0x3c2d20u: goto label_3c2d20;
        case 0x3c2d24u: goto label_3c2d24;
        case 0x3c2d28u: goto label_3c2d28;
        case 0x3c2d2cu: goto label_3c2d2c;
        case 0x3c2d30u: goto label_3c2d30;
        case 0x3c2d34u: goto label_3c2d34;
        case 0x3c2d38u: goto label_3c2d38;
        case 0x3c2d3cu: goto label_3c2d3c;
        case 0x3c2d40u: goto label_3c2d40;
        case 0x3c2d44u: goto label_3c2d44;
        case 0x3c2d48u: goto label_3c2d48;
        case 0x3c2d4cu: goto label_3c2d4c;
        case 0x3c2d50u: goto label_3c2d50;
        case 0x3c2d54u: goto label_3c2d54;
        case 0x3c2d58u: goto label_3c2d58;
        case 0x3c2d5cu: goto label_3c2d5c;
        case 0x3c2d60u: goto label_3c2d60;
        case 0x3c2d64u: goto label_3c2d64;
        case 0x3c2d68u: goto label_3c2d68;
        case 0x3c2d6cu: goto label_3c2d6c;
        case 0x3c2d70u: goto label_3c2d70;
        case 0x3c2d74u: goto label_3c2d74;
        case 0x3c2d78u: goto label_3c2d78;
        case 0x3c2d7cu: goto label_3c2d7c;
        case 0x3c2d80u: goto label_3c2d80;
        case 0x3c2d84u: goto label_3c2d84;
        case 0x3c2d88u: goto label_3c2d88;
        case 0x3c2d8cu: goto label_3c2d8c;
        case 0x3c2d90u: goto label_3c2d90;
        case 0x3c2d94u: goto label_3c2d94;
        case 0x3c2d98u: goto label_3c2d98;
        case 0x3c2d9cu: goto label_3c2d9c;
        case 0x3c2da0u: goto label_3c2da0;
        case 0x3c2da4u: goto label_3c2da4;
        case 0x3c2da8u: goto label_3c2da8;
        case 0x3c2dacu: goto label_3c2dac;
        case 0x3c2db0u: goto label_3c2db0;
        case 0x3c2db4u: goto label_3c2db4;
        case 0x3c2db8u: goto label_3c2db8;
        case 0x3c2dbcu: goto label_3c2dbc;
        case 0x3c2dc0u: goto label_3c2dc0;
        case 0x3c2dc4u: goto label_3c2dc4;
        case 0x3c2dc8u: goto label_3c2dc8;
        case 0x3c2dccu: goto label_3c2dcc;
        case 0x3c2dd0u: goto label_3c2dd0;
        case 0x3c2dd4u: goto label_3c2dd4;
        case 0x3c2dd8u: goto label_3c2dd8;
        case 0x3c2ddcu: goto label_3c2ddc;
        case 0x3c2de0u: goto label_3c2de0;
        case 0x3c2de4u: goto label_3c2de4;
        case 0x3c2de8u: goto label_3c2de8;
        case 0x3c2decu: goto label_3c2dec;
        case 0x3c2df0u: goto label_3c2df0;
        case 0x3c2df4u: goto label_3c2df4;
        case 0x3c2df8u: goto label_3c2df8;
        case 0x3c2dfcu: goto label_3c2dfc;
        case 0x3c2e00u: goto label_3c2e00;
        case 0x3c2e04u: goto label_3c2e04;
        case 0x3c2e08u: goto label_3c2e08;
        case 0x3c2e0cu: goto label_3c2e0c;
        case 0x3c2e10u: goto label_3c2e10;
        case 0x3c2e14u: goto label_3c2e14;
        case 0x3c2e18u: goto label_3c2e18;
        case 0x3c2e1cu: goto label_3c2e1c;
        case 0x3c2e20u: goto label_3c2e20;
        case 0x3c2e24u: goto label_3c2e24;
        case 0x3c2e28u: goto label_3c2e28;
        case 0x3c2e2cu: goto label_3c2e2c;
        case 0x3c2e30u: goto label_3c2e30;
        case 0x3c2e34u: goto label_3c2e34;
        case 0x3c2e38u: goto label_3c2e38;
        case 0x3c2e3cu: goto label_3c2e3c;
        case 0x3c2e40u: goto label_3c2e40;
        case 0x3c2e44u: goto label_3c2e44;
        case 0x3c2e48u: goto label_3c2e48;
        case 0x3c2e4cu: goto label_3c2e4c;
        case 0x3c2e50u: goto label_3c2e50;
        case 0x3c2e54u: goto label_3c2e54;
        case 0x3c2e58u: goto label_3c2e58;
        case 0x3c2e5cu: goto label_3c2e5c;
        case 0x3c2e60u: goto label_3c2e60;
        case 0x3c2e64u: goto label_3c2e64;
        case 0x3c2e68u: goto label_3c2e68;
        case 0x3c2e6cu: goto label_3c2e6c;
        case 0x3c2e70u: goto label_3c2e70;
        case 0x3c2e74u: goto label_3c2e74;
        case 0x3c2e78u: goto label_3c2e78;
        case 0x3c2e7cu: goto label_3c2e7c;
        case 0x3c2e80u: goto label_3c2e80;
        case 0x3c2e84u: goto label_3c2e84;
        case 0x3c2e88u: goto label_3c2e88;
        case 0x3c2e8cu: goto label_3c2e8c;
        case 0x3c2e90u: goto label_3c2e90;
        case 0x3c2e94u: goto label_3c2e94;
        case 0x3c2e98u: goto label_3c2e98;
        case 0x3c2e9cu: goto label_3c2e9c;
        case 0x3c2ea0u: goto label_3c2ea0;
        case 0x3c2ea4u: goto label_3c2ea4;
        case 0x3c2ea8u: goto label_3c2ea8;
        case 0x3c2eacu: goto label_3c2eac;
        case 0x3c2eb0u: goto label_3c2eb0;
        case 0x3c2eb4u: goto label_3c2eb4;
        case 0x3c2eb8u: goto label_3c2eb8;
        case 0x3c2ebcu: goto label_3c2ebc;
        case 0x3c2ec0u: goto label_3c2ec0;
        case 0x3c2ec4u: goto label_3c2ec4;
        case 0x3c2ec8u: goto label_3c2ec8;
        case 0x3c2eccu: goto label_3c2ecc;
        case 0x3c2ed0u: goto label_3c2ed0;
        case 0x3c2ed4u: goto label_3c2ed4;
        case 0x3c2ed8u: goto label_3c2ed8;
        case 0x3c2edcu: goto label_3c2edc;
        case 0x3c2ee0u: goto label_3c2ee0;
        case 0x3c2ee4u: goto label_3c2ee4;
        case 0x3c2ee8u: goto label_3c2ee8;
        case 0x3c2eecu: goto label_3c2eec;
        case 0x3c2ef0u: goto label_3c2ef0;
        case 0x3c2ef4u: goto label_3c2ef4;
        case 0x3c2ef8u: goto label_3c2ef8;
        case 0x3c2efcu: goto label_3c2efc;
        case 0x3c2f00u: goto label_3c2f00;
        case 0x3c2f04u: goto label_3c2f04;
        case 0x3c2f08u: goto label_3c2f08;
        case 0x3c2f0cu: goto label_3c2f0c;
        case 0x3c2f10u: goto label_3c2f10;
        case 0x3c2f14u: goto label_3c2f14;
        case 0x3c2f18u: goto label_3c2f18;
        case 0x3c2f1cu: goto label_3c2f1c;
        case 0x3c2f20u: goto label_3c2f20;
        case 0x3c2f24u: goto label_3c2f24;
        case 0x3c2f28u: goto label_3c2f28;
        case 0x3c2f2cu: goto label_3c2f2c;
        case 0x3c2f30u: goto label_3c2f30;
        case 0x3c2f34u: goto label_3c2f34;
        case 0x3c2f38u: goto label_3c2f38;
        case 0x3c2f3cu: goto label_3c2f3c;
        case 0x3c2f40u: goto label_3c2f40;
        case 0x3c2f44u: goto label_3c2f44;
        case 0x3c2f48u: goto label_3c2f48;
        case 0x3c2f4cu: goto label_3c2f4c;
        case 0x3c2f50u: goto label_3c2f50;
        case 0x3c2f54u: goto label_3c2f54;
        case 0x3c2f58u: goto label_3c2f58;
        case 0x3c2f5cu: goto label_3c2f5c;
        case 0x3c2f60u: goto label_3c2f60;
        case 0x3c2f64u: goto label_3c2f64;
        case 0x3c2f68u: goto label_3c2f68;
        case 0x3c2f6cu: goto label_3c2f6c;
        case 0x3c2f70u: goto label_3c2f70;
        case 0x3c2f74u: goto label_3c2f74;
        case 0x3c2f78u: goto label_3c2f78;
        case 0x3c2f7cu: goto label_3c2f7c;
        case 0x3c2f80u: goto label_3c2f80;
        case 0x3c2f84u: goto label_3c2f84;
        case 0x3c2f88u: goto label_3c2f88;
        case 0x3c2f8cu: goto label_3c2f8c;
        case 0x3c2f90u: goto label_3c2f90;
        case 0x3c2f94u: goto label_3c2f94;
        case 0x3c2f98u: goto label_3c2f98;
        case 0x3c2f9cu: goto label_3c2f9c;
        case 0x3c2fa0u: goto label_3c2fa0;
        case 0x3c2fa4u: goto label_3c2fa4;
        case 0x3c2fa8u: goto label_3c2fa8;
        case 0x3c2facu: goto label_3c2fac;
        case 0x3c2fb0u: goto label_3c2fb0;
        case 0x3c2fb4u: goto label_3c2fb4;
        case 0x3c2fb8u: goto label_3c2fb8;
        case 0x3c2fbcu: goto label_3c2fbc;
        case 0x3c2fc0u: goto label_3c2fc0;
        case 0x3c2fc4u: goto label_3c2fc4;
        case 0x3c2fc8u: goto label_3c2fc8;
        case 0x3c2fccu: goto label_3c2fcc;
        case 0x3c2fd0u: goto label_3c2fd0;
        case 0x3c2fd4u: goto label_3c2fd4;
        case 0x3c2fd8u: goto label_3c2fd8;
        case 0x3c2fdcu: goto label_3c2fdc;
        case 0x3c2fe0u: goto label_3c2fe0;
        case 0x3c2fe4u: goto label_3c2fe4;
        case 0x3c2fe8u: goto label_3c2fe8;
        case 0x3c2fecu: goto label_3c2fec;
        case 0x3c2ff0u: goto label_3c2ff0;
        case 0x3c2ff4u: goto label_3c2ff4;
        case 0x3c2ff8u: goto label_3c2ff8;
        case 0x3c2ffcu: goto label_3c2ffc;
        case 0x3c3000u: goto label_3c3000;
        case 0x3c3004u: goto label_3c3004;
        case 0x3c3008u: goto label_3c3008;
        case 0x3c300cu: goto label_3c300c;
        case 0x3c3010u: goto label_3c3010;
        case 0x3c3014u: goto label_3c3014;
        case 0x3c3018u: goto label_3c3018;
        case 0x3c301cu: goto label_3c301c;
        case 0x3c3020u: goto label_3c3020;
        case 0x3c3024u: goto label_3c3024;
        case 0x3c3028u: goto label_3c3028;
        case 0x3c302cu: goto label_3c302c;
        case 0x3c3030u: goto label_3c3030;
        case 0x3c3034u: goto label_3c3034;
        case 0x3c3038u: goto label_3c3038;
        case 0x3c303cu: goto label_3c303c;
        case 0x3c3040u: goto label_3c3040;
        case 0x3c3044u: goto label_3c3044;
        case 0x3c3048u: goto label_3c3048;
        case 0x3c304cu: goto label_3c304c;
        case 0x3c3050u: goto label_3c3050;
        case 0x3c3054u: goto label_3c3054;
        case 0x3c3058u: goto label_3c3058;
        case 0x3c305cu: goto label_3c305c;
        case 0x3c3060u: goto label_3c3060;
        case 0x3c3064u: goto label_3c3064;
        case 0x3c3068u: goto label_3c3068;
        case 0x3c306cu: goto label_3c306c;
        case 0x3c3070u: goto label_3c3070;
        case 0x3c3074u: goto label_3c3074;
        default: break;
    }

    ctx->pc = 0x3c2ba8u;

label_3c2ba8:
    // 0x3c2ba8: 0x27bdfa10  addiu       $sp, $sp, -0x5F0
    ctx->pc = 0x3c2ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965776));
label_3c2bac:
    // 0x3c2bac: 0x7fb005a0  sq          $s0, 0x5A0($sp)
    ctx->pc = 0x3c2bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1440), GPR_VEC(ctx, 16));
label_3c2bb0:
    // 0x3c2bb0: 0x7fb20580  sq          $s2, 0x580($sp)
    ctx->pc = 0x3c2bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), GPR_VEC(ctx, 18));
label_3c2bb4:
    // 0x3c2bb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c2bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c2bb8:
    // 0x3c2bb8: 0x7fb10590  sq          $s1, 0x590($sp)
    ctx->pc = 0x3c2bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), GPR_VEC(ctx, 17));
label_3c2bbc:
    // 0x3c2bbc: 0x7fb30570  sq          $s3, 0x570($sp)
    ctx->pc = 0x3c2bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 19));
label_3c2bc0:
    // 0x3c2bc0: 0x7fb40560  sq          $s4, 0x560($sp)
    ctx->pc = 0x3c2bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 20));
label_3c2bc4:
    // 0x3c2bc4: 0x7fb50550  sq          $s5, 0x550($sp)
    ctx->pc = 0x3c2bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 21));
label_3c2bc8:
    // 0x3c2bc8: 0x7fb60540  sq          $s6, 0x540($sp)
    ctx->pc = 0x3c2bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 22));
label_3c2bcc:
    // 0x3c2bcc: 0x7fb70530  sq          $s7, 0x530($sp)
    ctx->pc = 0x3c2bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 23));
label_3c2bd0:
    // 0x3c2bd0: 0x7fbe0520  sq          $fp, 0x520($sp)
    ctx->pc = 0x3c2bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 30));
label_3c2bd4:
    // 0x3c2bd4: 0xffbf0510  sd          $ra, 0x510($sp)
    ctx->pc = 0x3c2bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1296), GPR_U64(ctx, 31));
label_3c2bd8:
    // 0x3c2bd8: 0xe7ba05e0  swc1        $f26, 0x5E0($sp)
    ctx->pc = 0x3c2bd8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1504), bits); }
label_3c2bdc:
    // 0x3c2bdc: 0xe7b905d8  swc1        $f25, 0x5D8($sp)
    ctx->pc = 0x3c2bdcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1496), bits); }
label_3c2be0:
    // 0x3c2be0: 0xe7b805d0  swc1        $f24, 0x5D0($sp)
    ctx->pc = 0x3c2be0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1488), bits); }
label_3c2be4:
    // 0x3c2be4: 0xe7b705c8  swc1        $f23, 0x5C8($sp)
    ctx->pc = 0x3c2be4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1480), bits); }
label_3c2be8:
    // 0x3c2be8: 0xe7b605c0  swc1        $f22, 0x5C0($sp)
    ctx->pc = 0x3c2be8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1472), bits); }
label_3c2bec:
    // 0x3c2bec: 0xe7b505b8  swc1        $f21, 0x5B8($sp)
    ctx->pc = 0x3c2becu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1464), bits); }
label_3c2bf0:
    // 0x3c2bf0: 0xe7b405b0  swc1        $f20, 0x5B0($sp)
    ctx->pc = 0x3c2bf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1456), bits); }
label_3c2bf4:
    // 0x3c2bf4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c2bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c2bf8:
    // 0x3c2bf8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c2bf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c2bfc:
    // 0x3c2bfc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c2bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c2c00:
    // 0x3c2c00: 0x40f809  jalr        $v0
label_3c2c04:
    if (ctx->pc == 0x3C2C04u) {
        ctx->pc = 0x3C2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C00u;
        // 0x3c2c04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2C08u;
        goto label_3c2c08;
    }
    ctx->pc = 0x3C2C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2C08u);
        ctx->pc = 0x3C2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C00u;
        // 0x3c2c04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2C00u, 0x3C2C08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2C08u;
label_3c2c08:
    // 0x3c2c08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c2c08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2c0c:
    // 0x3c2c0c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3c2c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c2c10:
    // 0x3c2c10: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3c2c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c2c14:
    // 0x3c2c14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c2c18:
    // 0x3c2c18: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3c2c18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c2c1c:
    // 0x3c2c1c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_3c2c20:
    if (ctx->pc == 0x3C2C20u) {
        ctx->pc = 0x3C2C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C1Cu;
        // 0x3c2c20: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2C24u;
        goto label_3c2c24;
    }
    ctx->pc = 0x3C2C1Cu;
    {
        const bool branch_taken_0x3c2c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C1Cu;
        // 0x3c2c20: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2c1c) {
            ctx->pc = 0x3C2C58u;
            goto label_3c2c58;
        }
    }
    ctx->pc = 0x3C2C24u;
label_3c2c24:
    // 0x3c2c24: 0xc0e9694  jal         func_3A5A50
label_3c2c28:
    if (ctx->pc == 0x3C2C28u) {
        ctx->pc = 0x3C2C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C24u;
        // 0x3c2c28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2C2Cu;
        goto label_3c2c2c;
    }
    ctx->pc = 0x3C2C24u;
    SET_GPR_U32(ctx, 31, 0x3C2C2Cu);
    ctx->pc = 0x3C2C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2C24u;
    // 0x3c2c28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3C2C24u, 0x3C2C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2C2Cu;
label_3c2c2c:
    // 0x3c2c2c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3c2c30:
    if (ctx->pc == 0x3C2C30u) {
        ctx->pc = 0x3C2C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C2Cu;
        // 0x3c2c30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2C34u;
        goto label_3c2c34;
    }
    ctx->pc = 0x3C2C2Cu;
    {
        const bool branch_taken_0x3c2c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C2Cu;
        // 0x3c2c30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2c2c) {
            ctx->pc = 0x3C2C58u;
            goto label_3c2c58;
        }
    }
    ctx->pc = 0x3C2C34u;
label_3c2c34:
    // 0x3c2c34: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3c2c34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3c2c38:
    // 0x3c2c38: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x3c2c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_3c2c3c:
    // 0x3c2c3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c2c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c2c40:
    // 0x3c2c40: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3c2c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3c2c44:
    // 0x3c2c44: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c2c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c2c48:
    // 0x3c2c48: 0xc0e9f56  jal         func_3A7D58
label_3c2c4c:
    if (ctx->pc == 0x3C2C4Cu) {
        ctx->pc = 0x3C2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C48u;
        // 0x3c2c4c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2C50u;
        goto label_3c2c50;
    }
    ctx->pc = 0x3C2C48u;
    SET_GPR_U32(ctx, 31, 0x3C2C50u);
    ctx->pc = 0x3C2C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2C48u;
    // 0x3c2c4c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D58u, 0x3C2C48u, 0x3C2C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2C50u;
label_3c2c50:
    // 0x3c2c50: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3c2c54:
    if (ctx->pc == 0x3C2C54u) {
        ctx->pc = 0x3C2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C50u;
        // 0x3c2c54: 0x7a040010  lq          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2C58u;
        goto label_3c2c58;
    }
    ctx->pc = 0x3C2C50u;
    {
        const bool branch_taken_0x3c2c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2c50) {
            ctx->pc = 0x3C2C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2C50u;
            // 0x3c2c54: 0x7a040010  lq          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2C60u;
            goto label_3c2c60;
        }
    }
    ctx->pc = 0x3C2C58u;
label_3c2c58:
    // 0x3c2c58: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_3c2c5c:
    if (ctx->pc == 0x3C2C5Cu) {
        ctx->pc = 0x3C2C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C58u;
        // 0x3c2c5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2C60u;
        goto label_3c2c60;
    }
    ctx->pc = 0x3C2C58u;
    {
        const bool branch_taken_0x3c2c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C58u;
        // 0x3c2c5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2c58) {
            ctx->pc = 0x3C3028u;
            goto label_3c3028;
        }
    }
    ctx->pc = 0x3C2C60u;
label_3c2c60:
    // 0x3c2c60: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3c2c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3c2c64:
    // 0x3c2c64: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3c2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3c2c68:
    // 0x3c2c68: 0xafa304f4  sw          $v1, 0x4F4($sp)
    ctx->pc = 0x3c2c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1268), GPR_U32(ctx, 3));
label_3c2c6c:
    // 0x3c2c6c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3c2c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3c2c70:
    // 0x3c2c70: 0x3c16bec7  lui         $s6, 0xBEC7
    ctx->pc = 0x3c2c70u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)48839 << 16));
label_3c2c74:
    // 0x3c2c74: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c2c74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3c2c78:
    // 0x3c2c78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3c2c78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c2c7c:
    // 0x3c2c7c: 0x27a204a0  addiu       $v0, $sp, 0x4A0
    ctx->pc = 0x3c2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_3c2c80:
    // 0x3c2c80: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x3c2c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_3c2c84:
    // 0x3c2c84: 0xafa204ec  sw          $v0, 0x4EC($sp)
    ctx->pc = 0x3c2c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1260), GPR_U32(ctx, 2));
label_3c2c88:
    // 0x3c2c88: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x3c2c88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c2c8c:
    // 0x3c2c8c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3c2c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3c2c90:
    // 0x3c2c90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c2c94:
    // 0x3c2c94: 0x2454b8b8  addiu       $s4, $v0, -0x4748
    ctx->pc = 0x3c2c94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3c2c98:
    // 0x3c2c98: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3c2c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3c2c9c:
    // 0x3c2c9c: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3c2c9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3c2ca0:
    // 0x3c2ca0: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x3c2ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3c2ca4:
    // 0x3c2ca4: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x3c2ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
label_3c2ca8:
    // 0x3c2ca8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3c2ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3c2cac:
    // 0x3c2cac: 0x36d6ce64  ori         $s6, $s6, 0xCE64
    ctx->pc = 0x3c2cacu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)52836);
label_3c2cb0:
    // 0x3c2cb0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c2cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c2cb4:
    // 0x3c2cb4: 0x27a204b0  addiu       $v0, $sp, 0x4B0
    ctx->pc = 0x3c2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_3c2cb8:
    // 0x3c2cb8: 0x8fbe04f4  lw          $fp, 0x4F4($sp)
    ctx->pc = 0x3c2cb8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1268)));
label_3c2cbc:
    // 0x3c2cbc: 0x8e510020  lw          $s1, 0x20($s2)
    ctx->pc = 0x3c2cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3c2cc0:
    // 0x3c2cc0: 0xafa30500  sw          $v1, 0x500($sp)
    ctx->pc = 0x3c2cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 3));
label_3c2cc4:
    // 0x3c2cc4: 0xafa204f0  sw          $v0, 0x4F0($sp)
    ctx->pc = 0x3c2cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1264), GPR_U32(ctx, 2));
label_3c2cc8:
    // 0x3c2cc8: 0x27a304c0  addiu       $v1, $sp, 0x4C0
    ctx->pc = 0x3c2cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_3c2ccc:
    // 0x3c2ccc: 0x27a204d0  addiu       $v0, $sp, 0x4D0
    ctx->pc = 0x3c2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_3c2cd0:
    // 0x3c2cd0: 0xafa304fc  sw          $v1, 0x4FC($sp)
    ctx->pc = 0x3c2cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1276), GPR_U32(ctx, 3));
label_3c2cd4:
    // 0x3c2cd4: 0xafa20504  sw          $v0, 0x504($sp)
    ctx->pc = 0x3c2cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1284), GPR_U32(ctx, 2));
label_3c2cd8:
    // 0x3c2cd8: 0x27a30440  addiu       $v1, $sp, 0x440
    ctx->pc = 0x3c2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c2cdc:
    // 0x3c2cdc: 0x27a20460  addiu       $v0, $sp, 0x460
    ctx->pc = 0x3c2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c2ce0:
    // 0x3c2ce0: 0xafa304f8  sw          $v1, 0x4F8($sp)
    ctx->pc = 0x3c2ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1272), GPR_U32(ctx, 3));
label_3c2ce4:
    // 0x3c2ce4: 0xafa204e0  sw          $v0, 0x4E0($sp)
    ctx->pc = 0x3c2ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 2));
label_3c2ce8:
    // 0x3c2ce8: 0x27a30480  addiu       $v1, $sp, 0x480
    ctx->pc = 0x3c2ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c2cec:
    // 0x3c2cec: 0x27a20490  addiu       $v0, $sp, 0x490
    ctx->pc = 0x3c2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3c2cf0:
    // 0x3c2cf0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3c2cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3c2cf4:
    // 0x3c2cf4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3c2cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3c2cf8:
    // 0x3c2cf8: 0x8fb704ec  lw          $s7, 0x4EC($sp)
    ctx->pc = 0x3c2cf8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1260)));
label_3c2cfc:
    // 0x3c2cfc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3c2cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3c2d00:
    // 0x3c2d00: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c2d00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c2d04:
    // 0x3c2d04: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3c2d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3c2d08:
    // 0x3c2d08: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x3c2d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_3c2d0c:
    // 0x3c2d0c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3c2d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3c2d10:
    // 0x3c2d10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c2d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c2d14:
    // 0x3c2d14: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3c2d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3c2d18:
    // 0x3c2d18: 0xafa304e4  sw          $v1, 0x4E4($sp)
    ctx->pc = 0x3c2d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1252), GPR_U32(ctx, 3));
label_3c2d1c:
    // 0x3c2d1c: 0xafa204e8  sw          $v0, 0x4E8($sp)
    ctx->pc = 0x3c2d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1256), GPR_U32(ctx, 2));
label_3c2d20:
    // 0x3c2d20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c2d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c2d24:
    // 0x3c2d24: 0x0  nop
    ctx->pc = 0x3c2d24u;
    // NOP
label_3c2d28:
    // 0x3c2d28: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3c2d28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3c2d2c:
    // 0x3c2d2c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3c2d2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3c2d30:
    // 0x3c2d30: 0xc0cd518  jal         func_335460
label_3c2d34:
    if (ctx->pc == 0x3C2D34u) {
        ctx->pc = 0x3C2D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D30u;
        // 0x3c2d34: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2D38u;
        goto label_3c2d38;
    }
    ctx->pc = 0x3C2D30u;
    SET_GPR_U32(ctx, 31, 0x3C2D38u);
    ctx->pc = 0x3C2D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2D30u;
    // 0x3c2d34: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C2D30u, 0x3C2D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2D38u;
label_3c2d38:
    // 0x3c2d38: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3c2d38u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3c2d3c:
    // 0x3c2d3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c2d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c2d40:
    // 0x3c2d40: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3c2d40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3c2d44:
    // 0x3c2d44: 0xc0cd518  jal         func_335460
label_3c2d48:
    if (ctx->pc == 0x3C2D48u) {
        ctx->pc = 0x3C2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D44u;
        // 0x3c2d48: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2D4Cu;
        goto label_3c2d4c;
    }
    ctx->pc = 0x3C2D44u;
    SET_GPR_U32(ctx, 31, 0x3C2D4Cu);
    ctx->pc = 0x3C2D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2D44u;
    // 0x3c2d48: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C2D44u, 0x3C2D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2D4Cu;
label_3c2d4c:
    // 0x3c2d4c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3c2d4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3c2d50:
    // 0x3c2d50: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3c2d50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3c2d54:
    // 0x3c2d54: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c2d54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c2d58:
    // 0x3c2d58: 0xc0cd518  jal         func_335460
label_3c2d5c:
    if (ctx->pc == 0x3C2D5Cu) {
        ctx->pc = 0x3C2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D58u;
        // 0x3c2d5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2D60u;
        goto label_3c2d60;
    }
    ctx->pc = 0x3C2D58u;
    SET_GPR_U32(ctx, 31, 0x3C2D60u);
    ctx->pc = 0x3C2D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2D58u;
    // 0x3c2d5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C2D58u, 0x3C2D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2D60u;
label_3c2d60:
    // 0x3c2d60: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x3c2d60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3c2d64:
    // 0x3c2d64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c2d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c2d68:
    // 0x3c2d68: 0xe7b40054  swc1        $f20, 0x54($sp)
    ctx->pc = 0x3c2d68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3c2d6c:
    // 0x3c2d6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3c2d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c2d70:
    // 0x3c2d70: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3c2d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3c2d74:
    // 0x3c2d74: 0xe7d8000c  swc1        $f24, 0xC($fp)
    ctx->pc = 0x3c2d74u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_3c2d78:
    // 0x3c2d78: 0xafa004a0  sw          $zero, 0x4A0($sp)
    ctx->pc = 0x3c2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 0));
label_3c2d7c:
    // 0x3c2d7c: 0x7ba60050  lq          $a2, 0x50($sp)
    ctx->pc = 0x3c2d7cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c2d80:
    // 0x3c2d80: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3c2d80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3c2d84:
    // 0x3c2d84: 0x48b11000  qmtc2.ni    $s1, $vf2
    ctx->pc = 0x3c2d84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
label_3c2d88:
    // 0x3c2d88: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3c2d88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3c2d8c:
    // 0x3c2d8c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3c2d8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3c2d90:
    // 0x3c2d90: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x3c2d90u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c2d94:
    // 0x3c2d94: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3c2d94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c2d98:
    // 0x3c2d98: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3c2d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3c2d9c:
    // 0x3c2d9c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3c2d9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c2da0:
    // 0x3c2da0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3c2da0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c2da4:
    // 0x3c2da4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3c2da4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c2da8:
    // 0x3c2da8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3c2da8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3c2dac:
    // 0x3c2dac: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3c2dacu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3c2db0:
    // 0x3c2db0: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x3c2db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
label_3c2db4:
    // 0x3c2db4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3c2db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3c2db8:
    // 0x3c2db8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3c2db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3c2dbc:
    // 0x3c2dbc: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3c2dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3c2dc0:
    // 0x3c2dc0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3c2dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3c2dc4:
    // 0x3c2dc4: 0x7fa70050  sq          $a3, 0x50($sp)
    ctx->pc = 0x3c2dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
label_3c2dc8:
    // 0x3c2dc8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c2dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c2dcc:
    // 0x3c2dcc: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3c2dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3c2dd0:
    // 0x3c2dd0: 0xafa004a4  sw          $zero, 0x4A4($sp)
    ctx->pc = 0x3c2dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 0));
label_3c2dd4:
    // 0x3c2dd4: 0xe6fa0008  swc1        $f26, 0x8($s7)
    ctx->pc = 0x3c2dd4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_3c2dd8:
    // 0x3c2dd8: 0xe6f9000c  swc1        $f25, 0xC($s7)
    ctx->pc = 0x3c2dd8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_3c2ddc:
    // 0x3c2ddc: 0x7ba304a0  lq          $v1, 0x4A0($sp)
    ctx->pc = 0x3c2ddcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c2de0:
    // 0x3c2de0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3c2de0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c2de4:
    // 0x3c2de4: 0x48b11000  qmtc2.ni    $s1, $vf2
    ctx->pc = 0x3c2de4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
label_3c2de8:
    // 0x3c2de8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3c2de8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3c2dec:
    // 0x3c2dec: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3c2decu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3c2df0:
    // 0x3c2df0: 0xafa004a0  sw          $zero, 0x4A0($sp)
    ctx->pc = 0x3c2df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 0));
label_3c2df4:
    // 0x3c2df4: 0x7fa30490  sq          $v1, 0x490($sp)
    ctx->pc = 0x3c2df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 3));
label_3c2df8:
    // 0x3c2df8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c2df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c2dfc:
    // 0x3c2dfc: 0x7fa204c0  sq          $v0, 0x4C0($sp)
    ctx->pc = 0x3c2dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 2));
label_3c2e00:
    // 0x3c2e00: 0x7fa204b0  sq          $v0, 0x4B0($sp)
    ctx->pc = 0x3c2e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
label_3c2e04:
    // 0x3c2e04: 0xafa304b0  sw          $v1, 0x4B0($sp)
    ctx->pc = 0x3c2e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 3));
label_3c2e08:
    // 0x3c2e08: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3c2e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3c2e0c:
    // 0x3c2e0c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3c2e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3c2e10:
    // 0x3c2e10: 0xc0cd4ee  jal         func_3353B8
label_3c2e14:
    if (ctx->pc == 0x3C2E14u) {
        ctx->pc = 0x3C2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E10u;
        // 0x3c2e14: 0xafb604c0  sw          $s6, 0x4C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2E18u;
        goto label_3c2e18;
    }
    ctx->pc = 0x3C2E10u;
    SET_GPR_U32(ctx, 31, 0x3C2E18u);
    ctx->pc = 0x3C2E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2E10u;
    // 0x3c2e14: 0xafb604c0  sw          $s6, 0x4C0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C2E10u, 0x3C2E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2E18u;
label_3c2e18:
    // 0x3c2e18: 0x8faa04fc  lw          $t2, 0x4FC($sp)
    ctx->pc = 0x3c2e18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1276)));
label_3c2e1c:
    // 0x3c2e1c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3c2e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_3c2e20:
    // 0x3c2e20: 0x8fab0504  lw          $t3, 0x504($sp)
    ctx->pc = 0x3c2e20u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1284)));
label_3c2e24:
    // 0x3c2e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c2e28:
    // 0x3c2e28: 0x8fa70500  lw          $a3, 0x500($sp)
    ctx->pc = 0x3c2e28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1280)));
label_3c2e2c:
    // 0x3c2e2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3c2e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c2e30:
    // 0x3c2e30: 0x8fa904f0  lw          $t1, 0x4F0($sp)
    ctx->pc = 0x3c2e30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_3c2e34:
    // 0x3c2e34: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3c2e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c2e38:
    // 0x3c2e38: 0xafa204d0  sw          $v0, 0x4D0($sp)
    ctx->pc = 0x3c2e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 2));
label_3c2e3c:
    // 0x3c2e3c: 0xc0ea084  jal         func_3A8210
label_3c2e40:
    if (ctx->pc == 0x3C2E40u) {
        ctx->pc = 0x3C2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E3Cu;
        // 0x3c2e40: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2E44u;
        goto label_3c2e44;
    }
    ctx->pc = 0x3C2E3Cu;
    SET_GPR_U32(ctx, 31, 0x3C2E44u);
    ctx->pc = 0x3C2E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2E3Cu;
    // 0x3c2e40: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8210u, 0x3C2E3Cu, 0x3C2E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2E44u;
label_3c2e44:
    // 0x3c2e44: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3c2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3c2e48:
    // 0x3c2e48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c2e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c2e4c:
    // 0x3c2e4c: 0xc0f15bc  jal         func_3C56F0
label_3c2e50:
    if (ctx->pc == 0x3C2E50u) {
        ctx->pc = 0x3C2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E4Cu;
        // 0x3c2e50: 0x24442d00  addiu       $a0, $v0, 0x2D00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2E54u;
        goto label_3c2e54;
    }
    ctx->pc = 0x3C2E4Cu;
    SET_GPR_U32(ctx, 31, 0x3C2E54u);
    ctx->pc = 0x3C2E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2E4Cu;
    // 0x3c2e50: 0x24442d00  addiu       $a0, $v0, 0x2D00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C2E4Cu, 0x3C2E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2E54u;
label_3c2e54:
    // 0x3c2e54: 0x2e630004  sltiu       $v1, $s3, 0x4
    ctx->pc = 0x3c2e54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_3c2e58:
    // 0x3c2e58: 0x5460ffb3  bnel        $v1, $zero, . + 4 + (-0x4D << 2)
label_3c2e5c:
    if (ctx->pc == 0x3C2E5Cu) {
        ctx->pc = 0x3C2E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E58u;
        // 0x3c2e5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2E60u;
        goto label_3c2e60;
    }
    ctx->pc = 0x3C2E58u;
    {
        const bool branch_taken_0x3c2e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2e58) {
            ctx->pc = 0x3C2E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2E58u;
            // 0x3c2e5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2d28;
        }
    }
    ctx->pc = 0x3C2E60u;
label_3c2e60:
    // 0x3c2e60: 0x8e4a0000  lw          $t2, 0x0($s2)
    ctx->pc = 0x3c2e60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c2e64:
    // 0x3c2e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c2e68:
    // 0x3c2e68: 0x15420017  bne         $t2, $v0, . + 4 + (0x17 << 2)
label_3c2e6c:
    if (ctx->pc == 0x3C2E6Cu) {
        ctx->pc = 0x3C2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E68u;
        // 0x3c2e6c: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2E70u;
        goto label_3c2e70;
    }
    ctx->pc = 0x3C2E68u;
    {
        const bool branch_taken_0x3c2e68 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E68u;
        // 0x3c2e6c: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2e68) {
            ctx->pc = 0x3C2EC8u;
            goto label_3c2ec8;
        }
    }
    ctx->pc = 0x3C2E70u;
label_3c2e70:
    // 0x3c2e70: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3c2e70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c2e74:
    // 0x3c2e74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c2e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c2e78:
    // 0x3c2e78: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3c2e78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c2e7c:
    // 0x3c2e7c: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3c2e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3c2e80:
    // 0x3c2e80: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c2e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c2e84:
    // 0x3c2e84: 0x27a80470  addiu       $t0, $sp, 0x470
    ctx->pc = 0x3c2e84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c2e88:
    // 0x3c2e88: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3c2e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3c2e8c:
    // 0x3c2e8c: 0xafb10460  sw          $s1, 0x460($sp)
    ctx->pc = 0x3c2e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 17));
label_3c2e90:
    // 0x3c2e90: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x3c2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_3c2e94:
    // 0x3c2e94: 0x8fa504f8  lw          $a1, 0x4F8($sp)
    ctx->pc = 0x3c2e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1272)));
label_3c2e98:
    // 0x3c2e98: 0x24702d10  addiu       $s0, $v1, 0x2D10
    ctx->pc = 0x3c2e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11536));
label_3c2e9c:
    // 0x3c2e9c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3c2e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c2ea0:
    // 0x3c2ea0: 0x8fa704e0  lw          $a3, 0x4E0($sp)
    ctx->pc = 0x3c2ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1248)));
label_3c2ea4:
    // 0x3c2ea4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x3c2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_3c2ea8:
    // 0x3c2ea8: 0x8fa904e4  lw          $t1, 0x4E4($sp)
    ctx->pc = 0x3c2ea8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1252)));
label_3c2eac:
    // 0x3c2eac: 0xafaa0480  sw          $t2, 0x480($sp)
    ctx->pc = 0x3c2eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 10));
label_3c2eb0:
    // 0x3c2eb0: 0xc0ea004  jal         func_3A8010
label_3c2eb4:
    if (ctx->pc == 0x3C2EB4u) {
        ctx->pc = 0x3C2EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2EB0u;
        // 0x3c2eb4: 0xafa20470  sw          $v0, 0x470($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2EB8u;
        goto label_3c2eb8;
    }
    ctx->pc = 0x3C2EB0u;
    SET_GPR_U32(ctx, 31, 0x3C2EB8u);
    ctx->pc = 0x3C2EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2EB0u;
    // 0x3c2eb4: 0xafa20470  sw          $v0, 0x470($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3C2EB0u, 0x3C2EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2EB8u;
label_3c2eb8:
    // 0x3c2eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c2ebc:
    // 0x3c2ebc: 0xc0f15bc  jal         func_3C56F0
label_3c2ec0:
    if (ctx->pc == 0x3C2EC0u) {
        ctx->pc = 0x3C2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2EBCu;
        // 0x3c2ec0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2EC4u;
        goto label_3c2ec4;
    }
    ctx->pc = 0x3C2EBCu;
    SET_GPR_U32(ctx, 31, 0x3C2EC4u);
    ctx->pc = 0x3C2EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2EBCu;
    // 0x3c2ec0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C2EBCu, 0x3C2EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2EC4u;
label_3c2ec4:
    // 0x3c2ec4: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3c2ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c2ec8:
    // 0x3c2ec8: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x3c2ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
label_3c2ecc:
    // 0x3c2ecc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c2eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c2ed0:
    // 0x3c2ed0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3c2ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3c2ed4:
    // 0x3c2ed4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3c2ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3c2ed8:
    // 0x3c2ed8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c2ed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c2edc:
    // 0x3c2edc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3c2edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3c2ee0:
    // 0x3c2ee0: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x3c2ee0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c2ee4:
    // 0x3c2ee4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c2ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c2ee8:
    // 0x3c2ee8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3c2ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3c2eec:
    // 0x3c2eec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3c2eecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c2ef0:
    // 0x3c2ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c2ef4:
    // 0x3c2ef4: 0x0  nop
    ctx->pc = 0x3c2ef4u;
    // NOP
label_3c2ef8:
    // 0x3c2ef8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3c2ef8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3c2efc:
    // 0x3c2efc: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3c2efcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3c2f00:
    // 0x3c2f00: 0xc0cd518  jal         func_335460
label_3c2f04:
    if (ctx->pc == 0x3C2F04u) {
        ctx->pc = 0x3C2F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2F00u;
        // 0x3c2f04: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2F08u;
        goto label_3c2f08;
    }
    ctx->pc = 0x3C2F00u;
    SET_GPR_U32(ctx, 31, 0x3C2F08u);
    ctx->pc = 0x3C2F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2F00u;
    // 0x3c2f04: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C2F00u, 0x3C2F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2F08u;
label_3c2f08:
    // 0x3c2f08: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3c2f08u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3c2f0c:
    // 0x3c2f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c2f10:
    // 0x3c2f10: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3c2f10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3c2f14:
    // 0x3c2f14: 0xc0cd518  jal         func_335460
label_3c2f18:
    if (ctx->pc == 0x3C2F18u) {
        ctx->pc = 0x3C2F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2F14u;
        // 0x3c2f18: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2F1Cu;
        goto label_3c2f1c;
    }
    ctx->pc = 0x3C2F14u;
    SET_GPR_U32(ctx, 31, 0x3C2F1Cu);
    ctx->pc = 0x3C2F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2F14u;
    // 0x3c2f18: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C2F14u, 0x3C2F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2F1Cu;
label_3c2f1c:
    // 0x3c2f1c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c2f1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c2f20:
    // 0x3c2f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c2f24:
    // 0x3c2f24: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3c2f24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3c2f28:
    // 0x3c2f28: 0xc0cd518  jal         func_335460
label_3c2f2c:
    if (ctx->pc == 0x3C2F2Cu) {
        ctx->pc = 0x3C2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2F28u;
        // 0x3c2f2c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2F30u;
        goto label_3c2f30;
    }
    ctx->pc = 0x3C2F28u;
    SET_GPR_U32(ctx, 31, 0x3C2F30u);
    ctx->pc = 0x3C2F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2F28u;
    // 0x3c2f2c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C2F28u, 0x3C2F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2F30u;
label_3c2f30:
    // 0x3c2f30: 0x8fa204f4  lw          $v0, 0x4F4($sp)
    ctx->pc = 0x3c2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1268)));
label_3c2f34:
    // 0x3c2f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c2f38:
    // 0x3c2f38: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x3c2f38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3c2f3c:
    // 0x3c2f3c: 0xe7b40054  swc1        $f20, 0x54($sp)
    ctx->pc = 0x3c2f3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3c2f40:
    // 0x3c2f40: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3c2f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3c2f44:
    // 0x3c2f44: 0xe458000c  swc1        $f24, 0xC($v0)
    ctx->pc = 0x3c2f44u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3c2f48:
    // 0x3c2f48: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3c2f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_3c2f4c:
    // 0x3c2f4c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3c2f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3c2f50:
    // 0x3c2f50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c2f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c2f54:
    // 0x3c2f54: 0x7ba50050  lq          $a1, 0x50($sp)
    ctx->pc = 0x3c2f54u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c2f58:
    // 0x3c2f58: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x3c2f58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3c2f5c:
    // 0x3c2f5c: 0x48b11000  qmtc2.ni    $s1, $vf2
    ctx->pc = 0x3c2f5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
label_3c2f60:
    // 0x3c2f60: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3c2f60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3c2f64:
    // 0x3c2f64: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3c2f64u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3c2f68:
    // 0x3c2f68: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3c2f68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c2f6c:
    // 0x3c2f6c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3c2f6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c2f70:
    // 0x3c2f70: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3c2f70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c2f74:
    // 0x3c2f74: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3c2f74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c2f78:
    // 0x3c2f78: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3c2f78u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3c2f7c:
    // 0x3c2f7c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3c2f7cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3c2f80:
    // 0x3c2f80: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x3c2f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_3c2f84:
    // 0x3c2f84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c2f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c2f88:
    // 0x3c2f88: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c2f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c2f8c:
    // 0x3c2f8c: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x3c2f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
label_3c2f90:
    // 0x3c2f90: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3c2f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3c2f94:
    // 0x3c2f94: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3c2f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3c2f98:
    // 0x3c2f98: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3c2f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3c2f9c:
    // 0x3c2f9c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3c2f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3c2fa0:
    // 0x3c2fa0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c2fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c2fa4:
    // 0x3c2fa4: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3c2fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3c2fa8:
    // 0x3c2fa8: 0x7fa30460  sq          $v1, 0x460($sp)
    ctx->pc = 0x3c2fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
label_3c2fac:
    // 0x3c2fac: 0xc0cd518  jal         func_335460
label_3c2fb0:
    if (ctx->pc == 0x3C2FB0u) {
        ctx->pc = 0x3C2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2FACu;
        // 0x3c2fb0: 0x7fa30450  sq          $v1, 0x450($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2FB4u;
        goto label_3c2fb4;
    }
    ctx->pc = 0x3C2FACu;
    SET_GPR_U32(ctx, 31, 0x3C2FB4u);
    ctx->pc = 0x3C2FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2FACu;
    // 0x3c2fb0: 0x7fa30450  sq          $v1, 0x450($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C2FACu, 0x3C2FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2FB4u;
label_3c2fb4:
    // 0x3c2fb4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c2fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c2fb8:
    // 0x3c2fb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c2fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c2fbc:
    // 0x3c2fbc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c2fbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c2fc0:
    // 0x3c2fc0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3c2fc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c2fc4:
    // 0x3c2fc4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3c2fc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c2fc8:
    // 0x3c2fc8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3c2fc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3c2fcc:
    // 0x3c2fcc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3c2fccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3c2fd0:
    // 0x3c2fd0: 0x8fa504f8  lw          $a1, 0x4F8($sp)
    ctx->pc = 0x3c2fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1272)));
label_3c2fd4:
    // 0x3c2fd4: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3c2fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3c2fd8:
    // 0x3c2fd8: 0x7fa20490  sq          $v0, 0x490($sp)
    ctx->pc = 0x3c2fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
label_3c2fdc:
    // 0x3c2fdc: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c2fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c2fe0:
    // 0x3c2fe0: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3c2fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3c2fe4:
    // 0x3c2fe4: 0xafb10480  sw          $s1, 0x480($sp)
    ctx->pc = 0x3c2fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 17));
label_3c2fe8:
    // 0x3c2fe8: 0x8fa604e0  lw          $a2, 0x4E0($sp)
    ctx->pc = 0x3c2fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1248)));
label_3c2fec:
    // 0x3c2fec: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3c2fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3c2ff0:
    // 0x3c2ff0: 0x8fa704e4  lw          $a3, 0x4E4($sp)
    ctx->pc = 0x3c2ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1252)));
label_3c2ff4:
    // 0x3c2ff4: 0x8fa804e8  lw          $t0, 0x4E8($sp)
    ctx->pc = 0x3c2ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1256)));
label_3c2ff8:
    // 0x3c2ff8: 0x8fa904ec  lw          $t1, 0x4EC($sp)
    ctx->pc = 0x3c2ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1260)));
label_3c2ffc:
    // 0x3c2ffc: 0xafa30490  sw          $v1, 0x490($sp)
    ctx->pc = 0x3c2ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 3));
label_3c3000:
    // 0x3c3000: 0xc0ea004  jal         func_3A8010
label_3c3004:
    if (ctx->pc == 0x3C3004u) {
        ctx->pc = 0x3C3004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3000u;
        // 0x3c3004: 0xafa004a0  sw          $zero, 0x4A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3008u;
        goto label_3c3008;
    }
    ctx->pc = 0x3C3000u;
    SET_GPR_U32(ctx, 31, 0x3C3008u);
    ctx->pc = 0x3C3004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3000u;
    // 0x3c3004: 0xafa004a0  sw          $zero, 0x4A0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3C3000u, 0x3C3008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3008u;
label_3c3008:
    // 0x3c3008: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3c3008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3c300c:
    // 0x3c300c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c300cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c3010:
    // 0x3c3010: 0xc0f15bc  jal         func_3C56F0
label_3c3014:
    if (ctx->pc == 0x3C3014u) {
        ctx->pc = 0x3C3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3010u;
        // 0x3c3014: 0x24442d10  addiu       $a0, $v0, 0x2D10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3018u;
        goto label_3c3018;
    }
    ctx->pc = 0x3C3010u;
    SET_GPR_U32(ctx, 31, 0x3C3018u);
    ctx->pc = 0x3C3014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3010u;
    // 0x3c3014: 0x24442d10  addiu       $a0, $v0, 0x2D10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C3010u, 0x3C3018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3018u;
label_3c3018:
    // 0x3c3018: 0x2e630002  sltiu       $v1, $s3, 0x2
    ctx->pc = 0x3c3018u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3c301c:
    // 0x3c301c: 0x5460ffb6  bnel        $v1, $zero, . + 4 + (-0x4A << 2)
label_3c3020:
    if (ctx->pc == 0x3C3020u) {
        ctx->pc = 0x3C3020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C301Cu;
        // 0x3c3020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3024u;
        goto label_3c3024;
    }
    ctx->pc = 0x3C301Cu;
    {
        const bool branch_taken_0x3c301c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c301c) {
            ctx->pc = 0x3C3020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C301Cu;
            // 0x3c3020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2ef8;
        }
    }
    ctx->pc = 0x3C3024u;
label_3c3024:
    // 0x3c3024: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c3024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c3028:
    // 0x3c3028: 0x7bb005a0  lq          $s0, 0x5A0($sp)
    ctx->pc = 0x3c3028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1440)));
label_3c302c:
    // 0x3c302c: 0x7bb10590  lq          $s1, 0x590($sp)
    ctx->pc = 0x3c302cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
label_3c3030:
    // 0x3c3030: 0x7bb20580  lq          $s2, 0x580($sp)
    ctx->pc = 0x3c3030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
label_3c3034:
    // 0x3c3034: 0x7bb30570  lq          $s3, 0x570($sp)
    ctx->pc = 0x3c3034u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
label_3c3038:
    // 0x3c3038: 0x7bb40560  lq          $s4, 0x560($sp)
    ctx->pc = 0x3c3038u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
label_3c303c:
    // 0x3c303c: 0x7bb50550  lq          $s5, 0x550($sp)
    ctx->pc = 0x3c303cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_3c3040:
    // 0x3c3040: 0x7bb60540  lq          $s6, 0x540($sp)
    ctx->pc = 0x3c3040u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_3c3044:
    // 0x3c3044: 0x7bb70530  lq          $s7, 0x530($sp)
    ctx->pc = 0x3c3044u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_3c3048:
    // 0x3c3048: 0x7bbe0520  lq          $fp, 0x520($sp)
    ctx->pc = 0x3c3048u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_3c304c:
    // 0x3c304c: 0xdfbf0510  ld          $ra, 0x510($sp)
    ctx->pc = 0x3c304cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1296)));
label_3c3050:
    // 0x3c3050: 0xc7ba05e0  lwc1        $f26, 0x5E0($sp)
    ctx->pc = 0x3c3050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3c3054:
    // 0x3c3054: 0xc7b905d8  lwc1        $f25, 0x5D8($sp)
    ctx->pc = 0x3c3054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3c3058:
    // 0x3c3058: 0xc7b805d0  lwc1        $f24, 0x5D0($sp)
    ctx->pc = 0x3c3058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3c305c:
    // 0x3c305c: 0xc7b705c8  lwc1        $f23, 0x5C8($sp)
    ctx->pc = 0x3c305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3c3060:
    // 0x3c3060: 0xc7b605c0  lwc1        $f22, 0x5C0($sp)
    ctx->pc = 0x3c3060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c3064:
    // 0x3c3064: 0xc7b505b8  lwc1        $f21, 0x5B8($sp)
    ctx->pc = 0x3c3064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c3068:
    // 0x3c3068: 0xc7b405b0  lwc1        $f20, 0x5B0($sp)
    ctx->pc = 0x3c3068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c306c:
    // 0x3c306c: 0x3e00008  jr          $ra
label_3c3070:
    if (ctx->pc == 0x3C3070u) {
        ctx->pc = 0x3C3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C306Cu;
        // 0x3c3070: 0x27bd05f0  addiu       $sp, $sp, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3074u;
        goto label_3c3074;
    }
    ctx->pc = 0x3C306Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C306Cu;
        // 0x3c3070: 0x27bd05f0  addiu       $sp, $sp, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1520));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C306Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C3074u;
label_3c3074:
    // 0x3c3074: 0x0  nop
    ctx->pc = 0x3c3074u;
    // NOP
    ctx->pc = 0x3c3078u;
}
