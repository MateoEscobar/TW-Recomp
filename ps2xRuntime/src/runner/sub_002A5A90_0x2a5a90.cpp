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

// Function: sub_002A5A90
// Address: 0x2a5a90 - 0x2a5fd8
void sub_002A5A90_0x2a5a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5A90_0x2a5a90");
#endif

    switch (ctx->pc) {
        case 0x2a5a90u: goto label_2a5a90;
        case 0x2a5a94u: goto label_2a5a94;
        case 0x2a5a98u: goto label_2a5a98;
        case 0x2a5a9cu: goto label_2a5a9c;
        case 0x2a5aa0u: goto label_2a5aa0;
        case 0x2a5aa4u: goto label_2a5aa4;
        case 0x2a5aa8u: goto label_2a5aa8;
        case 0x2a5aacu: goto label_2a5aac;
        case 0x2a5ab0u: goto label_2a5ab0;
        case 0x2a5ab4u: goto label_2a5ab4;
        case 0x2a5ab8u: goto label_2a5ab8;
        case 0x2a5abcu: goto label_2a5abc;
        case 0x2a5ac0u: goto label_2a5ac0;
        case 0x2a5ac4u: goto label_2a5ac4;
        case 0x2a5ac8u: goto label_2a5ac8;
        case 0x2a5accu: goto label_2a5acc;
        case 0x2a5ad0u: goto label_2a5ad0;
        case 0x2a5ad4u: goto label_2a5ad4;
        case 0x2a5ad8u: goto label_2a5ad8;
        case 0x2a5adcu: goto label_2a5adc;
        case 0x2a5ae0u: goto label_2a5ae0;
        case 0x2a5ae4u: goto label_2a5ae4;
        case 0x2a5ae8u: goto label_2a5ae8;
        case 0x2a5aecu: goto label_2a5aec;
        case 0x2a5af0u: goto label_2a5af0;
        case 0x2a5af4u: goto label_2a5af4;
        case 0x2a5af8u: goto label_2a5af8;
        case 0x2a5afcu: goto label_2a5afc;
        case 0x2a5b00u: goto label_2a5b00;
        case 0x2a5b04u: goto label_2a5b04;
        case 0x2a5b08u: goto label_2a5b08;
        case 0x2a5b0cu: goto label_2a5b0c;
        case 0x2a5b10u: goto label_2a5b10;
        case 0x2a5b14u: goto label_2a5b14;
        case 0x2a5b18u: goto label_2a5b18;
        case 0x2a5b1cu: goto label_2a5b1c;
        case 0x2a5b20u: goto label_2a5b20;
        case 0x2a5b24u: goto label_2a5b24;
        case 0x2a5b28u: goto label_2a5b28;
        case 0x2a5b2cu: goto label_2a5b2c;
        case 0x2a5b30u: goto label_2a5b30;
        case 0x2a5b34u: goto label_2a5b34;
        case 0x2a5b38u: goto label_2a5b38;
        case 0x2a5b3cu: goto label_2a5b3c;
        case 0x2a5b40u: goto label_2a5b40;
        case 0x2a5b44u: goto label_2a5b44;
        case 0x2a5b48u: goto label_2a5b48;
        case 0x2a5b4cu: goto label_2a5b4c;
        case 0x2a5b50u: goto label_2a5b50;
        case 0x2a5b54u: goto label_2a5b54;
        case 0x2a5b58u: goto label_2a5b58;
        case 0x2a5b5cu: goto label_2a5b5c;
        case 0x2a5b60u: goto label_2a5b60;
        case 0x2a5b64u: goto label_2a5b64;
        case 0x2a5b68u: goto label_2a5b68;
        case 0x2a5b6cu: goto label_2a5b6c;
        case 0x2a5b70u: goto label_2a5b70;
        case 0x2a5b74u: goto label_2a5b74;
        case 0x2a5b78u: goto label_2a5b78;
        case 0x2a5b7cu: goto label_2a5b7c;
        case 0x2a5b80u: goto label_2a5b80;
        case 0x2a5b84u: goto label_2a5b84;
        case 0x2a5b88u: goto label_2a5b88;
        case 0x2a5b8cu: goto label_2a5b8c;
        case 0x2a5b90u: goto label_2a5b90;
        case 0x2a5b94u: goto label_2a5b94;
        case 0x2a5b98u: goto label_2a5b98;
        case 0x2a5b9cu: goto label_2a5b9c;
        case 0x2a5ba0u: goto label_2a5ba0;
        case 0x2a5ba4u: goto label_2a5ba4;
        case 0x2a5ba8u: goto label_2a5ba8;
        case 0x2a5bacu: goto label_2a5bac;
        case 0x2a5bb0u: goto label_2a5bb0;
        case 0x2a5bb4u: goto label_2a5bb4;
        case 0x2a5bb8u: goto label_2a5bb8;
        case 0x2a5bbcu: goto label_2a5bbc;
        case 0x2a5bc0u: goto label_2a5bc0;
        case 0x2a5bc4u: goto label_2a5bc4;
        case 0x2a5bc8u: goto label_2a5bc8;
        case 0x2a5bccu: goto label_2a5bcc;
        case 0x2a5bd0u: goto label_2a5bd0;
        case 0x2a5bd4u: goto label_2a5bd4;
        case 0x2a5bd8u: goto label_2a5bd8;
        case 0x2a5bdcu: goto label_2a5bdc;
        case 0x2a5be0u: goto label_2a5be0;
        case 0x2a5be4u: goto label_2a5be4;
        case 0x2a5be8u: goto label_2a5be8;
        case 0x2a5becu: goto label_2a5bec;
        case 0x2a5bf0u: goto label_2a5bf0;
        case 0x2a5bf4u: goto label_2a5bf4;
        case 0x2a5bf8u: goto label_2a5bf8;
        case 0x2a5bfcu: goto label_2a5bfc;
        case 0x2a5c00u: goto label_2a5c00;
        case 0x2a5c04u: goto label_2a5c04;
        case 0x2a5c08u: goto label_2a5c08;
        case 0x2a5c0cu: goto label_2a5c0c;
        case 0x2a5c10u: goto label_2a5c10;
        case 0x2a5c14u: goto label_2a5c14;
        case 0x2a5c18u: goto label_2a5c18;
        case 0x2a5c1cu: goto label_2a5c1c;
        case 0x2a5c20u: goto label_2a5c20;
        case 0x2a5c24u: goto label_2a5c24;
        case 0x2a5c28u: goto label_2a5c28;
        case 0x2a5c2cu: goto label_2a5c2c;
        case 0x2a5c30u: goto label_2a5c30;
        case 0x2a5c34u: goto label_2a5c34;
        case 0x2a5c38u: goto label_2a5c38;
        case 0x2a5c3cu: goto label_2a5c3c;
        case 0x2a5c40u: goto label_2a5c40;
        case 0x2a5c44u: goto label_2a5c44;
        case 0x2a5c48u: goto label_2a5c48;
        case 0x2a5c4cu: goto label_2a5c4c;
        case 0x2a5c50u: goto label_2a5c50;
        case 0x2a5c54u: goto label_2a5c54;
        case 0x2a5c58u: goto label_2a5c58;
        case 0x2a5c5cu: goto label_2a5c5c;
        case 0x2a5c60u: goto label_2a5c60;
        case 0x2a5c64u: goto label_2a5c64;
        case 0x2a5c68u: goto label_2a5c68;
        case 0x2a5c6cu: goto label_2a5c6c;
        case 0x2a5c70u: goto label_2a5c70;
        case 0x2a5c74u: goto label_2a5c74;
        case 0x2a5c78u: goto label_2a5c78;
        case 0x2a5c7cu: goto label_2a5c7c;
        case 0x2a5c80u: goto label_2a5c80;
        case 0x2a5c84u: goto label_2a5c84;
        case 0x2a5c88u: goto label_2a5c88;
        case 0x2a5c8cu: goto label_2a5c8c;
        case 0x2a5c90u: goto label_2a5c90;
        case 0x2a5c94u: goto label_2a5c94;
        case 0x2a5c98u: goto label_2a5c98;
        case 0x2a5c9cu: goto label_2a5c9c;
        case 0x2a5ca0u: goto label_2a5ca0;
        case 0x2a5ca4u: goto label_2a5ca4;
        case 0x2a5ca8u: goto label_2a5ca8;
        case 0x2a5cacu: goto label_2a5cac;
        case 0x2a5cb0u: goto label_2a5cb0;
        case 0x2a5cb4u: goto label_2a5cb4;
        case 0x2a5cb8u: goto label_2a5cb8;
        case 0x2a5cbcu: goto label_2a5cbc;
        case 0x2a5cc0u: goto label_2a5cc0;
        case 0x2a5cc4u: goto label_2a5cc4;
        case 0x2a5cc8u: goto label_2a5cc8;
        case 0x2a5cccu: goto label_2a5ccc;
        case 0x2a5cd0u: goto label_2a5cd0;
        case 0x2a5cd4u: goto label_2a5cd4;
        case 0x2a5cd8u: goto label_2a5cd8;
        case 0x2a5cdcu: goto label_2a5cdc;
        case 0x2a5ce0u: goto label_2a5ce0;
        case 0x2a5ce4u: goto label_2a5ce4;
        case 0x2a5ce8u: goto label_2a5ce8;
        case 0x2a5cecu: goto label_2a5cec;
        case 0x2a5cf0u: goto label_2a5cf0;
        case 0x2a5cf4u: goto label_2a5cf4;
        case 0x2a5cf8u: goto label_2a5cf8;
        case 0x2a5cfcu: goto label_2a5cfc;
        case 0x2a5d00u: goto label_2a5d00;
        case 0x2a5d04u: goto label_2a5d04;
        case 0x2a5d08u: goto label_2a5d08;
        case 0x2a5d0cu: goto label_2a5d0c;
        case 0x2a5d10u: goto label_2a5d10;
        case 0x2a5d14u: goto label_2a5d14;
        case 0x2a5d18u: goto label_2a5d18;
        case 0x2a5d1cu: goto label_2a5d1c;
        case 0x2a5d20u: goto label_2a5d20;
        case 0x2a5d24u: goto label_2a5d24;
        case 0x2a5d28u: goto label_2a5d28;
        case 0x2a5d2cu: goto label_2a5d2c;
        case 0x2a5d30u: goto label_2a5d30;
        case 0x2a5d34u: goto label_2a5d34;
        case 0x2a5d38u: goto label_2a5d38;
        case 0x2a5d3cu: goto label_2a5d3c;
        case 0x2a5d40u: goto label_2a5d40;
        case 0x2a5d44u: goto label_2a5d44;
        case 0x2a5d48u: goto label_2a5d48;
        case 0x2a5d4cu: goto label_2a5d4c;
        case 0x2a5d50u: goto label_2a5d50;
        case 0x2a5d54u: goto label_2a5d54;
        case 0x2a5d58u: goto label_2a5d58;
        case 0x2a5d5cu: goto label_2a5d5c;
        case 0x2a5d60u: goto label_2a5d60;
        case 0x2a5d64u: goto label_2a5d64;
        case 0x2a5d68u: goto label_2a5d68;
        case 0x2a5d6cu: goto label_2a5d6c;
        case 0x2a5d70u: goto label_2a5d70;
        case 0x2a5d74u: goto label_2a5d74;
        case 0x2a5d78u: goto label_2a5d78;
        case 0x2a5d7cu: goto label_2a5d7c;
        case 0x2a5d80u: goto label_2a5d80;
        case 0x2a5d84u: goto label_2a5d84;
        case 0x2a5d88u: goto label_2a5d88;
        case 0x2a5d8cu: goto label_2a5d8c;
        case 0x2a5d90u: goto label_2a5d90;
        case 0x2a5d94u: goto label_2a5d94;
        case 0x2a5d98u: goto label_2a5d98;
        case 0x2a5d9cu: goto label_2a5d9c;
        case 0x2a5da0u: goto label_2a5da0;
        case 0x2a5da4u: goto label_2a5da4;
        case 0x2a5da8u: goto label_2a5da8;
        case 0x2a5dacu: goto label_2a5dac;
        case 0x2a5db0u: goto label_2a5db0;
        case 0x2a5db4u: goto label_2a5db4;
        case 0x2a5db8u: goto label_2a5db8;
        case 0x2a5dbcu: goto label_2a5dbc;
        case 0x2a5dc0u: goto label_2a5dc0;
        case 0x2a5dc4u: goto label_2a5dc4;
        case 0x2a5dc8u: goto label_2a5dc8;
        case 0x2a5dccu: goto label_2a5dcc;
        case 0x2a5dd0u: goto label_2a5dd0;
        case 0x2a5dd4u: goto label_2a5dd4;
        case 0x2a5dd8u: goto label_2a5dd8;
        case 0x2a5ddcu: goto label_2a5ddc;
        case 0x2a5de0u: goto label_2a5de0;
        case 0x2a5de4u: goto label_2a5de4;
        case 0x2a5de8u: goto label_2a5de8;
        case 0x2a5decu: goto label_2a5dec;
        case 0x2a5df0u: goto label_2a5df0;
        case 0x2a5df4u: goto label_2a5df4;
        case 0x2a5df8u: goto label_2a5df8;
        case 0x2a5dfcu: goto label_2a5dfc;
        case 0x2a5e00u: goto label_2a5e00;
        case 0x2a5e04u: goto label_2a5e04;
        case 0x2a5e08u: goto label_2a5e08;
        case 0x2a5e0cu: goto label_2a5e0c;
        case 0x2a5e10u: goto label_2a5e10;
        case 0x2a5e14u: goto label_2a5e14;
        case 0x2a5e18u: goto label_2a5e18;
        case 0x2a5e1cu: goto label_2a5e1c;
        case 0x2a5e20u: goto label_2a5e20;
        case 0x2a5e24u: goto label_2a5e24;
        case 0x2a5e28u: goto label_2a5e28;
        case 0x2a5e2cu: goto label_2a5e2c;
        case 0x2a5e30u: goto label_2a5e30;
        case 0x2a5e34u: goto label_2a5e34;
        case 0x2a5e38u: goto label_2a5e38;
        case 0x2a5e3cu: goto label_2a5e3c;
        case 0x2a5e40u: goto label_2a5e40;
        case 0x2a5e44u: goto label_2a5e44;
        case 0x2a5e48u: goto label_2a5e48;
        case 0x2a5e4cu: goto label_2a5e4c;
        case 0x2a5e50u: goto label_2a5e50;
        case 0x2a5e54u: goto label_2a5e54;
        case 0x2a5e58u: goto label_2a5e58;
        case 0x2a5e5cu: goto label_2a5e5c;
        case 0x2a5e60u: goto label_2a5e60;
        case 0x2a5e64u: goto label_2a5e64;
        case 0x2a5e68u: goto label_2a5e68;
        case 0x2a5e6cu: goto label_2a5e6c;
        case 0x2a5e70u: goto label_2a5e70;
        case 0x2a5e74u: goto label_2a5e74;
        case 0x2a5e78u: goto label_2a5e78;
        case 0x2a5e7cu: goto label_2a5e7c;
        case 0x2a5e80u: goto label_2a5e80;
        case 0x2a5e84u: goto label_2a5e84;
        case 0x2a5e88u: goto label_2a5e88;
        case 0x2a5e8cu: goto label_2a5e8c;
        case 0x2a5e90u: goto label_2a5e90;
        case 0x2a5e94u: goto label_2a5e94;
        case 0x2a5e98u: goto label_2a5e98;
        case 0x2a5e9cu: goto label_2a5e9c;
        case 0x2a5ea0u: goto label_2a5ea0;
        case 0x2a5ea4u: goto label_2a5ea4;
        case 0x2a5ea8u: goto label_2a5ea8;
        case 0x2a5eacu: goto label_2a5eac;
        case 0x2a5eb0u: goto label_2a5eb0;
        case 0x2a5eb4u: goto label_2a5eb4;
        case 0x2a5eb8u: goto label_2a5eb8;
        case 0x2a5ebcu: goto label_2a5ebc;
        case 0x2a5ec0u: goto label_2a5ec0;
        case 0x2a5ec4u: goto label_2a5ec4;
        case 0x2a5ec8u: goto label_2a5ec8;
        case 0x2a5eccu: goto label_2a5ecc;
        case 0x2a5ed0u: goto label_2a5ed0;
        case 0x2a5ed4u: goto label_2a5ed4;
        case 0x2a5ed8u: goto label_2a5ed8;
        case 0x2a5edcu: goto label_2a5edc;
        case 0x2a5ee0u: goto label_2a5ee0;
        case 0x2a5ee4u: goto label_2a5ee4;
        case 0x2a5ee8u: goto label_2a5ee8;
        case 0x2a5eecu: goto label_2a5eec;
        case 0x2a5ef0u: goto label_2a5ef0;
        case 0x2a5ef4u: goto label_2a5ef4;
        case 0x2a5ef8u: goto label_2a5ef8;
        case 0x2a5efcu: goto label_2a5efc;
        case 0x2a5f00u: goto label_2a5f00;
        case 0x2a5f04u: goto label_2a5f04;
        case 0x2a5f08u: goto label_2a5f08;
        case 0x2a5f0cu: goto label_2a5f0c;
        case 0x2a5f10u: goto label_2a5f10;
        case 0x2a5f14u: goto label_2a5f14;
        case 0x2a5f18u: goto label_2a5f18;
        case 0x2a5f1cu: goto label_2a5f1c;
        case 0x2a5f20u: goto label_2a5f20;
        case 0x2a5f24u: goto label_2a5f24;
        case 0x2a5f28u: goto label_2a5f28;
        case 0x2a5f2cu: goto label_2a5f2c;
        case 0x2a5f30u: goto label_2a5f30;
        case 0x2a5f34u: goto label_2a5f34;
        case 0x2a5f38u: goto label_2a5f38;
        case 0x2a5f3cu: goto label_2a5f3c;
        case 0x2a5f40u: goto label_2a5f40;
        case 0x2a5f44u: goto label_2a5f44;
        case 0x2a5f48u: goto label_2a5f48;
        case 0x2a5f4cu: goto label_2a5f4c;
        case 0x2a5f50u: goto label_2a5f50;
        case 0x2a5f54u: goto label_2a5f54;
        case 0x2a5f58u: goto label_2a5f58;
        case 0x2a5f5cu: goto label_2a5f5c;
        case 0x2a5f60u: goto label_2a5f60;
        case 0x2a5f64u: goto label_2a5f64;
        case 0x2a5f68u: goto label_2a5f68;
        case 0x2a5f6cu: goto label_2a5f6c;
        case 0x2a5f70u: goto label_2a5f70;
        case 0x2a5f74u: goto label_2a5f74;
        case 0x2a5f78u: goto label_2a5f78;
        case 0x2a5f7cu: goto label_2a5f7c;
        case 0x2a5f80u: goto label_2a5f80;
        case 0x2a5f84u: goto label_2a5f84;
        case 0x2a5f88u: goto label_2a5f88;
        case 0x2a5f8cu: goto label_2a5f8c;
        case 0x2a5f90u: goto label_2a5f90;
        case 0x2a5f94u: goto label_2a5f94;
        case 0x2a5f98u: goto label_2a5f98;
        case 0x2a5f9cu: goto label_2a5f9c;
        case 0x2a5fa0u: goto label_2a5fa0;
        case 0x2a5fa4u: goto label_2a5fa4;
        case 0x2a5fa8u: goto label_2a5fa8;
        case 0x2a5facu: goto label_2a5fac;
        case 0x2a5fb0u: goto label_2a5fb0;
        case 0x2a5fb4u: goto label_2a5fb4;
        case 0x2a5fb8u: goto label_2a5fb8;
        case 0x2a5fbcu: goto label_2a5fbc;
        case 0x2a5fc0u: goto label_2a5fc0;
        case 0x2a5fc4u: goto label_2a5fc4;
        case 0x2a5fc8u: goto label_2a5fc8;
        case 0x2a5fccu: goto label_2a5fcc;
        case 0x2a5fd0u: goto label_2a5fd0;
        case 0x2a5fd4u: goto label_2a5fd4;
        default: break;
    }

    ctx->pc = 0x2a5a90u;

