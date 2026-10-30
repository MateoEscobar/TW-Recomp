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

// Function: sub_00249CB0
// Address: 0x249cb0 - 0x24a230
void sub_00249CB0_0x249cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249CB0_0x249cb0");
#endif

    switch (ctx->pc) {
        case 0x249cb0u: goto label_249cb0;
        case 0x249cb4u: goto label_249cb4;
        case 0x249cb8u: goto label_249cb8;
        case 0x249cbcu: goto label_249cbc;
        case 0x249cc0u: goto label_249cc0;
        case 0x249cc4u: goto label_249cc4;
        case 0x249cc8u: goto label_249cc8;
        case 0x249cccu: goto label_249ccc;
        case 0x249cd0u: goto label_249cd0;
        case 0x249cd4u: goto label_249cd4;
        case 0x249cd8u: goto label_249cd8;
        case 0x249cdcu: goto label_249cdc;
        case 0x249ce0u: goto label_249ce0;
        case 0x249ce4u: goto label_249ce4;
        case 0x249ce8u: goto label_249ce8;
        case 0x249cecu: goto label_249cec;
        case 0x249cf0u: goto label_249cf0;
        case 0x249cf4u: goto label_249cf4;
        case 0x249cf8u: goto label_249cf8;
        case 0x249cfcu: goto label_249cfc;
        case 0x249d00u: goto label_249d00;
        case 0x249d04u: goto label_249d04;
        case 0x249d08u: goto label_249d08;
        case 0x249d0cu: goto label_249d0c;
        case 0x249d10u: goto label_249d10;
        case 0x249d14u: goto label_249d14;
        case 0x249d18u: goto label_249d18;
        case 0x249d1cu: goto label_249d1c;
        case 0x249d20u: goto label_249d20;
        case 0x249d24u: goto label_249d24;
        case 0x249d28u: goto label_249d28;
        case 0x249d2cu: goto label_249d2c;
        case 0x249d30u: goto label_249d30;
        case 0x249d34u: goto label_249d34;
        case 0x249d38u: goto label_249d38;
        case 0x249d3cu: goto label_249d3c;
        case 0x249d40u: goto label_249d40;
        case 0x249d44u: goto label_249d44;
        case 0x249d48u: goto label_249d48;
        case 0x249d4cu: goto label_249d4c;
        case 0x249d50u: goto label_249d50;
        case 0x249d54u: goto label_249d54;
        case 0x249d58u: goto label_249d58;
        case 0x249d5cu: goto label_249d5c;
        case 0x249d60u: goto label_249d60;
        case 0x249d64u: goto label_249d64;
        case 0x249d68u: goto label_249d68;
        case 0x249d6cu: goto label_249d6c;
        case 0x249d70u: goto label_249d70;
        case 0x249d74u: goto label_249d74;
        case 0x249d78u: goto label_249d78;
        case 0x249d7cu: goto label_249d7c;
        case 0x249d80u: goto label_249d80;
        case 0x249d84u: goto label_249d84;
        case 0x249d88u: goto label_249d88;
        case 0x249d8cu: goto label_249d8c;
        case 0x249d90u: goto label_249d90;
        case 0x249d94u: goto label_249d94;
        case 0x249d98u: goto label_249d98;
        case 0x249d9cu: goto label_249d9c;
        case 0x249da0u: goto label_249da0;
        case 0x249da4u: goto label_249da4;
        case 0x249da8u: goto label_249da8;
        case 0x249dacu: goto label_249dac;
        case 0x249db0u: goto label_249db0;
        case 0x249db4u: goto label_249db4;
        case 0x249db8u: goto label_249db8;
        case 0x249dbcu: goto label_249dbc;
        case 0x249dc0u: goto label_249dc0;
        case 0x249dc4u: goto label_249dc4;
        case 0x249dc8u: goto label_249dc8;
        case 0x249dccu: goto label_249dcc;
        case 0x249dd0u: goto label_249dd0;
        case 0x249dd4u: goto label_249dd4;
        case 0x249dd8u: goto label_249dd8;
        case 0x249ddcu: goto label_249ddc;
        case 0x249de0u: goto label_249de0;
        case 0x249de4u: goto label_249de4;
        case 0x249de8u: goto label_249de8;
        case 0x249decu: goto label_249dec;
        case 0x249df0u: goto label_249df0;
        case 0x249df4u: goto label_249df4;
        case 0x249df8u: goto label_249df8;
        case 0x249dfcu: goto label_249dfc;
        case 0x249e00u: goto label_249e00;
        case 0x249e04u: goto label_249e04;
        case 0x249e08u: goto label_249e08;
        case 0x249e0cu: goto label_249e0c;
        case 0x249e10u: goto label_249e10;
        case 0x249e14u: goto label_249e14;
        case 0x249e18u: goto label_249e18;
        case 0x249e1cu: goto label_249e1c;
        case 0x249e20u: goto label_249e20;
        case 0x249e24u: goto label_249e24;
        case 0x249e28u: goto label_249e28;
        case 0x249e2cu: goto label_249e2c;
        case 0x249e30u: goto label_249e30;
        case 0x249e34u: goto label_249e34;
        case 0x249e38u: goto label_249e38;
        case 0x249e3cu: goto label_249e3c;
        case 0x249e40u: goto label_249e40;
        case 0x249e44u: goto label_249e44;
        case 0x249e48u: goto label_249e48;
        case 0x249e4cu: goto label_249e4c;
        case 0x249e50u: goto label_249e50;
        case 0x249e54u: goto label_249e54;
        case 0x249e58u: goto label_249e58;
        case 0x249e5cu: goto label_249e5c;
        case 0x249e60u: goto label_249e60;
        case 0x249e64u: goto label_249e64;
        case 0x249e68u: goto label_249e68;
        case 0x249e6cu: goto label_249e6c;
        case 0x249e70u: goto label_249e70;
        case 0x249e74u: goto label_249e74;
        case 0x249e78u: goto label_249e78;
        case 0x249e7cu: goto label_249e7c;
        case 0x249e80u: goto label_249e80;
        case 0x249e84u: goto label_249e84;
        case 0x249e88u: goto label_249e88;
        case 0x249e8cu: goto label_249e8c;
        case 0x249e90u: goto label_249e90;
        case 0x249e94u: goto label_249e94;
        case 0x249e98u: goto label_249e98;
        case 0x249e9cu: goto label_249e9c;
        case 0x249ea0u: goto label_249ea0;
        case 0x249ea4u: goto label_249ea4;
        case 0x249ea8u: goto label_249ea8;
        case 0x249eacu: goto label_249eac;
        case 0x249eb0u: goto label_249eb0;
        case 0x249eb4u: goto label_249eb4;
        case 0x249eb8u: goto label_249eb8;
        case 0x249ebcu: goto label_249ebc;
        case 0x249ec0u: goto label_249ec0;
        case 0x249ec4u: goto label_249ec4;
        case 0x249ec8u: goto label_249ec8;
        case 0x249eccu: goto label_249ecc;
        case 0x249ed0u: goto label_249ed0;
        case 0x249ed4u: goto label_249ed4;
        case 0x249ed8u: goto label_249ed8;
        case 0x249edcu: goto label_249edc;
        case 0x249ee0u: goto label_249ee0;
        case 0x249ee4u: goto label_249ee4;
        case 0x249ee8u: goto label_249ee8;
        case 0x249eecu: goto label_249eec;
        case 0x249ef0u: goto label_249ef0;
        case 0x249ef4u: goto label_249ef4;
        case 0x249ef8u: goto label_249ef8;
        case 0x249efcu: goto label_249efc;
        case 0x249f00u: goto label_249f00;
        case 0x249f04u: goto label_249f04;
        case 0x249f08u: goto label_249f08;
        case 0x249f0cu: goto label_249f0c;
        case 0x249f10u: goto label_249f10;
        case 0x249f14u: goto label_249f14;
        case 0x249f18u: goto label_249f18;
        case 0x249f1cu: goto label_249f1c;
        case 0x249f20u: goto label_249f20;
        case 0x249f24u: goto label_249f24;
        case 0x249f28u: goto label_249f28;
        case 0x249f2cu: goto label_249f2c;
        case 0x249f30u: goto label_249f30;
        case 0x249f34u: goto label_249f34;
        case 0x249f38u: goto label_249f38;
        case 0x249f3cu: goto label_249f3c;
        case 0x249f40u: goto label_249f40;
        case 0x249f44u: goto label_249f44;
        case 0x249f48u: goto label_249f48;
        case 0x249f4cu: goto label_249f4c;
        case 0x249f50u: goto label_249f50;
        case 0x249f54u: goto label_249f54;
        case 0x249f58u: goto label_249f58;
        case 0x249f5cu: goto label_249f5c;
        case 0x249f60u: goto label_249f60;
        case 0x249f64u: goto label_249f64;
        case 0x249f68u: goto label_249f68;
        case 0x249f6cu: goto label_249f6c;
        case 0x249f70u: goto label_249f70;
        case 0x249f74u: goto label_249f74;
        case 0x249f78u: goto label_249f78;
        case 0x249f7cu: goto label_249f7c;
        case 0x249f80u: goto label_249f80;
        case 0x249f84u: goto label_249f84;
        case 0x249f88u: goto label_249f88;
        case 0x249f8cu: goto label_249f8c;
        case 0x249f90u: goto label_249f90;
        case 0x249f94u: goto label_249f94;
        case 0x249f98u: goto label_249f98;
        case 0x249f9cu: goto label_249f9c;
        case 0x249fa0u: goto label_249fa0;
        case 0x249fa4u: goto label_249fa4;
        case 0x249fa8u: goto label_249fa8;
        case 0x249facu: goto label_249fac;
        case 0x249fb0u: goto label_249fb0;
        case 0x249fb4u: goto label_249fb4;
        case 0x249fb8u: goto label_249fb8;
        case 0x249fbcu: goto label_249fbc;
        case 0x249fc0u: goto label_249fc0;
        case 0x249fc4u: goto label_249fc4;
        case 0x249fc8u: goto label_249fc8;
        case 0x249fccu: goto label_249fcc;
        case 0x249fd0u: goto label_249fd0;
        case 0x249fd4u: goto label_249fd4;
        case 0x249fd8u: goto label_249fd8;
        case 0x249fdcu: goto label_249fdc;
        case 0x249fe0u: goto label_249fe0;
        case 0x249fe4u: goto label_249fe4;
        case 0x249fe8u: goto label_249fe8;
        case 0x249fecu: goto label_249fec;
        case 0x249ff0u: goto label_249ff0;
        case 0x249ff4u: goto label_249ff4;
        case 0x249ff8u: goto label_249ff8;
        case 0x249ffcu: goto label_249ffc;
        case 0x24a000u: goto label_24a000;
        case 0x24a004u: goto label_24a004;
        case 0x24a008u: goto label_24a008;
        case 0x24a00cu: goto label_24a00c;
        case 0x24a010u: goto label_24a010;
        case 0x24a014u: goto label_24a014;
        case 0x24a018u: goto label_24a018;
        case 0x24a01cu: goto label_24a01c;
        case 0x24a020u: goto label_24a020;
        case 0x24a024u: goto label_24a024;
        case 0x24a028u: goto label_24a028;
        case 0x24a02cu: goto label_24a02c;
        case 0x24a030u: goto label_24a030;
        case 0x24a034u: goto label_24a034;
        case 0x24a038u: goto label_24a038;
        case 0x24a03cu: goto label_24a03c;
        case 0x24a040u: goto label_24a040;
        case 0x24a044u: goto label_24a044;
        case 0x24a048u: goto label_24a048;
        case 0x24a04cu: goto label_24a04c;
        case 0x24a050u: goto label_24a050;
        case 0x24a054u: goto label_24a054;
        case 0x24a058u: goto label_24a058;
        case 0x24a05cu: goto label_24a05c;
        case 0x24a060u: goto label_24a060;
        case 0x24a064u: goto label_24a064;
        case 0x24a068u: goto label_24a068;
        case 0x24a06cu: goto label_24a06c;
        case 0x24a070u: goto label_24a070;
        case 0x24a074u: goto label_24a074;
        case 0x24a078u: goto label_24a078;
        case 0x24a07cu: goto label_24a07c;
        case 0x24a080u: goto label_24a080;
        case 0x24a084u: goto label_24a084;
        case 0x24a088u: goto label_24a088;
        case 0x24a08cu: goto label_24a08c;
        case 0x24a090u: goto label_24a090;
        case 0x24a094u: goto label_24a094;
        case 0x24a098u: goto label_24a098;
        case 0x24a09cu: goto label_24a09c;
        case 0x24a0a0u: goto label_24a0a0;
        case 0x24a0a4u: goto label_24a0a4;
        case 0x24a0a8u: goto label_24a0a8;
        case 0x24a0acu: goto label_24a0ac;
        case 0x24a0b0u: goto label_24a0b0;
        case 0x24a0b4u: goto label_24a0b4;
        case 0x24a0b8u: goto label_24a0b8;
        case 0x24a0bcu: goto label_24a0bc;
        case 0x24a0c0u: goto label_24a0c0;
        case 0x24a0c4u: goto label_24a0c4;
        case 0x24a0c8u: goto label_24a0c8;
        case 0x24a0ccu: goto label_24a0cc;
        case 0x24a0d0u: goto label_24a0d0;
        case 0x24a0d4u: goto label_24a0d4;
        case 0x24a0d8u: goto label_24a0d8;
        case 0x24a0dcu: goto label_24a0dc;
        case 0x24a0e0u: goto label_24a0e0;
        case 0x24a0e4u: goto label_24a0e4;
        case 0x24a0e8u: goto label_24a0e8;
        case 0x24a0ecu: goto label_24a0ec;
        case 0x24a0f0u: goto label_24a0f0;
        case 0x24a0f4u: goto label_24a0f4;
        case 0x24a0f8u: goto label_24a0f8;
        case 0x24a0fcu: goto label_24a0fc;
        case 0x24a100u: goto label_24a100;
        case 0x24a104u: goto label_24a104;
        case 0x24a108u: goto label_24a108;
        case 0x24a10cu: goto label_24a10c;
        case 0x24a110u: goto label_24a110;
        case 0x24a114u: goto label_24a114;
        case 0x24a118u: goto label_24a118;
        case 0x24a11cu: goto label_24a11c;
        case 0x24a120u: goto label_24a120;
        case 0x24a124u: goto label_24a124;
        case 0x24a128u: goto label_24a128;
        case 0x24a12cu: goto label_24a12c;
        case 0x24a130u: goto label_24a130;
        case 0x24a134u: goto label_24a134;
        case 0x24a138u: goto label_24a138;
        case 0x24a13cu: goto label_24a13c;
        case 0x24a140u: goto label_24a140;
        case 0x24a144u: goto label_24a144;
        case 0x24a148u: goto label_24a148;
        case 0x24a14cu: goto label_24a14c;
        case 0x24a150u: goto label_24a150;
        case 0x24a154u: goto label_24a154;
        case 0x24a158u: goto label_24a158;
        case 0x24a15cu: goto label_24a15c;
        case 0x24a160u: goto label_24a160;
        case 0x24a164u: goto label_24a164;
        case 0x24a168u: goto label_24a168;
        case 0x24a16cu: goto label_24a16c;
        case 0x24a170u: goto label_24a170;
        case 0x24a174u: goto label_24a174;
        case 0x24a178u: goto label_24a178;
        case 0x24a17cu: goto label_24a17c;
        case 0x24a180u: goto label_24a180;
        case 0x24a184u: goto label_24a184;
        case 0x24a188u: goto label_24a188;
        case 0x24a18cu: goto label_24a18c;
        case 0x24a190u: goto label_24a190;
        case 0x24a194u: goto label_24a194;
        case 0x24a198u: goto label_24a198;
        case 0x24a19cu: goto label_24a19c;
        case 0x24a1a0u: goto label_24a1a0;
        case 0x24a1a4u: goto label_24a1a4;
        case 0x24a1a8u: goto label_24a1a8;
        case 0x24a1acu: goto label_24a1ac;
        case 0x24a1b0u: goto label_24a1b0;
        case 0x24a1b4u: goto label_24a1b4;
        case 0x24a1b8u: goto label_24a1b8;
        case 0x24a1bcu: goto label_24a1bc;
        case 0x24a1c0u: goto label_24a1c0;
        case 0x24a1c4u: goto label_24a1c4;
        case 0x24a1c8u: goto label_24a1c8;
        case 0x24a1ccu: goto label_24a1cc;
        case 0x24a1d0u: goto label_24a1d0;
        case 0x24a1d4u: goto label_24a1d4;
        case 0x24a1d8u: goto label_24a1d8;
        case 0x24a1dcu: goto label_24a1dc;
        case 0x24a1e0u: goto label_24a1e0;
        case 0x24a1e4u: goto label_24a1e4;
        case 0x24a1e8u: goto label_24a1e8;
        case 0x24a1ecu: goto label_24a1ec;
        case 0x24a1f0u: goto label_24a1f0;
        case 0x24a1f4u: goto label_24a1f4;
        case 0x24a1f8u: goto label_24a1f8;
        case 0x24a1fcu: goto label_24a1fc;
        case 0x24a200u: goto label_24a200;
        case 0x24a204u: goto label_24a204;
        case 0x24a208u: goto label_24a208;
        case 0x24a20cu: goto label_24a20c;
        case 0x24a210u: goto label_24a210;
        case 0x24a214u: goto label_24a214;
        case 0x24a218u: goto label_24a218;
        case 0x24a21cu: goto label_24a21c;
        case 0x24a220u: goto label_24a220;
        case 0x24a224u: goto label_24a224;
        case 0x24a228u: goto label_24a228;
        case 0x24a22cu: goto label_24a22c;
        default: break;
    }

    ctx->pc = 0x249cb0u;

