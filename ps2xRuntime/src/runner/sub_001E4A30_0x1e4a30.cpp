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

// Function: sub_001E4A30
// Address: 0x1e4a30 - 0x1e4e28
void sub_001E4A30_0x1e4a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4A30_0x1e4a30");
#endif

    switch (ctx->pc) {
        case 0x1e4a30u: goto label_1e4a30;
        case 0x1e4a34u: goto label_1e4a34;
        case 0x1e4a38u: goto label_1e4a38;
        case 0x1e4a3cu: goto label_1e4a3c;
        case 0x1e4a40u: goto label_1e4a40;
        case 0x1e4a44u: goto label_1e4a44;
        case 0x1e4a48u: goto label_1e4a48;
        case 0x1e4a4cu: goto label_1e4a4c;
        case 0x1e4a50u: goto label_1e4a50;
        case 0x1e4a54u: goto label_1e4a54;
        case 0x1e4a58u: goto label_1e4a58;
        case 0x1e4a5cu: goto label_1e4a5c;
        case 0x1e4a60u: goto label_1e4a60;
        case 0x1e4a64u: goto label_1e4a64;
        case 0x1e4a68u: goto label_1e4a68;
        case 0x1e4a6cu: goto label_1e4a6c;
        case 0x1e4a70u: goto label_1e4a70;
        case 0x1e4a74u: goto label_1e4a74;
        case 0x1e4a78u: goto label_1e4a78;
        case 0x1e4a7cu: goto label_1e4a7c;
        case 0x1e4a80u: goto label_1e4a80;
        case 0x1e4a84u: goto label_1e4a84;
        case 0x1e4a88u: goto label_1e4a88;
        case 0x1e4a8cu: goto label_1e4a8c;
        case 0x1e4a90u: goto label_1e4a90;
        case 0x1e4a94u: goto label_1e4a94;
        case 0x1e4a98u: goto label_1e4a98;
        case 0x1e4a9cu: goto label_1e4a9c;
        case 0x1e4aa0u: goto label_1e4aa0;
        case 0x1e4aa4u: goto label_1e4aa4;
        case 0x1e4aa8u: goto label_1e4aa8;
        case 0x1e4aacu: goto label_1e4aac;
        case 0x1e4ab0u: goto label_1e4ab0;
        case 0x1e4ab4u: goto label_1e4ab4;
        case 0x1e4ab8u: goto label_1e4ab8;
        case 0x1e4abcu: goto label_1e4abc;
        case 0x1e4ac0u: goto label_1e4ac0;
        case 0x1e4ac4u: goto label_1e4ac4;
        case 0x1e4ac8u: goto label_1e4ac8;
        case 0x1e4accu: goto label_1e4acc;
        case 0x1e4ad0u: goto label_1e4ad0;
        case 0x1e4ad4u: goto label_1e4ad4;
        case 0x1e4ad8u: goto label_1e4ad8;
        case 0x1e4adcu: goto label_1e4adc;
        case 0x1e4ae0u: goto label_1e4ae0;
        case 0x1e4ae4u: goto label_1e4ae4;
        case 0x1e4ae8u: goto label_1e4ae8;
        case 0x1e4aecu: goto label_1e4aec;
        case 0x1e4af0u: goto label_1e4af0;
        case 0x1e4af4u: goto label_1e4af4;
        case 0x1e4af8u: goto label_1e4af8;
        case 0x1e4afcu: goto label_1e4afc;
        case 0x1e4b00u: goto label_1e4b00;
        case 0x1e4b04u: goto label_1e4b04;
        case 0x1e4b08u: goto label_1e4b08;
        case 0x1e4b0cu: goto label_1e4b0c;
        case 0x1e4b10u: goto label_1e4b10;
        case 0x1e4b14u: goto label_1e4b14;
        case 0x1e4b18u: goto label_1e4b18;
        case 0x1e4b1cu: goto label_1e4b1c;
        case 0x1e4b20u: goto label_1e4b20;
        case 0x1e4b24u: goto label_1e4b24;
        case 0x1e4b28u: goto label_1e4b28;
        case 0x1e4b2cu: goto label_1e4b2c;
        case 0x1e4b30u: goto label_1e4b30;
        case 0x1e4b34u: goto label_1e4b34;
        case 0x1e4b38u: goto label_1e4b38;
        case 0x1e4b3cu: goto label_1e4b3c;
        case 0x1e4b40u: goto label_1e4b40;
        case 0x1e4b44u: goto label_1e4b44;
        case 0x1e4b48u: goto label_1e4b48;
        case 0x1e4b4cu: goto label_1e4b4c;
        case 0x1e4b50u: goto label_1e4b50;
        case 0x1e4b54u: goto label_1e4b54;
        case 0x1e4b58u: goto label_1e4b58;
        case 0x1e4b5cu: goto label_1e4b5c;
        case 0x1e4b60u: goto label_1e4b60;
        case 0x1e4b64u: goto label_1e4b64;
        case 0x1e4b68u: goto label_1e4b68;
        case 0x1e4b6cu: goto label_1e4b6c;
        case 0x1e4b70u: goto label_1e4b70;
        case 0x1e4b74u: goto label_1e4b74;
        case 0x1e4b78u: goto label_1e4b78;
        case 0x1e4b7cu: goto label_1e4b7c;
        case 0x1e4b80u: goto label_1e4b80;
        case 0x1e4b84u: goto label_1e4b84;
        case 0x1e4b88u: goto label_1e4b88;
        case 0x1e4b8cu: goto label_1e4b8c;
        case 0x1e4b90u: goto label_1e4b90;
        case 0x1e4b94u: goto label_1e4b94;
        case 0x1e4b98u: goto label_1e4b98;
        case 0x1e4b9cu: goto label_1e4b9c;
        case 0x1e4ba0u: goto label_1e4ba0;
        case 0x1e4ba4u: goto label_1e4ba4;
        case 0x1e4ba8u: goto label_1e4ba8;
        case 0x1e4bacu: goto label_1e4bac;
        case 0x1e4bb0u: goto label_1e4bb0;
        case 0x1e4bb4u: goto label_1e4bb4;
        case 0x1e4bb8u: goto label_1e4bb8;
        case 0x1e4bbcu: goto label_1e4bbc;
        case 0x1e4bc0u: goto label_1e4bc0;
        case 0x1e4bc4u: goto label_1e4bc4;
        case 0x1e4bc8u: goto label_1e4bc8;
        case 0x1e4bccu: goto label_1e4bcc;
        case 0x1e4bd0u: goto label_1e4bd0;
        case 0x1e4bd4u: goto label_1e4bd4;
        case 0x1e4bd8u: goto label_1e4bd8;
        case 0x1e4bdcu: goto label_1e4bdc;
        case 0x1e4be0u: goto label_1e4be0;
        case 0x1e4be4u: goto label_1e4be4;
        case 0x1e4be8u: goto label_1e4be8;
        case 0x1e4becu: goto label_1e4bec;
        case 0x1e4bf0u: goto label_1e4bf0;
        case 0x1e4bf4u: goto label_1e4bf4;
        case 0x1e4bf8u: goto label_1e4bf8;
        case 0x1e4bfcu: goto label_1e4bfc;
        case 0x1e4c00u: goto label_1e4c00;
        case 0x1e4c04u: goto label_1e4c04;
        case 0x1e4c08u: goto label_1e4c08;
        case 0x1e4c0cu: goto label_1e4c0c;
        case 0x1e4c10u: goto label_1e4c10;
        case 0x1e4c14u: goto label_1e4c14;
        case 0x1e4c18u: goto label_1e4c18;
        case 0x1e4c1cu: goto label_1e4c1c;
        case 0x1e4c20u: goto label_1e4c20;
        case 0x1e4c24u: goto label_1e4c24;
        case 0x1e4c28u: goto label_1e4c28;
        case 0x1e4c2cu: goto label_1e4c2c;
        case 0x1e4c30u: goto label_1e4c30;
        case 0x1e4c34u: goto label_1e4c34;
        case 0x1e4c38u: goto label_1e4c38;
        case 0x1e4c3cu: goto label_1e4c3c;
        case 0x1e4c40u: goto label_1e4c40;
        case 0x1e4c44u: goto label_1e4c44;
        case 0x1e4c48u: goto label_1e4c48;
        case 0x1e4c4cu: goto label_1e4c4c;
        case 0x1e4c50u: goto label_1e4c50;
        case 0x1e4c54u: goto label_1e4c54;
        case 0x1e4c58u: goto label_1e4c58;
        case 0x1e4c5cu: goto label_1e4c5c;
        case 0x1e4c60u: goto label_1e4c60;
        case 0x1e4c64u: goto label_1e4c64;
        case 0x1e4c68u: goto label_1e4c68;
        case 0x1e4c6cu: goto label_1e4c6c;
        case 0x1e4c70u: goto label_1e4c70;
        case 0x1e4c74u: goto label_1e4c74;
        case 0x1e4c78u: goto label_1e4c78;
        case 0x1e4c7cu: goto label_1e4c7c;
        case 0x1e4c80u: goto label_1e4c80;
        case 0x1e4c84u: goto label_1e4c84;
        case 0x1e4c88u: goto label_1e4c88;
        case 0x1e4c8cu: goto label_1e4c8c;
        case 0x1e4c90u: goto label_1e4c90;
        case 0x1e4c94u: goto label_1e4c94;
        case 0x1e4c98u: goto label_1e4c98;
        case 0x1e4c9cu: goto label_1e4c9c;
        case 0x1e4ca0u: goto label_1e4ca0;
        case 0x1e4ca4u: goto label_1e4ca4;
        case 0x1e4ca8u: goto label_1e4ca8;
        case 0x1e4cacu: goto label_1e4cac;
        case 0x1e4cb0u: goto label_1e4cb0;
        case 0x1e4cb4u: goto label_1e4cb4;
        case 0x1e4cb8u: goto label_1e4cb8;
        case 0x1e4cbcu: goto label_1e4cbc;
        case 0x1e4cc0u: goto label_1e4cc0;
        case 0x1e4cc4u: goto label_1e4cc4;
        case 0x1e4cc8u: goto label_1e4cc8;
        case 0x1e4cccu: goto label_1e4ccc;
        case 0x1e4cd0u: goto label_1e4cd0;
        case 0x1e4cd4u: goto label_1e4cd4;
        case 0x1e4cd8u: goto label_1e4cd8;
        case 0x1e4cdcu: goto label_1e4cdc;
        case 0x1e4ce0u: goto label_1e4ce0;
        case 0x1e4ce4u: goto label_1e4ce4;
        case 0x1e4ce8u: goto label_1e4ce8;
        case 0x1e4cecu: goto label_1e4cec;
        case 0x1e4cf0u: goto label_1e4cf0;
        case 0x1e4cf4u: goto label_1e4cf4;
        case 0x1e4cf8u: goto label_1e4cf8;
        case 0x1e4cfcu: goto label_1e4cfc;
        case 0x1e4d00u: goto label_1e4d00;
        case 0x1e4d04u: goto label_1e4d04;
        case 0x1e4d08u: goto label_1e4d08;
        case 0x1e4d0cu: goto label_1e4d0c;
        case 0x1e4d10u: goto label_1e4d10;
        case 0x1e4d14u: goto label_1e4d14;
        case 0x1e4d18u: goto label_1e4d18;
        case 0x1e4d1cu: goto label_1e4d1c;
        case 0x1e4d20u: goto label_1e4d20;
        case 0x1e4d24u: goto label_1e4d24;
        case 0x1e4d28u: goto label_1e4d28;
        case 0x1e4d2cu: goto label_1e4d2c;
        case 0x1e4d30u: goto label_1e4d30;
        case 0x1e4d34u: goto label_1e4d34;
        case 0x1e4d38u: goto label_1e4d38;
        case 0x1e4d3cu: goto label_1e4d3c;
        case 0x1e4d40u: goto label_1e4d40;
        case 0x1e4d44u: goto label_1e4d44;
        case 0x1e4d48u: goto label_1e4d48;
        case 0x1e4d4cu: goto label_1e4d4c;
        case 0x1e4d50u: goto label_1e4d50;
        case 0x1e4d54u: goto label_1e4d54;
        case 0x1e4d58u: goto label_1e4d58;
        case 0x1e4d5cu: goto label_1e4d5c;
        case 0x1e4d60u: goto label_1e4d60;
        case 0x1e4d64u: goto label_1e4d64;
        case 0x1e4d68u: goto label_1e4d68;
        case 0x1e4d6cu: goto label_1e4d6c;
        case 0x1e4d70u: goto label_1e4d70;
        case 0x1e4d74u: goto label_1e4d74;
        case 0x1e4d78u: goto label_1e4d78;
        case 0x1e4d7cu: goto label_1e4d7c;
        case 0x1e4d80u: goto label_1e4d80;
        case 0x1e4d84u: goto label_1e4d84;
        case 0x1e4d88u: goto label_1e4d88;
        case 0x1e4d8cu: goto label_1e4d8c;
        case 0x1e4d90u: goto label_1e4d90;
        case 0x1e4d94u: goto label_1e4d94;
        case 0x1e4d98u: goto label_1e4d98;
        case 0x1e4d9cu: goto label_1e4d9c;
        case 0x1e4da0u: goto label_1e4da0;
        case 0x1e4da4u: goto label_1e4da4;
        case 0x1e4da8u: goto label_1e4da8;
        case 0x1e4dacu: goto label_1e4dac;
        case 0x1e4db0u: goto label_1e4db0;
        case 0x1e4db4u: goto label_1e4db4;
        case 0x1e4db8u: goto label_1e4db8;
        case 0x1e4dbcu: goto label_1e4dbc;
        case 0x1e4dc0u: goto label_1e4dc0;
        case 0x1e4dc4u: goto label_1e4dc4;
        case 0x1e4dc8u: goto label_1e4dc8;
        case 0x1e4dccu: goto label_1e4dcc;
        case 0x1e4dd0u: goto label_1e4dd0;
        case 0x1e4dd4u: goto label_1e4dd4;
        case 0x1e4dd8u: goto label_1e4dd8;
        case 0x1e4ddcu: goto label_1e4ddc;
        case 0x1e4de0u: goto label_1e4de0;
        case 0x1e4de4u: goto label_1e4de4;
        case 0x1e4de8u: goto label_1e4de8;
        case 0x1e4decu: goto label_1e4dec;
        case 0x1e4df0u: goto label_1e4df0;
        case 0x1e4df4u: goto label_1e4df4;
        case 0x1e4df8u: goto label_1e4df8;
        case 0x1e4dfcu: goto label_1e4dfc;
        case 0x1e4e00u: goto label_1e4e00;
        case 0x1e4e04u: goto label_1e4e04;
        case 0x1e4e08u: goto label_1e4e08;
        case 0x1e4e0cu: goto label_1e4e0c;
        case 0x1e4e10u: goto label_1e4e10;
        case 0x1e4e14u: goto label_1e4e14;
        case 0x1e4e18u: goto label_1e4e18;
        case 0x1e4e1cu: goto label_1e4e1c;
        case 0x1e4e20u: goto label_1e4e20;
        case 0x1e4e24u: goto label_1e4e24;
        default: break;
    }

    ctx->pc = 0x1e4a30u;

