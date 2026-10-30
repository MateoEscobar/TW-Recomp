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

// Function: sub_00487BD0
// Address: 0x487bd0 - 0x488150
void sub_00487BD0_0x487bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487BD0_0x487bd0");
#endif

    switch (ctx->pc) {
        case 0x487bd0u: goto label_487bd0;
        case 0x487bd4u: goto label_487bd4;
        case 0x487bd8u: goto label_487bd8;
        case 0x487bdcu: goto label_487bdc;
        case 0x487be0u: goto label_487be0;
        case 0x487be4u: goto label_487be4;
        case 0x487be8u: goto label_487be8;
        case 0x487becu: goto label_487bec;
        case 0x487bf0u: goto label_487bf0;
        case 0x487bf4u: goto label_487bf4;
        case 0x487bf8u: goto label_487bf8;
        case 0x487bfcu: goto label_487bfc;
        case 0x487c00u: goto label_487c00;
        case 0x487c04u: goto label_487c04;
        case 0x487c08u: goto label_487c08;
        case 0x487c0cu: goto label_487c0c;
        case 0x487c10u: goto label_487c10;
        case 0x487c14u: goto label_487c14;
        case 0x487c18u: goto label_487c18;
        case 0x487c1cu: goto label_487c1c;
        case 0x487c20u: goto label_487c20;
        case 0x487c24u: goto label_487c24;
        case 0x487c28u: goto label_487c28;
        case 0x487c2cu: goto label_487c2c;
        case 0x487c30u: goto label_487c30;
        case 0x487c34u: goto label_487c34;
        case 0x487c38u: goto label_487c38;
        case 0x487c3cu: goto label_487c3c;
        case 0x487c40u: goto label_487c40;
        case 0x487c44u: goto label_487c44;
        case 0x487c48u: goto label_487c48;
        case 0x487c4cu: goto label_487c4c;
        case 0x487c50u: goto label_487c50;
        case 0x487c54u: goto label_487c54;
        case 0x487c58u: goto label_487c58;
        case 0x487c5cu: goto label_487c5c;
        case 0x487c60u: goto label_487c60;
        case 0x487c64u: goto label_487c64;
        case 0x487c68u: goto label_487c68;
        case 0x487c6cu: goto label_487c6c;
        case 0x487c70u: goto label_487c70;
        case 0x487c74u: goto label_487c74;
        case 0x487c78u: goto label_487c78;
        case 0x487c7cu: goto label_487c7c;
        case 0x487c80u: goto label_487c80;
        case 0x487c84u: goto label_487c84;
        case 0x487c88u: goto label_487c88;
        case 0x487c8cu: goto label_487c8c;
        case 0x487c90u: goto label_487c90;
        case 0x487c94u: goto label_487c94;
        case 0x487c98u: goto label_487c98;
        case 0x487c9cu: goto label_487c9c;
        case 0x487ca0u: goto label_487ca0;
        case 0x487ca4u: goto label_487ca4;
        case 0x487ca8u: goto label_487ca8;
        case 0x487cacu: goto label_487cac;
        case 0x487cb0u: goto label_487cb0;
        case 0x487cb4u: goto label_487cb4;
        case 0x487cb8u: goto label_487cb8;
        case 0x487cbcu: goto label_487cbc;
        case 0x487cc0u: goto label_487cc0;
        case 0x487cc4u: goto label_487cc4;
        case 0x487cc8u: goto label_487cc8;
        case 0x487cccu: goto label_487ccc;
        case 0x487cd0u: goto label_487cd0;
        case 0x487cd4u: goto label_487cd4;
        case 0x487cd8u: goto label_487cd8;
        case 0x487cdcu: goto label_487cdc;
        case 0x487ce0u: goto label_487ce0;
        case 0x487ce4u: goto label_487ce4;
        case 0x487ce8u: goto label_487ce8;
        case 0x487cecu: goto label_487cec;
        case 0x487cf0u: goto label_487cf0;
        case 0x487cf4u: goto label_487cf4;
        case 0x487cf8u: goto label_487cf8;
        case 0x487cfcu: goto label_487cfc;
        case 0x487d00u: goto label_487d00;
        case 0x487d04u: goto label_487d04;
        case 0x487d08u: goto label_487d08;
        case 0x487d0cu: goto label_487d0c;
        case 0x487d10u: goto label_487d10;
        case 0x487d14u: goto label_487d14;
        case 0x487d18u: goto label_487d18;
        case 0x487d1cu: goto label_487d1c;
        case 0x487d20u: goto label_487d20;
        case 0x487d24u: goto label_487d24;
        case 0x487d28u: goto label_487d28;
        case 0x487d2cu: goto label_487d2c;
        case 0x487d30u: goto label_487d30;
        case 0x487d34u: goto label_487d34;
        case 0x487d38u: goto label_487d38;
        case 0x487d3cu: goto label_487d3c;
        case 0x487d40u: goto label_487d40;
        case 0x487d44u: goto label_487d44;
        case 0x487d48u: goto label_487d48;
        case 0x487d4cu: goto label_487d4c;
        case 0x487d50u: goto label_487d50;
        case 0x487d54u: goto label_487d54;
        case 0x487d58u: goto label_487d58;
        case 0x487d5cu: goto label_487d5c;
        case 0x487d60u: goto label_487d60;
        case 0x487d64u: goto label_487d64;
        case 0x487d68u: goto label_487d68;
        case 0x487d6cu: goto label_487d6c;
        case 0x487d70u: goto label_487d70;
        case 0x487d74u: goto label_487d74;
        case 0x487d78u: goto label_487d78;
        case 0x487d7cu: goto label_487d7c;
        case 0x487d80u: goto label_487d80;
        case 0x487d84u: goto label_487d84;
        case 0x487d88u: goto label_487d88;
        case 0x487d8cu: goto label_487d8c;
        case 0x487d90u: goto label_487d90;
        case 0x487d94u: goto label_487d94;
        case 0x487d98u: goto label_487d98;
        case 0x487d9cu: goto label_487d9c;
        case 0x487da0u: goto label_487da0;
        case 0x487da4u: goto label_487da4;
        case 0x487da8u: goto label_487da8;
        case 0x487dacu: goto label_487dac;
        case 0x487db0u: goto label_487db0;
        case 0x487db4u: goto label_487db4;
        case 0x487db8u: goto label_487db8;
        case 0x487dbcu: goto label_487dbc;
        case 0x487dc0u: goto label_487dc0;
        case 0x487dc4u: goto label_487dc4;
        case 0x487dc8u: goto label_487dc8;
        case 0x487dccu: goto label_487dcc;
        case 0x487dd0u: goto label_487dd0;
        case 0x487dd4u: goto label_487dd4;
        case 0x487dd8u: goto label_487dd8;
        case 0x487ddcu: goto label_487ddc;
        case 0x487de0u: goto label_487de0;
        case 0x487de4u: goto label_487de4;
        case 0x487de8u: goto label_487de8;
        case 0x487decu: goto label_487dec;
        case 0x487df0u: goto label_487df0;
        case 0x487df4u: goto label_487df4;
        case 0x487df8u: goto label_487df8;
        case 0x487dfcu: goto label_487dfc;
        case 0x487e00u: goto label_487e00;
        case 0x487e04u: goto label_487e04;
        case 0x487e08u: goto label_487e08;
        case 0x487e0cu: goto label_487e0c;
        case 0x487e10u: goto label_487e10;
        case 0x487e14u: goto label_487e14;
        case 0x487e18u: goto label_487e18;
        case 0x487e1cu: goto label_487e1c;
        case 0x487e20u: goto label_487e20;
        case 0x487e24u: goto label_487e24;
        case 0x487e28u: goto label_487e28;
        case 0x487e2cu: goto label_487e2c;
        case 0x487e30u: goto label_487e30;
        case 0x487e34u: goto label_487e34;
        case 0x487e38u: goto label_487e38;
        case 0x487e3cu: goto label_487e3c;
        case 0x487e40u: goto label_487e40;
        case 0x487e44u: goto label_487e44;
        case 0x487e48u: goto label_487e48;
        case 0x487e4cu: goto label_487e4c;
        case 0x487e50u: goto label_487e50;
        case 0x487e54u: goto label_487e54;
        case 0x487e58u: goto label_487e58;
        case 0x487e5cu: goto label_487e5c;
        case 0x487e60u: goto label_487e60;
        case 0x487e64u: goto label_487e64;
        case 0x487e68u: goto label_487e68;
        case 0x487e6cu: goto label_487e6c;
        case 0x487e70u: goto label_487e70;
        case 0x487e74u: goto label_487e74;
        case 0x487e78u: goto label_487e78;
        case 0x487e7cu: goto label_487e7c;
        case 0x487e80u: goto label_487e80;
        case 0x487e84u: goto label_487e84;
        case 0x487e88u: goto label_487e88;
        case 0x487e8cu: goto label_487e8c;
        case 0x487e90u: goto label_487e90;
        case 0x487e94u: goto label_487e94;
        case 0x487e98u: goto label_487e98;
        case 0x487e9cu: goto label_487e9c;
        case 0x487ea0u: goto label_487ea0;
        case 0x487ea4u: goto label_487ea4;
        case 0x487ea8u: goto label_487ea8;
        case 0x487eacu: goto label_487eac;
        case 0x487eb0u: goto label_487eb0;
        case 0x487eb4u: goto label_487eb4;
        case 0x487eb8u: goto label_487eb8;
        case 0x487ebcu: goto label_487ebc;
        case 0x487ec0u: goto label_487ec0;
        case 0x487ec4u: goto label_487ec4;
        case 0x487ec8u: goto label_487ec8;
        case 0x487eccu: goto label_487ecc;
        case 0x487ed0u: goto label_487ed0;
        case 0x487ed4u: goto label_487ed4;
        case 0x487ed8u: goto label_487ed8;
        case 0x487edcu: goto label_487edc;
        case 0x487ee0u: goto label_487ee0;
        case 0x487ee4u: goto label_487ee4;
        case 0x487ee8u: goto label_487ee8;
        case 0x487eecu: goto label_487eec;
        case 0x487ef0u: goto label_487ef0;
        case 0x487ef4u: goto label_487ef4;
        case 0x487ef8u: goto label_487ef8;
        case 0x487efcu: goto label_487efc;
        case 0x487f00u: goto label_487f00;
        case 0x487f04u: goto label_487f04;
        case 0x487f08u: goto label_487f08;
        case 0x487f0cu: goto label_487f0c;
        case 0x487f10u: goto label_487f10;
        case 0x487f14u: goto label_487f14;
        case 0x487f18u: goto label_487f18;
        case 0x487f1cu: goto label_487f1c;
        case 0x487f20u: goto label_487f20;
        case 0x487f24u: goto label_487f24;
        case 0x487f28u: goto label_487f28;
        case 0x487f2cu: goto label_487f2c;
        case 0x487f30u: goto label_487f30;
        case 0x487f34u: goto label_487f34;
        case 0x487f38u: goto label_487f38;
        case 0x487f3cu: goto label_487f3c;
        case 0x487f40u: goto label_487f40;
        case 0x487f44u: goto label_487f44;
        case 0x487f48u: goto label_487f48;
        case 0x487f4cu: goto label_487f4c;
        case 0x487f50u: goto label_487f50;
        case 0x487f54u: goto label_487f54;
        case 0x487f58u: goto label_487f58;
        case 0x487f5cu: goto label_487f5c;
        case 0x487f60u: goto label_487f60;
        case 0x487f64u: goto label_487f64;
        case 0x487f68u: goto label_487f68;
        case 0x487f6cu: goto label_487f6c;
        case 0x487f70u: goto label_487f70;
        case 0x487f74u: goto label_487f74;
        case 0x487f78u: goto label_487f78;
        case 0x487f7cu: goto label_487f7c;
        case 0x487f80u: goto label_487f80;
        case 0x487f84u: goto label_487f84;
        case 0x487f88u: goto label_487f88;
        case 0x487f8cu: goto label_487f8c;
        case 0x487f90u: goto label_487f90;
        case 0x487f94u: goto label_487f94;
        case 0x487f98u: goto label_487f98;
        case 0x487f9cu: goto label_487f9c;
        case 0x487fa0u: goto label_487fa0;
        case 0x487fa4u: goto label_487fa4;
        case 0x487fa8u: goto label_487fa8;
        case 0x487facu: goto label_487fac;
        case 0x487fb0u: goto label_487fb0;
        case 0x487fb4u: goto label_487fb4;
        case 0x487fb8u: goto label_487fb8;
        case 0x487fbcu: goto label_487fbc;
        case 0x487fc0u: goto label_487fc0;
        case 0x487fc4u: goto label_487fc4;
        case 0x487fc8u: goto label_487fc8;
        case 0x487fccu: goto label_487fcc;
        case 0x487fd0u: goto label_487fd0;
        case 0x487fd4u: goto label_487fd4;
        case 0x487fd8u: goto label_487fd8;
        case 0x487fdcu: goto label_487fdc;
        case 0x487fe0u: goto label_487fe0;
        case 0x487fe4u: goto label_487fe4;
        case 0x487fe8u: goto label_487fe8;
        case 0x487fecu: goto label_487fec;
        case 0x487ff0u: goto label_487ff0;
        case 0x487ff4u: goto label_487ff4;
        case 0x487ff8u: goto label_487ff8;
        case 0x487ffcu: goto label_487ffc;
        case 0x488000u: goto label_488000;
        case 0x488004u: goto label_488004;
        case 0x488008u: goto label_488008;
        case 0x48800cu: goto label_48800c;
        case 0x488010u: goto label_488010;
        case 0x488014u: goto label_488014;
        case 0x488018u: goto label_488018;
        case 0x48801cu: goto label_48801c;
        case 0x488020u: goto label_488020;
        case 0x488024u: goto label_488024;
        case 0x488028u: goto label_488028;
        case 0x48802cu: goto label_48802c;
        case 0x488030u: goto label_488030;
        case 0x488034u: goto label_488034;
        case 0x488038u: goto label_488038;
        case 0x48803cu: goto label_48803c;
        case 0x488040u: goto label_488040;
        case 0x488044u: goto label_488044;
        case 0x488048u: goto label_488048;
        case 0x48804cu: goto label_48804c;
        case 0x488050u: goto label_488050;
        case 0x488054u: goto label_488054;
        case 0x488058u: goto label_488058;
        case 0x48805cu: goto label_48805c;
        case 0x488060u: goto label_488060;
        case 0x488064u: goto label_488064;
        case 0x488068u: goto label_488068;
        case 0x48806cu: goto label_48806c;
        case 0x488070u: goto label_488070;
        case 0x488074u: goto label_488074;
        case 0x488078u: goto label_488078;
        case 0x48807cu: goto label_48807c;
        case 0x488080u: goto label_488080;
        case 0x488084u: goto label_488084;
        case 0x488088u: goto label_488088;
        case 0x48808cu: goto label_48808c;
        case 0x488090u: goto label_488090;
        case 0x488094u: goto label_488094;
        case 0x488098u: goto label_488098;
        case 0x48809cu: goto label_48809c;
        case 0x4880a0u: goto label_4880a0;
        case 0x4880a4u: goto label_4880a4;
        case 0x4880a8u: goto label_4880a8;
        case 0x4880acu: goto label_4880ac;
        case 0x4880b0u: goto label_4880b0;
        case 0x4880b4u: goto label_4880b4;
        case 0x4880b8u: goto label_4880b8;
        case 0x4880bcu: goto label_4880bc;
        case 0x4880c0u: goto label_4880c0;
        case 0x4880c4u: goto label_4880c4;
        case 0x4880c8u: goto label_4880c8;
        case 0x4880ccu: goto label_4880cc;
        case 0x4880d0u: goto label_4880d0;
        case 0x4880d4u: goto label_4880d4;
        case 0x4880d8u: goto label_4880d8;
        case 0x4880dcu: goto label_4880dc;
        case 0x4880e0u: goto label_4880e0;
        case 0x4880e4u: goto label_4880e4;
        case 0x4880e8u: goto label_4880e8;
        case 0x4880ecu: goto label_4880ec;
        case 0x4880f0u: goto label_4880f0;
        case 0x4880f4u: goto label_4880f4;
        case 0x4880f8u: goto label_4880f8;
        case 0x4880fcu: goto label_4880fc;
        case 0x488100u: goto label_488100;
        case 0x488104u: goto label_488104;
        case 0x488108u: goto label_488108;
        case 0x48810cu: goto label_48810c;
        case 0x488110u: goto label_488110;
        case 0x488114u: goto label_488114;
        case 0x488118u: goto label_488118;
        case 0x48811cu: goto label_48811c;
        case 0x488120u: goto label_488120;
        case 0x488124u: goto label_488124;
        case 0x488128u: goto label_488128;
        case 0x48812cu: goto label_48812c;
        case 0x488130u: goto label_488130;
        case 0x488134u: goto label_488134;
        case 0x488138u: goto label_488138;
        case 0x48813cu: goto label_48813c;
        case 0x488140u: goto label_488140;
        case 0x488144u: goto label_488144;
        case 0x488148u: goto label_488148;
        case 0x48814cu: goto label_48814c;
        default: break;
    }

    ctx->pc = 0x487bd0u;

