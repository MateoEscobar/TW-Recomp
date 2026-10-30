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

// Function: sub_00399D88
// Address: 0x399d88 - 0x39a2c0
void sub_00399D88_0x399d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399D88_0x399d88");
#endif

    switch (ctx->pc) {
        case 0x399d88u: goto label_399d88;
        case 0x399d8cu: goto label_399d8c;
        case 0x399d90u: goto label_399d90;
        case 0x399d94u: goto label_399d94;
        case 0x399d98u: goto label_399d98;
        case 0x399d9cu: goto label_399d9c;
        case 0x399da0u: goto label_399da0;
        case 0x399da4u: goto label_399da4;
        case 0x399da8u: goto label_399da8;
        case 0x399dacu: goto label_399dac;
        case 0x399db0u: goto label_399db0;
        case 0x399db4u: goto label_399db4;
        case 0x399db8u: goto label_399db8;
        case 0x399dbcu: goto label_399dbc;
        case 0x399dc0u: goto label_399dc0;
        case 0x399dc4u: goto label_399dc4;
        case 0x399dc8u: goto label_399dc8;
        case 0x399dccu: goto label_399dcc;
        case 0x399dd0u: goto label_399dd0;
        case 0x399dd4u: goto label_399dd4;
        case 0x399dd8u: goto label_399dd8;
        case 0x399ddcu: goto label_399ddc;
        case 0x399de0u: goto label_399de0;
        case 0x399de4u: goto label_399de4;
        case 0x399de8u: goto label_399de8;
        case 0x399decu: goto label_399dec;
        case 0x399df0u: goto label_399df0;
        case 0x399df4u: goto label_399df4;
        case 0x399df8u: goto label_399df8;
        case 0x399dfcu: goto label_399dfc;
        case 0x399e00u: goto label_399e00;
        case 0x399e04u: goto label_399e04;
        case 0x399e08u: goto label_399e08;
        case 0x399e0cu: goto label_399e0c;
        case 0x399e10u: goto label_399e10;
        case 0x399e14u: goto label_399e14;
        case 0x399e18u: goto label_399e18;
        case 0x399e1cu: goto label_399e1c;
        case 0x399e20u: goto label_399e20;
        case 0x399e24u: goto label_399e24;
        case 0x399e28u: goto label_399e28;
        case 0x399e2cu: goto label_399e2c;
        case 0x399e30u: goto label_399e30;
        case 0x399e34u: goto label_399e34;
        case 0x399e38u: goto label_399e38;
        case 0x399e3cu: goto label_399e3c;
        case 0x399e40u: goto label_399e40;
        case 0x399e44u: goto label_399e44;
        case 0x399e48u: goto label_399e48;
        case 0x399e4cu: goto label_399e4c;
        case 0x399e50u: goto label_399e50;
        case 0x399e54u: goto label_399e54;
        case 0x399e58u: goto label_399e58;
        case 0x399e5cu: goto label_399e5c;
        case 0x399e60u: goto label_399e60;
        case 0x399e64u: goto label_399e64;
        case 0x399e68u: goto label_399e68;
        case 0x399e6cu: goto label_399e6c;
        case 0x399e70u: goto label_399e70;
        case 0x399e74u: goto label_399e74;
        case 0x399e78u: goto label_399e78;
        case 0x399e7cu: goto label_399e7c;
        case 0x399e80u: goto label_399e80;
        case 0x399e84u: goto label_399e84;
        case 0x399e88u: goto label_399e88;
        case 0x399e8cu: goto label_399e8c;
        case 0x399e90u: goto label_399e90;
        case 0x399e94u: goto label_399e94;
        case 0x399e98u: goto label_399e98;
        case 0x399e9cu: goto label_399e9c;
        case 0x399ea0u: goto label_399ea0;
        case 0x399ea4u: goto label_399ea4;
        case 0x399ea8u: goto label_399ea8;
        case 0x399eacu: goto label_399eac;
        case 0x399eb0u: goto label_399eb0;
        case 0x399eb4u: goto label_399eb4;
        case 0x399eb8u: goto label_399eb8;
        case 0x399ebcu: goto label_399ebc;
        case 0x399ec0u: goto label_399ec0;
        case 0x399ec4u: goto label_399ec4;
        case 0x399ec8u: goto label_399ec8;
        case 0x399eccu: goto label_399ecc;
        case 0x399ed0u: goto label_399ed0;
        case 0x399ed4u: goto label_399ed4;
        case 0x399ed8u: goto label_399ed8;
        case 0x399edcu: goto label_399edc;
        case 0x399ee0u: goto label_399ee0;
        case 0x399ee4u: goto label_399ee4;
        case 0x399ee8u: goto label_399ee8;
        case 0x399eecu: goto label_399eec;
        case 0x399ef0u: goto label_399ef0;
        case 0x399ef4u: goto label_399ef4;
        case 0x399ef8u: goto label_399ef8;
        case 0x399efcu: goto label_399efc;
        case 0x399f00u: goto label_399f00;
        case 0x399f04u: goto label_399f04;
        case 0x399f08u: goto label_399f08;
        case 0x399f0cu: goto label_399f0c;
        case 0x399f10u: goto label_399f10;
        case 0x399f14u: goto label_399f14;
        case 0x399f18u: goto label_399f18;
        case 0x399f1cu: goto label_399f1c;
        case 0x399f20u: goto label_399f20;
        case 0x399f24u: goto label_399f24;
        case 0x399f28u: goto label_399f28;
        case 0x399f2cu: goto label_399f2c;
        case 0x399f30u: goto label_399f30;
        case 0x399f34u: goto label_399f34;
        case 0x399f38u: goto label_399f38;
        case 0x399f3cu: goto label_399f3c;
        case 0x399f40u: goto label_399f40;
        case 0x399f44u: goto label_399f44;
        case 0x399f48u: goto label_399f48;
        case 0x399f4cu: goto label_399f4c;
        case 0x399f50u: goto label_399f50;
        case 0x399f54u: goto label_399f54;
        case 0x399f58u: goto label_399f58;
        case 0x399f5cu: goto label_399f5c;
        case 0x399f60u: goto label_399f60;
        case 0x399f64u: goto label_399f64;
        case 0x399f68u: goto label_399f68;
        case 0x399f6cu: goto label_399f6c;
        case 0x399f70u: goto label_399f70;
        case 0x399f74u: goto label_399f74;
        case 0x399f78u: goto label_399f78;
        case 0x399f7cu: goto label_399f7c;
        case 0x399f80u: goto label_399f80;
        case 0x399f84u: goto label_399f84;
        case 0x399f88u: goto label_399f88;
        case 0x399f8cu: goto label_399f8c;
        case 0x399f90u: goto label_399f90;
        case 0x399f94u: goto label_399f94;
        case 0x399f98u: goto label_399f98;
        case 0x399f9cu: goto label_399f9c;
        case 0x399fa0u: goto label_399fa0;
        case 0x399fa4u: goto label_399fa4;
        case 0x399fa8u: goto label_399fa8;
        case 0x399facu: goto label_399fac;
        case 0x399fb0u: goto label_399fb0;
        case 0x399fb4u: goto label_399fb4;
        case 0x399fb8u: goto label_399fb8;
        case 0x399fbcu: goto label_399fbc;
        case 0x399fc0u: goto label_399fc0;
        case 0x399fc4u: goto label_399fc4;
        case 0x399fc8u: goto label_399fc8;
        case 0x399fccu: goto label_399fcc;
        case 0x399fd0u: goto label_399fd0;
        case 0x399fd4u: goto label_399fd4;
        case 0x399fd8u: goto label_399fd8;
        case 0x399fdcu: goto label_399fdc;
        case 0x399fe0u: goto label_399fe0;
        case 0x399fe4u: goto label_399fe4;
        case 0x399fe8u: goto label_399fe8;
        case 0x399fecu: goto label_399fec;
        case 0x399ff0u: goto label_399ff0;
        case 0x399ff4u: goto label_399ff4;
        case 0x399ff8u: goto label_399ff8;
        case 0x399ffcu: goto label_399ffc;
        case 0x39a000u: goto label_39a000;
        case 0x39a004u: goto label_39a004;
        case 0x39a008u: goto label_39a008;
        case 0x39a00cu: goto label_39a00c;
        case 0x39a010u: goto label_39a010;
        case 0x39a014u: goto label_39a014;
        case 0x39a018u: goto label_39a018;
        case 0x39a01cu: goto label_39a01c;
        case 0x39a020u: goto label_39a020;
        case 0x39a024u: goto label_39a024;
        case 0x39a028u: goto label_39a028;
        case 0x39a02cu: goto label_39a02c;
        case 0x39a030u: goto label_39a030;
        case 0x39a034u: goto label_39a034;
        case 0x39a038u: goto label_39a038;
        case 0x39a03cu: goto label_39a03c;
        case 0x39a040u: goto label_39a040;
        case 0x39a044u: goto label_39a044;
        case 0x39a048u: goto label_39a048;
        case 0x39a04cu: goto label_39a04c;
        case 0x39a050u: goto label_39a050;
        case 0x39a054u: goto label_39a054;
        case 0x39a058u: goto label_39a058;
        case 0x39a05cu: goto label_39a05c;
        case 0x39a060u: goto label_39a060;
        case 0x39a064u: goto label_39a064;
        case 0x39a068u: goto label_39a068;
        case 0x39a06cu: goto label_39a06c;
        case 0x39a070u: goto label_39a070;
        case 0x39a074u: goto label_39a074;
        case 0x39a078u: goto label_39a078;
        case 0x39a07cu: goto label_39a07c;
        case 0x39a080u: goto label_39a080;
        case 0x39a084u: goto label_39a084;
        case 0x39a088u: goto label_39a088;
        case 0x39a08cu: goto label_39a08c;
        case 0x39a090u: goto label_39a090;
        case 0x39a094u: goto label_39a094;
        case 0x39a098u: goto label_39a098;
        case 0x39a09cu: goto label_39a09c;
        case 0x39a0a0u: goto label_39a0a0;
        case 0x39a0a4u: goto label_39a0a4;
        case 0x39a0a8u: goto label_39a0a8;
        case 0x39a0acu: goto label_39a0ac;
        case 0x39a0b0u: goto label_39a0b0;
        case 0x39a0b4u: goto label_39a0b4;
        case 0x39a0b8u: goto label_39a0b8;
        case 0x39a0bcu: goto label_39a0bc;
        case 0x39a0c0u: goto label_39a0c0;
        case 0x39a0c4u: goto label_39a0c4;
        case 0x39a0c8u: goto label_39a0c8;
        case 0x39a0ccu: goto label_39a0cc;
        case 0x39a0d0u: goto label_39a0d0;
        case 0x39a0d4u: goto label_39a0d4;
        case 0x39a0d8u: goto label_39a0d8;
        case 0x39a0dcu: goto label_39a0dc;
        case 0x39a0e0u: goto label_39a0e0;
        case 0x39a0e4u: goto label_39a0e4;
        case 0x39a0e8u: goto label_39a0e8;
        case 0x39a0ecu: goto label_39a0ec;
        case 0x39a0f0u: goto label_39a0f0;
        case 0x39a0f4u: goto label_39a0f4;
        case 0x39a0f8u: goto label_39a0f8;
        case 0x39a0fcu: goto label_39a0fc;
        case 0x39a100u: goto label_39a100;
        case 0x39a104u: goto label_39a104;
        case 0x39a108u: goto label_39a108;
        case 0x39a10cu: goto label_39a10c;
        case 0x39a110u: goto label_39a110;
        case 0x39a114u: goto label_39a114;
        case 0x39a118u: goto label_39a118;
        case 0x39a11cu: goto label_39a11c;
        case 0x39a120u: goto label_39a120;
        case 0x39a124u: goto label_39a124;
        case 0x39a128u: goto label_39a128;
        case 0x39a12cu: goto label_39a12c;
        case 0x39a130u: goto label_39a130;
        case 0x39a134u: goto label_39a134;
        case 0x39a138u: goto label_39a138;
        case 0x39a13cu: goto label_39a13c;
        case 0x39a140u: goto label_39a140;
        case 0x39a144u: goto label_39a144;
        case 0x39a148u: goto label_39a148;
        case 0x39a14cu: goto label_39a14c;
        case 0x39a150u: goto label_39a150;
        case 0x39a154u: goto label_39a154;
        case 0x39a158u: goto label_39a158;
        case 0x39a15cu: goto label_39a15c;
        case 0x39a160u: goto label_39a160;
        case 0x39a164u: goto label_39a164;
        case 0x39a168u: goto label_39a168;
        case 0x39a16cu: goto label_39a16c;
        case 0x39a170u: goto label_39a170;
        case 0x39a174u: goto label_39a174;
        case 0x39a178u: goto label_39a178;
        case 0x39a17cu: goto label_39a17c;
        case 0x39a180u: goto label_39a180;
        case 0x39a184u: goto label_39a184;
        case 0x39a188u: goto label_39a188;
        case 0x39a18cu: goto label_39a18c;
        case 0x39a190u: goto label_39a190;
        case 0x39a194u: goto label_39a194;
        case 0x39a198u: goto label_39a198;
        case 0x39a19cu: goto label_39a19c;
        case 0x39a1a0u: goto label_39a1a0;
        case 0x39a1a4u: goto label_39a1a4;
        case 0x39a1a8u: goto label_39a1a8;
        case 0x39a1acu: goto label_39a1ac;
        case 0x39a1b0u: goto label_39a1b0;
        case 0x39a1b4u: goto label_39a1b4;
        case 0x39a1b8u: goto label_39a1b8;
        case 0x39a1bcu: goto label_39a1bc;
        case 0x39a1c0u: goto label_39a1c0;
        case 0x39a1c4u: goto label_39a1c4;
        case 0x39a1c8u: goto label_39a1c8;
        case 0x39a1ccu: goto label_39a1cc;
        case 0x39a1d0u: goto label_39a1d0;
        case 0x39a1d4u: goto label_39a1d4;
        case 0x39a1d8u: goto label_39a1d8;
        case 0x39a1dcu: goto label_39a1dc;
        case 0x39a1e0u: goto label_39a1e0;
        case 0x39a1e4u: goto label_39a1e4;
        case 0x39a1e8u: goto label_39a1e8;
        case 0x39a1ecu: goto label_39a1ec;
        case 0x39a1f0u: goto label_39a1f0;
        case 0x39a1f4u: goto label_39a1f4;
        case 0x39a1f8u: goto label_39a1f8;
        case 0x39a1fcu: goto label_39a1fc;
        case 0x39a200u: goto label_39a200;
        case 0x39a204u: goto label_39a204;
        case 0x39a208u: goto label_39a208;
        case 0x39a20cu: goto label_39a20c;
        case 0x39a210u: goto label_39a210;
        case 0x39a214u: goto label_39a214;
        case 0x39a218u: goto label_39a218;
        case 0x39a21cu: goto label_39a21c;
        case 0x39a220u: goto label_39a220;
        case 0x39a224u: goto label_39a224;
        case 0x39a228u: goto label_39a228;
        case 0x39a22cu: goto label_39a22c;
        case 0x39a230u: goto label_39a230;
        case 0x39a234u: goto label_39a234;
        case 0x39a238u: goto label_39a238;
        case 0x39a23cu: goto label_39a23c;
        case 0x39a240u: goto label_39a240;
        case 0x39a244u: goto label_39a244;
        case 0x39a248u: goto label_39a248;
        case 0x39a24cu: goto label_39a24c;
        case 0x39a250u: goto label_39a250;
        case 0x39a254u: goto label_39a254;
        case 0x39a258u: goto label_39a258;
        case 0x39a25cu: goto label_39a25c;
        case 0x39a260u: goto label_39a260;
        case 0x39a264u: goto label_39a264;
        case 0x39a268u: goto label_39a268;
        case 0x39a26cu: goto label_39a26c;
        case 0x39a270u: goto label_39a270;
        case 0x39a274u: goto label_39a274;
        case 0x39a278u: goto label_39a278;
        case 0x39a27cu: goto label_39a27c;
        case 0x39a280u: goto label_39a280;
        case 0x39a284u: goto label_39a284;
        case 0x39a288u: goto label_39a288;
        case 0x39a28cu: goto label_39a28c;
        case 0x39a290u: goto label_39a290;
        case 0x39a294u: goto label_39a294;
        case 0x39a298u: goto label_39a298;
        case 0x39a29cu: goto label_39a29c;
        case 0x39a2a0u: goto label_39a2a0;
        case 0x39a2a4u: goto label_39a2a4;
        case 0x39a2a8u: goto label_39a2a8;
        case 0x39a2acu: goto label_39a2ac;
        case 0x39a2b0u: goto label_39a2b0;
        case 0x39a2b4u: goto label_39a2b4;
        case 0x39a2b8u: goto label_39a2b8;
        case 0x39a2bcu: goto label_39a2bc;
        default: break;
    }

    ctx->pc = 0x399d88u;