label_249cb0:
    // 0x249cb0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x249cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_249cb4:
    // 0x249cb4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x249cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_249cb8:
    // 0x249cb8: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x249cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_249cbc:
    // 0x249cbc: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x249cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_249cc0:
    // 0x249cc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x249cc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_249cc4:
    // 0x249cc4: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x249cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
label_249cc8:
    // 0x249cc8: 0x30b500ff  andi        $s5, $a1, 0xFF
    ctx->pc = 0x249cc8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_249ccc:
    // 0x249ccc: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x249cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_249cd0:
    // 0x249cd0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x249cd0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249cd4:
    // 0x249cd4: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x249cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_249cd8:
    // 0x249cd8: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x249cd8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_249cdc:
    // 0x249cdc: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x249cdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_249ce0:
    // 0x249ce0: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x249ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_249ce4:
    // 0x249ce4: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x249ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_249ce8:
    // 0x249ce8: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x249ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_249cec:
    // 0x249cec: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x249cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
label_249cf0:
    // 0x249cf0: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x249cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
label_249cf4:
    // 0x249cf4: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x249cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_249cf8:
    // 0x249cf8: 0xc0616ac  jal         func_185AB0
label_249cfc:
    if (ctx->pc == 0x249CFCu) {
        ctx->pc = 0x249CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CF8u;
        // 0x249cfc: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D00u;
        goto label_249d00;
    }
    ctx->pc = 0x249CF8u;
    SET_GPR_U32(ctx, 31, 0x249D00u);
    ctx->pc = 0x249CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249CF8u;
    // 0x249cfc: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x249CF8u, 0x249D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249D00u;
