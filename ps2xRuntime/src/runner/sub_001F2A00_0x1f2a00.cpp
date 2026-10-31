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

// Function: sub_001F2A00
// Address: 0x1f2a00 - 0x1f2e90
void sub_001F2A00_0x1f2a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2A00_0x1f2a00");
#endif

    switch (ctx->pc) {
        case 0x1f2a00u: goto label_1f2a00;
        case 0x1f2a04u: goto label_1f2a04;
        case 0x1f2a08u: goto label_1f2a08;
        case 0x1f2a0cu: goto label_1f2a0c;
        case 0x1f2a10u: goto label_1f2a10;
        case 0x1f2a14u: goto label_1f2a14;
        case 0x1f2a18u: goto label_1f2a18;
        case 0x1f2a1cu: goto label_1f2a1c;
        case 0x1f2a20u: goto label_1f2a20;
        case 0x1f2a24u: goto label_1f2a24;
        case 0x1f2a28u: goto label_1f2a28;
        case 0x1f2a2cu: goto label_1f2a2c;
        case 0x1f2a30u: goto label_1f2a30;
        case 0x1f2a34u: goto label_1f2a34;
        case 0x1f2a38u: goto label_1f2a38;
        case 0x1f2a3cu: goto label_1f2a3c;
        case 0x1f2a40u: goto label_1f2a40;
        case 0x1f2a44u: goto label_1f2a44;
        case 0x1f2a48u: goto label_1f2a48;
        case 0x1f2a4cu: goto label_1f2a4c;
        case 0x1f2a50u: goto label_1f2a50;
        case 0x1f2a54u: goto label_1f2a54;
        case 0x1f2a58u: goto label_1f2a58;
        case 0x1f2a5cu: goto label_1f2a5c;
        case 0x1f2a60u: goto label_1f2a60;
        case 0x1f2a64u: goto label_1f2a64;
        case 0x1f2a68u: goto label_1f2a68;
        case 0x1f2a6cu: goto label_1f2a6c;
        case 0x1f2a70u: goto label_1f2a70;
        case 0x1f2a74u: goto label_1f2a74;
        case 0x1f2a78u: goto label_1f2a78;
        case 0x1f2a7cu: goto label_1f2a7c;
        case 0x1f2a80u: goto label_1f2a80;
        case 0x1f2a84u: goto label_1f2a84;
        case 0x1f2a88u: goto label_1f2a88;
        case 0x1f2a8cu: goto label_1f2a8c;
        case 0x1f2a90u: goto label_1f2a90;
        case 0x1f2a94u: goto label_1f2a94;
        case 0x1f2a98u: goto label_1f2a98;
        case 0x1f2a9cu: goto label_1f2a9c;
        case 0x1f2aa0u: goto label_1f2aa0;
        case 0x1f2aa4u: goto label_1f2aa4;
        case 0x1f2aa8u: goto label_1f2aa8;
        case 0x1f2aacu: goto label_1f2aac;
        case 0x1f2ab0u: goto label_1f2ab0;
        case 0x1f2ab4u: goto label_1f2ab4;
        case 0x1f2ab8u: goto label_1f2ab8;
        case 0x1f2abcu: goto label_1f2abc;
        case 0x1f2ac0u: goto label_1f2ac0;
        case 0x1f2ac4u: goto label_1f2ac4;
        case 0x1f2ac8u: goto label_1f2ac8;
        case 0x1f2accu: goto label_1f2acc;
        case 0x1f2ad0u: goto label_1f2ad0;
        case 0x1f2ad4u: goto label_1f2ad4;
        case 0x1f2ad8u: goto label_1f2ad8;
        case 0x1f2adcu: goto label_1f2adc;
        case 0x1f2ae0u: goto label_1f2ae0;
        case 0x1f2ae4u: goto label_1f2ae4;
        case 0x1f2ae8u: goto label_1f2ae8;
        case 0x1f2aecu: goto label_1f2aec;
        case 0x1f2af0u: goto label_1f2af0;
        case 0x1f2af4u: goto label_1f2af4;
        case 0x1f2af8u: goto label_1f2af8;
        case 0x1f2afcu: goto label_1f2afc;
        case 0x1f2b00u: goto label_1f2b00;
        case 0x1f2b04u: goto label_1f2b04;
        case 0x1f2b08u: goto label_1f2b08;
        case 0x1f2b0cu: goto label_1f2b0c;
        case 0x1f2b10u: goto label_1f2b10;
        case 0x1f2b14u: goto label_1f2b14;
        case 0x1f2b18u: goto label_1f2b18;
        case 0x1f2b1cu: goto label_1f2b1c;
        case 0x1f2b20u: goto label_1f2b20;
        case 0x1f2b24u: goto label_1f2b24;
        case 0x1f2b28u: goto label_1f2b28;
        case 0x1f2b2cu: goto label_1f2b2c;
        case 0x1f2b30u: goto label_1f2b30;
        case 0x1f2b34u: goto label_1f2b34;
        case 0x1f2b38u: goto label_1f2b38;
        case 0x1f2b3cu: goto label_1f2b3c;
        case 0x1f2b40u: goto label_1f2b40;
        case 0x1f2b44u: goto label_1f2b44;
        case 0x1f2b48u: goto label_1f2b48;
        case 0x1f2b4cu: goto label_1f2b4c;
        case 0x1f2b50u: goto label_1f2b50;
        case 0x1f2b54u: goto label_1f2b54;
        case 0x1f2b58u: goto label_1f2b58;
        case 0x1f2b5cu: goto label_1f2b5c;
        case 0x1f2b60u: goto label_1f2b60;
        case 0x1f2b64u: goto label_1f2b64;
        case 0x1f2b68u: goto label_1f2b68;
        case 0x1f2b6cu: goto label_1f2b6c;
        case 0x1f2b70u: goto label_1f2b70;
        case 0x1f2b74u: goto label_1f2b74;
        case 0x1f2b78u: goto label_1f2b78;
        case 0x1f2b7cu: goto label_1f2b7c;
        case 0x1f2b80u: goto label_1f2b80;
        case 0x1f2b84u: goto label_1f2b84;
        case 0x1f2b88u: goto label_1f2b88;
        case 0x1f2b8cu: goto label_1f2b8c;
        case 0x1f2b90u: goto label_1f2b90;
        case 0x1f2b94u: goto label_1f2b94;
        case 0x1f2b98u: goto label_1f2b98;
        case 0x1f2b9cu: goto label_1f2b9c;
        case 0x1f2ba0u: goto label_1f2ba0;
        case 0x1f2ba4u: goto label_1f2ba4;
        case 0x1f2ba8u: goto label_1f2ba8;
        case 0x1f2bacu: goto label_1f2bac;
        case 0x1f2bb0u: goto label_1f2bb0;
        case 0x1f2bb4u: goto label_1f2bb4;
        case 0x1f2bb8u: goto label_1f2bb8;
        case 0x1f2bbcu: goto label_1f2bbc;
        case 0x1f2bc0u: goto label_1f2bc0;
        case 0x1f2bc4u: goto label_1f2bc4;
        case 0x1f2bc8u: goto label_1f2bc8;
        case 0x1f2bccu: goto label_1f2bcc;
        case 0x1f2bd0u: goto label_1f2bd0;
        case 0x1f2bd4u: goto label_1f2bd4;
        case 0x1f2bd8u: goto label_1f2bd8;
        case 0x1f2bdcu: goto label_1f2bdc;
        case 0x1f2be0u: goto label_1f2be0;
        case 0x1f2be4u: goto label_1f2be4;
        case 0x1f2be8u: goto label_1f2be8;
        case 0x1f2becu: goto label_1f2bec;
        case 0x1f2bf0u: goto label_1f2bf0;
        case 0x1f2bf4u: goto label_1f2bf4;
        case 0x1f2bf8u: goto label_1f2bf8;
        case 0x1f2bfcu: goto label_1f2bfc;
        case 0x1f2c00u: goto label_1f2c00;
        case 0x1f2c04u: goto label_1f2c04;
        case 0x1f2c08u: goto label_1f2c08;
        case 0x1f2c0cu: goto label_1f2c0c;
        case 0x1f2c10u: goto label_1f2c10;
        case 0x1f2c14u: goto label_1f2c14;
        case 0x1f2c18u: goto label_1f2c18;
        case 0x1f2c1cu: goto label_1f2c1c;
        case 0x1f2c20u: goto label_1f2c20;
        case 0x1f2c24u: goto label_1f2c24;
        case 0x1f2c28u: goto label_1f2c28;
        case 0x1f2c2cu: goto label_1f2c2c;
        case 0x1f2c30u: goto label_1f2c30;
        case 0x1f2c34u: goto label_1f2c34;
        case 0x1f2c38u: goto label_1f2c38;
        case 0x1f2c3cu: goto label_1f2c3c;
        case 0x1f2c40u: goto label_1f2c40;
        case 0x1f2c44u: goto label_1f2c44;
        case 0x1f2c48u: goto label_1f2c48;
        case 0x1f2c4cu: goto label_1f2c4c;
        case 0x1f2c50u: goto label_1f2c50;
        case 0x1f2c54u: goto label_1f2c54;
        case 0x1f2c58u: goto label_1f2c58;
        case 0x1f2c5cu: goto label_1f2c5c;
        case 0x1f2c60u: goto label_1f2c60;
        case 0x1f2c64u: goto label_1f2c64;
        case 0x1f2c68u: goto label_1f2c68;
        case 0x1f2c6cu: goto label_1f2c6c;
        case 0x1f2c70u: goto label_1f2c70;
        case 0x1f2c74u: goto label_1f2c74;
        case 0x1f2c78u: goto label_1f2c78;
        case 0x1f2c7cu: goto label_1f2c7c;
        case 0x1f2c80u: goto label_1f2c80;
        case 0x1f2c84u: goto label_1f2c84;
        case 0x1f2c88u: goto label_1f2c88;
        case 0x1f2c8cu: goto label_1f2c8c;
        case 0x1f2c90u: goto label_1f2c90;
        case 0x1f2c94u: goto label_1f2c94;
        case 0x1f2c98u: goto label_1f2c98;
        case 0x1f2c9cu: goto label_1f2c9c;
        case 0x1f2ca0u: goto label_1f2ca0;
        case 0x1f2ca4u: goto label_1f2ca4;
        case 0x1f2ca8u: goto label_1f2ca8;
        case 0x1f2cacu: goto label_1f2cac;
        case 0x1f2cb0u: goto label_1f2cb0;
        case 0x1f2cb4u: goto label_1f2cb4;
        case 0x1f2cb8u: goto label_1f2cb8;
        case 0x1f2cbcu: goto label_1f2cbc;
        case 0x1f2cc0u: goto label_1f2cc0;
        case 0x1f2cc4u: goto label_1f2cc4;
        case 0x1f2cc8u: goto label_1f2cc8;
        case 0x1f2cccu: goto label_1f2ccc;
        case 0x1f2cd0u: goto label_1f2cd0;
        case 0x1f2cd4u: goto label_1f2cd4;
        case 0x1f2cd8u: goto label_1f2cd8;
        case 0x1f2cdcu: goto label_1f2cdc;
        case 0x1f2ce0u: goto label_1f2ce0;
        case 0x1f2ce4u: goto label_1f2ce4;
        case 0x1f2ce8u: goto label_1f2ce8;
        case 0x1f2cecu: goto label_1f2cec;
        case 0x1f2cf0u: goto label_1f2cf0;
        case 0x1f2cf4u: goto label_1f2cf4;
        case 0x1f2cf8u: goto label_1f2cf8;
        case 0x1f2cfcu: goto label_1f2cfc;
        case 0x1f2d00u: goto label_1f2d00;
        case 0x1f2d04u: goto label_1f2d04;
        case 0x1f2d08u: goto label_1f2d08;
        case 0x1f2d0cu: goto label_1f2d0c;
        case 0x1f2d10u: goto label_1f2d10;
        case 0x1f2d14u: goto label_1f2d14;
        case 0x1f2d18u: goto label_1f2d18;
        case 0x1f2d1cu: goto label_1f2d1c;
        case 0x1f2d20u: goto label_1f2d20;
        case 0x1f2d24u: goto label_1f2d24;
        case 0x1f2d28u: goto label_1f2d28;
        case 0x1f2d2cu: goto label_1f2d2c;
        case 0x1f2d30u: goto label_1f2d30;
        case 0x1f2d34u: goto label_1f2d34;
        case 0x1f2d38u: goto label_1f2d38;
        case 0x1f2d3cu: goto label_1f2d3c;
        case 0x1f2d40u: goto label_1f2d40;
        case 0x1f2d44u: goto label_1f2d44;
        case 0x1f2d48u: goto label_1f2d48;
        case 0x1f2d4cu: goto label_1f2d4c;
        case 0x1f2d50u: goto label_1f2d50;
        case 0x1f2d54u: goto label_1f2d54;
        case 0x1f2d58u: goto label_1f2d58;
        case 0x1f2d5cu: goto label_1f2d5c;
        case 0x1f2d60u: goto label_1f2d60;
        case 0x1f2d64u: goto label_1f2d64;
        case 0x1f2d68u: goto label_1f2d68;
        case 0x1f2d6cu: goto label_1f2d6c;
        case 0x1f2d70u: goto label_1f2d70;
        case 0x1f2d74u: goto label_1f2d74;
        case 0x1f2d78u: goto label_1f2d78;
        case 0x1f2d7cu: goto label_1f2d7c;
        case 0x1f2d80u: goto label_1f2d80;
        case 0x1f2d84u: goto label_1f2d84;
        case 0x1f2d88u: goto label_1f2d88;
        case 0x1f2d8cu: goto label_1f2d8c;
        case 0x1f2d90u: goto label_1f2d90;
        case 0x1f2d94u: goto label_1f2d94;
        case 0x1f2d98u: goto label_1f2d98;
        case 0x1f2d9cu: goto label_1f2d9c;
        case 0x1f2da0u: goto label_1f2da0;
        case 0x1f2da4u: goto label_1f2da4;
        case 0x1f2da8u: goto label_1f2da8;
        case 0x1f2dacu: goto label_1f2dac;
        case 0x1f2db0u: goto label_1f2db0;
        case 0x1f2db4u: goto label_1f2db4;
        case 0x1f2db8u: goto label_1f2db8;
        case 0x1f2dbcu: goto label_1f2dbc;
        case 0x1f2dc0u: goto label_1f2dc0;
        case 0x1f2dc4u: goto label_1f2dc4;
        case 0x1f2dc8u: goto label_1f2dc8;
        case 0x1f2dccu: goto label_1f2dcc;
        case 0x1f2dd0u: goto label_1f2dd0;
        case 0x1f2dd4u: goto label_1f2dd4;
        case 0x1f2dd8u: goto label_1f2dd8;
        case 0x1f2ddcu: goto label_1f2ddc;
        case 0x1f2de0u: goto label_1f2de0;
        case 0x1f2de4u: goto label_1f2de4;
        case 0x1f2de8u: goto label_1f2de8;
        case 0x1f2decu: goto label_1f2dec;
        case 0x1f2df0u: goto label_1f2df0;
        case 0x1f2df4u: goto label_1f2df4;
        case 0x1f2df8u: goto label_1f2df8;
        case 0x1f2dfcu: goto label_1f2dfc;
        case 0x1f2e00u: goto label_1f2e00;
        case 0x1f2e04u: goto label_1f2e04;
        case 0x1f2e08u: goto label_1f2e08;
        case 0x1f2e0cu: goto label_1f2e0c;
        case 0x1f2e10u: goto label_1f2e10;
        case 0x1f2e14u: goto label_1f2e14;
        case 0x1f2e18u: goto label_1f2e18;
        case 0x1f2e1cu: goto label_1f2e1c;
        case 0x1f2e20u: goto label_1f2e20;
        case 0x1f2e24u: goto label_1f2e24;
        case 0x1f2e28u: goto label_1f2e28;
        case 0x1f2e2cu: goto label_1f2e2c;
        case 0x1f2e30u: goto label_1f2e30;
        case 0x1f2e34u: goto label_1f2e34;
        case 0x1f2e38u: goto label_1f2e38;
        case 0x1f2e3cu: goto label_1f2e3c;
        case 0x1f2e40u: goto label_1f2e40;
        case 0x1f2e44u: goto label_1f2e44;
        case 0x1f2e48u: goto label_1f2e48;
        case 0x1f2e4cu: goto label_1f2e4c;
        case 0x1f2e50u: goto label_1f2e50;
        case 0x1f2e54u: goto label_1f2e54;
        case 0x1f2e58u: goto label_1f2e58;
        case 0x1f2e5cu: goto label_1f2e5c;
        case 0x1f2e60u: goto label_1f2e60;
        case 0x1f2e64u: goto label_1f2e64;
        case 0x1f2e68u: goto label_1f2e68;
        case 0x1f2e6cu: goto label_1f2e6c;
        case 0x1f2e70u: goto label_1f2e70;
        case 0x1f2e74u: goto label_1f2e74;
        case 0x1f2e78u: goto label_1f2e78;
        case 0x1f2e7cu: goto label_1f2e7c;
        case 0x1f2e80u: goto label_1f2e80;
        case 0x1f2e84u: goto label_1f2e84;
        case 0x1f2e88u: goto label_1f2e88;
        case 0x1f2e8cu: goto label_1f2e8c;
        default: break;
    }

    ctx->pc = 0x1f2a00u;

