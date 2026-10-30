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

// Function: sub_00179C30
// Address: 0x179c30 - 0x17a1b0
void sub_00179C30_0x179c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179C30_0x179c30");
#endif

    switch (ctx->pc) {
        case 0x179c30u: goto label_179c30;
        case 0x179c34u: goto label_179c34;
        case 0x179c38u: goto label_179c38;
        case 0x179c3cu: goto label_179c3c;
        case 0x179c40u: goto label_179c40;
        case 0x179c44u: goto label_179c44;
        case 0x179c48u: goto label_179c48;
        case 0x179c4cu: goto label_179c4c;
        case 0x179c50u: goto label_179c50;
        case 0x179c54u: goto label_179c54;
        case 0x179c58u: goto label_179c58;
        case 0x179c5cu: goto label_179c5c;
        case 0x179c60u: goto label_179c60;
        case 0x179c64u: goto label_179c64;
        case 0x179c68u: goto label_179c68;
        case 0x179c6cu: goto label_179c6c;
        case 0x179c70u: goto label_179c70;
        case 0x179c74u: goto label_179c74;
        case 0x179c78u: goto label_179c78;
        case 0x179c7cu: goto label_179c7c;
        case 0x179c80u: goto label_179c80;
        case 0x179c84u: goto label_179c84;
        case 0x179c88u: goto label_179c88;
        case 0x179c8cu: goto label_179c8c;
        case 0x179c90u: goto label_179c90;
        case 0x179c94u: goto label_179c94;
        case 0x179c98u: goto label_179c98;
        case 0x179c9cu: goto label_179c9c;
        case 0x179ca0u: goto label_179ca0;
        case 0x179ca4u: goto label_179ca4;
        case 0x179ca8u: goto label_179ca8;
        case 0x179cacu: goto label_179cac;
        case 0x179cb0u: goto label_179cb0;
        case 0x179cb4u: goto label_179cb4;
        case 0x179cb8u: goto label_179cb8;
        case 0x179cbcu: goto label_179cbc;
        case 0x179cc0u: goto label_179cc0;
        case 0x179cc4u: goto label_179cc4;
        case 0x179cc8u: goto label_179cc8;
        case 0x179cccu: goto label_179ccc;
        case 0x179cd0u: goto label_179cd0;
        case 0x179cd4u: goto label_179cd4;
        case 0x179cd8u: goto label_179cd8;
        case 0x179cdcu: goto label_179cdc;
        case 0x179ce0u: goto label_179ce0;
        case 0x179ce4u: goto label_179ce4;
        case 0x179ce8u: goto label_179ce8;
        case 0x179cecu: goto label_179cec;
        case 0x179cf0u: goto label_179cf0;
        case 0x179cf4u: goto label_179cf4;
        case 0x179cf8u: goto label_179cf8;
        case 0x179cfcu: goto label_179cfc;
        case 0x179d00u: goto label_179d00;
        case 0x179d04u: goto label_179d04;
        case 0x179d08u: goto label_179d08;
        case 0x179d0cu: goto label_179d0c;
        case 0x179d10u: goto label_179d10;
        case 0x179d14u: goto label_179d14;
        case 0x179d18u: goto label_179d18;
        case 0x179d1cu: goto label_179d1c;
        case 0x179d20u: goto label_179d20;
        case 0x179d24u: goto label_179d24;
        case 0x179d28u: goto label_179d28;
        case 0x179d2cu: goto label_179d2c;
        case 0x179d30u: goto label_179d30;
        case 0x179d34u: goto label_179d34;
        case 0x179d38u: goto label_179d38;
        case 0x179d3cu: goto label_179d3c;
        case 0x179d40u: goto label_179d40;
        case 0x179d44u: goto label_179d44;
        case 0x179d48u: goto label_179d48;
        case 0x179d4cu: goto label_179d4c;
        case 0x179d50u: goto label_179d50;
        case 0x179d54u: goto label_179d54;
        case 0x179d58u: goto label_179d58;
        case 0x179d5cu: goto label_179d5c;
        case 0x179d60u: goto label_179d60;
        case 0x179d64u: goto label_179d64;
        case 0x179d68u: goto label_179d68;
        case 0x179d6cu: goto label_179d6c;
        case 0x179d70u: goto label_179d70;
        case 0x179d74u: goto label_179d74;
        case 0x179d78u: goto label_179d78;
        case 0x179d7cu: goto label_179d7c;
        case 0x179d80u: goto label_179d80;
        case 0x179d84u: goto label_179d84;
        case 0x179d88u: goto label_179d88;
        case 0x179d8cu: goto label_179d8c;
        case 0x179d90u: goto label_179d90;
        case 0x179d94u: goto label_179d94;
        case 0x179d98u: goto label_179d98;
        case 0x179d9cu: goto label_179d9c;
        case 0x179da0u: goto label_179da0;
        case 0x179da4u: goto label_179da4;
        case 0x179da8u: goto label_179da8;
        case 0x179dacu: goto label_179dac;
        case 0x179db0u: goto label_179db0;
        case 0x179db4u: goto label_179db4;
        case 0x179db8u: goto label_179db8;
        case 0x179dbcu: goto label_179dbc;
        case 0x179dc0u: goto label_179dc0;
        case 0x179dc4u: goto label_179dc4;
        case 0x179dc8u: goto label_179dc8;
        case 0x179dccu: goto label_179dcc;
        case 0x179dd0u: goto label_179dd0;
        case 0x179dd4u: goto label_179dd4;
        case 0x179dd8u: goto label_179dd8;
        case 0x179ddcu: goto label_179ddc;
        case 0x179de0u: goto label_179de0;
        case 0x179de4u: goto label_179de4;
        case 0x179de8u: goto label_179de8;
        case 0x179decu: goto label_179dec;
        case 0x179df0u: goto label_179df0;
        case 0x179df4u: goto label_179df4;
        case 0x179df8u: goto label_179df8;
        case 0x179dfcu: goto label_179dfc;
        case 0x179e00u: goto label_179e00;
        case 0x179e04u: goto label_179e04;
        case 0x179e08u: goto label_179e08;
        case 0x179e0cu: goto label_179e0c;
        case 0x179e10u: goto label_179e10;
        case 0x179e14u: goto label_179e14;
        case 0x179e18u: goto label_179e18;
        case 0x179e1cu: goto label_179e1c;
        case 0x179e20u: goto label_179e20;
        case 0x179e24u: goto label_179e24;
        case 0x179e28u: goto label_179e28;
        case 0x179e2cu: goto label_179e2c;
        case 0x179e30u: goto label_179e30;
        case 0x179e34u: goto label_179e34;
        case 0x179e38u: goto label_179e38;
        case 0x179e3cu: goto label_179e3c;
        case 0x179e40u: goto label_179e40;
        case 0x179e44u: goto label_179e44;
        case 0x179e48u: goto label_179e48;
        case 0x179e4cu: goto label_179e4c;
        case 0x179e50u: goto label_179e50;
        case 0x179e54u: goto label_179e54;
        case 0x179e58u: goto label_179e58;
        case 0x179e5cu: goto label_179e5c;
        case 0x179e60u: goto label_179e60;
        case 0x179e64u: goto label_179e64;
        case 0x179e68u: goto label_179e68;
        case 0x179e6cu: goto label_179e6c;
        case 0x179e70u: goto label_179e70;
        case 0x179e74u: goto label_179e74;
        case 0x179e78u: goto label_179e78;
        case 0x179e7cu: goto label_179e7c;
        case 0x179e80u: goto label_179e80;
        case 0x179e84u: goto label_179e84;
        case 0x179e88u: goto label_179e88;
        case 0x179e8cu: goto label_179e8c;
        case 0x179e90u: goto label_179e90;
        case 0x179e94u: goto label_179e94;
        case 0x179e98u: goto label_179e98;
        case 0x179e9cu: goto label_179e9c;
        case 0x179ea0u: goto label_179ea0;
        case 0x179ea4u: goto label_179ea4;
        case 0x179ea8u: goto label_179ea8;
        case 0x179eacu: goto label_179eac;
        case 0x179eb0u: goto label_179eb0;
        case 0x179eb4u: goto label_179eb4;
        case 0x179eb8u: goto label_179eb8;
        case 0x179ebcu: goto label_179ebc;
        case 0x179ec0u: goto label_179ec0;
        case 0x179ec4u: goto label_179ec4;
        case 0x179ec8u: goto label_179ec8;
        case 0x179eccu: goto label_179ecc;
        case 0x179ed0u: goto label_179ed0;
        case 0x179ed4u: goto label_179ed4;
        case 0x179ed8u: goto label_179ed8;
        case 0x179edcu: goto label_179edc;
        case 0x179ee0u: goto label_179ee0;
        case 0x179ee4u: goto label_179ee4;
        case 0x179ee8u: goto label_179ee8;
        case 0x179eecu: goto label_179eec;
        case 0x179ef0u: goto label_179ef0;
        case 0x179ef4u: goto label_179ef4;
        case 0x179ef8u: goto label_179ef8;
        case 0x179efcu: goto label_179efc;
        case 0x179f00u: goto label_179f00;
        case 0x179f04u: goto label_179f04;
        case 0x179f08u: goto label_179f08;
        case 0x179f0cu: goto label_179f0c;
        case 0x179f10u: goto label_179f10;
        case 0x179f14u: goto label_179f14;
        case 0x179f18u: goto label_179f18;
        case 0x179f1cu: goto label_179f1c;
        case 0x179f20u: goto label_179f20;
        case 0x179f24u: goto label_179f24;
        case 0x179f28u: goto label_179f28;
        case 0x179f2cu: goto label_179f2c;
        case 0x179f30u: goto label_179f30;
        case 0x179f34u: goto label_179f34;
        case 0x179f38u: goto label_179f38;
        case 0x179f3cu: goto label_179f3c;
        case 0x179f40u: goto label_179f40;
        case 0x179f44u: goto label_179f44;
        case 0x179f48u: goto label_179f48;
        case 0x179f4cu: goto label_179f4c;
        case 0x179f50u: goto label_179f50;
        case 0x179f54u: goto label_179f54;
        case 0x179f58u: goto label_179f58;
        case 0x179f5cu: goto label_179f5c;
        case 0x179f60u: goto label_179f60;
        case 0x179f64u: goto label_179f64;
        case 0x179f68u: goto label_179f68;
        case 0x179f6cu: goto label_179f6c;
        case 0x179f70u: goto label_179f70;
        case 0x179f74u: goto label_179f74;
        case 0x179f78u: goto label_179f78;
        case 0x179f7cu: goto label_179f7c;
        case 0x179f80u: goto label_179f80;
        case 0x179f84u: goto label_179f84;
        case 0x179f88u: goto label_179f88;
        case 0x179f8cu: goto label_179f8c;
        case 0x179f90u: goto label_179f90;
        case 0x179f94u: goto label_179f94;
        case 0x179f98u: goto label_179f98;
        case 0x179f9cu: goto label_179f9c;
        case 0x179fa0u: goto label_179fa0;
        case 0x179fa4u: goto label_179fa4;
        case 0x179fa8u: goto label_179fa8;
        case 0x179facu: goto label_179fac;
        case 0x179fb0u: goto label_179fb0;
        case 0x179fb4u: goto label_179fb4;
        case 0x179fb8u: goto label_179fb8;
        case 0x179fbcu: goto label_179fbc;
        case 0x179fc0u: goto label_179fc0;
        case 0x179fc4u: goto label_179fc4;
        case 0x179fc8u: goto label_179fc8;
        case 0x179fccu: goto label_179fcc;
        case 0x179fd0u: goto label_179fd0;
        case 0x179fd4u: goto label_179fd4;
        case 0x179fd8u: goto label_179fd8;
        case 0x179fdcu: goto label_179fdc;
        case 0x179fe0u: goto label_179fe0;
        case 0x179fe4u: goto label_179fe4;
        case 0x179fe8u: goto label_179fe8;
        case 0x179fecu: goto label_179fec;
        case 0x179ff0u: goto label_179ff0;
        case 0x179ff4u: goto label_179ff4;
        case 0x179ff8u: goto label_179ff8;
        case 0x179ffcu: goto label_179ffc;
        case 0x17a000u: goto label_17a000;
        case 0x17a004u: goto label_17a004;
        case 0x17a008u: goto label_17a008;
        case 0x17a00cu: goto label_17a00c;
        case 0x17a010u: goto label_17a010;
        case 0x17a014u: goto label_17a014;
        case 0x17a018u: goto label_17a018;
        case 0x17a01cu: goto label_17a01c;
        case 0x17a020u: goto label_17a020;
        case 0x17a024u: goto label_17a024;
        case 0x17a028u: goto label_17a028;
        case 0x17a02cu: goto label_17a02c;
        case 0x17a030u: goto label_17a030;
        case 0x17a034u: goto label_17a034;
        case 0x17a038u: goto label_17a038;
        case 0x17a03cu: goto label_17a03c;
        case 0x17a040u: goto label_17a040;
        case 0x17a044u: goto label_17a044;
        case 0x17a048u: goto label_17a048;
        case 0x17a04cu: goto label_17a04c;
        case 0x17a050u: goto label_17a050;
        case 0x17a054u: goto label_17a054;
        case 0x17a058u: goto label_17a058;
        case 0x17a05cu: goto label_17a05c;
        case 0x17a060u: goto label_17a060;
        case 0x17a064u: goto label_17a064;
        case 0x17a068u: goto label_17a068;
        case 0x17a06cu: goto label_17a06c;
        case 0x17a070u: goto label_17a070;
        case 0x17a074u: goto label_17a074;
        case 0x17a078u: goto label_17a078;
        case 0x17a07cu: goto label_17a07c;
        case 0x17a080u: goto label_17a080;
        case 0x17a084u: goto label_17a084;
        case 0x17a088u: goto label_17a088;
        case 0x17a08cu: goto label_17a08c;
        case 0x17a090u: goto label_17a090;
        case 0x17a094u: goto label_17a094;
        case 0x17a098u: goto label_17a098;
        case 0x17a09cu: goto label_17a09c;
        case 0x17a0a0u: goto label_17a0a0;
        case 0x17a0a4u: goto label_17a0a4;
        case 0x17a0a8u: goto label_17a0a8;
        case 0x17a0acu: goto label_17a0ac;
        case 0x17a0b0u: goto label_17a0b0;
        case 0x17a0b4u: goto label_17a0b4;
        case 0x17a0b8u: goto label_17a0b8;
        case 0x17a0bcu: goto label_17a0bc;
        case 0x17a0c0u: goto label_17a0c0;
        case 0x17a0c4u: goto label_17a0c4;
        case 0x17a0c8u: goto label_17a0c8;
        case 0x17a0ccu: goto label_17a0cc;
        case 0x17a0d0u: goto label_17a0d0;
        case 0x17a0d4u: goto label_17a0d4;
        case 0x17a0d8u: goto label_17a0d8;
        case 0x17a0dcu: goto label_17a0dc;
        case 0x17a0e0u: goto label_17a0e0;
        case 0x17a0e4u: goto label_17a0e4;
        case 0x17a0e8u: goto label_17a0e8;
        case 0x17a0ecu: goto label_17a0ec;
        case 0x17a0f0u: goto label_17a0f0;
        case 0x17a0f4u: goto label_17a0f4;
        case 0x17a0f8u: goto label_17a0f8;
        case 0x17a0fcu: goto label_17a0fc;
        case 0x17a100u: goto label_17a100;
        case 0x17a104u: goto label_17a104;
        case 0x17a108u: goto label_17a108;
        case 0x17a10cu: goto label_17a10c;
        case 0x17a110u: goto label_17a110;
        case 0x17a114u: goto label_17a114;
        case 0x17a118u: goto label_17a118;
        case 0x17a11cu: goto label_17a11c;
        case 0x17a120u: goto label_17a120;
        case 0x17a124u: goto label_17a124;
        case 0x17a128u: goto label_17a128;
        case 0x17a12cu: goto label_17a12c;
        case 0x17a130u: goto label_17a130;
        case 0x17a134u: goto label_17a134;
        case 0x17a138u: goto label_17a138;
        case 0x17a13cu: goto label_17a13c;
        case 0x17a140u: goto label_17a140;
        case 0x17a144u: goto label_17a144;
        case 0x17a148u: goto label_17a148;
        case 0x17a14cu: goto label_17a14c;
        case 0x17a150u: goto label_17a150;
        case 0x17a154u: goto label_17a154;
        case 0x17a158u: goto label_17a158;
        case 0x17a15cu: goto label_17a15c;
        case 0x17a160u: goto label_17a160;
        case 0x17a164u: goto label_17a164;
        case 0x17a168u: goto label_17a168;
        case 0x17a16cu: goto label_17a16c;
        case 0x17a170u: goto label_17a170;
        case 0x17a174u: goto label_17a174;
        case 0x17a178u: goto label_17a178;
        case 0x17a17cu: goto label_17a17c;
        case 0x17a180u: goto label_17a180;
        case 0x17a184u: goto label_17a184;
        case 0x17a188u: goto label_17a188;
        case 0x17a18cu: goto label_17a18c;
        case 0x17a190u: goto label_17a190;
        case 0x17a194u: goto label_17a194;
        case 0x17a198u: goto label_17a198;
        case 0x17a19cu: goto label_17a19c;
        case 0x17a1a0u: goto label_17a1a0;
        case 0x17a1a4u: goto label_17a1a4;
        case 0x17a1a8u: goto label_17a1a8;
        case 0x17a1acu: goto label_17a1ac;
        default: break;
    }

    ctx->pc = 0x179c30u;