label_399d88:
    // 0x399d88: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x399d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_399d8c:
    // 0x399d8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x399d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_399d90:
    // 0x399d90: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x399d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_399d94:
    // 0x399d94: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x399d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_399d98:
    // 0x399d98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x399d98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_399d9c:
    // 0x399d9c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x399d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_399da0:
    // 0x399da0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x399da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_399da4:
    // 0x399da4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x399da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_399da8:
    // 0x399da8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x399da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_399dac:
    // 0x399dac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x399dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_399db0:
    // 0x399db0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x399db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_399db4:
    // 0x399db4: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x399db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_399db8:
    // 0x399db8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x399db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_399dbc:
    // 0x399dbc: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x399dbcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_399dc0:
    // 0x399dc0: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x399dc0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_399dc4:
    // 0x399dc4: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x399dc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_399dc8:
    // 0x399dc8: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x399dc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_399dcc:
    // 0x399dcc: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x399dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_399dd0:
    // 0x399dd0: 0x8c64082c  lw          $a0, 0x82C($v1)
    ctx->pc = 0x399dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2092)));
label_399dd4:
    // 0x399dd4: 0x1480012b  bnez        $a0, . + 4 + (0x12B << 2)
label_399dd8:
    if (ctx->pc == 0x399DD8u) {
        ctx->pc = 0x399DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399DD4u;
        // 0x399dd8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399DDCu;
        goto label_399ddc;
    }
    ctx->pc = 0x399DD4u;
    {
        const bool branch_taken_0x399dd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x399DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399DD4u;
        // 0x399dd8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399dd4) {
            ctx->pc = 0x39A284u;
            goto label_39a284;
        }
    }
    ctx->pc = 0x399DDCu;
