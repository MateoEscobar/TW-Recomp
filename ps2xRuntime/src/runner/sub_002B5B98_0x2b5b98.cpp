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

// Function: sub_002B5B98
// Address: 0x2b5b98 - 0x2b60b0
void sub_002B5B98_0x2b5b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5B98_0x2b5b98");
#endif

    switch (ctx->pc) {
        case 0x2b5b98u: goto label_2b5b98;
        case 0x2b5b9cu: goto label_2b5b9c;
        case 0x2b5ba0u: goto label_2b5ba0;
        case 0x2b5ba4u: goto label_2b5ba4;
        case 0x2b5ba8u: goto label_2b5ba8;
        case 0x2b5bacu: goto label_2b5bac;
        case 0x2b5bb0u: goto label_2b5bb0;
        case 0x2b5bb4u: goto label_2b5bb4;
        case 0x2b5bb8u: goto label_2b5bb8;
        case 0x2b5bbcu: goto label_2b5bbc;
        case 0x2b5bc0u: goto label_2b5bc0;
        case 0x2b5bc4u: goto label_2b5bc4;
        case 0x2b5bc8u: goto label_2b5bc8;
        case 0x2b5bccu: goto label_2b5bcc;
        case 0x2b5bd0u: goto label_2b5bd0;
        case 0x2b5bd4u: goto label_2b5bd4;
        case 0x2b5bd8u: goto label_2b5bd8;
        case 0x2b5bdcu: goto label_2b5bdc;
        case 0x2b5be0u: goto label_2b5be0;
        case 0x2b5be4u: goto label_2b5be4;
        case 0x2b5be8u: goto label_2b5be8;
        case 0x2b5becu: goto label_2b5bec;
        case 0x2b5bf0u: goto label_2b5bf0;
        case 0x2b5bf4u: goto label_2b5bf4;
        case 0x2b5bf8u: goto label_2b5bf8;
        case 0x2b5bfcu: goto label_2b5bfc;
        case 0x2b5c00u: goto label_2b5c00;
        case 0x2b5c04u: goto label_2b5c04;
        case 0x2b5c08u: goto label_2b5c08;
        case 0x2b5c0cu: goto label_2b5c0c;
        case 0x2b5c10u: goto label_2b5c10;
        case 0x2b5c14u: goto label_2b5c14;
        case 0x2b5c18u: goto label_2b5c18;
        case 0x2b5c1cu: goto label_2b5c1c;
        case 0x2b5c20u: goto label_2b5c20;
        case 0x2b5c24u: goto label_2b5c24;
        case 0x2b5c28u: goto label_2b5c28;
        case 0x2b5c2cu: goto label_2b5c2c;
        case 0x2b5c30u: goto label_2b5c30;
        case 0x2b5c34u: goto label_2b5c34;
        case 0x2b5c38u: goto label_2b5c38;
        case 0x2b5c3cu: goto label_2b5c3c;
        case 0x2b5c40u: goto label_2b5c40;
        case 0x2b5c44u: goto label_2b5c44;
        case 0x2b5c48u: goto label_2b5c48;
        case 0x2b5c4cu: goto label_2b5c4c;
        case 0x2b5c50u: goto label_2b5c50;
        case 0x2b5c54u: goto label_2b5c54;
        case 0x2b5c58u: goto label_2b5c58;
        case 0x2b5c5cu: goto label_2b5c5c;
        case 0x2b5c60u: goto label_2b5c60;
        case 0x2b5c64u: goto label_2b5c64;
        case 0x2b5c68u: goto label_2b5c68;
        case 0x2b5c6cu: goto label_2b5c6c;
        case 0x2b5c70u: goto label_2b5c70;
        case 0x2b5c74u: goto label_2b5c74;
        case 0x2b5c78u: goto label_2b5c78;
        case 0x2b5c7cu: goto label_2b5c7c;
        case 0x2b5c80u: goto label_2b5c80;
        case 0x2b5c84u: goto label_2b5c84;
        case 0x2b5c88u: goto label_2b5c88;
        case 0x2b5c8cu: goto label_2b5c8c;
        case 0x2b5c90u: goto label_2b5c90;
        case 0x2b5c94u: goto label_2b5c94;
        case 0x2b5c98u: goto label_2b5c98;
        case 0x2b5c9cu: goto label_2b5c9c;
        case 0x2b5ca0u: goto label_2b5ca0;
        case 0x2b5ca4u: goto label_2b5ca4;
        case 0x2b5ca8u: goto label_2b5ca8;
        case 0x2b5cacu: goto label_2b5cac;
        case 0x2b5cb0u: goto label_2b5cb0;
        case 0x2b5cb4u: goto label_2b5cb4;
        case 0x2b5cb8u: goto label_2b5cb8;
        case 0x2b5cbcu: goto label_2b5cbc;
        case 0x2b5cc0u: goto label_2b5cc0;
        case 0x2b5cc4u: goto label_2b5cc4;
        case 0x2b5cc8u: goto label_2b5cc8;
        case 0x2b5cccu: goto label_2b5ccc;
        case 0x2b5cd0u: goto label_2b5cd0;
        case 0x2b5cd4u: goto label_2b5cd4;
        case 0x2b5cd8u: goto label_2b5cd8;
        case 0x2b5cdcu: goto label_2b5cdc;
        case 0x2b5ce0u: goto label_2b5ce0;
        case 0x2b5ce4u: goto label_2b5ce4;
        case 0x2b5ce8u: goto label_2b5ce8;
        case 0x2b5cecu: goto label_2b5cec;
        case 0x2b5cf0u: goto label_2b5cf0;
        case 0x2b5cf4u: goto label_2b5cf4;
        case 0x2b5cf8u: goto label_2b5cf8;
        case 0x2b5cfcu: goto label_2b5cfc;
        case 0x2b5d00u: goto label_2b5d00;
        case 0x2b5d04u: goto label_2b5d04;
        case 0x2b5d08u: goto label_2b5d08;
        case 0x2b5d0cu: goto label_2b5d0c;
        case 0x2b5d10u: goto label_2b5d10;
        case 0x2b5d14u: goto label_2b5d14;
        case 0x2b5d18u: goto label_2b5d18;
        case 0x2b5d1cu: goto label_2b5d1c;
        case 0x2b5d20u: goto label_2b5d20;
        case 0x2b5d24u: goto label_2b5d24;
        case 0x2b5d28u: goto label_2b5d28;
        case 0x2b5d2cu: goto label_2b5d2c;
        case 0x2b5d30u: goto label_2b5d30;
        case 0x2b5d34u: goto label_2b5d34;
        case 0x2b5d38u: goto label_2b5d38;
        case 0x2b5d3cu: goto label_2b5d3c;
        case 0x2b5d40u: goto label_2b5d40;
        case 0x2b5d44u: goto label_2b5d44;
        case 0x2b5d48u: goto label_2b5d48;
        case 0x2b5d4cu: goto label_2b5d4c;
        case 0x2b5d50u: goto label_2b5d50;
        case 0x2b5d54u: goto label_2b5d54;
        case 0x2b5d58u: goto label_2b5d58;
        case 0x2b5d5cu: goto label_2b5d5c;
        case 0x2b5d60u: goto label_2b5d60;
        case 0x2b5d64u: goto label_2b5d64;
        case 0x2b5d68u: goto label_2b5d68;
        case 0x2b5d6cu: goto label_2b5d6c;
        case 0x2b5d70u: goto label_2b5d70;
        case 0x2b5d74u: goto label_2b5d74;
        case 0x2b5d78u: goto label_2b5d78;
        case 0x2b5d7cu: goto label_2b5d7c;
        case 0x2b5d80u: goto label_2b5d80;
        case 0x2b5d84u: goto label_2b5d84;
        case 0x2b5d88u: goto label_2b5d88;
        case 0x2b5d8cu: goto label_2b5d8c;
        case 0x2b5d90u: goto label_2b5d90;
        case 0x2b5d94u: goto label_2b5d94;
        case 0x2b5d98u: goto label_2b5d98;
        case 0x2b5d9cu: goto label_2b5d9c;
        case 0x2b5da0u: goto label_2b5da0;
        case 0x2b5da4u: goto label_2b5da4;
        case 0x2b5da8u: goto label_2b5da8;
        case 0x2b5dacu: goto label_2b5dac;
        case 0x2b5db0u: goto label_2b5db0;
        case 0x2b5db4u: goto label_2b5db4;
        case 0x2b5db8u: goto label_2b5db8;
        case 0x2b5dbcu: goto label_2b5dbc;
        case 0x2b5dc0u: goto label_2b5dc0;
        case 0x2b5dc4u: goto label_2b5dc4;
        case 0x2b5dc8u: goto label_2b5dc8;
        case 0x2b5dccu: goto label_2b5dcc;
        case 0x2b5dd0u: goto label_2b5dd0;
        case 0x2b5dd4u: goto label_2b5dd4;
        case 0x2b5dd8u: goto label_2b5dd8;
        case 0x2b5ddcu: goto label_2b5ddc;
        case 0x2b5de0u: goto label_2b5de0;
        case 0x2b5de4u: goto label_2b5de4;
        case 0x2b5de8u: goto label_2b5de8;
        case 0x2b5decu: goto label_2b5dec;
        case 0x2b5df0u: goto label_2b5df0;
        case 0x2b5df4u: goto label_2b5df4;
        case 0x2b5df8u: goto label_2b5df8;
        case 0x2b5dfcu: goto label_2b5dfc;
        case 0x2b5e00u: goto label_2b5e00;
        case 0x2b5e04u: goto label_2b5e04;
        case 0x2b5e08u: goto label_2b5e08;
        case 0x2b5e0cu: goto label_2b5e0c;
        case 0x2b5e10u: goto label_2b5e10;
        case 0x2b5e14u: goto label_2b5e14;
        case 0x2b5e18u: goto label_2b5e18;
        case 0x2b5e1cu: goto label_2b5e1c;
        case 0x2b5e20u: goto label_2b5e20;
        case 0x2b5e24u: goto label_2b5e24;
        case 0x2b5e28u: goto label_2b5e28;
        case 0x2b5e2cu: goto label_2b5e2c;
        case 0x2b5e30u: goto label_2b5e30;
        case 0x2b5e34u: goto label_2b5e34;
        case 0x2b5e38u: goto label_2b5e38;
        case 0x2b5e3cu: goto label_2b5e3c;
        case 0x2b5e40u: goto label_2b5e40;
        case 0x2b5e44u: goto label_2b5e44;
        case 0x2b5e48u: goto label_2b5e48;
        case 0x2b5e4cu: goto label_2b5e4c;
        case 0x2b5e50u: goto label_2b5e50;
        case 0x2b5e54u: goto label_2b5e54;
        case 0x2b5e58u: goto label_2b5e58;
        case 0x2b5e5cu: goto label_2b5e5c;
        case 0x2b5e60u: goto label_2b5e60;
        case 0x2b5e64u: goto label_2b5e64;
        case 0x2b5e68u: goto label_2b5e68;
        case 0x2b5e6cu: goto label_2b5e6c;
        case 0x2b5e70u: goto label_2b5e70;
        case 0x2b5e74u: goto label_2b5e74;
        case 0x2b5e78u: goto label_2b5e78;
        case 0x2b5e7cu: goto label_2b5e7c;
        case 0x2b5e80u: goto label_2b5e80;
        case 0x2b5e84u: goto label_2b5e84;
        case 0x2b5e88u: goto label_2b5e88;
        case 0x2b5e8cu: goto label_2b5e8c;
        case 0x2b5e90u: goto label_2b5e90;
        case 0x2b5e94u: goto label_2b5e94;
        case 0x2b5e98u: goto label_2b5e98;
        case 0x2b5e9cu: goto label_2b5e9c;
        case 0x2b5ea0u: goto label_2b5ea0;
        case 0x2b5ea4u: goto label_2b5ea4;
        case 0x2b5ea8u: goto label_2b5ea8;
        case 0x2b5eacu: goto label_2b5eac;
        case 0x2b5eb0u: goto label_2b5eb0;
        case 0x2b5eb4u: goto label_2b5eb4;
        case 0x2b5eb8u: goto label_2b5eb8;
        case 0x2b5ebcu: goto label_2b5ebc;
        case 0x2b5ec0u: goto label_2b5ec0;
        case 0x2b5ec4u: goto label_2b5ec4;
        case 0x2b5ec8u: goto label_2b5ec8;
        case 0x2b5eccu: goto label_2b5ecc;
        case 0x2b5ed0u: goto label_2b5ed0;
        case 0x2b5ed4u: goto label_2b5ed4;
        case 0x2b5ed8u: goto label_2b5ed8;
        case 0x2b5edcu: goto label_2b5edc;
        case 0x2b5ee0u: goto label_2b5ee0;
        case 0x2b5ee4u: goto label_2b5ee4;
        case 0x2b5ee8u: goto label_2b5ee8;
        case 0x2b5eecu: goto label_2b5eec;
        case 0x2b5ef0u: goto label_2b5ef0;
        case 0x2b5ef4u: goto label_2b5ef4;
        case 0x2b5ef8u: goto label_2b5ef8;
        case 0x2b5efcu: goto label_2b5efc;
        case 0x2b5f00u: goto label_2b5f00;
        case 0x2b5f04u: goto label_2b5f04;
        case 0x2b5f08u: goto label_2b5f08;
        case 0x2b5f0cu: goto label_2b5f0c;
        case 0x2b5f10u: goto label_2b5f10;
        case 0x2b5f14u: goto label_2b5f14;
        case 0x2b5f18u: goto label_2b5f18;
        case 0x2b5f1cu: goto label_2b5f1c;
        case 0x2b5f20u: goto label_2b5f20;
        case 0x2b5f24u: goto label_2b5f24;
        case 0x2b5f28u: goto label_2b5f28;
        case 0x2b5f2cu: goto label_2b5f2c;
        case 0x2b5f30u: goto label_2b5f30;
        case 0x2b5f34u: goto label_2b5f34;
        case 0x2b5f38u: goto label_2b5f38;
        case 0x2b5f3cu: goto label_2b5f3c;
        case 0x2b5f40u: goto label_2b5f40;
        case 0x2b5f44u: goto label_2b5f44;
        case 0x2b5f48u: goto label_2b5f48;
        case 0x2b5f4cu: goto label_2b5f4c;
        case 0x2b5f50u: goto label_2b5f50;
        case 0x2b5f54u: goto label_2b5f54;
        case 0x2b5f58u: goto label_2b5f58;
        case 0x2b5f5cu: goto label_2b5f5c;
        case 0x2b5f60u: goto label_2b5f60;
        case 0x2b5f64u: goto label_2b5f64;
        case 0x2b5f68u: goto label_2b5f68;
        case 0x2b5f6cu: goto label_2b5f6c;
        case 0x2b5f70u: goto label_2b5f70;
        case 0x2b5f74u: goto label_2b5f74;
        case 0x2b5f78u: goto label_2b5f78;
        case 0x2b5f7cu: goto label_2b5f7c;
        case 0x2b5f80u: goto label_2b5f80;
        case 0x2b5f84u: goto label_2b5f84;
        case 0x2b5f88u: goto label_2b5f88;
        case 0x2b5f8cu: goto label_2b5f8c;
        case 0x2b5f90u: goto label_2b5f90;
        case 0x2b5f94u: goto label_2b5f94;
        case 0x2b5f98u: goto label_2b5f98;
        case 0x2b5f9cu: goto label_2b5f9c;
        case 0x2b5fa0u: goto label_2b5fa0;
        case 0x2b5fa4u: goto label_2b5fa4;
        case 0x2b5fa8u: goto label_2b5fa8;
        case 0x2b5facu: goto label_2b5fac;
        case 0x2b5fb0u: goto label_2b5fb0;
        case 0x2b5fb4u: goto label_2b5fb4;
        case 0x2b5fb8u: goto label_2b5fb8;
        case 0x2b5fbcu: goto label_2b5fbc;
        case 0x2b5fc0u: goto label_2b5fc0;
        case 0x2b5fc4u: goto label_2b5fc4;
        case 0x2b5fc8u: goto label_2b5fc8;
        case 0x2b5fccu: goto label_2b5fcc;
        case 0x2b5fd0u: goto label_2b5fd0;
        case 0x2b5fd4u: goto label_2b5fd4;
        case 0x2b5fd8u: goto label_2b5fd8;
        case 0x2b5fdcu: goto label_2b5fdc;
        case 0x2b5fe0u: goto label_2b5fe0;
        case 0x2b5fe4u: goto label_2b5fe4;
        case 0x2b5fe8u: goto label_2b5fe8;
        case 0x2b5fecu: goto label_2b5fec;
        case 0x2b5ff0u: goto label_2b5ff0;
        case 0x2b5ff4u: goto label_2b5ff4;
        case 0x2b5ff8u: goto label_2b5ff8;
        case 0x2b5ffcu: goto label_2b5ffc;
        case 0x2b6000u: goto label_2b6000;
        case 0x2b6004u: goto label_2b6004;
        case 0x2b6008u: goto label_2b6008;
        case 0x2b600cu: goto label_2b600c;
        case 0x2b6010u: goto label_2b6010;
        case 0x2b6014u: goto label_2b6014;
        case 0x2b6018u: goto label_2b6018;
        case 0x2b601cu: goto label_2b601c;
        case 0x2b6020u: goto label_2b6020;
        case 0x2b6024u: goto label_2b6024;
        case 0x2b6028u: goto label_2b6028;
        case 0x2b602cu: goto label_2b602c;
        case 0x2b6030u: goto label_2b6030;
        case 0x2b6034u: goto label_2b6034;
        case 0x2b6038u: goto label_2b6038;
        case 0x2b603cu: goto label_2b603c;
        case 0x2b6040u: goto label_2b6040;
        case 0x2b6044u: goto label_2b6044;
        case 0x2b6048u: goto label_2b6048;
        case 0x2b604cu: goto label_2b604c;
        case 0x2b6050u: goto label_2b6050;
        case 0x2b6054u: goto label_2b6054;
        case 0x2b6058u: goto label_2b6058;
        case 0x2b605cu: goto label_2b605c;
        case 0x2b6060u: goto label_2b6060;
        case 0x2b6064u: goto label_2b6064;
        case 0x2b6068u: goto label_2b6068;
        case 0x2b606cu: goto label_2b606c;
        case 0x2b6070u: goto label_2b6070;
        case 0x2b6074u: goto label_2b6074;
        case 0x2b6078u: goto label_2b6078;
        case 0x2b607cu: goto label_2b607c;
        case 0x2b6080u: goto label_2b6080;
        case 0x2b6084u: goto label_2b6084;
        case 0x2b6088u: goto label_2b6088;
        case 0x2b608cu: goto label_2b608c;
        case 0x2b6090u: goto label_2b6090;
        case 0x2b6094u: goto label_2b6094;
        case 0x2b6098u: goto label_2b6098;
        case 0x2b609cu: goto label_2b609c;
        case 0x2b60a0u: goto label_2b60a0;
        case 0x2b60a4u: goto label_2b60a4;
        case 0x2b60a8u: goto label_2b60a8;
        case 0x2b60acu: goto label_2b60ac;
        default: break;
    }

    ctx->pc = 0x2b5b98u;