label_2a5a90:
    // 0x2a5a90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a5a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2a5a94:
    // 0x2a5a94: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2a5a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2a5a98:
    // 0x2a5a98: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2a5a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2a5a9c:
    // 0x2a5a9c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2a5a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a5aa0:
    // 0x2a5aa0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2a5aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2a5aa4:
    // 0x2a5aa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a5aa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5aa8:
    // 0x2a5aa8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2a5aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2a5aac:
    // 0x2a5aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ab0:
    // 0x2a5ab0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a5ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2a5ab4:
    // 0x2a5ab4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2a5ab4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2a5ab8:
    // 0x2a5ab8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a5ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a5abc:
    // 0x2a5abc: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2a5abcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a5ac0:
    // 0x2a5ac0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a5ac4:
    // 0x2a5ac4: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2a5ac4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2a5ac8:
    // 0x2a5ac8: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2a5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2a5acc:
    // 0x2a5acc: 0x60f809  jalr        $v1
label_2a5ad0:
    if (ctx->pc == 0x2A5AD0u) {
        ctx->pc = 0x2A5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5ACCu;
        // 0x2a5ad0: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5AD4u;
        goto label_2a5ad4;
    }
    ctx->pc = 0x2A5ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A5AD4u);
        ctx->pc = 0x2A5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5ACCu;
        // 0x2a5ad0: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5ACCu, 0x2A5AD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5AD4u;