label_1f2a00:
    // 0x1f2a00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1f2a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1f2a04:
    // 0x1f2a04: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1f2a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1f2a08:
    // 0x1f2a08: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1f2a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1f2a0c:
    // 0x1f2a0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f2a0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f2a10:
    // 0x1f2a10: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1f2a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1f2a14:
    // 0x1f2a14: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1f2a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1f2a18:
    // 0x1f2a18: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1f2a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1f2a1c:
    // 0x1f2a1c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1f2a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1f2a20:
    // 0x1f2a20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f2a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f2a24:
    // 0x1f2a24: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1f2a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_1f2a28:
    // 0x1f2a28: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1f2a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1f2a2c:
    // 0x1f2a2c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f2a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1f2a30:
    // 0x1f2a30: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1f2a30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1f2a34:
    // 0x1f2a34: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1f2a34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1f2a38:
    // 0x1f2a38: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1f2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1f2a3c:
    // 0x1f2a3c: 0x14400107  bnez        $v0, . + 4 + (0x107 << 2)
label_1f2a40:
    if (ctx->pc == 0x1F2A40u) {
        ctx->pc = 0x1F2A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A3Cu;
        // 0x1f2a40: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2A44u;
        goto label_1f2a44;
    }
    ctx->pc = 0x1F2A3Cu;
    {
        const bool branch_taken_0x1f2a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A3Cu;
        // 0x1f2a40: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a3c) {
            ctx->pc = 0x1F2E5Cu;
            goto label_1f2e5c;
        }
    }
    ctx->pc = 0x1F2A44u;
