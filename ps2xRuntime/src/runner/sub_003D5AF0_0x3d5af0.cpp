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

// Function: sub_003D5AF0
// Address: 0x3d5af0 - 0x3d5f68
void sub_003D5AF0_0x3d5af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5AF0_0x3d5af0");
#endif

    switch (ctx->pc) {
        case 0x3d5af0u: goto label_3d5af0;
        case 0x3d5af4u: goto label_3d5af4;
        case 0x3d5af8u: goto label_3d5af8;
        case 0x3d5afcu: goto label_3d5afc;
        case 0x3d5b00u: goto label_3d5b00;
        case 0x3d5b04u: goto label_3d5b04;
        case 0x3d5b08u: goto label_3d5b08;
        case 0x3d5b0cu: goto label_3d5b0c;
        case 0x3d5b10u: goto label_3d5b10;
        case 0x3d5b14u: goto label_3d5b14;
        case 0x3d5b18u: goto label_3d5b18;
        case 0x3d5b1cu: goto label_3d5b1c;
        case 0x3d5b20u: goto label_3d5b20;
        case 0x3d5b24u: goto label_3d5b24;
        case 0x3d5b28u: goto label_3d5b28;
        case 0x3d5b2cu: goto label_3d5b2c;
        case 0x3d5b30u: goto label_3d5b30;
        case 0x3d5b34u: goto label_3d5b34;
        case 0x3d5b38u: goto label_3d5b38;
        case 0x3d5b3cu: goto label_3d5b3c;
        case 0x3d5b40u: goto label_3d5b40;
        case 0x3d5b44u: goto label_3d5b44;
        case 0x3d5b48u: goto label_3d5b48;
        case 0x3d5b4cu: goto label_3d5b4c;
        case 0x3d5b50u: goto label_3d5b50;
        case 0x3d5b54u: goto label_3d5b54;
        case 0x3d5b58u: goto label_3d5b58;
        case 0x3d5b5cu: goto label_3d5b5c;
        case 0x3d5b60u: goto label_3d5b60;
        case 0x3d5b64u: goto label_3d5b64;
        case 0x3d5b68u: goto label_3d5b68;
        case 0x3d5b6cu: goto label_3d5b6c;
        case 0x3d5b70u: goto label_3d5b70;
        case 0x3d5b74u: goto label_3d5b74;
        case 0x3d5b78u: goto label_3d5b78;
        case 0x3d5b7cu: goto label_3d5b7c;
        case 0x3d5b80u: goto label_3d5b80;
        case 0x3d5b84u: goto label_3d5b84;
        case 0x3d5b88u: goto label_3d5b88;
        case 0x3d5b8cu: goto label_3d5b8c;
        case 0x3d5b90u: goto label_3d5b90;
        case 0x3d5b94u: goto label_3d5b94;
        case 0x3d5b98u: goto label_3d5b98;
        case 0x3d5b9cu: goto label_3d5b9c;
        case 0x3d5ba0u: goto label_3d5ba0;
        case 0x3d5ba4u: goto label_3d5ba4;
        case 0x3d5ba8u: goto label_3d5ba8;
        case 0x3d5bacu: goto label_3d5bac;
        case 0x3d5bb0u: goto label_3d5bb0;
        case 0x3d5bb4u: goto label_3d5bb4;
        case 0x3d5bb8u: goto label_3d5bb8;
        case 0x3d5bbcu: goto label_3d5bbc;
        case 0x3d5bc0u: goto label_3d5bc0;
        case 0x3d5bc4u: goto label_3d5bc4;
        case 0x3d5bc8u: goto label_3d5bc8;
        case 0x3d5bccu: goto label_3d5bcc;
        case 0x3d5bd0u: goto label_3d5bd0;
        case 0x3d5bd4u: goto label_3d5bd4;
        case 0x3d5bd8u: goto label_3d5bd8;
        case 0x3d5bdcu: goto label_3d5bdc;
        case 0x3d5be0u: goto label_3d5be0;
        case 0x3d5be4u: goto label_3d5be4;
        case 0x3d5be8u: goto label_3d5be8;
        case 0x3d5becu: goto label_3d5bec;
        case 0x3d5bf0u: goto label_3d5bf0;
        case 0x3d5bf4u: goto label_3d5bf4;
        case 0x3d5bf8u: goto label_3d5bf8;
        case 0x3d5bfcu: goto label_3d5bfc;
        case 0x3d5c00u: goto label_3d5c00;
        case 0x3d5c04u: goto label_3d5c04;
        case 0x3d5c08u: goto label_3d5c08;
        case 0x3d5c0cu: goto label_3d5c0c;
        case 0x3d5c10u: goto label_3d5c10;
        case 0x3d5c14u: goto label_3d5c14;
        case 0x3d5c18u: goto label_3d5c18;
        case 0x3d5c1cu: goto label_3d5c1c;
        case 0x3d5c20u: goto label_3d5c20;
        case 0x3d5c24u: goto label_3d5c24;
        case 0x3d5c28u: goto label_3d5c28;
        case 0x3d5c2cu: goto label_3d5c2c;
        case 0x3d5c30u: goto label_3d5c30;
        case 0x3d5c34u: goto label_3d5c34;
        case 0x3d5c38u: goto label_3d5c38;
        case 0x3d5c3cu: goto label_3d5c3c;
        case 0x3d5c40u: goto label_3d5c40;
        case 0x3d5c44u: goto label_3d5c44;
        case 0x3d5c48u: goto label_3d5c48;
        case 0x3d5c4cu: goto label_3d5c4c;
        case 0x3d5c50u: goto label_3d5c50;
        case 0x3d5c54u: goto label_3d5c54;
        case 0x3d5c58u: goto label_3d5c58;
        case 0x3d5c5cu: goto label_3d5c5c;
        case 0x3d5c60u: goto label_3d5c60;
        case 0x3d5c64u: goto label_3d5c64;
        case 0x3d5c68u: goto label_3d5c68;
        case 0x3d5c6cu: goto label_3d5c6c;
        case 0x3d5c70u: goto label_3d5c70;
        case 0x3d5c74u: goto label_3d5c74;
        case 0x3d5c78u: goto label_3d5c78;
        case 0x3d5c7cu: goto label_3d5c7c;
        case 0x3d5c80u: goto label_3d5c80;
        case 0x3d5c84u: goto label_3d5c84;
        case 0x3d5c88u: goto label_3d5c88;
        case 0x3d5c8cu: goto label_3d5c8c;
        case 0x3d5c90u: goto label_3d5c90;
        case 0x3d5c94u: goto label_3d5c94;
        case 0x3d5c98u: goto label_3d5c98;
        case 0x3d5c9cu: goto label_3d5c9c;
        case 0x3d5ca0u: goto label_3d5ca0;
        case 0x3d5ca4u: goto label_3d5ca4;
        case 0x3d5ca8u: goto label_3d5ca8;
        case 0x3d5cacu: goto label_3d5cac;
        case 0x3d5cb0u: goto label_3d5cb0;
        case 0x3d5cb4u: goto label_3d5cb4;
        case 0x3d5cb8u: goto label_3d5cb8;
        case 0x3d5cbcu: goto label_3d5cbc;
        case 0x3d5cc0u: goto label_3d5cc0;
        case 0x3d5cc4u: goto label_3d5cc4;
        case 0x3d5cc8u: goto label_3d5cc8;
        case 0x3d5cccu: goto label_3d5ccc;
        case 0x3d5cd0u: goto label_3d5cd0;
        case 0x3d5cd4u: goto label_3d5cd4;
        case 0x3d5cd8u: goto label_3d5cd8;
        case 0x3d5cdcu: goto label_3d5cdc;
        case 0x3d5ce0u: goto label_3d5ce0;
        case 0x3d5ce4u: goto label_3d5ce4;
        case 0x3d5ce8u: goto label_3d5ce8;
        case 0x3d5cecu: goto label_3d5cec;
        case 0x3d5cf0u: goto label_3d5cf0;
        case 0x3d5cf4u: goto label_3d5cf4;
        case 0x3d5cf8u: goto label_3d5cf8;
        case 0x3d5cfcu: goto label_3d5cfc;
        case 0x3d5d00u: goto label_3d5d00;
        case 0x3d5d04u: goto label_3d5d04;
        case 0x3d5d08u: goto label_3d5d08;
        case 0x3d5d0cu: goto label_3d5d0c;
        case 0x3d5d10u: goto label_3d5d10;
        case 0x3d5d14u: goto label_3d5d14;
        case 0x3d5d18u: goto label_3d5d18;
        case 0x3d5d1cu: goto label_3d5d1c;
        case 0x3d5d20u: goto label_3d5d20;
        case 0x3d5d24u: goto label_3d5d24;
        case 0x3d5d28u: goto label_3d5d28;
        case 0x3d5d2cu: goto label_3d5d2c;
        case 0x3d5d30u: goto label_3d5d30;
        case 0x3d5d34u: goto label_3d5d34;
        case 0x3d5d38u: goto label_3d5d38;
        case 0x3d5d3cu: goto label_3d5d3c;
        case 0x3d5d40u: goto label_3d5d40;
        case 0x3d5d44u: goto label_3d5d44;
        case 0x3d5d48u: goto label_3d5d48;
        case 0x3d5d4cu: goto label_3d5d4c;
        case 0x3d5d50u: goto label_3d5d50;
        case 0x3d5d54u: goto label_3d5d54;
        case 0x3d5d58u: goto label_3d5d58;
        case 0x3d5d5cu: goto label_3d5d5c;
        case 0x3d5d60u: goto label_3d5d60;
        case 0x3d5d64u: goto label_3d5d64;
        case 0x3d5d68u: goto label_3d5d68;
        case 0x3d5d6cu: goto label_3d5d6c;
        case 0x3d5d70u: goto label_3d5d70;
        case 0x3d5d74u: goto label_3d5d74;
        case 0x3d5d78u: goto label_3d5d78;
        case 0x3d5d7cu: goto label_3d5d7c;
        case 0x3d5d80u: goto label_3d5d80;
        case 0x3d5d84u: goto label_3d5d84;
        case 0x3d5d88u: goto label_3d5d88;
        case 0x3d5d8cu: goto label_3d5d8c;
        case 0x3d5d90u: goto label_3d5d90;
        case 0x3d5d94u: goto label_3d5d94;
        case 0x3d5d98u: goto label_3d5d98;
        case 0x3d5d9cu: goto label_3d5d9c;
        case 0x3d5da0u: goto label_3d5da0;
        case 0x3d5da4u: goto label_3d5da4;
        case 0x3d5da8u: goto label_3d5da8;
        case 0x3d5dacu: goto label_3d5dac;
        case 0x3d5db0u: goto label_3d5db0;
        case 0x3d5db4u: goto label_3d5db4;
        case 0x3d5db8u: goto label_3d5db8;
        case 0x3d5dbcu: goto label_3d5dbc;
        case 0x3d5dc0u: goto label_3d5dc0;
        case 0x3d5dc4u: goto label_3d5dc4;
        case 0x3d5dc8u: goto label_3d5dc8;
        case 0x3d5dccu: goto label_3d5dcc;
        case 0x3d5dd0u: goto label_3d5dd0;
        case 0x3d5dd4u: goto label_3d5dd4;
        case 0x3d5dd8u: goto label_3d5dd8;
        case 0x3d5ddcu: goto label_3d5ddc;
        case 0x3d5de0u: goto label_3d5de0;
        case 0x3d5de4u: goto label_3d5de4;
        case 0x3d5de8u: goto label_3d5de8;
        case 0x3d5decu: goto label_3d5dec;
        case 0x3d5df0u: goto label_3d5df0;
        case 0x3d5df4u: goto label_3d5df4;
        case 0x3d5df8u: goto label_3d5df8;
        case 0x3d5dfcu: goto label_3d5dfc;
        case 0x3d5e00u: goto label_3d5e00;
        case 0x3d5e04u: goto label_3d5e04;
        case 0x3d5e08u: goto label_3d5e08;
        case 0x3d5e0cu: goto label_3d5e0c;
        case 0x3d5e10u: goto label_3d5e10;
        case 0x3d5e14u: goto label_3d5e14;
        case 0x3d5e18u: goto label_3d5e18;
        case 0x3d5e1cu: goto label_3d5e1c;
        case 0x3d5e20u: goto label_3d5e20;
        case 0x3d5e24u: goto label_3d5e24;
        case 0x3d5e28u: goto label_3d5e28;
        case 0x3d5e2cu: goto label_3d5e2c;
        case 0x3d5e30u: goto label_3d5e30;
        case 0x3d5e34u: goto label_3d5e34;
        case 0x3d5e38u: goto label_3d5e38;
        case 0x3d5e3cu: goto label_3d5e3c;
        case 0x3d5e40u: goto label_3d5e40;
        case 0x3d5e44u: goto label_3d5e44;
        case 0x3d5e48u: goto label_3d5e48;
        case 0x3d5e4cu: goto label_3d5e4c;
        case 0x3d5e50u: goto label_3d5e50;
        case 0x3d5e54u: goto label_3d5e54;
        case 0x3d5e58u: goto label_3d5e58;
        case 0x3d5e5cu: goto label_3d5e5c;
        case 0x3d5e60u: goto label_3d5e60;
        case 0x3d5e64u: goto label_3d5e64;
        case 0x3d5e68u: goto label_3d5e68;
        case 0x3d5e6cu: goto label_3d5e6c;
        case 0x3d5e70u: goto label_3d5e70;
        case 0x3d5e74u: goto label_3d5e74;
        case 0x3d5e78u: goto label_3d5e78;
        case 0x3d5e7cu: goto label_3d5e7c;
        case 0x3d5e80u: goto label_3d5e80;
        case 0x3d5e84u: goto label_3d5e84;
        case 0x3d5e88u: goto label_3d5e88;
        case 0x3d5e8cu: goto label_3d5e8c;
        case 0x3d5e90u: goto label_3d5e90;
        case 0x3d5e94u: goto label_3d5e94;
        case 0x3d5e98u: goto label_3d5e98;
        case 0x3d5e9cu: goto label_3d5e9c;
        case 0x3d5ea0u: goto label_3d5ea0;
        case 0x3d5ea4u: goto label_3d5ea4;
        case 0x3d5ea8u: goto label_3d5ea8;
        case 0x3d5eacu: goto label_3d5eac;
        case 0x3d5eb0u: goto label_3d5eb0;
        case 0x3d5eb4u: goto label_3d5eb4;
        case 0x3d5eb8u: goto label_3d5eb8;
        case 0x3d5ebcu: goto label_3d5ebc;
        case 0x3d5ec0u: goto label_3d5ec0;
        case 0x3d5ec4u: goto label_3d5ec4;
        case 0x3d5ec8u: goto label_3d5ec8;
        case 0x3d5eccu: goto label_3d5ecc;
        case 0x3d5ed0u: goto label_3d5ed0;
        case 0x3d5ed4u: goto label_3d5ed4;
        case 0x3d5ed8u: goto label_3d5ed8;
        case 0x3d5edcu: goto label_3d5edc;
        case 0x3d5ee0u: goto label_3d5ee0;
        case 0x3d5ee4u: goto label_3d5ee4;
        case 0x3d5ee8u: goto label_3d5ee8;
        case 0x3d5eecu: goto label_3d5eec;
        case 0x3d5ef0u: goto label_3d5ef0;
        case 0x3d5ef4u: goto label_3d5ef4;
        case 0x3d5ef8u: goto label_3d5ef8;
        case 0x3d5efcu: goto label_3d5efc;
        case 0x3d5f00u: goto label_3d5f00;
        case 0x3d5f04u: goto label_3d5f04;
        case 0x3d5f08u: goto label_3d5f08;
        case 0x3d5f0cu: goto label_3d5f0c;
        case 0x3d5f10u: goto label_3d5f10;
        case 0x3d5f14u: goto label_3d5f14;
        case 0x3d5f18u: goto label_3d5f18;
        case 0x3d5f1cu: goto label_3d5f1c;
        case 0x3d5f20u: goto label_3d5f20;
        case 0x3d5f24u: goto label_3d5f24;
        case 0x3d5f28u: goto label_3d5f28;
        case 0x3d5f2cu: goto label_3d5f2c;
        case 0x3d5f30u: goto label_3d5f30;
        case 0x3d5f34u: goto label_3d5f34;
        case 0x3d5f38u: goto label_3d5f38;
        case 0x3d5f3cu: goto label_3d5f3c;
        case 0x3d5f40u: goto label_3d5f40;
        case 0x3d5f44u: goto label_3d5f44;
        case 0x3d5f48u: goto label_3d5f48;
        case 0x3d5f4cu: goto label_3d5f4c;
        case 0x3d5f50u: goto label_3d5f50;
        case 0x3d5f54u: goto label_3d5f54;
        case 0x3d5f58u: goto label_3d5f58;
        case 0x3d5f5cu: goto label_3d5f5c;
        case 0x3d5f60u: goto label_3d5f60;
        case 0x3d5f64u: goto label_3d5f64;
        default: break;
    }

    ctx->pc = 0x3d5af0u;