label_179c30:
    // 0x179c30: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x179c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_179c34:
    // 0x179c34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x179c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_179c38:
    // 0x179c38: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x179c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
label_179c3c:
    // 0x179c3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x179c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_179c40:
    // 0x179c40: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x179c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
label_179c44:
    // 0x179c44: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x179c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_179c48:
    // 0x179c48: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x179c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
label_179c4c:
    // 0x179c4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179c50:
    // 0x179c50: 0x7fbe0150  sq          $fp, 0x150($sp)
    ctx->pc = 0x179c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 30));
label_179c54:
    // 0x179c54: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x179c54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_179c58:
    // 0x179c58: 0xe7b90208  swc1        $f25, 0x208($sp)
    ctx->pc = 0x179c58u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_179c5c:
    // 0x179c5c: 0x315e00ff  andi        $fp, $t2, 0xFF
    ctx->pc = 0x179c5cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_179c60:
    // 0x179c60: 0xe7b601f0  swc1        $f22, 0x1F0($sp)
    ctx->pc = 0x179c60u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_179c64:
    // 0x179c64: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x179c64u;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
label_179c68:
    // 0x179c68: 0xe7b501e8  swc1        $f21, 0x1E8($sp)
    ctx->pc = 0x179c68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_179c6c:
    // 0x179c6c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x179c6cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_179c70:
    // 0x179c70: 0xafa50128  sw          $a1, 0x128($sp)
    ctx->pc = 0x179c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 5));