label_1e4a30:
    // 0x1e4a30: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1e4a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1e4a34:
    // 0x1e4a34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e4a38:
    // 0x1e4a38: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1e4a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1e4a3c:
    // 0x1e4a3c: 0x240d000a  addiu       $t5, $zero, 0xA
    ctx->pc = 0x1e4a3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e4a40:
    // 0x1e4a40: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1e4a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1e4a44:
    // 0x1e4a44: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1e4a44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1e4a48:
    // 0x1e4a48: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1e4a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1e4a4c:
    // 0x1e4a4c: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1e4a4cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1e4a50:
    // 0x1e4a50: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1e4a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1e4a54:
    // 0x1e4a54: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1e4a54u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1e4a58:
    // 0x1e4a58: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1e4a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1e4a5c:
    // 0x1e4a5c: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1e4a5cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1e4a60:
    // 0x1e4a60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e4a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e4a64:
    // 0x1e4a64: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1e4a64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1e4a68:
    // 0x1e4a68: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1e4a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_1e4a6c:
    // 0x1e4a6c: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1e4a6cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1e4a70:
    // 0x1e4a70: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1e4a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1e4a74:
    // 0x1e4a74: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1e4a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1e4a78:
    // 0x1e4a78: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1e4a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1e4a7c:
    // 0x1e4a7c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1e4a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1e4a80:
    // 0x1e4a80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e4a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e4a84:
    // 0x1e4a84: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1e4a84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1e4a88:
    // 0x1e4a88: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1e4a88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1e4a8c:
    // 0x1e4a8c: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1e4a8cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1e4a90:
    // 0x1e4a90: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1e4a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1e4a94:
    // 0x1e4a94: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1e4a94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1e4a98:
    // 0x1e4a98: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1e4a98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e4a9c:
    // 0x1e4a9c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e4a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e4aa0:
    // 0x1e4aa0: 0x3c013e85  lui         $at, 0x3E85
    ctx->pc = 0x1e4aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16005 << 16));