label_1f2a44:
    // 0x1f2a44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f2a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f2a48:
    // 0x1f2a48: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1f2a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1f2a4c:
    // 0x1f2a4c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f2a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f2a50:
    // 0x1f2a50: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1f2a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1f2a54:
    // 0x1f2a54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f2a58:
    if (ctx->pc == 0x1F2A58u) {
        ctx->pc = 0x1F2A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A54u;
        // 0x1f2a58: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2A5Cu;
        goto label_1f2a5c;
    }
    ctx->pc = 0x1F2A54u;
    {
        const bool branch_taken_0x1f2a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A54u;
        // 0x1f2a58: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a54) {
            ctx->pc = 0x1F2A84u;
            goto label_1f2a84;
        }
    }
    ctx->pc = 0x1F2A5Cu;
label_1f2a5c:
    // 0x1f2a5c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_1f2a60:
    if (ctx->pc == 0x1F2A60u) {
        ctx->pc = 0x1F2A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A5Cu;
        // 0x1f2a60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2A64u;
        goto label_1f2a64;
    }
    ctx->pc = 0x1F2A5Cu;
    {
        const bool branch_taken_0x1f2a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2a5c) {
            ctx->pc = 0x1F2A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2A5Cu;
            // 0x1f2a60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2ABCu;
            goto label_1f2abc;
        }
    }
    ctx->pc = 0x1F2A64u;
label_1f2a64:
    // 0x1f2a64: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1f2a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1f2a68:
    // 0x1f2a68: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f2a68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f2a6c:
    // 0x1f2a6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f2a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f2a70:
    // 0x1f2a70: 0x3c013ef0  lui         $at, 0x3EF0
    ctx->pc = 0x1f2a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16112 << 16));