label_179c74:
    // 0x179c74: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x179c74u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_179c78:
    // 0x179c78: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x179c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
label_179c7c:
    // 0x179c7c: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x179c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_179c80:
    // 0x179c80: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x179c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
label_179c84:
    // 0x179c84: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x179c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
label_179c88:
    // 0x179c88: 0x7fb60170  sq          $s6, 0x170($sp)
    ctx->pc = 0x179c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 22));
label_179c8c:
    // 0x179c8c: 0x7fb70160  sq          $s7, 0x160($sp)
    ctx->pc = 0x179c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 23));
label_179c90:
    // 0x179c90: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x179c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_179c94:
    // 0x179c94: 0xe7b80200  swc1        $f24, 0x200($sp)
    ctx->pc = 0x179c94u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_179c98:
    // 0x179c98: 0xe7b701f8  swc1        $f23, 0x1F8($sp)
    ctx->pc = 0x179c98u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_179c9c:
    // 0x179c9c: 0xe7b401e0  swc1        $f20, 0x1E0($sp)
    ctx->pc = 0x179c9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_179ca0:
    // 0x179ca0: 0xafa8012c  sw          $t0, 0x12C($sp)
    ctx->pc = 0x179ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 8));
label_179ca4:
    // 0x179ca4: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_179ca8:
    if (ctx->pc == 0x179CA8u) {
        ctx->pc = 0x179CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CA4u;
        // 0x179ca8: 0xafa90130  sw          $t1, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179CACu;
        goto label_179cac;
    }
    ctx->pc = 0x179CA4u;
    {
        const bool branch_taken_0x179ca4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x179CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CA4u;
        // 0x179ca8: 0xafa90130  sw          $t1, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ca4) {
            ctx->pc = 0x179CCCu;
            goto label_179ccc;
        }
    }
    ctx->pc = 0x179CACu;
label_179cac:
    // 0x179cac: 0xc10c3ac  jal         func_430EB0
label_179cb0:
    if (ctx->pc == 0x179CB0u) {
        ctx->pc = 0x179CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CACu;
        // 0x179cb0: 0x8fa40128  lw          $a0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179CB4u;
        goto label_179cb4;
    }
    ctx->pc = 0x179CACu;
    SET_GPR_U32(ctx, 31, 0x179CB4u);
    ctx->pc = 0x179CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179CACu;
    // 0x179cb0: 0x8fa40128  lw          $a0, 0x128($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x179CACu, 0x179CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179CB4u;
label_179cb4:
    // 0x179cb4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x179cb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179cb8:
    // 0x179cb8: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
label_179cbc:
    if (ctx->pc == 0x179CBCu) {
        ctx->pc = 0x179CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CB8u;
        // 0x179cbc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179CC0u;
        goto label_179cc0;
    }
    ctx->pc = 0x179CB8u;
    {
        const bool branch_taken_0x179cb8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x179CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CB8u;
        // 0x179cbc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cb8) {
            ctx->pc = 0x179CD4u;
            goto label_179cd4;
        }
    }
    ctx->pc = 0x179CC0u;
label_179cc0:
    // 0x179cc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x179cc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_179cc4:
    // 0x179cc4: 0x10000129  b           . + 4 + (0x129 << 2)
label_179cc8:
    if (ctx->pc == 0x179CC8u) {
        ctx->pc = 0x179CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CC4u;
        // 0x179cc8: 0x7bb001d0  lq          $s0, 0x1D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179CCCu;
        goto label_179ccc;
    }
    ctx->pc = 0x179CC4u;
    {
        const bool branch_taken_0x179cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CC4u;
        // 0x179cc8: 0x7bb001d0  lq          $s0, 0x1D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cc4) {
            ctx->pc = 0x17A16Cu;
            goto label_17a16c;
        }
    }
    ctx->pc = 0x179CCCu;
label_179ccc:
    // 0x179ccc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x179cccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_179cd0:
    // 0x179cd0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x179cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_179cd4:
    // 0x179cd4: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x179cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_179cd8:
    // 0x179cd8: 0xc0616ac  jal         func_185AB0
