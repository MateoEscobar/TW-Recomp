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

// Function: sub_00229C40
// Address: 0x229c40 - 0x22a2a8
void sub_00229C40_0x229c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229C40_0x229c40");
#endif

    switch (ctx->pc) {
        case 0x229c40u: goto label_229c40;
        case 0x229c44u: goto label_229c44;
        case 0x229c48u: goto label_229c48;
        case 0x229c4cu: goto label_229c4c;
        case 0x229c50u: goto label_229c50;
        case 0x229c54u: goto label_229c54;
        case 0x229c58u: goto label_229c58;
        case 0x229c5cu: goto label_229c5c;
        case 0x229c60u: goto label_229c60;
        case 0x229c64u: goto label_229c64;
        case 0x229c68u: goto label_229c68;
        case 0x229c6cu: goto label_229c6c;
        case 0x229c70u: goto label_229c70;
        case 0x229c74u: goto label_229c74;
        case 0x229c78u: goto label_229c78;
        case 0x229c7cu: goto label_229c7c;
        case 0x229c80u: goto label_229c80;
        case 0x229c84u: goto label_229c84;
        case 0x229c88u: goto label_229c88;
        case 0x229c8cu: goto label_229c8c;
        case 0x229c90u: goto label_229c90;
        case 0x229c94u: goto label_229c94;
        case 0x229c98u: goto label_229c98;
        case 0x229c9cu: goto label_229c9c;
        case 0x229ca0u: goto label_229ca0;
        case 0x229ca4u: goto label_229ca4;
        case 0x229ca8u: goto label_229ca8;
        case 0x229cacu: goto label_229cac;
        case 0x229cb0u: goto label_229cb0;
        case 0x229cb4u: goto label_229cb4;
        case 0x229cb8u: goto label_229cb8;
        case 0x229cbcu: goto label_229cbc;
        case 0x229cc0u: goto label_229cc0;
        case 0x229cc4u: goto label_229cc4;
        case 0x229cc8u: goto label_229cc8;
        case 0x229cccu: goto label_229ccc;
        case 0x229cd0u: goto label_229cd0;
        case 0x229cd4u: goto label_229cd4;
        case 0x229cd8u: goto label_229cd8;
        case 0x229cdcu: goto label_229cdc;
        case 0x229ce0u: goto label_229ce0;
        case 0x229ce4u: goto label_229ce4;
        case 0x229ce8u: goto label_229ce8;
        case 0x229cecu: goto label_229cec;
        case 0x229cf0u: goto label_229cf0;
        case 0x229cf4u: goto label_229cf4;
        case 0x229cf8u: goto label_229cf8;
        case 0x229cfcu: goto label_229cfc;
        case 0x229d00u: goto label_229d00;
        case 0x229d04u: goto label_229d04;
        case 0x229d08u: goto label_229d08;
        case 0x229d0cu: goto label_229d0c;
        case 0x229d10u: goto label_229d10;
        case 0x229d14u: goto label_229d14;
        case 0x229d18u: goto label_229d18;
        case 0x229d1cu: goto label_229d1c;
        case 0x229d20u: goto label_229d20;
        case 0x229d24u: goto label_229d24;
        case 0x229d28u: goto label_229d28;
        case 0x229d2cu: goto label_229d2c;
        case 0x229d30u: goto label_229d30;
        case 0x229d34u: goto label_229d34;
        case 0x229d38u: goto label_229d38;
        case 0x229d3cu: goto label_229d3c;
        case 0x229d40u: goto label_229d40;
        case 0x229d44u: goto label_229d44;
        case 0x229d48u: goto label_229d48;
        case 0x229d4cu: goto label_229d4c;
        case 0x229d50u: goto label_229d50;
        case 0x229d54u: goto label_229d54;
        case 0x229d58u: goto label_229d58;
        case 0x229d5cu: goto label_229d5c;
        case 0x229d60u: goto label_229d60;
        case 0x229d64u: goto label_229d64;
        case 0x229d68u: goto label_229d68;
        case 0x229d6cu: goto label_229d6c;
        case 0x229d70u: goto label_229d70;
        case 0x229d74u: goto label_229d74;
        case 0x229d78u: goto label_229d78;
        case 0x229d7cu: goto label_229d7c;
        case 0x229d80u: goto label_229d80;
        case 0x229d84u: goto label_229d84;
        case 0x229d88u: goto label_229d88;
        case 0x229d8cu: goto label_229d8c;
        case 0x229d90u: goto label_229d90;
        case 0x229d94u: goto label_229d94;
        case 0x229d98u: goto label_229d98;
        case 0x229d9cu: goto label_229d9c;
        case 0x229da0u: goto label_229da0;
        case 0x229da4u: goto label_229da4;
        case 0x229da8u: goto label_229da8;
        case 0x229dacu: goto label_229dac;
        case 0x229db0u: goto label_229db0;
        case 0x229db4u: goto label_229db4;
        case 0x229db8u: goto label_229db8;
        case 0x229dbcu: goto label_229dbc;
        case 0x229dc0u: goto label_229dc0;
        case 0x229dc4u: goto label_229dc4;
        case 0x229dc8u: goto label_229dc8;
        case 0x229dccu: goto label_229dcc;
        case 0x229dd0u: goto label_229dd0;
        case 0x229dd4u: goto label_229dd4;
        case 0x229dd8u: goto label_229dd8;
        case 0x229ddcu: goto label_229ddc;
        case 0x229de0u: goto label_229de0;
        case 0x229de4u: goto label_229de4;
        case 0x229de8u: goto label_229de8;
        case 0x229decu: goto label_229dec;
        case 0x229df0u: goto label_229df0;
        case 0x229df4u: goto label_229df4;
        case 0x229df8u: goto label_229df8;
        case 0x229dfcu: goto label_229dfc;
        case 0x229e00u: goto label_229e00;
        case 0x229e04u: goto label_229e04;
        case 0x229e08u: goto label_229e08;
        case 0x229e0cu: goto label_229e0c;
        case 0x229e10u: goto label_229e10;
        case 0x229e14u: goto label_229e14;
        case 0x229e18u: goto label_229e18;
        case 0x229e1cu: goto label_229e1c;
        case 0x229e20u: goto label_229e20;
        case 0x229e24u: goto label_229e24;
        case 0x229e28u: goto label_229e28;
        case 0x229e2cu: goto label_229e2c;
        case 0x229e30u: goto label_229e30;
        case 0x229e34u: goto label_229e34;
        case 0x229e38u: goto label_229e38;
        case 0x229e3cu: goto label_229e3c;
        case 0x229e40u: goto label_229e40;
        case 0x229e44u: goto label_229e44;
        case 0x229e48u: goto label_229e48;
        case 0x229e4cu: goto label_229e4c;
        case 0x229e50u: goto label_229e50;
        case 0x229e54u: goto label_229e54;
        case 0x229e58u: goto label_229e58;
        case 0x229e5cu: goto label_229e5c;
        case 0x229e60u: goto label_229e60;
        case 0x229e64u: goto label_229e64;
        case 0x229e68u: goto label_229e68;
        case 0x229e6cu: goto label_229e6c;
        case 0x229e70u: goto label_229e70;
        case 0x229e74u: goto label_229e74;
        case 0x229e78u: goto label_229e78;
        case 0x229e7cu: goto label_229e7c;
        case 0x229e80u: goto label_229e80;
        case 0x229e84u: goto label_229e84;
        case 0x229e88u: goto label_229e88;
        case 0x229e8cu: goto label_229e8c;
        case 0x229e90u: goto label_229e90;
        case 0x229e94u: goto label_229e94;
        case 0x229e98u: goto label_229e98;
        case 0x229e9cu: goto label_229e9c;
        case 0x229ea0u: goto label_229ea0;
        case 0x229ea4u: goto label_229ea4;
        case 0x229ea8u: goto label_229ea8;
        case 0x229eacu: goto label_229eac;
        case 0x229eb0u: goto label_229eb0;
        case 0x229eb4u: goto label_229eb4;
        case 0x229eb8u: goto label_229eb8;
        case 0x229ebcu: goto label_229ebc;
        case 0x229ec0u: goto label_229ec0;
        case 0x229ec4u: goto label_229ec4;
        case 0x229ec8u: goto label_229ec8;
        case 0x229eccu: goto label_229ecc;
        case 0x229ed0u: goto label_229ed0;
        case 0x229ed4u: goto label_229ed4;
        case 0x229ed8u: goto label_229ed8;
        case 0x229edcu: goto label_229edc;
        case 0x229ee0u: goto label_229ee0;
        case 0x229ee4u: goto label_229ee4;
        case 0x229ee8u: goto label_229ee8;
        case 0x229eecu: goto label_229eec;
        case 0x229ef0u: goto label_229ef0;
        case 0x229ef4u: goto label_229ef4;
        case 0x229ef8u: goto label_229ef8;
        case 0x229efcu: goto label_229efc;
        case 0x229f00u: goto label_229f00;
        case 0x229f04u: goto label_229f04;
        case 0x229f08u: goto label_229f08;
        case 0x229f0cu: goto label_229f0c;
        case 0x229f10u: goto label_229f10;
        case 0x229f14u: goto label_229f14;
        case 0x229f18u: goto label_229f18;
        case 0x229f1cu: goto label_229f1c;
        case 0x229f20u: goto label_229f20;
        case 0x229f24u: goto label_229f24;
        case 0x229f28u: goto label_229f28;
        case 0x229f2cu: goto label_229f2c;
        case 0x229f30u: goto label_229f30;
        case 0x229f34u: goto label_229f34;
        case 0x229f38u: goto label_229f38;
        case 0x229f3cu: goto label_229f3c;
        case 0x229f40u: goto label_229f40;
        case 0x229f44u: goto label_229f44;
        case 0x229f48u: goto label_229f48;
        case 0x229f4cu: goto label_229f4c;
        case 0x229f50u: goto label_229f50;
        case 0x229f54u: goto label_229f54;
        case 0x229f58u: goto label_229f58;
        case 0x229f5cu: goto label_229f5c;
        case 0x229f60u: goto label_229f60;
        case 0x229f64u: goto label_229f64;
        case 0x229f68u: goto label_229f68;
        case 0x229f6cu: goto label_229f6c;
        case 0x229f70u: goto label_229f70;
        case 0x229f74u: goto label_229f74;
        case 0x229f78u: goto label_229f78;
        case 0x229f7cu: goto label_229f7c;
        case 0x229f80u: goto label_229f80;
        case 0x229f84u: goto label_229f84;
        case 0x229f88u: goto label_229f88;
        case 0x229f8cu: goto label_229f8c;
        case 0x229f90u: goto label_229f90;
        case 0x229f94u: goto label_229f94;
        case 0x229f98u: goto label_229f98;
        case 0x229f9cu: goto label_229f9c;
        case 0x229fa0u: goto label_229fa0;
        case 0x229fa4u: goto label_229fa4;
        case 0x229fa8u: goto label_229fa8;
        case 0x229facu: goto label_229fac;
        case 0x229fb0u: goto label_229fb0;
        case 0x229fb4u: goto label_229fb4;
        case 0x229fb8u: goto label_229fb8;
        case 0x229fbcu: goto label_229fbc;
        case 0x229fc0u: goto label_229fc0;
        case 0x229fc4u: goto label_229fc4;
        case 0x229fc8u: goto label_229fc8;
        case 0x229fccu: goto label_229fcc;
        case 0x229fd0u: goto label_229fd0;
        case 0x229fd4u: goto label_229fd4;
        case 0x229fd8u: goto label_229fd8;
        case 0x229fdcu: goto label_229fdc;
        case 0x229fe0u: goto label_229fe0;
        case 0x229fe4u: goto label_229fe4;
        case 0x229fe8u: goto label_229fe8;
        case 0x229fecu: goto label_229fec;
        case 0x229ff0u: goto label_229ff0;
        case 0x229ff4u: goto label_229ff4;
        case 0x229ff8u: goto label_229ff8;
        case 0x229ffcu: goto label_229ffc;
        case 0x22a000u: goto label_22a000;
        case 0x22a004u: goto label_22a004;
        case 0x22a008u: goto label_22a008;
        case 0x22a00cu: goto label_22a00c;
        case 0x22a010u: goto label_22a010;
        case 0x22a014u: goto label_22a014;
        case 0x22a018u: goto label_22a018;
        case 0x22a01cu: goto label_22a01c;
        case 0x22a020u: goto label_22a020;
        case 0x22a024u: goto label_22a024;
        case 0x22a028u: goto label_22a028;
        case 0x22a02cu: goto label_22a02c;
        case 0x22a030u: goto label_22a030;
        case 0x22a034u: goto label_22a034;
        case 0x22a038u: goto label_22a038;
        case 0x22a03cu: goto label_22a03c;
        case 0x22a040u: goto label_22a040;
        case 0x22a044u: goto label_22a044;
        case 0x22a048u: goto label_22a048;
        case 0x22a04cu: goto label_22a04c;
        case 0x22a050u: goto label_22a050;
        case 0x22a054u: goto label_22a054;
        case 0x22a058u: goto label_22a058;
        case 0x22a05cu: goto label_22a05c;
        case 0x22a060u: goto label_22a060;
        case 0x22a064u: goto label_22a064;
        case 0x22a068u: goto label_22a068;
        case 0x22a06cu: goto label_22a06c;
        case 0x22a070u: goto label_22a070;
        case 0x22a074u: goto label_22a074;
        case 0x22a078u: goto label_22a078;
        case 0x22a07cu: goto label_22a07c;
        case 0x22a080u: goto label_22a080;
        case 0x22a084u: goto label_22a084;
        case 0x22a088u: goto label_22a088;
        case 0x22a08cu: goto label_22a08c;
        case 0x22a090u: goto label_22a090;
        case 0x22a094u: goto label_22a094;
        case 0x22a098u: goto label_22a098;
        case 0x22a09cu: goto label_22a09c;
        case 0x22a0a0u: goto label_22a0a0;
        case 0x22a0a4u: goto label_22a0a4;
        case 0x22a0a8u: goto label_22a0a8;
        case 0x22a0acu: goto label_22a0ac;
        case 0x22a0b0u: goto label_22a0b0;
        case 0x22a0b4u: goto label_22a0b4;
        case 0x22a0b8u: goto label_22a0b8;
        case 0x22a0bcu: goto label_22a0bc;
        case 0x22a0c0u: goto label_22a0c0;
        case 0x22a0c4u: goto label_22a0c4;
        case 0x22a0c8u: goto label_22a0c8;
        case 0x22a0ccu: goto label_22a0cc;
        case 0x22a0d0u: goto label_22a0d0;
        case 0x22a0d4u: goto label_22a0d4;
        case 0x22a0d8u: goto label_22a0d8;
        case 0x22a0dcu: goto label_22a0dc;
        case 0x22a0e0u: goto label_22a0e0;
        case 0x22a0e4u: goto label_22a0e4;
        case 0x22a0e8u: goto label_22a0e8;
        case 0x22a0ecu: goto label_22a0ec;
        case 0x22a0f0u: goto label_22a0f0;
        case 0x22a0f4u: goto label_22a0f4;
        case 0x22a0f8u: goto label_22a0f8;
        case 0x22a0fcu: goto label_22a0fc;
        case 0x22a100u: goto label_22a100;
        case 0x22a104u: goto label_22a104;
        case 0x22a108u: goto label_22a108;
        case 0x22a10cu: goto label_22a10c;
        case 0x22a110u: goto label_22a110;
        case 0x22a114u: goto label_22a114;
        case 0x22a118u: goto label_22a118;
        case 0x22a11cu: goto label_22a11c;
        case 0x22a120u: goto label_22a120;
        case 0x22a124u: goto label_22a124;
        case 0x22a128u: goto label_22a128;
        case 0x22a12cu: goto label_22a12c;
        case 0x22a130u: goto label_22a130;
        case 0x22a134u: goto label_22a134;
        case 0x22a138u: goto label_22a138;
        case 0x22a13cu: goto label_22a13c;
        case 0x22a140u: goto label_22a140;
        case 0x22a144u: goto label_22a144;
        case 0x22a148u: goto label_22a148;
        case 0x22a14cu: goto label_22a14c;
        case 0x22a150u: goto label_22a150;
        case 0x22a154u: goto label_22a154;
        case 0x22a158u: goto label_22a158;
        case 0x22a15cu: goto label_22a15c;
        case 0x22a160u: goto label_22a160;
        case 0x22a164u: goto label_22a164;
        case 0x22a168u: goto label_22a168;
        case 0x22a16cu: goto label_22a16c;
        case 0x22a170u: goto label_22a170;
        case 0x22a174u: goto label_22a174;
        case 0x22a178u: goto label_22a178;
        case 0x22a17cu: goto label_22a17c;
        case 0x22a180u: goto label_22a180;
        case 0x22a184u: goto label_22a184;
        case 0x22a188u: goto label_22a188;
        case 0x22a18cu: goto label_22a18c;
        case 0x22a190u: goto label_22a190;
        case 0x22a194u: goto label_22a194;
        case 0x22a198u: goto label_22a198;
        case 0x22a19cu: goto label_22a19c;
        case 0x22a1a0u: goto label_22a1a0;
        case 0x22a1a4u: goto label_22a1a4;
        case 0x22a1a8u: goto label_22a1a8;
        case 0x22a1acu: goto label_22a1ac;
        case 0x22a1b0u: goto label_22a1b0;
        case 0x22a1b4u: goto label_22a1b4;
        case 0x22a1b8u: goto label_22a1b8;
        case 0x22a1bcu: goto label_22a1bc;
        case 0x22a1c0u: goto label_22a1c0;
        case 0x22a1c4u: goto label_22a1c4;
        case 0x22a1c8u: goto label_22a1c8;
        case 0x22a1ccu: goto label_22a1cc;
        case 0x22a1d0u: goto label_22a1d0;
        case 0x22a1d4u: goto label_22a1d4;
        case 0x22a1d8u: goto label_22a1d8;
        case 0x22a1dcu: goto label_22a1dc;
        case 0x22a1e0u: goto label_22a1e0;
        case 0x22a1e4u: goto label_22a1e4;
        case 0x22a1e8u: goto label_22a1e8;
        case 0x22a1ecu: goto label_22a1ec;
        case 0x22a1f0u: goto label_22a1f0;
        case 0x22a1f4u: goto label_22a1f4;
        case 0x22a1f8u: goto label_22a1f8;
        case 0x22a1fcu: goto label_22a1fc;
        case 0x22a200u: goto label_22a200;
        case 0x22a204u: goto label_22a204;
        case 0x22a208u: goto label_22a208;
        case 0x22a20cu: goto label_22a20c;
        case 0x22a210u: goto label_22a210;
        case 0x22a214u: goto label_22a214;
        case 0x22a218u: goto label_22a218;
        case 0x22a21cu: goto label_22a21c;
        case 0x22a220u: goto label_22a220;
        case 0x22a224u: goto label_22a224;
        case 0x22a228u: goto label_22a228;
        case 0x22a22cu: goto label_22a22c;
        case 0x22a230u: goto label_22a230;
        case 0x22a234u: goto label_22a234;
        case 0x22a238u: goto label_22a238;
        case 0x22a23cu: goto label_22a23c;
        case 0x22a240u: goto label_22a240;
        case 0x22a244u: goto label_22a244;
        case 0x22a248u: goto label_22a248;
        case 0x22a24cu: goto label_22a24c;
        case 0x22a250u: goto label_22a250;
        case 0x22a254u: goto label_22a254;
        case 0x22a258u: goto label_22a258;
        case 0x22a25cu: goto label_22a25c;
        case 0x22a260u: goto label_22a260;
        case 0x22a264u: goto label_22a264;
        case 0x22a268u: goto label_22a268;
        case 0x22a26cu: goto label_22a26c;
        case 0x22a270u: goto label_22a270;
        case 0x22a274u: goto label_22a274;
        case 0x22a278u: goto label_22a278;
        case 0x22a27cu: goto label_22a27c;
        case 0x22a280u: goto label_22a280;
        case 0x22a284u: goto label_22a284;
        case 0x22a288u: goto label_22a288;
        case 0x22a28cu: goto label_22a28c;
        case 0x22a290u: goto label_22a290;
        case 0x22a294u: goto label_22a294;
        case 0x22a298u: goto label_22a298;
        case 0x22a29cu: goto label_22a29c;
        case 0x22a2a0u: goto label_22a2a0;
        case 0x22a2a4u: goto label_22a2a4;
        default: break;
    }

    ctx->pc = 0x229c40u;

