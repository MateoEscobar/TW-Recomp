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

// Function: sub_00159C08
// Address: 0x159c08 - 0x15a208
void sub_00159C08_0x159c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159C08_0x159c08");
#endif

    switch (ctx->pc) {
        case 0x159c08u: goto label_159c08;
        case 0x159c0cu: goto label_159c0c;
        case 0x159c10u: goto label_159c10;
        case 0x159c14u: goto label_159c14;
        case 0x159c18u: goto label_159c18;
        case 0x159c1cu: goto label_159c1c;
        case 0x159c20u: goto label_159c20;
        case 0x159c24u: goto label_159c24;
        case 0x159c28u: goto label_159c28;
        case 0x159c2cu: goto label_159c2c;
        case 0x159c30u: goto label_159c30;
        case 0x159c34u: goto label_159c34;
        case 0x159c38u: goto label_159c38;
        case 0x159c3cu: goto label_159c3c;
        case 0x159c40u: goto label_159c40;
        case 0x159c44u: goto label_159c44;
        case 0x159c48u: goto label_159c48;
        case 0x159c4cu: goto label_159c4c;
        case 0x159c50u: goto label_159c50;
        case 0x159c54u: goto label_159c54;
        case 0x159c58u: goto label_159c58;
        case 0x159c5cu: goto label_159c5c;
        case 0x159c60u: goto label_159c60;
        case 0x159c64u: goto label_159c64;
        case 0x159c68u: goto label_159c68;
        case 0x159c6cu: goto label_159c6c;
        case 0x159c70u: goto label_159c70;
        case 0x159c74u: goto label_159c74;
        case 0x159c78u: goto label_159c78;
        case 0x159c7cu: goto label_159c7c;
        case 0x159c80u: goto label_159c80;
        case 0x159c84u: goto label_159c84;
        case 0x159c88u: goto label_159c88;
        case 0x159c8cu: goto label_159c8c;
        case 0x159c90u: goto label_159c90;
        case 0x159c94u: goto label_159c94;
        case 0x159c98u: goto label_159c98;
        case 0x159c9cu: goto label_159c9c;
        case 0x159ca0u: goto label_159ca0;
        case 0x159ca4u: goto label_159ca4;
        case 0x159ca8u: goto label_159ca8;
        case 0x159cacu: goto label_159cac;
        case 0x159cb0u: goto label_159cb0;
        case 0x159cb4u: goto label_159cb4;
        case 0x159cb8u: goto label_159cb8;
        case 0x159cbcu: goto label_159cbc;
        case 0x159cc0u: goto label_159cc0;
        case 0x159cc4u: goto label_159cc4;
        case 0x159cc8u: goto label_159cc8;
        case 0x159cccu: goto label_159ccc;
        case 0x159cd0u: goto label_159cd0;
        case 0x159cd4u: goto label_159cd4;
        case 0x159cd8u: goto label_159cd8;
        case 0x159cdcu: goto label_159cdc;
        case 0x159ce0u: goto label_159ce0;
        case 0x159ce4u: goto label_159ce4;
        case 0x159ce8u: goto label_159ce8;
        case 0x159cecu: goto label_159cec;
        case 0x159cf0u: goto label_159cf0;
        case 0x159cf4u: goto label_159cf4;
        case 0x159cf8u: goto label_159cf8;
        case 0x159cfcu: goto label_159cfc;
        case 0x159d00u: goto label_159d00;
        case 0x159d04u: goto label_159d04;
        case 0x159d08u: goto label_159d08;
        case 0x159d0cu: goto label_159d0c;
        case 0x159d10u: goto label_159d10;
        case 0x159d14u: goto label_159d14;
        case 0x159d18u: goto label_159d18;
        case 0x159d1cu: goto label_159d1c;
        case 0x159d20u: goto label_159d20;
        case 0x159d24u: goto label_159d24;
        case 0x159d28u: goto label_159d28;
        case 0x159d2cu: goto label_159d2c;
        case 0x159d30u: goto label_159d30;
        case 0x159d34u: goto label_159d34;
        case 0x159d38u: goto label_159d38;
        case 0x159d3cu: goto label_159d3c;
        case 0x159d40u: goto label_159d40;
        case 0x159d44u: goto label_159d44;
        case 0x159d48u: goto label_159d48;
        case 0x159d4cu: goto label_159d4c;
        case 0x159d50u: goto label_159d50;
        case 0x159d54u: goto label_159d54;
        case 0x159d58u: goto label_159d58;
        case 0x159d5cu: goto label_159d5c;
        case 0x159d60u: goto label_159d60;
        case 0x159d64u: goto label_159d64;
        case 0x159d68u: goto label_159d68;
        case 0x159d6cu: goto label_159d6c;
        case 0x159d70u: goto label_159d70;
        case 0x159d74u: goto label_159d74;
        case 0x159d78u: goto label_159d78;
        case 0x159d7cu: goto label_159d7c;
        case 0x159d80u: goto label_159d80;
        case 0x159d84u: goto label_159d84;
        case 0x159d88u: goto label_159d88;
        case 0x159d8cu: goto label_159d8c;
        case 0x159d90u: goto label_159d90;
        case 0x159d94u: goto label_159d94;
        case 0x159d98u: goto label_159d98;
        case 0x159d9cu: goto label_159d9c;
        case 0x159da0u: goto label_159da0;
        case 0x159da4u: goto label_159da4;
        case 0x159da8u: goto label_159da8;
        case 0x159dacu: goto label_159dac;
        case 0x159db0u: goto label_159db0;
        case 0x159db4u: goto label_159db4;
        case 0x159db8u: goto label_159db8;
        case 0x159dbcu: goto label_159dbc;
        case 0x159dc0u: goto label_159dc0;
        case 0x159dc4u: goto label_159dc4;
        case 0x159dc8u: goto label_159dc8;
        case 0x159dccu: goto label_159dcc;
        case 0x159dd0u: goto label_159dd0;
        case 0x159dd4u: goto label_159dd4;
        case 0x159dd8u: goto label_159dd8;
        case 0x159ddcu: goto label_159ddc;
        case 0x159de0u: goto label_159de0;
        case 0x159de4u: goto label_159de4;
        case 0x159de8u: goto label_159de8;
        case 0x159decu: goto label_159dec;
        case 0x159df0u: goto label_159df0;
        case 0x159df4u: goto label_159df4;
        case 0x159df8u: goto label_159df8;
        case 0x159dfcu: goto label_159dfc;
        case 0x159e00u: goto label_159e00;
        case 0x159e04u: goto label_159e04;
        case 0x159e08u: goto label_159e08;
        case 0x159e0cu: goto label_159e0c;
        case 0x159e10u: goto label_159e10;
        case 0x159e14u: goto label_159e14;
        case 0x159e18u: goto label_159e18;
        case 0x159e1cu: goto label_159e1c;
        case 0x159e20u: goto label_159e20;
        case 0x159e24u: goto label_159e24;
        case 0x159e28u: goto label_159e28;
        case 0x159e2cu: goto label_159e2c;
        case 0x159e30u: goto label_159e30;
        case 0x159e34u: goto label_159e34;
        case 0x159e38u: goto label_159e38;
        case 0x159e3cu: goto label_159e3c;
        case 0x159e40u: goto label_159e40;
        case 0x159e44u: goto label_159e44;
        case 0x159e48u: goto label_159e48;
        case 0x159e4cu: goto label_159e4c;
        case 0x159e50u: goto label_159e50;
        case 0x159e54u: goto label_159e54;
        case 0x159e58u: goto label_159e58;
        case 0x159e5cu: goto label_159e5c;
        case 0x159e60u: goto label_159e60;
        case 0x159e64u: goto label_159e64;
        case 0x159e68u: goto label_159e68;
        case 0x159e6cu: goto label_159e6c;
        case 0x159e70u: goto label_159e70;
        case 0x159e74u: goto label_159e74;
        case 0x159e78u: goto label_159e78;
        case 0x159e7cu: goto label_159e7c;
        case 0x159e80u: goto label_159e80;
        case 0x159e84u: goto label_159e84;
        case 0x159e88u: goto label_159e88;
        case 0x159e8cu: goto label_159e8c;
        case 0x159e90u: goto label_159e90;
        case 0x159e94u: goto label_159e94;
        case 0x159e98u: goto label_159e98;
        case 0x159e9cu: goto label_159e9c;
        case 0x159ea0u: goto label_159ea0;
        case 0x159ea4u: goto label_159ea4;
        case 0x159ea8u: goto label_159ea8;
        case 0x159eacu: goto label_159eac;
        case 0x159eb0u: goto label_159eb0;
        case 0x159eb4u: goto label_159eb4;
        case 0x159eb8u: goto label_159eb8;
        case 0x159ebcu: goto label_159ebc;
        case 0x159ec0u: goto label_159ec0;
        case 0x159ec4u: goto label_159ec4;
        case 0x159ec8u: goto label_159ec8;
        case 0x159eccu: goto label_159ecc;
        case 0x159ed0u: goto label_159ed0;
        case 0x159ed4u: goto label_159ed4;
        case 0x159ed8u: goto label_159ed8;
        case 0x159edcu: goto label_159edc;
        case 0x159ee0u: goto label_159ee0;
        case 0x159ee4u: goto label_159ee4;
        case 0x159ee8u: goto label_159ee8;
        case 0x159eecu: goto label_159eec;
        case 0x159ef0u: goto label_159ef0;
        case 0x159ef4u: goto label_159ef4;
        case 0x159ef8u: goto label_159ef8;
        case 0x159efcu: goto label_159efc;
        case 0x159f00u: goto label_159f00;
        case 0x159f04u: goto label_159f04;
        case 0x159f08u: goto label_159f08;
        case 0x159f0cu: goto label_159f0c;
        case 0x159f10u: goto label_159f10;
        case 0x159f14u: goto label_159f14;
        case 0x159f18u: goto label_159f18;
        case 0x159f1cu: goto label_159f1c;
        case 0x159f20u: goto label_159f20;
        case 0x159f24u: goto label_159f24;
        case 0x159f28u: goto label_159f28;
        case 0x159f2cu: goto label_159f2c;
        case 0x159f30u: goto label_159f30;
        case 0x159f34u: goto label_159f34;
        case 0x159f38u: goto label_159f38;
        case 0x159f3cu: goto label_159f3c;
        case 0x159f40u: goto label_159f40;
        case 0x159f44u: goto label_159f44;
        case 0x159f48u: goto label_159f48;
        case 0x159f4cu: goto label_159f4c;
        case 0x159f50u: goto label_159f50;
        case 0x159f54u: goto label_159f54;
        case 0x159f58u: goto label_159f58;
        case 0x159f5cu: goto label_159f5c;
        case 0x159f60u: goto label_159f60;
        case 0x159f64u: goto label_159f64;
        case 0x159f68u: goto label_159f68;
        case 0x159f6cu: goto label_159f6c;
        case 0x159f70u: goto label_159f70;
        case 0x159f74u: goto label_159f74;
        case 0x159f78u: goto label_159f78;
        case 0x159f7cu: goto label_159f7c;
        case 0x159f80u: goto label_159f80;
        case 0x159f84u: goto label_159f84;
        case 0x159f88u: goto label_159f88;
        case 0x159f8cu: goto label_159f8c;
        case 0x159f90u: goto label_159f90;
        case 0x159f94u: goto label_159f94;
        case 0x159f98u: goto label_159f98;
        case 0x159f9cu: goto label_159f9c;
        case 0x159fa0u: goto label_159fa0;
        case 0x159fa4u: goto label_159fa4;
        case 0x159fa8u: goto label_159fa8;
        case 0x159facu: goto label_159fac;
        case 0x159fb0u: goto label_159fb0;
        case 0x159fb4u: goto label_159fb4;
        case 0x159fb8u: goto label_159fb8;
        case 0x159fbcu: goto label_159fbc;
        case 0x159fc0u: goto label_159fc0;
        case 0x159fc4u: goto label_159fc4;
        case 0x159fc8u: goto label_159fc8;
        case 0x159fccu: goto label_159fcc;
        case 0x159fd0u: goto label_159fd0;
        case 0x159fd4u: goto label_159fd4;
        case 0x159fd8u: goto label_159fd8;
        case 0x159fdcu: goto label_159fdc;
        case 0x159fe0u: goto label_159fe0;
        case 0x159fe4u: goto label_159fe4;
        case 0x159fe8u: goto label_159fe8;
        case 0x159fecu: goto label_159fec;
        case 0x159ff0u: goto label_159ff0;
        case 0x159ff4u: goto label_159ff4;
        case 0x159ff8u: goto label_159ff8;
        case 0x159ffcu: goto label_159ffc;
        case 0x15a000u: goto label_15a000;
        case 0x15a004u: goto label_15a004;
        case 0x15a008u: goto label_15a008;
        case 0x15a00cu: goto label_15a00c;
        case 0x15a010u: goto label_15a010;
        case 0x15a014u: goto label_15a014;
        case 0x15a018u: goto label_15a018;
        case 0x15a01cu: goto label_15a01c;
        case 0x15a020u: goto label_15a020;
        case 0x15a024u: goto label_15a024;
        case 0x15a028u: goto label_15a028;
        case 0x15a02cu: goto label_15a02c;
        case 0x15a030u: goto label_15a030;
        case 0x15a034u: goto label_15a034;
        case 0x15a038u: goto label_15a038;
        case 0x15a03cu: goto label_15a03c;
        case 0x15a040u: goto label_15a040;
        case 0x15a044u: goto label_15a044;
        case 0x15a048u: goto label_15a048;
        case 0x15a04cu: goto label_15a04c;
        case 0x15a050u: goto label_15a050;
        case 0x15a054u: goto label_15a054;
        case 0x15a058u: goto label_15a058;
        case 0x15a05cu: goto label_15a05c;
        case 0x15a060u: goto label_15a060;
        case 0x15a064u: goto label_15a064;
        case 0x15a068u: goto label_15a068;
        case 0x15a06cu: goto label_15a06c;
        case 0x15a070u: goto label_15a070;
        case 0x15a074u: goto label_15a074;
        case 0x15a078u: goto label_15a078;
        case 0x15a07cu: goto label_15a07c;
        case 0x15a080u: goto label_15a080;
        case 0x15a084u: goto label_15a084;
        case 0x15a088u: goto label_15a088;
        case 0x15a08cu: goto label_15a08c;
        case 0x15a090u: goto label_15a090;
        case 0x15a094u: goto label_15a094;
        case 0x15a098u: goto label_15a098;
        case 0x15a09cu: goto label_15a09c;
        case 0x15a0a0u: goto label_15a0a0;
        case 0x15a0a4u: goto label_15a0a4;
        case 0x15a0a8u: goto label_15a0a8;
        case 0x15a0acu: goto label_15a0ac;
        case 0x15a0b0u: goto label_15a0b0;
        case 0x15a0b4u: goto label_15a0b4;
        case 0x15a0b8u: goto label_15a0b8;
        case 0x15a0bcu: goto label_15a0bc;
        case 0x15a0c0u: goto label_15a0c0;
        case 0x15a0c4u: goto label_15a0c4;
        case 0x15a0c8u: goto label_15a0c8;
        case 0x15a0ccu: goto label_15a0cc;
        case 0x15a0d0u: goto label_15a0d0;
        case 0x15a0d4u: goto label_15a0d4;
        case 0x15a0d8u: goto label_15a0d8;
        case 0x15a0dcu: goto label_15a0dc;
        case 0x15a0e0u: goto label_15a0e0;
        case 0x15a0e4u: goto label_15a0e4;
        case 0x15a0e8u: goto label_15a0e8;
        case 0x15a0ecu: goto label_15a0ec;
        case 0x15a0f0u: goto label_15a0f0;
        case 0x15a0f4u: goto label_15a0f4;
        case 0x15a0f8u: goto label_15a0f8;
        case 0x15a0fcu: goto label_15a0fc;
        case 0x15a100u: goto label_15a100;
        case 0x15a104u: goto label_15a104;
        case 0x15a108u: goto label_15a108;
        case 0x15a10cu: goto label_15a10c;
        case 0x15a110u: goto label_15a110;
        case 0x15a114u: goto label_15a114;
        case 0x15a118u: goto label_15a118;
        case 0x15a11cu: goto label_15a11c;
        case 0x15a120u: goto label_15a120;
        case 0x15a124u: goto label_15a124;
        case 0x15a128u: goto label_15a128;
        case 0x15a12cu: goto label_15a12c;
        case 0x15a130u: goto label_15a130;
        case 0x15a134u: goto label_15a134;
        case 0x15a138u: goto label_15a138;
        case 0x15a13cu: goto label_15a13c;
        case 0x15a140u: goto label_15a140;
        case 0x15a144u: goto label_15a144;
        case 0x15a148u: goto label_15a148;
        case 0x15a14cu: goto label_15a14c;
        case 0x15a150u: goto label_15a150;
        case 0x15a154u: goto label_15a154;
        case 0x15a158u: goto label_15a158;
        case 0x15a15cu: goto label_15a15c;
        case 0x15a160u: goto label_15a160;
        case 0x15a164u: goto label_15a164;
        case 0x15a168u: goto label_15a168;
        case 0x15a16cu: goto label_15a16c;
        case 0x15a170u: goto label_15a170;
        case 0x15a174u: goto label_15a174;
        case 0x15a178u: goto label_15a178;
        case 0x15a17cu: goto label_15a17c;
        case 0x15a180u: goto label_15a180;
        case 0x15a184u: goto label_15a184;
        case 0x15a188u: goto label_15a188;
        case 0x15a18cu: goto label_15a18c;
        case 0x15a190u: goto label_15a190;
        case 0x15a194u: goto label_15a194;
        case 0x15a198u: goto label_15a198;
        case 0x15a19cu: goto label_15a19c;
        case 0x15a1a0u: goto label_15a1a0;
        case 0x15a1a4u: goto label_15a1a4;
        case 0x15a1a8u: goto label_15a1a8;
        case 0x15a1acu: goto label_15a1ac;
        case 0x15a1b0u: goto label_15a1b0;
        case 0x15a1b4u: goto label_15a1b4;
        case 0x15a1b8u: goto label_15a1b8;
        case 0x15a1bcu: goto label_15a1bc;
        case 0x15a1c0u: goto label_15a1c0;
        case 0x15a1c4u: goto label_15a1c4;
        case 0x15a1c8u: goto label_15a1c8;
        case 0x15a1ccu: goto label_15a1cc;
        case 0x15a1d0u: goto label_15a1d0;
        case 0x15a1d4u: goto label_15a1d4;
        case 0x15a1d8u: goto label_15a1d8;
        case 0x15a1dcu: goto label_15a1dc;
        case 0x15a1e0u: goto label_15a1e0;
        case 0x15a1e4u: goto label_15a1e4;
        case 0x15a1e8u: goto label_15a1e8;
        case 0x15a1ecu: goto label_15a1ec;
        case 0x15a1f0u: goto label_15a1f0;
        case 0x15a1f4u: goto label_15a1f4;
        case 0x15a1f8u: goto label_15a1f8;
        case 0x15a1fcu: goto label_15a1fc;
        case 0x15a200u: goto label_15a200;
        case 0x15a204u: goto label_15a204;
        default: break;
    }

    ctx->pc = 0x159c08u;