label_399ddc:
    // 0x399ddc: 0x96420018  lhu         $v0, 0x18($s2)
    ctx->pc = 0x399ddcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_399de0:
    // 0x399de0: 0x10400128  beqz        $v0, . + 4 + (0x128 << 2)
label_399de4:
    if (ctx->pc == 0x399DE4u) {
        ctx->pc = 0x399DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399DE0u;
        // 0x399de4: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399DE8u;
        goto label_399de8;
    }
    ctx->pc = 0x399DE0u;
    {
        const bool branch_taken_0x399de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399DE0u;
        // 0x399de4: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399de0) {
            ctx->pc = 0x39A284u;
            goto label_39a284;
        }
    }
    ctx->pc = 0x399DE8u;
label_399de8:
    // 0x399de8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x399de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399dec:
    // 0x399dec: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x399decu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399df0:
    // 0x399df0: 0xc047e6c  jal         func_11F9B0
label_399df4:
    if (ctx->pc == 0x399DF4u) {
        ctx->pc = 0x399DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399DF0u;
        // 0x399df4: 0xc457125c  lwc1        $f23, 0x125C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x399DF8u;
        goto label_399df8;
    }
    ctx->pc = 0x399DF0u;
    SET_GPR_U32(ctx, 31, 0x399DF8u);
    ctx->pc = 0x399DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399DF0u;
    // 0x399df4: 0xc457125c  lwc1        $f23, 0x125C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x399DF0u, 0x399DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399DF8u;
label_399df8:
    // 0x399df8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x399df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399dfc:
    // 0x399dfc: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_399e00:
    if (ctx->pc == 0x399E00u) {
        ctx->pc = 0x399E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399DFCu;
        // 0x399e00: 0x96450018  lhu         $a1, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399E04u;
        goto label_399e04;
    }
    ctx->pc = 0x399DFCu;
    {
        const bool branch_taken_0x399dfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x399dfc) {
            ctx->pc = 0x399E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399DFCu;
            // 0x399e00: 0x96450018  lhu         $a1, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399E30u;
            goto label_399e30;
        }
    }
    ctx->pc = 0x399E04u;
label_399e04:
    // 0x399e04: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x399e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_399e08:
    // 0x399e08: 0x84440210  lh          $a0, 0x210($v0)
    ctx->pc = 0x399e08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
label_399e0c:
    // 0x399e0c: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x399e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_399e10:
    // 0x399e10: 0x60f809  jalr        $v1
label_399e14:
    if (ctx->pc == 0x399E14u) {
        ctx->pc = 0x399E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399E10u;
        // 0x399e14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399E18u;
        goto label_399e18;
    }
    ctx->pc = 0x399E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x399E18u);
        ctx->pc = 0x399E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399E10u;
        // 0x399e14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399E10u, 0x399E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399E18u;
label_399e18:
    // 0x399e18: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x399e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_399e1c:
    // 0x399e1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x399e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_399e20:
    // 0x399e20: 0x0  nop
    ctx->pc = 0x399e20u;
    // NOP
label_399e24:
    // 0x399e24: 0x460105c0  add.s       $f23, $f0, $f1
    ctx->pc = 0x399e24u;
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_399e28:
    // 0x399e28: 0x4617bdc2  mul.s       $f23, $f23, $f23
    ctx->pc = 0x399e28u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
label_399e2c:
    // 0x399e2c: 0x96450018  lhu         $a1, 0x18($s2)
    ctx->pc = 0x399e2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_399e30:
    // 0x399e30: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x399e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_399e34:
    // 0x399e34: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x399e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_399e38:
    // 0x399e38: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x399e38u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
label_399e3c:
    // 0x399e3c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x399e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_399e40:
    // 0x399e40: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_399e44:
    if (ctx->pc == 0x399E44u) {
        ctx->pc = 0x399E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399E40u;
        // 0x399e44: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x399E48u;
        goto label_399e48;
    }
    ctx->pc = 0x399E40u;
    {
        const bool branch_taken_0x399e40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x399e40) {
            ctx->pc = 0x399E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399E40u;
            // 0x399e44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x399E48u;
            goto label_399e48;
        }
    }
    ctx->pc = 0x399E48u;
label_399e48:
    // 0x399e48: 0x28440201  slti        $a0, $v0, 0x201
    ctx->pc = 0x399e48u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)513) ? 1 : 0);
label_399e4c:
    // 0x399e4c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x399e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_399e50:
    // 0x399e50: 0xc4100a  movz        $v0, $a2, $a0
    ctx->pc = 0x399e50u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_399e54:
    // 0x399e54: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x399e54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399e58:
    // 0x399e58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x399e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_399e5c:
    // 0x399e5c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x399e5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399e60:
    // 0x399e60: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x399e60u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_399e64:
    // 0x399e64: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x399e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_399e68:
    // 0x399e68: 0xc7d5125c  lwc1        $f21, 0x125C($fp)
    ctx->pc = 0x399e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_399e6c:
    // 0x399e6c: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x399e6cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
label_399e70:
    // 0x399e70: 0x1010  mfhi        $v0
    ctx->pc = 0x399e70u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_399e74:
    // 0x399e74: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x399e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_399e78:
    // 0x399e78: 0x126200d7  beq         $s3, $v0, . + 4 + (0xD7 << 2)
label_399e7c:
    if (ctx->pc == 0x399E7Cu) {
        ctx->pc = 0x399E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399E78u;
        // 0x399e7c: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399E80u;
        goto label_399e80;
    }
    ctx->pc = 0x399E78u;
    {
        const bool branch_taken_0x399e78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x399E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399E78u;
        // 0x399e7c: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399e78) {
            ctx->pc = 0x39A1D8u;
            goto label_39a1d8;
        }
    }
    ctx->pc = 0x399E80u;
label_399e80:
    // 0x399e80: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x399e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_399e84:
    // 0x399e84: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x399e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_399e88:
    // 0x399e88: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x399e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_399e8c:
    // 0x399e8c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x399e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_399e90:
    // 0x399e90: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x399e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_399e94:
    // 0x399e94: 0x0  nop
    ctx->pc = 0x399e94u;
    // NOP
label_399e98:
    // 0x399e98: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x399e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_399e9c:
    // 0x399e9c: 0x262a818  mult        $s5, $s3, $v0
    ctx->pc = 0x399e9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_399ea0:
    // 0x399ea0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x399ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_399ea4:
    // 0x399ea4: 0x758821  addu        $s1, $v1, $s5
    ctx->pc = 0x399ea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_399ea8:
    // 0x399ea8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x399ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_399eac:
    // 0x399eac: 0x21442  srl         $v0, $v0, 17
    ctx->pc = 0x399eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 17));
label_399eb0:
    // 0x399eb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x399eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_399eb4:
    // 0x399eb4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_399eb8:
    if (ctx->pc == 0x399EB8u) {
        ctx->pc = 0x399EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399EB4u;
        // 0x399eb8: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399EBCu;
        goto label_399ebc;
    }
    ctx->pc = 0x399EB4u;
    {
        const bool branch_taken_0x399eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x399eb4) {
            ctx->pc = 0x399EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399EB4u;
            // 0x399eb8: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399F00u;
            goto label_399f00;
        }
    }
    ctx->pc = 0x399EBCu;
label_399ebc:
    // 0x399ebc: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x399ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_399ec0:
    // 0x399ec0: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x399ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_399ec4:
    // 0x399ec4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x399ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_399ec8:
    // 0x399ec8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x399ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_399ecc:
    // 0x399ecc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x399eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_399ed0:
    // 0x399ed0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x399ed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_399ed4:
    // 0x399ed4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x399ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_399ed8:
    // 0x399ed8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x399ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_399edc:
    // 0x399edc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x399edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_399ee0:
    // 0x399ee0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x399ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_399ee4:
    // 0x399ee4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x399ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_399ee8:
    // 0x399ee8: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x399ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_399eec:
    // 0x399eec: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x399eecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_399ef0:
    // 0x399ef0: 0xc04808c  jal         func_120230