label_1e4aa4:
    // 0x1e4aa4: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1e4aa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1e4aa8:
    // 0x1e4aa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e4aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4aac:
    // 0x1e4aac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e4aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e4ab0:
    // 0x1e4ab0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1e4ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1e4ab4:
    // 0x1e4ab4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e4ab4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e4ab8:
    // 0x1e4ab8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e4ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1e4abc:
    // 0x1e4abc: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1e4abcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1e4ac0:
    // 0x1e4ac0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e4ac4:
    // 0x1e4ac4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e4ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e4ac8:
    // 0x1e4ac8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1e4ac8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1e4acc:
    // 0x1e4acc: 0x3c013e94  lui         $at, 0x3E94
    ctx->pc = 0x1e4accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16020 << 16));
label_1e4ad0:
    // 0x1e4ad0: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1e4ad0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_1e4ad4:
    // 0x1e4ad4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1e4ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1e4ad8:
    // 0x1e4ad8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1e4ad8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1e4adc:
    // 0x1e4adc: 0x3c013ed1  lui         $at, 0x3ED1
    ctx->pc = 0x1e4adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16081 << 16));
label_1e4ae0:
    // 0x1e4ae0: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1e4ae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1e4ae4:
    // 0x1e4ae4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e4ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e4ae8:
    // 0x1e4ae8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1e4ae8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4aec:
    // 0x1e4aec: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1e4aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_1e4af0:
    // 0x1e4af0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1e4af0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1e4af4:
    // 0x1e4af4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1e4af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1e4af8:
    // 0x1e4af8: 0x1e0b82d  daddu       $s7, $t7, $zero
    ctx->pc = 0x1e4af8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_1e4afc:
    // 0x1e4afc: 0x3c013f07  lui         $at, 0x3F07
    ctx->pc = 0x1e4afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16135 << 16));