label_2b5b98:
    // 0x2b5b98: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2b5b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2b5b9c:
    // 0x2b5b9c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2b5b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_2b5ba0:
    // 0x2b5ba0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2b5ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_2b5ba4:
    // 0x2b5ba4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2b5ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_2b5ba8:
    // 0x2b5ba8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b5bac:
    // 0x2b5bac: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2b5bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_2b5bb0:
    // 0x2b5bb0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2b5bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_2b5bb4:
    // 0x2b5bb4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2b5bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_2b5bb8:
    // 0x2b5bb8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2b5bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2b5bbc:
    // 0x2b5bbc: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2b5bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_2b5bc0:
    // 0x2b5bc0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x2b5bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_2b5bc4:
    // 0x2b5bc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b5bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2b5bc8:
    // 0x2b5bc8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5bcc:
    // 0x2b5bcc: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x2b5bccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b5bd0:
    // 0x2b5bd0: 0xc0e409a  jal         func_390268
label_2b5bd4:
    if (ctx->pc == 0x2B5BD4u) {
        ctx->pc = 0x2B5BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BD0u;
        // 0x2b5bd4: 0x26a400c4  addiu       $a0, $s5, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5BD8u;
        goto label_2b5bd8;
    }
    ctx->pc = 0x2B5BD0u;
    SET_GPR_U32(ctx, 31, 0x2B5BD8u);
    ctx->pc = 0x2B5BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5BD0u;
    // 0x2b5bd4: 0x26a400c4  addiu       $a0, $s5, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B5BD0u, 0x2B5BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5BD8u;