label_399ef4:
    if (ctx->pc == 0x399EF4u) {
        ctx->pc = 0x399EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399EF0u;
        // 0x399ef4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399EF8u;
        goto label_399ef8;
    }
    ctx->pc = 0x399EF0u;
    SET_GPR_U32(ctx, 31, 0x399EF8u);
    ctx->pc = 0x399EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399EF0u;
    // 0x399ef4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x399EF0u, 0x399EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399EF8u;
label_399ef8:
    // 0x399ef8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x399ef8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_399efc:
    // 0x399efc: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x399efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_399f00:
    // 0x399f00: 0x51442  srl         $v0, $a1, 17
    ctx->pc = 0x399f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 17));
label_399f04:
    // 0x399f04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x399f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_399f08:
    // 0x399f08: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_399f0c:
    if (ctx->pc == 0x399F0Cu) {
        ctx->pc = 0x399F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F08u;
        // 0x399f0c: 0x51402  srl         $v0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F10u;
        goto label_399f10;
    }
    ctx->pc = 0x399F08u;
    {
        const bool branch_taken_0x399f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F08u;
        // 0x399f0c: 0x51402  srl         $v0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399f08) {
            ctx->pc = 0x39A024u;
            goto label_39a024;
        }
    }
    ctx->pc = 0x399F10u;
label_399f10:
    // 0x399f10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x399f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_399f14:
    // 0x399f14: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
label_399f18:
    if (ctx->pc == 0x399F18u) {
        ctx->pc = 0x399F1Cu;
        goto label_399f1c;
    }
    ctx->pc = 0x399F14u;
    {
        const bool branch_taken_0x399f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x399f14) {
            ctx->pc = 0x39A08Cu;
            goto label_39a08c;
        }
    }
    ctx->pc = 0x399F1Cu;
label_399f1c:
    // 0x399f1c: 0xc0e404c  jal         func_390130
label_399f20:
    if (ctx->pc == 0x399F20u) {
        ctx->pc = 0x399F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F1Cu;
        // 0x399f20: 0x86240024  lh          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F24u;
        goto label_399f24;
    }
    ctx->pc = 0x399F1Cu;
    SET_GPR_U32(ctx, 31, 0x399F24u);
    ctx->pc = 0x399F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399F1Cu;
    // 0x399f20: 0x86240024  lh          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x399F1Cu, 0x399F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399F24u;
label_399f24:
    // 0x399f24: 0xc0e57ce  jal         func_395F38
label_399f28:
    if (ctx->pc == 0x399F28u) {
        ctx->pc = 0x399F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F24u;
        // 0x399f28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F2Cu;
        goto label_399f2c;
    }
    ctx->pc = 0x399F24u;
    SET_GPR_U32(ctx, 31, 0x399F2Cu);
    ctx->pc = 0x399F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399F24u;
    // 0x399f28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x399F24u, 0x399F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399F2Cu;
label_399f2c:
    // 0x399f2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x399f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399f30:
    // 0x399f30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x399f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_399f34:
    // 0x399f34: 0xc0e65c6  jal         func_399718
label_399f38:
    if (ctx->pc == 0x399F38u) {
        ctx->pc = 0x399F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F34u;
        // 0x399f38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F3Cu;
        goto label_399f3c;
    }
    ctx->pc = 0x399F34u;
    SET_GPR_U32(ctx, 31, 0x399F3Cu);
    ctx->pc = 0x399F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399F34u;
    // 0x399f38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399718u, 0x399F34u, 0x399F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399F3Cu;
label_399f3c:
    // 0x399f3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_399f40:
    if (ctx->pc == 0x399F40u) {
        ctx->pc = 0x399F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F3Cu;
        // 0x399f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F44u;
        goto label_399f44;
    }
    ctx->pc = 0x399F3Cu;
    {
        const bool branch_taken_0x399f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F3Cu;
        // 0x399f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399f3c) {
            ctx->pc = 0x399F58u;
            goto label_399f58;
        }
    }
    ctx->pc = 0x399F44u;
label_399f44:
    // 0x399f44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x399f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_399f48:
    // 0x399f48: 0xc0e65a8  jal         func_3996A0
label_399f4c:
    if (ctx->pc == 0x399F4Cu) {
        ctx->pc = 0x399F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F48u;
        // 0x399f4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F50u;
        goto label_399f50;
    }
    ctx->pc = 0x399F48u;
    SET_GPR_U32(ctx, 31, 0x399F50u);
    ctx->pc = 0x399F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399F48u;
    // 0x399f4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3996A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3996A0u, 0x399F48u, 0x399F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399F50u;
label_399f50:
    // 0x399f50: 0x10000098  b           . + 4 + (0x98 << 2)
label_399f54:
    if (ctx->pc == 0x399F54u) {
        ctx->pc = 0x399F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F50u;
        // 0x399f54: 0x96430018  lhu         $v1, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F58u;
        goto label_399f58;
    }
    ctx->pc = 0x399F50u;
    {
        const bool branch_taken_0x399f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F50u;
        // 0x399f54: 0x96430018  lhu         $v1, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399f50) {
            ctx->pc = 0x39A1B4u;
            goto label_39a1b4;
        }
    }
    ctx->pc = 0x399F58u;
label_399f58:
    // 0x399f58: 0xc0e541e  jal         func_395078
label_399f5c:
    if (ctx->pc == 0x399F5Cu) {
        ctx->pc = 0x399F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F58u;
        // 0x399f5c: 0xc6140134  lwc1        $f20, 0x134($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F60u;
        goto label_399f60;
    }
    ctx->pc = 0x399F58u;
    SET_GPR_U32(ctx, 31, 0x399F60u);
    ctx->pc = 0x399F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399F58u;
    // 0x399f5c: 0xc6140134  lwc1        $f20, 0x134($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x395078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395078u, 0x399F58u, 0x399F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399F60u;
label_399f60:
    // 0x399f60: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_399f64:
    if (ctx->pc == 0x399F64u) {
        ctx->pc = 0x399F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F60u;
        // 0x399f64: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F68u;
        goto label_399f68;
    }
    ctx->pc = 0x399F60u;
    {
        const bool branch_taken_0x399f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F60u;
        // 0x399f64: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399f60) {
            ctx->pc = 0x39A08Cu;
            goto label_39a08c;
        }
    }
    ctx->pc = 0x399F68u;
label_399f68:
    // 0x399f68: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x399f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_399f6c:
    // 0x399f6c: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x399f6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_399f70:
    // 0x399f70: 0x21582  srl         $v0, $v0, 22
    ctx->pc = 0x399f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 22));
label_399f74:
    // 0x399f74: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x399f74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_399f78:
    // 0x399f78: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x399f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_399f7c:
    // 0x399f7c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x399f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_399f80:
    // 0x399f80: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x399f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_399f84:
    // 0x399f84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x399f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_399f88:
    // 0x399f88: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x399f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_399f8c:
    // 0x399f8c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x399f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_399f90:
    // 0x399f90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x399f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_399f94:
    // 0x399f94: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_399f98:
    if (ctx->pc == 0x399F98u) {
        ctx->pc = 0x399F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F94u;
        // 0x399f98: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F9Cu;
        goto label_399f9c;
    }
    ctx->pc = 0x399F94u;
    {
        const bool branch_taken_0x399f94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x399F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F94u;
        // 0x399f98: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x399f94) {
            ctx->pc = 0x399FA4u;
            goto label_399fa4;
        }
    }
    ctx->pc = 0x399F9Cu;
label_399f9c:
    // 0x399f9c: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
label_399fa0:
    if (ctx->pc == 0x399FA0u) {
        ctx->pc = 0x399FA4u;
        goto label_399fa4;
    }
    ctx->pc = 0x399F9Cu;
    {
        const bool branch_taken_0x399f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x399f9c) {
            ctx->pc = 0x39A08Cu;
            goto label_39a08c;
        }
    }
    ctx->pc = 0x399FA4u;
label_399fa4:
    // 0x399fa4: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x399fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_399fa8:
    // 0x399fa8: 0x0  nop
    ctx->pc = 0x399fa8u;
    // NOP
label_399fac:
    // 0x399fac: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_399fb0:
    if (ctx->pc == 0x399FB0u) {
        ctx->pc = 0x399FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FACu;
        // 0x399fb0: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399FB4u;
        goto label_399fb4;
    }
    ctx->pc = 0x399FACu;
    {
        const bool branch_taken_0x399fac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x399fac) {
            ctx->pc = 0x399FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399FACu;
            // 0x399fb0: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399FC0u;
            goto label_399fc0;
        }
    }
    ctx->pc = 0x399FB4u;
label_399fb4:
    // 0x399fb4: 0x54600018  bnel        $v1, $zero, . + 4 + (0x18 << 2)
label_399fb8:
    if (ctx->pc == 0x399FB8u) {
        ctx->pc = 0x399FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FB4u;
        // 0x399fb8: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x399FBCu;
        goto label_399fbc;
    }
    ctx->pc = 0x399FB4u;
    {
        const bool branch_taken_0x399fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x399fb4) {
            ctx->pc = 0x399FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399FB4u;
            // 0x399fb8: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A018u;
            goto label_39a018;
        }
    }
    ctx->pc = 0x399FBCu;