label_1e4b00:
    // 0x1e4b00: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1e4b00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_1e4b04:
    // 0x1e4b04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e4b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4b08:
    // 0x1e4b08: 0x1c0f02d  daddu       $fp, $t6, $zero
    ctx->pc = 0x1e4b08u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b0c:
    // 0x1e4b0c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e4b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e4b10:
    // 0x1e4b10: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1e4b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1e4b14:
    // 0x1e4b14: 0x32040002  andi        $a0, $s0, 0x2
    ctx->pc = 0x1e4b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_1e4b18:
    // 0x1e4b18: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1e4b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_1e4b1c:
    // 0x1e4b1c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1e4b1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1e4b20:
    // 0x1e4b20: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1e4b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1e4b24:
    // 0x1e4b24: 0xe4c2eef0  swc1        $f2, -0x1110($a2)
    ctx->pc = 0x1e4b24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294962928), bits); }
label_1e4b28:
    // 0x1e4b28: 0xe4a1eef8  swc1        $f1, -0x1108($a1)
    ctx->pc = 0x1e4b28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962936), bits); }
label_1e4b2c:
    // 0x1e4b2c: 0xe4e4eefc  swc1        $f4, -0x1104($a3)
    ctx->pc = 0x1e4b2cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294962940), bits); }
label_1e4b30:
    // 0x1e4b30: 0xe463ef08  swc1        $f3, -0x10F8($v1)
    ctx->pc = 0x1e4b30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962952), bits); }
label_1e4b34:
    // 0x1e4b34: 0xac4def10  sw          $t5, -0x10F0($v0)
    ctx->pc = 0x1e4b34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962960), GPR_U32(ctx, 13));
label_1e4b38:
    // 0x1e4b38: 0xe584eeec  swc1        $f4, -0x1114($t4)
    ctx->pc = 0x1e4b38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294962924), bits); }
label_1e4b3c:
    // 0x1e4b3c: 0xe687eef4  swc1        $f7, -0x110C($s4)
    ctx->pc = 0x1e4b3cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294962932), bits); }
label_1e4b40:
    // 0x1e4b40: 0xad2def00  sw          $t5, -0x1100($t1)
    ctx->pc = 0x1e4b40u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294962944), GPR_U32(ctx, 13));
label_1e4b44:
    // 0x1e4b44: 0xe543ef04  swc1        $f3, -0x10FC($t2)
    ctx->pc = 0x1e4b44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294962948), bits); }
label_1e4b48:
    // 0x1e4b48: 0xe665ef0c  swc1        $f5, -0x10F4($s3)
    ctx->pc = 0x1e4b48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294962956), bits); }
label_1e4b4c:
    // 0x1e4b4c: 0xe500f0f0  swc1        $f0, -0xF10($t0)
    ctx->pc = 0x1e4b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294963440), bits); }
label_1e4b50:
    // 0x1e4b50: 0xe566f0f8  swc1        $f6, -0xF08($t3)
    ctx->pc = 0x1e4b50u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294963448), bits); }
label_1e4b54:
    // 0x1e4b54: 0xe620eee4  swc1        $f0, -0x111C($s1)
    ctx->pc = 0x1e4b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294962916), bits); }
label_1e4b58:
    // 0x1e4b58: 0xe5e0f0ec  swc1        $f0, -0xF14($t7)
    ctx->pc = 0x1e4b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294963436), bits); }
label_1e4b5c:
    // 0x1e4b5c: 0xe5c8f0f4  swc1        $f8, -0xF0C($t6)
    ctx->pc = 0x1e4b5cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294963444), bits); }
label_1e4b60:
    // 0x1e4b60: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_1e4b64:
    if (ctx->pc == 0x1E4B64u) {
        ctx->pc = 0x1E4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B60u;
        // 0x1e4b64: 0xe648eee8  swc1        $f8, -0x1118($s2) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294962920), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B68u;
        goto label_1e4b68;
    }
    ctx->pc = 0x1E4B60u;
    {
        const bool branch_taken_0x1e4b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B60u;
        // 0x1e4b64: 0xe648eee8  swc1        $f8, -0x1118($s2) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294962920), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b60) {
            ctx->pc = 0x1E4BE8u;
            goto label_1e4be8;
        }
    }
    ctx->pc = 0x1E4B68u;
label_1e4b68:
    // 0x1e4b68: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x1e4b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_1e4b6c:
    // 0x1e4b6c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1e4b70:
    if (ctx->pc == 0x1E4B70u) {
        ctx->pc = 0x1E4B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B6Cu;
        // 0x1e4b70: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B74u;
        goto label_1e4b74;
    }
    ctx->pc = 0x1E4B6Cu;
    {
        const bool branch_taken_0x1e4b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4b6c) {
            ctx->pc = 0x1E4B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4B6Cu;
            // 0x1e4b70: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4B90u;
            goto label_1e4b90;
        }
    }
    ctx->pc = 0x1E4B74u;