label_229c40:
    // 0x229c40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x229c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_229c44:
    // 0x229c44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x229c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_229c48:
    // 0x229c48: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x229c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_229c4c:
    // 0x229c4c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x229c4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_229c50:
    // 0x229c50: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x229c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_229c54:
    // 0x229c54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x229c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_229c58:
    // 0x229c58: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x229c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_229c5c:
    // 0x229c5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x229c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_229c60:
    // 0x229c60: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x229c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_229c64:
    // 0x229c64: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x229c64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_229c68:
    // 0x229c68: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x229c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_229c6c:
    // 0x229c6c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x229c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_229c70:
    // 0x229c70: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x229c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_229c74:
    // 0x229c74: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x229c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_229c78:
    // 0x229c78: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x229c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_229c7c:
    // 0x229c7c: 0x12060014  beq         $s0, $a2, . + 4 + (0x14 << 2)
label_229c80:
    if (ctx->pc == 0x229C80u) {
        ctx->pc = 0x229C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C7Cu;
        // 0x229c80: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C84u;
        goto label_229c84;
    }
    ctx->pc = 0x229C7Cu;
    {
        const bool branch_taken_0x229c7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        ctx->pc = 0x229C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C7Cu;
        // 0x229c80: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c7c) {
            ctx->pc = 0x229CD0u;
            goto label_229cd0;
        }
    }
    ctx->pc = 0x229C84u;