label_159c08:
    // 0x159c08: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x159c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_159c0c:
    // 0x159c0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x159c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_159c10:
    // 0x159c10: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x159c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
label_159c14:
    // 0x159c14: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x159c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
label_159c18:
    // 0x159c18: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x159c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_159c1c:
    // 0x159c1c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x159c1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159c20:
    // 0x159c20: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x159c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
label_159c24:
    // 0x159c24: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x159c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
label_159c28:
    // 0x159c28: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x159c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
label_159c2c:
    // 0x159c2c: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x159c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
label_159c30:
    // 0x159c30: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x159c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
label_159c34:
    // 0x159c34: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x159c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_159c38:
    // 0x159c38: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x159c38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_159c3c:
    // 0x159c3c: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x159c3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_159c40:
    // 0x159c40: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x159c40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_159c44:
    // 0x159c44: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x159c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
label_159c48:
    // 0x159c48: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x159c48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_159c4c:
    // 0x159c4c: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x159c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_159c50:
    // 0x159c50: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_159c54:
    if (ctx->pc == 0x159C54u) {
        ctx->pc = 0x159C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C50u;
        // 0x159c54: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159C58u;
        goto label_159c58;
    }
    ctx->pc = 0x159C50u;
    {
        const bool branch_taken_0x159c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C50u;
        // 0x159c54: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c50) {
            ctx->pc = 0x159CF0u;
            goto label_159cf0;
        }
    }
    ctx->pc = 0x159C58u;