label_179cdc:
    if (ctx->pc == 0x179CDCu) {
        ctx->pc = 0x179CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CD8u;
        // 0x179cdc: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179CE0u;
        goto label_179ce0;
    }
    ctx->pc = 0x179CD8u;
    SET_GPR_U32(ctx, 31, 0x179CE0u);
    ctx->pc = 0x179CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179CD8u;
    // 0x179cdc: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x179CD8u, 0x179CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179CE0u;
label_179ce0:
    // 0x179ce0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x179ce0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179ce4:
    // 0x179ce4: 0x92820011  lbu         $v0, 0x11($s4)
    ctx->pc = 0x179ce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 17)));
label_179ce8:
    // 0x179ce8: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
label_179cec:
    if (ctx->pc == 0x179CECu) {
        ctx->pc = 0x179CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CE8u;
        // 0x179cec: 0x8fa30130  lw          $v1, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179CF0u;
        goto label_179cf0;
    }
    ctx->pc = 0x179CE8u;
    {
        const bool branch_taken_0x179ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CE8u;
        // 0x179cec: 0x8fa30130  lw          $v1, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ce8) {
            ctx->pc = 0x179CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179cc0;
        }
    }
    ctx->pc = 0x179CF0u;
label_179cf0:
    // 0x179cf0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x179cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_179cf4:
    // 0x179cf4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x179cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_179cf8:
    // 0x179cf8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_179cfc:
    if (ctx->pc == 0x179CFCu) {
        ctx->pc = 0x179CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CF8u;
        // 0x179cfc: 0x8fa40130  lw          $a0, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179D00u;
        goto label_179d00;
    }
    ctx->pc = 0x179CF8u;
    {
        const bool branch_taken_0x179cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x179CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CF8u;
        // 0x179cfc: 0x8fa40130  lw          $a0, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cf8) {
            ctx->pc = 0x179D18u;
            goto label_179d18;
        }
    }
    ctx->pc = 0x179D00u;
label_179d00:
    // 0x179d00: 0xc060b58  jal         func_182D60
label_179d04:
    if (ctx->pc == 0x179D04u) {
        ctx->pc = 0x179D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D00u;
        // 0x179d04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179D08u;
        goto label_179d08;
    }
    ctx->pc = 0x179D00u;
    SET_GPR_U32(ctx, 31, 0x179D08u);
    ctx->pc = 0x179D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D00u;
    // 0x179d04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x179D00u, 0x179D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179D08u;
label_179d08:
    // 0x179d08: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x179d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_179d0c:
    // 0x179d0c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x179d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_179d10:
    // 0x179d10: 0x10000002  b           . + 4 + (0x2 << 2)
label_179d14:
    if (ctx->pc == 0x179D14u) {
        ctx->pc = 0x179D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D10u;
        // 0x179d14: 0xafa30134  sw          $v1, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179D18u;
        goto label_179d18;
    }
    ctx->pc = 0x179D10u;
    {
        const bool branch_taken_0x179d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D10u;
        // 0x179d14: 0xafa30134  sw          $v1, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d10) {
            ctx->pc = 0x179D1Cu;
            goto label_179d1c;
        }
    }
    ctx->pc = 0x179D18u;
label_179d18:
    // 0x179d18: 0xafa40134  sw          $a0, 0x134($sp)
    ctx->pc = 0x179d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 4));
label_179d1c:
    // 0x179d1c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x179d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_179d20:
    // 0x179d20: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x179d20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_179d24:
    // 0x179d24: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x179d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179d28:
    // 0x179d28: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x179d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_179d2c:
    // 0x179d2c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x179d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_179d30:
    // 0x179d30: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x179d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_179d34:
    // 0x179d34: 0x8fa8012c  lw          $t0, 0x12C($sp)
    ctx->pc = 0x179d34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_179d38:
    // 0x179d38: 0x46000dc0  add.s       $f23, $f1, $f0
    ctx->pc = 0x179d38u;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_179d3c:
    // 0x179d3c: 0xafb10074  sw          $s1, 0x74($sp)
    ctx->pc = 0x179d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 17));
label_179d40:
    // 0x179d40: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x179d40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179d44:
    // 0x179d44: 0xc05e656  jal         func_179958
label_179d48:
    if (ctx->pc == 0x179D48u) {
        ctx->pc = 0x179D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D44u;
        // 0x179d48: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x179D4Cu;
        goto label_179d4c;
    }
    ctx->pc = 0x179D44u;
    SET_GPR_U32(ctx, 31, 0x179D4Cu);
    ctx->pc = 0x179D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D44u;
    // 0x179d48: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x179958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179958u, 0x179D44u, 0x179D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179D4Cu;
label_179d4c:
    // 0x179d4c: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x179d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_179d50:
    // 0x179d50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_179d54:
    if (ctx->pc == 0x179D54u) {
        ctx->pc = 0x179D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D50u;
        // 0x179d54: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x179D58u;
        goto label_179d58;
    }
    ctx->pc = 0x179D50u;
    {
        const bool branch_taken_0x179d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D50u;
        // 0x179d54: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d50) {
            ctx->pc = 0x179D68u;
            goto label_179d68;
        }
    }
    ctx->pc = 0x179D58u;
label_179d58:
    // 0x179d58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x179d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_179d5c:
    // 0x179d5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x179d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_179d60:
    // 0x179d60: 0x10000009  b           . + 4 + (0x9 << 2)
label_179d64:
    if (ctx->pc == 0x179D64u) {
        ctx->pc = 0x179D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D60u;
        // 0x179d64: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x179D68u;
        goto label_179d68;
    }
    ctx->pc = 0x179D60u;
    {
        const bool branch_taken_0x179d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D60u;
        // 0x179d64: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d60) {
            ctx->pc = 0x179D88u;
            goto label_179d88;
        }
    }
    ctx->pc = 0x179D68u;
label_179d68:
    // 0x179d68: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x179d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_179d6c:
    // 0x179d6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_179d70:
    if (ctx->pc == 0x179D70u) {
        ctx->pc = 0x179D74u;
        goto label_179d74;
    }
    ctx->pc = 0x179D6Cu;
    {
        const bool branch_taken_0x179d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179d6c) {
            ctx->pc = 0x179D8Cu;
            goto label_179d8c;
        }
    }
    ctx->pc = 0x179D74u;
label_179d74:
    // 0x179d74: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x179d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_179d78:
    // 0x179d78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x179d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_179d7c:
    // 0x179d7c: 0x0  nop
    ctx->pc = 0x179d7cu;
    // NOP
label_179d80:
    // 0x179d80: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x179d80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_179d84:
    // 0x179d84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x179d84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_179d88:
    // 0x179d88: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x179d88u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_179d8c:
    // 0x179d8c: 0x12c000f5  beqz        $s6, . + 4 + (0xF5 << 2)
label_179d90:
    if (ctx->pc == 0x179D90u) {
        ctx->pc = 0x179D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D8Cu;
        // 0x179d90: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179D94u;
        goto label_179d94;
    }
    ctx->pc = 0x179D8Cu;
    {
        const bool branch_taken_0x179d8c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x179D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D8Cu;
        // 0x179d90: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d8c) {
            ctx->pc = 0x17A164u;
            goto label_17a164;
        }
    }
    ctx->pc = 0x179D94u;
label_179d94:
    // 0x179d94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x179d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_179d98:
    // 0x179d98: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x179d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_179d9c:
    // 0x179d9c: 0x32170004  andi        $s7, $s0, 0x4
    ctx->pc = 0x179d9cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_179da0:
    // 0x179da0: 0x27b50064  addiu       $s5, $sp, 0x64
    ctx->pc = 0x179da0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_179da4:
    // 0x179da4: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x179da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_179da8:
    // 0x179da8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x179da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_179dac:
    // 0x179dac: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x179dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_179db0:
    // 0x179db0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x179db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_179db4:
    // 0x179db4: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x179db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_179db8:
    // 0x179db8: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