label_3d5af0:
    // 0x3d5af0: 0x27bdfa60  addiu       $sp, $sp, -0x5A0
    ctx->pc = 0x3d5af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965856));
label_3d5af4:
    // 0x3d5af4: 0xafa504d0  sw          $a1, 0x4D0($sp)
    ctx->pc = 0x3d5af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 5));
label_3d5af8:
    // 0x3d5af8: 0x7fb00570  sq          $s0, 0x570($sp)
    ctx->pc = 0x3d5af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 16));
label_3d5afc:
    // 0x3d5afc: 0x7fb10560  sq          $s1, 0x560($sp)
    ctx->pc = 0x3d5afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 17));
label_3d5b00:
    // 0x3d5b00: 0x7fb20550  sq          $s2, 0x550($sp)
    ctx->pc = 0x3d5b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 18));
label_3d5b04:
    // 0x3d5b04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d5b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d5b08:
    // 0x3d5b08: 0x7fb30540  sq          $s3, 0x540($sp)
    ctx->pc = 0x3d5b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 19));
label_3d5b0c:
    // 0x3d5b0c: 0x7fb40530  sq          $s4, 0x530($sp)
    ctx->pc = 0x3d5b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 20));
label_3d5b10:
    // 0x3d5b10: 0x7fb50520  sq          $s5, 0x520($sp)
    ctx->pc = 0x3d5b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 21));