label_159c58:
    // 0x159c58: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x159c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_159c5c:
    // 0x159c5c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x159c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_159c60:
    // 0x159c60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x159c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159c64:
    // 0x159c64: 0x8c630120  lw          $v1, 0x120($v1)
    ctx->pc = 0x159c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_159c68:
    // 0x159c68: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x159c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_159c6c:
    // 0x159c6c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_159c70:
    if (ctx->pc == 0x159C70u) {
        ctx->pc = 0x159C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C6Cu;
        // 0x159c70: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159C74u;
        goto label_159c74;
    }
    ctx->pc = 0x159C6Cu;
    {
        const bool branch_taken_0x159c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C6Cu;
        // 0x159c70: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c6c) {
            ctx->pc = 0x159D90u;
            goto label_159d90;
        }
    }
    ctx->pc = 0x159C74u;
label_159c74:
    // 0x159c74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x159c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_159c78:
    // 0x159c78: 0x2442efd0  addiu       $v0, $v0, -0x1030
    ctx->pc = 0x159c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963152));
label_159c7c:
    // 0x159c7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x159c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_159c80:
    // 0x159c80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x159c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_159c84:
    // 0x159c84: 0x800008  jr          $a0
label_159c88:
    if (ctx->pc == 0x159C88u) {
        ctx->pc = 0x159C8Cu;
        goto label_159c8c;
    }
    ctx->pc = 0x159C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159C8Cu: goto label_159c8c;
            case 0x159CA0u: goto label_159ca0;
            case 0x159CB4u: goto label_159cb4;
            case 0x159CC8u: goto label_159cc8;
            case 0x159CDCu: goto label_159cdc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159C84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x159C8Cu;
label_159c8c:
    // 0x159c8c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x159c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_159c90:
    // 0x159c90: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x159c90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_159c94:
    // 0x159c94: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x159c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_159c98:
    // 0x159c98: 0x1000003a  b           . + 4 + (0x3A << 2)
label_159c9c:
    if (ctx->pc == 0x159C9Cu) {
        ctx->pc = 0x159C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C98u;
        // 0x159c9c: 0x24a5eef0  addiu       $a1, $a1, -0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159CA0u;
        goto label_159ca0;
    }
    ctx->pc = 0x159C98u;
    {
        const bool branch_taken_0x159c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C98u;
        // 0x159c9c: 0x24a5eef0  addiu       $a1, $a1, -0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c98) {
            ctx->pc = 0x159D84u;
            goto label_159d84;
        }
    }
    ctx->pc = 0x159CA0u;
label_159ca0:
    // 0x159ca0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x159ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_159ca4:
    // 0x159ca4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x159ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_159ca8:
    // 0x159ca8: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x159ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_159cac:
    // 0x159cac: 0x10000035  b           . + 4 + (0x35 << 2)
label_159cb0:
    if (ctx->pc == 0x159CB0u) {
        ctx->pc = 0x159CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CACu;
        // 0x159cb0: 0x24a5ef00  addiu       $a1, $a1, -0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159CB4u;
        goto label_159cb4;
    }
    ctx->pc = 0x159CACu;
    {
        const bool branch_taken_0x159cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CACu;
        // 0x159cb0: 0x24a5ef00  addiu       $a1, $a1, -0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cac) {
            ctx->pc = 0x159D84u;
            goto label_159d84;
        }
    }
    ctx->pc = 0x159CB4u;
label_159cb4:
    // 0x159cb4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x159cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_159cb8:
    // 0x159cb8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x159cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_159cbc:
    // 0x159cbc: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x159cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_159cc0:
    // 0x159cc0: 0x10000030  b           . + 4 + (0x30 << 2)
label_159cc4:
    if (ctx->pc == 0x159CC4u) {
        ctx->pc = 0x159CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CC0u;
        // 0x159cc4: 0x24a5ef18  addiu       $a1, $a1, -0x10E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159CC8u;
        goto label_159cc8;
    }
    ctx->pc = 0x159CC0u;
    {
        const bool branch_taken_0x159cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CC0u;
        // 0x159cc4: 0x24a5ef18  addiu       $a1, $a1, -0x10E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cc0) {
            ctx->pc = 0x159D84u;
            goto label_159d84;
        }
    }
    ctx->pc = 0x159CC8u;
label_159cc8:
    // 0x159cc8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x159cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_159ccc:
    // 0x159ccc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x159cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_159cd0:
    // 0x159cd0: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x159cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_159cd4:
    // 0x159cd4: 0x1000002b  b           . + 4 + (0x2B << 2)
