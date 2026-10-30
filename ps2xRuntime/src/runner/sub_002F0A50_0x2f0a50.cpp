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

// Function: sub_002F0A50
// Address: 0x2f0a50 - 0x2f0ec0
void sub_002F0A50_0x2f0a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0A50_0x2f0a50");
#endif

    switch (ctx->pc) {
        case 0x2f0a50u: goto label_2f0a50;
        case 0x2f0a54u: goto label_2f0a54;
        case 0x2f0a58u: goto label_2f0a58;
        case 0x2f0a5cu: goto label_2f0a5c;
        case 0x2f0a60u: goto label_2f0a60;
        case 0x2f0a64u: goto label_2f0a64;
        case 0x2f0a68u: goto label_2f0a68;
        case 0x2f0a6cu: goto label_2f0a6c;
        case 0x2f0a70u: goto label_2f0a70;
        case 0x2f0a74u: goto label_2f0a74;
        case 0x2f0a78u: goto label_2f0a78;
        case 0x2f0a7cu: goto label_2f0a7c;
        case 0x2f0a80u: goto label_2f0a80;
        case 0x2f0a84u: goto label_2f0a84;
        case 0x2f0a88u: goto label_2f0a88;
        case 0x2f0a8cu: goto label_2f0a8c;
        case 0x2f0a90u: goto label_2f0a90;
        case 0x2f0a94u: goto label_2f0a94;
        case 0x2f0a98u: goto label_2f0a98;
        case 0x2f0a9cu: goto label_2f0a9c;
        case 0x2f0aa0u: goto label_2f0aa0;
        case 0x2f0aa4u: goto label_2f0aa4;
        case 0x2f0aa8u: goto label_2f0aa8;
        case 0x2f0aacu: goto label_2f0aac;
        case 0x2f0ab0u: goto label_2f0ab0;
        case 0x2f0ab4u: goto label_2f0ab4;
        case 0x2f0ab8u: goto label_2f0ab8;
        case 0x2f0abcu: goto label_2f0abc;
        case 0x2f0ac0u: goto label_2f0ac0;
        case 0x2f0ac4u: goto label_2f0ac4;
        case 0x2f0ac8u: goto label_2f0ac8;
        case 0x2f0accu: goto label_2f0acc;
        case 0x2f0ad0u: goto label_2f0ad0;
        case 0x2f0ad4u: goto label_2f0ad4;
        case 0x2f0ad8u: goto label_2f0ad8;
        case 0x2f0adcu: goto label_2f0adc;
        case 0x2f0ae0u: goto label_2f0ae0;
        case 0x2f0ae4u: goto label_2f0ae4;
        case 0x2f0ae8u: goto label_2f0ae8;
        case 0x2f0aecu: goto label_2f0aec;
        case 0x2f0af0u: goto label_2f0af0;
        case 0x2f0af4u: goto label_2f0af4;
        case 0x2f0af8u: goto label_2f0af8;
        case 0x2f0afcu: goto label_2f0afc;
        case 0x2f0b00u: goto label_2f0b00;
        case 0x2f0b04u: goto label_2f0b04;
        case 0x2f0b08u: goto label_2f0b08;
        case 0x2f0b0cu: goto label_2f0b0c;
        case 0x2f0b10u: goto label_2f0b10;
        case 0x2f0b14u: goto label_2f0b14;
        case 0x2f0b18u: goto label_2f0b18;
        case 0x2f0b1cu: goto label_2f0b1c;
        case 0x2f0b20u: goto label_2f0b20;
        case 0x2f0b24u: goto label_2f0b24;
        case 0x2f0b28u: goto label_2f0b28;
        case 0x2f0b2cu: goto label_2f0b2c;
        case 0x2f0b30u: goto label_2f0b30;
        case 0x2f0b34u: goto label_2f0b34;
        case 0x2f0b38u: goto label_2f0b38;
        case 0x2f0b3cu: goto label_2f0b3c;
        case 0x2f0b40u: goto label_2f0b40;
        case 0x2f0b44u: goto label_2f0b44;
        case 0x2f0b48u: goto label_2f0b48;
        case 0x2f0b4cu: goto label_2f0b4c;
        case 0x2f0b50u: goto label_2f0b50;
        case 0x2f0b54u: goto label_2f0b54;
        case 0x2f0b58u: goto label_2f0b58;
        case 0x2f0b5cu: goto label_2f0b5c;
        case 0x2f0b60u: goto label_2f0b60;
        case 0x2f0b64u: goto label_2f0b64;
        case 0x2f0b68u: goto label_2f0b68;
        case 0x2f0b6cu: goto label_2f0b6c;
        case 0x2f0b70u: goto label_2f0b70;
        case 0x2f0b74u: goto label_2f0b74;
        case 0x2f0b78u: goto label_2f0b78;
        case 0x2f0b7cu: goto label_2f0b7c;
        case 0x2f0b80u: goto label_2f0b80;
        case 0x2f0b84u: goto label_2f0b84;
        case 0x2f0b88u: goto label_2f0b88;
        case 0x2f0b8cu: goto label_2f0b8c;
        case 0x2f0b90u: goto label_2f0b90;
        case 0x2f0b94u: goto label_2f0b94;
        case 0x2f0b98u: goto label_2f0b98;
        case 0x2f0b9cu: goto label_2f0b9c;
        case 0x2f0ba0u: goto label_2f0ba0;
        case 0x2f0ba4u: goto label_2f0ba4;
        case 0x2f0ba8u: goto label_2f0ba8;
        case 0x2f0bacu: goto label_2f0bac;
        case 0x2f0bb0u: goto label_2f0bb0;
        case 0x2f0bb4u: goto label_2f0bb4;
        case 0x2f0bb8u: goto label_2f0bb8;
        case 0x2f0bbcu: goto label_2f0bbc;
        case 0x2f0bc0u: goto label_2f0bc0;
        case 0x2f0bc4u: goto label_2f0bc4;
        case 0x2f0bc8u: goto label_2f0bc8;
        case 0x2f0bccu: goto label_2f0bcc;
        case 0x2f0bd0u: goto label_2f0bd0;
        case 0x2f0bd4u: goto label_2f0bd4;
        case 0x2f0bd8u: goto label_2f0bd8;
        case 0x2f0bdcu: goto label_2f0bdc;
        case 0x2f0be0u: goto label_2f0be0;
        case 0x2f0be4u: goto label_2f0be4;
        case 0x2f0be8u: goto label_2f0be8;
        case 0x2f0becu: goto label_2f0bec;
        case 0x2f0bf0u: goto label_2f0bf0;
        case 0x2f0bf4u: goto label_2f0bf4;
        case 0x2f0bf8u: goto label_2f0bf8;
        case 0x2f0bfcu: goto label_2f0bfc;
        case 0x2f0c00u: goto label_2f0c00;
        case 0x2f0c04u: goto label_2f0c04;
        case 0x2f0c08u: goto label_2f0c08;
        case 0x2f0c0cu: goto label_2f0c0c;
        case 0x2f0c10u: goto label_2f0c10;
        case 0x2f0c14u: goto label_2f0c14;
        case 0x2f0c18u: goto label_2f0c18;
        case 0x2f0c1cu: goto label_2f0c1c;
        case 0x2f0c20u: goto label_2f0c20;
        case 0x2f0c24u: goto label_2f0c24;
        case 0x2f0c28u: goto label_2f0c28;
        case 0x2f0c2cu: goto label_2f0c2c;
        case 0x2f0c30u: goto label_2f0c30;
        case 0x2f0c34u: goto label_2f0c34;
        case 0x2f0c38u: goto label_2f0c38;
        case 0x2f0c3cu: goto label_2f0c3c;
        case 0x2f0c40u: goto label_2f0c40;
        case 0x2f0c44u: goto label_2f0c44;
        case 0x2f0c48u: goto label_2f0c48;
        case 0x2f0c4cu: goto label_2f0c4c;
        case 0x2f0c50u: goto label_2f0c50;
        case 0x2f0c54u: goto label_2f0c54;
        case 0x2f0c58u: goto label_2f0c58;
        case 0x2f0c5cu: goto label_2f0c5c;
        case 0x2f0c60u: goto label_2f0c60;
        case 0x2f0c64u: goto label_2f0c64;
        case 0x2f0c68u: goto label_2f0c68;
        case 0x2f0c6cu: goto label_2f0c6c;
        case 0x2f0c70u: goto label_2f0c70;
        case 0x2f0c74u: goto label_2f0c74;
        case 0x2f0c78u: goto label_2f0c78;
        case 0x2f0c7cu: goto label_2f0c7c;
        case 0x2f0c80u: goto label_2f0c80;
        case 0x2f0c84u: goto label_2f0c84;
        case 0x2f0c88u: goto label_2f0c88;
        case 0x2f0c8cu: goto label_2f0c8c;
        case 0x2f0c90u: goto label_2f0c90;
        case 0x2f0c94u: goto label_2f0c94;
        case 0x2f0c98u: goto label_2f0c98;
        case 0x2f0c9cu: goto label_2f0c9c;
        case 0x2f0ca0u: goto label_2f0ca0;
        case 0x2f0ca4u: goto label_2f0ca4;
        case 0x2f0ca8u: goto label_2f0ca8;
        case 0x2f0cacu: goto label_2f0cac;
        case 0x2f0cb0u: goto label_2f0cb0;
        case 0x2f0cb4u: goto label_2f0cb4;
        case 0x2f0cb8u: goto label_2f0cb8;
        case 0x2f0cbcu: goto label_2f0cbc;
        case 0x2f0cc0u: goto label_2f0cc0;
        case 0x2f0cc4u: goto label_2f0cc4;
        case 0x2f0cc8u: goto label_2f0cc8;
        case 0x2f0cccu: goto label_2f0ccc;
        case 0x2f0cd0u: goto label_2f0cd0;
        case 0x2f0cd4u: goto label_2f0cd4;
        case 0x2f0cd8u: goto label_2f0cd8;
        case 0x2f0cdcu: goto label_2f0cdc;
        case 0x2f0ce0u: goto label_2f0ce0;
        case 0x2f0ce4u: goto label_2f0ce4;
        case 0x2f0ce8u: goto label_2f0ce8;
        case 0x2f0cecu: goto label_2f0cec;
        case 0x2f0cf0u: goto label_2f0cf0;
        case 0x2f0cf4u: goto label_2f0cf4;
        case 0x2f0cf8u: goto label_2f0cf8;
        case 0x2f0cfcu: goto label_2f0cfc;
        case 0x2f0d00u: goto label_2f0d00;
        case 0x2f0d04u: goto label_2f0d04;
        case 0x2f0d08u: goto label_2f0d08;
        case 0x2f0d0cu: goto label_2f0d0c;
        case 0x2f0d10u: goto label_2f0d10;
        case 0x2f0d14u: goto label_2f0d14;
        case 0x2f0d18u: goto label_2f0d18;
        case 0x2f0d1cu: goto label_2f0d1c;
        case 0x2f0d20u: goto label_2f0d20;
        case 0x2f0d24u: goto label_2f0d24;
        case 0x2f0d28u: goto label_2f0d28;
        case 0x2f0d2cu: goto label_2f0d2c;
        case 0x2f0d30u: goto label_2f0d30;
        case 0x2f0d34u: goto label_2f0d34;
        case 0x2f0d38u: goto label_2f0d38;
        case 0x2f0d3cu: goto label_2f0d3c;
        case 0x2f0d40u: goto label_2f0d40;
        case 0x2f0d44u: goto label_2f0d44;
        case 0x2f0d48u: goto label_2f0d48;
        case 0x2f0d4cu: goto label_2f0d4c;
        case 0x2f0d50u: goto label_2f0d50;
        case 0x2f0d54u: goto label_2f0d54;
        case 0x2f0d58u: goto label_2f0d58;
        case 0x2f0d5cu: goto label_2f0d5c;
        case 0x2f0d60u: goto label_2f0d60;
        case 0x2f0d64u: goto label_2f0d64;
        case 0x2f0d68u: goto label_2f0d68;
        case 0x2f0d6cu: goto label_2f0d6c;
        case 0x2f0d70u: goto label_2f0d70;
        case 0x2f0d74u: goto label_2f0d74;
        case 0x2f0d78u: goto label_2f0d78;
        case 0x2f0d7cu: goto label_2f0d7c;
        case 0x2f0d80u: goto label_2f0d80;
        case 0x2f0d84u: goto label_2f0d84;
        case 0x2f0d88u: goto label_2f0d88;
        case 0x2f0d8cu: goto label_2f0d8c;
        case 0x2f0d90u: goto label_2f0d90;
        case 0x2f0d94u: goto label_2f0d94;
        case 0x2f0d98u: goto label_2f0d98;
        case 0x2f0d9cu: goto label_2f0d9c;
        case 0x2f0da0u: goto label_2f0da0;
        case 0x2f0da4u: goto label_2f0da4;
        case 0x2f0da8u: goto label_2f0da8;
        case 0x2f0dacu: goto label_2f0dac;
        case 0x2f0db0u: goto label_2f0db0;
        case 0x2f0db4u: goto label_2f0db4;
        case 0x2f0db8u: goto label_2f0db8;
        case 0x2f0dbcu: goto label_2f0dbc;
        case 0x2f0dc0u: goto label_2f0dc0;
        case 0x2f0dc4u: goto label_2f0dc4;
        case 0x2f0dc8u: goto label_2f0dc8;
        case 0x2f0dccu: goto label_2f0dcc;
        case 0x2f0dd0u: goto label_2f0dd0;
        case 0x2f0dd4u: goto label_2f0dd4;
        case 0x2f0dd8u: goto label_2f0dd8;
        case 0x2f0ddcu: goto label_2f0ddc;
        case 0x2f0de0u: goto label_2f0de0;
        case 0x2f0de4u: goto label_2f0de4;
        case 0x2f0de8u: goto label_2f0de8;
        case 0x2f0decu: goto label_2f0dec;
        case 0x2f0df0u: goto label_2f0df0;
        case 0x2f0df4u: goto label_2f0df4;
        case 0x2f0df8u: goto label_2f0df8;
        case 0x2f0dfcu: goto label_2f0dfc;
        case 0x2f0e00u: goto label_2f0e00;
        case 0x2f0e04u: goto label_2f0e04;
        case 0x2f0e08u: goto label_2f0e08;
        case 0x2f0e0cu: goto label_2f0e0c;
        case 0x2f0e10u: goto label_2f0e10;
        case 0x2f0e14u: goto label_2f0e14;
        case 0x2f0e18u: goto label_2f0e18;
        case 0x2f0e1cu: goto label_2f0e1c;
        case 0x2f0e20u: goto label_2f0e20;
        case 0x2f0e24u: goto label_2f0e24;
        case 0x2f0e28u: goto label_2f0e28;
        case 0x2f0e2cu: goto label_2f0e2c;
        case 0x2f0e30u: goto label_2f0e30;
        case 0x2f0e34u: goto label_2f0e34;
        case 0x2f0e38u: goto label_2f0e38;
        case 0x2f0e3cu: goto label_2f0e3c;
        case 0x2f0e40u: goto label_2f0e40;
        case 0x2f0e44u: goto label_2f0e44;
        case 0x2f0e48u: goto label_2f0e48;
        case 0x2f0e4cu: goto label_2f0e4c;
        case 0x2f0e50u: goto label_2f0e50;
        case 0x2f0e54u: goto label_2f0e54;
        case 0x2f0e58u: goto label_2f0e58;
        case 0x2f0e5cu: goto label_2f0e5c;
        case 0x2f0e60u: goto label_2f0e60;
        case 0x2f0e64u: goto label_2f0e64;
        case 0x2f0e68u: goto label_2f0e68;
        case 0x2f0e6cu: goto label_2f0e6c;
        case 0x2f0e70u: goto label_2f0e70;
        case 0x2f0e74u: goto label_2f0e74;
        case 0x2f0e78u: goto label_2f0e78;
        case 0x2f0e7cu: goto label_2f0e7c;
        case 0x2f0e80u: goto label_2f0e80;
        case 0x2f0e84u: goto label_2f0e84;
        case 0x2f0e88u: goto label_2f0e88;
        case 0x2f0e8cu: goto label_2f0e8c;
        case 0x2f0e90u: goto label_2f0e90;
        case 0x2f0e94u: goto label_2f0e94;
        case 0x2f0e98u: goto label_2f0e98;
        case 0x2f0e9cu: goto label_2f0e9c;
        case 0x2f0ea0u: goto label_2f0ea0;
        case 0x2f0ea4u: goto label_2f0ea4;
        case 0x2f0ea8u: goto label_2f0ea8;
        case 0x2f0eacu: goto label_2f0eac;
        case 0x2f0eb0u: goto label_2f0eb0;
        case 0x2f0eb4u: goto label_2f0eb4;
        case 0x2f0eb8u: goto label_2f0eb8;
        case 0x2f0ebcu: goto label_2f0ebc;
        default: break;
    }

    ctx->pc = 0x2f0a50u;