label_249d00:
    // 0x249d00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x249d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_249d04:
    // 0x249d04: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x249d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_249d08:
    // 0x249d08: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x249d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_249d0c:
    // 0x249d0c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x249d0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_249d10:
    // 0x249d10: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x249d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_249d14:
    // 0x249d14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x249d14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249d18:
    // 0x249d18: 0x12400137  beqz        $s2, . + 4 + (0x137 << 2)
label_249d1c:
    if (ctx->pc == 0x249D1Cu) {
        ctx->pc = 0x249D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D18u;
        // 0x249d1c: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D20u;
        goto label_249d20;
    }
    ctx->pc = 0x249D18u;
    {
        const bool branch_taken_0x249d18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D18u;
        // 0x249d1c: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d18) {
            ctx->pc = 0x24A1F8u;
            goto label_24a1f8;
        }
    }
    ctx->pc = 0x249D20u;
label_249d20:
    // 0x249d20: 0x92420011  lbu         $v0, 0x11($s2)
    ctx->pc = 0x249d20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
label_249d24:
    // 0x249d24: 0x10400134  beqz        $v0, . + 4 + (0x134 << 2)
label_249d28:
    if (ctx->pc == 0x249D28u) {
        ctx->pc = 0x249D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D24u;
        // 0x249d28: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D2Cu;
        goto label_249d2c;
    }
    ctx->pc = 0x249D24u;
    {
        const bool branch_taken_0x249d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D24u;
        // 0x249d28: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d24) {
            ctx->pc = 0x24A1F8u;
            goto label_24a1f8;
        }
    }
    ctx->pc = 0x249D2Cu;
label_249d2c:
    // 0x249d2c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x249d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_249d30:
    // 0x249d30: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x249d30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_249d34:
    // 0x249d34: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x249d34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_249d38:
    // 0x249d38: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x249d38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_249d3c:
    // 0x249d3c: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x249d3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_249d40:
    // 0x249d40: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x249d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_249d44:
    // 0x249d44: 0x60f809  jalr        $v1
label_249d48:
    if (ctx->pc == 0x249D48u) {
        ctx->pc = 0x249D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D44u;
        // 0x249d48: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D4Cu;
        goto label_249d4c;
    }
    ctx->pc = 0x249D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x249D4Cu);
        ctx->pc = 0x249D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D44u;
        // 0x249d48: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249D44u, 0x249D4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249D4Cu;
label_249d4c:
    // 0x249d4c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x249d4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_249d50:
    // 0x249d50: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x249d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_249d54:
    // 0x249d54: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x249d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_249d58:
    // 0x249d58: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x249d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_249d5c:
    // 0x249d5c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x249d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_249d60:
    // 0x249d60: 0x24661720  addiu       $a2, $v1, 0x1720
    ctx->pc = 0x249d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5920));
label_249d64:
    // 0x249d64: 0x24821730  addiu       $v0, $a0, 0x1730
    ctx->pc = 0x249d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5936));
label_249d68:
    // 0x249d68: 0x24a71770  addiu       $a3, $a1, 0x1770
    ctx->pc = 0x249d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 6000));
label_249d6c:
    // 0x249d6c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x249d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249d70:
    // 0x249d70: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x249d70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_249d74:
    // 0x249d74: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x249d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249d78:
    // 0x249d78: 0x27b10074  addiu       $s1, $sp, 0x74
    ctx->pc = 0x249d78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_249d7c:
    // 0x249d7c: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x249d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_249d80:
    // 0x249d80: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x249d80u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_249d84:
    // 0x249d84: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x249d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_249d88:
    // 0x249d88: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x249d88u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_249d8c:
    // 0x249d8c: 0x3c013d1b  lui         $at, 0x3D1B
    ctx->pc = 0x249d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15643 << 16));
label_249d90:
    // 0x249d90: 0x3421a5e3  ori         $at, $at, 0xA5E3
    ctx->pc = 0x249d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42467);
label_249d94:
    // 0x249d94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x249d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249d98:
    // 0x249d98: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x249d98u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_249d9c:
    // 0x249d9c: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x249d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_249da0:
    // 0x249da0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x249da0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_249da4:
    // 0x249da4: 0xc4e70008  lwc1        $f7, 0x8($a3)
    ctx->pc = 0x249da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_249da8:
    // 0x249da8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x249da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249dac:
    // 0x249dac: 0xc4881730  lwc1        $f8, 0x1730($a0)
    ctx->pc = 0x249dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_249db0:
    // 0x249db0: 0xc4661720  lwc1        $f6, 0x1720($v1)
    ctx->pc = 0x249db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_249db4:
    // 0x249db4: 0xc4a91770  lwc1        $f9, 0x1770($a1)
    ctx->pc = 0x249db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_249db8:
    // 0x249db8: 0xc7aa0080  lwc1        $f10, 0x80($sp)
    ctx->pc = 0x249db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_249dbc:
    // 0x249dbc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x249dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_249dc0:
    // 0x249dc0: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x249dc0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_249dc4:
    // 0x249dc4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x249dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_249dc8:
    // 0x249dc8: 0xe7a80010  swc1        $f8, 0x10($sp)
    ctx->pc = 0x249dc8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_249dcc:
    // 0x249dcc: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x249dccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_249dd0:
    // 0x249dd0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x249dd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_249dd4:
    // 0x249dd4: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x249dd4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_249dd8:
    // 0x249dd8: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x249dd8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_249ddc:
    // 0x249ddc: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x249ddcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_249de0:
    // 0x249de0: 0xe7aa0030  swc1        $f10, 0x30($sp)
    ctx->pc = 0x249de0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_249de4:
    // 0x249de4: 0xe6840004  swc1        $f4, 0x4($s4)
    ctx->pc = 0x249de4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_249de8:
    // 0x249de8: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x249de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_249dec:
    // 0x249dec: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x249decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249df0:
    // 0x249df0: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x249df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_249df4:
    // 0x249df4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x249df4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_249df8:
    // 0x249df8: 0xc0e409a  jal         func_390268