label_159cd8:
    if (ctx->pc == 0x159CD8u) {
        ctx->pc = 0x159CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CD4u;
        // 0x159cd8: 0x24a5ef30  addiu       $a1, $a1, -0x10D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159CDCu;
        goto label_159cdc;
    }
    ctx->pc = 0x159CD4u;
    {
        const bool branch_taken_0x159cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CD4u;
        // 0x159cd8: 0x24a5ef30  addiu       $a1, $a1, -0x10D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cd4) {
            ctx->pc = 0x159D84u;
            goto label_159d84;
        }
    }
    ctx->pc = 0x159CDCu;
label_159cdc:
    // 0x159cdc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x159cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_159ce0:
    // 0x159ce0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x159ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_159ce4:
    // 0x159ce4: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x159ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_159ce8:
    // 0x159ce8: 0x10000026  b           . + 4 + (0x26 << 2)
label_159cec:
    if (ctx->pc == 0x159CECu) {
        ctx->pc = 0x159CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CE8u;
        // 0x159cec: 0x24a5ef48  addiu       $a1, $a1, -0x10B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159CF0u;
        goto label_159cf0;
    }
    ctx->pc = 0x159CE8u;
    {
        const bool branch_taken_0x159ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CE8u;
        // 0x159cec: 0x24a5ef48  addiu       $a1, $a1, -0x10B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ce8) {
            ctx->pc = 0x159D84u;
            goto label_159d84;
        }
    }
    ctx->pc = 0x159CF0u;
label_159cf0:
    // 0x159cf0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x159cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_159cf4:
    // 0x159cf4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x159cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_159cf8:
    // 0x159cf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x159cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159cfc:
    // 0x159cfc: 0x8c630120  lw          $v1, 0x120($v1)
    ctx->pc = 0x159cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_159d00:
    // 0x159d00: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x159d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_159d04:
    // 0x159d04: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_159d08:
    if (ctx->pc == 0x159D08u) {
        ctx->pc = 0x159D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D04u;
        // 0x159d08: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159D0Cu;
        goto label_159d0c;
    }
    ctx->pc = 0x159D04u;
    {
        const bool branch_taken_0x159d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D04u;
        // 0x159d08: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d04) {
            ctx->pc = 0x159D90u;
            goto label_159d90;
        }
    }
    ctx->pc = 0x159D0Cu;
label_159d0c:
    // 0x159d0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x159d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_159d10:
    // 0x159d10: 0x2442eff0  addiu       $v0, $v0, -0x1010
    ctx->pc = 0x159d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963184));
label_159d14:
    // 0x159d14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x159d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_159d18:
    // 0x159d18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x159d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_159d1c:
    // 0x159d1c: 0x800008  jr          $a0
label_159d20:
    if (ctx->pc == 0x159D20u) {
        ctx->pc = 0x159D24u;
        goto label_159d24;
    }
    ctx->pc = 0x159D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159D24u: goto label_159d24;
            case 0x159D38u: goto label_159d38;
            case 0x159D4Cu: goto label_159d4c;
            case 0x159D60u: goto label_159d60;
            case 0x159D74u: goto label_159d74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159D1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x159D24u;
label_159d24:
    // 0x159d24: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x159d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_159d28:
    // 0x159d28: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x159d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_159d2c:
    // 0x159d2c: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x159d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_159d30:
    // 0x159d30: 0x10000014  b           . + 4 + (0x14 << 2)
label_159d34:
    if (ctx->pc == 0x159D34u) {
        ctx->pc = 0x159D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D30u;
        // 0x159d34: 0x24a5ef60  addiu       $a1, $a1, -0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159D38u;
        goto label_159d38;
    }
    ctx->pc = 0x159D30u;
    {
        const bool branch_taken_0x159d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D30u;
        // 0x159d34: 0x24a5ef60  addiu       $a1, $a1, -0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d30) {
            ctx->pc = 0x159D84u;
            goto label_159d84;
        }
    }
    ctx->pc = 0x159D38u;
label_159d38:
    // 0x159d38: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x159d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_159d3c:
    // 0x159d3c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x159d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_159d40:
    // 0x159d40: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x159d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_159d44:
    // 0x159d44: 0x1000000f  b           . + 4 + (0xF << 2)
label_159d48:
    if (ctx->pc == 0x159D48u) {
        ctx->pc = 0x159D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D44u;
        // 0x159d48: 0x24a5ef70  addiu       $a1, $a1, -0x1090 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159D4Cu;
        goto label_159d4c;
    }
    ctx->pc = 0x159D44u;
    {
        const bool branch_taken_0x159d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D44u;
        // 0x159d48: 0x24a5ef70  addiu       $a1, $a1, -0x1090 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d44) {
            ctx->pc = 0x159D84u;
            goto label_159d84;
        }
    }
    ctx->pc = 0x159D4Cu;
label_159d4c:
    // 0x159d4c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x159d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_159d50:
    // 0x159d50: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x159d50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_159d54:
    // 0x159d54: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x159d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_159d58:
    // 0x159d58: 0x1000000a  b           . + 4 + (0xA << 2)
label_159d5c:
    if (ctx->pc == 0x159D5Cu) {
        ctx->pc = 0x159D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D58u;
        // 0x159d5c: 0x24a5ef80  addiu       $a1, $a1, -0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159D60u;
        goto label_159d60;
    }
    ctx->pc = 0x159D58u;
    {
        const bool branch_taken_0x159d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D58u;
        // 0x159d5c: 0x24a5ef80  addiu       $a1, $a1, -0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d58) {
            ctx->pc = 0x159D84u;
            goto label_159d84;
        }
    }
    ctx->pc = 0x159D60u;
label_159d60:
    // 0x159d60: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x159d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_159d64:
    // 0x159d64: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x159d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_159d68:
    // 0x159d68: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x159d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_159d6c:
    // 0x159d6c: 0x10000005  b           . + 4 + (0x5 << 2)
label_159d70:
    if (ctx->pc == 0x159D70u) {
        ctx->pc = 0x159D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D6Cu;
        // 0x159d70: 0x24a5ef90  addiu       $a1, $a1, -0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159D74u;
        goto label_159d74;
    }
    ctx->pc = 0x159D6Cu;
    {
        const bool branch_taken_0x159d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D6Cu;
        // 0x159d70: 0x24a5ef90  addiu       $a1, $a1, -0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d6c) {
            ctx->pc = 0x159D84u;
            goto label_159d84;
        }
    }
    ctx->pc = 0x159D74u;
label_159d74:
    // 0x159d74: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x159d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_159d78:
    // 0x159d78: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x159d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_159d7c:
    // 0x159d7c: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x159d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_159d80:
    // 0x159d80: 0x24a5efa0  addiu       $a1, $a1, -0x1060
    ctx->pc = 0x159d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963104));
label_159d84:
    // 0x159d84: 0xc050fda  jal         func_143F68
label_159d88:
    if (ctx->pc == 0x159D88u) {
        ctx->pc = 0x159D8Cu;
        goto label_159d8c;
    }
    ctx->pc = 0x159D84u;
    SET_GPR_U32(ctx, 31, 0x159D8Cu);
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x159D84u, 0x159D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D8Cu;
label_159d8c:
    // 0x159d8c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x159d8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159d90:
    // 0x159d90: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x159d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_159d94:
    // 0x159d94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_159d98:
    if (ctx->pc == 0x159D98u) {
        ctx->pc = 0x159D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D94u;
        // 0x159d98: 0x8e22489c  lw          $v0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159D9Cu;
        goto label_159d9c;
    }
    ctx->pc = 0x159D94u;
    {
        const bool branch_taken_0x159d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D94u;
        // 0x159d98: 0x8e22489c  lw          $v0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d94) {
            ctx->pc = 0x159DC0u;
            goto label_159dc0;
        }
    }
    ctx->pc = 0x159D9Cu;
label_159d9c:
    // 0x159d9c: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x159d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_159da0:
    // 0x159da0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_159da4:
    if (ctx->pc == 0x159DA4u) {
        ctx->pc = 0x159DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DA0u;
        // 0x159da4: 0x3c060055  lui         $a2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159DA8u;
        goto label_159da8;
    }
    ctx->pc = 0x159DA0u;
    {
        const bool branch_taken_0x159da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x159DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DA0u;
        // 0x159da4: 0x3c060055  lui         $a2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159da0) {
            ctx->pc = 0x159DC4u;
            goto label_159dc4;
        }
    }
    ctx->pc = 0x159DA8u;