label_2f0a50:
    // 0x2f0a50: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x2f0a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_2f0a54:
    // 0x2f0a54: 0x7fb301d0  sq          $s3, 0x1D0($sp)
    ctx->pc = 0x2f0a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 19));
label_2f0a58:
    // 0x2f0a58: 0x7fb601a0  sq          $s6, 0x1A0($sp)
    ctx->pc = 0x2f0a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 22));
label_2f0a5c:
    // 0x2f0a5c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f0a5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f0a60:
    // 0x2f0a60: 0x7fb70190  sq          $s7, 0x190($sp)
    ctx->pc = 0x2f0a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 23));
label_2f0a64:
    // 0x2f0a64: 0x7fb00200  sq          $s0, 0x200($sp)
    ctx->pc = 0x2f0a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 16));
label_2f0a68:
    // 0x2f0a68: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2f0a68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f0a6c:
    // 0x2f0a6c: 0x7fb101f0  sq          $s1, 0x1F0($sp)
    ctx->pc = 0x2f0a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 17));
label_2f0a70:
    // 0x2f0a70: 0x7fb201e0  sq          $s2, 0x1E0($sp)
    ctx->pc = 0x2f0a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 18));
label_2f0a74:
    // 0x2f0a74: 0x7fb401c0  sq          $s4, 0x1C0($sp)
    ctx->pc = 0x2f0a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 20));