label_399fbc:
    // 0x399fbc: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x399fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_399fc0:
    // 0x399fc0: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x399fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_399fc4:
    // 0x399fc4: 0xc0e404c  jal         func_390130
label_399fc8:
    if (ctx->pc == 0x399FC8u) {
        ctx->pc = 0x399FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FC4u;
        // 0x399fc8: 0x86240024  lh          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399FCCu;
        goto label_399fcc;
    }
    ctx->pc = 0x399FC4u;
    SET_GPR_U32(ctx, 31, 0x399FCCu);
    ctx->pc = 0x399FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399FC4u;
    // 0x399fc8: 0x86240024  lh          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x399FC4u, 0x399FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399FCCu;
label_399fcc:
    // 0x399fcc: 0xc0e57ce  jal         func_395F38
label_399fd0:
    if (ctx->pc == 0x399FD0u) {
        ctx->pc = 0x399FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FCCu;
        // 0x399fd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399FD4u;
        goto label_399fd4;
    }
    ctx->pc = 0x399FCCu;
    SET_GPR_U32(ctx, 31, 0x399FD4u);
    ctx->pc = 0x399FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399FCCu;
    // 0x399fd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x399FCCu, 0x399FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399FD4u;
label_399fd4:
    // 0x399fd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x399fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399fd8:
    // 0x399fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x399fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_399fdc:
    // 0x399fdc: 0xc0e65c6  jal         func_399718
label_399fe0:
    if (ctx->pc == 0x399FE0u) {
        ctx->pc = 0x399FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FDCu;
        // 0x399fe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399FE4u;
        goto label_399fe4;
    }
    ctx->pc = 0x399FDCu;
    SET_GPR_U32(ctx, 31, 0x399FE4u);
    ctx->pc = 0x399FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399FDCu;
    // 0x399fe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399718u, 0x399FDCu, 0x399FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399FE4u;
label_399fe4:
    // 0x399fe4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_399fe8:
    if (ctx->pc == 0x399FE8u) {
        ctx->pc = 0x399FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FE4u;
        // 0x399fe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399FECu;
        goto label_399fec;
    }
    ctx->pc = 0x399FE4u;
    {
        const bool branch_taken_0x399fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FE4u;
        // 0x399fe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399fe4) {
            ctx->pc = 0x39A008u;
            goto label_39a008;
        }
    }
    ctx->pc = 0x399FECu;
label_399fec:
    // 0x399fec: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x399fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_399ff0:
    // 0x399ff0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_399ff4:
    if (ctx->pc == 0x399FF4u) {
        ctx->pc = 0x399FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FF0u;
        // 0x399ff4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399FF8u;
        goto label_399ff8;
    }
    ctx->pc = 0x399FF0u;
    {
        const bool branch_taken_0x399ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FF0u;
        // 0x399ff4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399ff0) {
            ctx->pc = 0x39A008u;
            goto label_39a008;
        }
    }
    ctx->pc = 0x399FF8u;
label_399ff8:
    // 0x399ff8: 0xc0e650a  jal         func_399428
label_399ffc:
    if (ctx->pc == 0x399FFCu) {
        ctx->pc = 0x399FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FF8u;
        // 0x399ffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A000u;
        goto label_39a000;
    }
    ctx->pc = 0x399FF8u;
    SET_GPR_U32(ctx, 31, 0x39A000u);
    ctx->pc = 0x399FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399FF8u;
    // 0x399ffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399428u, 0x399FF8u, 0x39A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A000u;
label_39a000:
    // 0x39a000: 0x10000022  b           . + 4 + (0x22 << 2)
label_39a004:
    if (ctx->pc == 0x39A004u) {
        ctx->pc = 0x39A008u;
        goto label_39a008;
    }
    ctx->pc = 0x39A000u;
    {
        const bool branch_taken_0x39a000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a000) {
            ctx->pc = 0x39A08Cu;
            goto label_39a08c;
        }
    }
    ctx->pc = 0x39A008u;
label_39a008:
    // 0x39a008: 0xc0e65a8  jal         func_3996A0
label_39a00c:
    if (ctx->pc == 0x39A00Cu) {
        ctx->pc = 0x39A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A008u;
        // 0x39a00c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A010u;
        goto label_39a010;
    }
    ctx->pc = 0x39A008u;
    SET_GPR_U32(ctx, 31, 0x39A010u);
    ctx->pc = 0x39A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A008u;
    // 0x39a00c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3996A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3996A0u, 0x39A008u, 0x39A010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A010u;
label_39a010:
    // 0x39a010: 0x1000001e  b           . + 4 + (0x1E << 2)
label_39a014:
    if (ctx->pc == 0x39A014u) {
        ctx->pc = 0x39A018u;
        goto label_39a018;
    }
    ctx->pc = 0x39A010u;
    {
        const bool branch_taken_0x39a010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a010) {
            ctx->pc = 0x39A08Cu;
            goto label_39a08c;
        }
    }
    ctx->pc = 0x39A018u;
label_39a018:
    // 0x39a018: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x39a018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39a01c:
    // 0x39a01c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_39a020:
    if (ctx->pc == 0x39A020u) {
        ctx->pc = 0x39A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A01Cu;
        // 0x39a020: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A024u;
        goto label_39a024;
    }
    ctx->pc = 0x39A01Cu;
    {
        const bool branch_taken_0x39a01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A01Cu;
        // 0x39a020: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a01c) {
            ctx->pc = 0x39A08Cu;
            goto label_39a08c;
        }
    }
    ctx->pc = 0x39A024u;
label_39a024:
    // 0x39a024: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x39a024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_39a028:
    // 0x39a028: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39a028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a02c:
    // 0x39a02c: 0x21582  srl         $v0, $v0, 22
    ctx->pc = 0x39a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 22));
label_39a030:
    // 0x39a030: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x39a030u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_39a034:
    // 0x39a034: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x39a034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_39a038:
    // 0x39a038: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x39a038u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_39a03c:
    // 0x39a03c: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x39a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_39a040:
    // 0x39a040: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x39a040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_39a044:
    // 0x39a044: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x39a044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_39a048:
    // 0x39a048: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39a048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39a04c:
    // 0x39a04c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x39a04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_39a050:
    // 0x39a050: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_39a054:
    if (ctx->pc == 0x39A054u) {
        ctx->pc = 0x39A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A050u;
        // 0x39a054: 0x51482  srl         $v0, $a1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A058u;
        goto label_39a058;
    }
    ctx->pc = 0x39A050u;
    {
        const bool branch_taken_0x39a050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A050u;
        // 0x39a054: 0x51482  srl         $v0, $a1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a050) {
            ctx->pc = 0x39A08Cu;
            goto label_39a08c;
        }
    }
    ctx->pc = 0x39A058u;
label_39a058:
    // 0x39a058: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39a058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39a05c:
    // 0x39a05c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_39a060:
    if (ctx->pc == 0x39A060u) {
        ctx->pc = 0x39A064u;
        goto label_39a064;
    }
    ctx->pc = 0x39A05Cu;
    {
        const bool branch_taken_0x39a05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a05c) {
            ctx->pc = 0x39A08Cu;
            goto label_39a08c;
        }
    }
    ctx->pc = 0x39A064u;
label_39a064:
    // 0x39a064: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x39a064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39a068:
    // 0x39a068: 0x0  nop
    ctx->pc = 0x39a068u;
    // NOP
label_39a06c:
    // 0x39a06c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_39a070:
    if (ctx->pc == 0x39A070u) {
        ctx->pc = 0x39A074u;
        goto label_39a074;
    }
    ctx->pc = 0x39A06Cu;
    {
        const bool branch_taken_0x39a06c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39a06c) {
            ctx->pc = 0x39A08Cu;
            goto label_39a08c;
        }
    }
    ctx->pc = 0x39A074u;
label_39a074:
    // 0x39a074: 0x4617a034  c.lt.s      $f20, $f23
    ctx->pc = 0x39a074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39a078:
    // 0x39a078: 0x0  nop
    ctx->pc = 0x39a078u;
    // NOP
label_39a07c:
    // 0x39a07c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_39a080:
    if (ctx->pc == 0x39A080u) {
        ctx->pc = 0x39A084u;
        goto label_39a084;
    }
    ctx->pc = 0x39A07Cu;
    {
        const bool branch_taken_0x39a07c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39a07c) {
            ctx->pc = 0x39A08Cu;
            goto label_39a08c;
        }
    }
    ctx->pc = 0x39A084u;
label_39a084:
    // 0x39a084: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x39a084u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_39a088:
    // 0x39a088: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x39a088u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39a08c:
    // 0x39a08c: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_39a090:
    if (ctx->pc == 0x39A090u) {
        ctx->pc = 0x39A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A08Cu;
        // 0x39a090: 0xc7c0125c  lwc1        $f0, 0x125C($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A094u;
        goto label_39a094;
    }
    ctx->pc = 0x39A08Cu;
    {
        const bool branch_taken_0x39a08c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A08Cu;
        // 0x39a090: 0xc7c0125c  lwc1        $f0, 0x125C($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a08c) {
            ctx->pc = 0x39A0B8u;
            goto label_39a0b8;
        }
    }
    ctx->pc = 0x39A094u;