label_159da8:
    // 0x159da8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x159da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_159dac:
    // 0x159dac: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x159dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_159db0:
    // 0x159db0: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x159db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_159db4:
    // 0x159db4: 0xc050fda  jal         func_143F68
label_159db8:
    if (ctx->pc == 0x159DB8u) {
        ctx->pc = 0x159DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DB4u;
        // 0x159db8: 0x24a5efb0  addiu       $a1, $a1, -0x1050 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159DBCu;
        goto label_159dbc;
    }
    ctx->pc = 0x159DB4u;
    SET_GPR_U32(ctx, 31, 0x159DBCu);
    ctx->pc = 0x159DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159DB4u;
    // 0x159db8: 0x24a5efb0  addiu       $a1, $a1, -0x1050 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x159DB4u, 0x159DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159DBCu;
label_159dbc:
    // 0x159dbc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x159dbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159dc0:
    // 0x159dc0: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x159dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_159dc4:
    // 0x159dc4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x159dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_159dc8:
    // 0x159dc8: 0x24c6efc8  addiu       $a2, $a2, -0x1038
    ctx->pc = 0x159dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963144));
label_159dcc:
    // 0x159dcc: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x159dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_159dd0:
    // 0x159dd0: 0xc10ca04  jal         func_432810
label_159dd4:
    if (ctx->pc == 0x159DD4u) {
        ctx->pc = 0x159DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DD0u;
        // 0x159dd4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159DD8u;
        goto label_159dd8;
    }
    ctx->pc = 0x159DD0u;
    SET_GPR_U32(ctx, 31, 0x159DD8u);
    ctx->pc = 0x159DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159DD0u;
    // 0x159dd4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x159DD0u, 0x159DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159DD8u;
label_159dd8:
    // 0x159dd8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x159dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_159ddc:
    // 0x159ddc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x159ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_159de0:
    // 0x159de0: 0x8c62b788  lw          $v0, -0x4878($v1)
    ctx->pc = 0x159de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948744)));
label_159de4:
    // 0x159de4: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x159de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_159de8:
    // 0x159de8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x159de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_159dec:
    // 0x159dec: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x159decu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_159df0:
    // 0x159df0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x159df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_159df4:
    // 0x159df4: 0x40f809  jalr        $v0
label_159df8:
    if (ctx->pc == 0x159DF8u) {
        ctx->pc = 0x159DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DF4u;
        // 0x159df8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159DFCu;
        goto label_159dfc;
    }
    ctx->pc = 0x159DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159DFCu);
        ctx->pc = 0x159DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DF4u;
        // 0x159df8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159DF4u, 0x159DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159DFCu;
label_159dfc:
    // 0x159dfc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_159e00:
    if (ctx->pc == 0x159E00u) {
        ctx->pc = 0x159E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DFCu;
        // 0x159e00: 0x8ec5cdb4  lw          $a1, -0x324C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159E04u;
        goto label_159e04;
    }
    ctx->pc = 0x159DFCu;
    {
        const bool branch_taken_0x159dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DFCu;
        // 0x159e00: 0x8ec5cdb4  lw          $a1, -0x324C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159dfc) {
            ctx->pc = 0x159E0Cu;
            goto label_159e0c;
        }
    }
    ctx->pc = 0x159E04u;
label_159e04:
    // 0x159e04: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_159e08:
    if (ctx->pc == 0x159E08u) {
        ctx->pc = 0x159E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E04u;
        // 0x159e08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159E0Cu;
        goto label_159e0c;
    }
    ctx->pc = 0x159E04u;
    {
        const bool branch_taken_0x159e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E04u;
        // 0x159e08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e04) {
            ctx->pc = 0x15A1CCu;
            goto label_15a1cc;
        }
    }
    ctx->pc = 0x159E0Cu;
label_159e0c:
    // 0x159e0c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x159e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_159e10:
    // 0x159e10: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x159e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_159e14:
    // 0x159e14: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x159e14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_159e18:
    // 0x159e18: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x159e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_159e1c:
    // 0x159e1c: 0x40f809  jalr        $v0
label_159e20:
    if (ctx->pc == 0x159E20u) {
        ctx->pc = 0x159E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E1Cu;
        // 0x159e20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159E24u;
        goto label_159e24;
    }
    ctx->pc = 0x159E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159E24u);
        ctx->pc = 0x159E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E1Cu;
        // 0x159e20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159E1Cu, 0x159E24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159E24u;
label_159e24:
    // 0x159e24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x159e24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_159e28:
    // 0x159e28: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x159e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_159e2c:
    // 0x159e2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x159e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_159e30:
    // 0x159e30: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x159e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_159e34:
    // 0x159e34: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x159e34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159e38:
    // 0x159e38: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x159e38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_159e3c:
    // 0x159e3c: 0xc05eb2a  jal         func_17ACA8
label_159e40:
    if (ctx->pc == 0x159E40u) {
        ctx->pc = 0x159E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E3Cu;
        // 0x159e40: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x159E44u;
        goto label_159e44;
    }
    ctx->pc = 0x159E3Cu;
    SET_GPR_U32(ctx, 31, 0x159E44u);
    ctx->pc = 0x159E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159E3Cu;
    // 0x159e40: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACA8u, 0x159E3Cu, 0x159E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159E44u;
label_159e44:
    // 0x159e44: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x159e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_159e48:
    // 0x159e48: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x159e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_159e4c:
    // 0x159e4c: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x159e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_159e50:
    // 0x159e50: 0x24841780  addiu       $a0, $a0, 0x1780
    ctx->pc = 0x159e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6016));
label_159e54:
    // 0x159e54: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x159e54u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_159e58:
    // 0x159e58: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x159e58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_159e5c:
    // 0x159e5c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x159e5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_159e60:
    // 0x159e60: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x159e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
label_159e64:
    // 0x159e64: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x159e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_159e68:
    // 0x159e68: 0x8ec4cdb4  lw          $a0, -0x324C($s6)
    ctx->pc = 0x159e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
label_159e6c:
    // 0x159e6c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x159e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_159e70:
    // 0x159e70: 0x84500028  lh          $s0, 0x28($v0)
    ctx->pc = 0x159e70u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_159e74:
    // 0x159e74: 0x24520028  addiu       $s2, $v0, 0x28
    ctx->pc = 0x159e74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_159e78:
    // 0x159e78: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x159e78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_159e7c:
    // 0x159e7c: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x159e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_159e80:
    // 0x159e80: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x159e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_159e84:
    // 0x159e84: 0xa0f809  jalr        $a1
label_159e88:
    if (ctx->pc == 0x159E88u) {
        ctx->pc = 0x159E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E84u;
        // 0x159e88: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159E8Cu;
        goto label_159e8c;
    }
    ctx->pc = 0x159E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x159E8Cu);
        ctx->pc = 0x159E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E84u;
        // 0x159e88: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159E84u, 0x159E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159E8Cu;
label_159e8c:
    // 0x159e8c: 0x8ec6cdb4  lw          $a2, -0x324C($s6)
    ctx->pc = 0x159e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
label_159e90:
    // 0x159e90: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x159e90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_159e94:
    // 0x159e94: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x159e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_159e98:
    // 0x159e98: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x159e98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_159e9c:
    // 0x159e9c: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x159e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_159ea0:
    // 0x159ea0: 0x60f809  jalr        $v1
label_159ea4:
    if (ctx->pc == 0x159EA4u) {
        ctx->pc = 0x159EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159EA0u;
        // 0x159ea4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159EA8u;
        goto label_159ea8;
    }
    ctx->pc = 0x159EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x159EA8u);
        ctx->pc = 0x159EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159EA0u;
        // 0x159ea4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159EA0u, 0x159EA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159EA8u;
label_159ea8:
    // 0x159ea8: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x159ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
label_159eac:
    // 0x159eac: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x159eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
label_159eb0:
    // 0x159eb0: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x159eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_159eb4:
    // 0x159eb4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x159eb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_159eb8:
    // 0x159eb8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x159eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_159ebc:
    // 0x159ebc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x159ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_159ec0:
    // 0x159ec0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x159ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_159ec4:
    // 0x159ec4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x159ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_159ec8:
    // 0x159ec8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x159ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_159ecc:
    // 0x159ecc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x159eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_159ed0:
    // 0x159ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159ed4:
    // 0x159ed4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x159ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_159ed8:
    // 0x159ed8: 0x40f809  jalr        $v0