label_2a5ad4:
    // 0x2a5ad4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2a5ad4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a5ad8:
    // 0x2a5ad8: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2a5ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2a5adc:
    // 0x2a5adc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2a5adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2a5ae0:
    // 0x2a5ae0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2a5ae4:
    if (ctx->pc == 0x2A5AE4u) {
        ctx->pc = 0x2A5AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5AE0u;
        // 0x2a5ae4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5AE8u;
        goto label_2a5ae8;
    }
    ctx->pc = 0x2A5AE0u;
    {
        const bool branch_taken_0x2a5ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5AE0u;
        // 0x2a5ae4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ae0) {
            ctx->pc = 0x2A5B04u;
            goto label_2a5b04;
        }
    }
    ctx->pc = 0x2A5AE8u;
label_2a5ae8:
    // 0x2a5ae8: 0xc10587a  jal         func_4161E8
label_2a5aec:
    if (ctx->pc == 0x2A5AECu) {
        ctx->pc = 0x2A5AF0u;
        goto label_2a5af0;
    }
    ctx->pc = 0x2A5AE8u;
    SET_GPR_U32(ctx, 31, 0x2A5AF0u);
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A5AE8u, 0x2A5AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AF0u;
label_2a5af0:
    // 0x2a5af0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2a5af0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a5af4:
    // 0x2a5af4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a5af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a5af8:
    // 0x2a5af8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a5af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a5afc:
    // 0x2a5afc: 0xc0cdb38  jal         func_336CE0
label_2a5b00:
    if (ctx->pc == 0x2A5B00u) {
        ctx->pc = 0x2A5B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5AFCu;
        // 0x2a5b00: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5B04u;
        goto label_2a5b04;
    }
    ctx->pc = 0x2A5AFCu;
    SET_GPR_U32(ctx, 31, 0x2A5B04u);
    ctx->pc = 0x2A5B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5AFCu;
    // 0x2a5b00: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2A5AFCu, 0x2A5B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B04u;
label_2a5b04:
    // 0x2a5b04: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a5b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2a5b08:
    // 0x2a5b08: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2a5b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2a5b0c:
    // 0x2a5b0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a5b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5b10:
    // 0x2a5b10: 0x24a5be58  addiu       $a1, $a1, -0x41A8
    ctx->pc = 0x2a5b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950488));
label_2a5b14:
    // 0x2a5b14: 0xc0a72ee  jal         func_29CBB8
label_2a5b18:
    if (ctx->pc == 0x2A5B18u) {
        ctx->pc = 0x2A5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B14u;
        // 0x2a5b18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5B1Cu;
        goto label_2a5b1c;
    }
    ctx->pc = 0x2A5B14u;
    SET_GPR_U32(ctx, 31, 0x2A5B1Cu);
    ctx->pc = 0x2A5B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B14u;
    // 0x2a5b18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CBB8u, 0x2A5B14u, 0x2A5B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B1Cu;
label_2a5b1c:
    // 0x2a5b1c: 0x3c014874  lui         $at, 0x4874
    ctx->pc = 0x2a5b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18548 << 16));
label_2a5b20:
    // 0x2a5b20: 0x34212400  ori         $at, $at, 0x2400
    ctx->pc = 0x2a5b20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9216);
label_2a5b24:
    // 0x2a5b24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a5b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2a5b28:
    // 0x2a5b28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a5b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5b2c:
    // 0x2a5b2c: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_2a5b30:
    if (ctx->pc == 0x2A5B30u) {
        ctx->pc = 0x2A5B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B2Cu;
        // 0x2a5b30: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5B34u;
        goto label_2a5b34;
    }
    ctx->pc = 0x2A5B2Cu;
    {
        const bool branch_taken_0x2a5b2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B2Cu;
        // 0x2a5b30: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5b2c) {
            ctx->pc = 0x2A5B60u;
            goto label_2a5b60;
        }
    }
    ctx->pc = 0x2A5B34u;
label_2a5b34:
    // 0x2a5b34: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a5b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a5b38:
    // 0x2a5b38: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2a5b38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2a5b3c:
    // 0x2a5b3c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2a5b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2a5b40:
    // 0x2a5b40: 0x60f809  jalr        $v1
label_2a5b44:
    if (ctx->pc == 0x2A5B44u) {
        ctx->pc = 0x2A5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B40u;
        // 0x2a5b44: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5B48u;
        goto label_2a5b48;
    }
    ctx->pc = 0x2A5B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A5B48u);
        ctx->pc = 0x2A5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B40u;
        // 0x2a5b44: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5B40u, 0x2A5B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5B48u;
label_2a5b48:
    // 0x2a5b48: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2a5b48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a5b4c:
    // 0x2a5b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5b50:
    // 0x2a5b50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a5b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a5b54:
    // 0x2a5b54: 0xc0cdb38  jal         func_336CE0
label_2a5b58:
    if (ctx->pc == 0x2A5B58u) {
        ctx->pc = 0x2A5B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B54u;
        // 0x2a5b58: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5B5Cu;
        goto label_2a5b5c;
    }
    ctx->pc = 0x2A5B54u;
    SET_GPR_U32(ctx, 31, 0x2A5B5Cu);
    ctx->pc = 0x2A5B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B54u;
    // 0x2a5b58: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2A5B54u, 0x2A5B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B5Cu;
label_2a5b5c:
    // 0x2a5b5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2a5b5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2a5b60:
    // 0x2a5b60: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x2a5b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_2a5b64:
    // 0x2a5b64: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2a5b68:
    if (ctx->pc == 0x2A5B68u) {
        ctx->pc = 0x2A5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B64u;
        // 0x2a5b68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5B6Cu;
        goto label_2a5b6c;
    }
    ctx->pc = 0x2A5B64u;
    {
        const bool branch_taken_0x2a5b64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B64u;
        // 0x2a5b68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5b64) {
            ctx->pc = 0x2A5B80u;
            goto label_2a5b80;
        }
    }
    ctx->pc = 0x2A5B6Cu;
label_2a5b6c:
    // 0x2a5b6c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2a5b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a5b70:
    // 0x2a5b70: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2a5b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a5b74:
    // 0x2a5b74: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2a5b74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a5b78:
    // 0x2a5b78: 0x1460010f  bnez        $v1, . + 4 + (0x10F << 2)
label_2a5b7c:
    if (ctx->pc == 0x2A5B7Cu) {
        ctx->pc = 0x2A5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B78u;
        // 0x2a5b7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5B80u;
        goto label_2a5b80;
    }
    ctx->pc = 0x2A5B78u;
    {
        const bool branch_taken_0x2a5b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B78u;
        // 0x2a5b7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5b78) {
            ctx->pc = 0x2A5FB8u;
            goto label_2a5fb8;
        }
    }
    ctx->pc = 0x2A5B80u;