label_39a094:
    // 0x39a094: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x39a094u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39a098:
    // 0x39a098: 0x0  nop
    ctx->pc = 0x39a098u;
    // NOP
label_39a09c:
    // 0x39a09c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_39a0a0:
    if (ctx->pc == 0x39A0A0u) {
        ctx->pc = 0x39A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A09Cu;
        // 0x39a0a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A0A4u;
        goto label_39a0a4;
    }
    ctx->pc = 0x39A09Cu;
    {
        const bool branch_taken_0x39a09c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A09Cu;
        // 0x39a0a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a09c) {
            ctx->pc = 0x39A0B8u;
            goto label_39a0b8;
        }
    }
    ctx->pc = 0x39A0A4u;
label_39a0a4:
    // 0x39a0a4: 0xc0e650a  jal         func_399428
label_39a0a8:
    if (ctx->pc == 0x39A0A8u) {
        ctx->pc = 0x39A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0A4u;
        // 0x39a0a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A0ACu;
        goto label_39a0ac;
    }
    ctx->pc = 0x39A0A4u;
    SET_GPR_U32(ctx, 31, 0x39A0ACu);
    ctx->pc = 0x39A0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A0A4u;
    // 0x39a0a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399428u, 0x39A0A4u, 0x39A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A0ACu;
label_39a0ac:
    // 0x39a0ac: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x39a0acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_39a0b0:
    // 0x39a0b0: 0x1000003f  b           . + 4 + (0x3F << 2)
label_39a0b4:
    if (ctx->pc == 0x39A0B4u) {
        ctx->pc = 0x39A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0B0u;
        // 0x39a0b4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A0B8u;
        goto label_39a0b8;
    }
    ctx->pc = 0x39A0B0u;
    {
        const bool branch_taken_0x39a0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0B0u;
        // 0x39a0b4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a0b0) {
            ctx->pc = 0x39A1B0u;
            goto label_39a1b0;
        }
    }
    ctx->pc = 0x39A0B8u;
label_39a0b8:
    // 0x39a0b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x39a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39a0bc:
    // 0x39a0bc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x39a0bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_39a0c0:
    // 0x39a0c0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x39a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_39a0c4:
    // 0x39a0c4: 0x40f809  jalr        $v0
label_39a0c8:
    if (ctx->pc == 0x39A0C8u) {
        ctx->pc = 0x39A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0C4u;
        // 0x39a0c8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A0CCu;
        goto label_39a0cc;
    }
    ctx->pc = 0x39A0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A0CCu);
        ctx->pc = 0x39A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0C4u;
        // 0x39a0c8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A0C4u, 0x39A0CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A0CCu;
label_39a0cc:
    // 0x39a0cc: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_39a0d0:
    if (ctx->pc == 0x39A0D0u) {
        ctx->pc = 0x39A0D4u;
        goto label_39a0d4;
    }
    ctx->pc = 0x39A0CCu;
    {
        const bool branch_taken_0x39a0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a0cc) {
            ctx->pc = 0x39A174u;
            goto label_39a174;
        }
    }
    ctx->pc = 0x39A0D4u;
label_39a0d4:
    // 0x39a0d4: 0x3c014599  lui         $at, 0x4599
    ctx->pc = 0x39a0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17817 << 16));
label_39a0d8:
    // 0x39a0d8: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x39a0d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
label_39a0dc:
    // 0x39a0dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39a0dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39a0e0:
    // 0x39a0e0: 0x0  nop
    ctx->pc = 0x39a0e0u;
    // NOP
label_39a0e4:
    // 0x39a0e4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x39a0e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39a0e8:
    // 0x39a0e8: 0x0  nop
    ctx->pc = 0x39a0e8u;
    // NOP
label_39a0ec:
    // 0x39a0ec: 0x45020031  bc1fl       . + 4 + (0x31 << 2)
label_39a0f0:
    if (ctx->pc == 0x39A0F0u) {
        ctx->pc = 0x39A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0ECu;
        // 0x39a0f0: 0x96430018  lhu         $v1, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A0F4u;
        goto label_39a0f4;
    }
    ctx->pc = 0x39A0ECu;
    {
        const bool branch_taken_0x39a0ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39a0ec) {
            ctx->pc = 0x39A0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A0ECu;
            // 0x39a0f0: 0x96430018  lhu         $v1, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A1B4u;
            goto label_39a1b4;
        }
    }
    ctx->pc = 0x39A0F4u;
label_39a0f4:
    // 0x39a0f4: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x39a0f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39a0f8:
    // 0x39a0f8: 0x0  nop
    ctx->pc = 0x39a0f8u;
    // NOP
label_39a0fc:
    // 0x39a0fc: 0x4502002d  bc1fl       . + 4 + (0x2D << 2)
label_39a100:
    if (ctx->pc == 0x39A100u) {
        ctx->pc = 0x39A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0FCu;
        // 0x39a100: 0x96430018  lhu         $v1, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A104u;
        goto label_39a104;
    }
    ctx->pc = 0x39A0FCu;
    {
        const bool branch_taken_0x39a0fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39a0fc) {
            ctx->pc = 0x39A100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A0FCu;
            // 0x39a100: 0x96430018  lhu         $v1, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A1B4u;
            goto label_39a1b4;
        }
    }
    ctx->pc = 0x39A104u;
label_39a104:
    // 0x39a104: 0x52c0002b  beql        $s6, $zero, . + 4 + (0x2B << 2)
label_39a108:
    if (ctx->pc == 0x39A108u) {
        ctx->pc = 0x39A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A104u;
        // 0x39a108: 0x96430018  lhu         $v1, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A10Cu;
        goto label_39a10c;
    }
    ctx->pc = 0x39A104u;
    {
        const bool branch_taken_0x39a104 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a104) {
            ctx->pc = 0x39A108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A104u;
            // 0x39a108: 0x96430018  lhu         $v1, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A1B4u;
            goto label_39a1b4;
        }
    }
    ctx->pc = 0x39A10Cu;
label_39a10c:
    // 0x39a10c: 0x52800029  beql        $s4, $zero, . + 4 + (0x29 << 2)
label_39a110:
    if (ctx->pc == 0x39A110u) {
        ctx->pc = 0x39A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A10Cu;
        // 0x39a110: 0x96430018  lhu         $v1, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A114u;
        goto label_39a114;
    }
    ctx->pc = 0x39A10Cu;
    {
        const bool branch_taken_0x39a10c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a10c) {
            ctx->pc = 0x39A110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A10Cu;
            // 0x39a110: 0x96430018  lhu         $v1, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A1B4u;
            goto label_39a1b4;
        }
    }
    ctx->pc = 0x39A114u;
label_39a114:
    // 0x39a114: 0xc0e404c  jal         func_390130
label_39a118:
    if (ctx->pc == 0x39A118u) {
        ctx->pc = 0x39A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A114u;
        // 0x39a118: 0x86840024  lh          $a0, 0x24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A11Cu;
        goto label_39a11c;
    }
    ctx->pc = 0x39A114u;
    SET_GPR_U32(ctx, 31, 0x39A11Cu);
    ctx->pc = 0x39A118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A114u;
    // 0x39a118: 0x86840024  lh          $a0, 0x24($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x39A114u, 0x39A11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A11Cu;
label_39a11c:
    // 0x39a11c: 0xc0e57ce  jal         func_395F38
label_39a120:
    if (ctx->pc == 0x39A120u) {
        ctx->pc = 0x39A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A11Cu;
        // 0x39a120: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A124u;
        goto label_39a124;
    }
    ctx->pc = 0x39A11Cu;
    SET_GPR_U32(ctx, 31, 0x39A124u);
    ctx->pc = 0x39A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A11Cu;
    // 0x39a120: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x39A11Cu, 0x39A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A124u;
label_39a124:
    // 0x39a124: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_39a128:
    if (ctx->pc == 0x39A128u) {
        ctx->pc = 0x39A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A124u;
        // 0x39a128: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A12Cu;
        goto label_39a12c;
    }
    ctx->pc = 0x39A124u;
    {
        const bool branch_taken_0x39a124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A124u;
        // 0x39a128: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a124) {
            ctx->pc = 0x39A148u;
            goto label_39a148;
        }
    }
    ctx->pc = 0x39A12Cu;
label_39a12c:
    // 0x39a12c: 0x8c420120  lw          $v0, 0x120($v0)
    ctx->pc = 0x39a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_39a130:
    // 0x39a130: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_39a134:
    if (ctx->pc == 0x39A134u) {
        ctx->pc = 0x39A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A130u;
        // 0x39a134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A138u;
        goto label_39a138;
    }
    ctx->pc = 0x39A130u;
    {
        const bool branch_taken_0x39a130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A130u;
        // 0x39a134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a130) {
            ctx->pc = 0x39A148u;
            goto label_39a148;
        }
    }
    ctx->pc = 0x39A138u;