label_159edc:
    if (ctx->pc == 0x159EDCu) {
        ctx->pc = 0x159EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159ED8u;
        // 0x159edc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x159EE0u;
        goto label_159ee0;
    }
    ctx->pc = 0x159ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159EE0u);
        ctx->pc = 0x159EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159ED8u;
        // 0x159edc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159ED8u, 0x159EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159EE0u;
label_159ee0:
    // 0x159ee0: 0x8ec5cdb4  lw          $a1, -0x324C($s6)
    ctx->pc = 0x159ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
label_159ee4:
    // 0x159ee4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x159ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_159ee8:
    // 0x159ee8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x159ee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_159eec:
    // 0x159eec: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x159eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_159ef0:
    // 0x159ef0: 0x60f809  jalr        $v1
label_159ef4:
    if (ctx->pc == 0x159EF4u) {
        ctx->pc = 0x159EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159EF0u;
        // 0x159ef4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159EF8u;
        goto label_159ef8;
    }
    ctx->pc = 0x159EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x159EF8u);
        ctx->pc = 0x159EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159EF0u;
        // 0x159ef4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159EF0u, 0x159EF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159EF8u;
label_159ef8:
    // 0x159ef8: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x159ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
label_159efc:
    // 0x159efc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x159efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_159f00:
    // 0x159f00: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x159f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_159f04:
    // 0x159f04: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x159f04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_159f08:
    // 0x159f08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x159f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_159f0c:
    // 0x159f0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159f0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159f10:
    // 0x159f10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x159f10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159f14:
    // 0x159f14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x159f14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159f18:
    // 0x159f18: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x159f18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159f1c:
    // 0x159f1c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x159f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_159f20:
    // 0x159f20: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x159f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_159f24:
    // 0x159f24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x159f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159f28:
    // 0x159f28: 0xc062bb0  jal         func_18AEC0
label_159f2c:
    if (ctx->pc == 0x159F2Cu) {
        ctx->pc = 0x159F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F28u;
        // 0x159f2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159F30u;
        goto label_159f30;
    }
    ctx->pc = 0x159F28u;
    SET_GPR_U32(ctx, 31, 0x159F30u);
    ctx->pc = 0x159F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159F28u;
    // 0x159f2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x159F28u, 0x159F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159F30u;
label_159f30:
    // 0x159f30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x159f30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159f34:
    // 0x159f34: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x159f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
label_159f38:
    // 0x159f38: 0xc0616ac  jal         func_185AB0
label_159f3c:
    if (ctx->pc == 0x159F3Cu) {
        ctx->pc = 0x159F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F38u;
        // 0x159f3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159F40u;
        goto label_159f40;
    }
    ctx->pc = 0x159F38u;
    SET_GPR_U32(ctx, 31, 0x159F40u);
    ctx->pc = 0x159F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159F38u;
    // 0x159f3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x159F38u, 0x159F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159F40u;
label_159f40:
    // 0x159f40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x159f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159f44:
    // 0x159f44: 0x10000006  b           . + 4 + (0x6 << 2)
label_159f48:
    if (ctx->pc == 0x159F48u) {
        ctx->pc = 0x159F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F44u;
        // 0x159f48: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159F4Cu;
        goto label_159f4c;
    }
    ctx->pc = 0x159F44u;
    {
        const bool branch_taken_0x159f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F44u;
        // 0x159f48: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f44) {
            ctx->pc = 0x159F60u;
            goto label_159f60;
        }
    }
    ctx->pc = 0x159F4Cu;
label_159f4c:
    // 0x159f4c: 0x0  nop
    ctx->pc = 0x159f4cu;
    // NOP
label_159f50:
    // 0x159f50: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x159f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_159f54:
    // 0x159f54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159f58:
    // 0x159f58: 0xc0552b8  jal         func_154AE0
label_159f5c:
    if (ctx->pc == 0x159F5Cu) {
        ctx->pc = 0x159F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F58u;
        // 0x159f5c: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159F60u;
        goto label_159f60;
    }
    ctx->pc = 0x159F58u;
    SET_GPR_U32(ctx, 31, 0x159F60u);
    ctx->pc = 0x159F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159F58u;
    // 0x159f5c: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x159F58u, 0x159F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159F60u;
label_159f60:
    // 0x159f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159f64:
    // 0x159f64: 0xc065cac  jal         func_1972B0
label_159f68:
    if (ctx->pc == 0x159F68u) {
        ctx->pc = 0x159F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F64u;
        // 0x159f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159F6Cu;
        goto label_159f6c;
    }
    ctx->pc = 0x159F64u;
    SET_GPR_U32(ctx, 31, 0x159F6Cu);
    ctx->pc = 0x159F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159F64u;
    // 0x159f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1972B0u, 0x159F64u, 0x159F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159F6Cu;
label_159f6c:
    // 0x159f6c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_159f70:
    if (ctx->pc == 0x159F70u) {
        ctx->pc = 0x159F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F6Cu;
        // 0x159f70: 0x3251ffff  andi        $s1, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x159F74u;
        goto label_159f74;
    }
    ctx->pc = 0x159F6Cu;
    {
        const bool branch_taken_0x159f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F6Cu;
        // 0x159f70: 0x3251ffff  andi        $s1, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f6c) {
            ctx->pc = 0x159F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159f50;
        }
    }
    ctx->pc = 0x159F74u;
label_159f74:
    // 0x159f74: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x159f74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_159f78:
    // 0x159f78: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x159f78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159f7c:
    // 0x159f7c: 0x27b200e4  addiu       $s2, $sp, 0xE4
    ctx->pc = 0x159f7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_159f80:
    // 0x159f80: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x159f80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_159f84:
    // 0x159f84: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x159f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_159f88:
    // 0x159f88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x159f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159f8c:
    // 0x159f8c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x159f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_159f90:
    // 0x159f90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x159f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159f94:
    // 0x159f94: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x159f94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_159f98:
    // 0x159f98: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x159f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_159f9c:
    // 0x159f9c: 0x40f809  jalr        $v0
label_159fa0:
    if (ctx->pc == 0x159FA0u) {
        ctx->pc = 0x159FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F9Cu;
        // 0x159fa0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159FA4u;
        goto label_159fa4;
    }
    ctx->pc = 0x159F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159FA4u);
        ctx->pc = 0x159FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F9Cu;
        // 0x159fa0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159F9Cu, 0x159FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159FA4u;
label_159fa4:
    // 0x159fa4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x159fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_159fa8:
    // 0x159fa8: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x159fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_159fac:
    // 0x159fac: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x159facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_159fb0:
    // 0x159fb0: 0x40f809  jalr        $v0
label_159fb4:
    if (ctx->pc == 0x159FB4u) {
        ctx->pc = 0x159FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FB0u;
        // 0x159fb4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159FB8u;
        goto label_159fb8;
    }
    ctx->pc = 0x159FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159FB8u);
        ctx->pc = 0x159FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FB0u;
        // 0x159fb4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159FB0u, 0x159FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159FB8u;
label_159fb8:
    // 0x159fb8: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_159fbc:
    if (ctx->pc == 0x159FBCu) {
        ctx->pc = 0x159FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FB8u;
        // 0x159fbc: 0x8ec2cdb4  lw          $v0, -0x324C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159FC0u;
        goto label_159fc0;
    }
    ctx->pc = 0x159FB8u;
    {
        const bool branch_taken_0x159fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FB8u;
        // 0x159fbc: 0x8ec2cdb4  lw          $v0, -0x324C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fb8) {
            ctx->pc = 0x15A198u;
            goto label_15a198;
        }
    }
    ctx->pc = 0x159FC0u;
label_159fc0:
    // 0x159fc0: 0x3c013fac  lui         $at, 0x3FAC
    ctx->pc = 0x159fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16300 << 16));
label_159fc4:
    // 0x159fc4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x159fc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_159fc8:
    // 0x159fc8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x159fc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_159fcc:
    // 0x159fcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x159fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_159fd0:
    // 0x159fd0: 0x3c013f98  lui         $at, 0x3F98
    ctx->pc = 0x159fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16280 << 16));
label_159fd4:
    // 0x159fd4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x159fd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_159fd8:
    // 0x159fd8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x159fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_159fdc:
    // 0x159fdc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x159fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_159fe0:
    // 0x159fe0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_159fe4:
    if (ctx->pc == 0x159FE4u) {
        ctx->pc = 0x159FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FE0u;
        // 0x159fe4: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x159FE8u;
        goto label_159fe8;
    }
    ctx->pc = 0x159FE0u;
    {
        const bool branch_taken_0x159fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FE0u;
        // 0x159fe4: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fe0) {
            ctx->pc = 0x15A05Cu;
            goto label_15a05c;
        }
    }
    ctx->pc = 0x159FE8u;