label_487bd0:
    // 0x487bd0: 0x27bdf8f0  addiu       $sp, $sp, -0x710
    ctx->pc = 0x487bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965488));
label_487bd4:
    // 0x487bd4: 0x7fb306d0  sq          $s3, 0x6D0($sp)
    ctx->pc = 0x487bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1744), GPR_VEC(ctx, 19));
label_487bd8:
    // 0x487bd8: 0x7fb406c0  sq          $s4, 0x6C0($sp)
    ctx->pc = 0x487bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1728), GPR_VEC(ctx, 20));
label_487bdc:
    // 0x487bdc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x487bdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_487be0:
    // 0x487be0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x487be0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_487be4:
    // 0x487be4: 0x7fb00700  sq          $s0, 0x700($sp)
    ctx->pc = 0x487be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1792), GPR_VEC(ctx, 16));
label_487be8:
    // 0x487be8: 0x7fb106f0  sq          $s1, 0x6F0($sp)
    ctx->pc = 0x487be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1776), GPR_VEC(ctx, 17));
label_487bec:
    // 0x487bec: 0x7fb206e0  sq          $s2, 0x6E0($sp)
    ctx->pc = 0x487becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1760), GPR_VEC(ctx, 18));
label_487bf0:
    // 0x487bf0: 0x7fb506b0  sq          $s5, 0x6B0($sp)
    ctx->pc = 0x487bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1712), GPR_VEC(ctx, 21));
label_487bf4:
    // 0x487bf4: 0x7fb606a0  sq          $s6, 0x6A0($sp)
    ctx->pc = 0x487bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1696), GPR_VEC(ctx, 22));
label_487bf8:
    // 0x487bf8: 0x7fb70690  sq          $s7, 0x690($sp)
    ctx->pc = 0x487bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1680), GPR_VEC(ctx, 23));
label_487bfc:
    // 0x487bfc: 0x7fbe0680  sq          $fp, 0x680($sp)
    ctx->pc = 0x487bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 30));
label_487c00:
    // 0x487c00: 0xffbf0670  sd          $ra, 0x670($sp)
    ctx->pc = 0x487c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 31));
label_487c04:
    // 0x487c04: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x487c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_487c08:
    // 0x487c08: 0x2470ad18  addiu       $s0, $v1, -0x52E8
    ctx->pc = 0x487c08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_487c0c:
    // 0x487c0c: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x487c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_487c10:
    // 0x487c10: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x487c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_487c14:
    // 0x487c14: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x487c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_487c18:
    // 0x487c18: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x487c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_487c1c:
    // 0x487c1c: 0x40f809  jalr        $v0
label_487c20:
    if (ctx->pc == 0x487C20u) {
        ctx->pc = 0x487C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487C1Cu;
        // 0x487c20: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487C24u;
        goto label_487c24;
    }
    ctx->pc = 0x487C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487C24u);
        ctx->pc = 0x487C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487C1Cu;
        // 0x487c20: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487C1Cu, 0x487C24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487C24u;