label_39a138:
    // 0x39a138: 0xc0e65a8  jal         func_3996A0
label_39a13c:
    if (ctx->pc == 0x39A13Cu) {
        ctx->pc = 0x39A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A138u;
        // 0x39a13c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A140u;
        goto label_39a140;
    }
    ctx->pc = 0x39A138u;
    SET_GPR_U32(ctx, 31, 0x39A140u);
    ctx->pc = 0x39A13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A138u;
    // 0x39a13c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3996A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3996A0u, 0x39A138u, 0x39A140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A140u;
label_39a140:
    // 0x39a140: 0x10000004  b           . + 4 + (0x4 << 2)
label_39a144:
    if (ctx->pc == 0x39A144u) {
        ctx->pc = 0x39A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A140u;
        // 0x39a144: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A148u;
        goto label_39a148;
    }
    ctx->pc = 0x39A140u;
    {
        const bool branch_taken_0x39a140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A140u;
        // 0x39a144: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a140) {
            ctx->pc = 0x39A154u;
            goto label_39a154;
        }
    }
    ctx->pc = 0x39A148u;
label_39a148:
    // 0x39a148: 0xc0e650a  jal         func_399428
label_39a14c:
    if (ctx->pc == 0x39A14Cu) {
        ctx->pc = 0x39A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A148u;
        // 0x39a14c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A150u;
        goto label_39a150;
    }
    ctx->pc = 0x39A148u;
    SET_GPR_U32(ctx, 31, 0x39A150u);
    ctx->pc = 0x39A14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A148u;
    // 0x39a14c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399428u, 0x39A148u, 0x39A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A150u;
label_39a150:
    // 0x39a150: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x39a150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39a154:
    // 0x39a154: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x39a154u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_39a158:
    // 0x39a158: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x39a158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_39a15c:
    // 0x39a15c: 0xc0e6420  jal         func_399080
label_39a160:
    if (ctx->pc == 0x39A160u) {
        ctx->pc = 0x39A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A15Cu;
        // 0x39a160: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A164u;
        goto label_39a164;
    }
    ctx->pc = 0x39A15Cu;
    SET_GPR_U32(ctx, 31, 0x39A164u);
    ctx->pc = 0x39A160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A15Cu;
    // 0x39a160: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399080u, 0x39A15Cu, 0x39A164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A164u;
label_39a164:
    // 0x39a164: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x39a164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a168:
    // 0x39a168: 0xc7d5125c  lwc1        $f21, 0x125C($fp)
    ctx->pc = 0x39a168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_39a16c:
    // 0x39a16c: 0x10000010  b           . + 4 + (0x10 << 2)
label_39a170:
    if (ctx->pc == 0x39A170u) {
        ctx->pc = 0x39A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A16Cu;
        // 0x39a170: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A174u;
        goto label_39a174;
    }
    ctx->pc = 0x39A16Cu;
    {
        const bool branch_taken_0x39a16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A16Cu;
        // 0x39a170: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a16c) {
            ctx->pc = 0x39A1B0u;
            goto label_39a1b0;
        }
    }
    ctx->pc = 0x39A174u;
label_39a174:
    // 0x39a174: 0x3c014599  lui         $at, 0x4599
    ctx->pc = 0x39a174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17817 << 16));
label_39a178:
    // 0x39a178: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x39a178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
label_39a17c:
    // 0x39a17c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39a17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39a180:
    // 0x39a180: 0x0  nop
    ctx->pc = 0x39a180u;
    // NOP
label_39a184:
    // 0x39a184: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x39a184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39a188:
    // 0x39a188: 0x0  nop
    ctx->pc = 0x39a188u;
    // NOP
label_39a18c:
    // 0x39a18c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_39a190:
    if (ctx->pc == 0x39A190u) {
        ctx->pc = 0x39A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A18Cu;
        // 0x39a190: 0x96430018  lhu         $v1, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A194u;
        goto label_39a194;
    }
    ctx->pc = 0x39A18Cu;
    {
        const bool branch_taken_0x39a18c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39a18c) {
            ctx->pc = 0x39A190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A18Cu;
            // 0x39a190: 0x96430018  lhu         $v1, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A1B4u;
            goto label_39a1b4;
        }
    }
    ctx->pc = 0x39A194u;
label_39a194:
    // 0x39a194: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
label_39a198:
    if (ctx->pc == 0x39A198u) {
        ctx->pc = 0x39A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A194u;
        // 0x39a198: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A19Cu;
        goto label_39a19c;
    }
    ctx->pc = 0x39A194u;
    {
        const bool branch_taken_0x39a194 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A194u;
        // 0x39a198: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a194) {
            ctx->pc = 0x39A1B0u;
            goto label_39a1b0;
        }
    }
    ctx->pc = 0x39A19Cu;
label_39a19c:
    // 0x39a19c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x39a19cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_39a1a0:
    // 0x39a1a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39a1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39a1a4:
    // 0x39a1a4: 0xc0e6420  jal         func_399080
label_39a1a8:
    if (ctx->pc == 0x39A1A8u) {
        ctx->pc = 0x39A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1A4u;
        // 0x39a1a8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A1ACu;
        goto label_39a1ac;
    }
    ctx->pc = 0x39A1A4u;
    SET_GPR_U32(ctx, 31, 0x39A1ACu);
    ctx->pc = 0x39A1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A1A4u;
    // 0x39a1a8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399080u, 0x39A1A4u, 0x39A1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A1ACu;
label_39a1ac:
    // 0x39a1ac: 0xc7d5125c  lwc1        $f21, 0x125C($fp)
    ctx->pc = 0x39a1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_39a1b0:
    // 0x39a1b0: 0x96430018  lhu         $v1, 0x18($s2)
    ctx->pc = 0x39a1b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_39a1b4:
    // 0x39a1b4: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x39a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_39a1b8:
    // 0x39a1b8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x39a1b8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_39a1bc:
    // 0x39a1bc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_39a1c0:
    if (ctx->pc == 0x39A1C0u) {
        ctx->pc = 0x39A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1BCu;
        // 0x39a1c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A1C4u;
        goto label_39a1c4;
    }
    ctx->pc = 0x39A1BCu;
    {
        const bool branch_taken_0x39a1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a1bc) {
            ctx->pc = 0x39A1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A1BCu;
            // 0x39a1c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A1C4u;
            goto label_39a1c4;
        }
    }
    ctx->pc = 0x39A1C4u;
label_39a1c4:
    // 0x39a1c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x39a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_39a1c8:
    // 0x39a1c8: 0x2010  mfhi        $a0
    ctx->pc = 0x39a1c8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_39a1cc:
    // 0x39a1cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x39a1ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a1d0:
    // 0x39a1d0: 0x1662ff31  bne         $s3, $v0, . + 4 + (-0xCF << 2)
label_39a1d4:
    if (ctx->pc == 0x39A1D4u) {
        ctx->pc = 0x39A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1D0u;
        // 0x39a1d4: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A1D8u;
        goto label_39a1d8;
    }
    ctx->pc = 0x39A1D0u;
    {
        const bool branch_taken_0x39a1d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x39A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1D0u;
        // 0x39a1d4: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a1d0) {
            ctx->pc = 0x399E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399e98;
        }
    }
    ctx->pc = 0x39A1D8u;
label_39a1d8:
    // 0x39a1d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x39a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39a1dc:
    // 0x39a1dc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x39a1dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_39a1e0:
    // 0x39a1e0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x39a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_39a1e4:
    // 0x39a1e4: 0x40f809  jalr        $v0
label_39a1e8:
    if (ctx->pc == 0x39A1E8u) {
        ctx->pc = 0x39A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1E4u;
        // 0x39a1e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A1ECu;
        goto label_39a1ec;
    }
    ctx->pc = 0x39A1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A1ECu);
        ctx->pc = 0x39A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1E4u;
        // 0x39a1e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A1E4u, 0x39A1ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A1ECu;
label_39a1ec:
    // 0x39a1ec: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_39a1f0:
    if (ctx->pc == 0x39A1F0u) {
        ctx->pc = 0x39A1F4u;
        goto label_39a1f4;
    }
    ctx->pc = 0x39A1ECu;
    {
        const bool branch_taken_0x39a1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a1ec) {
            ctx->pc = 0x39A26Cu;
            goto label_39a26c;
        }
    }
    ctx->pc = 0x39A1F4u;
label_39a1f4:
    // 0x39a1f4: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x39a1f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39a1f8:
    // 0x39a1f8: 0x0  nop
    ctx->pc = 0x39a1f8u;
    // NOP