label_3d5b14:
    // 0x3d5b14: 0x26340010  addiu       $s4, $s1, 0x10
    ctx->pc = 0x3d5b14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3d5b18:
    // 0x3d5b18: 0x7fb70500  sq          $s7, 0x500($sp)
    ctx->pc = 0x3d5b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 23));
label_3d5b1c:
    // 0x3d5b1c: 0x7fbe04f0  sq          $fp, 0x4F0($sp)
    ctx->pc = 0x3d5b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 30));
label_3d5b20:
    // 0x3d5b20: 0xe7b60590  swc1        $f22, 0x590($sp)
    ctx->pc = 0x3d5b20u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1424), bits); }
label_3d5b24:
    // 0x3d5b24: 0xe7b50588  swc1        $f21, 0x588($sp)
    ctx->pc = 0x3d5b24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1416), bits); }
label_3d5b28:
    // 0x3d5b28: 0xe7b40580  swc1        $f20, 0x580($sp)
    ctx->pc = 0x3d5b28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
label_3d5b2c:
    // 0x3d5b2c: 0x7fb60510  sq          $s6, 0x510($sp)
    ctx->pc = 0x3d5b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 22));
label_3d5b30:
    // 0x3d5b30: 0xffbf04e0  sd          $ra, 0x4E0($sp)
    ctx->pc = 0x3d5b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 31));