label_179dbc:
    if (ctx->pc == 0x179DBCu) {
        ctx->pc = 0x179DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DB8u;
        // 0x179dbc: 0x90700000  lbu         $s0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179DC0u;
        goto label_179dc0;
    }
    ctx->pc = 0x179DB8u;
    {
        const bool branch_taken_0x179db8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x179DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DB8u;
        // 0x179dbc: 0x90700000  lbu         $s0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179db8) {
            ctx->pc = 0x179DD4u;
            goto label_179dd4;
        }
    }
    ctx->pc = 0x179DC0u;
label_179dc0:
    // 0x179dc0: 0x8fa7012c  lw          $a3, 0x12C($sp)
    ctx->pc = 0x179dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_179dc4:
    // 0x179dc4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x179dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_179dc8:
    // 0x179dc8: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_179dcc:
    if (ctx->pc == 0x179DCCu) {
        ctx->pc = 0x179DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DC8u;
        // 0x179dcc: 0x2610ffd0  addiu       $s0, $s0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179DD0u;
        goto label_179dd0;
    }
    ctx->pc = 0x179DC8u;
    {
        const bool branch_taken_0x179dc8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x179dc8) {
            ctx->pc = 0x179DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179DC8u;
            // 0x179dcc: 0x2610ffd0  addiu       $s0, $s0, -0x30 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179DD4u;
            goto label_179dd4;
        }
    }
    ctx->pc = 0x179DD0u;
label_179dd0:
    // 0x179dd0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x179dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_179dd4:
    // 0x179dd4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x179dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_179dd8:
    // 0x179dd8: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_179ddc:
    if (ctx->pc == 0x179DDCu) {
        ctx->pc = 0x179DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DD8u;
        // 0x179ddc: 0x240200ac  addiu       $v0, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179DE0u;
        goto label_179de0;
    }
    ctx->pc = 0x179DD8u;
    {
        const bool branch_taken_0x179dd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x179DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DD8u;
        // 0x179ddc: 0x240200ac  addiu       $v0, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179dd8) {
            ctx->pc = 0x179DE8u;
            goto label_179de8;
        }
    }
    ctx->pc = 0x179DE0u;
label_179de0:
    // 0x179de0: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
label_179de4:
    if (ctx->pc == 0x179DE4u) {
        ctx->pc = 0x179DE8u;
        goto label_179de8;
    }
    ctx->pc = 0x179DE0u;
    {
        const bool branch_taken_0x179de0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x179de0) {
            ctx->pc = 0x179E2Cu;
            goto label_179e2c;
        }
    }
    ctx->pc = 0x179DE8u;
label_179de8:
    // 0x179de8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x179de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_179dec:
    // 0x179dec: 0x12e0000b  beqz        $s7, . + 4 + (0xB << 2)
label_179df0:
    if (ctx->pc == 0x179DF0u) {
        ctx->pc = 0x179DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DECu;
        // 0x179df0: 0xc443ccb4  lwc1        $f3, -0x334C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x179DF4u;
        goto label_179df4;
    }
    ctx->pc = 0x179DECu;
    {
        const bool branch_taken_0x179dec = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x179DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DECu;
        // 0x179df0: 0xc443ccb4  lwc1        $f3, -0x334C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179dec) {
            ctx->pc = 0x179E1Cu;
            goto label_179e1c;
        }
    }
    ctx->pc = 0x179DF4u;
label_179df4:
    // 0x179df4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x179df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179df8:
    // 0x179df8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x179df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_179dfc:
    // 0x179dfc: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x179dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_179e00:
    // 0x179e00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x179e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_179e04:
    // 0x179e04: 0xc441ccac  lwc1        $f1, -0x3354($v0)
    ctx->pc = 0x179e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_179e08:
    // 0x179e08: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x179e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_179e0c:
    // 0x179e0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x179e0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_179e10:
    // 0x179e10: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x179e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_179e14:
    // 0x179e14: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_179e18:
    if (ctx->pc == 0x179E18u) {
        ctx->pc = 0x179E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E14u;
        // 0x179e18: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x179E1Cu;
        goto label_179e1c;
    }
    ctx->pc = 0x179E14u;
    {
        const bool branch_taken_0x179e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E14u;
        // 0x179e18: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e14) {
            ctx->pc = 0x17A158u;
            goto label_17a158;
        }
    }
    ctx->pc = 0x179E1Cu;
label_179e1c:
    // 0x179e1c: 0x4603b802  mul.s       $f0, $f23, $f3
    ctx->pc = 0x179e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[3]);
label_179e20:
    // 0x179e20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x179e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_179e24:
    // 0x179e24: 0x100000cc  b           . + 4 + (0xCC << 2)
label_179e28:
    if (ctx->pc == 0x179E28u) {
        ctx->pc = 0x179E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E24u;
        // 0x179e28: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x179E2Cu;
        goto label_179e2c;
    }
    ctx->pc = 0x179E24u;
    {
        const bool branch_taken_0x179e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E24u;
        // 0x179e28: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e24) {
            ctx->pc = 0x17A158u;
            goto label_17a158;
        }
    }
    ctx->pc = 0x179E2Cu;
label_179e2c:
    // 0x179e2c: 0xc060b58  jal         func_182D60
label_179e30:
    if (ctx->pc == 0x179E30u) {
        ctx->pc = 0x179E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E2Cu;
        // 0x179e30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179E34u;
        goto label_179e34;
    }
    ctx->pc = 0x179E2Cu;
    SET_GPR_U32(ctx, 31, 0x179E34u);
    ctx->pc = 0x179E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E2Cu;
    // 0x179e30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x179E2Cu, 0x179E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E34u;
label_179e34:
    // 0x179e34: 0x8fa80134  lw          $t0, 0x134($sp)
    ctx->pc = 0x179e34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_179e38:
    // 0x179e38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179e3c:
    // 0x179e3c: 0xc06078e  jal         func_181E38
label_179e40:
    if (ctx->pc == 0x179E40u) {
        ctx->pc = 0x179E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E3Cu;
        // 0x179e40: 0x1102821  addu        $a1, $t0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179E44u;
        goto label_179e44;
    }
    ctx->pc = 0x179E3Cu;
    SET_GPR_U32(ctx, 31, 0x179E44u);
    ctx->pc = 0x179E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E3Cu;
    // 0x179e40: 0x1102821  addu        $a1, $t0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x179E3Cu, 0x179E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E44u;
label_179e44:
    // 0x179e44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x179e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179e48:
    // 0x179e48: 0x6a090007  ldl         $t1, 0x7($s0)
    ctx->pc = 0x179e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_179e4c:
    // 0x179e4c: 0x6e090000  ldr         $t1, 0x0($s0)
    ctx->pc = 0x179e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_179e50:
    // 0x179e50: 0x6a02000f  ldl         $v0, 0xF($s0)
    ctx->pc = 0x179e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_179e54:
    // 0x179e54: 0x6e020008  ldr         $v0, 0x8($s0)
    ctx->pc = 0x179e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_179e58:
    // 0x179e58: 0xb3a9006b  sdl         $t1, 0x6B($sp)
    ctx->pc = 0x179e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_179e5c:
    // 0x179e5c: 0xb7a90064  sdr         $t1, 0x64($sp)
    ctx->pc = 0x179e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_179e60:
    // 0x179e60: 0xb3a20073  sdl         $v0, 0x73($sp)
    ctx->pc = 0x179e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_179e64:
    // 0x179e64: 0xb7a2006c  sdr         $v0, 0x6C($sp)
    ctx->pc = 0x179e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_179e68:
    // 0x179e68: 0xc060b58  jal         func_182D60
label_179e6c:
    if (ctx->pc == 0x179E6Cu) {
        ctx->pc = 0x179E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E68u;
        // 0x179e6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179E70u;
        goto label_179e70;
    }
    ctx->pc = 0x179E68u;
    SET_GPR_U32(ctx, 31, 0x179E70u);
    ctx->pc = 0x179E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E68u;
    // 0x179e6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x179E68u, 0x179E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E70u;