label_2b5bd8:
    // 0x2b5bd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5bdc:
    // 0x2b5bdc: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_2b5be0:
    if (ctx->pc == 0x2B5BE0u) {
        ctx->pc = 0x2B5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BDCu;
        // 0x2b5be0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5BE4u;
        goto label_2b5be4;
    }
    ctx->pc = 0x2B5BDCu;
    {
        const bool branch_taken_0x2b5bdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5bdc) {
            ctx->pc = 0x2B5BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5BDCu;
            // 0x2b5be0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5BF4u;
            goto label_2b5bf4;
        }
    }
    ctx->pc = 0x2B5BE4u;
label_2b5be4:
    // 0x2b5be4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b5be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2b5be8:
    // 0x2b5be8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b5be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b5bec:
    // 0x2b5bec: 0x10000124  b           . + 4 + (0x124 << 2)
label_2b5bf0:
    if (ctx->pc == 0x2B5BF0u) {
        ctx->pc = 0x2B5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BECu;
        // 0x2b5bf0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5BF4u;
        goto label_2b5bf4;
    }
    ctx->pc = 0x2B5BECu;
    {
        const bool branch_taken_0x2b5bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BECu;
        // 0x2b5bf0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5bec) {
            ctx->pc = 0x2B6080u;
            goto label_2b6080;
        }
    }
    ctx->pc = 0x2B5BF4u;
label_2b5bf4:
    // 0x2b5bf4: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2b5bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2b5bf8:
    // 0x2b5bf8: 0xc0a3fa4  jal         func_28FE90
label_2b5bfc:
    if (ctx->pc == 0x2B5BFCu) {
        ctx->pc = 0x2B5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BF8u;
        // 0x2b5bfc: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5C00u;
        goto label_2b5c00;
    }
    ctx->pc = 0x2B5BF8u;
    SET_GPR_U32(ctx, 31, 0x2B5C00u);
    ctx->pc = 0x2B5BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5BF8u;
    // 0x2b5bfc: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2B5BF8u, 0x2B5C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C00u;
label_2b5c00:
    // 0x2b5c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5c04:
    // 0x2b5c04: 0xc087502  jal         func_21D408
label_2b5c08:
    if (ctx->pc == 0x2B5C08u) {
        ctx->pc = 0x2B5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C04u;
        // 0x2b5c08: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5C0Cu;
        goto label_2b5c0c;
    }
    ctx->pc = 0x2B5C04u;
    SET_GPR_U32(ctx, 31, 0x2B5C0Cu);
    ctx->pc = 0x2B5C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C04u;
    // 0x2b5c08: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B5C04u, 0x2B5C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C0Cu;
label_2b5c0c:
    // 0x2b5c0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b5c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5c10:
    // 0x2b5c10: 0xc0a3fa4  jal         func_28FE90
label_2b5c14:
    if (ctx->pc == 0x2B5C14u) {
        ctx->pc = 0x2B5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C10u;
        // 0x2b5c14: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5C18u;
        goto label_2b5c18;
    }
    ctx->pc = 0x2B5C10u;
    SET_GPR_U32(ctx, 31, 0x2B5C18u);
    ctx->pc = 0x2B5C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C10u;
    // 0x2b5c14: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2B5C10u, 0x2B5C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C18u;
label_2b5c18:
    // 0x2b5c18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b5c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5c1c:
    // 0x2b5c1c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b5c1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5c20:
    // 0x2b5c20: 0xc0a3658  jal         func_28D960
label_2b5c24:
    if (ctx->pc == 0x2B5C24u) {
        ctx->pc = 0x2B5C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C20u;
        // 0x2b5c24: 0x2405007d  addiu       $a1, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5C28u;
        goto label_2b5c28;
    }
    ctx->pc = 0x2B5C20u;
    SET_GPR_U32(ctx, 31, 0x2B5C28u);
    ctx->pc = 0x2B5C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C20u;
    // 0x2b5c24: 0x2405007d  addiu       $a1, $zero, 0x7D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2B5C20u, 0x2B5C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C28u;
label_2b5c28:
    // 0x2b5c28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b5c28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5c2c:
    // 0x2b5c2c: 0x460002e  bltz        $v1, . + 4 + (0x2E << 2)
label_2b5c30:
    if (ctx->pc == 0x2B5C30u) {
        ctx->pc = 0x2B5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C2Cu;
        // 0x2b5c30: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5C34u;
        goto label_2b5c34;
    }
    ctx->pc = 0x2B5C2Cu;
    {
        const bool branch_taken_0x2b5c2c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2B5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C2Cu;
        // 0x2b5c30: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c2c) {
            ctx->pc = 0x2B5CE8u;
            goto label_2b5ce8;
        }
    }
    ctx->pc = 0x2B5C34u;
label_2b5c34:
    // 0x2b5c34: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b5c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5c38:
    // 0x2b5c38: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x2b5c38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
label_2b5c3c:
    // 0x2b5c3c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2b5c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2b5c40:
    // 0x2b5c40: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2b5c44:
    if (ctx->pc == 0x2B5C44u) {
        ctx->pc = 0x2B5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C40u;
        // 0x2b5c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5C48u;
        goto label_2b5c48;
    }
    ctx->pc = 0x2B5C40u;
    {
        const bool branch_taken_0x2b5c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5c40) {
            ctx->pc = 0x2B5C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5C40u;
            // 0x2b5c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5C54u;
            goto label_2b5c54;
        }
    }
    ctx->pc = 0x2B5C48u;
label_2b5c48:
    // 0x2b5c48: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b5c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b5c4c:
    // 0x2b5c4c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2b5c50:
    // 0x2b5c50: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2b5c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2b5c54:
    // 0x2b5c54: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2b5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2b5c58:
    // 0x2b5c58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2b5c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2b5c5c:
    // 0x2b5c5c: 0xc0e4060  jal         func_390180
label_2b5c60:
    if (ctx->pc == 0x2B5C60u) {
        ctx->pc = 0x2B5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C5Cu;
        // 0x2b5c60: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5C64u;
        goto label_2b5c64;
    }
    ctx->pc = 0x2B5C5Cu;
    SET_GPR_U32(ctx, 31, 0x2B5C64u);
    ctx->pc = 0x2B5C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C5Cu;
    // 0x2b5c60: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2B5C5Cu, 0x2B5C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C64u;
label_2b5c64:
    // 0x2b5c64: 0xc105e98  jal         func_417A60
label_2b5c68:
    if (ctx->pc == 0x2B5C68u) {
        ctx->pc = 0x2B5C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C64u;
        // 0x2b5c68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5C6Cu;
        goto label_2b5c6c;
    }
    ctx->pc = 0x2B5C64u;
    SET_GPR_U32(ctx, 31, 0x2B5C6Cu);
    ctx->pc = 0x2B5C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C64u;
    // 0x2b5c68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x2B5C64u, 0x2B5C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C6Cu;
label_2b5c6c:
    // 0x2b5c6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5c70:
    // 0x2b5c70: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_2b5c74:
    if (ctx->pc == 0x2B5C74u) {
        ctx->pc = 0x2B5C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C70u;
        // 0x2b5c74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5C78u;
        goto label_2b5c78;
    }
    ctx->pc = 0x2B5C70u;
    {
        const bool branch_taken_0x2b5c70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C70u;
        // 0x2b5c74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c70) {
            ctx->pc = 0x2B5CE4u;
            goto label_2b5ce4;
        }
    }
    ctx->pc = 0x2B5C78u;
label_2b5c78:
    // 0x2b5c78: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2b5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2b5c7c:
    // 0x2b5c7c: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2b5c7cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2b5c80:
    // 0x2b5c80: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2b5c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2b5c84:
    // 0x2b5c84: 0x60f809  jalr        $v1
label_2b5c88:
    if (ctx->pc == 0x2B5C88u) {
        ctx->pc = 0x2B5C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C84u;
        // 0x2b5c88: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5C8Cu;
        goto label_2b5c8c;
    }
    ctx->pc = 0x2B5C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B5C8Cu);
        ctx->pc = 0x2B5C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C84u;
        // 0x2b5c88: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5C84u, 0x2B5C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B5C8Cu;