label_3d5b34:
    // 0x3d5b34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d5b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d5b38:
    // 0x3d5b38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3d5b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3d5b3c:
    // 0x3d5b3c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d5b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d5b40:
    // 0x3d5b40: 0x3c01bea7  lui         $at, 0xBEA7
    ctx->pc = 0x3d5b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48807 << 16));
label_3d5b44:
    // 0x3d5b44: 0x3421ef9e  ori         $at, $at, 0xEF9E
    ctx->pc = 0x3d5b44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61342);
label_3d5b48:
    // 0x3d5b48: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3d5b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3d5b4c:
    // 0x3d5b4c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d5b4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d5b50:
    // 0x3d5b50: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d5b54:
    // 0x3d5b54: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x3d5b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
label_3d5b58:
    // 0x3d5b58: 0x3421ced9  ori         $at, $at, 0xCED9
    ctx->pc = 0x3d5b58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52953);
label_3d5b5c:
    // 0x3d5b5c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3d5b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3d5b60:
    // 0x3d5b60: 0x40f809  jalr        $v0
label_3d5b64:
    if (ctx->pc == 0x3D5B64u) {
        ctx->pc = 0x3D5B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B60u;
        // 0x3d5b64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5B68u;
        goto label_3d5b68;
    }
    ctx->pc = 0x3D5B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D5B68u);
        ctx->pc = 0x3D5B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B60u;
        // 0x3d5b64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5B60u, 0x3D5B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5B68u;
label_3d5b68:
    // 0x3d5b68: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d5b68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5b6c:
    // 0x3d5b6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d5b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d5b70:
    // 0x3d5b70: 0xc0e858c  jal         func_3A1630
label_3d5b74:
    if (ctx->pc == 0x3D5B74u) {
        ctx->pc = 0x3D5B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B70u;
        // 0x3d5b74: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5B78u;
        goto label_3d5b78;
    }
    ctx->pc = 0x3D5B70u;
    SET_GPR_U32(ctx, 31, 0x3D5B78u);
    ctx->pc = 0x3D5B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5B70u;
    // 0x3d5b74: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D5B70u, 0x3D5B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5B78u;
label_3d5b78:
    // 0x3d5b78: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3d5b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3d5b7c:
    // 0x3d5b7c: 0xc0ea14c  jal         func_3A8530
label_3d5b80:
    if (ctx->pc == 0x3D5B80u) {
        ctx->pc = 0x3D5B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B7Cu;
        // 0x3d5b80: 0x8fa404d0  lw          $a0, 0x4D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5B84u;
        goto label_3d5b84;
    }
    ctx->pc = 0x3D5B7Cu;
    SET_GPR_U32(ctx, 31, 0x3D5B84u);
    ctx->pc = 0x3D5B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5B7Cu;
    // 0x3d5b80: 0x8fa404d0  lw          $a0, 0x4D0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D5B7Cu, 0x3D5B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5B84u;
label_3d5b84:
    // 0x3d5b84: 0x8fa504d0  lw          $a1, 0x4D0($sp)
    ctx->pc = 0x3d5b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1232)));
label_3d5b88:
    // 0x3d5b88: 0xc0ea12a  jal         func_3A84A8
label_3d5b8c:
    if (ctx->pc == 0x3D5B8Cu) {
        ctx->pc = 0x3D5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B88u;
        // 0x3d5b8c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5B90u;
        goto label_3d5b90;
    }
    ctx->pc = 0x3D5B88u;
    SET_GPR_U32(ctx, 31, 0x3D5B90u);
    ctx->pc = 0x3D5B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5B88u;
    // 0x3d5b8c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D5B88u, 0x3D5B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5B90u;
label_3d5b90:
    // 0x3d5b90: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d5b90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d5b94:
    // 0x3d5b94: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d5b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d5b98:
    // 0x3d5b98: 0x8fa504d0  lw          $a1, 0x4D0($sp)
    ctx->pc = 0x3d5b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1232)));
label_3d5b9c:
    // 0x3d5b9c: 0xc0ea12a  jal         func_3A84A8
label_3d5ba0:
    if (ctx->pc == 0x3D5BA0u) {
        ctx->pc = 0x3D5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B9Cu;
        // 0x3d5ba0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5BA4u;
        goto label_3d5ba4;
    }
    ctx->pc = 0x3D5B9Cu;
    SET_GPR_U32(ctx, 31, 0x3D5BA4u);
    ctx->pc = 0x3D5BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5B9Cu;
    // 0x3d5ba0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D5B9Cu, 0x3D5BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5BA4u;
label_3d5ba4:
    // 0x3d5ba4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d5ba4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d5ba8:
    // 0x3d5ba8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d5ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d5bac:
    // 0x3d5bac: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d5bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d5bb0:
    // 0x3d5bb0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3d5bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d5bb4:
    // 0x3d5bb4: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3d5bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3d5bb8:
    // 0x3d5bb8: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d5bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d5bbc:
    // 0x3d5bbc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3d5bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3d5bc0:
    // 0x3d5bc0: 0xc0cd4ee  jal         func_3353B8