label_159fe8:
    // 0x159fe8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_159fec:
    if (ctx->pc == 0x159FECu) {
        ctx->pc = 0x159FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FE8u;
        // 0x159fec: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x159FF0u;
        goto label_159ff0;
    }
    ctx->pc = 0x159FE8u;
    {
        const bool branch_taken_0x159fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FE8u;
        // 0x159fec: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fe8) {
            ctx->pc = 0x15A014u;
            goto label_15a014;
        }
    }
    ctx->pc = 0x159FF0u;
label_159ff0:
    // 0x159ff0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_159ff4:
    if (ctx->pc == 0x159FF4u) {
        ctx->pc = 0x159FF8u;
        goto label_159ff8;
    }
    ctx->pc = 0x159FF0u;
    {
        const bool branch_taken_0x159ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159ff0) {
            ctx->pc = 0x15A084u;
            goto label_15a084;
        }
    }
    ctx->pc = 0x159FF8u;
label_159ff8:
    // 0x159ff8: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x159ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_159ffc:
    // 0x159ffc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x159ffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_15a000:
    // 0x15a000: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15a000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_15a004:
    // 0x15a004: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x15a004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_15a008:
    // 0x15a008: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15a008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_15a00c:
    // 0x15a00c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_15a010:
    if (ctx->pc == 0x15A010u) {
        ctx->pc = 0x15A014u;
        goto label_15a014;
    }
    ctx->pc = 0x15A00Cu;
    {
        const bool branch_taken_0x15a00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a00c) {
            ctx->pc = 0x15A084u;
            goto label_15a084;
        }
    }
    ctx->pc = 0x15A014u;
label_15a014:
    // 0x15a014: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_15a018:
    if (ctx->pc == 0x15A018u) {
        ctx->pc = 0x15A01Cu;
        goto label_15a01c;
    }
    ctx->pc = 0x15A014u;
    {
        const bool branch_taken_0x15a014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a014) {
            ctx->pc = 0x15A03Cu;
            goto label_15a03c;
        }
    }
    ctx->pc = 0x15A01Cu;
label_15a01c:
    // 0x15a01c: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x15a01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
label_15a020:
    // 0x15a020: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x15a020u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_15a024:
    // 0x15a024: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15a024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_15a028:
    // 0x15a028: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x15a028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
label_15a02c:
    // 0x15a02c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x15a02cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_15a030:
    // 0x15a030: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15a030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_15a034:
    // 0x15a034: 0x10000013  b           . + 4 + (0x13 << 2)
label_15a038:
    if (ctx->pc == 0x15A038u) {
        ctx->pc = 0x15A03Cu;
        goto label_15a03c;
    }
    ctx->pc = 0x15A034u;
    {
        const bool branch_taken_0x15a034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a034) {
            ctx->pc = 0x15A084u;
            goto label_15a084;
        }
    }
    ctx->pc = 0x15A03Cu;
label_15a03c:
    // 0x15a03c: 0x3c013fc6  lui         $at, 0x3FC6
    ctx->pc = 0x15a03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16326 << 16));
label_15a040:
    // 0x15a040: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x15a040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_15a044:
    // 0x15a044: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15a044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_15a048:
    // 0x15a048: 0x3c013fac  lui         $at, 0x3FAC
    ctx->pc = 0x15a048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16300 << 16));
label_15a04c:
    // 0x15a04c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15a04cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_15a050:
    // 0x15a050: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15a050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_15a054:
    // 0x15a054: 0x1000000b  b           . + 4 + (0xB << 2)
label_15a058:
    if (ctx->pc == 0x15A058u) {
        ctx->pc = 0x15A05Cu;
        goto label_15a05c;
    }
    ctx->pc = 0x15A054u;
    {
        const bool branch_taken_0x15a054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a054) {
            ctx->pc = 0x15A084u;
            goto label_15a084;
        }
    }
    ctx->pc = 0x15A05Cu;
label_15a05c:
    // 0x15a05c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x15a05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_15a060:
    // 0x15a060: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x15a060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
label_15a064:
    // 0x15a064: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x15a064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_15a068:
    // 0x15a068: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15a068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_15a06c:
    // 0x15a06c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_15a070:
    if (ctx->pc == 0x15A070u) {
        ctx->pc = 0x15A074u;
        goto label_15a074;
    }
    ctx->pc = 0x15A06Cu;
    {
        const bool branch_taken_0x15a06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a06c) {
            ctx->pc = 0x15A084u;
            goto label_15a084;
        }
    }
    ctx->pc = 0x15A074u;
label_15a074:
    // 0x15a074: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15a074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_15a078:
    // 0x15a078: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15a078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_15a07c:
    // 0x15a07c: 0x0  nop
    ctx->pc = 0x15a07cu;
    // NOP
label_15a080:
    // 0x15a080: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x15a080u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_15a084:
    // 0x15a084: 0xc060b58  jal         func_182D60
label_15a088:
    if (ctx->pc == 0x15A088u) {
        ctx->pc = 0x15A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A084u;
        // 0x15a088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A08Cu;
        goto label_15a08c;
    }
    ctx->pc = 0x15A084u;
    SET_GPR_U32(ctx, 31, 0x15A08Cu);
    ctx->pc = 0x15A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A084u;
    // 0x15a088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x15A084u, 0x15A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A08Cu;
label_15a08c:
    // 0x15a08c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a090:
    // 0x15a090: 0xc06078e  jal         func_181E38
label_15a094:
    if (ctx->pc == 0x15A094u) {
        ctx->pc = 0x15A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A090u;
        // 0x15a094: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A098u;
        goto label_15a098;
    }
    ctx->pc = 0x15A090u;
    SET_GPR_U32(ctx, 31, 0x15A098u);
    ctx->pc = 0x15A094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A090u;
    // 0x15a094: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x15A090u, 0x15A098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A098u;
label_15a098:
    // 0x15a098: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x15a098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_15a09c:
    // 0x15a09c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x15a09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_15a0a0:
    // 0x15a0a0: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x15a0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_15a0a4:
    // 0x15a0a4: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x15a0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_15a0a8:
    // 0x15a0a8: 0xb3a300cb  sdl         $v1, 0xCB($sp)
    ctx->pc = 0x15a0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 203); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a0ac:
    // 0x15a0ac: 0xb7a300c4  sdr         $v1, 0xC4($sp)
    ctx->pc = 0x15a0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 196); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a0b0:
    // 0x15a0b0: 0xb3a400d3  sdl         $a0, 0xD3($sp)
    ctx->pc = 0x15a0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 211); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a0b4:
    // 0x15a0b4: 0xb7a400cc  sdr         $a0, 0xCC($sp)
    ctx->pc = 0x15a0b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 204); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a0b8:
    // 0x15a0b8: 0xa3b300e4  sb          $s3, 0xE4($sp)
    ctx->pc = 0x15a0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 228), (uint8_t)GPR_U32(ctx, 19));
label_15a0bc:
    // 0x15a0bc: 0xa2530001  sb          $s3, 0x1($s2)
    ctx->pc = 0x15a0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 19));
label_15a0c0:
    // 0x15a0c0: 0xa2530002  sb          $s3, 0x2($s2)
    ctx->pc = 0x15a0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 19));
label_15a0c4:
    // 0x15a0c4: 0xa2530003  sb          $s3, 0x3($s2)
    ctx->pc = 0x15a0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 19));
label_15a0c8:
    // 0x15a0c8: 0xe7b600a4  swc1        $f22, 0xA4($sp)
    ctx->pc = 0x15a0c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_15a0cc:
    // 0x15a0cc: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x15a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_15a0d0:
    // 0x15a0d0: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x15a0d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_15a0d4:
    // 0x15a0d4: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x15a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
label_15a0d8:
    // 0x15a0d8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x15a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15a0dc:
    // 0x15a0dc: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x15a0dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_15a0e0:
    // 0x15a0e0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x15a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_15a0e4:
    // 0x15a0e4: 0x60f809  jalr        $v1