label_487c24:
    // 0x487c24: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x487c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_487c28:
    // 0x487c28: 0x40f809  jalr        $v0
label_487c2c:
    if (ctx->pc == 0x487C2Cu) {
        ctx->pc = 0x487C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487C28u;
        // 0x487c2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487C30u;
        goto label_487c30;
    }
    ctx->pc = 0x487C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487C30u);
        ctx->pc = 0x487C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487C28u;
        // 0x487c2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487C28u, 0x487C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487C30u;
label_487c30:
    // 0x487c30: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x487c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_487c34:
    // 0x487c34: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_487c38:
    if (ctx->pc == 0x487C38u) {
        ctx->pc = 0x487C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487C34u;
        // 0x487c38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487C3Cu;
        goto label_487c3c;
    }
    ctx->pc = 0x487C34u;
    {
        const bool branch_taken_0x487c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x487C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487C34u;
        // 0x487c38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487c34) {
            ctx->pc = 0x487C70u;
            goto label_487c70;
        }
    }
    ctx->pc = 0x487C3Cu;
label_487c3c:
    // 0x487c3c: 0x828800ff  lb          $t0, 0xFF($s4)
    ctx->pc = 0x487c3cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 255)));
label_487c40:
    // 0x487c40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x487c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_487c44:
    // 0x487c44: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x487c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
label_487c48:
    // 0x487c48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x487c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_487c4c:
    // 0x487c4c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x487c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_487c50:
    // 0x487c50: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x487c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_487c54:
    // 0x487c54: 0xc11eff2  jal         func_47BFC8
label_487c58:
    if (ctx->pc == 0x487C58u) {
        ctx->pc = 0x487C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487C54u;
        // 0x487c58: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x487C5Cu;
        goto label_487c5c;
    }
    ctx->pc = 0x487C54u;
    SET_GPR_U32(ctx, 31, 0x487C5Cu);
    ctx->pc = 0x487C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487C54u;
    // 0x487c58: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x487C54u, 0x487C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487C5Cu;
label_487c5c:
    // 0x487c5c: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x487c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_487c60:
    // 0x487c60: 0xc11f024  jal         func_47C090
label_487c64:
    if (ctx->pc == 0x487C64u) {
        ctx->pc = 0x487C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487C60u;
        // 0x487c64: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487C68u;
        goto label_487c68;
    }
    ctx->pc = 0x487C60u;
    SET_GPR_U32(ctx, 31, 0x487C68u);
    ctx->pc = 0x487C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487C60u;
    // 0x487c64: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x487C60u, 0x487C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487C68u;
label_487c68:
    // 0x487c68: 0xa3a0053f  sb          $zero, 0x53F($sp)
    ctx->pc = 0x487c68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1343), (uint8_t)GPR_U32(ctx, 0));
label_487c6c:
    // 0x487c6c: 0x0  nop
    ctx->pc = 0x487c6cu;
    // NOP
label_487c70:
    // 0x487c70: 0xa3a00540  sb          $zero, 0x540($sp)
    ctx->pc = 0x487c70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1344), (uint8_t)GPR_U32(ctx, 0));
label_487c74:
    // 0x487c74: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
label_487c78:
    if (ctx->pc == 0x487C78u) {
        ctx->pc = 0x487C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487C74u;
        // 0x487c78: 0x27b60540  addiu       $s6, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487C7Cu;
        goto label_487c7c;
    }
    ctx->pc = 0x487C74u;
    {
        const bool branch_taken_0x487c74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x487C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487C74u;
        // 0x487c78: 0x27b60540  addiu       $s6, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487c74) {
            ctx->pc = 0x487CE0u;
            goto label_487ce0;
        }
    }
    ctx->pc = 0x487C7Cu;
label_487c7c:
    // 0x487c7c: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x487c7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_487c80:
    // 0x487c80: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_487c84:
    if (ctx->pc == 0x487C84u) {
        ctx->pc = 0x487C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487C80u;
        // 0x487c84: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487C88u;
        goto label_487c88;
    }
    ctx->pc = 0x487C80u;
    {
        const bool branch_taken_0x487c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x487C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487C80u;
        // 0x487c84: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487c80) {
            ctx->pc = 0x487CE0u;
            goto label_487ce0;
        }
    }
    ctx->pc = 0x487C88u;
label_487c88:
    // 0x487c88: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x487c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_487c8c:
    // 0x487c8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x487c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_487c90:
    // 0x487c90: 0x40f809  jalr        $v0
label_487c94:
    if (ctx->pc == 0x487C94u) {
        ctx->pc = 0x487C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487C90u;
        // 0x487c94: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487C98u;
        goto label_487c98;
    }
    ctx->pc = 0x487C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487C98u);
        ctx->pc = 0x487C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487C90u;
        // 0x487c94: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487C90u, 0x487C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487C98u;
label_487c98:
    // 0x487c98: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x487c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_487c9c:
    // 0x487c9c: 0x40f809  jalr        $v0
label_487ca0:
    if (ctx->pc == 0x487CA0u) {
        ctx->pc = 0x487CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487C9Cu;
        // 0x487ca0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487CA4u;
        goto label_487ca4;
    }
    ctx->pc = 0x487C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487CA4u);
        ctx->pc = 0x487CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487C9Cu;
        // 0x487ca0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487C9Cu, 0x487CA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487CA4u;
label_487ca4:
    // 0x487ca4: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x487ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_487ca8:
    // 0x487ca8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_487cac:
    if (ctx->pc == 0x487CACu) {
        ctx->pc = 0x487CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487CA8u;
        // 0x487cac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487CB0u;
        goto label_487cb0;
    }
    ctx->pc = 0x487CA8u;
    {
        const bool branch_taken_0x487ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x487CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487CA8u;
        // 0x487cac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487ca8) {
            ctx->pc = 0x487CE0u;
            goto label_487ce0;
        }
    }
    ctx->pc = 0x487CB0u;
label_487cb0:
    // 0x487cb0: 0x826800ff  lb          $t0, 0xFF($s3)
    ctx->pc = 0x487cb0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 255)));
label_487cb4:
    // 0x487cb4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x487cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_487cb8:
    // 0x487cb8: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x487cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
label_487cbc:
    // 0x487cbc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x487cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_487cc0:
    // 0x487cc0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x487cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_487cc4:
    // 0x487cc4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x487cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_487cc8:
    // 0x487cc8: 0xc11eff2  jal         func_47BFC8
label_487ccc:
    if (ctx->pc == 0x487CCCu) {
        ctx->pc = 0x487CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487CC8u;
        // 0x487ccc: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x487CD0u;
        goto label_487cd0;
    }
    ctx->pc = 0x487CC8u;
    SET_GPR_U32(ctx, 31, 0x487CD0u);
    ctx->pc = 0x487CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487CC8u;
    // 0x487ccc: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x487CC8u, 0x487CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487CD0u;
label_487cd0:
    // 0x487cd0: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x487cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_487cd4:
    // 0x487cd4: 0xc11f024  jal         func_47C090
label_487cd8:
    if (ctx->pc == 0x487CD8u) {
        ctx->pc = 0x487CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487CD4u;
        // 0x487cd8: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487CDCu;
        goto label_487cdc;
    }
    ctx->pc = 0x487CD4u;
    SET_GPR_U32(ctx, 31, 0x487CDCu);
    ctx->pc = 0x487CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487CD4u;
    // 0x487cd8: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x487CD4u, 0x487CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487CDCu;
label_487cdc:
    // 0x487cdc: 0xa3a0063f  sb          $zero, 0x63F($sp)
    ctx->pc = 0x487cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1599), (uint8_t)GPR_U32(ctx, 0));
label_487ce0:
    // 0x487ce0: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x487ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_487ce4:
    // 0x487ce4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x487ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_487ce8:
    // 0x487ce8: 0x2630ad18  addiu       $s0, $s1, -0x52E8
    ctx->pc = 0x487ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
label_487cec:
    // 0x487cec: 0xafa20660  sw          $v0, 0x660($sp)
    ctx->pc = 0x487cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1632), GPR_U32(ctx, 2));
label_487cf0:
    // 0x487cf0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x487cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_487cf4:
    // 0x487cf4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x487cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_487cf8:
    // 0x487cf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_487cfc:
    if (ctx->pc == 0x487CFCu) {
        ctx->pc = 0x487CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487CF8u;
        // 0x487cfc: 0x34048004  ori         $a0, $zero, 0x8004 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
        ctx->in_delay_slot = false;
        ctx->pc = 0x487D00u;
        goto label_487d00;
    }
    ctx->pc = 0x487CF8u;
    {
        const bool branch_taken_0x487cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x487CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487CF8u;
        // 0x487cfc: 0x34048004  ori         $a0, $zero, 0x8004 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
        ctx->in_delay_slot = false;
        if (branch_taken_0x487cf8) {
            ctx->pc = 0x487D10u;
            goto label_487d10;
        }
    }
    ctx->pc = 0x487D00u;
label_487d00:
    // 0x487d00: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x487d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_487d04:
    // 0x487d04: 0x34029004  ori         $v0, $zero, 0x9004
    ctx->pc = 0x487d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36868);
label_487d08:
    // 0x487d08: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x487d08u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_487d0c:
    // 0x487d0c: 0xafa40660  sw          $a0, 0x660($sp)
    ctx->pc = 0x487d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1632), GPR_U32(ctx, 4));
label_487d10:
    // 0x487d10: 0x8fa70660  lw          $a3, 0x660($sp)
    ctx->pc = 0x487d10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1632)));
label_487d14:
    // 0x487d14: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x487d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_487d18:
    // 0x487d18: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x487d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_487d1c:
    // 0x487d1c: 0xc122266  jal         func_488998
label_487d20:
    if (ctx->pc == 0x487D20u) {
        ctx->pc = 0x487D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487D1Cu;
        // 0x487d20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487D24u;
        goto label_487d24;
    }
    ctx->pc = 0x487D1Cu;
    SET_GPR_U32(ctx, 31, 0x487D24u);
    ctx->pc = 0x487D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487D1Cu;
    // 0x487d20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488998u, 0x487D1Cu, 0x487D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487D24u;