label_2f0a78:
    // 0x2f0a78: 0x7fb501b0  sq          $s5, 0x1B0($sp)
    ctx->pc = 0x2f0a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 21));
label_2f0a7c:
    // 0x2f0a7c: 0x7fbe0180  sq          $fp, 0x180($sp)
    ctx->pc = 0x2f0a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 30));
label_2f0a80:
    // 0x2f0a80: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x2f0a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
label_2f0a84:
    // 0x2f0a84: 0xe7b40210  swc1        $f20, 0x210($sp)
    ctx->pc = 0x2f0a84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_2f0a88:
    // 0x2f0a88: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2f0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f0a8c:
    // 0x2f0a8c: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x2f0a8cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0a90:
    // 0x2f0a90: 0xc089bfc  jal         func_226FF0
label_2f0a94:
    if (ctx->pc == 0x2F0A94u) {
        ctx->pc = 0x2F0A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A90u;
        // 0x2f0a94: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0A98u;
        goto label_2f0a98;
    }
    ctx->pc = 0x2F0A90u;
    SET_GPR_U32(ctx, 31, 0x2F0A98u);
    ctx->pc = 0x2F0A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0A90u;
    // 0x2f0a94: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2F0A90u, 0x2F0A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0A98u;
label_2f0a98:
    // 0x2f0a98: 0xc0e57ce  jal         func_395F38
label_2f0a9c:
    if (ctx->pc == 0x2F0A9Cu) {
        ctx->pc = 0x2F0A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A98u;
        // 0x2f0a9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0AA0u;
        goto label_2f0aa0;
    }
    ctx->pc = 0x2F0A98u;
    SET_GPR_U32(ctx, 31, 0x2F0AA0u);
    ctx->pc = 0x2F0A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0A98u;
    // 0x2f0a9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2F0A98u, 0x2F0AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0AA0u;
label_2f0aa0:
    // 0x2f0aa0: 0x12e000f6  beqz        $s7, . + 4 + (0xF6 << 2)
label_2f0aa4:
    if (ctx->pc == 0x2F0AA4u) {
        ctx->pc = 0x2F0AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AA0u;
        // 0x2f0aa4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0AA8u;
        goto label_2f0aa8;
    }
    ctx->pc = 0x2F0AA0u;
    {
        const bool branch_taken_0x2f0aa0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AA0u;
        // 0x2f0aa4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0aa0) {
            ctx->pc = 0x2F0E7Cu;
            goto label_2f0e7c;
        }
    }
    ctx->pc = 0x2F0AA8u;
label_2f0aa8:
    // 0x2f0aa8: 0x12c000f5  beqz        $s6, . + 4 + (0xF5 << 2)
label_2f0aac:
    if (ctx->pc == 0x2F0AACu) {
        ctx->pc = 0x2F0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AA8u;
        // 0x2f0aac: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0AB0u;
        goto label_2f0ab0;
    }
    ctx->pc = 0x2F0AA8u;
    {
        const bool branch_taken_0x2f0aa8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AA8u;
        // 0x2f0aac: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0aa8) {
            ctx->pc = 0x2F0E80u;
            goto label_2f0e80;
        }
    }
    ctx->pc = 0x2F0AB0u;
label_2f0ab0:
    // 0x2f0ab0: 0x9262004e  lbu         $v0, 0x4E($s3)
    ctx->pc = 0x2f0ab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 78)));
label_2f0ab4:
    // 0x2f0ab4: 0x104000f1  beqz        $v0, . + 4 + (0xF1 << 2)
label_2f0ab8:
    if (ctx->pc == 0x2F0AB8u) {
        ctx->pc = 0x2F0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AB4u;
        // 0x2f0ab8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0ABCu;
        goto label_2f0abc;
    }
    ctx->pc = 0x2F0AB4u;
    {
        const bool branch_taken_0x2f0ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AB4u;
        // 0x2f0ab8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ab4) {
            ctx->pc = 0x2F0E7Cu;
            goto label_2f0e7c;
        }
    }
    ctx->pc = 0x2F0ABCu;
label_2f0abc:
    // 0x2f0abc: 0x87c50092  lh          $a1, 0x92($fp)
    ctx->pc = 0x2f0abcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 146)));
label_2f0ac0:
    // 0x2f0ac0: 0x24514b00  addiu       $s1, $v0, 0x4B00
    ctx->pc = 0x2f0ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f0ac4:
    // 0x2f0ac4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f0ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ac8:
    // 0x2f0ac8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f0ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2f0acc:
    // 0x2f0acc: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2f0accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2f0ad0:
    // 0x2f0ad0: 0xc0cd8c2  jal         func_336308
label_2f0ad4:
    if (ctx->pc == 0x2F0AD4u) {
        ctx->pc = 0x2F0AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AD0u;
        // 0x2f0ad4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0AD8u;
        goto label_2f0ad8;
    }
    ctx->pc = 0x2F0AD0u;
    SET_GPR_U32(ctx, 31, 0x2F0AD8u);
    ctx->pc = 0x2F0AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0AD0u;
    // 0x2f0ad4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x2F0AD0u, 0x2F0AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0AD8u;