label_39a1fc:
    // 0x39a1fc: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_39a200:
    if (ctx->pc == 0x39A200u) {
        ctx->pc = 0x39A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1FCu;
        // 0x39a200: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A204u;
        goto label_39a204;
    }
    ctx->pc = 0x39A1FCu;
    {
        const bool branch_taken_0x39a1fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1FCu;
        // 0x39a200: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a1fc) {
            ctx->pc = 0x39A284u;
            goto label_39a284;
        }
    }
    ctx->pc = 0x39A204u;
label_39a204:
    // 0x39a204: 0x12c00020  beqz        $s6, . + 4 + (0x20 << 2)
label_39a208:
    if (ctx->pc == 0x39A208u) {
        ctx->pc = 0x39A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A204u;
        // 0x39a208: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A20Cu;
        goto label_39a20c;
    }
    ctx->pc = 0x39A204u;
    {
        const bool branch_taken_0x39a204 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A204u;
        // 0x39a208: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a204) {
            ctx->pc = 0x39A288u;
            goto label_39a288;
        }
    }
    ctx->pc = 0x39A20Cu;
label_39a20c:
    // 0x39a20c: 0x5280001f  beql        $s4, $zero, . + 4 + (0x1F << 2)
label_39a210:
    if (ctx->pc == 0x39A210u) {
        ctx->pc = 0x39A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A20Cu;
        // 0x39a210: 0x7bb200a0  lq          $s2, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A214u;
        goto label_39a214;
    }
    ctx->pc = 0x39A20Cu;
    {
        const bool branch_taken_0x39a20c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a20c) {
            ctx->pc = 0x39A210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A20Cu;
            // 0x39a210: 0x7bb200a0  lq          $s2, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A28Cu;
            goto label_39a28c;
        }
    }
    ctx->pc = 0x39A214u;
label_39a214:
    // 0x39a214: 0xc0e404c  jal         func_390130
label_39a218:
    if (ctx->pc == 0x39A218u) {
        ctx->pc = 0x39A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A214u;
        // 0x39a218: 0x86840024  lh          $a0, 0x24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A21Cu;
        goto label_39a21c;
    }
    ctx->pc = 0x39A214u;
    SET_GPR_U32(ctx, 31, 0x39A21Cu);
    ctx->pc = 0x39A218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A214u;
    // 0x39a218: 0x86840024  lh          $a0, 0x24($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x39A214u, 0x39A21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A21Cu;
label_39a21c:
    // 0x39a21c: 0xc0e57ce  jal         func_395F38
label_39a220:
    if (ctx->pc == 0x39A220u) {
        ctx->pc = 0x39A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A21Cu;
        // 0x39a220: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A224u;
        goto label_39a224;
    }
    ctx->pc = 0x39A21Cu;
    SET_GPR_U32(ctx, 31, 0x39A224u);
    ctx->pc = 0x39A220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A21Cu;
    // 0x39a220: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x39A21Cu, 0x39A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A224u;
label_39a224:
    // 0x39a224: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_39a228:
    if (ctx->pc == 0x39A228u) {
        ctx->pc = 0x39A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A224u;
        // 0x39a228: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A22Cu;
        goto label_39a22c;
    }
    ctx->pc = 0x39A224u;
    {
        const bool branch_taken_0x39a224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A224u;
        // 0x39a228: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a224) {
            ctx->pc = 0x39A24Cu;
            goto label_39a24c;
        }
    }
    ctx->pc = 0x39A22Cu;
label_39a22c:
    // 0x39a22c: 0x8c420120  lw          $v0, 0x120($v0)
    ctx->pc = 0x39a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_39a230:
    // 0x39a230: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_39a234:
    if (ctx->pc == 0x39A234u) {
        ctx->pc = 0x39A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A230u;
        // 0x39a234: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A238u;
        goto label_39a238;
    }
    ctx->pc = 0x39A230u;
    {
        const bool branch_taken_0x39a230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A230u;
        // 0x39a234: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a230) {
            ctx->pc = 0x39A248u;
            goto label_39a248;
        }
    }
    ctx->pc = 0x39A238u;
label_39a238:
    // 0x39a238: 0xc0e65a8  jal         func_3996A0
label_39a23c:
    if (ctx->pc == 0x39A23Cu) {
        ctx->pc = 0x39A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A238u;
        // 0x39a23c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A240u;
        goto label_39a240;
    }
    ctx->pc = 0x39A238u;
    SET_GPR_U32(ctx, 31, 0x39A240u);
    ctx->pc = 0x39A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A238u;
    // 0x39a23c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3996A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3996A0u, 0x39A238u, 0x39A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A240u;
label_39a240:
    // 0x39a240: 0x10000005  b           . + 4 + (0x5 << 2)
label_39a244:
    if (ctx->pc == 0x39A244u) {
        ctx->pc = 0x39A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A240u;
        // 0x39a244: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A248u;
        goto label_39a248;
    }
    ctx->pc = 0x39A240u;
    {
        const bool branch_taken_0x39a240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A240u;
        // 0x39a244: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a240) {
            ctx->pc = 0x39A258u;
            goto label_39a258;
        }
    }
    ctx->pc = 0x39A248u;
label_39a248:
    // 0x39a248: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x39a248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39a24c:
    // 0x39a24c: 0xc0e650a  jal         func_399428
label_39a250:
    if (ctx->pc == 0x39A250u) {
        ctx->pc = 0x39A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A24Cu;
        // 0x39a250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A254u;
        goto label_39a254;
    }
    ctx->pc = 0x39A24Cu;
    SET_GPR_U32(ctx, 31, 0x39A254u);
    ctx->pc = 0x39A250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A24Cu;
    // 0x39a250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399428u, 0x39A24Cu, 0x39A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A254u;
label_39a254:
    // 0x39a254: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39a254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39a258:
    // 0x39a258: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x39a258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39a25c:
    // 0x39a25c: 0xc0e6420  jal         func_399080
label_39a260:
    if (ctx->pc == 0x39A260u) {
        ctx->pc = 0x39A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A25Cu;
        // 0x39a260: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A264u;
        goto label_39a264;
    }
    ctx->pc = 0x39A25Cu;
    SET_GPR_U32(ctx, 31, 0x39A264u);
    ctx->pc = 0x39A260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A25Cu;
    // 0x39a260: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x399080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399080u, 0x39A25Cu, 0x39A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A264u;
label_39a264:
    // 0x39a264: 0x10000007  b           . + 4 + (0x7 << 2)
label_39a268:
    if (ctx->pc == 0x39A268u) {
        ctx->pc = 0x39A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A264u;
        // 0x39a268: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A26Cu;
        goto label_39a26c;
    }
    ctx->pc = 0x39A264u;
    {
        const bool branch_taken_0x39a264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A264u;
        // 0x39a268: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a264) {
            ctx->pc = 0x39A284u;
            goto label_39a284;
        }
    }
    ctx->pc = 0x39A26Cu;
label_39a26c:
    // 0x39a26c: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_39a270:
    if (ctx->pc == 0x39A270u) {
        ctx->pc = 0x39A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A26Cu;
        // 0x39a270: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A274u;
        goto label_39a274;
    }
    ctx->pc = 0x39A26Cu;
    {
        const bool branch_taken_0x39a26c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A26Cu;
        // 0x39a270: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a26c) {
            ctx->pc = 0x39A280u;
            goto label_39a280;
        }
    }
    ctx->pc = 0x39A274u;
label_39a274:
    // 0x39a274: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x39a274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39a278:
    // 0x39a278: 0xc0e6420  jal         func_399080
label_39a27c:
    if (ctx->pc == 0x39A27Cu) {
        ctx->pc = 0x39A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A278u;
        // 0x39a27c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A280u;
        goto label_39a280;
    }
    ctx->pc = 0x39A278u;
    SET_GPR_U32(ctx, 31, 0x39A280u);
    ctx->pc = 0x39A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A278u;
    // 0x39a27c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x399080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399080u, 0x39A278u, 0x39A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A280u;
label_39a280:
    // 0x39a280: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x39a280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_39a284:
    // 0x39a284: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x39a284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_39a288:
    // 0x39a288: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x39a288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_39a28c:
    // 0x39a28c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x39a28cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39a290:
    // 0x39a290: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x39a290u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39a294:
    // 0x39a294: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x39a294u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39a298:
    // 0x39a298: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x39a298u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39a29c:
    // 0x39a29c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x39a29cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39a2a0:
    // 0x39a2a0: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x39a2a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39a2a4:
    // 0x39a2a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39a2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39a2a8:
    // 0x39a2a8: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x39a2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_39a2ac:
    // 0x39a2ac: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x39a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_39a2b0:
    // 0x39a2b0: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x39a2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_39a2b4:
    // 0x39a2b4: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x39a2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39a2b8:
    // 0x39a2b8: 0x3e00008  jr          $ra
label_39a2bc:
    if (ctx->pc == 0x39A2BCu) {
        ctx->pc = 0x39A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2B8u;
        // 0x39a2bc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A2C0u;
        goto label_fallthrough_0x39a2b8;
    }
    ctx->pc = 0x39A2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2B8u;
        // 0x39a2bc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39a2b8:
    ctx->pc = 0x39A2C0u;
}