label_3d5bc4:
    if (ctx->pc == 0x3D5BC4u) {
        ctx->pc = 0x3D5BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BC0u;
        // 0x3d5bc4: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5BC8u;
        goto label_3d5bc8;
    }
    ctx->pc = 0x3D5BC0u;
    SET_GPR_U32(ctx, 31, 0x3D5BC8u);
    ctx->pc = 0x3D5BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5BC0u;
    // 0x3d5bc4: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D5BC0u, 0x3D5BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5BC8u;
label_3d5bc8:
    // 0x3d5bc8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x3d5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_3d5bcc:
    // 0x3d5bcc: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x3d5bccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d5bd0:
    // 0x3d5bd0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3d5bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3d5bd4:
    // 0x3d5bd4: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x3d5bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
label_3d5bd8:
    // 0x3d5bd8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3d5bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3d5bdc:
    // 0x3d5bdc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d5bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d5be0:
    // 0x3d5be0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3d5be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d5be4:
    // 0x3d5be4: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3d5be4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3d5be8:
    // 0x3d5be8: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3d5be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3d5bec:
    // 0x3d5bec: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3d5becu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d5bf0:
    // 0x3d5bf0: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x3d5bf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_3d5bf4:
    // 0x3d5bf4: 0x8e270054  lw          $a3, 0x54($s1)
    ctx->pc = 0x3d5bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d5bf8:
    // 0x3d5bf8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3d5bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d5bfc:
    // 0x3d5bfc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3d5bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3d5c00:
    // 0x3d5c00: 0xc0e93a2  jal         func_3A4E88
label_3d5c04:
    if (ctx->pc == 0x3D5C04u) {
        ctx->pc = 0x3D5C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C00u;
        // 0x3d5c04: 0x7e230020  sq          $v1, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5C08u;
        goto label_3d5c08;
    }
    ctx->pc = 0x3D5C00u;
    SET_GPR_U32(ctx, 31, 0x3D5C08u);
    ctx->pc = 0x3D5C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5C00u;
    // 0x3d5c04: 0x7e230020  sq          $v1, 0x20($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x3D5C00u, 0x3D5C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5C08u;
label_3d5c08:
    // 0x3d5c08: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x3d5c08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_3d5c0c:
    // 0x3d5c0c: 0x27b50480  addiu       $s5, $sp, 0x480
    ctx->pc = 0x3d5c0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3d5c10:
    // 0x3d5c10: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x3d5c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
label_3d5c14:
    // 0x3d5c14: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d5c14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d5c18:
    // 0x3d5c18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d5c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d5c1c:
    // 0x3d5c1c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d5c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d5c20:
    // 0x3d5c20: 0xafa00480  sw          $zero, 0x480($sp)
    ctx->pc = 0x3d5c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
label_3d5c24:
    // 0x3d5c24: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x3d5c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d5c28:
    // 0x3d5c28: 0xafa00484  sw          $zero, 0x484($sp)
    ctx->pc = 0x3d5c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1156), GPR_U32(ctx, 0));
label_3d5c2c:
    // 0x3d5c2c: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x3d5c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d5c30:
    // 0x3d5c30: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x3d5c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3d5c34:
    // 0x3d5c34: 0x26104f50  addiu       $s0, $s0, 0x4F50
    ctx->pc = 0x3d5c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20304));
label_3d5c38:
    // 0x3d5c38: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x3d5c38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3d5c3c:
    // 0x3d5c3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d5c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d5c40:
    // 0x3d5c40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d5c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d5c44:
    // 0x3d5c44: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3d5c44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3d5c48:
    // 0x3d5c48: 0xc136b18  jal         func_4DAC60
label_3d5c4c:
    if (ctx->pc == 0x3D5C4Cu) {
        ctx->pc = 0x3D5C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C48u;
        // 0x3d5c4c: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5C50u;
        goto label_3d5c50;
    }
    ctx->pc = 0x3D5C48u;
    SET_GPR_U32(ctx, 31, 0x3D5C50u);
    ctx->pc = 0x3D5C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5C48u;
    // 0x3d5c4c: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D5C48u, 0x3D5C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5C50u;
label_3d5c50:
    // 0x3d5c50: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3d5c50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3d5c54:
    // 0x3d5c54: 0x27a30490  addiu       $v1, $sp, 0x490
    ctx->pc = 0x3d5c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3d5c58:
    // 0x3d5c58: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x3d5c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_3d5c5c:
    // 0x3d5c5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d5c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d5c60:
    // 0x3d5c60: 0x27be04a0  addiu       $fp, $sp, 0x4A0
    ctx->pc = 0x3d5c60u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_3d5c64:
    // 0x3d5c64: 0xafa304d4  sw          $v1, 0x4D4($sp)
    ctx->pc = 0x3d5c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1236), GPR_U32(ctx, 3));
label_3d5c68:
    // 0x3d5c68: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3d5c68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3d5c6c:
    // 0x3d5c6c: 0xe7a004a0  swc1        $f0, 0x4A0($sp)
    ctx->pc = 0x3d5c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1184), bits); }
label_3d5c70:
    // 0x3d5c70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d5c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d5c74:
    // 0x3d5c74: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3d5c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3d5c78:
    // 0x3d5c78: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3d5c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d5c7c:
    // 0x3d5c7c: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3d5c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3d5c80:
    // 0x3d5c80: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3d5c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d5c84:
    // 0x3d5c84: 0xafb10480  sw          $s1, 0x480($sp)
    ctx->pc = 0x3d5c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 17));
label_3d5c88:
    // 0x3d5c88: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x3d5c88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3d5c8c:
    // 0x3d5c8c: 0xafa00490  sw          $zero, 0x490($sp)
    ctx->pc = 0x3d5c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
label_3d5c90:
    // 0x3d5c90: 0x27a904b0  addiu       $t1, $sp, 0x4B0
    ctx->pc = 0x3d5c90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_3d5c94:
    // 0x3d5c94: 0xafa004b0  sw          $zero, 0x4B0($sp)
    ctx->pc = 0x3d5c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 0));
label_3d5c98:
    // 0x3d5c98: 0x27aa04c0  addiu       $t2, $sp, 0x4C0
    ctx->pc = 0x3d5c98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_3d5c9c:
    // 0x3d5c9c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3d5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3d5ca0:
    // 0x3d5ca0: 0xc0ea040  jal         func_3A8100