label_2f0ad8:
    // 0x2f0ad8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2f0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2f0adc:
    // 0x2f0adc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2f0adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f0ae0:
    // 0x2f0ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ae4:
    // 0x2f0ae4: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x2f0ae4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_2f0ae8:
    // 0x2f0ae8: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x2f0ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_2f0aec:
    // 0x2f0aec: 0x60f809  jalr        $v1
label_2f0af0:
    if (ctx->pc == 0x2F0AF0u) {
        ctx->pc = 0x2F0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AECu;
        // 0x2f0af0: 0x2c52821  addu        $a1, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0AF4u;
        goto label_2f0af4;
    }
    ctx->pc = 0x2F0AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0AF4u);
        ctx->pc = 0x2F0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AECu;
        // 0x2f0af0: 0x2c52821  addu        $a1, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0AECu, 0x2F0AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0AF4u;
label_2f0af4:
    // 0x2f0af4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2f0af4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f0af8:
    // 0x2f0af8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2f0af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f0afc:
    // 0x2f0afc: 0xc088ee6  jal         func_223B98
label_2f0b00:
    if (ctx->pc == 0x2F0B00u) {
        ctx->pc = 0x2F0B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AFCu;
        // 0x2f0b00: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B04u;
        goto label_2f0b04;
    }
    ctx->pc = 0x2F0AFCu;
    SET_GPR_U32(ctx, 31, 0x2F0B04u);
    ctx->pc = 0x2F0B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0AFCu;
    // 0x2f0b00: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x2F0AFCu, 0x2F0B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0B04u;
label_2f0b04:
    // 0x2f0b04: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_2f0b08:
    if (ctx->pc == 0x2F0B08u) {
        ctx->pc = 0x2F0B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B04u;
        // 0x2f0b08: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B0Cu;
        goto label_2f0b0c;
    }
    ctx->pc = 0x2F0B04u;
    {
        const bool branch_taken_0x2f0b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B04u;
        // 0x2f0b08: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b04) {
            ctx->pc = 0x2F0B78u;
            goto label_2f0b78;
        }
    }
    ctx->pc = 0x2F0B0Cu;
label_2f0b0c:
    // 0x2f0b0c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2f0b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2f0b10:
    // 0x2f0b10: 0x86e40092  lh          $a0, 0x92($s7)
    ctx->pc = 0x2f0b10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 146)));
label_2f0b14:
    // 0x2f0b14: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x2f0b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_2f0b18:
    // 0x2f0b18: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2f0b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_2f0b1c:
    // 0x2f0b1c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2f0b1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2f0b20:
    // 0x2f0b20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f0b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0b24:
    // 0x2f0b24: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2f0b24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f0b28:
    // 0x2f0b28: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f0b28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2f0b2c:
    // 0x2f0b2c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2f0b2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2f0b30:
    // 0x2f0b30: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2f0b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_2f0b34:
    // 0x2f0b34: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f0b34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f0b38:
    // 0x2f0b38: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f0b38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f0b3c:
    // 0x2f0b3c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f0b3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f0b40:
    // 0x2f0b40: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2f0b40u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0b44:
    // 0x2f0b44: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2f0b44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0b48:
    // 0x2f0b48: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f0b48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f0b4c:
    // 0x2f0b4c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f0b4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f0b50:
    // 0x2f0b50: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f0b50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f0b54:
    // 0x2f0b54: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f0b54u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2f0b58:
    // 0x2f0b58: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2f0b58u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2f0b5c:
    // 0x2f0b5c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2f0b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2f0b60:
    // 0x2f0b60: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f0b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2f0b64:
    // 0x2f0b64: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2f0b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2f0b68:
    // 0x2f0b68: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2f0b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2f0b6c:
    // 0x2f0b6c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2f0b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2f0b70:
    // 0x2f0b70: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f0b74:
    if (ctx->pc == 0x2F0B74u) {
        ctx->pc = 0x2F0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B70u;
        // 0x2f0b74: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B78u;
        goto label_2f0b78;
    }
    ctx->pc = 0x2F0B70u;
    {
        const bool branch_taken_0x2f0b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B70u;
        // 0x2f0b74: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b70) {
            ctx->pc = 0x2F0B8Cu;
            goto label_2f0b8c;
        }
    }
    ctx->pc = 0x2F0B78u;
label_2f0b78:
    // 0x2f0b78: 0x86e20092  lh          $v0, 0x92($s7)
    ctx->pc = 0x2f0b78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 146)));
label_2f0b7c:
    // 0x2f0b7c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2f0b80:
    // 0x2f0b80: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f0b84:
    // 0x2f0b84: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f0b84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0b88:
    // 0x2f0b88: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2f0b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2f0b8c:
    // 0x2f0b8c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2f0b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f0b90:
    // 0x2f0b90: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2f0b90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f0b94:
    // 0x2f0b94: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2f0b94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f0b98:
    // 0x2f0b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f0b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f0b9c:
    // 0x2f0b9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f0b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ba0:
    // 0x2f0ba0: 0xc0bbf9a  jal         func_2EFE68
label_2f0ba4:
    if (ctx->pc == 0x2F0BA4u) {
        ctx->pc = 0x2F0BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BA0u;
        // 0x2f0ba4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BA8u;
        goto label_2f0ba8;
    }
    ctx->pc = 0x2F0BA0u;
    SET_GPR_U32(ctx, 31, 0x2F0BA8u);
    ctx->pc = 0x2F0BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0BA0u;
    // 0x2f0ba4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFE68u, 0x2F0BA0u, 0x2F0BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0BA8u;
label_2f0ba8:
    // 0x2f0ba8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2f0ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f0bac:
    // 0x2f0bac: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x2f0bacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f0bb0:
    // 0x2f0bb0: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x2f0bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_2f0bb4:
    // 0x2f0bb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f0bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0bb8:
    // 0x2f0bb8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2f0bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2f0bbc:
    // 0x2f0bbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f0bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f0bc0:
    // 0x2f0bc0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f0bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f0bc4:
    // 0x2f0bc4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2f0bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f0bc8:
    // 0x2f0bc8: 0xc0bc05e  jal         func_2F0178
label_2f0bcc:
    if (ctx->pc == 0x2F0BCCu) {
        ctx->pc = 0x2F0BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BC8u;
        // 0x2f0bcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BD0u;
        goto label_2f0bd0;
    }
    ctx->pc = 0x2F0BC8u;
    SET_GPR_U32(ctx, 31, 0x2F0BD0u);
    ctx->pc = 0x2F0BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0BC8u;
    // 0x2f0bcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0178u, 0x2F0BC8u, 0x2F0BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0BD0u;
label_2f0bd0:
    // 0x2f0bd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f0bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0bd4:
    // 0x2f0bd4: 0xc08a61a  jal         func_229868
label_2f0bd8:
    if (ctx->pc == 0x2F0BD8u) {
        ctx->pc = 0x2F0BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BD4u;
        // 0x2f0bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BDCu;
        goto label_2f0bdc;
    }
    ctx->pc = 0x2F0BD4u;
    SET_GPR_U32(ctx, 31, 0x2F0BDCu);
    ctx->pc = 0x2F0BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0BD4u;
    // 0x2f0bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2F0BD4u, 0x2F0BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0BDCu;
label_2f0bdc:
    // 0x2f0bdc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2f0bdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0be0:
    // 0x2f0be0: 0xc0e57ce  jal         func_395F38
label_2f0be4:
    if (ctx->pc == 0x2F0BE4u) {
        ctx->pc = 0x2F0BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BE0u;
        // 0x2f0be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BE8u;
        goto label_2f0be8;
    }
    ctx->pc = 0x2F0BE0u;
    SET_GPR_U32(ctx, 31, 0x2F0BE8u);
    ctx->pc = 0x2F0BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0BE0u;
    // 0x2f0be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2F0BE0u, 0x2F0BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0BE8u;