label_229c84:
    // 0x229c84: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x229c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_229c88:
    // 0x229c88: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x229c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_229c8c:
    // 0x229c8c: 0x2022018  mult        $a0, $s0, $v0
    ctx->pc = 0x229c8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_229c90:
    // 0x229c90: 0x2465d810  addiu       $a1, $v1, -0x27F0
    ctx->pc = 0x229c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
label_229c94:
    // 0x229c94: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x229c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_229c98:
    // 0x229c98: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x229c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_229c9c:
    // 0x229c9c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_229ca0:
    if (ctx->pc == 0x229CA0u) {
        ctx->pc = 0x229CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C9Cu;
        // 0x229ca0: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229CA4u;
        goto label_229ca4;
    }
    ctx->pc = 0x229C9Cu;
    {
        const bool branch_taken_0x229c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C9Cu;
        // 0x229ca0: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c9c) {
            ctx->pc = 0x229CC0u;
            goto label_229cc0;
        }
    }
    ctx->pc = 0x229CA4u;
label_229ca4:
    // 0x229ca4: 0x84430042  lh          $v1, 0x42($v0)
    ctx->pc = 0x229ca4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
label_229ca8:
    // 0x229ca8: 0x54660006  bnel        $v1, $a2, . + 4 + (0x6 << 2)
label_229cac:
    if (ctx->pc == 0x229CACu) {
        ctx->pc = 0x229CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CA8u;
        // 0x229cac: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229CB0u;
        goto label_229cb0;
    }
    ctx->pc = 0x229CA8u;
    {
        const bool branch_taken_0x229ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x229ca8) {
            ctx->pc = 0x229CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229CA8u;
            // 0x229cac: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229CC4u;
            goto label_229cc4;
        }
    }
    ctx->pc = 0x229CB0u;
label_229cb0:
    // 0x229cb0: 0xc0874fa  jal         func_21D3E8
label_229cb4:
    if (ctx->pc == 0x229CB4u) {
        ctx->pc = 0x229CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CB0u;
        // 0x229cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229CB8u;
        goto label_229cb8;
    }
    ctx->pc = 0x229CB0u;
    SET_GPR_U32(ctx, 31, 0x229CB8u);
    ctx->pc = 0x229CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CB0u;
    // 0x229cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x229CB0u, 0x229CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CB8u;
label_229cb8:
    // 0x229cb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_229cbc:
    if (ctx->pc == 0x229CBCu) {
        ctx->pc = 0x229CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CB8u;
        // 0x229cbc: 0xa0500019  sb          $s0, 0x19($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 25), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229CC0u;
        goto label_229cc0;
    }
    ctx->pc = 0x229CB8u;
    {
        const bool branch_taken_0x229cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CB8u;
        // 0x229cbc: 0xa0500019  sb          $s0, 0x19($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 25), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229cb8) {
            ctx->pc = 0x229CC4u;
            goto label_229cc4;
        }
    }
    ctx->pc = 0x229CC0u;
label_229cc0:
    // 0x229cc0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x229cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_229cc4:
    // 0x229cc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x229cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_229cc8:
    // 0x229cc8: 0x16020048  bne         $s0, $v0, . + 4 + (0x48 << 2)
label_229ccc:
    if (ctx->pc == 0x229CCCu) {
        ctx->pc = 0x229CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CC8u;
        // 0x229ccc: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229CD0u;
        goto label_229cd0;
    }
    ctx->pc = 0x229CC8u;
    {
        const bool branch_taken_0x229cc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x229CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CC8u;
        // 0x229ccc: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229cc8) {
            ctx->pc = 0x229DECu;
            goto label_229dec;
        }
    }
    ctx->pc = 0x229CD0u;
label_229cd0:
    // 0x229cd0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x229cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_229cd4:
    // 0x229cd4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x229cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_229cd8:
    // 0x229cd8: 0x6800006  bltz        $s4, . + 4 + (0x6 << 2)
label_229cdc:
    if (ctx->pc == 0x229CDCu) {
        ctx->pc = 0x229CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CD8u;
        // 0x229cdc: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229CE0u;
        goto label_229ce0;
    }
    ctx->pc = 0x229CD8u;
    {
        const bool branch_taken_0x229cd8 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x229CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CD8u;
        // 0x229cdc: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229cd8) {
            ctx->pc = 0x229CF4u;
            goto label_229cf4;
        }
    }
    ctx->pc = 0x229CE0u;
label_229ce0:
    // 0x229ce0: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x229ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_229ce4:
    // 0x229ce4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x229ce4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_229ce8:
    // 0x229ce8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x229ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_229cec:
    // 0x229cec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_229cf0:
    if (ctx->pc == 0x229CF0u) {
        ctx->pc = 0x229CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CECu;
        // 0x229cf0: 0x2ca20002  sltiu       $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x229CF4u;
        goto label_229cf4;
    }
    ctx->pc = 0x229CECu;
    {
        const bool branch_taken_0x229cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CECu;
        // 0x229cf0: 0x2ca20002  sltiu       $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229cec) {
            ctx->pc = 0x229D00u;
            goto label_229d00;
        }
    }
    ctx->pc = 0x229CF4u;
label_229cf4:
    // 0x229cf4: 0x8fc2489c  lw          $v0, 0x489C($fp)
    ctx->pc = 0x229cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_229cf8:
    // 0x229cf8: 0x84450224  lh          $a1, 0x224($v0)
    ctx->pc = 0x229cf8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 548)));
label_229cfc:
    // 0x229cfc: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x229cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_229d00:
    // 0x229d00: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_229d04:
    if (ctx->pc == 0x229D04u) {
        ctx->pc = 0x229D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D00u;
        // 0x229d04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229D08u;
        goto label_229d08;
    }
    ctx->pc = 0x229D00u;
    {
        const bool branch_taken_0x229d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D00u;
        // 0x229d04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d00) {
            ctx->pc = 0x229D2Cu;
            goto label_229d2c;
        }
    }
    ctx->pc = 0x229D08u;
label_229d08:
    // 0x229d08: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x229d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_229d0c:
    // 0x229d0c: 0xc06ba26  jal         func_1AE898
label_229d10:
    if (ctx->pc == 0x229D10u) {
        ctx->pc = 0x229D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D0Cu;
        // 0x229d10: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229D14u;
        goto label_229d14;
    }
    ctx->pc = 0x229D0Cu;
    SET_GPR_U32(ctx, 31, 0x229D14u);
    ctx->pc = 0x229D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D0Cu;
    // 0x229d10: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x229D0Cu, 0x229D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D14u;
label_229d14:
    // 0x229d14: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_229d18:
    if (ctx->pc == 0x229D18u) {
        ctx->pc = 0x229D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D14u;
        // 0x229d18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229D1Cu;
        goto label_229d1c;
    }
    ctx->pc = 0x229D14u;
    {
        const bool branch_taken_0x229d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229d14) {
            ctx->pc = 0x229D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229D14u;
            // 0x229d18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229D2Cu;
            goto label_229d2c;
        }
    }
    ctx->pc = 0x229D1Cu;
label_229d1c:
    // 0x229d1c: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x229d1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_229d20:
    // 0x229d20: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x229d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_229d24:
    // 0x229d24: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x229d24u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_229d28:
    // 0x229d28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x229d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_229d2c:
    // 0x229d2c: 0x1602001c  bne         $s0, $v0, . + 4 + (0x1C << 2)
label_229d30:
    if (ctx->pc == 0x229D30u) {
        ctx->pc = 0x229D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D2Cu;
        // 0x229d30: 0x8fc4489c  lw          $a0, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229D34u;
        goto label_229d34;
    }
    ctx->pc = 0x229D2Cu;
    {
        const bool branch_taken_0x229d2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x229D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D2Cu;
        // 0x229d30: 0x8fc4489c  lw          $a0, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d2c) {
            ctx->pc = 0x229DA0u;
            goto label_229da0;
        }
    }
    ctx->pc = 0x229D34u;
label_229d34:
    // 0x229d34: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x229d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_229d38:
    // 0x229d38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x229d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229d3c:
    // 0x229d3c: 0x2465d85c  addiu       $a1, $v1, -0x27A4
    ctx->pc = 0x229d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957148));
label_229d40:
    // 0x229d40: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x229d40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_229d44:
    // 0x229d44: 0x24a7ffb4  addiu       $a3, $a1, -0x4C
    ctx->pc = 0x229d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967220));
label_229d48:
    // 0x229d48: 0x84e20042  lh          $v0, 0x42($a3)
    ctx->pc = 0x229d48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 66)));
label_229d4c:
    // 0x229d4c: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
label_229d50:
    if (ctx->pc == 0x229D50u) {
        ctx->pc = 0x229D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D4Cu;
        // 0x229d50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229D54u;
        goto label_229d54;
    }
    ctx->pc = 0x229D4Cu;
    {
        const bool branch_taken_0x229d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x229D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D4Cu;
        // 0x229d50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d4c) {
            ctx->pc = 0x229D68u;
            goto label_229d68;
        }
    }
    ctx->pc = 0x229D54u;
label_229d54:
    // 0x229d54: 0x8c62d85c  lw          $v0, -0x27A4($v1)
    ctx->pc = 0x229d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957148)));
label_229d58:
    // 0x229d58: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_229d5c:
    if (ctx->pc == 0x229D5Cu) {
        ctx->pc = 0x229D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D58u;
        // 0x229d5c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229D60u;
        goto label_229d60;
    }
    ctx->pc = 0x229D58u;
    {
        const bool branch_taken_0x229d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229d58) {
            ctx->pc = 0x229D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229D58u;
            // 0x229d5c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229D6Cu;
            goto label_229d6c;
        }
    }
    ctx->pc = 0x229D60u;
label_229d60:
    // 0x229d60: 0x1000000e  b           . + 4 + (0xE << 2)
label_229d64:
    if (ctx->pc == 0x229D64u) {
        ctx->pc = 0x229D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D60u;
        // 0x229d64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229D68u;
        goto label_229d68;
    }
    ctx->pc = 0x229D60u;
    {
        const bool branch_taken_0x229d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D60u;
        // 0x229d64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d60) {
            ctx->pc = 0x229D9Cu;
            goto label_229d9c;
        }
    }
    ctx->pc = 0x229D68u;