label_179e70:
    // 0x179e70: 0xc06078a  jal         func_181E28
label_179e74:
    if (ctx->pc == 0x179E74u) {
        ctx->pc = 0x179E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E70u;
        // 0x179e74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179E78u;
        goto label_179e78;
    }
    ctx->pc = 0x179E70u;
    SET_GPR_U32(ctx, 31, 0x179E78u);
    ctx->pc = 0x179E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E70u;
    // 0x179e74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E28u, 0x179E70u, 0x179E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E78u;
label_179e78:
    // 0x179e78: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x179e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_179e7c:
    // 0x179e7c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x179e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179e80:
    // 0x179e80: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_179e84:
    if (ctx->pc == 0x179E84u) {
        ctx->pc = 0x179E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E80u;
        // 0x179e84: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x179E88u;
        goto label_179e88;
    }
    ctx->pc = 0x179E80u;
    {
        const bool branch_taken_0x179e80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x179E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E80u;
        // 0x179e84: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e80) {
            ctx->pc = 0x179E9Cu;
            goto label_179e9c;
        }
    }
    ctx->pc = 0x179E88u;
label_179e88:
    // 0x179e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_179e8c:
    // 0x179e8c: 0x0  nop
    ctx->pc = 0x179e8cu;
    // NOP
label_179e90:
    // 0x179e90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x179e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_179e94:
    // 0x179e94: 0x10000009  b           . + 4 + (0x9 << 2)
label_179e98:
    if (ctx->pc == 0x179E98u) {
        ctx->pc = 0x179E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E94u;
        // 0x179e98: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x179E9Cu;
        goto label_179e9c;
    }
    ctx->pc = 0x179E94u;
    {
        const bool branch_taken_0x179e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E94u;
        // 0x179e98: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e94) {
            ctx->pc = 0x179EBCu;
            goto label_179ebc;
        }
    }
    ctx->pc = 0x179E9Cu;
label_179e9c:
    // 0x179e9c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x179e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_179ea0:
    // 0x179ea0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x179ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_179ea4:
    // 0x179ea4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_179ea8:
    // 0x179ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_179eac:
    // 0x179eac: 0x0  nop
    ctx->pc = 0x179eacu;
    // NOP
label_179eb0:
    // 0x179eb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x179eb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_179eb4:
    // 0x179eb4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x179eb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_179eb8:
    // 0x179eb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x179eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_179ebc:
    // 0x179ebc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x179ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_179ec0:
    // 0x179ec0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x179ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_179ec4:
    // 0x179ec4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x179ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_179ec8:
    // 0x179ec8: 0x0  nop
    ctx->pc = 0x179ec8u;
    // NOP
label_179ecc:
    // 0x179ecc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x179eccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_179ed0:
    // 0x179ed0: 0xc060b58  jal         func_182D60
label_179ed4:
    if (ctx->pc == 0x179ED4u) {
        ctx->pc = 0x179ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179ED0u;
        // 0x179ed4: 0xe7a00124  swc1        $f0, 0x124($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x179ED8u;
        goto label_179ed8;
    }
    ctx->pc = 0x179ED0u;
    SET_GPR_U32(ctx, 31, 0x179ED8u);
    ctx->pc = 0x179ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179ED0u;
    // 0x179ed4: 0xe7a00124  swc1        $f0, 0x124($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x179ED0u, 0x179ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179ED8u;
label_179ed8:
    // 0x179ed8: 0xc060786  jal         func_181E18
label_179edc:
    if (ctx->pc == 0x179EDCu) {
        ctx->pc = 0x179EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179ED8u;
        // 0x179edc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179EE0u;
        goto label_179ee0;
    }
    ctx->pc = 0x179ED8u;
    SET_GPR_U32(ctx, 31, 0x179EE0u);
    ctx->pc = 0x179EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179ED8u;
    // 0x179edc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E18u, 0x179ED8u, 0x179EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179EE0u;
label_179ee0:
    // 0x179ee0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x179ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_179ee4:
    // 0x179ee4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x179ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179ee8:
    // 0x179ee8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_179eec:
    if (ctx->pc == 0x179EECu) {
        ctx->pc = 0x179EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EE8u;
        // 0x179eec: 0x46010081  sub.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x179EF0u;
        goto label_179ef0;
    }
    ctx->pc = 0x179EE8u;
    {
        const bool branch_taken_0x179ee8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x179EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EE8u;
        // 0x179eec: 0x46010081  sub.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ee8) {
            ctx->pc = 0x179F04u;
            goto label_179f04;
        }
    }
    ctx->pc = 0x179EF0u;
label_179ef0:
    // 0x179ef0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x179ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_179ef4:
    // 0x179ef4: 0x0  nop
    ctx->pc = 0x179ef4u;
    // NOP
label_179ef8:
    // 0x179ef8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x179ef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_179efc:
    // 0x179efc: 0x10000009  b           . + 4 + (0x9 << 2)
label_179f00:
    if (ctx->pc == 0x179F00u) {
        ctx->pc = 0x179F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EFCu;
        // 0x179f00: 0xc6640000  lwc1        $f4, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x179F04u;
        goto label_179f04;
    }
    ctx->pc = 0x179EFCu;
    {
        const bool branch_taken_0x179efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EFCu;
        // 0x179f00: 0xc6640000  lwc1        $f4, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179efc) {
            ctx->pc = 0x179F24u;
            goto label_179f24;
        }
    }
    ctx->pc = 0x179F04u;
label_179f04:
    // 0x179f04: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x179f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_179f08:
    // 0x179f08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x179f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_179f0c:
    // 0x179f0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_179f10:
    // 0x179f10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x179f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_179f14:
    // 0x179f14: 0x0  nop
    ctx->pc = 0x179f14u;
    // NOP
label_179f18:
    // 0x179f18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x179f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_179f1c:
    // 0x179f1c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x179f1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_179f20:
    // 0x179f20: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x179f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_179f24:
    // 0x179f24: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x179f24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_179f28:
    // 0x179f28: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x179f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179f2c:
    // 0x179f2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x179f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_179f30:
    // 0x179f30: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x179f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_179f34:
    // 0x179f34: 0x0  nop
    ctx->pc = 0x179f34u;
    // NOP
label_179f38:
    // 0x179f38: 0x0  nop
    ctx->pc = 0x179f38u;
    // NOP
label_179f3c:
    // 0x179f3c: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x179f3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
label_179f40:
    // 0x179f40: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x179f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_179f44:
    // 0x179f44: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x179f44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_179f48:
    // 0x179f48: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x179f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_179f4c:
    // 0x179f4c: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x179f4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_179f50:
    // 0x179f50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x179f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_179f54:
    // 0x179f54: 0x46030d00  add.s       $f20, $f1, $f3
    ctx->pc = 0x179f54u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_179f58:
    // 0x179f58: 0x16e00002  bnez        $s7, . + 4 + (0x2 << 2)
label_179f5c:
    if (ctx->pc == 0x179F5Cu) {
        ctx->pc = 0x179F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F58u;
        // 0x179f5c: 0xe7a10120  swc1        $f1, 0x120($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x179F60u;
        goto label_179f60;
    }
    ctx->pc = 0x179F58u;
    {
        const bool branch_taken_0x179f58 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x179F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F58u;
        // 0x179f5c: 0xe7a10120  swc1        $f1, 0x120($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f58) {
            ctx->pc = 0x179F64u;
            goto label_179f64;
        }
    }
    ctx->pc = 0x179F60u;
label_179f60:
    // 0x179f60: 0x46032500  add.s       $f20, $f4, $f3
    ctx->pc = 0x179f60u;
    ctx->f[20] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_179f64:
    // 0x179f64: 0x4605a002  mul.s       $f0, $f20, $f5
    ctx->pc = 0x179f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