label_249dfc:
    if (ctx->pc == 0x249DFCu) {
        ctx->pc = 0x249DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DF8u;
        // 0x249dfc: 0xe6800008  swc1        $f0, 0x8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E00u;
        goto label_249e00;
    }
    ctx->pc = 0x249DF8u;
    SET_GPR_U32(ctx, 31, 0x249E00u);
    ctx->pc = 0x249DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249DF8u;
    // 0x249dfc: 0xe6800008  swc1        $f0, 0x8($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x249DF8u, 0x249E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E00u;
label_249e00:
    // 0x249e00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_249e04:
    if (ctx->pc == 0x249E04u) {
        ctx->pc = 0x249E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E00u;
        // 0x249e04: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E08u;
        goto label_249e08;
    }
    ctx->pc = 0x249E00u;
    {
        const bool branch_taken_0x249e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E00u;
        // 0x249e04: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e00) {
            ctx->pc = 0x249E24u;
            goto label_249e24;
        }
    }
    ctx->pc = 0x249E08u;
label_249e08:
    // 0x249e08: 0xc0e409a  jal         func_390268
label_249e0c:
    if (ctx->pc == 0x249E0Cu) {
        ctx->pc = 0x249E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E08u;
        // 0x249e0c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E10u;
        goto label_249e10;
    }
    ctx->pc = 0x249E08u;
    SET_GPR_U32(ctx, 31, 0x249E10u);
    ctx->pc = 0x249E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E08u;
    // 0x249e0c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x249E08u, 0x249E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E10u;
label_249e10:
    // 0x249e10: 0xc087502  jal         func_21D408
label_249e14:
    if (ctx->pc == 0x249E14u) {
        ctx->pc = 0x249E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E10u;
        // 0x249e14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E18u;
        goto label_249e18;
    }
    ctx->pc = 0x249E10u;
    SET_GPR_U32(ctx, 31, 0x249E18u);
    ctx->pc = 0x249E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E10u;
    // 0x249e14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x249E10u, 0x249E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E18u;
label_249e18:
    // 0x249e18: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x249e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_249e1c:
    // 0x249e1c: 0x84760030  lh          $s6, 0x30($v1)
    ctx->pc = 0x249e1cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_249e20:
    // 0x249e20: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x249e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_249e24:
    // 0x249e24: 0xc0e409a  jal         func_390268
label_249e28:
    if (ctx->pc == 0x249E28u) {
        ctx->pc = 0x249E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E24u;
        // 0x249e28: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E2Cu;
        goto label_249e2c;
    }
    ctx->pc = 0x249E24u;
    SET_GPR_U32(ctx, 31, 0x249E2Cu);
    ctx->pc = 0x249E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E24u;
    // 0x249e28: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x249E24u, 0x249E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E2Cu;
label_249e2c:
    // 0x249e2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_249e30:
    if (ctx->pc == 0x249E30u) {
        ctx->pc = 0x249E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E2Cu;
        // 0x249e30: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E34u;
        goto label_249e34;
    }
    ctx->pc = 0x249E2Cu;
    {
        const bool branch_taken_0x249e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E2Cu;
        // 0x249e30: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e2c) {
            ctx->pc = 0x249E4Cu;
            goto label_249e4c;
        }
    }
    ctx->pc = 0x249E34u;
label_249e34:
    // 0x249e34: 0xc0e409a  jal         func_390268
label_249e38:
    if (ctx->pc == 0x249E38u) {
        ctx->pc = 0x249E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E34u;
        // 0x249e38: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E3Cu;
        goto label_249e3c;
    }
    ctx->pc = 0x249E34u;
    SET_GPR_U32(ctx, 31, 0x249E3Cu);
    ctx->pc = 0x249E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E34u;
    // 0x249e38: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x249E34u, 0x249E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E3Cu;
label_249e3c:
    // 0x249e3c: 0xc087502  jal         func_21D408
label_249e40:
    if (ctx->pc == 0x249E40u) {
        ctx->pc = 0x249E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E3Cu;
        // 0x249e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E44u;
        goto label_249e44;
    }
    ctx->pc = 0x249E3Cu;
    SET_GPR_U32(ctx, 31, 0x249E44u);
    ctx->pc = 0x249E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E3Cu;
    // 0x249e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x249E3Cu, 0x249E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E44u;
label_249e44:
    // 0x249e44: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x249e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_249e48:
    // 0x249e48: 0x84770030  lh          $s7, 0x30($v1)
    ctx->pc = 0x249e48u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_249e4c:
    // 0x249e4c: 0xc087502  jal         func_21D408
label_249e50:
    if (ctx->pc == 0x249E50u) {
        ctx->pc = 0x249E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E4Cu;
        // 0x249e50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E54u;
        goto label_249e54;
    }
    ctx->pc = 0x249E4Cu;
    SET_GPR_U32(ctx, 31, 0x249E54u);
    ctx->pc = 0x249E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E4Cu;
    // 0x249e50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x249E4Cu, 0x249E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E54u;
label_249e54:
    // 0x249e54: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x249e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_249e58:
    // 0x249e58: 0x84620030  lh          $v0, 0x30($v1)
    ctx->pc = 0x249e58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_249e5c:
    // 0x249e5c: 0x14560006  bne         $v0, $s6, . + 4 + (0x6 << 2)
label_249e60:
    if (ctx->pc == 0x249E60u) {
        ctx->pc = 0x249E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E5Cu;
        // 0x249e60: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E64u;
        goto label_249e64;
    }
    ctx->pc = 0x249E5Cu;
    {
        const bool branch_taken_0x249e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x249E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E5Cu;
        // 0x249e60: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e5c) {
            ctx->pc = 0x249E78u;
            goto label_249e78;
        }
    }
    ctx->pc = 0x249E64u;
label_249e64:
    // 0x249e64: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x249e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_249e68:
    // 0x249e68: 0xa3a20074  sb          $v0, 0x74($sp)
    ctx->pc = 0x249e68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 2));
label_249e6c:
    // 0x249e6c: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x249e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
label_249e70:
    // 0x249e70: 0x10000012  b           . + 4 + (0x12 << 2)
label_249e74:
    if (ctx->pc == 0x249E74u) {
        ctx->pc = 0x249E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E70u;
        // 0x249e74: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E78u;
        goto label_249e78;
    }
    ctx->pc = 0x249E70u;
    {
        const bool branch_taken_0x249e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E70u;
        // 0x249e74: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e70) {
            ctx->pc = 0x249EBCu;
            goto label_249ebc;
        }
    }
    ctx->pc = 0x249E78u;
label_249e78:
    // 0x249e78: 0xc087502  jal         func_21D408
label_249e7c:
    if (ctx->pc == 0x249E7Cu) {
        ctx->pc = 0x249E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E78u;
        // 0x249e7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E80u;
        goto label_249e80;
    }
    ctx->pc = 0x249E78u;
    SET_GPR_U32(ctx, 31, 0x249E80u);
    ctx->pc = 0x249E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E78u;
    // 0x249e7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x249E78u, 0x249E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E80u;
label_249e80:
    // 0x249e80: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x249e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_249e84:
    // 0x249e84: 0x84620030  lh          $v0, 0x30($v1)
    ctx->pc = 0x249e84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_249e88:
    // 0x249e88: 0x14570007  bne         $v0, $s7, . + 4 + (0x7 << 2)
label_249e8c:
    if (ctx->pc == 0x249E8Cu) {
        ctx->pc = 0x249E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E88u;
        // 0x249e8c: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E90u;
        goto label_249e90;
    }
    ctx->pc = 0x249E88u;
    {
        const bool branch_taken_0x249e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x249E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E88u;
        // 0x249e8c: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e88) {
            ctx->pc = 0x249EA8u;
            goto label_249ea8;
        }
    }
    ctx->pc = 0x249E90u;