label_2f0be8:
    // 0x2f0be8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_2f0bec:
    if (ctx->pc == 0x2F0BECu) {
        ctx->pc = 0x2F0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BE8u;
        // 0x2f0bec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BF0u;
        goto label_2f0bf0;
    }
    ctx->pc = 0x2F0BE8u;
    {
        const bool branch_taken_0x2f0be8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BE8u;
        // 0x2f0bec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0be8) {
            ctx->pc = 0x2F0C00u;
            goto label_2f0c00;
        }
    }
    ctx->pc = 0x2F0BF0u;
label_2f0bf0:
    // 0x2f0bf0: 0xc0bc1a4  jal         func_2F0690
label_2f0bf4:
    if (ctx->pc == 0x2F0BF4u) {
        ctx->pc = 0x2F0BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BF0u;
        // 0x2f0bf4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BF8u;
        goto label_2f0bf8;
    }
    ctx->pc = 0x2F0BF0u;
    SET_GPR_U32(ctx, 31, 0x2F0BF8u);
    ctx->pc = 0x2F0BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0BF0u;
    // 0x2f0bf4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0690u, 0x2F0BF0u, 0x2F0BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0BF8u;
label_2f0bf8:
    // 0x2f0bf8: 0x1000000a  b           . + 4 + (0xA << 2)
label_2f0bfc:
    if (ctx->pc == 0x2F0BFCu) {
        ctx->pc = 0x2F0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BF8u;
        // 0x2f0bfc: 0xafa00160  sw          $zero, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C00u;
        goto label_2f0c00;
    }
    ctx->pc = 0x2F0BF8u;
    {
        const bool branch_taken_0x2f0bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BF8u;
        // 0x2f0bfc: 0xafa00160  sw          $zero, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0bf8) {
            ctx->pc = 0x2F0C24u;
            goto label_2f0c24;
        }
    }
    ctx->pc = 0x2F0C00u;
label_2f0c00:
    // 0x2f0c00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f0c04:
    if (ctx->pc == 0x2F0C04u) {
        ctx->pc = 0x2F0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C00u;
        // 0x2f0c04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C08u;
        goto label_2f0c08;
    }
    ctx->pc = 0x2F0C00u;
    {
        const bool branch_taken_0x2f0c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C00u;
        // 0x2f0c04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c00) {
            ctx->pc = 0x2F0C18u;
            goto label_2f0c18;
        }
    }
    ctx->pc = 0x2F0C08u;
label_2f0c08:
    // 0x2f0c08: 0xc0bc1b4  jal         func_2F06D0
label_2f0c0c:
    if (ctx->pc == 0x2F0C0Cu) {
        ctx->pc = 0x2F0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C08u;
        // 0x2f0c0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C10u;
        goto label_2f0c10;
    }
    ctx->pc = 0x2F0C08u;
    SET_GPR_U32(ctx, 31, 0x2F0C10u);
    ctx->pc = 0x2F0C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0C08u;
    // 0x2f0c0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F06D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F06D0u, 0x2F0C08u, 0x2F0C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0C10u;
label_2f0c10:
    // 0x2f0c10: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f0c14:
    if (ctx->pc == 0x2F0C14u) {
        ctx->pc = 0x2F0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C10u;
        // 0x2f0c14: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C18u;
        goto label_2f0c18;
    }
    ctx->pc = 0x2F0C10u;
    {
        const bool branch_taken_0x2f0c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C10u;
        // 0x2f0c14: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c10) {
            ctx->pc = 0x2F0C28u;
            goto label_2f0c28;
        }
    }
    ctx->pc = 0x2F0C18u;
label_2f0c18:
    // 0x2f0c18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f0c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f0c1c:
    // 0x2f0c1c: 0xc0bc1e2  jal         func_2F0788
label_2f0c20:
    if (ctx->pc == 0x2F0C20u) {
        ctx->pc = 0x2F0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C1Cu;
        // 0x2f0c20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C24u;
        goto label_2f0c24;
    }
    ctx->pc = 0x2F0C1Cu;
    SET_GPR_U32(ctx, 31, 0x2F0C24u);
    ctx->pc = 0x2F0C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0C1Cu;
    // 0x2f0c20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0788u, 0x2F0C1Cu, 0x2F0C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0C24u;
label_2f0c24:
    // 0x2f0c24: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2f0c24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0c28:
    // 0x2f0c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f0c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0c2c:
    // 0x2f0c2c: 0x16a2008f  bne         $s5, $v0, . + 4 + (0x8F << 2)
label_2f0c30:
    if (ctx->pc == 0x2F0C30u) {
        ctx->pc = 0x2F0C34u;
        goto label_2f0c34;
    }
    ctx->pc = 0x2F0C2Cu;
    {
        const bool branch_taken_0x2f0c2c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f0c2c) {
            ctx->pc = 0x2F0E6Cu;
            goto label_2f0e6c;
        }
    }
    ctx->pc = 0x2F0C34u;
label_2f0c34:
    // 0x2f0c34: 0xc0a367c  jal         func_28D9F0
label_2f0c38:
    if (ctx->pc == 0x2F0C38u) {
        ctx->pc = 0x2F0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C34u;
        // 0x2f0c38: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C3Cu;
        goto label_2f0c3c;
    }
    ctx->pc = 0x2F0C34u;
    SET_GPR_U32(ctx, 31, 0x2F0C3Cu);
    ctx->pc = 0x2F0C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0C34u;
    // 0x2f0c38: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F0C34u, 0x2F0C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0C3Cu;
label_2f0c3c:
    // 0x2f0c3c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2f0c40:
    if (ctx->pc == 0x2F0C40u) {
        ctx->pc = 0x2F0C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C3Cu;
        // 0x2f0c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C44u;
        goto label_2f0c44;
    }
    ctx->pc = 0x2F0C3Cu;
    {
        const bool branch_taken_0x2f0c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C3Cu;
        // 0x2f0c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c3c) {
            ctx->pc = 0x2F0C64u;
            goto label_2f0c64;
        }
    }
    ctx->pc = 0x2F0C44u;
label_2f0c44:
    // 0x2f0c44: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2f0c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f0c48:
    // 0x2f0c48: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2f0c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2f0c4c:
    // 0x2f0c4c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f0c4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f0c50:
    // 0x2f0c50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f0c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f0c54:
    // 0x2f0c54: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2f0c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2f0c58:
    // 0x2f0c58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f0c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0c5c:
    // 0x2f0c5c: 0xc0be8c0  jal         func_2FA300
label_2f0c60:
    if (ctx->pc == 0x2F0C60u) {
        ctx->pc = 0x2F0C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C5Cu;
        // 0x2f0c60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C64u;
        goto label_2f0c64;
    }
    ctx->pc = 0x2F0C5Cu;
    SET_GPR_U32(ctx, 31, 0x2F0C64u);
    ctx->pc = 0x2F0C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0C5Cu;
    // 0x2f0c60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2F0C5Cu, 0x2F0C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0C64u;
label_2f0c64:
    // 0x2f0c64: 0xc0a367c  jal         func_28D9F0
label_2f0c68:
    if (ctx->pc == 0x2F0C68u) {
        ctx->pc = 0x2F0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C64u;
        // 0x2f0c68: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C6Cu;
        goto label_2f0c6c;
    }
    ctx->pc = 0x2F0C64u;
    SET_GPR_U32(ctx, 31, 0x2F0C6Cu);
    ctx->pc = 0x2F0C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0C64u;
    // 0x2f0c68: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F0C64u, 0x2F0C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0C6Cu;