label_15a0e8:
    if (ctx->pc == 0x15A0E8u) {
        ctx->pc = 0x15A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A0E4u;
        // 0x15a0e8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A0ECu;
        goto label_15a0ec;
    }
    ctx->pc = 0x15A0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A0ECu);
        ctx->pc = 0x15A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A0E4u;
        // 0x15a0e8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A0E4u, 0x15A0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A0ECu;
label_15a0ec:
    // 0x15a0ec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15a0ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15a0f0:
    // 0x15a0f0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x15a0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_15a0f4:
    // 0x15a0f4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x15a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15a0f8:
    // 0x15a0f8: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x15a0f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_15a0fc:
    // 0x15a0fc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x15a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_15a100:
    // 0x15a100: 0x60f809  jalr        $v1
label_15a104:
    if (ctx->pc == 0x15A104u) {
        ctx->pc = 0x15A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A100u;
        // 0x15a104: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A108u;
        goto label_15a108;
    }
    ctx->pc = 0x15A100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A108u);
        ctx->pc = 0x15A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A100u;
        // 0x15a104: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A100u, 0x15A108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A108u;
label_15a108:
    // 0x15a108: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x15a108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15a10c:
    // 0x15a10c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x15a10cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_15a110:
    // 0x15a110: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x15a110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15a114:
    // 0x15a114: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x15a114u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_15a118:
    // 0x15a118: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15a118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_15a11c:
    // 0x15a11c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x15a11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_15a120:
    // 0x15a120: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x15a120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15a124:
    // 0x15a124: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x15a124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_15a128:
    // 0x15a128: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x15a128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_15a12c:
    // 0x15a12c: 0x60f809  jalr        $v1
label_15a130:
    if (ctx->pc == 0x15A130u) {
        ctx->pc = 0x15A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A12Cu;
        // 0x15a130: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A134u;
        goto label_15a134;
    }
    ctx->pc = 0x15A12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A134u);
        ctx->pc = 0x15A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A12Cu;
        // 0x15a130: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A12Cu, 0x15A134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A134u;
label_15a134:
    // 0x15a134: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x15a134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15a138:
    // 0x15a138: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x15a138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_15a13c:
    // 0x15a13c: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x15a13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15a140:
    // 0x15a140: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15a140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15a144:
    // 0x15a144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a148:
    // 0x15a148: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x15a148u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_15a14c:
    // 0x15a14c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15a14cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_15a150:
    // 0x15a150: 0xc060b78  jal         func_182DE0
label_15a154:
    if (ctx->pc == 0x15A154u) {
        ctx->pc = 0x15A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A150u;
        // 0x15a154: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A158u;
        goto label_15a158;
    }
    ctx->pc = 0x15A150u;
    SET_GPR_U32(ctx, 31, 0x15A158u);
    ctx->pc = 0x15A154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A150u;
    // 0x15a154: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x15A150u, 0x15A158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A158u;
label_15a158:
    // 0x15a158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a15c:
    // 0x15a15c: 0xc065c5a  jal         func_197168
label_15a160:
    if (ctx->pc == 0x15A160u) {
        ctx->pc = 0x15A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A15Cu;
        // 0x15a160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A164u;
        goto label_15a164;
    }
    ctx->pc = 0x15A15Cu;
    SET_GPR_U32(ctx, 31, 0x15A164u);
    ctx->pc = 0x15A160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A15Cu;
    // 0x15a160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197168u, 0x15A15Cu, 0x15A164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A164u;
label_15a164:
    // 0x15a164: 0xc065c42  jal         func_197108
label_15a168:
    if (ctx->pc == 0x15A168u) {
        ctx->pc = 0x15A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A164u;
        // 0x15a168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A16Cu;
        goto label_15a16c;
    }
    ctx->pc = 0x15A164u;
    SET_GPR_U32(ctx, 31, 0x15A16Cu);
    ctx->pc = 0x15A168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A164u;
    // 0x15a168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197108u, 0x15A164u, 0x15A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A16Cu;
label_15a16c:
    // 0x15a16c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x15a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15a170:
    // 0x15a170: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x15a170u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_15a174:
    // 0x15a174: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x15a174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_15a178:
    // 0x15a178: 0x40f809  jalr        $v0
label_15a17c:
    if (ctx->pc == 0x15A17Cu) {
        ctx->pc = 0x15A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A178u;
        // 0x15a17c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A180u;
        goto label_15a180;
    }
    ctx->pc = 0x15A178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15A180u);
        ctx->pc = 0x15A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A178u;
        // 0x15a17c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A178u, 0x15A180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A180u;
label_15a180:
    // 0x15a180: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x15a180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15a184:
    // 0x15a184: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15a184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a188:
    // 0x15a188: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x15a188u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_15a18c:
    // 0x15a18c: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x15a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_15a190:
    // 0x15a190: 0x40f809  jalr        $v0
label_15a194:
    if (ctx->pc == 0x15A194u) {
        ctx->pc = 0x15A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A190u;
        // 0x15a194: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A198u;
        goto label_15a198;
    }
    ctx->pc = 0x15A190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15A198u);
        ctx->pc = 0x15A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A190u;
        // 0x15a194: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A190u, 0x15A198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A198u;
label_15a198:
    // 0x15a198: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x15a198u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_15a19c:
    // 0x15a19c: 0x2ea20002  sltiu       $v0, $s5, 0x2
    ctx->pc = 0x15a19cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_15a1a0:
    // 0x15a1a0: 0x1440ff79  bnez        $v0, . + 4 + (-0x87 << 2)
label_15a1a4:
    if (ctx->pc == 0x15A1A4u) {
        ctx->pc = 0x15A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1A0u;
        // 0x15a1a4: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A1A8u;
        goto label_15a1a8;
    }
    ctx->pc = 0x15A1A0u;
    {
        const bool branch_taken_0x15a1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1A0u;
        // 0x15a1a4: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a1a0) {
            ctx->pc = 0x159F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159f88;
        }
    }
    ctx->pc = 0x15A1A8u;
label_15a1a8:
    // 0x15a1a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a1ac:
    // 0x15a1ac: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x15a1acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_15a1b0:
    // 0x15a1b0: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x15a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_15a1b4:
    // 0x15a1b4: 0x40f809  jalr        $v0
label_15a1b8:
    if (ctx->pc == 0x15A1B8u) {
        ctx->pc = 0x15A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1B4u;
        // 0x15a1b8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A1BCu;
        goto label_15a1bc;
    }
    ctx->pc = 0x15A1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15A1BCu);
        ctx->pc = 0x15A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1B4u;
        // 0x15a1b8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A1B4u, 0x15A1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A1BCu;
label_15a1bc:
    // 0x15a1bc: 0x8ee4cd4c  lw          $a0, -0x32B4($s7)
    ctx->pc = 0x15a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
label_15a1c0:
    // 0x15a1c0: 0xc062be2  jal         func_18AF88
label_15a1c4:
    if (ctx->pc == 0x15A1C4u) {
        ctx->pc = 0x15A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1C0u;
        // 0x15a1c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A1C8u;
        goto label_15a1c8;
    }
    ctx->pc = 0x15A1C0u;
    SET_GPR_U32(ctx, 31, 0x15A1C8u);
    ctx->pc = 0x15A1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A1C0u;
    // 0x15a1c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x15A1C0u, 0x15A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A1C8u;
label_15a1c8:
    // 0x15a1c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a1cc:
    // 0x15a1cc: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x15a1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_15a1d0:
    // 0x15a1d0: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x15a1d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_15a1d4:
    // 0x15a1d4: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x15a1d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_15a1d8:
    // 0x15a1d8: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x15a1d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_15a1dc:
    // 0x15a1dc: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x15a1dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_15a1e0:
    // 0x15a1e0: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x15a1e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_15a1e4:
    // 0x15a1e4: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x15a1e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_15a1e8:
    // 0x15a1e8: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x15a1e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_15a1ec:
    // 0x15a1ec: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x15a1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_15a1f0:
    // 0x15a1f0: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x15a1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_15a1f4:
    // 0x15a1f4: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x15a1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_15a1f8:
    // 0x15a1f8: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x15a1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15a1fc:
    // 0x15a1fc: 0x3e00008  jr          $ra
label_15a200:
    if (ctx->pc == 0x15A200u) {
        ctx->pc = 0x15A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1FCu;
        // 0x15a200: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A204u;
        goto label_15a204;
    }
    ctx->pc = 0x15A1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1FCu;
        // 0x15a200: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A204u;
label_15a204:
    // 0x15a204: 0x0  nop
    ctx->pc = 0x15a204u;
    // NOP
    ctx->pc = 0x15a208u;
}