label_2b5c8c:
    // 0x2b5c8c: 0xc10587a  jal         func_4161E8
label_2b5c90:
    if (ctx->pc == 0x2B5C90u) {
        ctx->pc = 0x2B5C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C8Cu;
        // 0x2b5c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5C94u;
        goto label_2b5c94;
    }
    ctx->pc = 0x2B5C8Cu;
    SET_GPR_U32(ctx, 31, 0x2B5C94u);
    ctx->pc = 0x2B5C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C8Cu;
    // 0x2b5c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2B5C8Cu, 0x2B5C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C94u;
label_2b5c94:
    // 0x2b5c94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b5c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5c98:
    // 0x2b5c98: 0xc0a7ac4  jal         func_29EB10
label_2b5c9c:
    if (ctx->pc == 0x2B5C9Cu) {
        ctx->pc = 0x2B5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C98u;
        // 0x2b5c9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5CA0u;
        goto label_2b5ca0;
    }
    ctx->pc = 0x2B5C98u;
    SET_GPR_U32(ctx, 31, 0x2B5CA0u);
    ctx->pc = 0x2B5C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C98u;
    // 0x2b5c9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB10u, 0x2B5C98u, 0x2B5CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5CA0u;
label_2b5ca0:
    // 0x2b5ca0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b5ca0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5ca4:
    // 0x2b5ca4: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2b5ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2b5ca8:
    // 0x2b5ca8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2b5cac:
    if (ctx->pc == 0x2B5CACu) {
        ctx->pc = 0x2B5CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CA8u;
        // 0x2b5cac: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5CB0u;
        goto label_2b5cb0;
    }
    ctx->pc = 0x2B5CA8u;
    {
        const bool branch_taken_0x2b5ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CA8u;
        // 0x2b5cac: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ca8) {
            ctx->pc = 0x2B5CE4u;
            goto label_2b5ce4;
        }
    }
    ctx->pc = 0x2B5CB0u;
label_2b5cb0:
    // 0x2b5cb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b5cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b5cb4:
    // 0x2b5cb4: 0x24424020  addiu       $v0, $v0, 0x4020
    ctx->pc = 0x2b5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16416));
label_2b5cb8:
    // 0x2b5cb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b5cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b5cbc:
    // 0x2b5cbc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b5cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b5cc0:
    // 0x2b5cc0: 0x800008  jr          $a0
label_2b5cc4:
    if (ctx->pc == 0x2B5CC4u) {
        ctx->pc = 0x2B5CC8u;
        goto label_2b5cc8;
    }
    ctx->pc = 0x2B5CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5CC8u: goto label_2b5cc8;
            case 0x2B5CD0u: goto label_2b5cd0;
            case 0x2B5CD8u: goto label_2b5cd8;
            case 0x2B5CE0u: goto label_2b5ce0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5CC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B5CC8u;
label_2b5cc8:
    // 0x2b5cc8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b5ccc:
    if (ctx->pc == 0x2B5CCCu) {
        ctx->pc = 0x2B5CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CC8u;
        // 0x2b5ccc: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5CD0u;
        goto label_2b5cd0;
    }
    ctx->pc = 0x2B5CC8u;
    {
        const bool branch_taken_0x2b5cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CC8u;
        // 0x2b5ccc: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5cc8) {
            ctx->pc = 0x2B5CE4u;
            goto label_2b5ce4;
        }
    }
    ctx->pc = 0x2B5CD0u;
label_2b5cd0:
    // 0x2b5cd0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2b5cd4:
    if (ctx->pc == 0x2B5CD4u) {
        ctx->pc = 0x2B5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CD0u;
        // 0x2b5cd4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5CD8u;
        goto label_2b5cd8;
    }
    ctx->pc = 0x2B5CD0u;
    {
        const bool branch_taken_0x2b5cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CD0u;
        // 0x2b5cd4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5cd0) {
            ctx->pc = 0x2B5CE4u;
            goto label_2b5ce4;
        }
    }
    ctx->pc = 0x2B5CD8u;
label_2b5cd8:
    // 0x2b5cd8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b5cdc:
    if (ctx->pc == 0x2B5CDCu) {
        ctx->pc = 0x2B5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CD8u;
        // 0x2b5cdc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5CE0u;
        goto label_2b5ce0;
    }
    ctx->pc = 0x2B5CD8u;
    {
        const bool branch_taken_0x2b5cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CD8u;
        // 0x2b5cdc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5cd8) {
            ctx->pc = 0x2B5CE4u;
            goto label_2b5ce4;
        }
    }
    ctx->pc = 0x2B5CE0u;
label_2b5ce0:
    // 0x2b5ce0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2b5ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b5ce4:
    // 0x2b5ce4: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x2b5ce4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b5ce8:
    // 0x2b5ce8: 0x165600be  bne         $s2, $s6, . + 4 + (0xBE << 2)
label_2b5cec:
    if (ctx->pc == 0x2B5CECu) {
        ctx->pc = 0x2B5CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CE8u;
        // 0x2b5cec: 0x3c1e0071  lui         $fp, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5CF0u;
        goto label_2b5cf0;
    }
    ctx->pc = 0x2B5CE8u;
    {
        const bool branch_taken_0x2b5ce8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x2B5CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CE8u;
        // 0x2b5cec: 0x3c1e0071  lui         $fp, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ce8) {
            ctx->pc = 0x2B5FE4u;
            goto label_2b5fe4;
        }
    }
    ctx->pc = 0x2B5CF0u;
label_2b5cf0:
    // 0x2b5cf0: 0xc088ade  jal         func_222B78
label_2b5cf4:
    if (ctx->pc == 0x2B5CF4u) {
        ctx->pc = 0x2B5CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CF0u;
        // 0x2b5cf4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5CF8u;
        goto label_2b5cf8;
    }
    ctx->pc = 0x2B5CF0u;
    SET_GPR_U32(ctx, 31, 0x2B5CF8u);
    ctx->pc = 0x2B5CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5CF0u;
    // 0x2b5cf4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x2B5CF0u, 0x2B5CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5CF8u;
label_2b5cf8:
    // 0x2b5cf8: 0x90530039  lbu         $s3, 0x39($v0)
    ctx->pc = 0x2b5cf8u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
label_2b5cfc:
    // 0x2b5cfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b5d00:
    // 0x2b5d00: 0x1662007f  bne         $s3, $v0, . + 4 + (0x7F << 2)
label_2b5d04:
    if (ctx->pc == 0x2B5D04u) {
        ctx->pc = 0x2B5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D00u;
        // 0x2b5d04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D08u;
        goto label_2b5d08;
    }
    ctx->pc = 0x2B5D00u;
    {
        const bool branch_taken_0x2b5d00 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D00u;
        // 0x2b5d04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d00) {
            ctx->pc = 0x2B5F00u;
            goto label_2b5f00;
        }
    }
    ctx->pc = 0x2B5D08u;
label_2b5d08:
    // 0x2b5d08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b5d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b5d0c:
    // 0x2b5d0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b5d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5d10:
    // 0x2b5d10: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2b5d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b5d14:
    // 0x2b5d14: 0xc10c1fa  jal         func_4307E8
label_2b5d18:
    if (ctx->pc == 0x2B5D18u) {
        ctx->pc = 0x2B5D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D14u;
        // 0x2b5d18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D1Cu;
        goto label_2b5d1c;
    }
    ctx->pc = 0x2B5D14u;
    SET_GPR_U32(ctx, 31, 0x2B5D1Cu);
    ctx->pc = 0x2B5D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D14u;
    // 0x2b5d18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x2B5D14u, 0x2B5D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D1Cu;
label_2b5d1c:
    // 0x2b5d1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b5d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b5d20:
    // 0x2b5d20: 0xc0a7a84  jal         func_29EA10
label_2b5d24:
    if (ctx->pc == 0x2B5D24u) {
        ctx->pc = 0x2B5D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D20u;
        // 0x2b5d24: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D28u;
        goto label_2b5d28;
    }
    ctx->pc = 0x2B5D20u;
    SET_GPR_U32(ctx, 31, 0x2B5D28u);
    ctx->pc = 0x2B5D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D20u;
    // 0x2b5d24: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA10u, 0x2B5D20u, 0x2B5D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D28u;
label_2b5d28:
    // 0x2b5d28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b5d2c:
    if (ctx->pc == 0x2B5D2Cu) {
        ctx->pc = 0x2B5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D28u;
        // 0x2b5d2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D30u;
        goto label_2b5d30;
    }
    ctx->pc = 0x2B5D28u;
    {
        const bool branch_taken_0x2b5d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D28u;
        // 0x2b5d2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d28) {
            ctx->pc = 0x2B5D38u;
            goto label_2b5d38;
        }
    }
    ctx->pc = 0x2B5D30u;
label_2b5d30:
    // 0x2b5d30: 0xa3b30000  sb          $s3, 0x0($sp)
    ctx->pc = 0x2b5d30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 19));
label_2b5d34:
    // 0x2b5d34: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2b5d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b5d38:
    // 0x2b5d38: 0xc0a7a84  jal         func_29EA10
label_2b5d3c:
    if (ctx->pc == 0x2B5D3Cu) {
        ctx->pc = 0x2B5D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D38u;
        // 0x2b5d3c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D40u;
        goto label_2b5d40;
    }
    ctx->pc = 0x2B5D38u;
    SET_GPR_U32(ctx, 31, 0x2B5D40u);
    ctx->pc = 0x2B5D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D38u;
    // 0x2b5d3c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA10u, 0x2B5D38u, 0x2B5D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D40u;