label_487d24:
    // 0x487d24: 0x8fa60660  lw          $a2, 0x660($sp)
    ctx->pc = 0x487d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1632)));
label_487d28:
    // 0x487d28: 0x27a70650  addiu       $a3, $sp, 0x650
    ctx->pc = 0x487d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
label_487d2c:
    // 0x487d2c: 0x27a80654  addiu       $t0, $sp, 0x654
    ctx->pc = 0x487d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1620));
label_487d30:
    // 0x487d30: 0x27a90658  addiu       $t1, $sp, 0x658
    ctx->pc = 0x487d30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1624));
label_487d34:
    // 0x487d34: 0x27aa065c  addiu       $t2, $sp, 0x65C
    ctx->pc = 0x487d34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1628));
label_487d38:
    // 0x487d38: 0xafa00650  sw          $zero, 0x650($sp)
    ctx->pc = 0x487d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1616), GPR_U32(ctx, 0));
label_487d3c:
    // 0x487d3c: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x487d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_487d40:
    // 0x487d40: 0xafa00654  sw          $zero, 0x654($sp)
    ctx->pc = 0x487d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1620), GPR_U32(ctx, 0));
label_487d44:
    // 0x487d44: 0xc121d4a  jal         func_487528
label_487d48:
    if (ctx->pc == 0x487D48u) {
        ctx->pc = 0x487D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487D44u;
        // 0x487d48: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487D4Cu;
        goto label_487d4c;
    }
    ctx->pc = 0x487D44u;
    SET_GPR_U32(ctx, 31, 0x487D4Cu);
    ctx->pc = 0x487D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487D44u;
    // 0x487d48: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x487528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487528u, 0x487D44u, 0x487D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487D4Cu;
label_487d4c:
    // 0x487d4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_487d50:
    if (ctx->pc == 0x487D50u) {
        ctx->pc = 0x487D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487D4Cu;
        // 0x487d50: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487D54u;
        goto label_487d54;
    }
    ctx->pc = 0x487D4Cu;
    {
        const bool branch_taken_0x487d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x487D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487D4Cu;
        // 0x487d50: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487d4c) {
            ctx->pc = 0x487D5Cu;
            goto label_487d5c;
        }
    }
    ctx->pc = 0x487D54u;
label_487d54:
    // 0x487d54: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_487d58:
    if (ctx->pc == 0x487D58u) {
        ctx->pc = 0x487D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487D54u;
        // 0x487d58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487D5Cu;
        goto label_487d5c;
    }
    ctx->pc = 0x487D54u;
    {
        const bool branch_taken_0x487d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x487D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487D54u;
        // 0x487d58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487d54) {
            ctx->pc = 0x48811Cu;
            goto label_48811c;
        }
    }
    ctx->pc = 0x487D5Cu;
label_487d5c:
    // 0x487d5c: 0x8fa40650  lw          $a0, 0x650($sp)
    ctx->pc = 0x487d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
label_487d60:
    // 0x487d60: 0x8fa50654  lw          $a1, 0x654($sp)
    ctx->pc = 0x487d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
label_487d64:
    // 0x487d64: 0x8fa60658  lw          $a2, 0x658($sp)
    ctx->pc = 0x487d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1624)));
label_487d68:
    // 0x487d68: 0xc121848  jal         func_486120
label_487d6c:
    if (ctx->pc == 0x487D6Cu) {
        ctx->pc = 0x487D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487D68u;
        // 0x487d6c: 0x8fa7065c  lw          $a3, 0x65C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487D70u;
        goto label_487d70;
    }
    ctx->pc = 0x487D68u;
    SET_GPR_U32(ctx, 31, 0x487D70u);
    ctx->pc = 0x487D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487D68u;
    // 0x487d6c: 0x8fa7065c  lw          $a3, 0x65C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486120u, 0x487D68u, 0x487D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487D70u;
label_487d70:
    // 0x487d70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x487d70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_487d74:
    // 0x487d74: 0x124000cd  beqz        $s2, . + 4 + (0xCD << 2)
label_487d78:
    if (ctx->pc == 0x487D78u) {
        ctx->pc = 0x487D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487D74u;
        // 0x487d78: 0x8fa3065c  lw          $v1, 0x65C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487D7Cu;
        goto label_487d7c;
    }
    ctx->pc = 0x487D74u;
    {
        const bool branch_taken_0x487d74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x487D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487D74u;
        // 0x487d78: 0x8fa3065c  lw          $v1, 0x65C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487d74) {
            ctx->pc = 0x4880ACu;
            goto label_4880ac;
        }
    }
    ctx->pc = 0x487D7Cu;
label_487d7c:
    // 0x487d7c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x487d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_487d80:
    // 0x487d80: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
label_487d84:
    if (ctx->pc == 0x487D84u) {
        ctx->pc = 0x487D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487D80u;
        // 0x487d84: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x487D88u;
        goto label_487d88;
    }
    ctx->pc = 0x487D80u;
    {
        const bool branch_taken_0x487d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x487D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487D80u;
        // 0x487d84: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x487d80) {
            ctx->pc = 0x488088u;
            goto label_488088;
        }
    }
    ctx->pc = 0x487D88u;
label_487d88:
    // 0x487d88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_487d8c:
    if (ctx->pc == 0x487D8Cu) {
        ctx->pc = 0x487D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487D88u;
        // 0x487d8c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487D90u;
        goto label_487d90;
    }
    ctx->pc = 0x487D88u;
    {
        const bool branch_taken_0x487d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x487D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487D88u;
        // 0x487d8c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487d88) {
            ctx->pc = 0x487DB0u;
            goto label_487db0;
        }
    }
    ctx->pc = 0x487D90u;
label_487d90:
    // 0x487d90: 0xc1217ca  jal         func_485F28
label_487d94:
    if (ctx->pc == 0x487D94u) {
        ctx->pc = 0x487D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487D90u;
        // 0x487d94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487D98u;
        goto label_487d98;
    }
    ctx->pc = 0x487D90u;
    SET_GPR_U32(ctx, 31, 0x487D98u);
    ctx->pc = 0x487D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487D90u;
    // 0x487d94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485F28u, 0x487D90u, 0x487D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487D98u;
label_487d98:
    // 0x487d98: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
label_487d9c:
    if (ctx->pc == 0x487D9Cu) {
        ctx->pc = 0x487DA0u;
        goto label_487da0;
    }
    ctx->pc = 0x487D98u;
    {
        const bool branch_taken_0x487d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x487d98) {
            ctx->pc = 0x4880A4u;
            goto label_4880a4;
        }
    }
    ctx->pc = 0x487DA0u;
label_487da0:
    // 0x487da0: 0xc12164a  jal         func_485928
label_487da4:
    if (ctx->pc == 0x487DA4u) {
        ctx->pc = 0x487DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487DA0u;
        // 0x487da4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487DA8u;
        goto label_487da8;
    }
    ctx->pc = 0x487DA0u;
    SET_GPR_U32(ctx, 31, 0x487DA8u);
    ctx->pc = 0x487DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487DA0u;
    // 0x487da4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x487DA0u, 0x487DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487DA8u;
label_487da8:
    // 0x487da8: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_487dac:
    if (ctx->pc == 0x487DACu) {
        ctx->pc = 0x487DB0u;
        goto label_487db0;
    }
    ctx->pc = 0x487DA8u;
    {
        const bool branch_taken_0x487da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x487da8) {
            ctx->pc = 0x4880C4u;
            goto label_4880c4;
        }
    }
    ctx->pc = 0x487DB0u;
label_487db0:
    // 0x487db0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x487db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_487db4:
    // 0x487db4: 0xc1218a4  jal         func_486290
label_487db8:
    if (ctx->pc == 0x487DB8u) {
        ctx->pc = 0x487DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487DB4u;
        // 0x487db8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487DBCu;
        goto label_487dbc;
    }
    ctx->pc = 0x487DB4u;
    SET_GPR_U32(ctx, 31, 0x487DBCu);
    ctx->pc = 0x487DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487DB4u;
    // 0x487db8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486290u, 0x487DB4u, 0x487DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487DBCu;
label_487dbc:
    // 0x487dbc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x487dbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_487dc0:
    // 0x487dc0: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x487dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_487dc4:
    // 0x487dc4: 0x5040006a  beql        $v0, $zero, . + 4 + (0x6A << 2)
label_487dc8:
    if (ctx->pc == 0x487DC8u) {
        ctx->pc = 0x487DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487DC4u;
        // 0x487dc8: 0x92420023  lbu         $v0, 0x23($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487DCCu;
        goto label_487dcc;
    }
    ctx->pc = 0x487DC4u;
    {
        const bool branch_taken_0x487dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x487dc4) {
            ctx->pc = 0x487DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x487DC4u;
            // 0x487dc8: 0x92420023  lbu         $v0, 0x23($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x487F70u;
            goto label_487f70;
        }
    }
    ctx->pc = 0x487DCCu;
label_487dcc:
    // 0x487dcc: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x487dccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_487dd0:
    // 0x487dd0: 0x27be0004  addiu       $fp, $sp, 0x4
    ctx->pc = 0x487dd0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_487dd4:
    // 0x487dd4: 0x0  nop
    ctx->pc = 0x487dd4u;
    // NOP
label_487dd8:
    // 0x487dd8: 0x8ee200d0  lw          $v0, 0xD0($s7)
    ctx->pc = 0x487dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 208)));
label_487ddc:
    // 0x487ddc: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x487ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_487de0:
    // 0x487de0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x487de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_487de4:
    // 0x487de4: 0x40f809  jalr        $v0
label_487de8:
    if (ctx->pc == 0x487DE8u) {
        ctx->pc = 0x487DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487DE4u;
        // 0x487de8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487DECu;
        goto label_487dec;
    }
    ctx->pc = 0x487DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487DECu);
        ctx->pc = 0x487DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487DE4u;
        // 0x487de8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487DE4u, 0x487DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487DECu;
label_487dec:
    // 0x487dec: 0x8ee200f4  lw          $v0, 0xF4($s7)
    ctx->pc = 0x487decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 244)));