label_1f2a74:
    // 0x1f2a74: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1f2a74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_1f2a78:
    // 0x1f2a78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f2a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f2a7c:
    // 0x1f2a7c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1f2a80:
    if (ctx->pc == 0x1F2A80u) {
        ctx->pc = 0x1F2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A7Cu;
        // 0x1f2a80: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2A84u;
        goto label_1f2a84;
    }
    ctx->pc = 0x1F2A7Cu;
    {
        const bool branch_taken_0x1f2a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A7Cu;
        // 0x1f2a80: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a7c) {
            ctx->pc = 0x1F2AACu;
            goto label_1f2aac;
        }
    }
    ctx->pc = 0x1F2A84u;
label_1f2a84:
    // 0x1f2a84: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1f2a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1f2a88:
    // 0x1f2a88: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_1f2a8c:
    if (ctx->pc == 0x1F2A8Cu) {
        ctx->pc = 0x1F2A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A88u;
        // 0x1f2a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2A90u;
        goto label_1f2a90;
    }
    ctx->pc = 0x1F2A88u;
    {
        const bool branch_taken_0x1f2a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2a88) {
            ctx->pc = 0x1F2A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2A88u;
            // 0x1f2a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2ABCu;
            goto label_1f2abc;
        }
    }
    ctx->pc = 0x1F2A90u;
label_1f2a90:
    // 0x1f2a90: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1f2a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1f2a94:
    // 0x1f2a94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f2a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f2a98:
    // 0x1f2a98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f2a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f2a9c:
    // 0x1f2a9c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f2a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f2aa0:
    // 0x1f2aa0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1f2aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_1f2aa4:
    // 0x1f2aa4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f2aa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f2aa8:
    // 0x1f2aa8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f2aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f2aac:
    // 0x1f2aac: 0xe440f3f0  swc1        $f0, -0xC10($v0)
    ctx->pc = 0x1f2aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964208), bits); }
label_1f2ab0:
    // 0x1f2ab0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f2ab4:
    // 0x1f2ab4: 0xe441f3f4  swc1        $f1, -0xC0C($v0)
    ctx->pc = 0x1f2ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964212), bits); }
label_1f2ab8:
    // 0x1f2ab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f2abc:
    // 0x1f2abc: 0xc07ca6e  jal         func_1F29B8
label_1f2ac0:
    if (ctx->pc == 0x1F2AC0u) {
        ctx->pc = 0x1F2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2ABCu;
        // 0x1f2ac0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2AC4u;
        goto label_1f2ac4;
    }
    ctx->pc = 0x1F2ABCu;
    SET_GPR_U32(ctx, 31, 0x1F2AC4u);
    ctx->pc = 0x1F2AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2ABCu;
    // 0x1f2ac0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29B8u, 0x1F2ABCu, 0x1F2AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2AC4u;
label_1f2ac4:
    // 0x1f2ac4: 0xc07f728  jal         func_1FDCA0
label_1f2ac8:
    if (ctx->pc == 0x1F2AC8u) {
        ctx->pc = 0x1F2AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2AC4u;
        // 0x1f2ac8: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2ACCu;
        goto label_1f2acc;
    }
    ctx->pc = 0x1F2AC4u;
    SET_GPR_U32(ctx, 31, 0x1F2ACCu);
    ctx->pc = 0x1F2AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2AC4u;
    // 0x1f2ac8: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCA0u, 0x1F2AC4u, 0x1F2ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2ACCu;
label_1f2acc:
    // 0x1f2acc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f2accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f2ad0:
    // 0x1f2ad0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f2ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f2ad4:
    // 0x1f2ad4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1f2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f2ad8:
    // 0x1f2ad8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f2ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f2adc:
    // 0x1f2adc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f2adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f2ae0:
    // 0x1f2ae0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f2ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f2ae4:
    // 0x1f2ae4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1f2ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1f2ae8:
    // 0x1f2ae8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1f2ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1f2aec:
    // 0x1f2aec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1f2aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1f2af0:
    // 0x1f2af0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f2af0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2af4:
    // 0x1f2af4: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1f2af4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1f2af8:
    // 0x1f2af8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1f2af8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f2afc:
    // 0x1f2afc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f2afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1f2b00:
    // 0x1f2b00: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1f2b00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b04:
    // 0x1f2b04: 0x8e0c27e4  lw          $t4, 0x27E4($s0)
    ctx->pc = 0x1f2b04u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_1f2b08:
    // 0x1f2b08: 0x24a57398  addiu       $a1, $a1, 0x7398
    ctx->pc = 0x1f2b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29592));
label_1f2b0c:
    // 0x1f2b0c: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f2b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f2b10:
    // 0x1f2b10: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f2b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f2b14:
    // 0x1f2b14: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f2b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f2b18:
    // 0x1f2b18: 0x250873a8  addiu       $t0, $t0, 0x73A8
    ctx->pc = 0x1f2b18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29608));
label_1f2b1c:
    // 0x1f2b1c: 0x2409006a  addiu       $t1, $zero, 0x6A
    ctx->pc = 0x1f2b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_1f2b20:
    // 0x1f2b20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f2b20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b24:
    // 0x1f2b24: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f2b24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f2b28:
    // 0x1f2b28: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f2b28u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b2c:
    // 0x1f2b2c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f2b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f2b30:
    // 0x1f2b30: 0x40f809  jalr        $v0
label_1f2b34:
    if (ctx->pc == 0x1F2B34u) {
        ctx->pc = 0x1F2B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B30u;
        // 0x1f2b34: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2B38u;
        goto label_1f2b38;
    }
    ctx->pc = 0x1F2B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F2B38u);
        ctx->pc = 0x1F2B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B30u;
        // 0x1f2b34: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2B30u, 0x1F2B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2B38u;
label_1f2b38:
    // 0x1f2b38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f2b3c:
    if (ctx->pc == 0x1F2B3Cu) {
        ctx->pc = 0x1F2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B38u;
        // 0x1f2b3c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2B40u;
        goto label_1f2b40;
    }
    ctx->pc = 0x1F2B38u;
    {
        const bool branch_taken_0x1f2b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B38u;
        // 0x1f2b3c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b38) {
            ctx->pc = 0x1F2B4Cu;
            goto label_1f2b4c;
        }
    }
    ctx->pc = 0x1F2B40u;
label_1f2b40:
    // 0x1f2b40: 0xc0733e2  jal         func_1CCF88
label_1f2b44:
    if (ctx->pc == 0x1F2B44u) {
        ctx->pc = 0x1F2B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B40u;
        // 0x1f2b44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2B48u;
        goto label_1f2b48;
    }
    ctx->pc = 0x1F2B40u;
    SET_GPR_U32(ctx, 31, 0x1F2B48u);
    ctx->pc = 0x1F2B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B40u;
    // 0x1f2b44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1F2B40u, 0x1F2B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B48u;
label_1f2b48:
    // 0x1f2b48: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1f2b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f2b4c:
    // 0x1f2b4c: 0x3c01400e  lui         $at, 0x400E
    ctx->pc = 0x1f2b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16398 << 16));
label_1f2b50:
    // 0x1f2b50: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1f2b50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1f2b54:
    // 0x1f2b54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f2b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f2b58:
    // 0x1f2b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b5c:
    // 0x1f2b5c: 0xc05e602  jal         func_179808