label_229d68:
    // 0x229d68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x229d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_229d6c:
    // 0x229d6c: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x229d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
label_229d70:
    // 0x229d70: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x229d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
label_229d74:
    // 0x229d74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_229d78:
    if (ctx->pc == 0x229D78u) {
        ctx->pc = 0x229D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D74u;
        // 0x229d78: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229D7Cu;
        goto label_229d7c;
    }
    ctx->pc = 0x229D74u;
    {
        const bool branch_taken_0x229d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D74u;
        // 0x229d78: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d74) {
            ctx->pc = 0x229D9Cu;
            goto label_229d9c;
        }
    }
    ctx->pc = 0x229D7Cu;
label_229d7c:
    // 0x229d7c: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x229d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_229d80:
    // 0x229d80: 0x84430042  lh          $v1, 0x42($v0)
    ctx->pc = 0x229d80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
label_229d84:
    // 0x229d84: 0x5468fff9  bnel        $v1, $t0, . + 4 + (-0x7 << 2)
label_229d88:
    if (ctx->pc == 0x229D88u) {
        ctx->pc = 0x229D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D84u;
        // 0x229d88: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229D8Cu;
        goto label_229d8c;
    }
    ctx->pc = 0x229D84u;
    {
        const bool branch_taken_0x229d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x229d84) {
            ctx->pc = 0x229D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229D84u;
            // 0x229d88: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229D6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229d6c;
        }
    }
    ctx->pc = 0x229D8Cu;
label_229d8c:
    // 0x229d8c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x229d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_229d90:
    // 0x229d90: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_229d94:
    if (ctx->pc == 0x229D94u) {
        ctx->pc = 0x229D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D90u;
        // 0x229d94: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229D98u;
        goto label_229d98;
    }
    ctx->pc = 0x229D90u;
    {
        const bool branch_taken_0x229d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229d90) {
            ctx->pc = 0x229D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229D90u;
            // 0x229d94: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229D6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229d6c;
        }
    }
    ctx->pc = 0x229D98u;
label_229d98:
    // 0x229d98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x229d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_229d9c:
    // 0x229d9c: 0x8fc4489c  lw          $a0, 0x489C($fp)
    ctx->pc = 0x229d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_229da0:
    // 0x229da0: 0xc0e409a  jal         func_390268
label_229da4:
    if (ctx->pc == 0x229DA4u) {
        ctx->pc = 0x229DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DA0u;
        // 0x229da4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229DA8u;
        goto label_229da8;
    }
    ctx->pc = 0x229DA0u;
    SET_GPR_U32(ctx, 31, 0x229DA8u);
    ctx->pc = 0x229DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DA0u;
    // 0x229da4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x229DA0u, 0x229DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DA8u;
label_229da8:
    // 0x229da8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_229dac:
    if (ctx->pc == 0x229DACu) {
        ctx->pc = 0x229DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DA8u;
        // 0x229dac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229DB0u;
        goto label_229db0;
    }
    ctx->pc = 0x229DA8u;
    {
        const bool branch_taken_0x229da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DA8u;
        // 0x229dac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229da8) {
            ctx->pc = 0x229DD8u;
            goto label_229dd8;
        }
    }
    ctx->pc = 0x229DB0u;
label_229db0:
    // 0x229db0: 0xc0874fa  jal         func_21D3E8
label_229db4:
    if (ctx->pc == 0x229DB4u) {
        ctx->pc = 0x229DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DB0u;
        // 0x229db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229DB8u;
        goto label_229db8;
    }
    ctx->pc = 0x229DB0u;
    SET_GPR_U32(ctx, 31, 0x229DB8u);
    ctx->pc = 0x229DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DB0u;
    // 0x229db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x229DB0u, 0x229DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DB8u;
label_229db8:
    // 0x229db8: 0xa0500019  sb          $s0, 0x19($v0)
    ctx->pc = 0x229db8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25), (uint8_t)GPR_U32(ctx, 16));
label_229dbc:
    // 0x229dbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x229dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_229dc0:
    // 0x229dc0: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
label_229dc4:
    if (ctx->pc == 0x229DC4u) {
        ctx->pc = 0x229DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DC0u;
        // 0x229dc4: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229DC8u;
        goto label_229dc8;
    }
    ctx->pc = 0x229DC0u;
    {
        const bool branch_taken_0x229dc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x229DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DC0u;
        // 0x229dc4: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229dc0) {
            ctx->pc = 0x229DF0u;
            goto label_229df0;
        }
    }
    ctx->pc = 0x229DC8u;
label_229dc8:
    // 0x229dc8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x229dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_229dcc:
    // 0x229dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229dd0:
    // 0x229dd0: 0x10000006  b           . + 4 + (0x6 << 2)
label_229dd4:
    if (ctx->pc == 0x229DD4u) {
        ctx->pc = 0x229DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DD0u;
        // 0x229dd4: 0xac625580  sw          $v0, 0x5580($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 21888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229DD8u;
        goto label_229dd8;
    }
    ctx->pc = 0x229DD0u;
    {
        const bool branch_taken_0x229dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DD0u;
        // 0x229dd4: 0xac625580  sw          $v0, 0x5580($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 21888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229dd0) {
            ctx->pc = 0x229DECu;
            goto label_229dec;
        }
    }
    ctx->pc = 0x229DD8u;
label_229dd8:
    // 0x229dd8: 0x12020127  beq         $s0, $v0, . + 4 + (0x127 << 2)
label_229ddc:
    if (ctx->pc == 0x229DDCu) {
        ctx->pc = 0x229DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DD8u;
        // 0x229ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229DE0u;
        goto label_229de0;
    }
    ctx->pc = 0x229DD8u;
    {
        const bool branch_taken_0x229dd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x229DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DD8u;
        // 0x229ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229dd8) {
            ctx->pc = 0x22A278u;
            goto label_22a278;
        }
    }
    ctx->pc = 0x229DE0u;
label_229de0:
    // 0x229de0: 0xc0874fa  jal         func_21D3E8
label_229de4:
    if (ctx->pc == 0x229DE4u) {
        ctx->pc = 0x229DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DE0u;
        // 0x229de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229DE8u;
        goto label_229de8;
    }
    ctx->pc = 0x229DE0u;
    SET_GPR_U32(ctx, 31, 0x229DE8u);
    ctx->pc = 0x229DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DE0u;
    // 0x229de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x229DE0u, 0x229DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DE8u;
label_229de8:
    // 0x229de8: 0xa0500019  sb          $s0, 0x19($v0)
    ctx->pc = 0x229de8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25), (uint8_t)GPR_U32(ctx, 16));
label_229dec:
    // 0x229dec: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x229decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_229df0:
    // 0x229df0: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x229df0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_229df4:
    // 0x229df4: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_229df8:
    if (ctx->pc == 0x229DF8u) {
        ctx->pc = 0x229DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DF4u;
        // 0x229df8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229DFCu;
        goto label_229dfc;
    }
    ctx->pc = 0x229DF4u;
    {
        const bool branch_taken_0x229df4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x229DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DF4u;
        // 0x229df8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229df4) {
            ctx->pc = 0x229E48u;
            goto label_229e48;
        }
    }
    ctx->pc = 0x229DFCu;
label_229dfc:
    // 0x229dfc: 0x24120228  addiu       $s2, $zero, 0x228
    ctx->pc = 0x229dfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_229e00:
    // 0x229e00: 0x8fc4489c  lw          $a0, 0x489C($fp)
    ctx->pc = 0x229e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_229e04:
    // 0x229e04: 0xc0e409a  jal         func_390268
label_229e08:
    if (ctx->pc == 0x229E08u) {
        ctx->pc = 0x229E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E04u;
        // 0x229e08: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E0Cu;
        goto label_229e0c;
    }
    ctx->pc = 0x229E04u;
    SET_GPR_U32(ctx, 31, 0x229E0Cu);
    ctx->pc = 0x229E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E04u;
    // 0x229e08: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x229E04u, 0x229E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E0Cu;
label_229e0c:
    // 0x229e0c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_229e10:
    if (ctx->pc == 0x229E10u) {
        ctx->pc = 0x229E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E0Cu;
        // 0x229e10: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E14u;
        goto label_229e14;
    }
    ctx->pc = 0x229E0Cu;
    {
        const bool branch_taken_0x229e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E0Cu;
        // 0x229e10: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e0c) {
            ctx->pc = 0x229E34u;
            goto label_229e34;
        }
    }
    ctx->pc = 0x229E14u;
label_229e14:
    // 0x229e14: 0xc087502  jal         func_21D408
label_229e18:
    if (ctx->pc == 0x229E18u) {
        ctx->pc = 0x229E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E14u;
        // 0x229e18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E1Cu;
        goto label_229e1c;
    }
    ctx->pc = 0x229E14u;
    SET_GPR_U32(ctx, 31, 0x229E1Cu);
    ctx->pc = 0x229E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E14u;
    // 0x229e18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x229E14u, 0x229E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E1Cu;
label_229e1c:
    // 0x229e1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229e20:
    // 0x229e20: 0xc0a3bd2  jal         func_28EF48
label_229e24:
    if (ctx->pc == 0x229E24u) {
        ctx->pc = 0x229E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E20u;
        // 0x229e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E28u;
        goto label_229e28;
    }
    ctx->pc = 0x229E20u;
    SET_GPR_U32(ctx, 31, 0x229E28u);
    ctx->pc = 0x229E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E20u;
    // 0x229e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF48u, 0x229E20u, 0x229E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E28u;
label_229e28:
    // 0x229e28: 0xc13782a  jal         func_4DE0A8
label_229e2c:
    if (ctx->pc == 0x229E2Cu) {
        ctx->pc = 0x229E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E28u;
        // 0x229e2c: 0x26040164  addiu       $a0, $s0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E30u;
        goto label_229e30;
    }
    ctx->pc = 0x229E28u;
    SET_GPR_U32(ctx, 31, 0x229E30u);
    ctx->pc = 0x229E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E28u;
    // 0x229e2c: 0x26040164  addiu       $a0, $s0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0A8u, 0x229E28u, 0x229E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E30u;
label_229e30:
    // 0x229e30: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x229e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_229e34:
    // 0x229e34: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x229e34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_229e38:
    // 0x229e38: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x229e38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_229e3c:
    // 0x229e3c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x229e3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_229e40:
    // 0x229e40: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_229e44:
    if (ctx->pc == 0x229E44u) {
        ctx->pc = 0x229E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E40u;
        // 0x229e44: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E48u;
        goto label_229e48;
    }
    ctx->pc = 0x229E40u;
    {
        const bool branch_taken_0x229e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E40u;
        // 0x229e44: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e40) {
            ctx->pc = 0x229E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229e00;
        }
    }
    ctx->pc = 0x229E48u;