label_487df0:
    // 0x487df0: 0x40f809  jalr        $v0
label_487df4:
    if (ctx->pc == 0x487DF4u) {
        ctx->pc = 0x487DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487DF0u;
        // 0x487df4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487DF8u;
        goto label_487df8;
    }
    ctx->pc = 0x487DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487DF8u);
        ctx->pc = 0x487DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487DF0u;
        // 0x487df4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487DF0u, 0x487DF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487DF8u;
label_487df8:
    // 0x487df8: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x487df8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_487dfc:
    // 0x487dfc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_487e00:
    if (ctx->pc == 0x487E00u) {
        ctx->pc = 0x487E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487DFCu;
        // 0x487e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487E04u;
        goto label_487e04;
    }
    ctx->pc = 0x487DFCu;
    {
        const bool branch_taken_0x487dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x487E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487DFCu;
        // 0x487e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487dfc) {
            ctx->pc = 0x487E38u;
            goto label_487e38;
        }
    }
    ctx->pc = 0x487E04u;
label_487e04:
    // 0x487e04: 0x828800ff  lb          $t0, 0xFF($s4)
    ctx->pc = 0x487e04u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 255)));
label_487e08:
    // 0x487e08: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x487e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_487e0c:
    // 0x487e0c: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x487e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
label_487e10:
    // 0x487e10: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x487e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_487e14:
    // 0x487e14: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x487e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_487e18:
    // 0x487e18: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x487e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_487e1c:
    // 0x487e1c: 0xc11eff2  jal         func_47BFC8
label_487e20:
    if (ctx->pc == 0x487E20u) {
        ctx->pc = 0x487E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487E1Cu;
        // 0x487e20: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x487E24u;
        goto label_487e24;
    }
    ctx->pc = 0x487E1Cu;
    SET_GPR_U32(ctx, 31, 0x487E24u);
    ctx->pc = 0x487E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487E1Cu;
    // 0x487e20: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x487E1Cu, 0x487E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487E24u;
label_487e24:
    // 0x487e24: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x487e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_487e28:
    // 0x487e28: 0xc11f024  jal         func_47C090
label_487e2c:
    if (ctx->pc == 0x487E2Cu) {
        ctx->pc = 0x487E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487E28u;
        // 0x487e2c: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487E30u;
        goto label_487e30;
    }
    ctx->pc = 0x487E28u;
    SET_GPR_U32(ctx, 31, 0x487E30u);
    ctx->pc = 0x487E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487E28u;
    // 0x487e2c: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x487E28u, 0x487E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487E30u;
label_487e30:
    // 0x487e30: 0xa3a0053f  sb          $zero, 0x53F($sp)
    ctx->pc = 0x487e30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1343), (uint8_t)GPR_U32(ctx, 0));
label_487e34:
    // 0x487e34: 0x0  nop
    ctx->pc = 0x487e34u;
    // NOP
label_487e38:
    // 0x487e38: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
label_487e3c:
    if (ctx->pc == 0x487E3Cu) {
        ctx->pc = 0x487E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487E38u;
        // 0x487e3c: 0xa3a00540  sb          $zero, 0x540($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1344), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487E40u;
        goto label_487e40;
    }
    ctx->pc = 0x487E38u;
    {
        const bool branch_taken_0x487e38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x487E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487E38u;
        // 0x487e3c: 0xa3a00540  sb          $zero, 0x540($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1344), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487e38) {
            ctx->pc = 0x487EA8u;
            goto label_487ea8;
        }
    }
    ctx->pc = 0x487E40u;
label_487e40:
    // 0x487e40: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x487e40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_487e44:
    // 0x487e44: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_487e48:
    if (ctx->pc == 0x487E48u) {
        ctx->pc = 0x487E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487E44u;
        // 0x487e48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487E4Cu;
        goto label_487e4c;
    }
    ctx->pc = 0x487E44u;
    {
        const bool branch_taken_0x487e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x487E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487E44u;
        // 0x487e48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487e44) {
            ctx->pc = 0x487EA8u;
            goto label_487ea8;
        }
    }
    ctx->pc = 0x487E4Cu;
label_487e4c:
    // 0x487e4c: 0x8ee200d0  lw          $v0, 0xD0($s7)
    ctx->pc = 0x487e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 208)));
label_487e50:
    // 0x487e50: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x487e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_487e54:
    // 0x487e54: 0x40f809  jalr        $v0
label_487e58:
    if (ctx->pc == 0x487E58u) {
        ctx->pc = 0x487E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487E54u;
        // 0x487e58: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487E5Cu;
        goto label_487e5c;
    }
    ctx->pc = 0x487E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487E5Cu);
        ctx->pc = 0x487E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487E54u;
        // 0x487e58: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487E54u, 0x487E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487E5Cu;
label_487e5c:
    // 0x487e5c: 0x8ee200f4  lw          $v0, 0xF4($s7)
    ctx->pc = 0x487e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 244)));
label_487e60:
    // 0x487e60: 0x40f809  jalr        $v0
label_487e64:
    if (ctx->pc == 0x487E64u) {
        ctx->pc = 0x487E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487E60u;
        // 0x487e64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487E68u;
        goto label_487e68;
    }
    ctx->pc = 0x487E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487E68u);
        ctx->pc = 0x487E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487E60u;
        // 0x487e64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487E60u, 0x487E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487E68u;
label_487e68:
    // 0x487e68: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x487e68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_487e6c:
    // 0x487e6c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_487e70:
    if (ctx->pc == 0x487E70u) {
        ctx->pc = 0x487E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487E6Cu;
        // 0x487e70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487E74u;
        goto label_487e74;
    }
    ctx->pc = 0x487E6Cu;
    {
        const bool branch_taken_0x487e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x487E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487E6Cu;
        // 0x487e70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487e6c) {
            ctx->pc = 0x487EA8u;
            goto label_487ea8;
        }
    }
    ctx->pc = 0x487E74u;
label_487e74:
    // 0x487e74: 0x826800ff  lb          $t0, 0xFF($s3)
    ctx->pc = 0x487e74u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 255)));
label_487e78:
    // 0x487e78: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x487e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_487e7c:
    // 0x487e7c: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x487e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
label_487e80:
    // 0x487e80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x487e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_487e84:
    // 0x487e84: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x487e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_487e88:
    // 0x487e88: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x487e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_487e8c:
    // 0x487e8c: 0xc11eff2  jal         func_47BFC8
label_487e90:
    if (ctx->pc == 0x487E90u) {
        ctx->pc = 0x487E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487E8Cu;
        // 0x487e90: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x487E94u;
        goto label_487e94;
    }
    ctx->pc = 0x487E8Cu;
    SET_GPR_U32(ctx, 31, 0x487E94u);
    ctx->pc = 0x487E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487E8Cu;
    // 0x487e90: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x487E8Cu, 0x487E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487E94u;
label_487e94:
    // 0x487e94: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x487e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_487e98:
    // 0x487e98: 0xc11f024  jal         func_47C090
label_487e9c:
    if (ctx->pc == 0x487E9Cu) {
        ctx->pc = 0x487E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487E98u;
        // 0x487e9c: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487EA0u;
        goto label_487ea0;
    }
    ctx->pc = 0x487E98u;
    SET_GPR_U32(ctx, 31, 0x487EA0u);
    ctx->pc = 0x487E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487E98u;
    // 0x487e9c: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x487E98u, 0x487EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487EA0u;
label_487ea0:
    // 0x487ea0: 0xa3a0063f  sb          $zero, 0x63F($sp)
    ctx->pc = 0x487ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1599), (uint8_t)GPR_U32(ctx, 0));
label_487ea4:
    // 0x487ea4: 0x0  nop
    ctx->pc = 0x487ea4u;
    // NOP
label_487ea8:
    // 0x487ea8: 0x8fa70660  lw          $a3, 0x660($sp)
    ctx->pc = 0x487ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1632)));
label_487eac:
    // 0x487eac: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x487eacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_487eb0:
    // 0x487eb0: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x487eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_487eb4:
    // 0x487eb4: 0x27a50540  addiu       $a1, $sp, 0x540
    ctx->pc = 0x487eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_487eb8:
    // 0x487eb8: 0xc122266  jal         func_488998
label_487ebc:
    if (ctx->pc == 0x487EBCu) {
        ctx->pc = 0x487EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487EB8u;
        // 0x487ebc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487EC0u;
        goto label_487ec0;
    }
    ctx->pc = 0x487EB8u;
    SET_GPR_U32(ctx, 31, 0x487EC0u);
    ctx->pc = 0x487EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487EB8u;
    // 0x487ebc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488998u, 0x487EB8u, 0x487EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487EC0u;
label_487ec0:
    // 0x487ec0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x487ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_487ec4:
    // 0x487ec4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x487ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_487ec8:
    // 0x487ec8: 0xc121902  jal         func_486408
label_487ecc:
    if (ctx->pc == 0x487ECCu) {
        ctx->pc = 0x487ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487EC8u;
        // 0x487ecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487ED0u;
        goto label_487ed0;
    }
    ctx->pc = 0x487EC8u;
    SET_GPR_U32(ctx, 31, 0x487ED0u);
    ctx->pc = 0x487ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487EC8u;
    // 0x487ecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486408u, 0x487EC8u, 0x487ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487ED0u;
label_487ed0:
    // 0x487ed0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x487ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_487ed4:
    // 0x487ed4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x487ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_487ed8:
    // 0x487ed8: 0xafa30650  sw          $v1, 0x650($sp)
    ctx->pc = 0x487ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1616), GPR_U32(ctx, 3));
label_487edc:
    // 0x487edc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x487edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_487ee0:
    // 0x487ee0: 0xafa20654  sw          $v0, 0x654($sp)
    ctx->pc = 0x487ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1620), GPR_U32(ctx, 2));
label_487ee4:
    // 0x487ee4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x487ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_487ee8:
    // 0x487ee8: 0xafa30658  sw          $v1, 0x658($sp)
    ctx->pc = 0x487ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1624), GPR_U32(ctx, 3));