label_179f68:
    // 0x179f68: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x179f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_179f6c:
    // 0x179f6c: 0x4618b034  c.lt.s      $f22, $f24
    ctx->pc = 0x179f6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_179f70:
    // 0x179f70: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x179f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_179f74:
    // 0x179f74: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x179f74u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_179f78:
    // 0x179f78: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x179f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_179f7c:
    // 0x179f7c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x179f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_179f80:
    // 0x179f80: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_179f84:
    if (ctx->pc == 0x179F84u) {
        ctx->pc = 0x179F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F80u;
        // 0x179f84: 0xe618000c  swc1        $f24, 0xC($s0) (Delay Slot)
        { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x179F88u;
        goto label_179f88;
    }
    ctx->pc = 0x179F80u;
    {
        const bool branch_taken_0x179f80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x179F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F80u;
        // 0x179f84: 0xe618000c  swc1        $f24, 0xC($s0) (Delay Slot)
        { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f80) {
            ctx->pc = 0x179FE0u;
            goto label_179fe0;
        }
    }
    ctx->pc = 0x179F88u;
label_179f88:
    // 0x179f88: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x179f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179f8c:
    // 0x179f8c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x179f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_179f90:
    // 0x179f90: 0x46160042  mul.s       $f1, $f0, $f22
    ctx->pc = 0x179f90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_179f94:
    // 0x179f94: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x179f94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_179f98:
    // 0x179f98: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x179f98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_179f9c:
    // 0x179f9c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x179f9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_179fa0:
    // 0x179fa0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x179fa0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_179fa4:
    // 0x179fa4: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x179fa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_179fa8:
    // 0x179fa8: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x179fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179fac:
    // 0x179fac: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x179facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_179fb0:
    // 0x179fb0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x179fb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_179fb4:
    // 0x179fb4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x179fb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_179fb8:
    // 0x179fb8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x179fb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_179fbc:
    // 0x179fbc: 0xe6a1000c  swc1        $f1, 0xC($s5)
    ctx->pc = 0x179fbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_179fc0:
    // 0x179fc0: 0x6ba6006b  ldl         $a2, 0x6B($sp)
    ctx->pc = 0x179fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_179fc4:
    // 0x179fc4: 0x6fa60064  ldr         $a2, 0x64($sp)
    ctx->pc = 0x179fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_179fc8:
    // 0x179fc8: 0x6ba70073  ldl         $a3, 0x73($sp)
    ctx->pc = 0x179fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_179fcc:
    // 0x179fcc: 0x6fa7006c  ldr         $a3, 0x6C($sp)
    ctx->pc = 0x179fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_179fd0:
    // 0x179fd0: 0xb3a6006b  sdl         $a2, 0x6B($sp)
    ctx->pc = 0x179fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_179fd4:
    // 0x179fd4: 0xb7a60064  sdr         $a2, 0x64($sp)
    ctx->pc = 0x179fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_179fd8:
    // 0x179fd8: 0xb3a70073  sdl         $a3, 0x73($sp)
    ctx->pc = 0x179fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_179fdc:
    // 0x179fdc: 0xb7a7006c  sdr         $a3, 0x6C($sp)
    ctx->pc = 0x179fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_179fe0:
    // 0x179fe0: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x179fe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_179fe4:
    // 0x179fe4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x179fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_179fe8:
    // 0x179fe8: 0x8c66cdb4  lw          $a2, -0x324C($v1)
    ctx->pc = 0x179fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_179fec:
    // 0x179fec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179ff0:
    // 0x179ff0: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x179ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_179ff4:
    // 0x179ff4: 0x4614ad40  add.s       $f21, $f21, $f20
    ctx->pc = 0x179ff4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_179ff8:
    // 0x179ff8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x179ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_179ffc:
    // 0x179ffc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x179ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_17a000:
    // 0x17a000: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x17a000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_17a004:
    // 0x17a004: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x17a004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_17a008:
    // 0x17a008: 0x60f809  jalr        $v1
label_17a00c:
    if (ctx->pc == 0x17A00Cu) {
        ctx->pc = 0x17A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A008u;
        // 0x17a00c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A010u;
        goto label_17a010;
    }
    ctx->pc = 0x17A008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17A010u);
        ctx->pc = 0x17A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A008u;
        // 0x17a00c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A008u, 0x17A010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A010u;
label_17a010:
    // 0x17a010: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x17a010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_17a014:
    // 0x17a014: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x17a014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_17a018:
    // 0x17a018: 0x8c87cdb4  lw          $a3, -0x324C($a0)
    ctx->pc = 0x17a018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954420)));
label_17a01c:
    // 0x17a01c: 0x27a60124  addiu       $a2, $sp, 0x124
    ctx->pc = 0x17a01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_17a020:
    // 0x17a020: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x17a020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_17a024:
    // 0x17a024: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x17a024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_17a028:
    // 0x17a028: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x17a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_17a02c:
    // 0x17a02c: 0x60f809  jalr        $v1
label_17a030:
    if (ctx->pc == 0x17A030u) {
        ctx->pc = 0x17A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A02Cu;
        // 0x17a030: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A034u;
        goto label_17a034;
    }
    ctx->pc = 0x17A02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17A034u);
        ctx->pc = 0x17A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A02Cu;
        // 0x17a030: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A02Cu, 0x17A034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A034u;
label_17a034:
    // 0x17a034: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x17a034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a038:
    // 0x17a038: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x17a038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_17a03c:
    // 0x17a03c: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x17a03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17a040:
    // 0x17a040: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17a040u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_17a044:
    // 0x17a044: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x17a044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17a048:
    // 0x17a048: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x17a048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17a04c:
    // 0x17a04c: 0xc7a40124  lwc1        $f4, 0x124($sp)
    ctx->pc = 0x17a04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_17a050:
    // 0x17a050: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x17a050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_17a054:
    // 0x17a054: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x17a054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_17a058:
    // 0x17a058: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x17a058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_17a05c:
    // 0x17a05c: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x17a05cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_17a060:
    // 0x17a060: 0x13c0003a  beqz        $fp, . + 4 + (0x3A << 2)
label_17a064:
    if (ctx->pc == 0x17A064u) {
        ctx->pc = 0x17A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A060u;
        // 0x17a064: 0xe7a40054  swc1        $f4, 0x54($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A068u;
        goto label_17a068;
    }
    ctx->pc = 0x17A060u;
    {
        const bool branch_taken_0x17a060 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A060u;
        // 0x17a064: 0xe7a40054  swc1        $f4, 0x54($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a060) {
            ctx->pc = 0x17A14Cu;
            goto label_17a14c;
        }
    }
    ctx->pc = 0x17A068u;
label_17a068:
    // 0x17a068: 0x449ea000  mtc1        $fp, $f20
    ctx->pc = 0x17a068u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_17a06c:
    // 0x17a06c: 0x0  nop
    ctx->pc = 0x17a06cu;
    // NOP
label_17a070:
    // 0x17a070: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x17a070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_17a074:
    // 0x17a074: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x17a074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_17a078:
    // 0x17a078: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x17a078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17a07c:
    // 0x17a07c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x17a07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17a080:
    // 0x17a080: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x17a080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_17a084:
    // 0x17a084: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x17a084u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17a088:
    // 0x17a088: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x17a088u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_17a08c:
    // 0x17a08c: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x17a08cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_17a090:
    // 0x17a090: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x17a090u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
label_17a094:
    // 0x17a094: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x17a094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_17a098:
    // 0x17a098: 0x1450fffa  bne         $v0, $s0, . + 4 + (-0x6 << 2)
label_17a09c:
    if (ctx->pc == 0x17A09Cu) {
        ctx->pc = 0x17A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A098u;
        // 0x17a09c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A0A0u;
        goto label_17a0a0;
    }
    ctx->pc = 0x17A098u;
    {
        const bool branch_taken_0x17a098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x17A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A098u;
        // 0x17a09c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a098) {
            ctx->pc = 0x17A084u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a084;
        }
    }
    ctx->pc = 0x17A0A0u;