label_1f2b60:
    if (ctx->pc == 0x1F2B60u) {
        ctx->pc = 0x1F2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B5Cu;
        // 0x1f2b60: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2B64u;
        goto label_1f2b64;
    }
    ctx->pc = 0x1F2B5Cu;
    SET_GPR_U32(ctx, 31, 0x1F2B64u);
    ctx->pc = 0x1F2B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B5Cu;
    // 0x1f2b60: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1F2B5Cu, 0x1F2B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B64u;
label_1f2b64:
    // 0x1f2b64: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x1f2b64u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
label_1f2b68:
    // 0x1f2b68: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x1f2b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_1f2b6c:
    // 0x1f2b6c: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1f2b6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f2b70:
    // 0x1f2b70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f2b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b74:
    // 0x1f2b74: 0x8e27d310  lw          $a3, -0x2CF0($s1)
    ctx->pc = 0x1f2b74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955792)));
label_1f2b78:
    // 0x1f2b78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f2b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f2b7c:
    // 0x1f2b7c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1f2b7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b80:
    // 0x1f2b80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f2b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b84:
    // 0x1f2b84: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f2b84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2b88:
    // 0x1f2b88: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1f2b88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1f2b8c:
    // 0x1f2b8c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f2b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2b90:
    // 0x1f2b90: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x1f2b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
label_1f2b94:
    // 0x1f2b94: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x1f2b94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f2b98:
    // 0x1f2b98: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1f2b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f2b9c:
    // 0x1f2b9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f2b9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2ba0:
    // 0x1f2ba0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1f2ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1f2ba4:
    // 0x1f2ba4: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x1f2ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_1f2ba8:
    // 0x1f2ba8: 0x2610ef80  addiu       $s0, $s0, -0x1080
    ctx->pc = 0x1f2ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963072));
label_1f2bac:
    // 0x1f2bac: 0x40f809  jalr        $v0
label_1f2bb0:
    if (ctx->pc == 0x1F2BB0u) {
        ctx->pc = 0x1F2BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BACu;
        // 0x1f2bb0: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2BB4u;
        goto label_1f2bb4;
    }
    ctx->pc = 0x1F2BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F2BB4u);
        ctx->pc = 0x1F2BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BACu;
        // 0x1f2bb0: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2BACu, 0x1F2BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2BB4u;
label_1f2bb4:
    // 0x1f2bb4: 0xc080b0c  jal         func_202C30
label_1f2bb8:
    if (ctx->pc == 0x1F2BB8u) {
        ctx->pc = 0x1F2BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BB4u;
        // 0x1f2bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2BBCu;
        goto label_1f2bbc;
    }
    ctx->pc = 0x1F2BB4u;
    SET_GPR_U32(ctx, 31, 0x1F2BBCu);
    ctx->pc = 0x1F2BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BB4u;
    // 0x1f2bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C30u, 0x1F2BB4u, 0x1F2BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BBCu;
label_1f2bbc:
    // 0x1f2bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2bc0:
    // 0x1f2bc0: 0xc080ad4  jal         func_202B50
label_1f2bc4:
    if (ctx->pc == 0x1F2BC4u) {
        ctx->pc = 0x1F2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BC0u;
        // 0x1f2bc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2BC8u;
        goto label_1f2bc8;
    }
    ctx->pc = 0x1F2BC0u;
    SET_GPR_U32(ctx, 31, 0x1F2BC8u);
    ctx->pc = 0x1F2BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BC0u;
    // 0x1f2bc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B50u, 0x1F2BC0u, 0x1F2BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BC8u;
label_1f2bc8:
    // 0x1f2bc8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1f2bcc:
    if (ctx->pc == 0x1F2BCCu) {
        ctx->pc = 0x1F2BD0u;
        goto label_1f2bd0;
    }
    ctx->pc = 0x1F2BC8u;
    {
        const bool branch_taken_0x1f2bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2bc8) {
            ctx->pc = 0x1F2BECu;
            goto label_1f2bec;
        }
    }
    ctx->pc = 0x1F2BD0u;
label_1f2bd0:
    // 0x1f2bd0: 0xc067b9c  jal         func_19EE70
label_1f2bd4:
    if (ctx->pc == 0x1F2BD4u) {
        ctx->pc = 0x1F2BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BD0u;
        // 0x1f2bd4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2BD8u;
        goto label_1f2bd8;
    }
    ctx->pc = 0x1F2BD0u;
    SET_GPR_U32(ctx, 31, 0x1F2BD8u);
    ctx->pc = 0x1F2BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BD0u;
    // 0x1f2bd4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F2BD0u, 0x1F2BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BD8u;
label_1f2bd8:
    // 0x1f2bd8: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x1f2bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_1f2bdc:
    // 0x1f2bdc: 0xc073478  jal         func_1CD1E0
label_1f2be0:
    if (ctx->pc == 0x1F2BE0u) {
        ctx->pc = 0x1F2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BDCu;
        // 0x1f2be0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2BE4u;
        goto label_1f2be4;
    }
    ctx->pc = 0x1F2BDCu;
    SET_GPR_U32(ctx, 31, 0x1F2BE4u);
    ctx->pc = 0x1F2BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BDCu;
    // 0x1f2be0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1F2BDCu, 0x1F2BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BE4u;
label_1f2be4:
    // 0x1f2be4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f2be8:
    if (ctx->pc == 0x1F2BE8u) {
        ctx->pc = 0x1F2BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BE4u;
        // 0x1f2be8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2BECu;
        goto label_1f2bec;
    }
    ctx->pc = 0x1F2BE4u;
    {
        const bool branch_taken_0x1f2be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BE4u;
        // 0x1f2be8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2be4) {
            ctx->pc = 0x1F2C04u;
            goto label_1f2c04;
        }
    }
    ctx->pc = 0x1F2BECu;
label_1f2bec:
    // 0x1f2bec: 0xc067b9c  jal         func_19EE70
label_1f2bf0:
    if (ctx->pc == 0x1F2BF0u) {
        ctx->pc = 0x1F2BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BECu;
        // 0x1f2bf0: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2BF4u;
        goto label_1f2bf4;
    }
    ctx->pc = 0x1F2BECu;
    SET_GPR_U32(ctx, 31, 0x1F2BF4u);
    ctx->pc = 0x1F2BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BECu;
    // 0x1f2bf0: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F2BECu, 0x1F2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BF4u;
label_1f2bf4:
    // 0x1f2bf4: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x1f2bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_1f2bf8:
    // 0x1f2bf8: 0xc073478  jal         func_1CD1E0
label_1f2bfc:
    if (ctx->pc == 0x1F2BFCu) {
        ctx->pc = 0x1F2BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BF8u;
        // 0x1f2bfc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2C00u;
        goto label_1f2c00;
    }
    ctx->pc = 0x1F2BF8u;
    SET_GPR_U32(ctx, 31, 0x1F2C00u);
    ctx->pc = 0x1F2BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BF8u;
    // 0x1f2bfc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1F2BF8u, 0x1F2C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C00u;