label_249e90:
    // 0x249e90: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x249e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_249e94:
    // 0x249e94: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x249e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_249e98:
    // 0x249e98: 0xa3a20074  sb          $v0, 0x74($sp)
    ctx->pc = 0x249e98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 2));
label_249e9c:
    // 0x249e9c: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x249e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_249ea0:
    // 0x249ea0: 0x10000006  b           . + 4 + (0x6 << 2)
label_249ea4:
    if (ctx->pc == 0x249EA4u) {
        ctx->pc = 0x249EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EA0u;
        // 0x249ea4: 0xa2200002  sb          $zero, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249EA8u;
        goto label_249ea8;
    }
    ctx->pc = 0x249EA0u;
    {
        const bool branch_taken_0x249ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EA0u;
        // 0x249ea4: 0xa2200002  sb          $zero, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ea0) {
            ctx->pc = 0x249EBCu;
            goto label_249ebc;
        }
    }
    ctx->pc = 0x249EA8u;
label_249ea8:
    // 0x249ea8: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x249ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_249eac:
    // 0x249eac: 0xa3a20074  sb          $v0, 0x74($sp)
    ctx->pc = 0x249eacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 2));
label_249eb0:
    // 0x249eb0: 0x240300bc  addiu       $v1, $zero, 0xBC
    ctx->pc = 0x249eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_249eb4:
    // 0x249eb4: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x249eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
label_249eb8:
    // 0x249eb8: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x249eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
label_249ebc:
    // 0x249ebc: 0xa2350003  sb          $s5, 0x3($s1)
    ctx->pc = 0x249ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 21));
label_249ec0:
    // 0x249ec0: 0x8e6200d8  lw          $v0, 0xD8($s3)
    ctx->pc = 0x249ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_249ec4:
    // 0x249ec4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x249ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_249ec8:
    // 0x249ec8: 0xc060b58  jal         func_182D60
label_249ecc:
    if (ctx->pc == 0x249ECCu) {
        ctx->pc = 0x249ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EC8u;
        // 0x249ecc: 0xac4002b4  sw          $zero, 0x2B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 692), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249ED0u;
        goto label_249ed0;
    }
    ctx->pc = 0x249EC8u;
    SET_GPR_U32(ctx, 31, 0x249ED0u);
    ctx->pc = 0x249ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249EC8u;
    // 0x249ecc: 0xac4002b4  sw          $zero, 0x2B4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 692), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x249EC8u, 0x249ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249ED0u;
label_249ed0:
    // 0x249ed0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x249ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_249ed4:
    // 0x249ed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x249ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249ed8:
    // 0x249ed8: 0xc06078e  jal         func_181E38
label_249edc:
    if (ctx->pc == 0x249EDCu) {
        ctx->pc = 0x249EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249ED8u;
        // 0x249edc: 0x34a50040  ori         $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249EE0u;
        goto label_249ee0;
    }
    ctx->pc = 0x249ED8u;
    SET_GPR_U32(ctx, 31, 0x249EE0u);
    ctx->pc = 0x249EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249ED8u;
    // 0x249edc: 0x34a50040  ori         $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x249ED8u, 0x249EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249EE0u;
label_249ee0:
    // 0x249ee0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x249ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_249ee4:
    // 0x249ee4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x249ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_249ee8:
    // 0x249ee8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x249ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_249eec:
    // 0x249eec: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x249eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_249ef0:
    // 0x249ef0: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x249ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_249ef4:
    // 0x249ef4: 0xb3a3006b  sdl         $v1, 0x6B($sp)
    ctx->pc = 0x249ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249ef8:
    // 0x249ef8: 0xb7a30064  sdr         $v1, 0x64($sp)
    ctx->pc = 0x249ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249efc:
    // 0x249efc: 0xb3a60073  sdl         $a2, 0x73($sp)
    ctx->pc = 0x249efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249f00:
    // 0x249f00: 0xb7a6006c  sdr         $a2, 0x6C($sp)
    ctx->pc = 0x249f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249f04:
    // 0x249f04: 0xc060b78  jal         func_182DE0
label_249f08:
    if (ctx->pc == 0x249F08u) {
        ctx->pc = 0x249F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F04u;
        // 0x249f08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249F0Cu;
        goto label_249f0c;
    }
    ctx->pc = 0x249F04u;
    SET_GPR_U32(ctx, 31, 0x249F0Cu);
    ctx->pc = 0x249F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F04u;
    // 0x249f08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x249F04u, 0x249F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F0Cu;
label_249f0c:
    // 0x249f0c: 0xc047ab8  jal         func_11EAE0
label_249f10:
    if (ctx->pc == 0x249F10u) {
        ctx->pc = 0x249F14u;
        goto label_249f14;
    }
    ctx->pc = 0x249F0Cu;
    SET_GPR_U32(ctx, 31, 0x249F14u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x249F0Cu, 0x249F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F14u;
label_249f14:
    // 0x249f14: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x249f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_249f18:
    // 0x249f18: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_249f1c:
    if (ctx->pc == 0x249F1Cu) {
        ctx->pc = 0x249F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F18u;
        // 0x249f1c: 0x826201b0  lb          $v0, 0x1B0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249F20u;
        goto label_249f20;
    }
    ctx->pc = 0x249F18u;
    {
        const bool branch_taken_0x249f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249f18) {
            ctx->pc = 0x249F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249F18u;
            // 0x249f1c: 0x826201b0  lb          $v0, 0x1B0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249F50u;
            goto label_249f50;
        }
    }
    ctx->pc = 0x249F20u;
label_249f20:
    // 0x249f20: 0x8fc4cd4c  lw          $a0, -0x32B4($fp)
    ctx->pc = 0x249f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954316)));
label_249f24:
    // 0x249f24: 0xc0616ac  jal         func_185AB0
label_249f28:
    if (ctx->pc == 0x249F28u) {
        ctx->pc = 0x249F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F24u;
        // 0x249f28: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249F2Cu;
        goto label_249f2c;
    }
    ctx->pc = 0x249F24u;
    SET_GPR_U32(ctx, 31, 0x249F2Cu);
    ctx->pc = 0x249F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F24u;
    // 0x249f28: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x249F24u, 0x249F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F2Cu;
label_249f2c:
    // 0x249f2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x249f2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249f30:
    // 0x249f30: 0x124000b1  beqz        $s2, . + 4 + (0xB1 << 2)
label_249f34:
    if (ctx->pc == 0x249F34u) {
        ctx->pc = 0x249F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F30u;
        // 0x249f34: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249F38u;
        goto label_249f38;
    }
    ctx->pc = 0x249F30u;
    {
        const bool branch_taken_0x249f30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F30u;
        // 0x249f34: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f30) {
            ctx->pc = 0x24A1F8u;
            goto label_24a1f8;
        }
    }
    ctx->pc = 0x249F38u;
label_249f38:
    // 0x249f38: 0x92420011  lbu         $v0, 0x11($s2)
    ctx->pc = 0x249f38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
label_249f3c:
    // 0x249f3c: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
label_249f40:
    if (ctx->pc == 0x249F40u) {
        ctx->pc = 0x249F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F3Cu;
        // 0x249f40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249F44u;
        goto label_249f44;
    }
    ctx->pc = 0x249F3Cu;
    {
        const bool branch_taken_0x249f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F3Cu;
        // 0x249f40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f3c) {
            ctx->pc = 0x24A1F8u;
            goto label_24a1f8;
        }
    }
    ctx->pc = 0x249F44u;
label_249f44:
    // 0x249f44: 0xc060b78  jal         func_182DE0
label_249f48:
    if (ctx->pc == 0x249F48u) {
        ctx->pc = 0x249F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F44u;
        // 0x249f48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249F4Cu;
        goto label_249f4c;
    }
    ctx->pc = 0x249F44u;
    SET_GPR_U32(ctx, 31, 0x249F4Cu);
    ctx->pc = 0x249F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F44u;
    // 0x249f48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x249F44u, 0x249F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F4Cu;
label_249f4c:
    // 0x249f4c: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x249f4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_249f50:
    // 0x249f50: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x249f50u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_249f54:
    // 0x249f54: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