label_2a5b80:
    // 0x2a5b80: 0x86630018  lh          $v1, 0x18($s3)
    ctx->pc = 0x2a5b80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_2a5b84:
    // 0x2a5b84: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2a5b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5b88:
    // 0x2a5b88: 0x1070001e  beq         $v1, $s0, . + 4 + (0x1E << 2)
label_2a5b8c:
    if (ctx->pc == 0x2A5B8Cu) {
        ctx->pc = 0x2A5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B88u;
        // 0x2a5b8c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5B90u;
        goto label_2a5b90;
    }
    ctx->pc = 0x2A5B88u;
    {
        const bool branch_taken_0x2a5b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2A5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B88u;
        // 0x2a5b8c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5b88) {
            ctx->pc = 0x2A5C04u;
            goto label_2a5c04;
        }
    }
    ctx->pc = 0x2A5B90u;
label_2a5b90:
    // 0x2a5b90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a5b94:
    if (ctx->pc == 0x2A5B94u) {
        ctx->pc = 0x2A5B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B90u;
        // 0x2a5b94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5B98u;
        goto label_2a5b98;
    }
    ctx->pc = 0x2A5B90u;
    {
        const bool branch_taken_0x2a5b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B90u;
        // 0x2a5b94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5b90) {
            ctx->pc = 0x2A5BA8u;
            goto label_2a5ba8;
        }
    }
    ctx->pc = 0x2A5B98u;
label_2a5b98:
    // 0x2a5b98: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2a5b9c:
    if (ctx->pc == 0x2A5B9Cu) {
        ctx->pc = 0x2A5B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B98u;
        // 0x2a5b9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5BA0u;
        goto label_2a5ba0;
    }
    ctx->pc = 0x2A5B98u;
    {
        const bool branch_taken_0x2a5b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B98u;
        // 0x2a5b9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5b98) {
            ctx->pc = 0x2A5BB8u;
            goto label_2a5bb8;
        }
    }
    ctx->pc = 0x2A5BA0u;
label_2a5ba0:
    // 0x2a5ba0: 0x10000106  b           . + 4 + (0x106 << 2)
label_2a5ba4:
    if (ctx->pc == 0x2A5BA4u) {
        ctx->pc = 0x2A5BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BA0u;
        // 0x2a5ba4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5BA8u;
        goto label_2a5ba8;
    }
    ctx->pc = 0x2A5BA0u;
    {
        const bool branch_taken_0x2a5ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BA0u;
        // 0x2a5ba4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ba0) {
            ctx->pc = 0x2A5FBCu;
            goto label_2a5fbc;
        }
    }
    ctx->pc = 0x2A5BA8u;
label_2a5ba8:
    // 0x2a5ba8: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
label_2a5bac:
    if (ctx->pc == 0x2A5BACu) {
        ctx->pc = 0x2A5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BA8u;
        // 0x2a5bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5BB0u;
        goto label_2a5bb0;
    }
    ctx->pc = 0x2A5BA8u;
    {
        const bool branch_taken_0x2a5ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BA8u;
        // 0x2a5bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ba8) {
            ctx->pc = 0x2A5CECu;
            goto label_2a5cec;
        }
    }
    ctx->pc = 0x2A5BB0u;
label_2a5bb0:
    // 0x2a5bb0: 0x10000102  b           . + 4 + (0x102 << 2)
label_2a5bb4:
    if (ctx->pc == 0x2A5BB4u) {
        ctx->pc = 0x2A5BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BB0u;
        // 0x2a5bb4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5BB8u;
        goto label_2a5bb8;
    }
    ctx->pc = 0x2A5BB0u;
    {
        const bool branch_taken_0x2a5bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BB0u;
        // 0x2a5bb4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5bb0) {
            ctx->pc = 0x2A5FBCu;
            goto label_2a5fbc;
        }
    }
    ctx->pc = 0x2A5BB8u;
label_2a5bb8:
    // 0x2a5bb8: 0xc08bfb4  jal         func_22FED0
label_2a5bbc:
    if (ctx->pc == 0x2A5BBCu) {
        ctx->pc = 0x2A5BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BB8u;
        // 0x2a5bbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5BC0u;
        goto label_2a5bc0;
    }
    ctx->pc = 0x2A5BB8u;
    SET_GPR_U32(ctx, 31, 0x2A5BC0u);
    ctx->pc = 0x2A5BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5BB8u;
    // 0x2a5bbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FED0u, 0x2A5BB8u, 0x2A5BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5BC0u;
label_2a5bc0:
    // 0x2a5bc0: 0xc0a367c  jal         func_28D9F0
label_2a5bc4:
    if (ctx->pc == 0x2A5BC4u) {
        ctx->pc = 0x2A5BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BC0u;
        // 0x2a5bc4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5BC8u;
        goto label_2a5bc8;
    }
    ctx->pc = 0x2A5BC0u;
    SET_GPR_U32(ctx, 31, 0x2A5BC8u);
    ctx->pc = 0x2A5BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5BC0u;
    // 0x2a5bc4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A5BC0u, 0x2A5BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5BC8u;
label_2a5bc8:
    // 0x2a5bc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5bcc:
    // 0x2a5bcc: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2a5bd0:
    if (ctx->pc == 0x2A5BD0u) {
        ctx->pc = 0x2A5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BCCu;
        // 0x2a5bd0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5BD4u;
        goto label_2a5bd4;
    }
    ctx->pc = 0x2A5BCCu;
    {
        const bool branch_taken_0x2a5bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BCCu;
        // 0x2a5bd0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5bcc) {
            ctx->pc = 0x2A5BFCu;
            goto label_2a5bfc;
        }
    }
    ctx->pc = 0x2A5BD4u;
label_2a5bd4:
    // 0x2a5bd4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2a5bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a5bd8:
    // 0x2a5bd8: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2a5bd8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2a5bdc:
    // 0x2a5bdc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a5bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a5be0:
    // 0x2a5be0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a5be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a5be4:
    // 0x2a5be4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a5be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5be8:
    // 0x2a5be8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2a5be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a5bec:
    // 0x2a5bec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a5becu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5bf0:
    // 0x2a5bf0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2a5bf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a5bf4:
    // 0x2a5bf4: 0xc0bee7a  jal         func_2FB9E8
label_2a5bf8:
    if (ctx->pc == 0x2A5BF8u) {
        ctx->pc = 0x2A5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BF4u;
        // 0x2a5bf8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5BFCu;
        goto label_2a5bfc;
    }
    ctx->pc = 0x2A5BF4u;
    SET_GPR_U32(ctx, 31, 0x2A5BFCu);
    ctx->pc = 0x2A5BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5BF4u;
    // 0x2a5bf8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A5BF4u, 0x2A5BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5BFCu;
label_2a5bfc:
    // 0x2a5bfc: 0x100000ed  b           . + 4 + (0xED << 2)
label_2a5c00:
    if (ctx->pc == 0x2A5C00u) {
        ctx->pc = 0x2A5C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BFCu;
        // 0x2a5c00: 0xa6700018  sh          $s0, 0x18($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5C04u;
        goto label_2a5c04;
    }
    ctx->pc = 0x2A5BFCu;
    {
        const bool branch_taken_0x2a5bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BFCu;
        // 0x2a5c00: 0xa6700018  sh          $s0, 0x18($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5bfc) {
            ctx->pc = 0x2A5FB4u;
            goto label_2a5fb4;
        }
    }
    ctx->pc = 0x2A5C04u;
label_2a5c04:
    // 0x2a5c04: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2a5c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a5c08:
    // 0x2a5c08: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a5c08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a5c0c:
    // 0x2a5c0c: 0x1c6000ea  bgtz        $v1, . + 4 + (0xEA << 2)
label_2a5c10:
    if (ctx->pc == 0x2A5C10u) {
        ctx->pc = 0x2A5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C0Cu;
        // 0x2a5c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5C14u;
        goto label_2a5c14;
    }
    ctx->pc = 0x2A5C0Cu;
    {
        const bool branch_taken_0x2a5c0c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C0Cu;
        // 0x2a5c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5c0c) {
            ctx->pc = 0x2A5FB8u;
            goto label_2a5fb8;
        }
    }
    ctx->pc = 0x2A5C14u;
label_2a5c14:
    // 0x2a5c14: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
label_2a5c18:
    if (ctx->pc == 0x2A5C18u) {
        ctx->pc = 0x2A5C1Cu;
        goto label_2a5c1c;
    }
    ctx->pc = 0x2A5C14u;
    {
        const bool branch_taken_0x2a5c14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c14) {
            ctx->pc = 0x2A5C84u;
            goto label_2a5c84;
        }
    }
    ctx->pc = 0x2A5C1Cu;
label_2a5c1c:
    // 0x2a5c1c: 0xae720014  sw          $s2, 0x14($s3)
    ctx->pc = 0x2a5c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 18));
label_2a5c20:
    // 0x2a5c20: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a5c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a5c24:
    // 0x2a5c24: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a5c24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a5c28:
    // 0x2a5c28: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a5c2c:
    // 0x2a5c2c: 0x40f809  jalr        $v0
label_2a5c30:
    if (ctx->pc == 0x2A5C30u) {
        ctx->pc = 0x2A5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C2Cu;
        // 0x2a5c30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5C34u;
        goto label_2a5c34;
    }
    ctx->pc = 0x2A5C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A5C34u);
        ctx->pc = 0x2A5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C2Cu;
        // 0x2a5c30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5C2Cu, 0x2A5C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5C34u;