label_1f2c00:
    // 0x1f2c00: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f2c04:
    // 0x1f2c04: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f2c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f2c08:
    // 0x1f2c08: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f2c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1f2c0c:
    // 0x1f2c0c: 0xc440f3f0  lwc1        $f0, -0xC10($v0)
    ctx->pc = 0x1f2c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c10:
    // 0x1f2c10: 0x26d073a8  addiu       $s0, $s6, 0x73A8
    ctx->pc = 0x1f2c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 29608));
label_1f2c14:
    // 0x1f2c14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f2c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f2c18:
    // 0x1f2c18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f2c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f2c1c:
    // 0x1f2c1c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f2c20:
    // 0x1f2c20: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1f2c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1f2c24:
    // 0x1f2c24: 0x27c57398  addiu       $a1, $fp, 0x7398
    ctx->pc = 0x1f2c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 29592));
label_1f2c28:
    // 0x1f2c28: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x1f2c28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1f2c2c:
    // 0x1f2c2c: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f2c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f2c30:
    // 0x1f2c30: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1f2c30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1f2c34:
    // 0x1f2c34: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f2c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f2c38:
    // 0x1f2c38: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1f2c38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1f2c3c:
    // 0x1f2c3c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1f2c3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2c40:
    // 0x1f2c40: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x1f2c40u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_1f2c44:
    // 0x1f2c44: 0x24090079  addiu       $t1, $zero, 0x79
    ctx->pc = 0x1f2c44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_1f2c48:
    // 0x1f2c48: 0xac52f3ec  sw          $s2, -0xC14($v0)
    ctx->pc = 0x1f2c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964204), GPR_U32(ctx, 18));
label_1f2c4c:
    // 0x1f2c4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f2c4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2c50:
    // 0x1f2c50: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f2c54:
    // 0x1f2c54: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f2c54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2c58:
    // 0x1f2c58: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f2c58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f2c5c:
    // 0x1f2c5c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f2c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f2c60:
    // 0x1f2c60: 0x40f809  jalr        $v0
label_1f2c64:
    if (ctx->pc == 0x1F2C64u) {
        ctx->pc = 0x1F2C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C60u;
        // 0x1f2c64: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2C68u;
        goto label_1f2c68;
    }
    ctx->pc = 0x1F2C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F2C68u);
        ctx->pc = 0x1F2C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C60u;
        // 0x1f2c64: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2C60u, 0x1F2C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2C68u;
label_1f2c68:
    // 0x1f2c68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f2c6c:
    if (ctx->pc == 0x1F2C6Cu) {
        ctx->pc = 0x1F2C70u;
        goto label_1f2c70;
    }
    ctx->pc = 0x1F2C68u;
    {
        const bool branch_taken_0x1f2c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2c68) {
            ctx->pc = 0x1F2C78u;
            goto label_1f2c78;
        }
    }
    ctx->pc = 0x1F2C70u;
label_1f2c70:
    // 0x1f2c70: 0xc0733e2  jal         func_1CCF88
label_1f2c74:
    if (ctx->pc == 0x1F2C74u) {
        ctx->pc = 0x1F2C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C70u;
        // 0x1f2c74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2C78u;
        goto label_1f2c78;
    }
    ctx->pc = 0x1F2C70u;
    SET_GPR_U32(ctx, 31, 0x1F2C78u);
    ctx->pc = 0x1F2C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C70u;
    // 0x1f2c74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1F2C70u, 0x1F2C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C78u;
label_1f2c78:
    // 0x1f2c78: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1f2c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1f2c7c:
    // 0x1f2c7c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1f2c7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1f2c80:
    // 0x1f2c80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f2c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f2c84:
    // 0x1f2c84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f2c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f2c88:
    // 0x1f2c88: 0xc05e602  jal         func_179808
label_1f2c8c:
    if (ctx->pc == 0x1F2C8Cu) {
        ctx->pc = 0x1F2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C88u;
        // 0x1f2c8c: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2C90u;
        goto label_1f2c90;
    }
    ctx->pc = 0x1F2C88u;
    SET_GPR_U32(ctx, 31, 0x1F2C90u);
    ctx->pc = 0x1F2C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C88u;
    // 0x1f2c8c: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1F2C88u, 0x1F2C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C90u;
label_1f2c90:
    // 0x1f2c90: 0x8e4c0094  lw          $t4, 0x94($s2)
    ctx->pc = 0x1f2c90u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1f2c94:
    // 0x1f2c94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f2c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f2c98:
    // 0x1f2c98: 0x8ef1d310  lw          $s1, -0x2CF0($s7)
    ctx->pc = 0x1f2c98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294955792)));
label_1f2c9c:
    // 0x1f2c9c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f2c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f2ca0:
    // 0x1f2ca0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f2ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f2ca4:
    // 0x1f2ca4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f2ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2ca8:
    // 0x1f2ca8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f2ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f2cac:
    // 0x1f2cac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f2cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2cb0:
    // 0x1f2cb0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1f2cb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1f2cb4:
    // 0x1f2cb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f2cb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2cb8:
    // 0x1f2cb8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f2cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1f2cbc:
    // 0x1f2cbc: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x1f2cbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f2cc0:
    // 0x1f2cc0: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x1f2cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_1f2cc4:
    // 0x1f2cc4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1f2cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1f2cc8:
    // 0x1f2cc8: 0x40f809  jalr        $v0
label_1f2ccc:
    if (ctx->pc == 0x1F2CCCu) {
        ctx->pc = 0x1F2CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CC8u;
        // 0x1f2ccc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2CD0u;
        goto label_1f2cd0;
    }
    ctx->pc = 0x1F2CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F2CD0u);
        ctx->pc = 0x1F2CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CC8u;
        // 0x1f2ccc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2CC8u, 0x1F2CD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2CD0u;
label_1f2cd0:
    // 0x1f2cd0: 0xc067b9c  jal         func_19EE70
label_1f2cd4:
    if (ctx->pc == 0x1F2CD4u) {
        ctx->pc = 0x1F2CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CD0u;
        // 0x1f2cd4: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2CD8u;
        goto label_1f2cd8;
    }
    ctx->pc = 0x1F2CD0u;
    SET_GPR_U32(ctx, 31, 0x1F2CD8u);
    ctx->pc = 0x1F2CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CD0u;
    // 0x1f2cd4: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F2CD0u, 0x1F2CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CD8u;
label_1f2cd8:
    // 0x1f2cd8: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x1f2cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1f2cdc:
    // 0x1f2cdc: 0xc073478  jal         func_1CD1E0
label_1f2ce0:
    if (ctx->pc == 0x1F2CE0u) {
        ctx->pc = 0x1F2CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CDCu;
        // 0x1f2ce0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2CE4u;
        goto label_1f2ce4;
    }
    ctx->pc = 0x1F2CDCu;
    SET_GPR_U32(ctx, 31, 0x1F2CE4u);
    ctx->pc = 0x1F2CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CDCu;
    // 0x1f2ce0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1F2CDCu, 0x1F2CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CE4u;