label_3d5ca4:
    if (ctx->pc == 0x3D5CA4u) {
        ctx->pc = 0x3D5CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5CA0u;
        // 0x3d5ca4: 0xafa204c0  sw          $v0, 0x4C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5CA8u;
        goto label_3d5ca8;
    }
    ctx->pc = 0x3D5CA0u;
    SET_GPR_U32(ctx, 31, 0x3D5CA8u);
    ctx->pc = 0x3D5CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5CA0u;
    // 0x3d5ca4: 0xafa204c0  sw          $v0, 0x4C0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3D5CA0u, 0x3D5CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5CA8u;
label_3d5ca8:
    // 0x3d5ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d5ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5cac:
    // 0x3d5cac: 0xc0f15bc  jal         func_3C56F0
label_3d5cb0:
    if (ctx->pc == 0x3D5CB0u) {
        ctx->pc = 0x3D5CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5CACu;
        // 0x3d5cb0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5CB4u;
        goto label_3d5cb4;
    }
    ctx->pc = 0x3D5CACu;
    SET_GPR_U32(ctx, 31, 0x3D5CB4u);
    ctx->pc = 0x3D5CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5CACu;
    // 0x3d5cb0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D5CACu, 0x3D5CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5CB4u;
label_3d5cb4:
    // 0x3d5cb4: 0x3c01bf21  lui         $at, 0xBF21
    ctx->pc = 0x3d5cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48929 << 16));
label_3d5cb8:
    // 0x3d5cb8: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x3d5cb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_3d5cbc:
    // 0x3d5cbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d5cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d5cc0:
    // 0x3d5cc0: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x3d5cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3d5cc4:
    // 0x3d5cc4: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x3d5cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_3d5cc8:
    // 0x3d5cc8: 0x3c01be75  lui         $at, 0xBE75
    ctx->pc = 0x3d5cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48757 << 16));
label_3d5ccc:
    // 0x3d5ccc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3d5cccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3d5cd0:
    // 0x3d5cd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d5cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d5cd4:
    // 0x3d5cd4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3d5cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3d5cd8:
    // 0x3d5cd8: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x3d5cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_3d5cdc:
    // 0x3d5cdc: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3d5cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3d5ce0:
    // 0x3d5ce0: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x3d5ce0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3d5ce4:
    // 0x3d5ce4: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x3d5ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
label_3d5ce8:
    // 0x3d5ce8: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x3d5ce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_3d5cec:
    // 0x3d5cec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d5cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d5cf0:
    // 0x3d5cf0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3d5cf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d5cf4:
    // 0x3d5cf4: 0x3c013f1a  lui         $at, 0x3F1A
    ctx->pc = 0x3d5cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16154 << 16));
label_3d5cf8:
    // 0x3d5cf8: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x3d5cf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_3d5cfc:
    // 0x3d5cfc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3d5cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3d5d00:
    // 0x3d5d00: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3d5d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3d5d04:
    // 0x3d5d04: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d5d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d5d08:
    // 0x3d5d08: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3d5d08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3d5d0c:
    // 0x3d5d0c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3d5d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3d5d10:
    // 0x3d5d10: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x3d5d10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_3d5d14:
    // 0x3d5d14: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3d5d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3d5d18:
    // 0x3d5d18: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x3d5d18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3d5d1c:
    // 0x3d5d1c: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x3d5d1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3d5d20:
    // 0x3d5d20: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3d5d20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d5d24:
    // 0x3d5d24: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3d5d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3d5d28:
    // 0x3d5d28: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3d5d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3d5d2c:
    // 0x3d5d2c: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x3d5d2cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3d5d30:
    // 0x3d5d30: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x3d5d30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3d5d34:
    // 0x3d5d34: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3d5d34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d5d38:
    // 0x3d5d38: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3d5d38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d5d3c:
    // 0x3d5d3c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3d5d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3d5d40:
    // 0x3d5d40: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d5d40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d5d44:
    // 0x3d5d44: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3d5d44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d5d48:
    // 0x3d5d48: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d5d48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d5d4c:
    // 0x3d5d4c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d5d4cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d5d50:
    // 0x3d5d50: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d5d50u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d5d54:
    // 0x3d5d54: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d5d54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d5d58:
    // 0x3d5d58: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d5d58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d5d5c:
    // 0x3d5d5c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d5d5cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d5d60:
    // 0x3d5d60: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d5d60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d5d64:
    // 0x3d5d64: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d5d64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d5d68:
    // 0x3d5d68: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d5d68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d5d6c:
    // 0x3d5d6c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d5d6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d5d70:
    // 0x3d5d70: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d5d70u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d5d74:
    // 0x3d5d74: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d5d74u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d5d78:
    // 0x3d5d78: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d5d78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d5d7c:
    // 0x3d5d7c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d5d7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d5d80:
    // 0x3d5d80: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3d5d80u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d5d84:
    // 0x3d5d84: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3d5d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3d5d88:
    // 0x3d5d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d5d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5d8c:
    // 0x3d5d8c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3d5d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3d5d90:
    // 0x3d5d90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d5d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d5d94:
    // 0x3d5d94: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3d5d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3d5d98:
    // 0x3d5d98: 0xc136b18  jal         func_4DAC60
label_3d5d9c:
    if (ctx->pc == 0x3D5D9Cu) {
        ctx->pc = 0x3D5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D98u;
        // 0x3d5d9c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5DA0u;
        goto label_3d5da0;
    }
    ctx->pc = 0x3D5D98u;
    SET_GPR_U32(ctx, 31, 0x3D5DA0u);
    ctx->pc = 0x3D5D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5D98u;
    // 0x3d5d9c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D5D98u, 0x3D5DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5DA0u;
label_3d5da0:
    // 0x3d5da0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3d5da0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d5da4:
    // 0x3d5da4: 0x3c01bf18  lui         $at, 0xBF18
    ctx->pc = 0x3d5da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48920 << 16));
label_3d5da8:
    // 0x3d5da8: 0x3421d4fe  ori         $at, $at, 0xD4FE
    ctx->pc = 0x3d5da8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54526);