label_2b5d40:
    // 0x2b5d40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b5d44:
    if (ctx->pc == 0x2B5D44u) {
        ctx->pc = 0x2B5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D40u;
        // 0x2b5d44: 0x3b01021  addu        $v0, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D48u;
        goto label_2b5d48;
    }
    ctx->pc = 0x2B5D40u;
    {
        const bool branch_taken_0x2b5d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D40u;
        // 0x2b5d44: 0x3b01021  addu        $v0, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d40) {
            ctx->pc = 0x2B5D50u;
            goto label_2b5d50;
        }
    }
    ctx->pc = 0x2B5D48u;
label_2b5d48:
    // 0x2b5d48: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2b5d48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2b5d4c:
    // 0x2b5d4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b5d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b5d50:
    // 0x2b5d50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b5d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b5d54:
    // 0x2b5d54: 0xc0a7a84  jal         func_29EA10
label_2b5d58:
    if (ctx->pc == 0x2B5D58u) {
        ctx->pc = 0x2B5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D54u;
        // 0x2b5d58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D5Cu;
        goto label_2b5d5c;
    }
    ctx->pc = 0x2B5D54u;
    SET_GPR_U32(ctx, 31, 0x2B5D5Cu);
    ctx->pc = 0x2B5D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D54u;
    // 0x2b5d58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA10u, 0x2B5D54u, 0x2B5D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D5Cu;
label_2b5d5c:
    // 0x2b5d5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b5d60:
    if (ctx->pc == 0x2B5D60u) {
        ctx->pc = 0x2B5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D5Cu;
        // 0x2b5d60: 0x3b01821  addu        $v1, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D64u;
        goto label_2b5d64;
    }
    ctx->pc = 0x2B5D5Cu;
    {
        const bool branch_taken_0x2b5d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D5Cu;
        // 0x2b5d60: 0x3b01821  addu        $v1, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d5c) {
            ctx->pc = 0x2B5D70u;
            goto label_2b5d70;
        }
    }
    ctx->pc = 0x2B5D64u;
label_2b5d64:
    // 0x2b5d64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b5d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b5d68:
    // 0x2b5d68: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2b5d68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b5d6c:
    // 0x2b5d6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b5d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b5d70:
    // 0x2b5d70: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2b5d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b5d74:
    // 0x2b5d74: 0xc0a7a84  jal         func_29EA10
label_2b5d78:
    if (ctx->pc == 0x2B5D78u) {
        ctx->pc = 0x2B5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D74u;
        // 0x2b5d78: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D7Cu;
        goto label_2b5d7c;
    }
    ctx->pc = 0x2B5D74u;
    SET_GPR_U32(ctx, 31, 0x2B5D7Cu);
    ctx->pc = 0x2B5D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D74u;
    // 0x2b5d78: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA10u, 0x2B5D74u, 0x2B5D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D7Cu;
label_2b5d7c:
    // 0x2b5d7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b5d80:
    if (ctx->pc == 0x2B5D80u) {
        ctx->pc = 0x2B5D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D7Cu;
        // 0x2b5d80: 0x3b01821  addu        $v1, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D84u;
        goto label_2b5d84;
    }
    ctx->pc = 0x2B5D7Cu;
    {
        const bool branch_taken_0x2b5d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D7Cu;
        // 0x2b5d80: 0x3b01821  addu        $v1, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d7c) {
            ctx->pc = 0x2B5D90u;
            goto label_2b5d90;
        }
    }
    ctx->pc = 0x2B5D84u;
label_2b5d84:
    // 0x2b5d84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b5d88:
    // 0x2b5d88: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2b5d88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b5d8c:
    // 0x2b5d8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b5d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b5d90:
    // 0x2b5d90: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2b5d94:
    if (ctx->pc == 0x2B5D94u) {
        ctx->pc = 0x2B5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D90u;
        // 0x2b5d94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D98u;
        goto label_2b5d98;
    }
    ctx->pc = 0x2B5D90u;
    {
        const bool branch_taken_0x2b5d90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D90u;
        // 0x2b5d94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d90) {
            ctx->pc = 0x2B5DACu;
            goto label_2b5dac;
        }
    }
    ctx->pc = 0x2B5D98u;
label_2b5d98:
    // 0x2b5d98: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2b5d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2b5d9c:
    // 0x2b5d9c: 0xc0cd526  jal         func_335498
label_2b5da0:
    if (ctx->pc == 0x2B5DA0u) {
        ctx->pc = 0x2B5DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D9Cu;
        // 0x2b5da0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DA4u;
        goto label_2b5da4;
    }
    ctx->pc = 0x2B5D9Cu;
    SET_GPR_U32(ctx, 31, 0x2B5DA4u);
    ctx->pc = 0x2B5DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D9Cu;
    // 0x2b5da0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x2B5D9Cu, 0x2B5DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5DA4u;
label_2b5da4:
    // 0x2b5da4: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x2b5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2b5da8:
    // 0x2b5da8: 0x90520000  lbu         $s2, 0x0($v0)
    ctx->pc = 0x2b5da8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b5dac:
    // 0x2b5dac: 0x5656008e  bnel        $s2, $s6, . + 4 + (0x8E << 2)
label_2b5db0:
    if (ctx->pc == 0x2B5DB0u) {
        ctx->pc = 0x2B5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DACu;
        // 0x2b5db0: 0x86a50092  lh          $a1, 0x92($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DB4u;
        goto label_2b5db4;
    }
    ctx->pc = 0x2B5DACu;
    {
        const bool branch_taken_0x2b5dac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        if (branch_taken_0x2b5dac) {
            ctx->pc = 0x2B5DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5DACu;
            // 0x2b5db0: 0x86a50092  lh          $a1, 0x92($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5FE8u;
            goto label_2b5fe8;
        }
    }
    ctx->pc = 0x2B5DB4u;
label_2b5db4:
    // 0x2b5db4: 0x26830020  addiu       $v1, $s4, 0x20
    ctx->pc = 0x2b5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_2b5db8:
    // 0x2b5db8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b5db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5dbc:
    // 0x2b5dbc: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x2b5dbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_2b5dc0:
    // 0x2b5dc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b5dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b5dc4:
    // 0x2b5dc4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2b5dc8:
    if (ctx->pc == 0x2B5DC8u) {
        ctx->pc = 0x2B5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DC4u;
        // 0x2b5dc8: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DCCu;
        goto label_2b5dcc;
    }
    ctx->pc = 0x2B5DC4u;
    {
        const bool branch_taken_0x2b5dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DC4u;
        // 0x2b5dc8: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5dc4) {
            ctx->pc = 0x2B5E00u;
            goto label_2b5e00;
        }
    }
    ctx->pc = 0x2B5DCCu;
label_2b5dcc:
    // 0x2b5dcc: 0xc0e409a  jal         func_390268
label_2b5dd0:
    if (ctx->pc == 0x2B5DD0u) {
        ctx->pc = 0x2B5DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DCCu;
        // 0x2b5dd0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DD4u;
        goto label_2b5dd4;
    }
    ctx->pc = 0x2B5DCCu;
    SET_GPR_U32(ctx, 31, 0x2B5DD4u);
    ctx->pc = 0x2B5DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5DCCu;
    // 0x2b5dd0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B5DCCu, 0x2B5DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5DD4u;
label_2b5dd4:
    // 0x2b5dd4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2b5dd8:
    if (ctx->pc == 0x2B5DD8u) {
        ctx->pc = 0x2B5DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DD4u;
        // 0x2b5dd8: 0x26840030  addiu       $a0, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DDCu;
        goto label_2b5ddc;
    }
    ctx->pc = 0x2B5DD4u;
    {
        const bool branch_taken_0x2b5dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DD4u;
        // 0x2b5dd8: 0x26840030  addiu       $a0, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5dd4) {
            ctx->pc = 0x2B5E04u;
            goto label_2b5e04;
        }
    }
    ctx->pc = 0x2B5DDCu;
label_2b5ddc:
    // 0x2b5ddc: 0xc087502  jal         func_21D408
label_2b5de0:
    if (ctx->pc == 0x2B5DE0u) {
        ctx->pc = 0x2B5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DDCu;
        // 0x2b5de0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DE4u;
        goto label_2b5de4;
    }
    ctx->pc = 0x2B5DDCu;
    SET_GPR_U32(ctx, 31, 0x2B5DE4u);
    ctx->pc = 0x2B5DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5DDCu;
    // 0x2b5de0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B5DDCu, 0x2B5DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5DE4u;
label_2b5de4:
    // 0x2b5de4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b5de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5de8:
    // 0x2b5de8: 0xc0a408c  jal         func_290230
label_2b5dec:
    if (ctx->pc == 0x2B5DECu) {
        ctx->pc = 0x2B5DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DE8u;
        // 0x2b5dec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DF0u;
        goto label_2b5df0;
    }
    ctx->pc = 0x2B5DE8u;
    SET_GPR_U32(ctx, 31, 0x2B5DF0u);
    ctx->pc = 0x2B5DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5DE8u;
    // 0x2b5dec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2B5DE8u, 0x2B5DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5DF0u;
label_2b5df0:
    // 0x2b5df0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b5df4:
    if (ctx->pc == 0x2B5DF4u) {
        ctx->pc = 0x2B5DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DF0u;
        // 0x2b5df4: 0x26840030  addiu       $a0, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DF8u;
        goto label_2b5df8;
    }
    ctx->pc = 0x2B5DF0u;
    {
        const bool branch_taken_0x2b5df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DF0u;
        // 0x2b5df4: 0x26840030  addiu       $a0, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5df0) {
            ctx->pc = 0x2B5E04u;
            goto label_2b5e04;
        }
    }
    ctx->pc = 0x2B5DF8u;