label_1f2ce4:
    // 0x1f2ce4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f2ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f2ce8:
    // 0x1f2ce8: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x1f2ce8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_1f2cec:
    // 0x1f2cec: 0xc440f3f4  lwc1        $f0, -0xC0C($v0)
    ctx->pc = 0x1f2cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2cf0:
    // 0x1f2cf0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f2cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f2cf4:
    // 0x1f2cf4: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x1f2cf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1f2cf8:
    // 0x1f2cf8: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x1f2cf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1f2cfc:
    // 0x1f2cfc: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1f2cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1f2d00:
    // 0x1f2d00: 0x24a573e0  addiu       $a1, $a1, 0x73E0
    ctx->pc = 0x1f2d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29664));
label_1f2d04:
    // 0x1f2d04: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1f2d04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1f2d08:
    // 0x1f2d08: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f2d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f2d0c:
    // 0x1f2d0c: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1f2d0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1f2d10:
    // 0x1f2d10: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f2d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f2d14:
    // 0x1f2d14: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1f2d14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d18:
    // 0x1f2d18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f2d18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d1c:
    // 0x1f2d1c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f2d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f2d20:
    // 0x1f2d20: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f2d20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d24:
    // 0x1f2d24: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f2d24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f2d28:
    // 0x1f2d28: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f2d2c:
    // 0x1f2d2c: 0x40f809  jalr        $v0
label_1f2d30:
    if (ctx->pc == 0x1F2D30u) {
        ctx->pc = 0x1F2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D2Cu;
        // 0x1f2d30: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2D34u;
        goto label_1f2d34;
    }
    ctx->pc = 0x1F2D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F2D34u);
        ctx->pc = 0x1F2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D2Cu;
        // 0x1f2d30: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2D2Cu, 0x1F2D34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2D34u;
label_1f2d34:
    // 0x1f2d34: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1f2d34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d38:
    // 0x1f2d38: 0x51200005  beql        $t1, $zero, . + 4 + (0x5 << 2)
label_1f2d3c:
    if (ctx->pc == 0x1F2D3Cu) {
        ctx->pc = 0x1F2D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D38u;
        // 0x1f2d3c: 0xae49009c  sw          $t1, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2D40u;
        goto label_1f2d40;
    }
    ctx->pc = 0x1F2D38u;
    {
        const bool branch_taken_0x1f2d38 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2d38) {
            ctx->pc = 0x1F2D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2D38u;
            // 0x1f2d3c: 0xae49009c  sw          $t1, 0x9C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2D50u;
            goto label_1f2d50;
        }
    }
    ctx->pc = 0x1F2D40u;
label_1f2d40:
    // 0x1f2d40: 0xc0705aa  jal         func_1C16A8
label_1f2d44:
    if (ctx->pc == 0x1F2D44u) {
        ctx->pc = 0x1F2D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D40u;
        // 0x1f2d44: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2D48u;
        goto label_1f2d48;
    }
    ctx->pc = 0x1F2D40u;
    SET_GPR_U32(ctx, 31, 0x1F2D48u);
    ctx->pc = 0x1F2D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D40u;
    // 0x1f2d44: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x1F2D40u, 0x1F2D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D48u;
label_1f2d48:
    // 0x1f2d48: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1f2d48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d4c:
    // 0x1f2d4c: 0xae49009c  sw          $t1, 0x9C($s2)
    ctx->pc = 0x1f2d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 9));
label_1f2d50:
    // 0x1f2d50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f2d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d54:
    // 0x1f2d54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f2d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d58:
    // 0x1f2d58: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1f2d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f2d5c:
    // 0x1f2d5c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1f2d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1f2d60:
    // 0x1f2d60: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1f2d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f2d64:
    // 0x1f2d64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f2d64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f2d68:
    // 0x1f2d68: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1f2d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1f2d6c:
    // 0x1f2d6c: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1f2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1f2d70:
    // 0x1f2d70: 0x40f809  jalr        $v0
label_1f2d74:
    if (ctx->pc == 0x1F2D74u) {
        ctx->pc = 0x1F2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D70u;
        // 0x1f2d74: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2D78u;
        goto label_1f2d78;
    }
    ctx->pc = 0x1F2D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F2D78u);
        ctx->pc = 0x1F2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D70u;
        // 0x1f2d74: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2D70u, 0x1F2D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2D78u;
label_1f2d78:
    // 0x1f2d78: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x1f2d78u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_1f2d7c:
    // 0x1f2d7c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f2d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f2d80:
    // 0x1f2d80: 0x24a573f8  addiu       $a1, $a1, 0x73F8
    ctx->pc = 0x1f2d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29688));
label_1f2d84:
    // 0x1f2d84: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1f2d84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d88:
    // 0x1f2d88: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f2d8c:
    // 0x1f2d8c: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1f2d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1f2d90:
    // 0x1f2d90: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f2d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f2d94:
    // 0x1f2d94: 0x24090083  addiu       $t1, $zero, 0x83
    ctx->pc = 0x1f2d94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_1f2d98:
    // 0x1f2d98: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f2d98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f2d9c:
    // 0x1f2d9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f2d9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2da0:
    // 0x1f2da0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f2da4:
    // 0x1f2da4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f2da4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2da8:
    // 0x1f2da8: 0x40f809  jalr        $v0
label_1f2dac:
    if (ctx->pc == 0x1F2DACu) {
        ctx->pc = 0x1F2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DA8u;
        // 0x1f2dac: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2DB0u;
        goto label_1f2db0;
    }
    ctx->pc = 0x1F2DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F2DB0u);
        ctx->pc = 0x1F2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DA8u;
        // 0x1f2dac: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2DA8u, 0x1F2DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2DB0u;
label_1f2db0:
    // 0x1f2db0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f2db4:
    if (ctx->pc == 0x1F2DB4u) {
        ctx->pc = 0x1F2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DB0u;
        // 0x1f2db4: 0x3c08001f  lui         $t0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2DB8u;
        goto label_1f2db8;
    }
    ctx->pc = 0x1F2DB0u;
    {
        const bool branch_taken_0x1f2db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DB0u;
        // 0x1f2db4: 0x3c08001f  lui         $t0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2db0) {
            ctx->pc = 0x1F2DC4u;
            goto label_1f2dc4;
        }
    }
    ctx->pc = 0x1F2DB8u;
label_1f2db8:
    // 0x1f2db8: 0xc073068  jal         func_1CC1A0
label_1f2dbc:
    if (ctx->pc == 0x1F2DBCu) {
        ctx->pc = 0x1F2DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DB8u;
        // 0x1f2dbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2DC0u;
        goto label_1f2dc0;
    }
    ctx->pc = 0x1F2DB8u;
    SET_GPR_U32(ctx, 31, 0x1F2DC0u);
    ctx->pc = 0x1F2DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2DB8u;
    // 0x1f2dbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC1A0u, 0x1F2DB8u, 0x1F2DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2DC0u;
label_1f2dc0:
    // 0x1f2dc0: 0x3c08001f  lui         $t0, 0x1F
    ctx->pc = 0x1f2dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)31 << 16));