label_3d5dac:
    // 0x3d5dac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d5dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d5db0:
    // 0x3d5db0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d5db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d5db4:
    // 0x3d5db4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3d5db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3d5db8:
    // 0x3d5db8: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3d5db8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3d5dbc:
    // 0x3d5dbc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3d5dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3d5dc0:
    // 0x3d5dc0: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x3d5dc0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3d5dc4:
    // 0x3d5dc4: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x3d5dc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3d5dc8:
    // 0x3d5dc8: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3d5dc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d5dcc:
    // 0x3d5dcc: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3d5dccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d5dd0:
    // 0x3d5dd0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3d5dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3d5dd4:
    // 0x3d5dd4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d5dd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d5dd8:
    // 0x3d5dd8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3d5dd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d5ddc:
    // 0x3d5ddc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d5ddcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d5de0:
    // 0x3d5de0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d5de0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d5de4:
    // 0x3d5de4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d5de4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d5de8:
    // 0x3d5de8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d5de8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d5dec:
    // 0x3d5dec: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d5decu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d5df0:
    // 0x3d5df0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d5df0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d5df4:
    // 0x3d5df4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d5df4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d5df8:
    // 0x3d5df8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d5df8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d5dfc:
    // 0x3d5dfc: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d5dfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d5e00:
    // 0x3d5e00: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d5e00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d5e04:
    // 0x3d5e04: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d5e04u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d5e08:
    // 0x3d5e08: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d5e08u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d5e0c:
    // 0x3d5e0c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d5e0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d5e10:
    // 0x3d5e10: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d5e10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d5e14:
    // 0x3d5e14: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3d5e14u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d5e18:
    // 0x3d5e18: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3d5e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3d5e1c:
    // 0x3d5e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d5e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5e20:
    // 0x3d5e20: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3d5e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3d5e24:
    // 0x3d5e24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d5e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d5e28:
    // 0x3d5e28: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3d5e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3d5e2c:
    // 0x3d5e2c: 0xc136b18  jal         func_4DAC60
label_3d5e30:
    if (ctx->pc == 0x3D5E30u) {
        ctx->pc = 0x3D5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E2Cu;
        // 0x3d5e30: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5E34u;
        goto label_3d5e34;
    }
    ctx->pc = 0x3D5E2Cu;
    SET_GPR_U32(ctx, 31, 0x3D5E34u);
    ctx->pc = 0x3D5E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5E2Cu;
    // 0x3d5e30: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D5E2Cu, 0x3D5E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E34u;
label_3d5e34:
    // 0x3d5e34: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x3d5e34u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d5e38:
    // 0x3d5e38: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3d5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_3d5e3c:
    // 0x3d5e3c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3d5e3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d5e40:
    // 0x3d5e40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d5e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3d5e44:
    // 0x3d5e44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d5e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d5e48:
    // 0x3d5e48: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x3d5e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
label_3d5e4c:
    // 0x3d5e4c: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3d5e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3d5e50:
    // 0x3d5e50: 0x27b60450  addiu       $s6, $sp, 0x450
    ctx->pc = 0x3d5e50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d5e54:
    // 0x3d5e54: 0xafa50480  sw          $a1, 0x480($sp)
    ctx->pc = 0x3d5e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 5));
label_3d5e58:
    // 0x3d5e58: 0x27b20460  addiu       $s2, $sp, 0x460
    ctx->pc = 0x3d5e58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3d5e5c:
    // 0x3d5e5c: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x3d5e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_3d5e60:
    // 0x3d5e60: 0x27b40470  addiu       $s4, $sp, 0x470
    ctx->pc = 0x3d5e60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d5e64:
    // 0x3d5e64: 0xafb10460  sw          $s1, 0x460($sp)
    ctx->pc = 0x3d5e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 17));
label_3d5e68:
    // 0x3d5e68: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d5e68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d5e6c:
    // 0x3d5e6c: 0xafa20470  sw          $v0, 0x470($sp)
    ctx->pc = 0x3d5e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 2));
label_3d5e70:
    // 0x3d5e70: 0x26104f68  addiu       $s0, $s0, 0x4F68
    ctx->pc = 0x3d5e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20328));
label_3d5e74:
    // 0x3d5e74: 0x8fa904d4  lw          $t1, 0x4D4($sp)
    ctx->pc = 0x3d5e74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1236)));
label_3d5e78:
    // 0x3d5e78: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d5e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d5e7c:
    // 0x3d5e7c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3d5e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3d5e80:
    // 0x3d5e80: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3d5e80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d5e84:
    // 0x3d5e84: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3d5e84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d5e88:
    // 0x3d5e88: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x3d5e88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3d5e8c:
    // 0x3d5e8c: 0xafa20490  sw          $v0, 0x490($sp)
    ctx->pc = 0x3d5e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 2));
label_3d5e90:
    // 0x3d5e90: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3d5e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d5e94:
    // 0x3d5e94: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3d5e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d5e98:
    // 0x3d5e98: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3d5e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3d5e9c:
    // 0x3d5e9c: 0xc0ea040  jal         func_3A8100
label_3d5ea0:
    if (ctx->pc == 0x3D5EA0u) {
        ctx->pc = 0x3D5EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E9Cu;
        // 0x3d5ea0: 0xafa204a0  sw          $v0, 0x4A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5EA4u;
        goto label_3d5ea4;
    }
    ctx->pc = 0x3D5E9Cu;
    SET_GPR_U32(ctx, 31, 0x3D5EA4u);
    ctx->pc = 0x3D5EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5E9Cu;
    // 0x3d5ea0: 0xafa204a0  sw          $v0, 0x4A0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3D5E9Cu, 0x3D5EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5EA4u;
label_3d5ea4:
    // 0x3d5ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d5ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5ea8:
    // 0x3d5ea8: 0xc0f15bc  jal         func_3C56F0
label_3d5eac:
    if (ctx->pc == 0x3D5EACu) {
        ctx->pc = 0x3D5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5EA8u;
        // 0x3d5eac: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5EB0u;
        goto label_3d5eb0;
    }
    ctx->pc = 0x3D5EA8u;
    SET_GPR_U32(ctx, 31, 0x3D5EB0u);
    ctx->pc = 0x3D5EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5EA8u;
    // 0x3d5eac: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D5EA8u, 0x3D5EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5EB0u;
label_3d5eb0:
    // 0x3d5eb0: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x3d5eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_3d5eb4:
    // 0x3d5eb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d5eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d5eb8:
    // 0x3d5eb8: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x3d5eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
label_3d5ebc:
    // 0x3d5ebc: 0xafb10460  sw          $s1, 0x460($sp)
    ctx->pc = 0x3d5ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 17));