label_2b5df8:
    // 0x2b5df8: 0xa3b30000  sb          $s3, 0x0($sp)
    ctx->pc = 0x2b5df8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 19));
label_2b5dfc:
    // 0x2b5dfc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2b5dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b5e00:
    // 0x2b5e00: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x2b5e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_2b5e04:
    // 0x2b5e04: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x2b5e04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2b5e08:
    // 0x2b5e08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b5e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b5e0c:
    // 0x2b5e0c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_2b5e10:
    if (ctx->pc == 0x2B5E10u) {
        ctx->pc = 0x2B5E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E0Cu;
        // 0x2b5e10: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E14u;
        goto label_2b5e14;
    }
    ctx->pc = 0x2B5E0Cu;
    {
        const bool branch_taken_0x2b5e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e0c) {
            ctx->pc = 0x2B5E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5E0Cu;
            // 0x2b5e10: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5E4Cu;
            goto label_2b5e4c;
        }
    }
    ctx->pc = 0x2B5E14u;
label_2b5e14:
    // 0x2b5e14: 0xc0e409a  jal         func_390268
label_2b5e18:
    if (ctx->pc == 0x2B5E18u) {
        ctx->pc = 0x2B5E1Cu;
        goto label_2b5e1c;
    }
    ctx->pc = 0x2B5E14u;
    SET_GPR_U32(ctx, 31, 0x2B5E1Cu);
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B5E14u, 0x2B5E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E1Cu;
label_2b5e1c:
    // 0x2b5e1c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2b5e20:
    if (ctx->pc == 0x2B5E20u) {
        ctx->pc = 0x2B5E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E1Cu;
        // 0x2b5e20: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E24u;
        goto label_2b5e24;
    }
    ctx->pc = 0x2B5E1Cu;
    {
        const bool branch_taken_0x2b5e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E1Cu;
        // 0x2b5e20: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e1c) {
            ctx->pc = 0x2B5E4Cu;
            goto label_2b5e4c;
        }
    }
    ctx->pc = 0x2B5E24u;
label_2b5e24:
    // 0x2b5e24: 0xc087502  jal         func_21D408
label_2b5e28:
    if (ctx->pc == 0x2B5E28u) {
        ctx->pc = 0x2B5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E24u;
        // 0x2b5e28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E2Cu;
        goto label_2b5e2c;
    }
    ctx->pc = 0x2B5E24u;
    SET_GPR_U32(ctx, 31, 0x2B5E2Cu);
    ctx->pc = 0x2B5E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5E24u;
    // 0x2b5e28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B5E24u, 0x2B5E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E2Cu;
label_2b5e2c:
    // 0x2b5e2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b5e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5e30:
    // 0x2b5e30: 0xc0a408c  jal         func_290230
label_2b5e34:
    if (ctx->pc == 0x2B5E34u) {
        ctx->pc = 0x2B5E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E30u;
        // 0x2b5e34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E38u;
        goto label_2b5e38;
    }
    ctx->pc = 0x2B5E30u;
    SET_GPR_U32(ctx, 31, 0x2B5E38u);
    ctx->pc = 0x2B5E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5E30u;
    // 0x2b5e34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2B5E30u, 0x2B5E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E38u;
label_2b5e38:
    // 0x2b5e38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b5e3c:
    if (ctx->pc == 0x2B5E3Cu) {
        ctx->pc = 0x2B5E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E38u;
        // 0x2b5e3c: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E40u;
        goto label_2b5e40;
    }
    ctx->pc = 0x2B5E38u;
    {
        const bool branch_taken_0x2b5e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E38u;
        // 0x2b5e3c: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e38) {
            ctx->pc = 0x2B5E4Cu;
            goto label_2b5e4c;
        }
    }
    ctx->pc = 0x2B5E40u;
label_2b5e40:
    // 0x2b5e40: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x2b5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_2b5e44:
    // 0x2b5e44: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2b5e44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2b5e48:
    // 0x2b5e48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b5e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b5e4c:
    // 0x2b5e4c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x2b5e4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2b5e50:
    // 0x2b5e50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b5e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b5e54:
    // 0x2b5e54: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_2b5e58:
    if (ctx->pc == 0x2B5E58u) {
        ctx->pc = 0x2B5E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E54u;
        // 0x2b5e58: 0x96e20024  lhu         $v0, 0x24($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E5Cu;
        goto label_2b5e5c;
    }
    ctx->pc = 0x2B5E54u;
    {
        const bool branch_taken_0x2b5e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e54) {
            ctx->pc = 0x2B5E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5E54u;
            // 0x2b5e58: 0x96e20024  lhu         $v0, 0x24($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5E9Cu;
            goto label_2b5e9c;
        }
    }
    ctx->pc = 0x2B5E5Cu;
label_2b5e5c:
    // 0x2b5e5c: 0xc0e409a  jal         func_390268
label_2b5e60:
    if (ctx->pc == 0x2B5E60u) {
        ctx->pc = 0x2B5E64u;
        goto label_2b5e64;
    }
    ctx->pc = 0x2B5E5Cu;
    SET_GPR_U32(ctx, 31, 0x2B5E64u);
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B5E5Cu, 0x2B5E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E64u;
label_2b5e64:
    // 0x2b5e64: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_2b5e68:
    if (ctx->pc == 0x2B5E68u) {
        ctx->pc = 0x2B5E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E64u;
        // 0x2b5e68: 0x96e20024  lhu         $v0, 0x24($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E6Cu;
        goto label_2b5e6c;
    }
    ctx->pc = 0x2B5E64u;
    {
        const bool branch_taken_0x2b5e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e64) {
            ctx->pc = 0x2B5E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5E64u;
            // 0x2b5e68: 0x96e20024  lhu         $v0, 0x24($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5E9Cu;
            goto label_2b5e9c;
        }
    }
    ctx->pc = 0x2B5E6Cu;
label_2b5e6c:
    // 0x2b5e6c: 0xc087502  jal         func_21D408
label_2b5e70:
    if (ctx->pc == 0x2B5E70u) {
        ctx->pc = 0x2B5E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E6Cu;
        // 0x2b5e70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E74u;
        goto label_2b5e74;
    }
    ctx->pc = 0x2B5E6Cu;
    SET_GPR_U32(ctx, 31, 0x2B5E74u);
    ctx->pc = 0x2B5E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5E6Cu;
    // 0x2b5e70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B5E6Cu, 0x2B5E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E74u;
label_2b5e74:
    // 0x2b5e74: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b5e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5e78:
    // 0x2b5e78: 0xc0a408c  jal         func_290230
label_2b5e7c:
    if (ctx->pc == 0x2B5E7Cu) {
        ctx->pc = 0x2B5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E78u;
        // 0x2b5e7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E80u;
        goto label_2b5e80;
    }
    ctx->pc = 0x2B5E78u;
    SET_GPR_U32(ctx, 31, 0x2B5E80u);
    ctx->pc = 0x2B5E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5E78u;
    // 0x2b5e7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2B5E78u, 0x2B5E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E80u;
label_2b5e80:
    // 0x2b5e80: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2b5e84:
    if (ctx->pc == 0x2B5E84u) {
        ctx->pc = 0x2B5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E80u;
        // 0x2b5e84: 0x96e20024  lhu         $v0, 0x24($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E88u;
        goto label_2b5e88;
    }
    ctx->pc = 0x2B5E80u;
    {
        const bool branch_taken_0x2b5e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e80) {
            ctx->pc = 0x2B5E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5E80u;
            // 0x2b5e84: 0x96e20024  lhu         $v0, 0x24($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5E9Cu;
            goto label_2b5e9c;
        }
    }
    ctx->pc = 0x2B5E88u;
label_2b5e88:
    // 0x2b5e88: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x2b5e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_2b5e8c:
    // 0x2b5e8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b5e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b5e90:
    // 0x2b5e90: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2b5e90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b5e94:
    // 0x2b5e94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b5e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b5e98:
    // 0x2b5e98: 0x96e20024  lhu         $v0, 0x24($s7)
    ctx->pc = 0x2b5e98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 36)));
label_2b5e9c:
    // 0x2b5e9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b5e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b5ea0:
    // 0x2b5ea0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2b5ea4:
    if (ctx->pc == 0x2B5EA4u) {
        ctx->pc = 0x2B5EA8u;
        goto label_2b5ea8;
    }
    ctx->pc = 0x2B5EA0u;
    {
        const bool branch_taken_0x2b5ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ea0) {
            ctx->pc = 0x2B5EE0u;
            goto label_2b5ee0;
        }
    }
    ctx->pc = 0x2B5EA8u;
label_2b5ea8:
    // 0x2b5ea8: 0xc0e409a  jal         func_390268
label_2b5eac:
    if (ctx->pc == 0x2B5EACu) {
        ctx->pc = 0x2B5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EA8u;
        // 0x2b5eac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5EB0u;
        goto label_2b5eb0;
    }
    ctx->pc = 0x2B5EA8u;
    SET_GPR_U32(ctx, 31, 0x2B5EB0u);
    ctx->pc = 0x2B5EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5EA8u;
    // 0x2b5eac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B5EA8u, 0x2B5EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5EB0u;
label_2b5eb0:
    // 0x2b5eb0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2b5eb4:
    if (ctx->pc == 0x2B5EB4u) {
        ctx->pc = 0x2B5EB8u;
        goto label_2b5eb8;
    }
    ctx->pc = 0x2B5EB0u;
    {
        const bool branch_taken_0x2b5eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5eb0) {
            ctx->pc = 0x2B5EE0u;
            goto label_2b5ee0;
        }
    }
    ctx->pc = 0x2B5EB8u;