label_1e4b74:
    // 0x1e4b74: 0x3c013ed7  lui         $at, 0x3ED7
    ctx->pc = 0x1e4b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16087 << 16));
label_1e4b78:
    // 0x1e4b78: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1e4b78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1e4b7c:
    // 0x1e4b7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e4b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4b80:
    // 0x1e4b80: 0x0  nop
    ctx->pc = 0x1e4b80u;
    // NOP
label_1e4b84:
    // 0x1e4b84: 0xe620eee4  swc1        $f0, -0x111C($s1)
    ctx->pc = 0x1e4b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294962916), bits); }
label_1e4b88:
    // 0x1e4b88: 0x10000035  b           . + 4 + (0x35 << 2)
label_1e4b8c:
    if (ctx->pc == 0x1E4B8Cu) {
        ctx->pc = 0x1E4B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B88u;
        // 0x1e4b8c: 0xe6e0f0ec  swc1        $f0, -0xF14($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294963436), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B90u;
        goto label_1e4b90;
    }
    ctx->pc = 0x1E4B88u;
    {
        const bool branch_taken_0x1e4b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B88u;
        // 0x1e4b8c: 0xe6e0f0ec  swc1        $f0, -0xF14($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294963436), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b88) {
            ctx->pc = 0x1E4C60u;
            goto label_1e4c60;
        }
    }
    ctx->pc = 0x1E4B90u;
label_1e4b90:
    // 0x1e4b90: 0x3c013ea3  lui         $at, 0x3EA3
    ctx->pc = 0x1e4b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16035 << 16));
label_1e4b94:
    // 0x1e4b94: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e4b94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e4b98:
    // 0x1e4b98: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e4b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e4b9c:
    // 0x1e4b9c: 0x3c013f0a  lui         $at, 0x3F0A
    ctx->pc = 0x1e4b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16138 << 16));
label_1e4ba0:
    // 0x1e4ba0: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1e4ba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_1e4ba4:
    // 0x1e4ba4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e4ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e4ba8:
    // 0x1e4ba8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e4bac:
    // 0x1e4bac: 0x3c013eae  lui         $at, 0x3EAE
    ctx->pc = 0x1e4bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16046 << 16));
label_1e4bb0:
    // 0x1e4bb0: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1e4bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1e4bb4:
    // 0x1e4bb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e4bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4bb8:
    // 0x1e4bb8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e4bbc:
    // 0x1e4bbc: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1e4bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1e4bc0:
    // 0x1e4bc0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e4bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1e4bc4:
    // 0x1e4bc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e4bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4bc8:
    // 0x1e4bc8: 0xe628eee4  swc1        $f8, -0x111C($s1)
    ctx->pc = 0x1e4bc8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294962916), bits); }
label_1e4bcc:
    // 0x1e4bcc: 0xe643eee8  swc1        $f3, -0x1118($s2)
    ctx->pc = 0x1e4bccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294962920), bits); }
label_1e4bd0:
    // 0x1e4bd0: 0xe482f0e0  swc1        $f2, -0xF20($a0)
    ctx->pc = 0x1e4bd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294963424), bits); }
label_1e4bd4:
    // 0x1e4bd4: 0xe461f0e4  swc1        $f1, -0xF1C($v1)
    ctx->pc = 0x1e4bd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294963428), bits); }
label_1e4bd8:
    // 0x1e4bd8: 0xe440f0e8  swc1        $f0, -0xF18($v0)
    ctx->pc = 0x1e4bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294963432), bits); }
label_1e4bdc:
    // 0x1e4bdc: 0xe6e8f0ec  swc1        $f8, -0xF14($s7)
    ctx->pc = 0x1e4bdcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294963436), bits); }
label_1e4be0:
    // 0x1e4be0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1e4be4:
    if (ctx->pc == 0x1E4BE4u) {
        ctx->pc = 0x1E4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BE0u;
        // 0x1e4be4: 0xe7c3f0f4  swc1        $f3, -0xF0C($fp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294963444), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4BE8u;
        goto label_1e4be8;
    }
    ctx->pc = 0x1E4BE0u;
    {
        const bool branch_taken_0x1e4be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BE0u;
        // 0x1e4be4: 0xe7c3f0f4  swc1        $f3, -0xF0C($fp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294963444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4be0) {
            ctx->pc = 0x1E4C60u;
            goto label_1e4c60;
        }
    }
    ctx->pc = 0x1E4BE8u;
label_1e4be8:
    // 0x1e4be8: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x1e4be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_1e4bec:
    // 0x1e4bec: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1e4bf0:
    if (ctx->pc == 0x1E4BF0u) {
        ctx->pc = 0x1E4BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BECu;
        // 0x1e4bf0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4BF4u;
        goto label_1e4bf4;
    }
    ctx->pc = 0x1E4BECu;
    {
        const bool branch_taken_0x1e4bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BECu;
        // 0x1e4bf0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4bec) {
            ctx->pc = 0x1E4C64u;
            goto label_1e4c64;
        }
    }
    ctx->pc = 0x1E4BF4u;
label_1e4bf4:
    // 0x1e4bf4: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x1e4bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_1e4bf8:
    // 0x1e4bf8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1e4bfc:
    if (ctx->pc == 0x1E4BFCu) {
        ctx->pc = 0x1E4BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BF8u;
        // 0x1e4bfc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4C00u;
        goto label_1e4c00;
    }
    ctx->pc = 0x1E4BF8u;
    {
        const bool branch_taken_0x1e4bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BF8u;
        // 0x1e4bfc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4bf8) {
            ctx->pc = 0x1E4C4Cu;
            goto label_1e4c4c;
        }
    }
    ctx->pc = 0x1E4C00u;