label_229e48:
    // 0x229e48: 0x8fc4489c  lw          $a0, 0x489C($fp)
    ctx->pc = 0x229e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_229e4c:
    // 0x229e4c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x229e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_229e50:
    // 0x229e50: 0xc1066c4  jal         func_419B10
label_229e54:
    if (ctx->pc == 0x229E54u) {
        ctx->pc = 0x229E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E50u;
        // 0x229e54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E58u;
        goto label_229e58;
    }
    ctx->pc = 0x229E50u;
    SET_GPR_U32(ctx, 31, 0x229E58u);
    ctx->pc = 0x229E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E50u;
    // 0x229e54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B10u, 0x229E50u, 0x229E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E58u;
label_229e58:
    // 0x229e58: 0x823301b0  lb          $s3, 0x1B0($s1)
    ctx->pc = 0x229e58u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_229e5c:
    // 0x229e5c: 0xc08a55c  jal         func_229570
label_229e60:
    if (ctx->pc == 0x229E60u) {
        ctx->pc = 0x229E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E5Cu;
        // 0x229e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E64u;
        goto label_229e64;
    }
    ctx->pc = 0x229E5Cu;
    SET_GPR_U32(ctx, 31, 0x229E64u);
    ctx->pc = 0x229E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E5Cu;
    // 0x229e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229570u, 0x229E5Cu, 0x229E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E64u;
label_229e64:
    // 0x229e64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x229e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229e68:
    // 0x229e68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x229e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_229e6c:
    // 0x229e6c: 0x16a20010  bne         $s5, $v0, . + 4 + (0x10 << 2)
label_229e70:
    if (ctx->pc == 0x229E70u) {
        ctx->pc = 0x229E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E6Cu;
        // 0x229e70: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E74u;
        goto label_229e74;
    }
    ctx->pc = 0x229E6Cu;
    {
        const bool branch_taken_0x229e6c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x229E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E6Cu;
        // 0x229e70: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e6c) {
            ctx->pc = 0x229EB0u;
            goto label_229eb0;
        }
    }
    ctx->pc = 0x229E74u;
label_229e74:
    // 0x229e74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x229e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229e78:
    // 0x229e78: 0x10000002  b           . + 4 + (0x2 << 2)
label_229e7c:
    if (ctx->pc == 0x229E7Cu) {
        ctx->pc = 0x229E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E78u;
        // 0x229e7c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E80u;
        goto label_229e80;
    }
    ctx->pc = 0x229E78u;
    {
        const bool branch_taken_0x229e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E78u;
        // 0x229e7c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e78) {
            ctx->pc = 0x229E84u;
            goto label_229e84;
        }
    }
    ctx->pc = 0x229E80u;
label_229e80:
    // 0x229e80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x229e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_229e84:
    // 0x229e84: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x229e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_229e88:
    // 0x229e88: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_229e8c:
    if (ctx->pc == 0x229E8Cu) {
        ctx->pc = 0x229E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E88u;
        // 0x229e8c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E90u;
        goto label_229e90;
    }
    ctx->pc = 0x229E88u;
    {
        const bool branch_taken_0x229e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E88u;
        // 0x229e8c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e88) {
            ctx->pc = 0x229EC4u;
            goto label_229ec4;
        }
    }
    ctx->pc = 0x229E90u;
label_229e90:
    // 0x229e90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x229e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_229e94:
    // 0x229e94: 0x24440840  addiu       $a0, $v0, 0x840
    ctx->pc = 0x229e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_229e98:
    // 0x229e98: 0xc06c880  jal         func_1B2200
label_229e9c:
    if (ctx->pc == 0x229E9Cu) {
        ctx->pc = 0x229E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E98u;
        // 0x229e9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229EA0u;
        goto label_229ea0;
    }
    ctx->pc = 0x229E98u;
    SET_GPR_U32(ctx, 31, 0x229EA0u);
    ctx->pc = 0x229E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E98u;
    // 0x229e9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2200u, 0x229E98u, 0x229EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229EA0u;
label_229ea0:
    // 0x229ea0: 0x1054fff7  beq         $v0, $s4, . + 4 + (-0x9 << 2)
label_229ea4:
    if (ctx->pc == 0x229EA4u) {
        ctx->pc = 0x229EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EA0u;
        // 0x229ea4: 0xae220380  sw          $v0, 0x380($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229EA8u;
        goto label_229ea8;
    }
    ctx->pc = 0x229EA0u;
    {
        const bool branch_taken_0x229ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x229EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EA0u;
        // 0x229ea4: 0xae220380  sw          $v0, 0x380($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ea0) {
            ctx->pc = 0x229E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229e80;
        }
    }
    ctx->pc = 0x229EA8u;
label_229ea8:
    // 0x229ea8: 0x10000006  b           . + 4 + (0x6 << 2)
label_229eac:
    if (ctx->pc == 0x229EACu) {
        ctx->pc = 0x229EB0u;
        goto label_229eb0;
    }
    ctx->pc = 0x229EA8u;
    {
        const bool branch_taken_0x229ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229ea8) {
            ctx->pc = 0x229EC4u;
            goto label_229ec4;
        }
    }
    ctx->pc = 0x229EB0u;
label_229eb0:
    // 0x229eb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x229eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_229eb4:
    // 0x229eb4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x229eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_229eb8:
    // 0x229eb8: 0xc06c880  jal         func_1B2200
label_229ebc:
    if (ctx->pc == 0x229EBCu) {
        ctx->pc = 0x229EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EB8u;
        // 0x229ebc: 0x24640840  addiu       $a0, $v1, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229EC0u;
        goto label_229ec0;
    }
    ctx->pc = 0x229EB8u;
    SET_GPR_U32(ctx, 31, 0x229EC0u);
    ctx->pc = 0x229EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EB8u;
    // 0x229ebc: 0x24640840  addiu       $a0, $v1, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2200u, 0x229EB8u, 0x229EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229EC0u;
label_229ec0:
    // 0x229ec0: 0xae220380  sw          $v0, 0x380($s1)
    ctx->pc = 0x229ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 2));
label_229ec4:
    // 0x229ec4: 0xc088ac6  jal         func_222B18
label_229ec8:
    if (ctx->pc == 0x229EC8u) {
        ctx->pc = 0x229EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EC4u;
        // 0x229ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229ECCu;
        goto label_229ecc;
    }
    ctx->pc = 0x229EC4u;
    SET_GPR_U32(ctx, 31, 0x229ECCu);
    ctx->pc = 0x229EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EC4u;
    // 0x229ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x229EC4u, 0x229ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229ECCu;
label_229ecc:
    // 0x229ecc: 0xc10614c  jal         func_418530
label_229ed0:
    if (ctx->pc == 0x229ED0u) {
        ctx->pc = 0x229ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229ECCu;
        // 0x229ed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229ED4u;
        goto label_229ed4;
    }
    ctx->pc = 0x229ECCu;
    SET_GPR_U32(ctx, 31, 0x229ED4u);
    ctx->pc = 0x229ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229ECCu;
    // 0x229ed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418530u, 0x229ECCu, 0x229ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229ED4u;
label_229ed4:
    // 0x229ed4: 0xc0874fa  jal         func_21D3E8
label_229ed8:
    if (ctx->pc == 0x229ED8u) {
        ctx->pc = 0x229ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229ED4u;
        // 0x229ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229EDCu;
        goto label_229edc;
    }
    ctx->pc = 0x229ED4u;
    SET_GPR_U32(ctx, 31, 0x229EDCu);
    ctx->pc = 0x229ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229ED4u;
    // 0x229ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x229ED4u, 0x229EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229EDCu;
label_229edc:
    // 0x229edc: 0x80520019  lb          $s2, 0x19($v0)
    ctx->pc = 0x229edcu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_229ee0:
    // 0x229ee0: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_229ee4:
    if (ctx->pc == 0x229EE4u) {
        ctx->pc = 0x229EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EE0u;
        // 0x229ee4: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229EE8u;
        goto label_229ee8;
    }
    ctx->pc = 0x229EE0u;
    {
        const bool branch_taken_0x229ee0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x229EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EE0u;
        // 0x229ee4: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ee0) {
            ctx->pc = 0x229EFCu;
            goto label_229efc;
        }
    }
    ctx->pc = 0x229EE8u;
label_229ee8:
    // 0x229ee8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x229ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_229eec:
    // 0x229eec: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x229eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_229ef0:
    // 0x229ef0: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x229ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_229ef4:
    // 0x229ef4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x229ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_229ef8:
    // 0x229ef8: 0xa4730042  sh          $s3, 0x42($v1)
    ctx->pc = 0x229ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 19));
label_229efc:
    // 0x229efc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x229efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_229f00:
    // 0x229f00: 0xc087502  jal         func_21D408
label_229f04:
    if (ctx->pc == 0x229F04u) {
        ctx->pc = 0x229F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F00u;
        // 0x229f04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F08u;
        goto label_229f08;
    }
    ctx->pc = 0x229F00u;
    SET_GPR_U32(ctx, 31, 0x229F08u);
    ctx->pc = 0x229F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F00u;
    // 0x229f04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x229F00u, 0x229F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F08u;
label_229f08:
    // 0x229f08: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x229f08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229f0c:
    // 0x229f0c: 0xc0a3bd2  jal         func_28EF48
label_229f10:
    if (ctx->pc == 0x229F10u) {
        ctx->pc = 0x229F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F0Cu;
        // 0x229f10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F14u;
        goto label_229f14;
    }
    ctx->pc = 0x229F0Cu;
    SET_GPR_U32(ctx, 31, 0x229F14u);
    ctx->pc = 0x229F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F0Cu;
    // 0x229f10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF48u, 0x229F0Cu, 0x229F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F14u;
label_229f14:
    // 0x229f14: 0xc13782a  jal         func_4DE0A8
label_229f18:
    if (ctx->pc == 0x229F18u) {
        ctx->pc = 0x229F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F14u;
        // 0x229f18: 0x26a40164  addiu       $a0, $s5, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F1Cu;
        goto label_229f1c;
    }
    ctx->pc = 0x229F14u;
    SET_GPR_U32(ctx, 31, 0x229F1Cu);
    ctx->pc = 0x229F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F14u;
    // 0x229f18: 0x26a40164  addiu       $a0, $s5, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0A8u, 0x229F14u, 0x229F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F1Cu;
label_229f1c:
    // 0x229f1c: 0xc0a36c8  jal         func_28DB20
label_229f20:
    if (ctx->pc == 0x229F20u) {
        ctx->pc = 0x229F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F1Cu;
        // 0x229f20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F24u;
        goto label_229f24;
    }
    ctx->pc = 0x229F1Cu;
    SET_GPR_U32(ctx, 31, 0x229F24u);
    ctx->pc = 0x229F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F1Cu;
    // 0x229f20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x229F1Cu, 0x229F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F24u;