label_2a5c34:
    // 0x2a5c34: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x2a5c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a5c38:
    // 0x2a5c38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a5c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5c3c:
    // 0x2a5c3c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a5c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a5c40:
    // 0x2a5c40: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a5c40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a5c44:
    // 0x2a5c44: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a5c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a5c48:
    // 0x2a5c48: 0x40f809  jalr        $v0
label_2a5c4c:
    if (ctx->pc == 0x2A5C4Cu) {
        ctx->pc = 0x2A5C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C48u;
        // 0x2a5c4c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5C50u;
        goto label_2a5c50;
    }
    ctx->pc = 0x2A5C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A5C50u);
        ctx->pc = 0x2A5C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C48u;
        // 0x2a5c4c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5C48u, 0x2A5C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5C50u;
label_2a5c50:
    // 0x2a5c50: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2a5c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_2a5c54:
    // 0x2a5c54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a5c54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a5c58:
    // 0x2a5c58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a5c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5c5c:
    // 0x2a5c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5c60:
    // 0x2a5c60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5c64:
    // 0x2a5c64: 0xc0bf832  jal         func_2FE0C8
label_2a5c68:
    if (ctx->pc == 0x2A5C68u) {
        ctx->pc = 0x2A5C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C64u;
        // 0x2a5c68: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5C6Cu;
        goto label_2a5c6c;
    }
    ctx->pc = 0x2A5C64u;
    SET_GPR_U32(ctx, 31, 0x2A5C6Cu);
    ctx->pc = 0x2A5C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C64u;
    // 0x2a5c68: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0C8u, 0x2A5C64u, 0x2A5C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C6Cu;
label_2a5c6c:
    // 0x2a5c6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a5c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a5c70:
    // 0x2a5c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a5c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a5c74:
    // 0x2a5c74: 0xc08bfa0  jal         func_22FE80
label_2a5c78:
    if (ctx->pc == 0x2A5C78u) {
        ctx->pc = 0x2A5C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C74u;
        // 0x2a5c78: 0xa6620018  sh          $v0, 0x18($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5C7Cu;
        goto label_2a5c7c;
    }
    ctx->pc = 0x2A5C74u;
    SET_GPR_U32(ctx, 31, 0x2A5C7Cu);
    ctx->pc = 0x2A5C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C74u;
    // 0x2a5c78: 0xa6620018  sh          $v0, 0x18($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2A5C74u, 0x2A5C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C7Cu;
label_2a5c7c:
    // 0x2a5c7c: 0x100000ce  b           . + 4 + (0xCE << 2)
label_2a5c80:
    if (ctx->pc == 0x2A5C80u) {
        ctx->pc = 0x2A5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C7Cu;
        // 0x2a5c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5C84u;
        goto label_2a5c84;
    }
    ctx->pc = 0x2A5C7Cu;
    {
        const bool branch_taken_0x2a5c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C7Cu;
        // 0x2a5c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5c7c) {
            ctx->pc = 0x2A5FB8u;
            goto label_2a5fb8;
        }
    }
    ctx->pc = 0x2A5C84u;
label_2a5c84:
    // 0x2a5c84: 0xc08bfb4  jal         func_22FED0
label_2a5c88:
    if (ctx->pc == 0x2A5C88u) {
        ctx->pc = 0x2A5C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C84u;
        // 0x2a5c88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5C8Cu;
        goto label_2a5c8c;
    }
    ctx->pc = 0x2A5C84u;
    SET_GPR_U32(ctx, 31, 0x2A5C8Cu);
    ctx->pc = 0x2A5C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C84u;
    // 0x2a5c88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FED0u, 0x2A5C84u, 0x2A5C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C8Cu;
label_2a5c8c:
    // 0x2a5c8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a5c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a5c90:
    // 0x2a5c90: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a5c90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a5c94:
    // 0x2a5c94: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a5c98:
    // 0x2a5c98: 0x40f809  jalr        $v0
label_2a5c9c:
    if (ctx->pc == 0x2A5C9Cu) {
        ctx->pc = 0x2A5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C98u;
        // 0x2a5c9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5CA0u;
        goto label_2a5ca0;
    }
    ctx->pc = 0x2A5C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A5CA0u);
        ctx->pc = 0x2A5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C98u;
        // 0x2a5c9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5C98u, 0x2A5CA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5CA0u;
label_2a5ca0:
    // 0x2a5ca0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2a5ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2a5ca4:
    // 0x2a5ca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a5ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ca8:
    // 0x2a5ca8: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2a5ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2a5cac:
    // 0x2a5cac: 0xc0e409a  jal         func_390268
label_2a5cb0:
    if (ctx->pc == 0x2A5CB0u) {
        ctx->pc = 0x2A5CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CACu;
        // 0x2a5cb0: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5CB4u;
        goto label_2a5cb4;
    }
    ctx->pc = 0x2A5CACu;
    SET_GPR_U32(ctx, 31, 0x2A5CB4u);
    ctx->pc = 0x2A5CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5CACu;
    // 0x2a5cb0: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A5CACu, 0x2A5CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CB4u;
label_2a5cb4:
    // 0x2a5cb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a5cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a5cb8:
    // 0x2a5cb8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a5cb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a5cbc:
    // 0x2a5cbc: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x2a5cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a5cc0:
    // 0x2a5cc0: 0xa0f809  jalr        $a1
label_2a5cc4:
    if (ctx->pc == 0x2A5CC4u) {
        ctx->pc = 0x2A5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CC0u;
        // 0x2a5cc4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5CC8u;
        goto label_2a5cc8;
    }
    ctx->pc = 0x2A5CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2A5CC8u);
        ctx->pc = 0x2A5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CC0u;
        // 0x2a5cc4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5CC0u, 0x2A5CC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5CC8u;
label_2a5cc8:
    // 0x2a5cc8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2a5cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2a5ccc:
    // 0x2a5ccc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a5cccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a5cd0:
    // 0x2a5cd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a5cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5cd4:
    // 0x2a5cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5cd8:
    // 0x2a5cd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5cdc:
    // 0x2a5cdc: 0xc0bf832  jal         func_2FE0C8
label_2a5ce0:
    if (ctx->pc == 0x2A5CE0u) {
        ctx->pc = 0x2A5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CDCu;
        // 0x2a5ce0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5CE4u;
        goto label_2a5ce4;
    }
    ctx->pc = 0x2A5CDCu;
    SET_GPR_U32(ctx, 31, 0x2A5CE4u);
    ctx->pc = 0x2A5CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5CDCu;
    // 0x2a5ce0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0C8u, 0x2A5CDCu, 0x2A5CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CE4u;
label_2a5ce4:
    // 0x2a5ce4: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_2a5ce8:
    if (ctx->pc == 0x2A5CE8u) {
        ctx->pc = 0x2A5CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CE4u;
        // 0x2a5ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5CECu;
        goto label_2a5cec;
    }
    ctx->pc = 0x2A5CE4u;
    {
        const bool branch_taken_0x2a5ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CE4u;
        // 0x2a5ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ce4) {
            ctx->pc = 0x2A5FB8u;
            goto label_2a5fb8;
        }
    }
    ctx->pc = 0x2A5CECu;
label_2a5cec:
    // 0x2a5cec: 0x86620020  lh          $v0, 0x20($s3)
    ctx->pc = 0x2a5cecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_2a5cf0:
    // 0x2a5cf0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2a5cf4:
    if (ctx->pc == 0x2A5CF4u) {
        ctx->pc = 0x2A5CF8u;
        goto label_2a5cf8;
    }
    ctx->pc = 0x2A5CF0u;
    {
        const bool branch_taken_0x2a5cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5cf0) {
            ctx->pc = 0x2A5D1Cu;
            goto label_2a5d1c;
        }
    }
    ctx->pc = 0x2A5CF8u;
label_2a5cf8:
    // 0x2a5cf8: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_2a5cfc:
    if (ctx->pc == 0x2A5CFCu) {
        ctx->pc = 0x2A5D00u;
        goto label_2a5d00;
    }
    ctx->pc = 0x2A5CF8u;
    {
        const bool branch_taken_0x2a5cf8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5cf8) {
            ctx->pc = 0x2A5D24u;
            goto label_2a5d24;
        }
    }
    ctx->pc = 0x2A5D00u;
label_2a5d00:
    // 0x2a5d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a5d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5d04:
    // 0x2a5d04: 0x0  nop
    ctx->pc = 0x2a5d04u;
    // NOP
label_2a5d08:
    // 0x2a5d08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a5d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a5d0c:
    // 0x2a5d0c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a5d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a5d10:
    // 0x2a5d10: 0x0  nop
    ctx->pc = 0x2a5d10u;
    // NOP
label_2a5d14:
    // 0x2a5d14: 0x450100a8  bc1t        . + 4 + (0xA8 << 2)
label_2a5d18:
    if (ctx->pc == 0x2A5D18u) {
        ctx->pc = 0x2A5D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D14u;
        // 0x2a5d18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5D1Cu;
        goto label_2a5d1c;
    }
    ctx->pc = 0x2A5D14u;
    {
        const bool branch_taken_0x2a5d14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D14u;
        // 0x2a5d18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d14) {
            ctx->pc = 0x2A5FB8u;
            goto label_2a5fb8;
        }
    }
    ctx->pc = 0x2A5D1Cu;
label_2a5d1c:
    // 0x2a5d1c: 0x56400015  bnel        $s2, $zero, . + 4 + (0x15 << 2)