label_1e4c00:
    // 0x1e4c00: 0x3c013ec2  lui         $at, 0x3EC2
    ctx->pc = 0x1e4c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16066 << 16));
label_1e4c04:
    // 0x1e4c04: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1e4c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1e4c08:
    // 0x1e4c08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e4c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e4c0c:
    // 0x1e4c0c: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x1e4c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
label_1e4c10:
    // 0x1e4c10: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1e4c10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1e4c14:
    // 0x1e4c14: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e4c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e4c18:
    // 0x1e4c18: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1e4c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1e4c1c:
    // 0x1e4c1c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1e4c1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1e4c20:
    // 0x1e4c20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e4c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4c24:
    // 0x1e4c24: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1e4c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1e4c28:
    // 0x1e4c28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e4c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1e4c2c:
    // 0x1e4c2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e4c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4c30:
    // 0x1e4c30: 0xe680eef4  swc1        $f0, -0x110C($s4)
    ctx->pc = 0x1e4c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294962932), bits); }
label_1e4c34:
    // 0x1e4c34: 0xe661ef0c  swc1        $f1, -0x10F4($s3)
    ctx->pc = 0x1e4c34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294962956), bits); }
label_1e4c38:
    // 0x1e4c38: 0xe622eee4  swc1        $f2, -0x111C($s1)
    ctx->pc = 0x1e4c38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294962916), bits); }
label_1e4c3c:
    // 0x1e4c3c: 0xe643eee8  swc1        $f3, -0x1118($s2)
    ctx->pc = 0x1e4c3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294962920), bits); }
label_1e4c40:
    // 0x1e4c40: 0xe6e2f0ec  swc1        $f2, -0xF14($s7)
    ctx->pc = 0x1e4c40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294963436), bits); }
label_1e4c44:
    // 0x1e4c44: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e4c48:
    if (ctx->pc == 0x1E4C48u) {
        ctx->pc = 0x1E4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C44u;
        // 0x1e4c48: 0xe7c3f0f4  swc1        $f3, -0xF0C($fp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294963444), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4C4Cu;
        goto label_1e4c4c;
    }
    ctx->pc = 0x1E4C44u;
    {
        const bool branch_taken_0x1e4c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C44u;
        // 0x1e4c48: 0xe7c3f0f4  swc1        $f3, -0xF0C($fp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294963444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c44) {
            ctx->pc = 0x1E4C60u;
            goto label_1e4c60;
        }
    }
    ctx->pc = 0x1E4C4Cu;
label_1e4c4c:
    // 0x1e4c4c: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x1e4c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
label_1e4c50:
    // 0x1e4c50: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1e4c50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1e4c54:
    // 0x1e4c54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e4c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4c58:
    // 0x1e4c58: 0x0  nop
    ctx->pc = 0x1e4c58u;
    // NOP
label_1e4c5c:
    // 0x1e4c5c: 0xe440f0e0  swc1        $f0, -0xF20($v0)
    ctx->pc = 0x1e4c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294963424), bits); }
label_1e4c60:
    // 0x1e4c60: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e4c64:
    // 0x1e4c64: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e4c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1e4c68:
    // 0x1e4c68: 0x8c43eddc  lw          $v1, -0x1224($v0)
    ctx->pc = 0x1e4c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962652)));
label_1e4c6c:
    // 0x1e4c6c: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1e4c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_1e4c70:
    // 0x1e4c70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e4c74:
    // 0x1e4c74: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e4c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e4c78:
    // 0x1e4c78: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x1e4c78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1e4c7c:
    // 0x1e4c7c: 0x8c651bc0  lw          $a1, 0x1BC0($v1)
    ctx->pc = 0x1e4c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7104)));
label_1e4c80:
    // 0x1e4c80: 0x26d307a0  addiu       $s3, $s6, 0x7A0
    ctx->pc = 0x1e4c80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1952));
label_1e4c84:
    // 0x1e4c84: 0xc06ba26  jal         func_1AE898
label_1e4c88:
    if (ctx->pc == 0x1E4C88u) {
        ctx->pc = 0x1E4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C84u;
        // 0x1e4c88: 0x26d50870  addiu       $s5, $s6, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 2160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4C8Cu;
        goto label_1e4c8c;
    }
    ctx->pc = 0x1E4C84u;
    SET_GPR_U32(ctx, 31, 0x1E4C8Cu);
    ctx->pc = 0x1E4C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4C84u;
    // 0x1e4c88: 0x26d50870  addiu       $s5, $s6, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1E4C84u, 0x1E4C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C8Cu;
label_1e4c8c:
    // 0x1e4c8c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1e4c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e4c90:
    // 0x1e4c90: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1e4c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_1e4c94:
    // 0x1e4c94: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1e4c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1e4c98:
    // 0x1e4c98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e4c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e4c9c:
    // 0x1e4c9c: 0xaec20040  sw          $v0, 0x40($s6)
    ctx->pc = 0x1e4c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 64), GPR_U32(ctx, 2));
label_1e4ca0:
    // 0x1e4ca0: 0xc05e602  jal         func_179808
label_1e4ca4:
    if (ctx->pc == 0x1E4CA4u) {
        ctx->pc = 0x1E4CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CA0u;
        // 0x1e4ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CA8u;
        goto label_1e4ca8;
    }
    ctx->pc = 0x1E4CA0u;
    SET_GPR_U32(ctx, 31, 0x1E4CA8u);
    ctx->pc = 0x1E4CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CA0u;
    // 0x1e4ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1E4CA0u, 0x1E4CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CA8u;
label_1e4ca8:
    // 0x1e4ca8: 0xc6e0f0ec  lwc1        $f0, -0xF14($s7)
    ctx->pc = 0x1e4ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294963436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4cac:
    // 0x1e4cac: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1e4cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e4cb0:
    // 0x1e4cb0: 0xc7c1f0f4  lwc1        $f1, -0xF0C($fp)
    ctx->pc = 0x1e4cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294963444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4cb4:
    // 0x1e4cb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4cb8:
    // 0x1e4cb8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1e4cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1e4cbc:
    // 0x1e4cbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e4cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4cc0:
    // 0x1e4cc0: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1e4cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1e4cc4:
    // 0x1e4cc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e4cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4cc8:
    // 0x1e4cc8: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1e4cc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1e4ccc:
    // 0x1e4ccc: 0xc048b52  jal         func_122D48