label_487eec:
    // 0x487eec: 0x92420023  lbu         $v0, 0x23($s2)
    ctx->pc = 0x487eecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_487ef0:
    // 0x487ef0: 0x92430020  lbu         $v1, 0x20($s2)
    ctx->pc = 0x487ef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_487ef4:
    // 0x487ef4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x487ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_487ef8:
    // 0x487ef8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x487ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_487efc:
    // 0x487efc: 0xc121912  jal         func_486448
label_487f00:
    if (ctx->pc == 0x487F00u) {
        ctx->pc = 0x487F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487EFCu;
        // 0x487f00: 0xafa2065c  sw          $v0, 0x65C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487F04u;
        goto label_487f04;
    }
    ctx->pc = 0x487EFCu;
    SET_GPR_U32(ctx, 31, 0x487F04u);
    ctx->pc = 0x487F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487EFCu;
    // 0x487f00: 0xafa2065c  sw          $v0, 0x65C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1628), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486448u, 0x487EFCu, 0x487F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487F04u;
label_487f04:
    // 0x487f04: 0x8fa60660  lw          $a2, 0x660($sp)
    ctx->pc = 0x487f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1632)));
label_487f08:
    // 0x487f08: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x487f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_487f0c:
    // 0x487f0c: 0x27a50540  addiu       $a1, $sp, 0x540
    ctx->pc = 0x487f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_487f10:
    // 0x487f10: 0x27a70650  addiu       $a3, $sp, 0x650
    ctx->pc = 0x487f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
label_487f14:
    // 0x487f14: 0x27a80654  addiu       $t0, $sp, 0x654
    ctx->pc = 0x487f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1620));
label_487f18:
    // 0x487f18: 0x27a90658  addiu       $t1, $sp, 0x658
    ctx->pc = 0x487f18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1624));
label_487f1c:
    // 0x487f1c: 0xc121d4a  jal         func_487528
label_487f20:
    if (ctx->pc == 0x487F20u) {
        ctx->pc = 0x487F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487F1Cu;
        // 0x487f20: 0x27aa065c  addiu       $t2, $sp, 0x65C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1628));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487F24u;
        goto label_487f24;
    }
    ctx->pc = 0x487F1Cu;
    SET_GPR_U32(ctx, 31, 0x487F24u);
    ctx->pc = 0x487F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487F1Cu;
    // 0x487f20: 0x27aa065c  addiu       $t2, $sp, 0x65C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x487528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487528u, 0x487F1Cu, 0x487F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487F24u;
label_487f24:
    // 0x487f24: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_487f28:
    if (ctx->pc == 0x487F28u) {
        ctx->pc = 0x487F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487F24u;
        // 0x487f28: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487F2Cu;
        goto label_487f2c;
    }
    ctx->pc = 0x487F24u;
    {
        const bool branch_taken_0x487f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x487F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487F24u;
        // 0x487f28: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487f24) {
            ctx->pc = 0x487F5Cu;
            goto label_487f5c;
        }
    }
    ctx->pc = 0x487F2Cu;
label_487f2c:
    // 0x487f2c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x487f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_487f30:
    // 0x487f30: 0x6200069  bltz        $s1, . + 4 + (0x69 << 2)
label_487f34:
    if (ctx->pc == 0x487F34u) {
        ctx->pc = 0x487F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487F30u;
        // 0x487f34: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487F38u;
        goto label_487f38;
    }
    ctx->pc = 0x487F30u;
    {
        const bool branch_taken_0x487f30 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x487F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487F30u;
        // 0x487f34: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487f30) {
            ctx->pc = 0x4880D8u;
            goto label_4880d8;
        }
    }
    ctx->pc = 0x487F38u;
label_487f38:
    // 0x487f38: 0x5d8021  addu        $s0, $v0, $sp
    ctx->pc = 0x487f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_487f3c:
    // 0x487f3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x487f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_487f40:
    // 0x487f40: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x487f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_487f44:
    // 0x487f44: 0xc12164a  jal         func_485928
label_487f48:
    if (ctx->pc == 0x487F48u) {
        ctx->pc = 0x487F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487F44u;
        // 0x487f48: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487F4Cu;
        goto label_487f4c;
    }
    ctx->pc = 0x487F44u;
    SET_GPR_U32(ctx, 31, 0x487F4Cu);
    ctx->pc = 0x487F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487F44u;
    // 0x487f48: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x487F44u, 0x487F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487F4Cu;
label_487f4c:
    // 0x487f4c: 0x623fffc  bgezl       $s1, . + 4 + (-0x4 << 2)
label_487f50:
    if (ctx->pc == 0x487F50u) {
        ctx->pc = 0x487F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487F4Cu;
        // 0x487f50: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487F54u;
        goto label_487f54;
    }
    ctx->pc = 0x487F4Cu;
    {
        const bool branch_taken_0x487f4c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x487f4c) {
            ctx->pc = 0x487F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x487F4Cu;
            // 0x487f50: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x487F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487f40;
        }
    }
    ctx->pc = 0x487F54u;
label_487f54:
    // 0x487f54: 0x10000060  b           . + 4 + (0x60 << 2)
label_487f58:
    if (ctx->pc == 0x487F58u) {
        ctx->pc = 0x487F5Cu;
        goto label_487f5c;
    }
    ctx->pc = 0x487F54u;
    {
        const bool branch_taken_0x487f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x487f54) {
            ctx->pc = 0x4880D8u;
            goto label_4880d8;
        }
    }
    ctx->pc = 0x487F5Cu;
label_487f5c:
    // 0x487f5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x487f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_487f60:
    // 0x487f60: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x487f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_487f64:
    // 0x487f64: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
label_487f68:
    if (ctx->pc == 0x487F68u) {
        ctx->pc = 0x487F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487F64u;
        // 0x487f68: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487F6Cu;
        goto label_487f6c;
    }
    ctx->pc = 0x487F64u;
    {
        const bool branch_taken_0x487f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x487F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487F64u;
        // 0x487f68: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487f64) {
            ctx->pc = 0x487DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487dd8;
        }
    }
    ctx->pc = 0x487F6Cu;
label_487f6c:
    // 0x487f6c: 0x92420023  lbu         $v0, 0x23($s2)
    ctx->pc = 0x487f6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_487f70:
    // 0x487f70: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x487f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_487f74:
    // 0x487f74: 0x30436000  andi        $v1, $v0, 0x6000
    ctx->pc = 0x487f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_487f78:
    // 0x487f78: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_487f7c:
    if (ctx->pc == 0x487F7Cu) {
        ctx->pc = 0x487F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487F78u;
        // 0x487f7c: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x487F80u;
        goto label_487f80;
    }
    ctx->pc = 0x487F78u;
    {
        const bool branch_taken_0x487f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x487F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487F78u;
        // 0x487f7c: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x487f78) {
            ctx->pc = 0x487FC8u;
            goto label_487fc8;
        }
    }
    ctx->pc = 0x487F80u;
label_487f80:
    // 0x487f80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_487f84:
    if (ctx->pc == 0x487F84u) {
        ctx->pc = 0x487F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487F80u;
        // 0x487f84: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487F88u;
        goto label_487f88;
    }
    ctx->pc = 0x487F80u;
    {
        const bool branch_taken_0x487f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x487F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487F80u;
        // 0x487f84: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487f80) {
            ctx->pc = 0x487FA4u;
            goto label_487fa4;
        }
    }
    ctx->pc = 0x487F88u;
label_487f88:
    // 0x487f88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x487f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_487f8c:
    // 0x487f8c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x487f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_487f90:
    // 0x487f90: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x487f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_487f94:
    // 0x487f94: 0xc121cc8  jal         func_487320
label_487f98:
    if (ctx->pc == 0x487F98u) {
        ctx->pc = 0x487F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487F94u;
        // 0x487f98: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487F9Cu;
        goto label_487f9c;
    }
    ctx->pc = 0x487F94u;
    SET_GPR_U32(ctx, 31, 0x487F9Cu);
    ctx->pc = 0x487F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487F94u;
    // 0x487f98: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x487320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487320u, 0x487F94u, 0x487F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487F9Cu;
label_487f9c:
    // 0x487f9c: 0x10000006  b           . + 4 + (0x6 << 2)
label_487fa0:
    if (ctx->pc == 0x487FA0u) {
        ctx->pc = 0x487FA4u;
        goto label_487fa4;
    }
    ctx->pc = 0x487F9Cu;
    {
        const bool branch_taken_0x487f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x487f9c) {
            ctx->pc = 0x487FB8u;
            goto label_487fb8;
        }
    }
    ctx->pc = 0x487FA4u;
label_487fa4:
    // 0x487fa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x487fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_487fa8:
    // 0x487fa8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x487fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_487fac:
    // 0x487fac: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x487facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_487fb0:
    // 0x487fb0: 0xc121cc8  jal         func_487320
label_487fb4:
    if (ctx->pc == 0x487FB4u) {
        ctx->pc = 0x487FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487FB0u;
        // 0x487fb4: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487FB8u;
        goto label_487fb8;
    }
    ctx->pc = 0x487FB0u;
    SET_GPR_U32(ctx, 31, 0x487FB8u);
    ctx->pc = 0x487FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487FB0u;
    // 0x487fb4: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x487320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487320u, 0x487FB0u, 0x487FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487FB8u;
label_487fb8:
    // 0x487fb8: 0xc1215a4  jal         func_485690
label_487fbc:
    if (ctx->pc == 0x487FBCu) {
        ctx->pc = 0x487FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487FB8u;
        // 0x487fbc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487FC0u;
        goto label_487fc0;
    }
    ctx->pc = 0x487FB8u;
    SET_GPR_U32(ctx, 31, 0x487FC0u);
    ctx->pc = 0x487FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487FB8u;
    // 0x487fbc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485690u, 0x487FB8u, 0x487FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487FC0u;
label_487fc0:
    // 0x487fc0: 0x1000000b  b           . + 4 + (0xB << 2)
label_487fc4:
    if (ctx->pc == 0x487FC4u) {
        ctx->pc = 0x487FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487FC0u;
        // 0x487fc4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487FC8u;
        goto label_487fc8;
    }
    ctx->pc = 0x487FC0u;
    {
        const bool branch_taken_0x487fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x487FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487FC0u;
        // 0x487fc4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487fc0) {
            ctx->pc = 0x487FF0u;
            goto label_487ff0;
        }
    }
    ctx->pc = 0x487FC8u;