label_2a5d20:
    if (ctx->pc == 0x2A5D20u) {
        ctx->pc = 0x2A5D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D1Cu;
        // 0x2a5d20: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5D24u;
        goto label_2a5d24;
    }
    ctx->pc = 0x2A5D1Cu;
    {
        const bool branch_taken_0x2a5d1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5d1c) {
            ctx->pc = 0x2A5D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5D1Cu;
            // 0x2a5d20: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5D74u;
            goto label_2a5d74;
        }
    }
    ctx->pc = 0x2A5D24u;
label_2a5d24:
    // 0x2a5d24: 0xc08bfb4  jal         func_22FED0
label_2a5d28:
    if (ctx->pc == 0x2A5D28u) {
        ctx->pc = 0x2A5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D24u;
        // 0x2a5d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5D2Cu;
        goto label_2a5d2c;
    }
    ctx->pc = 0x2A5D24u;
    SET_GPR_U32(ctx, 31, 0x2A5D2Cu);
    ctx->pc = 0x2A5D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5D24u;
    // 0x2a5d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FED0u, 0x2A5D24u, 0x2A5D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D2Cu;
label_2a5d2c:
    // 0x2a5d2c: 0xc0a367c  jal         func_28D9F0
label_2a5d30:
    if (ctx->pc == 0x2A5D30u) {
        ctx->pc = 0x2A5D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D2Cu;
        // 0x2a5d30: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5D34u;
        goto label_2a5d34;
    }
    ctx->pc = 0x2A5D2Cu;
    SET_GPR_U32(ctx, 31, 0x2A5D34u);
    ctx->pc = 0x2A5D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5D2Cu;
    // 0x2a5d30: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A5D2Cu, 0x2A5D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D34u;
label_2a5d34:
    // 0x2a5d34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5d38:
    // 0x2a5d38: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2a5d3c:
    if (ctx->pc == 0x2A5D3Cu) {
        ctx->pc = 0x2A5D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D38u;
        // 0x2a5d3c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5D40u;
        goto label_2a5d40;
    }
    ctx->pc = 0x2A5D38u;
    {
        const bool branch_taken_0x2a5d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D38u;
        // 0x2a5d3c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d38) {
            ctx->pc = 0x2A5D68u;
            goto label_2a5d68;
        }
    }
    ctx->pc = 0x2A5D40u;
label_2a5d40:
    // 0x2a5d40: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2a5d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a5d44:
    // 0x2a5d44: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2a5d44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2a5d48:
    // 0x2a5d48: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a5d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a5d4c:
    // 0x2a5d4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a5d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a5d50:
    // 0x2a5d50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a5d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5d54:
    // 0x2a5d54: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2a5d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a5d58:
    // 0x2a5d58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a5d58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5d5c:
    // 0x2a5d5c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2a5d5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a5d60:
    // 0x2a5d60: 0xc0bee7a  jal         func_2FB9E8
label_2a5d64:
    if (ctx->pc == 0x2A5D64u) {
        ctx->pc = 0x2A5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D60u;
        // 0x2a5d64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5D68u;
        goto label_2a5d68;
    }
    ctx->pc = 0x2A5D60u;
    SET_GPR_U32(ctx, 31, 0x2A5D68u);
    ctx->pc = 0x2A5D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5D60u;
    // 0x2a5d64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A5D60u, 0x2A5D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D68u;
label_2a5d68:
    // 0x2a5d68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5d6c:
    // 0x2a5d6c: 0x10000091  b           . + 4 + (0x91 << 2)
label_2a5d70:
    if (ctx->pc == 0x2A5D70u) {
        ctx->pc = 0x2A5D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D6Cu;
        // 0x2a5d70: 0xa6620018  sh          $v0, 0x18($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5D74u;
        goto label_2a5d74;
    }
    ctx->pc = 0x2A5D6Cu;
    {
        const bool branch_taken_0x2a5d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D6Cu;
        // 0x2a5d70: 0xa6620018  sh          $v0, 0x18($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d6c) {
            ctx->pc = 0x2A5FB4u;
            goto label_2a5fb4;
        }
    }
    ctx->pc = 0x2A5D74u;
label_2a5d74:
    // 0x2a5d74: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2a5d74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2a5d78:
    // 0x2a5d78: 0x1c40008f  bgtz        $v0, . + 4 + (0x8F << 2)
label_2a5d7c:
    if (ctx->pc == 0x2A5D7Cu) {
        ctx->pc = 0x2A5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D78u;
        // 0x2a5d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5D80u;
        goto label_2a5d80;
    }
    ctx->pc = 0x2A5D78u;
    {
        const bool branch_taken_0x2a5d78 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2A5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D78u;
        // 0x2a5d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d78) {
            ctx->pc = 0x2A5FB8u;
            goto label_2a5fb8;
        }
    }
    ctx->pc = 0x2A5D80u;
label_2a5d80:
    // 0x2a5d80: 0x8663001a  lh          $v1, 0x1A($s3)
    ctx->pc = 0x2a5d80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
label_2a5d84:
    // 0x2a5d84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5d88:
    // 0x2a5d88: 0x1062007e  beq         $v1, $v0, . + 4 + (0x7E << 2)
label_2a5d8c:
    if (ctx->pc == 0x2A5D8Cu) {
        ctx->pc = 0x2A5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D88u;
        // 0x2a5d8c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5D90u;
        goto label_2a5d90;
    }
    ctx->pc = 0x2A5D88u;
    {
        const bool branch_taken_0x2a5d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D88u;
        // 0x2a5d8c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d88) {
            ctx->pc = 0x2A5F84u;
            goto label_2a5f84;
        }
    }
    ctx->pc = 0x2A5D90u;
label_2a5d90:
    // 0x2a5d90: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
label_2a5d94:
    if (ctx->pc == 0x2A5D94u) {
        ctx->pc = 0x2A5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D90u;
        // 0x2a5d94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5D98u;
        goto label_2a5d98;
    }
    ctx->pc = 0x2A5D90u;
    {
        const bool branch_taken_0x2a5d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D90u;
        // 0x2a5d94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d90) {
            ctx->pc = 0x2A5FB8u;
            goto label_2a5fb8;
        }
    }
    ctx->pc = 0x2A5D98u;
label_2a5d98:
    // 0x2a5d98: 0x14600088  bnez        $v1, . + 4 + (0x88 << 2)
label_2a5d9c:
    if (ctx->pc == 0x2A5D9Cu) {
        ctx->pc = 0x2A5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D98u;
        // 0x2a5d9c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5DA0u;
        goto label_2a5da0;
    }
    ctx->pc = 0x2A5D98u;
    {
        const bool branch_taken_0x2a5d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D98u;
        // 0x2a5d9c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d98) {
            ctx->pc = 0x2A5FBCu;
            goto label_2a5fbc;
        }
    }
    ctx->pc = 0x2A5DA0u;
label_2a5da0:
    // 0x2a5da0: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x2a5da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
label_2a5da4:
    // 0x2a5da4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a5da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5da8:
    // 0x2a5da8: 0x0  nop
    ctx->pc = 0x2a5da8u;
    // NOP
label_2a5dac:
    // 0x2a5dac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a5dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a5db0:
    // 0x2a5db0: 0x0  nop
    ctx->pc = 0x2a5db0u;
    // NOP
label_2a5db4:
    // 0x2a5db4: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_2a5db8:
    if (ctx->pc == 0x2A5DB8u) {
        ctx->pc = 0x2A5DBCu;
        goto label_2a5dbc;
    }
    ctx->pc = 0x2A5DB4u;
    {
        const bool branch_taken_0x2a5db4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5db4) {
            ctx->pc = 0x2A5E0Cu;
            goto label_2a5e0c;
        }
    }
    ctx->pc = 0x2A5DBCu;
label_2a5dbc:
    // 0x2a5dbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a5dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a5dc0:
    // 0x2a5dc0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a5dc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a5dc4:
    // 0x2a5dc4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a5dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a5dc8:
    // 0x2a5dc8: 0x40f809  jalr        $v0
label_2a5dcc:
    if (ctx->pc == 0x2A5DCCu) {
        ctx->pc = 0x2A5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DC8u;
        // 0x2a5dcc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5DD0u;
        goto label_2a5dd0;
    }
    ctx->pc = 0x2A5DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A5DD0u);
        ctx->pc = 0x2A5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DC8u;
        // 0x2a5dcc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5DC8u, 0x2A5DD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5DD0u;
label_2a5dd0:
    // 0x2a5dd0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a5dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a5dd4:
    // 0x2a5dd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a5dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5dd8:
    // 0x2a5dd8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a5dd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a5ddc:
    // 0x2a5ddc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a5ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a5de0:
    // 0x2a5de0: 0x40f809  jalr        $v0
label_2a5de4:
    if (ctx->pc == 0x2A5DE4u) {
        ctx->pc = 0x2A5DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DE0u;
        // 0x2a5de4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5DE8u;
        goto label_2a5de8;
    }
    ctx->pc = 0x2A5DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A5DE8u);
        ctx->pc = 0x2A5DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DE0u;
        // 0x2a5de4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5DE0u, 0x2A5DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5DE8u;
label_2a5de8:
    // 0x2a5de8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2a5de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_2a5dec:
    // 0x2a5dec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a5decu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a5df0:
    // 0x2a5df0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a5df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5df4:
    // 0x2a5df4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5df8:
    // 0x2a5df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5dfc:
    // 0x2a5dfc: 0xc0bf832  jal         func_2FE0C8