label_2b5eb8:
    // 0x2b5eb8: 0xc087502  jal         func_21D408
label_2b5ebc:
    if (ctx->pc == 0x2B5EBCu) {
        ctx->pc = 0x2B5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EB8u;
        // 0x2b5ebc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5EC0u;
        goto label_2b5ec0;
    }
    ctx->pc = 0x2B5EB8u;
    SET_GPR_U32(ctx, 31, 0x2B5EC0u);
    ctx->pc = 0x2B5EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5EB8u;
    // 0x2b5ebc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B5EB8u, 0x2B5EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5EC0u;
label_2b5ec0:
    // 0x2b5ec0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b5ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5ec4:
    // 0x2b5ec4: 0xc0a408c  jal         func_290230
label_2b5ec8:
    if (ctx->pc == 0x2B5EC8u) {
        ctx->pc = 0x2B5EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EC4u;
        // 0x2b5ec8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5ECCu;
        goto label_2b5ecc;
    }
    ctx->pc = 0x2B5EC4u;
    SET_GPR_U32(ctx, 31, 0x2B5ECCu);
    ctx->pc = 0x2B5EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5EC4u;
    // 0x2b5ec8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2B5EC4u, 0x2B5ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5ECCu;
label_2b5ecc:
    // 0x2b5ecc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b5ed0:
    if (ctx->pc == 0x2B5ED0u) {
        ctx->pc = 0x2B5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5ECCu;
        // 0x2b5ed0: 0x3b01821  addu        $v1, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5ED4u;
        goto label_2b5ed4;
    }
    ctx->pc = 0x2B5ECCu;
    {
        const bool branch_taken_0x2b5ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5ECCu;
        // 0x2b5ed0: 0x3b01821  addu        $v1, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ecc) {
            ctx->pc = 0x2B5EE0u;
            goto label_2b5ee0;
        }
    }
    ctx->pc = 0x2B5ED4u;
label_2b5ed4:
    // 0x2b5ed4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b5ed8:
    // 0x2b5ed8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2b5ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b5edc:
    // 0x2b5edc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b5edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b5ee0:
    // 0x2b5ee0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2b5ee4:
    if (ctx->pc == 0x2B5EE4u) {
        ctx->pc = 0x2B5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EE0u;
        // 0x2b5ee4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5EE8u;
        goto label_2b5ee8;
    }
    ctx->pc = 0x2B5EE0u;
    {
        const bool branch_taken_0x2b5ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EE0u;
        // 0x2b5ee4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ee0) {
            ctx->pc = 0x2B5EFCu;
            goto label_2b5efc;
        }
    }
    ctx->pc = 0x2B5EE8u;
label_2b5ee8:
    // 0x2b5ee8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2b5ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2b5eec:
    // 0x2b5eec: 0xc0cd526  jal         func_335498
label_2b5ef0:
    if (ctx->pc == 0x2B5EF0u) {
        ctx->pc = 0x2B5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EECu;
        // 0x2b5ef0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5EF4u;
        goto label_2b5ef4;
    }
    ctx->pc = 0x2B5EECu;
    SET_GPR_U32(ctx, 31, 0x2B5EF4u);
    ctx->pc = 0x2B5EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5EECu;
    // 0x2b5ef0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x2B5EECu, 0x2B5EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5EF4u;
label_2b5ef4:
    // 0x2b5ef4: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x2b5ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2b5ef8:
    // 0x2b5ef8: 0x90520000  lbu         $s2, 0x0($v0)
    ctx->pc = 0x2b5ef8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b5efc:
    // 0x2b5efc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b5f00:
    // 0x2b5f00: 0x16420038  bne         $s2, $v0, . + 4 + (0x38 << 2)
label_2b5f04:
    if (ctx->pc == 0x2B5F04u) {
        ctx->pc = 0x2B5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F00u;
        // 0x2b5f04: 0x3c1e0071  lui         $fp, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F08u;
        goto label_2b5f08;
    }
    ctx->pc = 0x2B5F00u;
    {
        const bool branch_taken_0x2b5f00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F00u;
        // 0x2b5f04: 0x3c1e0071  lui         $fp, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f00) {
            ctx->pc = 0x2B5FE4u;
            goto label_2b5fe4;
        }
    }
    ctx->pc = 0x2B5F08u;
label_2b5f08:
    // 0x2b5f08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b5f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5f0c:
    // 0x2b5f0c: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x2b5f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2b5f10:
    // 0x2b5f10: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x2b5f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2b5f14:
    // 0x2b5f14: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
label_2b5f18:
    if (ctx->pc == 0x2B5F18u) {
        ctx->pc = 0x2B5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F14u;
        // 0x2b5f18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F1Cu;
        goto label_2b5f1c;
    }
    ctx->pc = 0x2B5F14u;
    {
        const bool branch_taken_0x2b5f14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F14u;
        // 0x2b5f18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f14) {
            ctx->pc = 0x2B5FC8u;
            goto label_2b5fc8;
        }
    }
    ctx->pc = 0x2B5F1Cu;
label_2b5f1c:
    // 0x2b5f1c: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2b5f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2b5f20:
    // 0x2b5f20: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2b5f20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2b5f24:
    // 0x2b5f24: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2b5f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2b5f28:
    // 0x2b5f28: 0x40f809  jalr        $v0
label_2b5f2c:
    if (ctx->pc == 0x2B5F2Cu) {
        ctx->pc = 0x2B5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F28u;
        // 0x2b5f2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F30u;
        goto label_2b5f30;
    }
    ctx->pc = 0x2B5F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B5F30u);
        ctx->pc = 0x2B5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F28u;
        // 0x2b5f2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5F28u, 0x2B5F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B5F30u;
label_2b5f30:
    // 0x2b5f30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b5f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b5f34:
    // 0x2b5f34: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
label_2b5f38:
    if (ctx->pc == 0x2B5F38u) {
        ctx->pc = 0x2B5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F34u;
        // 0x2b5f38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F3Cu;
        goto label_2b5f3c;
    }
    ctx->pc = 0x2B5F34u;
    {
        const bool branch_taken_0x2b5f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F34u;
        // 0x2b5f38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f34) {
            ctx->pc = 0x2B5FC8u;
            goto label_2b5fc8;
        }
    }
    ctx->pc = 0x2B5F3Cu;
label_2b5f3c:
    // 0x2b5f3c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x2b5f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2b5f40:
    // 0x2b5f40: 0xc0e409a  jal         func_390268
label_2b5f44:
    if (ctx->pc == 0x2B5F44u) {
        ctx->pc = 0x2B5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F40u;
        // 0x2b5f44: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F48u;
        goto label_2b5f48;
    }
    ctx->pc = 0x2B5F40u;
    SET_GPR_U32(ctx, 31, 0x2B5F48u);
    ctx->pc = 0x2B5F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F40u;
    // 0x2b5f44: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B5F40u, 0x2B5F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F48u;
label_2b5f48:
    // 0x2b5f48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5f4c:
    // 0x2b5f4c: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_2b5f50:
    if (ctx->pc == 0x2B5F50u) {
        ctx->pc = 0x2B5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F4Cu;
        // 0x2b5f50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F54u;
        goto label_2b5f54;
    }
    ctx->pc = 0x2B5F4Cu;
    {
        const bool branch_taken_0x2b5f4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F4Cu;
        // 0x2b5f50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f4c) {
            ctx->pc = 0x2B5FC4u;
            goto label_2b5fc4;
        }
    }
    ctx->pc = 0x2B5F54u;
label_2b5f54:
    // 0x2b5f54: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2b5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2b5f58:
    // 0x2b5f58: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2b5f58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2b5f5c:
    // 0x2b5f5c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2b5f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2b5f60:
    // 0x2b5f60: 0x60f809  jalr        $v1
label_2b5f64:
    if (ctx->pc == 0x2B5F64u) {
        ctx->pc = 0x2B5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F60u;
        // 0x2b5f64: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F68u;
        goto label_2b5f68;
    }
    ctx->pc = 0x2B5F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B5F68u);
        ctx->pc = 0x2B5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F60u;
        // 0x2b5f64: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5F60u, 0x2B5F68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B5F68u;
label_2b5f68:
    // 0x2b5f68: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2b5f68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2b5f6c:
    // 0x2b5f6c: 0x27c24b00  addiu       $v0, $fp, 0x4B00
    ctx->pc = 0x2b5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_2b5f70:
    // 0x2b5f70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b5f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b5f74:
    // 0x2b5f74: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b5f74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2b5f78:
    // 0x2b5f78: 0xc0a7ac4  jal         func_29EB10
label_2b5f7c:
    if (ctx->pc == 0x2B5F7Cu) {
        ctx->pc = 0x2B5F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F78u;
        // 0x2b5f7c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F80u;
        goto label_2b5f80;
    }
    ctx->pc = 0x2B5F78u;
    SET_GPR_U32(ctx, 31, 0x2B5F80u);
    ctx->pc = 0x2B5F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F78u;
    // 0x2b5f7c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB10u, 0x2B5F78u, 0x2B5F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F80u;
label_2b5f80:
    // 0x2b5f80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b5f80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5f84:
    // 0x2b5f84: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2b5f84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2b5f88:
    // 0x2b5f88: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2b5f8c:
    if (ctx->pc == 0x2B5F8Cu) {
        ctx->pc = 0x2B5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F88u;
        // 0x2b5f8c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F90u;
        goto label_2b5f90;
    }
    ctx->pc = 0x2B5F88u;
    {
        const bool branch_taken_0x2b5f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F88u;
        // 0x2b5f8c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f88) {
            ctx->pc = 0x2B5FC4u;
            goto label_2b5fc4;
        }
    }
    ctx->pc = 0x2B5F90u;