label_249f58:
    if (ctx->pc == 0x249F58u) {
        ctx->pc = 0x249F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F54u;
        // 0x249f58: 0xc7a00088  lwc1        $f0, 0x88($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x249F5Cu;
        goto label_249f5c;
    }
    ctx->pc = 0x249F54u;
    {
        const bool branch_taken_0x249f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F54u;
        // 0x249f58: 0xc7a00088  lwc1        $f0, 0x88($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f54) {
            ctx->pc = 0x24A1F4u;
            goto label_24a1f4;
        }
    }
    ctx->pc = 0x249F5Cu;
label_249f5c:
    // 0x249f5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x249f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249f60:
    // 0x249f60: 0x3c013d1b  lui         $at, 0x3D1B
    ctx->pc = 0x249f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15643 << 16));
label_249f64:
    // 0x249f64: 0x3421a5e3  ori         $at, $at, 0xA5E3
    ctx->pc = 0x249f64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42467);
label_249f68:
    // 0x249f68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x249f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_249f6c:
    // 0x249f6c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x249f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_249f70:
    // 0x249f70: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x249f70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_249f74:
    // 0x249f74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x249f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_249f78:
    // 0x249f78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x249f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_249f7c:
    // 0x249f7c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x249f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_249f80:
    // 0x249f80: 0xc047ab8  jal         func_11EAE0
label_249f84:
    if (ctx->pc == 0x249F84u) {
        ctx->pc = 0x249F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F80u;
        // 0x249f84: 0xe6800004  swc1        $f0, 0x4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x249F88u;
        goto label_249f88;
    }
    ctx->pc = 0x249F80u;
    SET_GPR_U32(ctx, 31, 0x249F88u);
    ctx->pc = 0x249F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F80u;
    // 0x249f84: 0xe6800004  swc1        $f0, 0x4($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x249F80u, 0x249F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F88u;
label_249f88:
    // 0x249f88: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x249f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_249f8c:
    // 0x249f8c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_249f90:
    if (ctx->pc == 0x249F90u) {
        ctx->pc = 0x249F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F8Cu;
        // 0x249f90: 0x827001b0  lb          $s0, 0x1B0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249F94u;
        goto label_249f94;
    }
    ctx->pc = 0x249F8Cu;
    {
        const bool branch_taken_0x249f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249f8c) {
            ctx->pc = 0x249F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249F8Cu;
            // 0x249f90: 0x827001b0  lb          $s0, 0x1B0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249F94u;
            goto label_249f94;
        }
    }
    ctx->pc = 0x249F94u;
label_249f94:
    // 0x249f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_249f98:
    // 0x249f98: 0xc047e6c  jal         func_11F9B0
label_249f9c:
    if (ctx->pc == 0x249F9Cu) {
        ctx->pc = 0x249F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F98u;
        // 0x249f9c: 0x27b000b0  addiu       $s0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249FA0u;
        goto label_249fa0;
    }
    ctx->pc = 0x249F98u;
    SET_GPR_U32(ctx, 31, 0x249FA0u);
    ctx->pc = 0x249F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F98u;
    // 0x249f9c: 0x27b000b0  addiu       $s0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x249F98u, 0x249FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249FA0u;
label_249fa0:
    // 0x249fa0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x249fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_249fa4:
    // 0x249fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_249fa8:
    // 0x249fa8: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x249fa8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_249fac:
    // 0x249fac: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x249facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_249fb0:
    // 0x249fb0: 0xc0f809  jalr        $a2
label_249fb4:
    if (ctx->pc == 0x249FB4u) {
        ctx->pc = 0x249FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FB0u;
        // 0x249fb4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249FB8u;
        goto label_249fb8;
    }
    ctx->pc = 0x249FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x249FB8u);
        ctx->pc = 0x249FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FB0u;
        // 0x249fb4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249FB0u, 0x249FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249FB8u;
label_249fb8:
    // 0x249fb8: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x249fb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_249fbc:
    // 0x249fbc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x249fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_249fc0:
    // 0x249fc0: 0xc0cd7d2  jal         func_335F48
label_249fc4:
    if (ctx->pc == 0x249FC4u) {
        ctx->pc = 0x249FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FC0u;
        // 0x249fc4: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249FC8u;
        goto label_249fc8;
    }
    ctx->pc = 0x249FC0u;
    SET_GPR_U32(ctx, 31, 0x249FC8u);
    ctx->pc = 0x249FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249FC0u;
    // 0x249fc4: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x249FC0u, 0x249FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249FC8u;
label_249fc8:
    // 0x249fc8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x249fc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_249fcc:
    // 0x249fcc: 0xc0cd790  jal         func_335E40
label_249fd0:
    if (ctx->pc == 0x249FD0u) {
        ctx->pc = 0x249FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FCCu;
        // 0x249fd0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249FD4u;
        goto label_249fd4;
    }
    ctx->pc = 0x249FCCu;
    SET_GPR_U32(ctx, 31, 0x249FD4u);
    ctx->pc = 0x249FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249FCCu;
    // 0x249fd0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x249FCCu, 0x249FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249FD4u;
label_249fd4:
    // 0x249fd4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x249fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_249fd8:
    // 0x249fd8: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x249fd8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_249fdc:
    // 0x249fdc: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x249fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_249fe0:
    // 0x249fe0: 0x826501b0  lb          $a1, 0x1B0($s3)
    ctx->pc = 0x249fe0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_249fe4:
    // 0x249fe4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x249fe4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_249fe8:
    // 0x249fe8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x249fe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_249fec:
    // 0x249fec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x249fecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_249ff0:
    // 0x249ff0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x249ff0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_249ff4:
    // 0x249ff4: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x249ff4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_249ff8:
    // 0x249ff8: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x249ff8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_249ffc:
    // 0x249ffc: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x249ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a000:
    // 0x24a000: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x24a000u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_24a004:
    // 0x24a004: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x24a004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24a008:
    // 0x24a008: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x24a008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24a00c:
    // 0x24a00c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x24a00cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24a010:
    // 0x24a010: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x24a010u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_24a014:
    // 0x24a014: 0x4a0003bf  vwaitq
    ctx->pc = 0x24a014u;
    // VWAITQ (Q already resolved in this runtime)
label_24a018:
    // 0x24a018: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x24a018u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24a01c:
    // 0x24a01c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x24a01cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_24a020:
    // 0x24a020: 0x7fa400b0  sq          $a0, 0xB0($sp)
    ctx->pc = 0x24a020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 4));
label_24a024:
    // 0x24a024: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x24a024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_24a028:
    // 0x24a028: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x24a028u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_24a02c:
    // 0x24a02c: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x24a02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24a030:
    // 0x24a030: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x24a030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a034:
    // 0x24a034: 0xc7a500a8  lwc1        $f5, 0xA8($sp)
    ctx->pc = 0x24a034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_24a038:
    // 0x24a038: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x24a038u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_24a03c:
    // 0x24a03c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24a03cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_24a040:
    // 0x24a040: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x24a040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24a044:
    // 0x24a044: 0xc7a300b8  lwc1        $f3, 0xB8($sp)
    ctx->pc = 0x24a044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24a048:
    // 0x24a048: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x24a048u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_24a04c:
    // 0x24a04c: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x24a04cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
label_24a050:
    // 0x24a050: 0x7fa400c0  sq          $a0, 0xC0($sp)
    ctx->pc = 0x24a050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 4));
label_24a054:
    // 0x24a054: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x24a054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_24a058:
    // 0x24a058: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x24a058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_24a05c:
    // 0x24a05c: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x24a05cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_24a060:
    // 0x24a060: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x24a060u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_24a064:
    // 0x24a064: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x24a064u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
label_24a068:
    // 0x24a068: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x24a068u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_24a06c:
    // 0x24a06c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x24a06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_24a070:
    // 0x24a070: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x24a070u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24a074:
    // 0x24a074: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x24a074u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_24a078:
    // 0x24a078: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x24a078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_24a07c:
    // 0x24a07c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x24a07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_24a080:
    // 0x24a080: 0x14a0002e  bnez        $a1, . + 4 + (0x2E << 2)
label_24a084:
    if (ctx->pc == 0x24A084u) {
        ctx->pc = 0x24A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A080u;
        // 0x24a084: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A088u;
        goto label_24a088;
    }
    ctx->pc = 0x24A080u;
    {
        const bool branch_taken_0x24a080 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A080u;
        // 0x24a084: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a080) {
            ctx->pc = 0x24A13Cu;
            goto label_24a13c;
        }
    }
    ctx->pc = 0x24A088u;