label_2f0c6c:
    // 0x2f0c6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f0c70:
    if (ctx->pc == 0x2F0C70u) {
        ctx->pc = 0x2F0C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C6Cu;
        // 0x2f0c70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C74u;
        goto label_2f0c74;
    }
    ctx->pc = 0x2F0C6Cu;
    {
        const bool branch_taken_0x2f0c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C6Cu;
        // 0x2f0c70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c6c) {
            ctx->pc = 0x2F0C80u;
            goto label_2f0c80;
        }
    }
    ctx->pc = 0x2F0C74u;
label_2f0c74:
    // 0x2f0c74: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2f0c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f0c78:
    // 0x2f0c78: 0xc0bebdc  jal         func_2FAF70
label_2f0c7c:
    if (ctx->pc == 0x2F0C7Cu) {
        ctx->pc = 0x2F0C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C78u;
        // 0x2f0c7c: 0x96660044  lhu         $a2, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C80u;
        goto label_2f0c80;
    }
    ctx->pc = 0x2F0C78u;
    SET_GPR_U32(ctx, 31, 0x2F0C80u);
    ctx->pc = 0x2F0C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0C78u;
    // 0x2f0c7c: 0x96660044  lhu         $a2, 0x44($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2F0C78u, 0x2F0C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0C80u;
label_2f0c80:
    // 0x2f0c80: 0x9262004e  lbu         $v0, 0x4E($s3)
    ctx->pc = 0x2f0c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 78)));
label_2f0c84:
    // 0x2f0c84: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x2f0c84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_2f0c88:
    // 0x2f0c88: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2f0c88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_2f0c8c:
    // 0x2f0c8c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2f0c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2f0c90:
    // 0x2f0c90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f0c94:
    // 0x2f0c94: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2f0c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2f0c98:
    // 0x2f0c98: 0x261091e0  addiu       $s0, $s0, -0x6E20
    ctx->pc = 0x2f0c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939104));
label_2f0c9c:
    // 0x2f0c9c: 0x26310f80  addiu       $s1, $s1, 0xF80
    ctx->pc = 0x2f0c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3968));
label_2f0ca0:
    // 0x2f0ca0: 0xa262004e  sb          $v0, 0x4E($s3)
    ctx->pc = 0x2f0ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 2));
label_2f0ca4:
    // 0x2f0ca4: 0xc0cd4e4  jal         func_335390
label_2f0ca8:
    if (ctx->pc == 0x2F0CA8u) {
        ctx->pc = 0x2F0CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0CA4u;
        // 0x2f0ca8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0CACu;
        goto label_2f0cac;
    }
    ctx->pc = 0x2F0CA4u;
    SET_GPR_U32(ctx, 31, 0x2F0CACu);
    ctx->pc = 0x2F0CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0CA4u;
    // 0x2f0ca8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2F0CA4u, 0x2F0CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0CACu;
label_2f0cac:
    // 0x2f0cac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f0cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f0cb0:
    // 0x2f0cb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f0cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f0cb4:
    // 0x2f0cb4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2f0cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f0cb8:
    // 0x2f0cb8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2f0cb8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2f0cbc:
    // 0x2f0cbc: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_2f0cc0:
    if (ctx->pc == 0x2F0CC0u) {
        ctx->pc = 0x2F0CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0CBCu;
        // 0x2f0cc0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0CC4u;
        goto label_2f0cc4;
    }
    ctx->pc = 0x2F0CBCu;
    {
        const bool branch_taken_0x2f0cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0cbc) {
            ctx->pc = 0x2F0CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0CBCu;
            // 0x2f0cc0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0CC4u;
            goto label_2f0cc4;
        }
    }
    ctx->pc = 0x2F0CC4u;
label_2f0cc4:
    // 0x2f0cc4: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x2f0cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2f0cc8:
    // 0x2f0cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ccc:
    // 0x2f0ccc: 0x1810  mfhi        $v1
    ctx->pc = 0x2f0cccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2f0cd0:
    // 0x2f0cd0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2f0cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2f0cd4:
    // 0x2f0cd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f0cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2f0cd8:
    // 0x2f0cd8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2f0cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2f0cdc:
    // 0x2f0cdc: 0xc050fda  jal         func_143F68
label_2f0ce0:
    if (ctx->pc == 0x2F0CE0u) {
        ctx->pc = 0x2F0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0CDCu;
        // 0x2f0ce0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0CE4u;
        goto label_2f0ce4;
    }
    ctx->pc = 0x2F0CDCu;
    SET_GPR_U32(ctx, 31, 0x2F0CE4u);
    ctx->pc = 0x2F0CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0CDCu;
    // 0x2f0ce0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x2F0CDCu, 0x2F0CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0CE4u;
label_2f0ce4:
    // 0x2f0ce4: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x2f0ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_2f0ce8:
    // 0x2f0ce8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f0ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0cec:
    // 0x2f0cec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2f0cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f0cf0:
    // 0x2f0cf0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f0cf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f0cf4:
    // 0x2f0cf4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2f0cf4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2f0cf8:
    // 0x2f0cf8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f0cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0cfc:
    // 0x2f0cfc: 0xc043f74  jal         func_10FDD0
label_2f0d00:
    if (ctx->pc == 0x2F0D00u) {
        ctx->pc = 0x2F0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0CFCu;
        // 0x2f0d00: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0D04u;
        goto label_2f0d04;
    }
    ctx->pc = 0x2F0CFCu;
    SET_GPR_U32(ctx, 31, 0x2F0D04u);
    ctx->pc = 0x2F0D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0CFCu;
    // 0x2f0d00: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x2F0CFCu, 0x2F0D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0D04u;
label_2f0d04:
    // 0x2f0d04: 0x12800047  beqz        $s4, . + 4 + (0x47 << 2)
label_2f0d08:
    if (ctx->pc == 0x2F0D08u) {
        ctx->pc = 0x2F0D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D04u;
        // 0x2f0d08: 0x27b20040  addiu       $s2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0D0Cu;
        goto label_2f0d0c;
    }
    ctx->pc = 0x2F0D04u;
    {
        const bool branch_taken_0x2f0d04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D04u;
        // 0x2f0d08: 0x27b20040  addiu       $s2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d04) {
            ctx->pc = 0x2F0E24u;
            goto label_2f0e24;
        }
    }
    ctx->pc = 0x2F0D0Cu;
label_2f0d0c:
    // 0x2f0d0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f0d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d10:
    // 0x2f0d10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f0d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d14:
    // 0x2f0d14: 0xc10c1fa  jal         func_4307E8
label_2f0d18:
    if (ctx->pc == 0x2F0D18u) {
        ctx->pc = 0x2F0D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D14u;
        // 0x2f0d18: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0D1Cu;
        goto label_2f0d1c;
    }
    ctx->pc = 0x2F0D14u;
    SET_GPR_U32(ctx, 31, 0x2F0D1Cu);
    ctx->pc = 0x2F0D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0D14u;
    // 0x2f0d18: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x2F0D14u, 0x2F0D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0D1Cu;
label_2f0d1c:
    // 0x2f0d1c: 0x86650046  lh          $a1, 0x46($s3)
    ctx->pc = 0x2f0d1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
label_2f0d20:
    // 0x2f0d20: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f0d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2f0d24:
    // 0x2f0d24: 0xe7b4004c  swc1        $f20, 0x4C($sp)
    ctx->pc = 0x2f0d24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2f0d28:
    // 0x2f0d28: 0x24434b00  addiu       $v1, $v0, 0x4B00
    ctx->pc = 0x2f0d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f0d2c:
    // 0x2f0d2c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2f0d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2f0d30:
    // 0x2f0d30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f0d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f0d34:
    // 0x2f0d34: 0x86820092  lh          $v0, 0x92($s4)
    ctx->pc = 0x2f0d34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2f0d38:
    // 0x2f0d38: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2f0d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0d3c:
    // 0x2f0d3c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2f0d40:
    // 0x2f0d40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f0d44:
    // 0x2f0d44: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f0d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0d48:
    // 0x2f0d48: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2f0d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2f0d4c:
    // 0x2f0d4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f0d4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0d50:
    // 0x2f0d50: 0x0  nop
    ctx->pc = 0x2f0d50u;
    // NOP