label_229f24:
    // 0x229f24: 0xc0a3644  jal         func_28D910
label_229f28:
    if (ctx->pc == 0x229F28u) {
        ctx->pc = 0x229F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F24u;
        // 0x229f28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F2Cu;
        goto label_229f2c;
    }
    ctx->pc = 0x229F24u;
    SET_GPR_U32(ctx, 31, 0x229F2Cu);
    ctx->pc = 0x229F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F24u;
    // 0x229f28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D910u, 0x229F24u, 0x229F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F2Cu;
label_229f2c:
    // 0x229f2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x229f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229f30:
    // 0x229f30: 0xc0a33ae  jal         func_28CEB8
label_229f34:
    if (ctx->pc == 0x229F34u) {
        ctx->pc = 0x229F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F30u;
        // 0x229f34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F38u;
        goto label_229f38;
    }
    ctx->pc = 0x229F30u;
    SET_GPR_U32(ctx, 31, 0x229F38u);
    ctx->pc = 0x229F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F30u;
    // 0x229f34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CEB8u, 0x229F30u, 0x229F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F38u;
label_229f38:
    // 0x229f38: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x229f38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_229f3c:
    // 0x229f3c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x229f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_229f40:
    // 0x229f40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x229f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229f44:
    // 0x229f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x229f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_229f48:
    // 0x229f48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x229f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_229f4c:
    // 0x229f4c: 0xae2503ac  sw          $a1, 0x3AC($s1)
    ctx->pc = 0x229f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 940), GPR_U32(ctx, 5));
label_229f50:
    // 0x229f50: 0xc087502  jal         func_21D408
label_229f54:
    if (ctx->pc == 0x229F54u) {
        ctx->pc = 0x229F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F50u;
        // 0x229f54: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F58u;
        goto label_229f58;
    }
    ctx->pc = 0x229F50u;
    SET_GPR_U32(ctx, 31, 0x229F58u);
    ctx->pc = 0x229F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F50u;
    // 0x229f54: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x229F50u, 0x229F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F58u;
label_229f58:
    // 0x229f58: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x229f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_229f5c:
    // 0x229f5c: 0x8c56020c  lw          $s6, 0x20C($v0)
    ctx->pc = 0x229f5cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_229f60:
    // 0x229f60: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x229f60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_229f64:
    // 0x229f64: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
label_229f68:
    if (ctx->pc == 0x229F68u) {
        ctx->pc = 0x229F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F64u;
        // 0x229f68: 0x8ed4002c  lw          $s4, 0x2C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F6Cu;
        goto label_229f6c;
    }
    ctx->pc = 0x229F64u;
    {
        const bool branch_taken_0x229f64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x229F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F64u;
        // 0x229f68: 0x8ed4002c  lw          $s4, 0x2C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f64) {
            ctx->pc = 0x229FE0u;
            goto label_229fe0;
        }
    }
    ctx->pc = 0x229F6Cu;
label_229f6c:
    // 0x229f6c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x229f6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229f70:
    // 0x229f70: 0x24130228  addiu       $s3, $zero, 0x228
    ctx->pc = 0x229f70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_229f74:
    // 0x229f74: 0x0  nop
    ctx->pc = 0x229f74u;
    // NOP
label_229f78:
    // 0x229f78: 0x8fc4489c  lw          $a0, 0x489C($fp)
    ctx->pc = 0x229f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_229f7c:
    // 0x229f7c: 0xc0e409a  jal         func_390268
label_229f80:
    if (ctx->pc == 0x229F80u) {
        ctx->pc = 0x229F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F7Cu;
        // 0x229f80: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F84u;
        goto label_229f84;
    }
    ctx->pc = 0x229F7Cu;
    SET_GPR_U32(ctx, 31, 0x229F84u);
    ctx->pc = 0x229F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F7Cu;
    // 0x229f80: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x229F7Cu, 0x229F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F84u;
label_229f84:
    // 0x229f84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229f88:
    // 0x229f88: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_229f8c:
    if (ctx->pc == 0x229F8Cu) {
        ctx->pc = 0x229F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F88u;
        // 0x229f8c: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F90u;
        goto label_229f90;
    }
    ctx->pc = 0x229F88u;
    {
        const bool branch_taken_0x229f88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x229F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F88u;
        // 0x229f8c: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f88) {
            ctx->pc = 0x229FCCu;
            goto label_229fcc;
        }
    }
    ctx->pc = 0x229F90u;
label_229f90:
    // 0x229f90: 0x1211000e  beq         $s0, $s1, . + 4 + (0xE << 2)
label_229f94:
    if (ctx->pc == 0x229F94u) {
        ctx->pc = 0x229F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F90u;
        // 0x229f94: 0x8fc2489c  lw          $v0, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F98u;
        goto label_229f98;
    }
    ctx->pc = 0x229F90u;
    {
        const bool branch_taken_0x229f90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x229F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F90u;
        // 0x229f94: 0x8fc2489c  lw          $v0, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f90) {
            ctx->pc = 0x229FCCu;
            goto label_229fcc;
        }
    }
    ctx->pc = 0x229F98u;
label_229f98:
    // 0x229f98: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x229f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
label_229f9c:
    // 0x229f9c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_229fa0:
    if (ctx->pc == 0x229FA0u) {
        ctx->pc = 0x229FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F9Cu;
        // 0x229fa0: 0x920203ac  lbu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229FA4u;
        goto label_229fa4;
    }
    ctx->pc = 0x229F9Cu;
    {
        const bool branch_taken_0x229f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x229f9c) {
            ctx->pc = 0x229FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229F9Cu;
            // 0x229fa0: 0x920203ac  lbu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229FC0u;
            goto label_229fc0;
        }
    }
    ctx->pc = 0x229FA4u;
label_229fa4:
    // 0x229fa4: 0xc087502  jal         func_21D408
label_229fa8:
    if (ctx->pc == 0x229FA8u) {
        ctx->pc = 0x229FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FA4u;
        // 0x229fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229FACu;
        goto label_229fac;
    }
    ctx->pc = 0x229FA4u;
    SET_GPR_U32(ctx, 31, 0x229FACu);
    ctx->pc = 0x229FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FA4u;
    // 0x229fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x229FA4u, 0x229FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FACu;
label_229fac:
    // 0x229fac: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x229facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_229fb0:
    // 0x229fb0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x229fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_229fb4:
    // 0x229fb4: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
label_229fb8:
    if (ctx->pc == 0x229FB8u) {
        ctx->pc = 0x229FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FB4u;
        // 0x229fb8: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229FBCu;
        goto label_229fbc;
    }
    ctx->pc = 0x229FB4u;
    {
        const bool branch_taken_0x229fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x229FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FB4u;
        // 0x229fb8: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229fb4) {
            ctx->pc = 0x229FCCu;
            goto label_229fcc;
        }
    }
    ctx->pc = 0x229FBCu;
label_229fbc:
    // 0x229fbc: 0x920203ac  lbu         $v0, 0x3AC($s0)
    ctx->pc = 0x229fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 940)));
label_229fc0:
    // 0x229fc0: 0x50570007  beql        $v0, $s7, . + 4 + (0x7 << 2)
label_229fc4:
    if (ctx->pc == 0x229FC4u) {
        ctx->pc = 0x229FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FC0u;
        // 0x229fc4: 0xae2003ac  sw          $zero, 0x3AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 940), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229FC8u;
        goto label_229fc8;
    }
    ctx->pc = 0x229FC0u;
    {
        const bool branch_taken_0x229fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x229fc0) {
            ctx->pc = 0x229FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229FC0u;
            // 0x229fc4: 0xae2003ac  sw          $zero, 0x3AC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 940), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229FE0u;
            goto label_229fe0;
        }
    }
    ctx->pc = 0x229FC8u;
label_229fc8:
    // 0x229fc8: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x229fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_229fcc:
    // 0x229fcc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x229fccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_229fd0:
    // 0x229fd0: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x229fd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_229fd4:
    // 0x229fd4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x229fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_229fd8:
    // 0x229fd8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_229fdc:
    if (ctx->pc == 0x229FDCu) {
        ctx->pc = 0x229FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FD8u;
        // 0x229fdc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229FE0u;
        goto label_229fe0;
    }
    ctx->pc = 0x229FD8u;
    {
        const bool branch_taken_0x229fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FD8u;
        // 0x229fdc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229fd8) {
            ctx->pc = 0x229F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229f78;
        }
    }
    ctx->pc = 0x229FE0u;
label_229fe0:
    // 0x229fe0: 0x922303ac  lbu         $v1, 0x3AC($s1)
    ctx->pc = 0x229fe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 940)));
label_229fe4:
    // 0x229fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229fe8:
    // 0x229fe8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_229fec:
    if (ctx->pc == 0x229FECu) {
        ctx->pc = 0x229FF0u;
        goto label_229ff0;
    }
    ctx->pc = 0x229FE8u;
    {
        const bool branch_taken_0x229fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x229fe8) {
            ctx->pc = 0x22A008u;
            goto label_22a008;
        }
    }
    ctx->pc = 0x229FF0u;
label_229ff0:
    // 0x229ff0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x229ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_229ff4:
    // 0x229ff4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x229ff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_229ff8:
    // 0x229ff8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x229ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_229ffc:
    // 0x229ffc: 0x40f809  jalr        $v0
label_22a000:
    if (ctx->pc == 0x22A000u) {
        ctx->pc = 0x22A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FFCu;
        // 0x22a000: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A004u;
        goto label_22a004;
    }
    ctx->pc = 0x229FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A004u);
        ctx->pc = 0x22A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FFCu;
        // 0x22a000: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229FFCu, 0x22A004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A004u;
label_22a004:
    // 0x22a004: 0xaec20044  sw          $v0, 0x44($s6)
    ctx->pc = 0x22a004u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 68), GPR_U32(ctx, 2));
label_22a008:
    // 0x22a008: 0xc088ad6  jal         func_222B58
label_22a00c:
    if (ctx->pc == 0x22A00Cu) {
        ctx->pc = 0x22A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A008u;
        // 0x22a00c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A010u;
        goto label_22a010;
    }
    ctx->pc = 0x22A008u;
    SET_GPR_U32(ctx, 31, 0x22A010u);
    ctx->pc = 0x22A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A008u;
    // 0x22a00c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B58u, 0x22A008u, 0x22A010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A010u;
label_22a010:
    // 0x22a010: 0x90420005  lbu         $v0, 0x5($v0)
    ctx->pc = 0x22a010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_22a014:
    // 0x22a014: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_22a018:
    if (ctx->pc == 0x22A018u) {
        ctx->pc = 0x22A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A014u;
        // 0x22a018: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A01Cu;
        goto label_22a01c;
    }
    ctx->pc = 0x22A014u;
    {
        const bool branch_taken_0x22a014 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A014u;
        // 0x22a018: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a014) {
            ctx->pc = 0x22A030u;
            goto label_22a030;
        }
    }
    ctx->pc = 0x22A01Cu;