label_24a088:
    // 0x24a088: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x24a088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_24a08c:
    // 0x24a08c: 0x24020086  addiu       $v0, $zero, 0x86
    ctx->pc = 0x24a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_24a090:
    // 0x24a090: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x24a090u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
label_24a094:
    // 0x24a094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24a098:
    // 0x24a098: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x24a098u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_24a09c:
    // 0x24a09c: 0xa2350003  sb          $s5, 0x3($s1)
    ctx->pc = 0x24a09cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 21));
label_24a0a0:
    // 0x24a0a0: 0xc060b58  jal         func_182D60
label_24a0a4:
    if (ctx->pc == 0x24A0A4u) {
        ctx->pc = 0x24A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0A0u;
        // 0x24a0a4: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A0A8u;
        goto label_24a0a8;
    }
    ctx->pc = 0x24A0A0u;
    SET_GPR_U32(ctx, 31, 0x24A0A8u);
    ctx->pc = 0x24A0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A0A0u;
    // 0x24a0a4: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x24A0A0u, 0x24A0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A0A8u;
label_24a0a8:
    // 0x24a0a8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x24a0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_24a0ac:
    // 0x24a0ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24a0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24a0b0:
    // 0x24a0b0: 0xc06078e  jal         func_181E38
label_24a0b4:
    if (ctx->pc == 0x24A0B4u) {
        ctx->pc = 0x24A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0B0u;
        // 0x24a0b4: 0x34a50041  ori         $a1, $a1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A0B8u;
        goto label_24a0b8;
    }
    ctx->pc = 0x24A0B0u;
    SET_GPR_U32(ctx, 31, 0x24A0B8u);
    ctx->pc = 0x24A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A0B0u;
    // 0x24a0b4: 0x34a50041  ori         $a1, $a1, 0x41 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x24A0B0u, 0x24A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A0B8u;
label_24a0b8:
    // 0x24a0b8: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x24a0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_24a0bc:
    // 0x24a0bc: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x24a0bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_24a0c0:
    // 0x24a0c0: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x24a0c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_24a0c4:
    // 0x24a0c4: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x24a0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_24a0c8:
    // 0x24a0c8: 0xb3a3006b  sdl         $v1, 0x6B($sp)
    ctx->pc = 0x24a0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a0cc:
    // 0x24a0cc: 0xb7a30064  sdr         $v1, 0x64($sp)
    ctx->pc = 0x24a0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a0d0:
    // 0x24a0d0: 0xb3a40073  sdl         $a0, 0x73($sp)
    ctx->pc = 0x24a0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a0d4:
    // 0x24a0d4: 0xb7a4006c  sdr         $a0, 0x6C($sp)
    ctx->pc = 0x24a0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a0d8:
    // 0x24a0d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24a0dc:
    // 0x24a0dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24a0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24a0e0:
    // 0x24a0e0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x24a0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a0e4:
    // 0x24a0e4: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x24a0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a0e8:
    // 0x24a0e8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x24a0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_24a0ec:
    // 0x24a0ec: 0xc060b78  jal         func_182DE0
label_24a0f0:
    if (ctx->pc == 0x24A0F0u) {
        ctx->pc = 0x24A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0ECu;
        // 0x24a0f0: 0xe7a10064  swc1        $f1, 0x64($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A0F4u;
        goto label_24a0f4;
    }
    ctx->pc = 0x24A0ECu;
    SET_GPR_U32(ctx, 31, 0x24A0F4u);
    ctx->pc = 0x24A0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A0ECu;
    // 0x24a0f0: 0xe7a10064  swc1        $f1, 0x64($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x24A0ECu, 0x24A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A0F4u;
label_24a0f4:
    // 0x24a0f4: 0xc047ab8  jal         func_11EAE0
label_24a0f8:
    if (ctx->pc == 0x24A0F8u) {
        ctx->pc = 0x24A0FCu;
        goto label_24a0fc;
    }
    ctx->pc = 0x24A0F4u;
    SET_GPR_U32(ctx, 31, 0x24A0FCu);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x24A0F4u, 0x24A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A0FCu;
label_24a0fc:
    // 0x24a0fc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24a0fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_24a100:
    // 0x24a100: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
label_24a104:
    if (ctx->pc == 0x24A104u) {
        ctx->pc = 0x24A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A100u;
        // 0x24a104: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A108u;
        goto label_24a108;
    }
    ctx->pc = 0x24A100u;
    {
        const bool branch_taken_0x24a100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a100) {
            ctx->pc = 0x24A104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A100u;
            // 0x24a104: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A1F8u;
            goto label_24a1f8;
        }
    }
    ctx->pc = 0x24A108u;
label_24a108:
    // 0x24a108: 0x8fc4cd4c  lw          $a0, -0x32B4($fp)
    ctx->pc = 0x24a108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954316)));
label_24a10c:
    // 0x24a10c: 0xc0616ac  jal         func_185AB0
label_24a110:
    if (ctx->pc == 0x24A110u) {
        ctx->pc = 0x24A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A10Cu;
        // 0x24a110: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A114u;
        goto label_24a114;
    }
    ctx->pc = 0x24A10Cu;
    SET_GPR_U32(ctx, 31, 0x24A114u);
    ctx->pc = 0x24A110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A10Cu;
    // 0x24a110: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x24A10Cu, 0x24A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A114u;
label_24a114:
    // 0x24a114: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24a114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24a118:
    // 0x24a118: 0x12400037  beqz        $s2, . + 4 + (0x37 << 2)
label_24a11c:
    if (ctx->pc == 0x24A11Cu) {
        ctx->pc = 0x24A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A118u;
        // 0x24a11c: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A120u;
        goto label_24a120;
    }
    ctx->pc = 0x24A118u;
    {
        const bool branch_taken_0x24a118 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A118u;
        // 0x24a11c: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a118) {
            ctx->pc = 0x24A1F8u;
            goto label_24a1f8;
        }
    }
    ctx->pc = 0x24A120u;
label_24a120:
    // 0x24a120: 0x92420011  lbu         $v0, 0x11($s2)
    ctx->pc = 0x24a120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
label_24a124:
    // 0x24a124: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_24a128:
    if (ctx->pc == 0x24A128u) {
        ctx->pc = 0x24A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A124u;
        // 0x24a128: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A12Cu;
        goto label_24a12c;
    }
    ctx->pc = 0x24A124u;
    {
        const bool branch_taken_0x24a124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A124u;
        // 0x24a128: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a124) {
            ctx->pc = 0x24A1F8u;
            goto label_24a1f8;
        }
    }
    ctx->pc = 0x24A12Cu;
label_24a12c:
    // 0x24a12c: 0xc060b78  jal         func_182DE0
label_24a130:
    if (ctx->pc == 0x24A130u) {
        ctx->pc = 0x24A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A12Cu;
        // 0x24a130: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A134u;
        goto label_24a134;
    }
    ctx->pc = 0x24A12Cu;
    SET_GPR_U32(ctx, 31, 0x24A134u);
    ctx->pc = 0x24A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A12Cu;
    // 0x24a130: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x24A12Cu, 0x24A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A134u;
label_24a134:
    // 0x24a134: 0x10000030  b           . + 4 + (0x30 << 2)
label_24a138:
    if (ctx->pc == 0x24A138u) {
        ctx->pc = 0x24A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A134u;
        // 0x24a138: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A13Cu;
        goto label_24a13c;
    }
    ctx->pc = 0x24A134u;
    {
        const bool branch_taken_0x24a134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A134u;
        // 0x24a138: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a134) {
            ctx->pc = 0x24A1F8u;
            goto label_24a1f8;
        }
    }
    ctx->pc = 0x24A13Cu;
label_24a13c:
    // 0x24a13c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a140:
    // 0x24a140: 0x14a2002d  bne         $a1, $v0, . + 4 + (0x2D << 2)
label_24a144:
    if (ctx->pc == 0x24A144u) {
        ctx->pc = 0x24A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A140u;
        // 0x24a144: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A148u;
        goto label_24a148;
    }
    ctx->pc = 0x24A140u;
    {
        const bool branch_taken_0x24a140 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A140u;
        // 0x24a144: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a140) {
            ctx->pc = 0x24A1F8u;
            goto label_24a1f8;
        }
    }
    ctx->pc = 0x24A148u;