label_2f0d54:
    // 0x2f0d54: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2f0d58:
    if (ctx->pc == 0x2F0D58u) {
        ctx->pc = 0x2F0D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D54u;
        // 0x2f0d58: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0D5Cu;
        goto label_2f0d5c;
    }
    ctx->pc = 0x2F0D54u;
    {
        const bool branch_taken_0x2f0d54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F0D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D54u;
        // 0x2f0d58: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d54) {
            ctx->pc = 0x2F0D60u;
            goto label_2f0d60;
        }
    }
    ctx->pc = 0x2F0D5Cu;
label_2f0d5c:
    // 0x2f0d5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f0d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d60:
    // 0x2f0d60: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2f0d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d64:
    // 0x2f0d64: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2f0d64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d68:
    // 0x2f0d68: 0xc0992f6  jal         func_264BD8
label_2f0d6c:
    if (ctx->pc == 0x2F0D6Cu) {
        ctx->pc = 0x2F0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D68u;
        // 0x2f0d6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0D70u;
        goto label_2f0d70;
    }
    ctx->pc = 0x2F0D68u;
    SET_GPR_U32(ctx, 31, 0x2F0D70u);
    ctx->pc = 0x2F0D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0D68u;
    // 0x2f0d6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264BD8u, 0x2F0D68u, 0x2F0D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0D70u;
label_2f0d70:
    // 0x2f0d70: 0x86620046  lh          $v0, 0x46($s3)
    ctx->pc = 0x2f0d70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
label_2f0d74:
    // 0x2f0d74: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2f0d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2f0d78:
    // 0x2f0d78: 0xacb50020  sw          $s5, 0x20($a1)
    ctx->pc = 0x2f0d78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 21));
label_2f0d7c:
    // 0x2f0d7c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x2f0d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_2f0d80:
    // 0x2f0d80: 0xafb60128  sw          $s6, 0x128($sp)
    ctx->pc = 0x2f0d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 22));
label_2f0d84:
    // 0x2f0d84: 0xafbe0124  sw          $fp, 0x124($sp)
    ctx->pc = 0x2f0d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 30));
label_2f0d88:
    // 0x2f0d88: 0xafb40144  sw          $s4, 0x144($sp)
    ctx->pc = 0x2f0d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 20));
label_2f0d8c:
    // 0x2f0d8c: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x2f0d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_2f0d90:
    // 0x2f0d90: 0xa3b50131  sb          $s5, 0x131($sp)
    ctx->pc = 0x2f0d90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 305), (uint8_t)GPR_U32(ctx, 21));
label_2f0d94:
    // 0x2f0d94: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2f0d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f0d98:
    // 0x2f0d98: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2f0d98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2f0d9c:
    // 0x2f0d9c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2f0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2f0da0:
    // 0x2f0da0: 0x40f809  jalr        $v0
label_2f0da4:
    if (ctx->pc == 0x2F0DA4u) {
        ctx->pc = 0x2F0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0DA0u;
        // 0x2f0da4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0DA8u;
        goto label_2f0da8;
    }
    ctx->pc = 0x2F0DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F0DA8u);
        ctx->pc = 0x2F0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0DA0u;
        // 0x2f0da4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0DA0u, 0x2F0DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0DA8u;
label_2f0da8:
    // 0x2f0da8: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x2f0da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0dac:
    // 0x2f0dac: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x2f0dacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_2f0db0:
    // 0x2f0db0: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x2f0db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0db4:
    // 0x2f0db4: 0x26107b98  addiu       $s0, $s0, 0x7B98
    ctx->pc = 0x2f0db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31640));
label_2f0db8:
    // 0x2f0db8: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2f0db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0dbc:
    // 0x2f0dbc: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x2f0dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f0dc0:
    // 0x2f0dc0: 0xe7a20150  swc1        $f2, 0x150($sp)
    ctx->pc = 0x2f0dc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2f0dc4:
    // 0x2f0dc4: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x2f0dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_2f0dc8:
    // 0x2f0dc8: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x2f0dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_2f0dcc:
    // 0x2f0dcc: 0x6ba30157  ldl         $v1, 0x157($sp)
    ctx->pc = 0x2f0dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2f0dd0:
    // 0x2f0dd0: 0x6fa30150  ldr         $v1, 0x150($sp)
    ctx->pc = 0x2f0dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2f0dd4:
    // 0x2f0dd4: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x2f0dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_2f0dd8:
    // 0x2f0dd8: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x2f0dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f0ddc:
    // 0x2f0ddc: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x2f0ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f0de0:
    // 0x2f0de0: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x2f0de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_2f0de4:
    // 0x2f0de4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2f0de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f0de8:
    // 0x2f0de8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2f0de8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2f0dec:
    // 0x2f0dec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2f0decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f0df0:
    // 0x2f0df0: 0x40f809  jalr        $v0
label_2f0df4:
    if (ctx->pc == 0x2F0DF4u) {
        ctx->pc = 0x2F0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0DF0u;
        // 0x2f0df4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0DF8u;
        goto label_2f0df8;
    }
    ctx->pc = 0x2F0DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F0DF8u);
        ctx->pc = 0x2F0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0DF0u;
        // 0x2f0df4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0DF0u, 0x2F0DF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0DF8u;
label_2f0df8:
    // 0x2f0df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0dfc:
    // 0x2f0dfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f0dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f0e00:
    // 0x2f0e00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f0e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f0e04:
    // 0x2f0e04: 0xc0e6fec  jal         func_39BFB0
label_2f0e08:
    if (ctx->pc == 0x2F0E08u) {
        ctx->pc = 0x2F0E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E04u;
        // 0x2f0e08: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0E0Cu;
        goto label_2f0e0c;
    }
    ctx->pc = 0x2F0E04u;
    SET_GPR_U32(ctx, 31, 0x2F0E0Cu);
    ctx->pc = 0x2F0E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0E04u;
    // 0x2f0e08: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BFB0u, 0x2F0E04u, 0x2F0E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0E0Cu;
label_2f0e0c:
    // 0x2f0e0c: 0x1697001f  bne         $s4, $s7, . + 4 + (0x1F << 2)
label_2f0e10:
    if (ctx->pc == 0x2F0E10u) {
        ctx->pc = 0x2F0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E0Cu;
        // 0x2f0e10: 0x7bb00200  lq          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0E14u;
        goto label_2f0e14;
    }
    ctx->pc = 0x2F0E0Cu;
    {
        const bool branch_taken_0x2f0e0c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        ctx->pc = 0x2F0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E0Cu;
        // 0x2f0e10: 0x7bb00200  lq          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e0c) {
            ctx->pc = 0x2F0E8Cu;
            goto label_2f0e8c;
        }
    }
    ctx->pc = 0x2F0E14u;
label_2f0e14:
    // 0x2f0e14: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2f0e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f0e18:
    // 0x2f0e18: 0xa2750053  sb          $s5, 0x53($s3)
    ctx->pc = 0x2f0e18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 83), (uint8_t)GPR_U32(ctx, 21));
label_2f0e1c:
    // 0x2f0e1c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2f0e20:
    if (ctx->pc == 0x2F0E20u) {
        ctx->pc = 0x2F0E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E1Cu;
        // 0x2f0e20: 0xae630030  sw          $v1, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0E24u;
        goto label_2f0e24;
    }
    ctx->pc = 0x2F0E1Cu;
    {
        const bool branch_taken_0x2f0e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E1Cu;
        // 0x2f0e20: 0xae630030  sw          $v1, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e1c) {
            ctx->pc = 0x2F0E8Cu;
            goto label_2f0e8c;
        }
    }
    ctx->pc = 0x2F0E24u;