label_1e4cd0:
    if (ctx->pc == 0x1E4CD0u) {
        ctx->pc = 0x1E4CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CCCu;
        // 0x1e4cd0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CD4u;
        goto label_1e4cd4;
    }
    ctx->pc = 0x1E4CCCu;
    SET_GPR_U32(ctx, 31, 0x1E4CD4u);
    ctx->pc = 0x1E4CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CCCu;
    // 0x1e4cd0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1E4CCCu, 0x1E4CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CD4u;
label_1e4cd4:
    // 0x1e4cd4: 0x8ec307a0  lw          $v1, 0x7A0($s6)
    ctx->pc = 0x1e4cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1952)));
label_1e4cd8:
    // 0x1e4cd8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e4cdc:
    // 0x1e4cdc: 0x8c52d310  lw          $s2, -0x2CF0($v0)
    ctx->pc = 0x1e4cdcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1e4ce0:
    // 0x1e4ce0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e4ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4ce4:
    // 0x1e4ce4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1e4ce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1e4ce8:
    // 0x1e4ce8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e4ce8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4cec:
    // 0x1e4cec: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1e4cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1e4cf0:
    // 0x1e4cf0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e4cf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e4cf4:
    // 0x1e4cf4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e4cf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4cf8:
    // 0x1e4cf8: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1e4cf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e4cfc:
    // 0x1e4cfc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1e4cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1e4d00:
    // 0x1e4d00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e4d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d04:
    // 0x1e4d04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d08:
    // 0x1e4d08: 0x40f809  jalr        $v0
label_1e4d0c:
    if (ctx->pc == 0x1E4D0Cu) {
        ctx->pc = 0x1E4D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D08u;
        // 0x1e4d0c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D10u;
        goto label_1e4d10;
    }
    ctx->pc = 0x1E4D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E4D10u);
        ctx->pc = 0x1E4D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D08u;
        // 0x1e4d0c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4D08u, 0x1E4D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4D10u;
label_1e4d10:
    // 0x1e4d10: 0xc067b9c  jal         func_19EE70
label_1e4d14:
    if (ctx->pc == 0x1E4D14u) {
        ctx->pc = 0x1E4D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D10u;
        // 0x1e4d14: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D18u;
        goto label_1e4d18;
    }
    ctx->pc = 0x1E4D10u;
    SET_GPR_U32(ctx, 31, 0x1E4D18u);
    ctx->pc = 0x1E4D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D10u;
    // 0x1e4d14: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E4D10u, 0x1E4D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D18u;
label_1e4d18:
    // 0x1e4d18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e4d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d1c:
    // 0x1e4d1c: 0xc073478  jal         func_1CD1E0
label_1e4d20:
    if (ctx->pc == 0x1E4D20u) {
        ctx->pc = 0x1E4D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D1Cu;
        // 0x1e4d20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D24u;
        goto label_1e4d24;
    }
    ctx->pc = 0x1E4D1Cu;
    SET_GPR_U32(ctx, 31, 0x1E4D24u);
    ctx->pc = 0x1E4D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D1Cu;
    // 0x1e4d20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1E4D1Cu, 0x1E4D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D24u;
label_1e4d24:
    // 0x1e4d24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e4d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e4d28:
    // 0x1e4d28: 0xc7c0f0f4  lwc1        $f0, -0xF0C($fp)
    ctx->pc = 0x1e4d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294963444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4d2c:
    // 0x1e4d2c: 0xc442f0f8  lwc1        $f2, -0xF08($v0)
    ctx->pc = 0x1e4d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e4d30:
    // 0x1e4d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d34:
    // 0x1e4d34: 0xc6e1f0ec  lwc1        $f1, -0xF14($s7)
    ctx->pc = 0x1e4d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294963436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4d38:
    // 0x1e4d38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e4d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4d3c:
    // 0x1e4d3c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e4d3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1e4d40:
    // 0x1e4d40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e4d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4d44:
    // 0x1e4d44: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1e4d44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1e4d48:
    // 0x1e4d48: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1e4d48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1e4d4c:
    // 0x1e4d4c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1e4d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1e4d50:
    // 0x1e4d50: 0xc048b52  jal         func_122D48
label_1e4d54:
    if (ctx->pc == 0x1E4D54u) {
        ctx->pc = 0x1E4D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D50u;
        // 0x1e4d54: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D58u;
        goto label_1e4d58;
    }
    ctx->pc = 0x1E4D50u;
    SET_GPR_U32(ctx, 31, 0x1E4D58u);
    ctx->pc = 0x1E4D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D50u;
    // 0x1e4d54: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1E4D50u, 0x1E4D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D58u;
label_1e4d58:
    // 0x1e4d58: 0x8ec30870  lw          $v1, 0x870($s6)
    ctx->pc = 0x1e4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2160)));
label_1e4d5c:
    // 0x1e4d5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e4d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d60:
    // 0x1e4d60: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e4d60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d64:
    // 0x1e4d64: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e4d64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4d68:
    // 0x1e4d68: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1e4d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1e4d6c:
    // 0x1e4d6c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e4d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4d70:
    // 0x1e4d70: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1e4d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1e4d74:
    // 0x1e4d74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e4d74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d78:
    // 0x1e4d78: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1e4d78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e4d7c:
    // 0x1e4d7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d80:
    // 0x1e4d80: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1e4d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1e4d84:
    // 0x1e4d84: 0x40f809  jalr        $v0
label_1e4d88:
    if (ctx->pc == 0x1E4D88u) {
        ctx->pc = 0x1E4D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D84u;
        // 0x1e4d88: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D8Cu;
        goto label_1e4d8c;
    }
    ctx->pc = 0x1E4D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E4D8Cu);
        ctx->pc = 0x1E4D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D84u;
        // 0x1e4d88: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4D84u, 0x1E4D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4D8Cu;