label_17a0a0:
    // 0x17a0a0: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x17a0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17a0a4:
    // 0x17a0a4: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x17a0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17a0a8:
    // 0x17a0a8: 0x3c013b23  lui         $at, 0x3B23
    ctx->pc = 0x17a0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15139 << 16));
label_17a0ac:
    // 0x17a0ac: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17a0acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_17a0b0:
    // 0x17a0b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17a0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17a0b4:
    // 0x17a0b4: 0x3c013b83  lui         $at, 0x3B83
    ctx->pc = 0x17a0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15235 << 16));
label_17a0b8:
    // 0x17a0b8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x17a0b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_17a0bc:
    // 0x17a0bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17a0bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17a0c0:
    // 0x17a0c0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x17a0c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_17a0c4:
    // 0x17a0c4: 0x8c86cdb4  lw          $a2, -0x324C($a0)
    ctx->pc = 0x17a0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954420)));
label_17a0c8:
    // 0x17a0c8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x17a0c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_17a0cc:
    // 0x17a0cc: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x17a0ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_17a0d0:
    // 0x17a0d0: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x17a0d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_17a0d4:
    // 0x17a0d4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x17a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_17a0d8:
    // 0x17a0d8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x17a0d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_17a0dc:
    // 0x17a0dc: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x17a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_17a0e0:
    // 0x17a0e0: 0x60f809  jalr        $v1
label_17a0e4:
    if (ctx->pc == 0x17A0E4u) {
        ctx->pc = 0x17A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0E0u;
        // 0x17a0e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A0E8u;
        goto label_17a0e8;
    }
    ctx->pc = 0x17A0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17A0E8u);
        ctx->pc = 0x17A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0E0u;
        // 0x17a0e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A0E0u, 0x17A0E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A0E8u;
label_17a0e8:
    // 0x17a0e8: 0x93a20077  lbu         $v0, 0x77($sp)
    ctx->pc = 0x17a0e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 119)));
label_17a0ec:
    // 0x17a0ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17a0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17a0f0:
    // 0x17a0f0: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x17a0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_17a0f4:
    // 0x17a0f4: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x17a0f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
label_17a0f8:
    // 0x17a0f8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17a0f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17a0fc:
    // 0x17a0fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a100:
    // 0x17a100: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x17a100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_17a104:
    // 0x17a104: 0x0  nop
    ctx->pc = 0x17a104u;
    // NOP
label_17a108:
    // 0x17a108: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x17a108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_17a10c:
    // 0x17a10c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x17a10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a110:
    // 0x17a110: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x17a110u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_17a114:
    // 0x17a114: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x17a114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17a118:
    // 0x17a118: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17a118u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_17a11c:
    // 0x17a11c: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x17a11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17a120:
    // 0x17a120: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x17a120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_17a124:
    // 0x17a124: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x17a124u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_17a128:
    // 0x17a128: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x17a128u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_17a12c:
    // 0x17a12c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x17a12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_17a130:
    // 0x17a130: 0xa3a00116  sb          $zero, 0x116($sp)
    ctx->pc = 0x17a130u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 278), (uint8_t)GPR_U32(ctx, 0));
label_17a134:
    // 0x17a134: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17a134u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_17a138:
    // 0x17a138: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17a138u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_17a13c:
    // 0x17a13c: 0xa3a00115  sb          $zero, 0x115($sp)
    ctx->pc = 0x17a13cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 277), (uint8_t)GPR_U32(ctx, 0));
label_17a140:
    // 0x17a140: 0xa3a00114  sb          $zero, 0x114($sp)
    ctx->pc = 0x17a140u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 276), (uint8_t)GPR_U32(ctx, 0));
label_17a144:
    // 0x17a144: 0xc060b78  jal         func_182DE0
label_17a148:
    if (ctx->pc == 0x17A148u) {
        ctx->pc = 0x17A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A144u;
        // 0x17a148: 0xa3a20117  sb          $v0, 0x117($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 279), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A14Cu;
        goto label_17a14c;
    }
    ctx->pc = 0x17A144u;
    SET_GPR_U32(ctx, 31, 0x17A14Cu);
    ctx->pc = 0x17A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A144u;
    // 0x17a148: 0xa3a20117  sb          $v0, 0x117($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 279), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x17A144u, 0x17A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A14Cu;
label_17a14c:
    // 0x17a14c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a150:
    // 0x17a150: 0xc060b78  jal         func_182DE0
label_17a154:
    if (ctx->pc == 0x17A154u) {
        ctx->pc = 0x17A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A150u;
        // 0x17a154: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A158u;
        goto label_17a158;
    }
    ctx->pc = 0x17A150u;
    SET_GPR_U32(ctx, 31, 0x17A158u);
    ctx->pc = 0x17A154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A150u;
    // 0x17a154: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x17A150u, 0x17A158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A158u;
label_17a158:
    // 0x17a158: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x17a158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_17a15c:
    // 0x17a15c: 0x5440ff12  bnel        $v0, $zero, . + 4 + (-0xEE << 2)
label_17a160:
    if (ctx->pc == 0x17A160u) {
        ctx->pc = 0x17A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A15Cu;
        // 0x17a160: 0x8fa50128  lw          $a1, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A164u;
        goto label_17a164;
    }
    ctx->pc = 0x17A15Cu;
    {
        const bool branch_taken_0x17a15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a15c) {
            ctx->pc = 0x17A160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A15Cu;
            // 0x17a160: 0x8fa50128  lw          $a1, 0x128($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179da8;
        }
    }
    ctx->pc = 0x17A164u;
label_17a164:
    // 0x17a164: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x17a164u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_17a168:
    // 0x17a168: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x17a168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_17a16c:
    // 0x17a16c: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x17a16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_17a170:
    // 0x17a170: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x17a170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_17a174:
    // 0x17a174: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x17a174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_17a178:
    // 0x17a178: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x17a178u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_17a17c:
    // 0x17a17c: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x17a17cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_17a180:
    // 0x17a180: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x17a180u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_17a184:
    // 0x17a184: 0x7bb70160  lq          $s7, 0x160($sp)
    ctx->pc = 0x17a184u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_17a188:
    // 0x17a188: 0x7bbe0150  lq          $fp, 0x150($sp)
    ctx->pc = 0x17a188u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_17a18c:
    // 0x17a18c: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x17a18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_17a190:
    // 0x17a190: 0xc7b90208  lwc1        $f25, 0x208($sp)
    ctx->pc = 0x17a190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_17a194:
    // 0x17a194: 0xc7b80200  lwc1        $f24, 0x200($sp)
    ctx->pc = 0x17a194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_17a198:
    // 0x17a198: 0xc7b701f8  lwc1        $f23, 0x1F8($sp)
    ctx->pc = 0x17a198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_17a19c:
    // 0x17a19c: 0xc7b601f0  lwc1        $f22, 0x1F0($sp)
    ctx->pc = 0x17a19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17a1a0:
    // 0x17a1a0: 0xc7b501e8  lwc1        $f21, 0x1E8($sp)
    ctx->pc = 0x17a1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17a1a4:
    // 0x17a1a4: 0xc7b401e0  lwc1        $f20, 0x1E0($sp)
    ctx->pc = 0x17a1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17a1a8:
    // 0x17a1a8: 0x3e00008  jr          $ra
label_17a1ac:
    if (ctx->pc == 0x17A1ACu) {
        ctx->pc = 0x17A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1A8u;
        // 0x17a1ac: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A1B0u;
        goto label_fallthrough_0x17a1a8;
    }
    ctx->pc = 0x17A1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1A8u;
        // 0x17a1ac: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17a1a8:
    ctx->pc = 0x17A1B0u;
}