label_22a01c:
    // 0x22a01c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a020:
    // 0x22a020: 0x0  nop
    ctx->pc = 0x22a020u;
    // NOP
label_22a024:
    // 0x22a024: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22a024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22a028:
    // 0x22a028: 0x10000008  b           . + 4 + (0x8 << 2)
label_22a02c:
    if (ctx->pc == 0x22A02Cu) {
        ctx->pc = 0x22A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A028u;
        // 0x22a02c: 0x8e2500d4  lw          $a1, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A030u;
        goto label_22a030;
    }
    ctx->pc = 0x22A028u;
    {
        const bool branch_taken_0x22a028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A028u;
        // 0x22a02c: 0x8e2500d4  lw          $a1, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a028) {
            ctx->pc = 0x22A04Cu;
            goto label_22a04c;
        }
    }
    ctx->pc = 0x22A030u;
label_22a030:
    // 0x22a030: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22a030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22a034:
    // 0x22a034: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22a034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22a038:
    // 0x22a038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a03c:
    // 0x22a03c: 0x0  nop
    ctx->pc = 0x22a03cu;
    // NOP
label_22a040:
    // 0x22a040: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22a040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22a044:
    // 0x22a044: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x22a044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_22a048:
    // 0x22a048: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x22a048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_22a04c:
    // 0x22a04c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a050:
    // 0x22a050: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x22a050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_22a054:
    // 0x22a054: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x22a054u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_22a058:
    // 0x22a058: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22a058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22a05c:
    // 0x22a05c: 0x84a20144  lh          $v0, 0x144($a1)
    ctx->pc = 0x22a05cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 324)));
label_22a060:
    // 0x22a060: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x22a060u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22a064:
    // 0x22a064: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22a064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_22a068:
    // 0x22a068: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22a068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22a06c:
    // 0x22a06c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a070:
    // 0x22a070: 0x0  nop
    ctx->pc = 0x22a070u;
    // NOP
label_22a074:
    // 0x22a074: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22a074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22a078:
    // 0x22a078: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22a078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22a07c:
    // 0x22a07c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x22a07cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_22a080:
    // 0x22a080: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22a080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_22a084:
    // 0x22a084: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x22a084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_22a088:
    // 0x22a088: 0xa4a20144  sh          $v0, 0x144($a1)
    ctx->pc = 0x22a088u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 324), (uint16_t)GPR_U32(ctx, 2));
label_22a08c:
    // 0x22a08c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x22a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_22a090:
    // 0x22a090: 0x84620146  lh          $v0, 0x146($v1)
    ctx->pc = 0x22a090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 326)));
label_22a094:
    // 0x22a094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a098:
    // 0x22a098: 0x0  nop
    ctx->pc = 0x22a098u;
    // NOP
label_22a09c:
    // 0x22a09c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22a09cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22a0a0:
    // 0x22a0a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22a0a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22a0a4:
    // 0x22a0a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x22a0a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_22a0a8:
    // 0x22a0a8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22a0a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_22a0ac:
    // 0x22a0ac: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x22a0acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_22a0b0:
    // 0x22a0b0: 0xc088c1a  jal         func_223068
label_22a0b4:
    if (ctx->pc == 0x22A0B4u) {
        ctx->pc = 0x22A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0B0u;
        // 0x22a0b4: 0xa4620146  sh          $v0, 0x146($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 326), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A0B8u;
        goto label_22a0b8;
    }
    ctx->pc = 0x22A0B0u;
    SET_GPR_U32(ctx, 31, 0x22A0B8u);
    ctx->pc = 0x22A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A0B0u;
    // 0x22a0b4: 0xa4620146  sh          $v0, 0x146($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 326), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x22A0B0u, 0x22A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0B8u;
label_22a0b8:
    // 0x22a0b8: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x22a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_22a0bc:
    // 0x22a0bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a0c0:
    // 0x22a0c0: 0xc088c62  jal         func_223188
label_22a0c4:
    if (ctx->pc == 0x22A0C4u) {
        ctx->pc = 0x22A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0C0u;
        // 0x22a0c4: 0xa4620148  sh          $v0, 0x148($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A0C8u;
        goto label_22a0c8;
    }
    ctx->pc = 0x22A0C0u;
    SET_GPR_U32(ctx, 31, 0x22A0C8u);
    ctx->pc = 0x22A0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A0C0u;
    // 0x22a0c4: 0xa4620148  sh          $v0, 0x148($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 328), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223188u, 0x22A0C0u, 0x22A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0C8u;
label_22a0c8:
    // 0x22a0c8: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x22a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_22a0cc:
    // 0x22a0cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a0d0:
    // 0x22a0d0: 0xc088ad6  jal         func_222B58
label_22a0d4:
    if (ctx->pc == 0x22A0D4u) {
        ctx->pc = 0x22A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0D0u;
        // 0x22a0d4: 0xa462014a  sh          $v0, 0x14A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 330), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A0D8u;
        goto label_22a0d8;
    }
    ctx->pc = 0x22A0D0u;
    SET_GPR_U32(ctx, 31, 0x22A0D8u);
    ctx->pc = 0x22A0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A0D0u;
    // 0x22a0d4: 0xa462014a  sh          $v0, 0x14A($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 330), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B58u, 0x22A0D0u, 0x22A0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0D8u;
label_22a0d8:
    // 0x22a0d8: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x22a0d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
label_22a0dc:
    // 0x22a0dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_22a0e0:
    if (ctx->pc == 0x22A0E0u) {
        ctx->pc = 0x22A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0DCu;
        // 0x22a0e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A0E4u;
        goto label_22a0e4;
    }
    ctx->pc = 0x22A0DCu;
    {
        const bool branch_taken_0x22a0dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0DCu;
        // 0x22a0e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0dc) {
            ctx->pc = 0x22A0F8u;
            goto label_22a0f8;
        }
    }
    ctx->pc = 0x22A0E4u;
label_22a0e4:
    // 0x22a0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a0e8:
    // 0x22a0e8: 0x0  nop
    ctx->pc = 0x22a0e8u;
    // NOP
label_22a0ec:
    // 0x22a0ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22a0ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22a0f0:
    // 0x22a0f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_22a0f4:
    if (ctx->pc == 0x22A0F4u) {
        ctx->pc = 0x22A0F8u;
        goto label_22a0f8;
    }
    ctx->pc = 0x22A0F0u;
    {
        const bool branch_taken_0x22a0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a0f0) {
            ctx->pc = 0x22A110u;
            goto label_22a110;
        }
    }
    ctx->pc = 0x22A0F8u;
label_22a0f8:
    // 0x22a0f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22a0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22a0fc:
    // 0x22a0fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22a0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22a100:
    // 0x22a100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a104:
    // 0x22a104: 0x0  nop
    ctx->pc = 0x22a104u;
    // NOP
label_22a108:
    // 0x22a108: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22a108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22a10c:
    // 0x22a10c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x22a10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_22a110:
    // 0x22a110: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x22a110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_22a114:
    // 0x22a114: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x22a114u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_22a118:
    // 0x22a118: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22a118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22a11c:
    // 0x22a11c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x22a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_22a120:
    // 0x22a120: 0x24500840  addiu       $s0, $v0, 0x840
    ctx->pc = 0x22a120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_22a124:
    // 0x22a124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a128:
    // 0x22a128: 0xc08a6e4  jal         func_229B90
label_22a12c:
    if (ctx->pc == 0x22A12Cu) {
        ctx->pc = 0x22A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A128u;
        // 0x22a12c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A130u;
        goto label_22a130;
    }
    ctx->pc = 0x22A128u;
    SET_GPR_U32(ctx, 31, 0x22A130u);
    ctx->pc = 0x22A12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A128u;
    // 0x22a12c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x229B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229B90u, 0x22A128u, 0x22A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A130u;
label_22a130:
    // 0x22a130: 0xc088b26  jal         func_222C98
label_22a134:
    if (ctx->pc == 0x22A134u) {
        ctx->pc = 0x22A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A130u;
        // 0x22a134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A138u;
        goto label_22a138;
    }
    ctx->pc = 0x22A130u;
    SET_GPR_U32(ctx, 31, 0x22A138u);
    ctx->pc = 0x22A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A130u;
    // 0x22a134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222C98u, 0x22A130u, 0x22A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A138u;
label_22a138:
    // 0x22a138: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x22a138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22a13c:
    // 0x22a13c: 0xc089988  jal         func_226620
label_22a140:
    if (ctx->pc == 0x22A140u) {
        ctx->pc = 0x22A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A13Cu;
        // 0x22a140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A144u;
        goto label_22a144;
    }
    ctx->pc = 0x22A13Cu;
    SET_GPR_U32(ctx, 31, 0x22A144u);
    ctx->pc = 0x22A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A13Cu;
    // 0x22a140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22A13Cu, 0x22A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A144u;
label_22a144:
    // 0x22a144: 0xc088ac6  jal         func_222B18
label_22a148:
    if (ctx->pc == 0x22A148u) {
        ctx->pc = 0x22A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A144u;
        // 0x22a148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A14Cu;
        goto label_22a14c;
    }
    ctx->pc = 0x22A144u;
    SET_GPR_U32(ctx, 31, 0x22A14Cu);
    ctx->pc = 0x22A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A144u;
    // 0x22a148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22A144u, 0x22A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A14Cu;
label_22a14c:
    // 0x22a14c: 0xc10614c  jal         func_418530
label_22a150:
    if (ctx->pc == 0x22A150u) {
        ctx->pc = 0x22A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A14Cu;
        // 0x22a150: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A154u;
        goto label_22a154;
    }
    ctx->pc = 0x22A14Cu;
    SET_GPR_U32(ctx, 31, 0x22A154u);
    ctx->pc = 0x22A150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A14Cu;
    // 0x22a150: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418530u, 0x22A14Cu, 0x22A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A154u;
label_22a154:
    // 0x22a154: 0xc0933bc  jal         func_24CEF0
label_22a158:
    if (ctx->pc == 0x22A158u) {
        ctx->pc = 0x22A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A154u;
        // 0x22a158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A15Cu;
        goto label_22a15c;
    }
    ctx->pc = 0x22A154u;
    SET_GPR_U32(ctx, 31, 0x22A15Cu);
    ctx->pc = 0x22A158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A154u;
    // 0x22a158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CEF0u, 0x22A154u, 0x22A15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A15Cu;
label_22a15c:
    // 0x22a15c: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x22a15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_22a160:
    // 0x22a160: 0xc06c8f4  jal         func_1B23D0