label_1e4d8c:
    // 0x1e4d8c: 0xc067b9c  jal         func_19EE70
label_1e4d90:
    if (ctx->pc == 0x1E4D90u) {
        ctx->pc = 0x1E4D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D8Cu;
        // 0x1e4d90: 0x24040131  addiu       $a0, $zero, 0x131 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D94u;
        goto label_1e4d94;
    }
    ctx->pc = 0x1E4D8Cu;
    SET_GPR_U32(ctx, 31, 0x1E4D94u);
    ctx->pc = 0x1E4D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D8Cu;
    // 0x1e4d90: 0x24040131  addiu       $a0, $zero, 0x131 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E4D8Cu, 0x1E4D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D94u;
label_1e4d94:
    // 0x1e4d94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e4d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d98:
    // 0x1e4d98: 0xc073478  jal         func_1CD1E0
label_1e4d9c:
    if (ctx->pc == 0x1E4D9Cu) {
        ctx->pc = 0x1E4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D98u;
        // 0x1e4d9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DA0u;
        goto label_1e4da0;
    }
    ctx->pc = 0x1E4D98u;
    SET_GPR_U32(ctx, 31, 0x1E4DA0u);
    ctx->pc = 0x1E4D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D98u;
    // 0x1e4d9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1E4D98u, 0x1E4DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DA0u;
label_1e4da0:
    // 0x1e4da0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x1e4da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_1e4da4:
    // 0x1e4da4: 0x24655e80  addiu       $a1, $v1, 0x5E80
    ctx->pc = 0x1e4da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 24192));
label_1e4da8:
    // 0x1e4da8: 0xaec50940  sw          $a1, 0x940($s6)
    ctx->pc = 0x1e4da8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2368), GPR_U32(ctx, 5));
label_1e4dac:
    // 0x1e4dac: 0x8c625e80  lw          $v0, 0x5E80($v1)
    ctx->pc = 0x1e4dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24192)));
label_1e4db0:
    // 0x1e4db0: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1e4db0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1e4db4:
    // 0x1e4db4: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1e4db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1e4db8:
    // 0x1e4db8: 0x60f809  jalr        $v1
label_1e4dbc:
    if (ctx->pc == 0x1E4DBCu) {
        ctx->pc = 0x1E4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DB8u;
        // 0x1e4dbc: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DC0u;
        goto label_1e4dc0;
    }
    ctx->pc = 0x1E4DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E4DC0u);
        ctx->pc = 0x1E4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DB8u;
        // 0x1e4dbc: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4DB8u, 0x1E4DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4DC0u;
label_1e4dc0:
    // 0x1e4dc0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1e4dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1e4dc4:
    // 0x1e4dc4: 0x24857be0  addiu       $a1, $a0, 0x7BE0
    ctx->pc = 0x1e4dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 31712));
label_1e4dc8:
    // 0x1e4dc8: 0xaec50944  sw          $a1, 0x944($s6)
    ctx->pc = 0x1e4dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2372), GPR_U32(ctx, 5));
label_1e4dcc:
    // 0x1e4dcc: 0x8c827be0  lw          $v0, 0x7BE0($a0)
    ctx->pc = 0x1e4dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31712)));
label_1e4dd0:
    // 0x1e4dd0: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1e4dd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1e4dd4:
    // 0x1e4dd4: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1e4dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1e4dd8:
    // 0x1e4dd8: 0x60f809  jalr        $v1
label_1e4ddc:
    if (ctx->pc == 0x1E4DDCu) {
        ctx->pc = 0x1E4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DD8u;
        // 0x1e4ddc: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DE0u;
        goto label_1e4de0;
    }
    ctx->pc = 0x1E4DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E4DE0u);
        ctx->pc = 0x1E4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DD8u;
        // 0x1e4ddc: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4DD8u, 0x1E4DE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4DE0u;
label_1e4de0:
    // 0x1e4de0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1e4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1e4de4:
    // 0x1e4de4: 0xaec0094c  sw          $zero, 0x94C($s6)
    ctx->pc = 0x1e4de4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2380), GPR_U32(ctx, 0));
label_1e4de8:
    // 0x1e4de8: 0xa2c20954  sb          $v0, 0x954($s6)
    ctx->pc = 0x1e4de8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2388), (uint8_t)GPR_U32(ctx, 2));
label_1e4dec:
    // 0x1e4dec: 0xaec00950  sw          $zero, 0x950($s6)
    ctx->pc = 0x1e4decu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2384), GPR_U32(ctx, 0));
label_1e4df0:
    // 0x1e4df0: 0xaec00948  sw          $zero, 0x948($s6)
    ctx->pc = 0x1e4df0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2376), GPR_U32(ctx, 0));
label_1e4df4:
    // 0x1e4df4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1e4df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1e4df8:
    // 0x1e4df8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1e4df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1e4dfc:
    // 0x1e4dfc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1e4dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1e4e00:
    // 0x1e4e00: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1e4e00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1e4e04:
    // 0x1e4e04: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1e4e04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e4e08:
    // 0x1e4e08: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1e4e08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e4e0c:
    // 0x1e4e0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e4e0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e4e10:
    // 0x1e4e10: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1e4e10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e4e14:
    // 0x1e4e14: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1e4e14u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e4e18:
    // 0x1e4e18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e4e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4e1c:
    // 0x1e4e1c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1e4e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e4e20:
    // 0x1e4e20: 0x3e00008  jr          $ra
label_1e4e24:
    if (ctx->pc == 0x1E4E24u) {
        ctx->pc = 0x1E4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E20u;
        // 0x1e4e24: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E28u;
        goto label_fallthrough_0x1e4e20;
    }
    ctx->pc = 0x1E4E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E20u;
        // 0x1e4e24: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e4e20:
    ctx->pc = 0x1E4E28u;
}