label_2b5f90:
    // 0x2b5f90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b5f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b5f94:
    // 0x2b5f94: 0x24424040  addiu       $v0, $v0, 0x4040
    ctx->pc = 0x2b5f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16448));
label_2b5f98:
    // 0x2b5f98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b5f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b5f9c:
    // 0x2b5f9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b5f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b5fa0:
    // 0x2b5fa0: 0x800008  jr          $a0
label_2b5fa4:
    if (ctx->pc == 0x2B5FA4u) {
        ctx->pc = 0x2B5FA8u;
        goto label_2b5fa8;
    }
    ctx->pc = 0x2B5FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5FA8u: goto label_2b5fa8;
            case 0x2B5FB0u: goto label_2b5fb0;
            case 0x2B5FB8u: goto label_2b5fb8;
            case 0x2B5FC0u: goto label_2b5fc0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5FA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B5FA8u;
label_2b5fa8:
    // 0x2b5fa8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b5fac:
    if (ctx->pc == 0x2B5FACu) {
        ctx->pc = 0x2B5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FA8u;
        // 0x2b5fac: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5FB0u;
        goto label_2b5fb0;
    }
    ctx->pc = 0x2B5FA8u;
    {
        const bool branch_taken_0x2b5fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FA8u;
        // 0x2b5fac: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fa8) {
            ctx->pc = 0x2B5FC4u;
            goto label_2b5fc4;
        }
    }
    ctx->pc = 0x2B5FB0u;
label_2b5fb0:
    // 0x2b5fb0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2b5fb4:
    if (ctx->pc == 0x2B5FB4u) {
        ctx->pc = 0x2B5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FB0u;
        // 0x2b5fb4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5FB8u;
        goto label_2b5fb8;
    }
    ctx->pc = 0x2B5FB0u;
    {
        const bool branch_taken_0x2b5fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FB0u;
        // 0x2b5fb4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fb0) {
            ctx->pc = 0x2B5FC4u;
            goto label_2b5fc4;
        }
    }
    ctx->pc = 0x2B5FB8u;
label_2b5fb8:
    // 0x2b5fb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b5fbc:
    if (ctx->pc == 0x2B5FBCu) {
        ctx->pc = 0x2B5FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FB8u;
        // 0x2b5fbc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5FC0u;
        goto label_2b5fc0;
    }
    ctx->pc = 0x2B5FB8u;
    {
        const bool branch_taken_0x2b5fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FB8u;
        // 0x2b5fbc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fb8) {
            ctx->pc = 0x2B5FC4u;
            goto label_2b5fc4;
        }
    }
    ctx->pc = 0x2B5FC0u;
label_2b5fc0:
    // 0x2b5fc0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2b5fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b5fc4:
    // 0x2b5fc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b5fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b5fc8:
    // 0x2b5fc8: 0x56420007  bnel        $s2, $v0, . + 4 + (0x7 << 2)
label_2b5fcc:
    if (ctx->pc == 0x2B5FCCu) {
        ctx->pc = 0x2B5FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FC8u;
        // 0x2b5fcc: 0x86a50092  lh          $a1, 0x92($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5FD0u;
        goto label_2b5fd0;
    }
    ctx->pc = 0x2B5FC8u;
    {
        const bool branch_taken_0x2b5fc8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b5fc8) {
            ctx->pc = 0x2B5FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5FC8u;
            // 0x2b5fcc: 0x86a50092  lh          $a1, 0x92($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5FE8u;
            goto label_2b5fe8;
        }
    }
    ctx->pc = 0x2B5FD0u;
label_2b5fd0:
    // 0x2b5fd0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2b5fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2b5fd4:
    // 0x2b5fd4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b5fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b5fd8:
    // 0x2b5fd8: 0xc0cd4ee  jal         func_3353B8
label_2b5fdc:
    if (ctx->pc == 0x2B5FDCu) {
        ctx->pc = 0x2B5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FD8u;
        // 0x2b5fdc: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5FE0u;
        goto label_2b5fe0;
    }
    ctx->pc = 0x2B5FD8u;
    SET_GPR_U32(ctx, 31, 0x2B5FE0u);
    ctx->pc = 0x2B5FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5FD8u;
    // 0x2b5fdc: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B5FD8u, 0x2B5FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5FE0u;
label_2b5fe0:
    // 0x2b5fe0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b5fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5fe4:
    // 0x2b5fe4: 0x86a50092  lh          $a1, 0x92($s5)
    ctx->pc = 0x2b5fe4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2b5fe8:
    // 0x2b5fe8: 0x27c24b00  addiu       $v0, $fp, 0x4B00
    ctx->pc = 0x2b5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_2b5fec:
    // 0x2b5fec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b5fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b5ff0:
    // 0x2b5ff0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b5ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2b5ff4:
    // 0x2b5ff4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b5ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2b5ff8:
    // 0x2b5ff8: 0xc0cd8ec  jal         func_3363B0
label_2b5ffc:
    if (ctx->pc == 0x2B5FFCu) {
        ctx->pc = 0x2B5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FF8u;
        // 0x2b5ffc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6000u;
        goto label_2b6000;
    }
    ctx->pc = 0x2B5FF8u;
    SET_GPR_U32(ctx, 31, 0x2B6000u);
    ctx->pc = 0x2B5FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5FF8u;
    // 0x2b5ffc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2B5FF8u, 0x2B6000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6000u;
label_2b6000:
    // 0x2b6000: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x2b6000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b6004:
    // 0x2b6004: 0xc0cd5ea  jal         func_3357A8
label_2b6008:
    if (ctx->pc == 0x2B6008u) {
        ctx->pc = 0x2B6008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6004u;
        // 0x2b6008: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B600Cu;
        goto label_2b600c;
    }
    ctx->pc = 0x2B6004u;
    SET_GPR_U32(ctx, 31, 0x2B600Cu);
    ctx->pc = 0x2B6008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6004u;
    // 0x2b6008: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x2B6004u, 0x2B600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B600Cu;
label_2b600c:
    // 0x2b600c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x2b600cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b6010:
    // 0x2b6010: 0x0  nop
    ctx->pc = 0x2b6010u;
    // NOP
label_2b6014:
    // 0x2b6014: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b6014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2b6018:
    // 0x2b6018: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2b6018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_2b601c:
    // 0x2b601c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2b601cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2b6020:
    // 0x2b6020: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b6020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b6024:
    // 0x2b6024: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2b6024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2b6028:
    // 0x2b6028: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b6028u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2b602c:
    // 0x2b602c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2b602cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2b6030:
    // 0x2b6030: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2b6030u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b6034:
    // 0x2b6034: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2b6034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b6038:
    // 0x2b6038: 0x0  nop
    ctx->pc = 0x2b6038u;
    // NOP
label_2b603c:
    // 0x2b603c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2b6040:
    if (ctx->pc == 0x2B6040u) {
        ctx->pc = 0x2B6044u;
        goto label_2b6044;
    }
    ctx->pc = 0x2B603Cu;
    {
        const bool branch_taken_0x2b603c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b603c) {
            ctx->pc = 0x2B6058u;
            goto label_2b6058;
        }
    }
    ctx->pc = 0x2B6044u;
label_2b6044:
    // 0x2b6044: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2b6044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2b6048:
    // 0x2b6048: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2b6048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2b604c:
    // 0x2b604c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b604cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b6050:
    // 0x2b6050: 0x0  nop
    ctx->pc = 0x2b6050u;
    // NOP
label_2b6054:
    // 0x2b6054: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b6054u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b6058:
    // 0x2b6058: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2b6058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2b605c:
    // 0x2b605c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2b605cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2b6060:
    // 0x2b6060: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b6060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b6064:
    // 0x2b6064: 0x0  nop
    ctx->pc = 0x2b6064u;
    // NOP
label_2b6068:
    // 0x2b6068: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b6068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b606c:
    // 0x2b606c: 0x0  nop
    ctx->pc = 0x2b606cu;
    // NOP
label_2b6070:
    // 0x2b6070: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2b6074:
    if (ctx->pc == 0x2B6074u) {
        ctx->pc = 0x2B6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6070u;
        // 0x2b6074: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6078u;
        goto label_2b6078;
    }
    ctx->pc = 0x2B6070u;
    {
        const bool branch_taken_0x2b6070 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6070) {
            ctx->pc = 0x2B6074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6070u;
            // 0x2b6074: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6078u;
            goto label_2b6078;
        }
    }
    ctx->pc = 0x2B6078u;
label_2b6078:
    // 0x2b6078: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2b6078u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2b607c:
    // 0x2b607c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2b607cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2b6080:
    // 0x2b6080: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2b6080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2b6084:
    // 0x2b6084: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2b6084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2b6088:
    // 0x2b6088: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2b6088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2b608c:
    // 0x2b608c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2b608cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b6090:
    // 0x2b6090: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2b6090u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b6094:
    // 0x2b6094: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2b6094u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b6098:
    // 0x2b6098: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2b6098u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b609c:
    // 0x2b609c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x2b609cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b60a0:
    // 0x2b60a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b60a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b60a4:
    // 0x2b60a4: 0x3e00008  jr          $ra
label_2b60a8:
    if (ctx->pc == 0x2B60A8u) {
        ctx->pc = 0x2B60A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60A4u;
        // 0x2b60a8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B60ACu;
        goto label_2b60ac;
    }
    ctx->pc = 0x2B60A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B60A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60A4u;
        // 0x2b60a8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B60A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B60ACu;
label_2b60ac:
    // 0x2b60ac: 0x0  nop
    ctx->pc = 0x2b60acu;
    // NOP
    ctx->pc = 0x2b60b0u;
}