label_1f2dc4:
    // 0x1f2dc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f2dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2dc8:
    // 0x1f2dc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2dcc:
    // 0x1f2dcc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f2dccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f2dd0:
    // 0x1f2dd0: 0x25082e90  addiu       $t0, $t0, 0x2E90
    ctx->pc = 0x1f2dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11920));
label_1f2dd4:
    // 0x1f2dd4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1f2dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1f2dd8:
    // 0x1f2dd8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1f2dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f2ddc:
    // 0x1f2ddc: 0x26490050  addiu       $t1, $s2, 0x50
    ctx->pc = 0x1f2ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_1f2de0:
    // 0x1f2de0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f2de0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2de4:
    // 0x1f2de4: 0xc0730bc  jal         func_1CC2F0
label_1f2de8:
    if (ctx->pc == 0x1F2DE8u) {
        ctx->pc = 0x1F2DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DE4u;
        // 0x1f2de8: 0xae420098  sw          $v0, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2DECu;
        goto label_1f2dec;
    }
    ctx->pc = 0x1F2DE4u;
    SET_GPR_U32(ctx, 31, 0x1F2DECu);
    ctx->pc = 0x1F2DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2DE4u;
    // 0x1f2de8: 0xae420098  sw          $v0, 0x98($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2F0u, 0x1F2DE4u, 0x1F2DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2DECu;
label_1f2dec:
    // 0x1f2dec: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1f2decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1f2df0:
    // 0x1f2df0: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x1f2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_1f2df4:
    // 0x1f2df4: 0x2450ef80  addiu       $s0, $v0, -0x1080
    ctx->pc = 0x1f2df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963072));
label_1f2df8:
    // 0x1f2df8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1f2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1f2dfc:
    // 0x1f2dfc: 0xa062007c  sb          $v0, 0x7C($v1)
    ctx->pc = 0x1f2dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 124), (uint8_t)GPR_U32(ctx, 2));
label_1f2e00:
    // 0x1f2e00: 0x8e450098  lw          $a1, 0x98($s2)
    ctx->pc = 0x1f2e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_1f2e04:
    // 0x1f2e04: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f2e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f2e08:
    // 0x1f2e08: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1f2e08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1f2e0c:
    // 0x1f2e0c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1f2e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1f2e10:
    // 0x1f2e10: 0x60f809  jalr        $v1
label_1f2e14:
    if (ctx->pc == 0x1F2E14u) {
        ctx->pc = 0x1F2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E10u;
        // 0x1f2e14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2E18u;
        goto label_1f2e18;
    }
    ctx->pc = 0x1F2E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F2E18u);
        ctx->pc = 0x1F2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E10u;
        // 0x1f2e14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2E10u, 0x1F2E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2E18u;
label_1f2e18:
    // 0x1f2e18: 0xc080b0c  jal         func_202C30
label_1f2e1c:
    if (ctx->pc == 0x1F2E1Cu) {
        ctx->pc = 0x1F2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E18u;
        // 0x1f2e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2E20u;
        goto label_1f2e20;
    }
    ctx->pc = 0x1F2E18u;
    SET_GPR_U32(ctx, 31, 0x1F2E20u);
    ctx->pc = 0x1F2E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E18u;
    // 0x1f2e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C30u, 0x1F2E18u, 0x1F2E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E20u;
label_1f2e20:
    // 0x1f2e20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f2e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2e24:
    // 0x1f2e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2e28:
    // 0x1f2e28: 0xc080ad4  jal         func_202B50
label_1f2e2c:
    if (ctx->pc == 0x1F2E2Cu) {
        ctx->pc = 0x1F2E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E28u;
        // 0x1f2e2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2E30u;
        goto label_1f2e30;
    }
    ctx->pc = 0x1F2E28u;
    SET_GPR_U32(ctx, 31, 0x1F2E30u);
    ctx->pc = 0x1F2E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E28u;
    // 0x1f2e2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B50u, 0x1F2E28u, 0x1F2E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E30u;
label_1f2e30:
    // 0x1f2e30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f2e34:
    if (ctx->pc == 0x1F2E34u) {
        ctx->pc = 0x1F2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E30u;
        // 0x1f2e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2E38u;
        goto label_1f2e38;
    }
    ctx->pc = 0x1F2E30u;
    {
        const bool branch_taken_0x1f2e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E30u;
        // 0x1f2e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e30) {
            ctx->pc = 0x1F2E4Cu;
            goto label_1f2e4c;
        }
    }
    ctx->pc = 0x1F2E38u;
label_1f2e38:
    // 0x1f2e38: 0xc080b32  jal         func_202CC8
label_1f2e3c:
    if (ctx->pc == 0x1F2E3Cu) {
        ctx->pc = 0x1F2E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E38u;
        // 0x1f2e3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2E40u;
        goto label_1f2e40;
    }
    ctx->pc = 0x1F2E38u;
    SET_GPR_U32(ctx, 31, 0x1F2E40u);
    ctx->pc = 0x1F2E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E38u;
    // 0x1f2e3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202CC8u, 0x1F2E38u, 0x1F2E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E40u;
label_1f2e40:
    // 0x1f2e40: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x1f2e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_1f2e44:
    // 0x1f2e44: 0xc073266  jal         func_1CC998
label_1f2e48:
    if (ctx->pc == 0x1F2E48u) {
        ctx->pc = 0x1F2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E44u;
        // 0x1f2e48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2E4Cu;
        goto label_1f2e4c;
    }
    ctx->pc = 0x1F2E44u;
    SET_GPR_U32(ctx, 31, 0x1F2E4Cu);
    ctx->pc = 0x1F2E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E44u;
    // 0x1f2e48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC998u, 0x1F2E44u, 0x1F2E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E4Cu;
label_1f2e4c:
    // 0x1f2e4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2e50:
    // 0x1f2e50: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1f2e50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1f2e54:
    // 0x1f2e54: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1f2e54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1f2e58:
    // 0x1f2e58: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1f2e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1f2e5c:
    // 0x1f2e5c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1f2e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1f2e60:
    // 0x1f2e60: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1f2e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f2e64:
    // 0x1f2e64: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1f2e64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f2e68:
    // 0x1f2e68: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1f2e68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f2e6c:
    // 0x1f2e6c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1f2e6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f2e70:
    // 0x1f2e70: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f2e70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f2e74:
    // 0x1f2e74: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1f2e74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f2e78:
    // 0x1f2e78: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1f2e78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f2e7c:
    // 0x1f2e7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f2e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f2e80:
    // 0x1f2e80: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1f2e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1f2e84:
    // 0x1f2e84: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1f2e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f2e88:
    // 0x1f2e88: 0x3e00008  jr          $ra
label_1f2e8c:
    if (ctx->pc == 0x1F2E8Cu) {
        ctx->pc = 0x1F2E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E88u;
        // 0x1f2e8c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2E90u;
        goto label_fallthrough_0x1f2e88;
    }
    ctx->pc = 0x1F2E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E88u;
        // 0x1f2e8c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f2e88:
    ctx->pc = 0x1F2E90u;
}