label_2f0e24:
    // 0x2f0e24: 0x9262004e  lbu         $v0, 0x4E($s3)
    ctx->pc = 0x2f0e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 78)));
label_2f0e28:
    // 0x2f0e28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f0e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f0e2c:
    // 0x2f0e2c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_2f0e30:
    if (ctx->pc == 0x2F0E30u) {
        ctx->pc = 0x2F0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E2Cu;
        // 0x2f0e30: 0x7bb00200  lq          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0E34u;
        goto label_2f0e34;
    }
    ctx->pc = 0x2F0E2Cu;
    {
        const bool branch_taken_0x2f0e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E2Cu;
        // 0x2f0e30: 0x7bb00200  lq          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e2c) {
            ctx->pc = 0x2F0E8Cu;
            goto label_2f0e8c;
        }
    }
    ctx->pc = 0x2F0E34u;
label_2f0e34:
    // 0x2f0e34: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2f0e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2f0e38:
    // 0x2f0e38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f0e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f0e3c:
    // 0x2f0e3c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f0e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f0e40:
    // 0x2f0e40: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2f0e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f0e44:
    // 0x2f0e44: 0xc0bc12e  jal         func_2F04B8
label_2f0e48:
    if (ctx->pc == 0x2F0E48u) {
        ctx->pc = 0x2F0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E44u;
        // 0x2f0e48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0E4Cu;
        goto label_2f0e4c;
    }
    ctx->pc = 0x2F0E44u;
    SET_GPR_U32(ctx, 31, 0x2F0E4Cu);
    ctx->pc = 0x2F0E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0E44u;
    // 0x2f0e48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F04B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F04B8u, 0x2F0E44u, 0x2F0E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0E4Cu;
label_2f0e4c:
    // 0x2f0e4c: 0x1455000f  bne         $v0, $s5, . + 4 + (0xF << 2)
label_2f0e50:
    if (ctx->pc == 0x2F0E50u) {
        ctx->pc = 0x2F0E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E4Cu;
        // 0x2f0e50: 0x7bb00200  lq          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0E54u;
        goto label_2f0e54;
    }
    ctx->pc = 0x2F0E4Cu;
    {
        const bool branch_taken_0x2f0e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2F0E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E4Cu;
        // 0x2f0e50: 0x7bb00200  lq          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e4c) {
            ctx->pc = 0x2F0E8Cu;
            goto label_2f0e8c;
        }
    }
    ctx->pc = 0x2F0E54u;
label_2f0e54:
    // 0x2f0e54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f0e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f0e58:
    // 0x2f0e58: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2f0e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2f0e5c:
    // 0x2f0e5c: 0xc0bc24c  jal         func_2F0930
label_2f0e60:
    if (ctx->pc == 0x2F0E60u) {
        ctx->pc = 0x2F0E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E5Cu;
        // 0x2f0e60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0E64u;
        goto label_2f0e64;
    }
    ctx->pc = 0x2F0E5Cu;
    SET_GPR_U32(ctx, 31, 0x2F0E64u);
    ctx->pc = 0x2F0E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0E5Cu;
    // 0x2f0e60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0930u, 0x2F0E5Cu, 0x2F0E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0E64u;
label_2f0e64:
    // 0x2f0e64: 0x10000009  b           . + 4 + (0x9 << 2)
label_2f0e68:
    if (ctx->pc == 0x2F0E68u) {
        ctx->pc = 0x2F0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E64u;
        // 0x2f0e68: 0x7bb00200  lq          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0E6Cu;
        goto label_2f0e6c;
    }
    ctx->pc = 0x2F0E64u;
    {
        const bool branch_taken_0x2f0e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E64u;
        // 0x2f0e68: 0x7bb00200  lq          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e64) {
            ctx->pc = 0x2F0E8Cu;
            goto label_2f0e8c;
        }
    }
    ctx->pc = 0x2F0E6Cu;
label_2f0e6c:
    // 0x2f0e6c: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_2f0e70:
    if (ctx->pc == 0x2F0E70u) {
        ctx->pc = 0x2F0E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E6Cu;
        // 0x2f0e70: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0E74u;
        goto label_2f0e74;
    }
    ctx->pc = 0x2F0E6Cu;
    {
        const bool branch_taken_0x2f0e6c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E6Cu;
        // 0x2f0e70: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e6c) {
            ctx->pc = 0x2F0E88u;
            goto label_2f0e88;
        }
    }
    ctx->pc = 0x2F0E74u;
label_2f0e74:
    // 0x2f0e74: 0x10000004  b           . + 4 + (0x4 << 2)
label_2f0e78:
    if (ctx->pc == 0x2F0E78u) {
        ctx->pc = 0x2F0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E74u;
        // 0x2f0e78: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0E7Cu;
        goto label_2f0e7c;
    }
    ctx->pc = 0x2F0E74u;
    {
        const bool branch_taken_0x2f0e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E74u;
        // 0x2f0e78: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e74) {
            ctx->pc = 0x2F0E88u;
            goto label_2f0e88;
        }
    }
    ctx->pc = 0x2F0E7Cu;
label_2f0e7c:
    // 0x2f0e7c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f0e80:
    // 0x2f0e80: 0xa2600053  sb          $zero, 0x53($s3)
    ctx->pc = 0x2f0e80u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 83), (uint8_t)GPR_U32(ctx, 0));
label_2f0e84:
    // 0x2f0e84: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x2f0e84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
label_2f0e88:
    // 0x2f0e88: 0x7bb00200  lq          $s0, 0x200($sp)
    ctx->pc = 0x2f0e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_2f0e8c:
    // 0x2f0e8c: 0x7bb101f0  lq          $s1, 0x1F0($sp)
    ctx->pc = 0x2f0e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_2f0e90:
    // 0x2f0e90: 0x7bb201e0  lq          $s2, 0x1E0($sp)
    ctx->pc = 0x2f0e90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_2f0e94:
    // 0x2f0e94: 0x7bb301d0  lq          $s3, 0x1D0($sp)
    ctx->pc = 0x2f0e94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_2f0e98:
    // 0x2f0e98: 0x7bb401c0  lq          $s4, 0x1C0($sp)
    ctx->pc = 0x2f0e98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_2f0e9c:
    // 0x2f0e9c: 0x7bb501b0  lq          $s5, 0x1B0($sp)
    ctx->pc = 0x2f0e9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_2f0ea0:
    // 0x2f0ea0: 0x7bb601a0  lq          $s6, 0x1A0($sp)
    ctx->pc = 0x2f0ea0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_2f0ea4:
    // 0x2f0ea4: 0x7bb70190  lq          $s7, 0x190($sp)
    ctx->pc = 0x2f0ea4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_2f0ea8:
    // 0x2f0ea8: 0x7bbe0180  lq          $fp, 0x180($sp)
    ctx->pc = 0x2f0ea8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_2f0eac:
    // 0x2f0eac: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x2f0eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_2f0eb0:
    // 0x2f0eb0: 0xc7b40210  lwc1        $f20, 0x210($sp)
    ctx->pc = 0x2f0eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f0eb4:
    // 0x2f0eb4: 0x3e00008  jr          $ra
label_2f0eb8:
    if (ctx->pc == 0x2F0EB8u) {
        ctx->pc = 0x2F0EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0EB4u;
        // 0x2f0eb8: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0EBCu;
        goto label_2f0ebc;
    }
    ctx->pc = 0x2F0EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0EB4u;
        // 0x2f0eb8: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0EBCu;
label_2f0ebc:
    // 0x2f0ebc: 0x0  nop
    ctx->pc = 0x2f0ebcu;
    // NOP
    ctx->pc = 0x2f0ec0u;
}