label_487fc8:
    // 0x487fc8: 0x1aa00008  blez        $s5, . + 4 + (0x8 << 2)
label_487fcc:
    if (ctx->pc == 0x487FCCu) {
        ctx->pc = 0x487FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487FC8u;
        // 0x487fcc: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487FD0u;
        goto label_487fd0;
    }
    ctx->pc = 0x487FC8u;
    {
        const bool branch_taken_0x487fc8 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x487FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487FC8u;
        // 0x487fcc: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487fc8) {
            ctx->pc = 0x487FECu;
            goto label_487fec;
        }
    }
    ctx->pc = 0x487FD0u;
label_487fd0:
    // 0x487fd0: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x487fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_487fd4:
    // 0x487fd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x487fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_487fd8:
    // 0x487fd8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x487fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_487fdc:
    // 0x487fdc: 0xc1215a4  jal         func_485690
label_487fe0:
    if (ctx->pc == 0x487FE0u) {
        ctx->pc = 0x487FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487FDCu;
        // 0x487fe0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487FE4u;
        goto label_487fe4;
    }
    ctx->pc = 0x487FDCu;
    SET_GPR_U32(ctx, 31, 0x487FE4u);
    ctx->pc = 0x487FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487FDCu;
    // 0x487fe0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485690u, 0x487FDCu, 0x487FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487FE4u;
label_487fe4:
    // 0x487fe4: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_487fe8:
    if (ctx->pc == 0x487FE8u) {
        ctx->pc = 0x487FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487FE4u;
        // 0x487fe8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487FECu;
        goto label_487fec;
    }
    ctx->pc = 0x487FE4u;
    {
        const bool branch_taken_0x487fe4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x487fe4) {
            ctx->pc = 0x487FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x487FE4u;
            // 0x487fe8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x487FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487fd8;
        }
    }
    ctx->pc = 0x487FECu;
label_487fec:
    // 0x487fec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x487fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_487ff0:
    // 0x487ff0: 0x1aa00034  blez        $s5, . + 4 + (0x34 << 2)
label_487ff4:
    if (ctx->pc == 0x487FF4u) {
        ctx->pc = 0x487FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487FF0u;
        // 0x487ff4: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487FF8u;
        goto label_487ff8;
    }
    ctx->pc = 0x487FF0u;
    {
        const bool branch_taken_0x487ff0 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x487FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487FF0u;
        // 0x487ff4: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487ff0) {
            ctx->pc = 0x4880C4u;
            goto label_4880c4;
        }
    }
    ctx->pc = 0x487FF8u;
label_487ff8:
    // 0x487ff8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x487ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_487ffc:
    // 0x487ffc: 0x0  nop
    ctx->pc = 0x487ffcu;
    // NOP
label_488000:
    // 0x488000: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x488000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_488004:
    // 0x488004: 0xc121902  jal         func_486408
label_488008:
    if (ctx->pc == 0x488008u) {
        ctx->pc = 0x488008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488004u;
        // 0x488008: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48800Cu;
        goto label_48800c;
    }
    ctx->pc = 0x488004u;
    SET_GPR_U32(ctx, 31, 0x48800Cu);
    ctx->pc = 0x488008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488004u;
    // 0x488008: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486408u, 0x488004u, 0x48800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48800Cu;
label_48800c:
    // 0x48800c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_488010:
    if (ctx->pc == 0x488010u) {
        ctx->pc = 0x488010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48800Cu;
        // 0x488010: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488014u;
        goto label_488014;
    }
    ctx->pc = 0x48800Cu;
    {
        const bool branch_taken_0x48800c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48800c) {
            ctx->pc = 0x488010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48800Cu;
            // 0x488010: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488068u;
            goto label_488068;
        }
    }
    ctx->pc = 0x488014u;
label_488014:
    // 0x488014: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x488014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_488018:
    // 0x488018: 0xc1217ca  jal         func_485F28
label_48801c:
    if (ctx->pc == 0x48801Cu) {
        ctx->pc = 0x48801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488018u;
        // 0x48801c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488020u;
        goto label_488020;
    }
    ctx->pc = 0x488018u;
    SET_GPR_U32(ctx, 31, 0x488020u);
    ctx->pc = 0x48801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488018u;
    // 0x48801c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485F28u, 0x488018u, 0x488020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488020u;
label_488020:
    // 0x488020: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_488024:
    if (ctx->pc == 0x488024u) {
        ctx->pc = 0x488024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488020u;
        // 0x488024: 0x235102a  slt         $v0, $s1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x488028u;
        goto label_488028;
    }
    ctx->pc = 0x488020u;
    {
        const bool branch_taken_0x488020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x488024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488020u;
        // 0x488024: 0x235102a  slt         $v0, $s1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x488020) {
            ctx->pc = 0x48805Cu;
            goto label_48805c;
        }
    }
    ctx->pc = 0x488028u;
label_488028:
    // 0x488028: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_48802c:
    if (ctx->pc == 0x48802Cu) {
        ctx->pc = 0x48802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488028u;
        // 0x48802c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488030u;
        goto label_488030;
    }
    ctx->pc = 0x488028u;
    {
        const bool branch_taken_0x488028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488028u;
        // 0x48802c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488028) {
            ctx->pc = 0x4880D8u;
            goto label_4880d8;
        }
    }
    ctx->pc = 0x488030u;
label_488030:
    // 0x488030: 0x5d8021  addu        $s0, $v0, $sp
    ctx->pc = 0x488030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_488034:
    // 0x488034: 0x2b18823  subu        $s1, $s5, $s1
    ctx->pc = 0x488034u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_488038:
    // 0x488038: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x488038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_48803c:
    // 0x48803c: 0x0  nop
    ctx->pc = 0x48803cu;
    // NOP
label_488040:
    // 0x488040: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x488040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_488044:
    // 0x488044: 0xc12164a  jal         func_485928
label_488048:
    if (ctx->pc == 0x488048u) {
        ctx->pc = 0x488048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488044u;
        // 0x488048: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48804Cu;
        goto label_48804c;
    }
    ctx->pc = 0x488044u;
    SET_GPR_U32(ctx, 31, 0x48804Cu);
    ctx->pc = 0x488048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488044u;
    // 0x488048: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x488044u, 0x48804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48804Cu;
label_48804c:
    // 0x48804c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_488050:
    if (ctx->pc == 0x488050u) {
        ctx->pc = 0x488050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48804Cu;
        // 0x488050: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488054u;
        goto label_488054;
    }
    ctx->pc = 0x48804Cu;
    {
        const bool branch_taken_0x48804c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x48804c) {
            ctx->pc = 0x488050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48804Cu;
            // 0x488050: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488040;
        }
    }
    ctx->pc = 0x488054u;
label_488054:
    // 0x488054: 0x10000020  b           . + 4 + (0x20 << 2)
label_488058:
    if (ctx->pc == 0x488058u) {
        ctx->pc = 0x48805Cu;
        goto label_48805c;
    }
    ctx->pc = 0x488054u;
    {
        const bool branch_taken_0x488054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x488054) {
            ctx->pc = 0x4880D8u;
            goto label_4880d8;
        }
    }
    ctx->pc = 0x48805Cu;
label_48805c:
    // 0x48805c: 0xc121912  jal         func_486448
label_488060:
    if (ctx->pc == 0x488060u) {
        ctx->pc = 0x488060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48805Cu;
        // 0x488060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488064u;
        goto label_488064;
    }
    ctx->pc = 0x48805Cu;
    SET_GPR_U32(ctx, 31, 0x488064u);
    ctx->pc = 0x488060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48805Cu;
    // 0x488060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486448u, 0x48805Cu, 0x488064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488064u;
label_488064:
    // 0x488064: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x488064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_488068:
    // 0x488068: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x488068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_48806c:
    // 0x48806c: 0xc12164a  jal         func_485928
label_488070:
    if (ctx->pc == 0x488070u) {
        ctx->pc = 0x488070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48806Cu;
        // 0x488070: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488074u;
        goto label_488074;
    }
    ctx->pc = 0x48806Cu;
    SET_GPR_U32(ctx, 31, 0x488074u);
    ctx->pc = 0x488070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48806Cu;
    // 0x488070: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x48806Cu, 0x488074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488074u;
label_488074:
    // 0x488074: 0x235182a  slt         $v1, $s1, $s5
    ctx->pc = 0x488074u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_488078:
    // 0x488078: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_48807c:
    if (ctx->pc == 0x48807Cu) {
        ctx->pc = 0x48807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488078u;
        // 0x48807c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488080u;
        goto label_488080;
    }
    ctx->pc = 0x488078u;
    {
        const bool branch_taken_0x488078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488078u;
        // 0x48807c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488078) {
            ctx->pc = 0x488000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488000;
        }
    }
    ctx->pc = 0x488080u;
label_488080:
    // 0x488080: 0x10000010  b           . + 4 + (0x10 << 2)
label_488084:
    if (ctx->pc == 0x488084u) {
        ctx->pc = 0x488088u;
        goto label_488088;
    }
    ctx->pc = 0x488080u;
    {
        const bool branch_taken_0x488080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x488080) {
            ctx->pc = 0x4880C4u;
            goto label_4880c4;
        }
    }
    ctx->pc = 0x488088u;
label_488088:
    // 0x488088: 0xc1215a4  jal         func_485690
label_48808c:
    if (ctx->pc == 0x48808Cu) {
        ctx->pc = 0x48808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488088u;
        // 0x48808c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488090u;
        goto label_488090;
    }
    ctx->pc = 0x488088u;
    SET_GPR_U32(ctx, 31, 0x488090u);
    ctx->pc = 0x48808Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488088u;
    // 0x48808c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485690u, 0x488088u, 0x488090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488090u;
label_488090:
    // 0x488090: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x488090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_488094:
    // 0x488094: 0xc1217ca  jal         func_485F28