label_2a5e00:
    if (ctx->pc == 0x2A5E00u) {
        ctx->pc = 0x2A5E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DFCu;
        // 0x2a5e00: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5E04u;
        goto label_2a5e04;
    }
    ctx->pc = 0x2A5DFCu;
    SET_GPR_U32(ctx, 31, 0x2A5E04u);
    ctx->pc = 0x2A5E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5DFCu;
    // 0x2a5e00: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0C8u, 0x2A5DFCu, 0x2A5E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E04u;
label_2a5e04:
    // 0x2a5e04: 0x10000058  b           . + 4 + (0x58 << 2)
label_2a5e08:
    if (ctx->pc == 0x2A5E08u) {
        ctx->pc = 0x2A5E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E04u;
        // 0x2a5e08: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5E0Cu;
        goto label_2a5e0c;
    }
    ctx->pc = 0x2A5E04u;
    {
        const bool branch_taken_0x2a5e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E04u;
        // 0x2a5e08: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e04) {
            ctx->pc = 0x2A5F68u;
            goto label_2a5f68;
        }
    }
    ctx->pc = 0x2A5E0Cu;
label_2a5e0c:
    // 0x2a5e0c: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x2a5e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
label_2a5e10:
    // 0x2a5e10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a5e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5e14:
    // 0x2a5e14: 0x0  nop
    ctx->pc = 0x2a5e14u;
    // NOP
label_2a5e18:
    // 0x2a5e18: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a5e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a5e1c:
    // 0x2a5e1c: 0x0  nop
    ctx->pc = 0x2a5e1cu;
    // NOP
label_2a5e20:
    // 0x2a5e20: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_2a5e24:
    if (ctx->pc == 0x2A5E24u) {
        ctx->pc = 0x2A5E28u;
        goto label_2a5e28;
    }
    ctx->pc = 0x2A5E20u;
    {
        const bool branch_taken_0x2a5e20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5e20) {
            ctx->pc = 0x2A5E84u;
            goto label_2a5e84;
        }
    }
    ctx->pc = 0x2A5E28u;
label_2a5e28:
    // 0x2a5e28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a5e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a5e2c:
    // 0x2a5e2c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a5e2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a5e30:
    // 0x2a5e30: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a5e34:
    // 0x2a5e34: 0x40f809  jalr        $v0
label_2a5e38:
    if (ctx->pc == 0x2A5E38u) {
        ctx->pc = 0x2A5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E34u;
        // 0x2a5e38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5E3Cu;
        goto label_2a5e3c;
    }
    ctx->pc = 0x2A5E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A5E3Cu);
        ctx->pc = 0x2A5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E34u;
        // 0x2a5e38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5E34u, 0x2A5E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5E3Cu;
label_2a5e3c:
    // 0x2a5e3c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a5e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a5e40:
    // 0x2a5e40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a5e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5e44:
    // 0x2a5e44: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a5e44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a5e48:
    // 0x2a5e48: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a5e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a5e4c:
    // 0x2a5e4c: 0x40f809  jalr        $v0
label_2a5e50:
    if (ctx->pc == 0x2A5E50u) {
        ctx->pc = 0x2A5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E4Cu;
        // 0x2a5e50: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5E54u;
        goto label_2a5e54;
    }
    ctx->pc = 0x2A5E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A5E54u);
        ctx->pc = 0x2A5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E4Cu;
        // 0x2a5e50: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5E4Cu, 0x2A5E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5E54u;
label_2a5e54:
    // 0x2a5e54: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2a5e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_2a5e58:
    // 0x2a5e58: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2a5e58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2a5e5c:
    // 0x2a5e5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a5e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5e60:
    // 0x2a5e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5e64:
    // 0x2a5e64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5e68:
    // 0x2a5e68: 0xc0bf832  jal         func_2FE0C8
label_2a5e6c:
    if (ctx->pc == 0x2A5E6Cu) {
        ctx->pc = 0x2A5E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E68u;
        // 0x2a5e6c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5E70u;
        goto label_2a5e70;
    }
    ctx->pc = 0x2A5E68u;
    SET_GPR_U32(ctx, 31, 0x2A5E70u);
    ctx->pc = 0x2A5E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5E68u;
    // 0x2a5e6c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0C8u, 0x2A5E68u, 0x2A5E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E70u;
label_2a5e70:
    // 0x2a5e70: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a5e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a5e74:
    // 0x2a5e74: 0xc0cd4e4  jal         func_335390
label_2a5e78:
    if (ctx->pc == 0x2A5E78u) {
        ctx->pc = 0x2A5E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E74u;
        // 0x2a5e78: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5E7Cu;
        goto label_2a5e7c;
    }
    ctx->pc = 0x2A5E74u;
    SET_GPR_U32(ctx, 31, 0x2A5E7Cu);
    ctx->pc = 0x2A5E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5E74u;
    // 0x2a5e78: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A5E74u, 0x2A5E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E7Cu;
label_2a5e7c:
    // 0x2a5e7c: 0x10000037  b           . + 4 + (0x37 << 2)
label_2a5e80:
    if (ctx->pc == 0x2A5E80u) {
        ctx->pc = 0x2A5E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E7Cu;
        // 0x2a5e80: 0x30420007  andi        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5E84u;
        goto label_2a5e84;
    }
    ctx->pc = 0x2A5E7Cu;
    {
        const bool branch_taken_0x2a5e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E7Cu;
        // 0x2a5e80: 0x30420007  andi        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e7c) {
            ctx->pc = 0x2A5F5Cu;
            goto label_2a5f5c;
        }
    }
    ctx->pc = 0x2A5E84u;
label_2a5e84:
    // 0x2a5e84: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2a5e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_2a5e88:
    // 0x2a5e88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a5e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5e8c:
    // 0x2a5e8c: 0x0  nop
    ctx->pc = 0x2a5e8cu;
    // NOP
label_2a5e90:
    // 0x2a5e90: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a5e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a5e94:
    // 0x2a5e94: 0x0  nop
    ctx->pc = 0x2a5e94u;
    // NOP
label_2a5e98:
    // 0x2a5e98: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_2a5e9c:
    if (ctx->pc == 0x2A5E9Cu) {
        ctx->pc = 0x2A5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E98u;
        // 0x2a5e9c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5EA0u;
        goto label_2a5ea0;
    }
    ctx->pc = 0x2A5E98u;
    {
        const bool branch_taken_0x2a5e98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E98u;
        // 0x2a5e9c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e98) {
            ctx->pc = 0x2A5EF8u;
            goto label_2a5ef8;
        }
    }
    ctx->pc = 0x2A5EA0u;
label_2a5ea0:
    // 0x2a5ea0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a5ea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a5ea4:
    // 0x2a5ea4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a5ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a5ea8:
    // 0x2a5ea8: 0x40f809  jalr        $v0
label_2a5eac:
    if (ctx->pc == 0x2A5EACu) {
        ctx->pc = 0x2A5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EA8u;
        // 0x2a5eac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5EB0u;
        goto label_2a5eb0;
    }
    ctx->pc = 0x2A5EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A5EB0u);
        ctx->pc = 0x2A5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EA8u;
        // 0x2a5eac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5EA8u, 0x2A5EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5EB0u;
label_2a5eb0:
    // 0x2a5eb0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a5eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a5eb4:
    // 0x2a5eb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a5eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5eb8:
    // 0x2a5eb8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a5eb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a5ebc:
    // 0x2a5ebc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a5ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a5ec0:
    // 0x2a5ec0: 0x40f809  jalr        $v0
label_2a5ec4:
    if (ctx->pc == 0x2A5EC4u) {
        ctx->pc = 0x2A5EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EC0u;
        // 0x2a5ec4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5EC8u;
        goto label_2a5ec8;
    }
    ctx->pc = 0x2A5EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A5EC8u);
        ctx->pc = 0x2A5EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EC0u;
        // 0x2a5ec4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5EC0u, 0x2A5EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5EC8u;
label_2a5ec8:
    // 0x2a5ec8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2a5ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_2a5ecc:
    // 0x2a5ecc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a5eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a5ed0:
    // 0x2a5ed0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a5ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5ed4:
    // 0x2a5ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ed8:
    // 0x2a5ed8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5edc:
    // 0x2a5edc: 0xc0bf832  jal         func_2FE0C8
label_2a5ee0:
    if (ctx->pc == 0x2A5EE0u) {
        ctx->pc = 0x2A5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EDCu;
        // 0x2a5ee0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5EE4u;
        goto label_2a5ee4;
    }
    ctx->pc = 0x2A5EDCu;
    SET_GPR_U32(ctx, 31, 0x2A5EE4u);
    ctx->pc = 0x2A5EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5EDCu;
    // 0x2a5ee0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0C8u, 0x2A5EDCu, 0x2A5EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5EE4u;
label_2a5ee4:
    // 0x2a5ee4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a5ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a5ee8:
    // 0x2a5ee8: 0xc0cd4e4  jal         func_335390
label_2a5eec:
    if (ctx->pc == 0x2A5EECu) {
        ctx->pc = 0x2A5EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EE8u;
        // 0x2a5eec: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5EF0u;
        goto label_2a5ef0;
    }
    ctx->pc = 0x2A5EE8u;
    SET_GPR_U32(ctx, 31, 0x2A5EF0u);
    ctx->pc = 0x2A5EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5EE8u;
    // 0x2a5eec: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A5EE8u, 0x2A5EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5EF0u;