label_22a164:
    if (ctx->pc == 0x22A164u) {
        ctx->pc = 0x22A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A160u;
        // 0x22a164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A168u;
        goto label_22a168;
    }
    ctx->pc = 0x22A160u;
    SET_GPR_U32(ctx, 31, 0x22A168u);
    ctx->pc = 0x22A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A160u;
    // 0x22a164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B23D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B23D0u, 0x22A160u, 0x22A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A168u;
label_22a168:
    // 0x22a168: 0xc089f76  jal         func_227DD8
label_22a16c:
    if (ctx->pc == 0x22A16Cu) {
        ctx->pc = 0x22A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A168u;
        // 0x22a16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A170u;
        goto label_22a170;
    }
    ctx->pc = 0x22A168u;
    SET_GPR_U32(ctx, 31, 0x22A170u);
    ctx->pc = 0x22A16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A168u;
    // 0x22a16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x22A168u, 0x22A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A170u;
label_22a170:
    // 0x22a170: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_22a174:
    if (ctx->pc == 0x22A174u) {
        ctx->pc = 0x22A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A170u;
        // 0x22a174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A178u;
        goto label_22a178;
    }
    ctx->pc = 0x22A170u;
    {
        const bool branch_taken_0x22a170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A170u;
        // 0x22a174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a170) {
            ctx->pc = 0x22A18Cu;
            goto label_22a18c;
        }
    }
    ctx->pc = 0x22A178u;
label_22a178:
    // 0x22a178: 0xc088edc  jal         func_223B70
label_22a17c:
    if (ctx->pc == 0x22A17Cu) {
        ctx->pc = 0x22A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A178u;
        // 0x22a17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A180u;
        goto label_22a180;
    }
    ctx->pc = 0x22A178u;
    SET_GPR_U32(ctx, 31, 0x22A180u);
    ctx->pc = 0x22A17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A178u;
    // 0x22a17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x22A178u, 0x22A180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A180u;
label_22a180:
    // 0x22a180: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_22a184:
    if (ctx->pc == 0x22A184u) {
        ctx->pc = 0x22A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A180u;
        // 0x22a184: 0x8fc4489c  lw          $a0, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A188u;
        goto label_22a188;
    }
    ctx->pc = 0x22A180u;
    {
        const bool branch_taken_0x22a180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a180) {
            ctx->pc = 0x22A184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A180u;
            // 0x22a184: 0x8fc4489c  lw          $a0, 0x489C($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A198u;
            goto label_22a198;
        }
    }
    ctx->pc = 0x22A188u;
label_22a188:
    // 0x22a188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a18c:
    // 0x22a18c: 0xc06ce68  jal         func_1B39A0
label_22a190:
    if (ctx->pc == 0x22A190u) {
        ctx->pc = 0x22A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A18Cu;
        // 0x22a190: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A194u;
        goto label_22a194;
    }
    ctx->pc = 0x22A18Cu;
    SET_GPR_U32(ctx, 31, 0x22A194u);
    ctx->pc = 0x22A190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A18Cu;
    // 0x22a190: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B39A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B39A0u, 0x22A18Cu, 0x22A194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A194u;
label_22a194:
    // 0x22a194: 0x8fc4489c  lw          $a0, 0x489C($fp)
    ctx->pc = 0x22a194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_22a198:
    // 0x22a198: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22a198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a19c:
    // 0x22a19c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22a19cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a1a0:
    // 0x22a1a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22a1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a1a4:
    // 0x22a1a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22a1a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a1a8:
    // 0x22a1a8: 0xc107138  jal         func_41C4E0
label_22a1ac:
    if (ctx->pc == 0x22A1ACu) {
        ctx->pc = 0x22A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1A8u;
        // 0x22a1ac: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A1B0u;
        goto label_22a1b0;
    }
    ctx->pc = 0x22A1A8u;
    SET_GPR_U32(ctx, 31, 0x22A1B0u);
    ctx->pc = 0x22A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A1A8u;
    // 0x22a1ac: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4E0u, 0x22A1A8u, 0x22A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A1B0u;
label_22a1b0:
    // 0x22a1b0: 0x8ea4020c  lw          $a0, 0x20C($s5)
    ctx->pc = 0x22a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 524)));
label_22a1b4:
    // 0x22a1b4: 0xc0599c2  jal         func_166708
label_22a1b8:
    if (ctx->pc == 0x22A1B8u) {
        ctx->pc = 0x22A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1B4u;
        // 0x22a1b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A1BCu;
        goto label_22a1bc;
    }
    ctx->pc = 0x22A1B4u;
    SET_GPR_U32(ctx, 31, 0x22A1BCu);
    ctx->pc = 0x22A1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A1B4u;
    // 0x22a1b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166708u, 0x22A1B4u, 0x22A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A1BCu;
label_22a1bc:
    // 0x22a1bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a1c0:
    // 0x22a1c0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22a1c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22a1c4:
    // 0x22a1c4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22a1c8:
    // 0x22a1c8: 0x40f809  jalr        $v0
label_22a1cc:
    if (ctx->pc == 0x22A1CCu) {
        ctx->pc = 0x22A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1C8u;
        // 0x22a1cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A1D0u;
        goto label_22a1d0;
    }
    ctx->pc = 0x22A1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A1D0u);
        ctx->pc = 0x22A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1C8u;
        // 0x22a1cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A1C8u, 0x22A1D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A1D0u;
label_22a1d0:
    // 0x22a1d0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_22a1d4:
    if (ctx->pc == 0x22A1D4u) {
        ctx->pc = 0x22A1D8u;
        goto label_22a1d8;
    }
    ctx->pc = 0x22A1D0u;
    {
        const bool branch_taken_0x22a1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a1d0) {
            ctx->pc = 0x22A238u;
            goto label_22a238;
        }
    }
    ctx->pc = 0x22A1D8u;
label_22a1d8:
    // 0x22a1d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a1dc:
    // 0x22a1dc: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22a1dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22a1e0:
    // 0x22a1e0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22a1e4:
    // 0x22a1e4: 0x40f809  jalr        $v0
label_22a1e8:
    if (ctx->pc == 0x22A1E8u) {
        ctx->pc = 0x22A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1E4u;
        // 0x22a1e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A1ECu;
        goto label_22a1ec;
    }
    ctx->pc = 0x22A1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A1ECu);
        ctx->pc = 0x22A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1E4u;
        // 0x22a1e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A1E4u, 0x22A1ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A1ECu;
label_22a1ec:
    // 0x22a1ec: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22a1f0:
    // 0x22a1f0: 0x3c013fb6  lui         $at, 0x3FB6
    ctx->pc = 0x22a1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16310 << 16));
label_22a1f4:
    // 0x22a1f4: 0x3421db6e  ori         $at, $at, 0xDB6E
    ctx->pc = 0x22a1f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56174);
label_22a1f8:
    // 0x22a1f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22a1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22a1fc:
    // 0x22a1fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22a1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22a200:
    // 0x22a200: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a204:
    // 0x22a204: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x22a204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_22a208:
    // 0x22a208: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x22a208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_22a20c:
    // 0x22a20c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x22a20cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_22a210:
    // 0x22a210: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x22a210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_22a214:
    // 0x22a214: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x22a214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22a218:
    // 0x22a218: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x22a218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_22a21c:
    // 0x22a21c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a220:
    // 0x22a220: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22a220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22a224:
    // 0x22a224: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22a228:
    // 0x22a228: 0x40f809  jalr        $v0
label_22a22c:
    if (ctx->pc == 0x22A22Cu) {
        ctx->pc = 0x22A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A228u;
        // 0x22a22c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A230u;
        goto label_22a230;
    }
    ctx->pc = 0x22A228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A230u);
        ctx->pc = 0x22A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A228u;
        // 0x22a22c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A228u, 0x22A230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A230u;
label_22a230:
    // 0x22a230: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x22a230u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22a234:
    // 0x22a234: 0x7c430060  sq          $v1, 0x60($v0)
    ctx->pc = 0x22a234u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), GPR_VEC(ctx, 3));
label_22a238:
    // 0x22a238: 0xc095018  jal         func_254060
label_22a23c:
    if (ctx->pc == 0x22A23Cu) {
        ctx->pc = 0x22A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A238u;
        // 0x22a23c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A240u;
        goto label_22a240;
    }
    ctx->pc = 0x22A238u;
    SET_GPR_U32(ctx, 31, 0x22A240u);
    ctx->pc = 0x22A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A238u;
    // 0x22a23c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x22A238u, 0x22A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A240u;
label_22a240:
    // 0x22a240: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22a240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a244:
    // 0x22a244: 0xc094f9a  jal         func_253E68
label_22a248:
    if (ctx->pc == 0x22A248u) {
        ctx->pc = 0x22A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A244u;
        // 0x22a248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A24Cu;
        goto label_22a24c;
    }
    ctx->pc = 0x22A244u;
    SET_GPR_U32(ctx, 31, 0x22A24Cu);
    ctx->pc = 0x22A248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A244u;
    // 0x22a248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E68u, 0x22A244u, 0x22A24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A24Cu;
label_22a24c:
    // 0x22a24c: 0xde2300e0  ld          $v1, 0xE0($s1)
    ctx->pc = 0x22a24cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_22a250:
    // 0x22a250: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22a250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22a254:
    // 0x22a254: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x22a254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_22a258:
    // 0x22a258: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x22a258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22a25c:
    // 0x22a25c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22a25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22a260:
    // 0x22a260: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x22a260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
label_22a264:
    // 0x22a264: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22a264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22a268:
    // 0x22a268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22a268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a26c:
    // 0x22a26c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x22a26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_22a270:
    // 0x22a270: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x22a270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_22a274:
    // 0x22a274: 0xfe2300e0  sd          $v1, 0xE0($s1)
    ctx->pc = 0x22a274u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 3));
label_22a278:
    // 0x22a278: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x22a278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_22a27c:
    // 0x22a27c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x22a27cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_22a280:
    // 0x22a280: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x22a280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_22a284:
    // 0x22a284: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x22a284u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_22a288:
    // 0x22a288: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x22a288u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22a28c:
    // 0x22a28c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22a28cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22a290:
    // 0x22a290: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x22a290u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22a294:
    // 0x22a294: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x22a294u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22a298:
    // 0x22a298: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x22a298u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22a29c:
    // 0x22a29c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22a29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22a2a0:
    // 0x22a2a0: 0x3e00008  jr          $ra
label_22a2a4:
    if (ctx->pc == 0x22A2A4u) {
        ctx->pc = 0x22A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2A0u;
        // 0x22a2a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A2A8u;
        goto label_fallthrough_0x22a2a0;
    }
    ctx->pc = 0x22A2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2A0u;
        // 0x22a2a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22a2a0:
    ctx->pc = 0x22A2A8u;
}