label_3d5ec0:
    // 0x3d5ec0: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3d5ec0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d5ec4:
    // 0x3d5ec4: 0x344280ff  ori         $v0, $v0, 0x80FF
    ctx->pc = 0x3d5ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
label_3d5ec8:
    // 0x3d5ec8: 0xafa20470  sw          $v0, 0x470($sp)
    ctx->pc = 0x3d5ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 2));
label_3d5ecc:
    // 0x3d5ecc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3d5eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d5ed0:
    // 0x3d5ed0: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3d5ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3d5ed4:
    // 0x3d5ed4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3d5ed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d5ed8:
    // 0x3d5ed8: 0xafa00480  sw          $zero, 0x480($sp)
    ctx->pc = 0x3d5ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
label_3d5edc:
    // 0x3d5edc: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x3d5edcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3d5ee0:
    // 0x3d5ee0: 0x8fa904d4  lw          $t1, 0x4D4($sp)
    ctx->pc = 0x3d5ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1236)));
label_3d5ee4:
    // 0x3d5ee4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3d5ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d5ee8:
    // 0x3d5ee8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3d5ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3d5eec:
    // 0x3d5eec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3d5eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d5ef0:
    // 0x3d5ef0: 0xafa30490  sw          $v1, 0x490($sp)
    ctx->pc = 0x3d5ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 3));
label_3d5ef4:
    // 0x3d5ef4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3d5ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3d5ef8:
    // 0x3d5ef8: 0xc0ea040  jal         func_3A8100
label_3d5efc:
    if (ctx->pc == 0x3D5EFCu) {
        ctx->pc = 0x3D5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5EF8u;
        // 0x3d5efc: 0xafa204a0  sw          $v0, 0x4A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5F00u;
        goto label_3d5f00;
    }
    ctx->pc = 0x3D5EF8u;
    SET_GPR_U32(ctx, 31, 0x3D5F00u);
    ctx->pc = 0x3D5EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5EF8u;
    // 0x3d5efc: 0xafa204a0  sw          $v0, 0x4A0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3D5EF8u, 0x3D5F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5F00u;
label_3d5f00:
    // 0x3d5f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d5f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5f04:
    // 0x3d5f04: 0xc0f15bc  jal         func_3C56F0
label_3d5f08:
    if (ctx->pc == 0x3D5F08u) {
        ctx->pc = 0x3D5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5F04u;
        // 0x3d5f08: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5F0Cu;
        goto label_3d5f0c;
    }
    ctx->pc = 0x3D5F04u;
    SET_GPR_U32(ctx, 31, 0x3D5F0Cu);
    ctx->pc = 0x3D5F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5F04u;
    // 0x3d5f08: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D5F04u, 0x3D5F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5F0Cu;
label_3d5f0c:
    // 0x3d5f0c: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x3d5f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_3d5f10:
    // 0x3d5f10: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3d5f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3d5f14:
    // 0x3d5f14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3d5f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d5f18:
    // 0x3d5f18: 0x8fa604d0  lw          $a2, 0x4D0($sp)
    ctx->pc = 0x3d5f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1232)));
label_3d5f1c:
    // 0x3d5f1c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d5f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d5f20:
    // 0x3d5f20: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d5f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d5f24:
    // 0x3d5f24: 0x60f809  jalr        $v1
label_3d5f28:
    if (ctx->pc == 0x3D5F28u) {
        ctx->pc = 0x3D5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5F24u;
        // 0x3d5f28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5F2Cu;
        goto label_3d5f2c;
    }
    ctx->pc = 0x3D5F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D5F2Cu);
        ctx->pc = 0x3D5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5F24u;
        // 0x3d5f28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5F24u, 0x3D5F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5F2Cu;
label_3d5f2c:
    // 0x3d5f2c: 0x7bb00570  lq          $s0, 0x570($sp)
    ctx->pc = 0x3d5f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
label_3d5f30:
    // 0x3d5f30: 0x7bb10560  lq          $s1, 0x560($sp)
    ctx->pc = 0x3d5f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
label_3d5f34:
    // 0x3d5f34: 0x7bb20550  lq          $s2, 0x550($sp)
    ctx->pc = 0x3d5f34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_3d5f38:
    // 0x3d5f38: 0x7bb30540  lq          $s3, 0x540($sp)
    ctx->pc = 0x3d5f38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_3d5f3c:
    // 0x3d5f3c: 0x7bb40530  lq          $s4, 0x530($sp)
    ctx->pc = 0x3d5f3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_3d5f40:
    // 0x3d5f40: 0x7bb50520  lq          $s5, 0x520($sp)
    ctx->pc = 0x3d5f40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_3d5f44:
    // 0x3d5f44: 0x7bb60510  lq          $s6, 0x510($sp)
    ctx->pc = 0x3d5f44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3d5f48:
    // 0x3d5f48: 0x7bb70500  lq          $s7, 0x500($sp)
    ctx->pc = 0x3d5f48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3d5f4c:
    // 0x3d5f4c: 0x7bbe04f0  lq          $fp, 0x4F0($sp)
    ctx->pc = 0x3d5f4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3d5f50:
    // 0x3d5f50: 0xdfbf04e0  ld          $ra, 0x4E0($sp)
    ctx->pc = 0x3d5f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
label_3d5f54:
    // 0x3d5f54: 0xc7b60590  lwc1        $f22, 0x590($sp)
    ctx->pc = 0x3d5f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3d5f58:
    // 0x3d5f58: 0xc7b50588  lwc1        $f21, 0x588($sp)
    ctx->pc = 0x3d5f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3d5f5c:
    // 0x3d5f5c: 0xc7b40580  lwc1        $f20, 0x580($sp)
    ctx->pc = 0x3d5f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d5f60:
    // 0x3d5f60: 0x3e00008  jr          $ra
label_3d5f64:
    if (ctx->pc == 0x3D5F64u) {
        ctx->pc = 0x3D5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5F60u;
        // 0x3d5f64: 0x27bd05a0  addiu       $sp, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5F68u;
        goto label_fallthrough_0x3d5f60;
    }
    ctx->pc = 0x3D5F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5F60u;
        // 0x3d5f64: 0x27bd05a0  addiu       $sp, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d5f60:
    ctx->pc = 0x3D5F68u;
}