label_2a5ef0:
    // 0x2a5ef0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2a5ef4:
    if (ctx->pc == 0x2A5EF4u) {
        ctx->pc = 0x2A5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EF0u;
        // 0x2a5ef4: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5EF8u;
        goto label_2a5ef8;
    }
    ctx->pc = 0x2A5EF0u;
    {
        const bool branch_taken_0x2a5ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EF0u;
        // 0x2a5ef4: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ef0) {
            ctx->pc = 0x2A5F5Cu;
            goto label_2a5f5c;
        }
    }
    ctx->pc = 0x2A5EF8u;
label_2a5ef8:
    // 0x2a5ef8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a5ef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a5efc:
    // 0x2a5efc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a5f00:
    // 0x2a5f00: 0x40f809  jalr        $v0
label_2a5f04:
    if (ctx->pc == 0x2A5F04u) {
        ctx->pc = 0x2A5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F00u;
        // 0x2a5f04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5F08u;
        goto label_2a5f08;
    }
    ctx->pc = 0x2A5F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A5F08u);
        ctx->pc = 0x2A5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F00u;
        // 0x2a5f04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5F00u, 0x2A5F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5F08u;
label_2a5f08:
    // 0x2a5f08: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2a5f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2a5f0c:
    // 0x2a5f0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a5f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f10:
    // 0x2a5f10: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2a5f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2a5f14:
    // 0x2a5f14: 0xc0e409a  jal         func_390268
label_2a5f18:
    if (ctx->pc == 0x2A5F18u) {
        ctx->pc = 0x2A5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F14u;
        // 0x2a5f18: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5F1Cu;
        goto label_2a5f1c;
    }
    ctx->pc = 0x2A5F14u;
    SET_GPR_U32(ctx, 31, 0x2A5F1Cu);
    ctx->pc = 0x2A5F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5F14u;
    // 0x2a5f18: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A5F14u, 0x2A5F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F1Cu;
label_2a5f1c:
    // 0x2a5f1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a5f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a5f20:
    // 0x2a5f20: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a5f20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a5f24:
    // 0x2a5f24: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x2a5f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a5f28:
    // 0x2a5f28: 0xa0f809  jalr        $a1
label_2a5f2c:
    if (ctx->pc == 0x2A5F2Cu) {
        ctx->pc = 0x2A5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F28u;
        // 0x2a5f2c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5F30u;
        goto label_2a5f30;
    }
    ctx->pc = 0x2A5F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2A5F30u);
        ctx->pc = 0x2A5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F28u;
        // 0x2a5f2c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5F28u, 0x2A5F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5F30u;
label_2a5f30:
    // 0x2a5f30: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2a5f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_2a5f34:
    // 0x2a5f34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a5f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a5f38:
    // 0x2a5f38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a5f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5f3c:
    // 0x2a5f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f40:
    // 0x2a5f40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f44:
    // 0x2a5f44: 0xc0bf832  jal         func_2FE0C8
label_2a5f48:
    if (ctx->pc == 0x2A5F48u) {
        ctx->pc = 0x2A5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F44u;
        // 0x2a5f48: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5F4Cu;
        goto label_2a5f4c;
    }
    ctx->pc = 0x2A5F44u;
    SET_GPR_U32(ctx, 31, 0x2A5F4Cu);
    ctx->pc = 0x2A5F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5F44u;
    // 0x2a5f48: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0C8u, 0x2A5F44u, 0x2A5F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F4Cu;
label_2a5f4c:
    // 0x2a5f4c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a5f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a5f50:
    // 0x2a5f50: 0xc0cd4e4  jal         func_335390
label_2a5f54:
    if (ctx->pc == 0x2A5F54u) {
        ctx->pc = 0x2A5F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F50u;
        // 0x2a5f54: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5F58u;
        goto label_2a5f58;
    }
    ctx->pc = 0x2A5F50u;
    SET_GPR_U32(ctx, 31, 0x2A5F58u);
    ctx->pc = 0x2A5F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5F50u;
    // 0x2a5f54: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A5F50u, 0x2A5F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F58u;
label_2a5f58:
    // 0x2a5f58: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2a5f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_2a5f5c:
    // 0x2a5f5c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_2a5f60:
    if (ctx->pc == 0x2A5F60u) {
        ctx->pc = 0x2A5F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F5Cu;
        // 0x2a5f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5F64u;
        goto label_2a5f64;
    }
    ctx->pc = 0x2A5F5Cu;
    {
        const bool branch_taken_0x2a5f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F5Cu;
        // 0x2a5f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f5c) {
            ctx->pc = 0x2A5FB8u;
            goto label_2a5fb8;
        }
    }
    ctx->pc = 0x2A5F64u;
label_2a5f64:
    // 0x2a5f64: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2a5f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a5f68:
    // 0x2a5f68: 0xc0874fa  jal         func_21D3E8
label_2a5f6c:
    if (ctx->pc == 0x2A5F6Cu) {
        ctx->pc = 0x2A5F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F68u;
        // 0x2a5f6c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5F70u;
        goto label_2a5f70;
    }
    ctx->pc = 0x2A5F68u;
    SET_GPR_U32(ctx, 31, 0x2A5F70u);
    ctx->pc = 0x2A5F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5F68u;
    // 0x2a5f6c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2A5F68u, 0x2A5F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F70u;
label_2a5f70:
    // 0x2a5f70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f74:
    // 0x2a5f74: 0xc051fbc  jal         func_147EF0
label_2a5f78:
    if (ctx->pc == 0x2A5F78u) {
        ctx->pc = 0x2A5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F74u;
        // 0x2a5f78: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5F7Cu;
        goto label_2a5f7c;
    }
    ctx->pc = 0x2A5F74u;
    SET_GPR_U32(ctx, 31, 0x2A5F7Cu);
    ctx->pc = 0x2A5F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5F74u;
    // 0x2a5f78: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2A5F74u, 0x2A5F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F7Cu;
label_2a5f7c:
    // 0x2a5f7c: 0x1000000e  b           . + 4 + (0xE << 2)
label_2a5f80:
    if (ctx->pc == 0x2A5F80u) {
        ctx->pc = 0x2A5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F7Cu;
        // 0x2a5f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5F84u;
        goto label_2a5f84;
    }
    ctx->pc = 0x2A5F7Cu;
    {
        const bool branch_taken_0x2a5f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F7Cu;
        // 0x2a5f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f7c) {
            ctx->pc = 0x2A5FB8u;
            goto label_2a5fb8;
        }
    }
    ctx->pc = 0x2A5F84u;
label_2a5f84:
    // 0x2a5f84: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x2a5f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
label_2a5f88:
    // 0x2a5f88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a5f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5f8c:
    // 0x2a5f8c: 0x0  nop
    ctx->pc = 0x2a5f8cu;
    // NOP
label_2a5f90:
    // 0x2a5f90: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a5f90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a5f94:
    // 0x2a5f94: 0x0  nop
    ctx->pc = 0x2a5f94u;
    // NOP
label_2a5f98:
    // 0x2a5f98: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2a5f9c:
    if (ctx->pc == 0x2A5F9Cu) {
        ctx->pc = 0x2A5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F98u;
        // 0x2a5f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5FA0u;
        goto label_2a5fa0;
    }
    ctx->pc = 0x2A5F98u;
    {
        const bool branch_taken_0x2a5f98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F98u;
        // 0x2a5f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f98) {
            ctx->pc = 0x2A5FB8u;
            goto label_2a5fb8;
        }
    }
    ctx->pc = 0x2A5FA0u;
label_2a5fa0:
    // 0x2a5fa0: 0xc0874fa  jal         func_21D3E8
label_2a5fa4:
    if (ctx->pc == 0x2A5FA4u) {
        ctx->pc = 0x2A5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5FA0u;
        // 0x2a5fa4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5FA8u;
        goto label_2a5fa8;
    }
    ctx->pc = 0x2A5FA0u;
    SET_GPR_U32(ctx, 31, 0x2A5FA8u);
    ctx->pc = 0x2A5FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5FA0u;
    // 0x2a5fa4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2A5FA0u, 0x2A5FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5FA8u;
label_2a5fa8:
    // 0x2a5fa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5fac:
    // 0x2a5fac: 0xc051fbc  jal         func_147EF0
label_2a5fb0:
    if (ctx->pc == 0x2A5FB0u) {
        ctx->pc = 0x2A5FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5FACu;
        // 0x2a5fb0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5FB4u;
        goto label_2a5fb4;
    }
    ctx->pc = 0x2A5FACu;
    SET_GPR_U32(ctx, 31, 0x2A5FB4u);
    ctx->pc = 0x2A5FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5FACu;
    // 0x2a5fb0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2A5FACu, 0x2A5FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5FB4u;
label_2a5fb4:
    // 0x2a5fb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a5fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5fb8:
    // 0x2a5fb8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2a5fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2a5fbc:
    // 0x2a5fbc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2a5fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a5fc0:
    // 0x2a5fc0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2a5fc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a5fc4:
    // 0x2a5fc4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2a5fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a5fc8:
    // 0x2a5fc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a5fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a5fcc:
    // 0x2a5fcc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2a5fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a5fd0:
    // 0x2a5fd0: 0x3e00008  jr          $ra
label_2a5fd4:
    if (ctx->pc == 0x2A5FD4u) {
        ctx->pc = 0x2A5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5FD0u;
        // 0x2a5fd4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5FD8u;
        goto label_fallthrough_0x2a5fd0;
    }
    ctx->pc = 0x2A5FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5FD0u;
        // 0x2a5fd4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a5fd0:
    ctx->pc = 0x2A5FD8u;
}