label_488098:
    if (ctx->pc == 0x488098u) {
        ctx->pc = 0x488098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488094u;
        // 0x488098: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48809Cu;
        goto label_48809c;
    }
    ctx->pc = 0x488094u;
    SET_GPR_U32(ctx, 31, 0x48809Cu);
    ctx->pc = 0x488098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488094u;
    // 0x488098: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485F28u, 0x488094u, 0x48809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48809Cu;
label_48809c:
    // 0x48809c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4880a0:
    if (ctx->pc == 0x4880A0u) {
        ctx->pc = 0x4880A4u;
        goto label_4880a4;
    }
    ctx->pc = 0x48809Cu;
    {
        const bool branch_taken_0x48809c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48809c) {
            ctx->pc = 0x4880BCu;
            goto label_4880bc;
        }
    }
    ctx->pc = 0x4880A4u;
label_4880a4:
    // 0x4880a4: 0xc121888  jal         func_486220
label_4880a8:
    if (ctx->pc == 0x4880A8u) {
        ctx->pc = 0x4880A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880A4u;
        // 0x4880a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4880ACu;
        goto label_4880ac;
    }
    ctx->pc = 0x4880A4u;
    SET_GPR_U32(ctx, 31, 0x4880ACu);
    ctx->pc = 0x4880A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4880A4u;
    // 0x4880a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x4880A4u, 0x4880ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4880ACu;
label_4880ac:
    // 0x4880ac: 0xc12164a  jal         func_485928
label_4880b0:
    if (ctx->pc == 0x4880B0u) {
        ctx->pc = 0x4880B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880ACu;
        // 0x4880b0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4880B4u;
        goto label_4880b4;
    }
    ctx->pc = 0x4880ACu;
    SET_GPR_U32(ctx, 31, 0x4880B4u);
    ctx->pc = 0x4880B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4880ACu;
    // 0x4880b0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x4880ACu, 0x4880B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4880B4u;
label_4880b4:
    // 0x4880b4: 0x10000019  b           . + 4 + (0x19 << 2)
label_4880b8:
    if (ctx->pc == 0x4880B8u) {
        ctx->pc = 0x4880B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880B4u;
        // 0x4880b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4880BCu;
        goto label_4880bc;
    }
    ctx->pc = 0x4880B4u;
    {
        const bool branch_taken_0x4880b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4880B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880B4u;
        // 0x4880b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4880b4) {
            ctx->pc = 0x48811Cu;
            goto label_48811c;
        }
    }
    ctx->pc = 0x4880BCu;
label_4880bc:
    // 0x4880bc: 0xc12164a  jal         func_485928
label_4880c0:
    if (ctx->pc == 0x4880C0u) {
        ctx->pc = 0x4880C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880BCu;
        // 0x4880c0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4880C4u;
        goto label_4880c4;
    }
    ctx->pc = 0x4880BCu;
    SET_GPR_U32(ctx, 31, 0x4880C4u);
    ctx->pc = 0x4880C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4880BCu;
    // 0x4880c0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x4880BCu, 0x4880C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4880C4u;
label_4880c4:
    // 0x4880c4: 0xc122342  jal         func_488D08
label_4880c8:
    if (ctx->pc == 0x4880C8u) {
        ctx->pc = 0x4880C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880C4u;
        // 0x4880c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4880CCu;
        goto label_4880cc;
    }
    ctx->pc = 0x4880C4u;
    SET_GPR_U32(ctx, 31, 0x4880CCu);
    ctx->pc = 0x4880C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4880C4u;
    // 0x4880c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488D08u, 0x4880C4u, 0x4880CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4880CCu;
label_4880cc:
    // 0x4880cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4880ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4880d0:
    // 0x4880d0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_4880d4:
    if (ctx->pc == 0x4880D4u) {
        ctx->pc = 0x4880D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880D0u;
        // 0x4880d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4880D8u;
        goto label_4880d8;
    }
    ctx->pc = 0x4880D0u;
    {
        const bool branch_taken_0x4880d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4880D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880D0u;
        // 0x4880d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4880d0) {
            ctx->pc = 0x4880E8u;
            goto label_4880e8;
        }
    }
    ctx->pc = 0x4880D8u;
label_4880d8:
    // 0x4880d8: 0xc121888  jal         func_486220
label_4880dc:
    if (ctx->pc == 0x4880DCu) {
        ctx->pc = 0x4880DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880D8u;
        // 0x4880dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4880E0u;
        goto label_4880e0;
    }
    ctx->pc = 0x4880D8u;
    SET_GPR_U32(ctx, 31, 0x4880E0u);
    ctx->pc = 0x4880DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4880D8u;
    // 0x4880dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x4880D8u, 0x4880E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4880E0u;
label_4880e0:
    // 0x4880e0: 0x1000000e  b           . + 4 + (0xE << 2)
label_4880e4:
    if (ctx->pc == 0x4880E4u) {
        ctx->pc = 0x4880E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880E0u;
        // 0x4880e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4880E8u;
        goto label_4880e8;
    }
    ctx->pc = 0x4880E0u;
    {
        const bool branch_taken_0x4880e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4880E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880E0u;
        // 0x4880e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4880e0) {
            ctx->pc = 0x48811Cu;
            goto label_48811c;
        }
    }
    ctx->pc = 0x4880E8u;
label_4880e8:
    // 0x4880e8: 0xc12228e  jal         func_488A38
label_4880ec:
    if (ctx->pc == 0x4880ECu) {
        ctx->pc = 0x4880ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880E8u;
        // 0x4880ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4880F0u;
        goto label_4880f0;
    }
    ctx->pc = 0x4880E8u;
    SET_GPR_U32(ctx, 31, 0x4880F0u);
    ctx->pc = 0x4880ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4880E8u;
    // 0x4880ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488A38u, 0x4880E8u, 0x4880F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4880F0u;
label_4880f0:
    // 0x4880f0: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_4880f4:
    if (ctx->pc == 0x4880F4u) {
        ctx->pc = 0x4880F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880F0u;
        // 0x4880f4: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4880F8u;
        goto label_4880f8;
    }
    ctx->pc = 0x4880F0u;
    {
        const bool branch_taken_0x4880f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4880F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880F0u;
        // 0x4880f4: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4880f0) {
            ctx->pc = 0x48810Cu;
            goto label_48810c;
        }
    }
    ctx->pc = 0x4880F8u;
label_4880f8:
    // 0x4880f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4880f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4880fc:
    // 0x4880fc: 0xc1222b6  jal         func_488AD8
label_488100:
    if (ctx->pc == 0x488100u) {
        ctx->pc = 0x488100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880FCu;
        // 0x488100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488104u;
        goto label_488104;
    }
    ctx->pc = 0x4880FCu;
    SET_GPR_U32(ctx, 31, 0x488104u);
    ctx->pc = 0x488100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4880FCu;
    // 0x488100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488AD8u, 0x4880FCu, 0x488104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488104u;
label_488104:
    // 0x488104: 0x10000005  b           . + 4 + (0x5 << 2)
label_488108:
    if (ctx->pc == 0x488108u) {
        ctx->pc = 0x488108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488104u;
        // 0x488108: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48810Cu;
        goto label_48810c;
    }
    ctx->pc = 0x488104u;
    {
        const bool branch_taken_0x488104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x488108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488104u;
        // 0x488108: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488104) {
            ctx->pc = 0x48811Cu;
            goto label_48811c;
        }
    }
    ctx->pc = 0x48810Cu;
label_48810c:
    // 0x48810c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48810cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_488110:
    // 0x488110: 0xc1222b6  jal         func_488AD8
label_488114:
    if (ctx->pc == 0x488114u) {
        ctx->pc = 0x488114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488110u;
        // 0x488114: 0x24a56d38  addiu       $a1, $a1, 0x6D38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488118u;
        goto label_488118;
    }
    ctx->pc = 0x488110u;
    SET_GPR_U32(ctx, 31, 0x488118u);
    ctx->pc = 0x488114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488110u;
    // 0x488114: 0x24a56d38  addiu       $a1, $a1, 0x6D38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488AD8u, 0x488110u, 0x488118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488118u;
label_488118:
    // 0x488118: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x488118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48811c:
    // 0x48811c: 0x7bb00700  lq          $s0, 0x700($sp)
    ctx->pc = 0x48811cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1792)));
label_488120:
    // 0x488120: 0x7bb106f0  lq          $s1, 0x6F0($sp)
    ctx->pc = 0x488120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1776)));
label_488124:
    // 0x488124: 0x7bb206e0  lq          $s2, 0x6E0($sp)
    ctx->pc = 0x488124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1760)));
label_488128:
    // 0x488128: 0x7bb306d0  lq          $s3, 0x6D0($sp)
    ctx->pc = 0x488128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1744)));
label_48812c:
    // 0x48812c: 0x7bb406c0  lq          $s4, 0x6C0($sp)
    ctx->pc = 0x48812cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1728)));
label_488130:
    // 0x488130: 0x7bb506b0  lq          $s5, 0x6B0($sp)
    ctx->pc = 0x488130u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1712)));
label_488134:
    // 0x488134: 0x7bb606a0  lq          $s6, 0x6A0($sp)
    ctx->pc = 0x488134u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1696)));
label_488138:
    // 0x488138: 0x7bb70690  lq          $s7, 0x690($sp)
    ctx->pc = 0x488138u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1680)));
label_48813c:
    // 0x48813c: 0x7bbe0680  lq          $fp, 0x680($sp)
    ctx->pc = 0x48813cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1664)));
label_488140:
    // 0x488140: 0xdfbf0670  ld          $ra, 0x670($sp)
    ctx->pc = 0x488140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
label_488144:
    // 0x488144: 0x3e00008  jr          $ra
label_488148:
    if (ctx->pc == 0x488148u) {
        ctx->pc = 0x488148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488144u;
        // 0x488148: 0x27bd0710  addiu       $sp, $sp, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48814Cu;
        goto label_48814c;
    }
    ctx->pc = 0x488144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488144u;
        // 0x488148: 0x27bd0710  addiu       $sp, $sp, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48814Cu;
label_48814c:
    // 0x48814c: 0x0  nop
    ctx->pc = 0x48814cu;
    // NOP
    ctx->pc = 0x488150u;
}