label_24a148:
    // 0x24a148: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x24a148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_24a14c:
    // 0x24a14c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x24a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_24a150:
    // 0x24a150: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x24a150u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_24a154:
    // 0x24a154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24a158:
    // 0x24a158: 0xa2350003  sb          $s5, 0x3($s1)
    ctx->pc = 0x24a158u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 21));
label_24a15c:
    // 0x24a15c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x24a15cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_24a160:
    // 0x24a160: 0xc060b58  jal         func_182D60
label_24a164:
    if (ctx->pc == 0x24A164u) {
        ctx->pc = 0x24A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A160u;
        // 0x24a164: 0xa2200002  sb          $zero, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A168u;
        goto label_24a168;
    }
    ctx->pc = 0x24A160u;
    SET_GPR_U32(ctx, 31, 0x24A168u);
    ctx->pc = 0x24A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A160u;
    // 0x24a164: 0xa2200002  sb          $zero, 0x2($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x24A160u, 0x24A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A168u;
label_24a168:
    // 0x24a168: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x24a168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_24a16c:
    // 0x24a16c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24a16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24a170:
    // 0x24a170: 0xc06078e  jal         func_181E38
label_24a174:
    if (ctx->pc == 0x24A174u) {
        ctx->pc = 0x24A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A170u;
        // 0x24a174: 0x34a50042  ori         $a1, $a1, 0x42 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)66);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A178u;
        goto label_24a178;
    }
    ctx->pc = 0x24A170u;
    SET_GPR_U32(ctx, 31, 0x24A178u);
    ctx->pc = 0x24A174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A170u;
    // 0x24a174: 0x34a50042  ori         $a1, $a1, 0x42 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)66);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x24A170u, 0x24A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A178u;
label_24a178:
    // 0x24a178: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x24a178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_24a17c:
    // 0x24a17c: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x24a17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_24a180:
    // 0x24a180: 0x6848000f  ldl         $t0, 0xF($v0)
    ctx->pc = 0x24a180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_24a184:
    // 0x24a184: 0x6c480008  ldr         $t0, 0x8($v0)
    ctx->pc = 0x24a184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_24a188:
    // 0x24a188: 0xb3a7006b  sdl         $a3, 0x6B($sp)
    ctx->pc = 0x24a188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a18c:
    // 0x24a18c: 0xb7a70064  sdr         $a3, 0x64($sp)
    ctx->pc = 0x24a18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a190:
    // 0x24a190: 0xb3a80073  sdl         $t0, 0x73($sp)
    ctx->pc = 0x24a190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a194:
    // 0x24a194: 0xb7a8006c  sdr         $t0, 0x6C($sp)
    ctx->pc = 0x24a194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a198:
    // 0x24a198: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24a198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24a19c:
    // 0x24a19c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24a1a0:
    // 0x24a1a0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x24a1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a1a4:
    // 0x24a1a4: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x24a1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a1a8:
    // 0x24a1a8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x24a1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_24a1ac:
    // 0x24a1ac: 0xc060b78  jal         func_182DE0
label_24a1b0:
    if (ctx->pc == 0x24A1B0u) {
        ctx->pc = 0x24A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1ACu;
        // 0x24a1b0: 0xe7a10064  swc1        $f1, 0x64($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A1B4u;
        goto label_24a1b4;
    }
    ctx->pc = 0x24A1ACu;
    SET_GPR_U32(ctx, 31, 0x24A1B4u);
    ctx->pc = 0x24A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A1ACu;
    // 0x24a1b0: 0xe7a10064  swc1        $f1, 0x64($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x24A1ACu, 0x24A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1B4u;
label_24a1b4:
    // 0x24a1b4: 0xc047ab8  jal         func_11EAE0
label_24a1b8:
    if (ctx->pc == 0x24A1B8u) {
        ctx->pc = 0x24A1BCu;
        goto label_24a1bc;
    }
    ctx->pc = 0x24A1B4u;
    SET_GPR_U32(ctx, 31, 0x24A1BCu);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x24A1B4u, 0x24A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1BCu;
label_24a1bc:
    // 0x24a1bc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24a1bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_24a1c0:
    // 0x24a1c0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_24a1c4:
    if (ctx->pc == 0x24A1C4u) {
        ctx->pc = 0x24A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1C0u;
        // 0x24a1c4: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A1C8u;
        goto label_24a1c8;
    }
    ctx->pc = 0x24A1C0u;
    {
        const bool branch_taken_0x24a1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1C0u;
        // 0x24a1c4: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1c0) {
            ctx->pc = 0x24A1F8u;
            goto label_24a1f8;
        }
    }
    ctx->pc = 0x24A1C8u;
label_24a1c8:
    // 0x24a1c8: 0x8fc4cd4c  lw          $a0, -0x32B4($fp)
    ctx->pc = 0x24a1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954316)));
label_24a1cc:
    // 0x24a1cc: 0xc0616ac  jal         func_185AB0
label_24a1d0:
    if (ctx->pc == 0x24A1D0u) {
        ctx->pc = 0x24A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1CCu;
        // 0x24a1d0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A1D4u;
        goto label_24a1d4;
    }
    ctx->pc = 0x24A1CCu;
    SET_GPR_U32(ctx, 31, 0x24A1D4u);
    ctx->pc = 0x24A1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A1CCu;
    // 0x24a1d0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x24A1CCu, 0x24A1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1D4u;
label_24a1d4:
    // 0x24a1d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24a1d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24a1d8:
    // 0x24a1d8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_24a1dc:
    if (ctx->pc == 0x24A1DCu) {
        ctx->pc = 0x24A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1D8u;
        // 0x24a1dc: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A1E0u;
        goto label_24a1e0;
    }
    ctx->pc = 0x24A1D8u;
    {
        const bool branch_taken_0x24a1d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1D8u;
        // 0x24a1dc: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1d8) {
            ctx->pc = 0x24A1F8u;
            goto label_24a1f8;
        }
    }
    ctx->pc = 0x24A1E0u;
label_24a1e0:
    // 0x24a1e0: 0x92420011  lbu         $v0, 0x11($s2)
    ctx->pc = 0x24a1e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
label_24a1e4:
    // 0x24a1e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24a1e8:
    if (ctx->pc == 0x24A1E8u) {
        ctx->pc = 0x24A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1E4u;
        // 0x24a1e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A1ECu;
        goto label_24a1ec;
    }
    ctx->pc = 0x24A1E4u;
    {
        const bool branch_taken_0x24a1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1E4u;
        // 0x24a1e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1e4) {
            ctx->pc = 0x24A1F8u;
            goto label_24a1f8;
        }
    }
    ctx->pc = 0x24A1ECu;
label_24a1ec:
    // 0x24a1ec: 0xc060b78  jal         func_182DE0
label_24a1f0:
    if (ctx->pc == 0x24A1F0u) {
        ctx->pc = 0x24A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1ECu;
        // 0x24a1f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A1F4u;
        goto label_24a1f4;
    }
    ctx->pc = 0x24A1ECu;
    SET_GPR_U32(ctx, 31, 0x24A1F4u);
    ctx->pc = 0x24A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A1ECu;
    // 0x24a1f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x24A1ECu, 0x24A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1F4u;
label_24a1f4:
    // 0x24a1f4: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x24a1f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_24a1f8:
    // 0x24a1f8: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x24a1f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_24a1fc:
    // 0x24a1fc: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x24a1fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_24a200:
    // 0x24a200: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x24a200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_24a204:
    // 0x24a204: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x24a204u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_24a208:
    // 0x24a208: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x24a208u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_24a20c:
    // 0x24a20c: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x24a20cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_24a210:
    // 0x24a210: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x24a210u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_24a214:
    // 0x24a214: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x24a214u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_24a218:
    // 0x24a218: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x24a218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_24a21c:
    // 0x24a21c: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x24a21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_24a220:
    // 0x24a220: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x24a220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_24a224:
    // 0x24a224: 0x3e00008  jr          $ra
label_24a228:
    if (ctx->pc == 0x24A228u) {
        ctx->pc = 0x24A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A224u;
        // 0x24a228: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A22Cu;
        goto label_24a22c;
    }
    ctx->pc = 0x24A224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A224u;
        // 0x24a228: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A22Cu;
label_24a22c:
    // 0x24a22c: 0x0  nop
    ctx->pc = 0x24a22cu;
    // NOP
    ctx->pc = 0x24a230u;
}
