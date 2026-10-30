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

// Function: sub_00173BD0
// Address: 0x173bd0 - 0x174200
void sub_00173BD0_0x173bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173BD0_0x173bd0");
#endif

    switch (ctx->pc) {
        case 0x173bd0u: goto label_173bd0;
        case 0x173bd4u: goto label_173bd4;
        case 0x173bd8u: goto label_173bd8;
        case 0x173bdcu: goto label_173bdc;
        case 0x173be0u: goto label_173be0;
        case 0x173be4u: goto label_173be4;
        case 0x173be8u: goto label_173be8;
        case 0x173becu: goto label_173bec;
        case 0x173bf0u: goto label_173bf0;
        case 0x173bf4u: goto label_173bf4;
        case 0x173bf8u: goto label_173bf8;
        case 0x173bfcu: goto label_173bfc;
        case 0x173c00u: goto label_173c00;
        case 0x173c04u: goto label_173c04;
        case 0x173c08u: goto label_173c08;
        case 0x173c0cu: goto label_173c0c;
        case 0x173c10u: goto label_173c10;
        case 0x173c14u: goto label_173c14;
        case 0x173c18u: goto label_173c18;
        case 0x173c1cu: goto label_173c1c;
        case 0x173c20u: goto label_173c20;
        case 0x173c24u: goto label_173c24;
        case 0x173c28u: goto label_173c28;
        case 0x173c2cu: goto label_173c2c;
        case 0x173c30u: goto label_173c30;
        case 0x173c34u: goto label_173c34;
        case 0x173c38u: goto label_173c38;
        case 0x173c3cu: goto label_173c3c;
        case 0x173c40u: goto label_173c40;
        case 0x173c44u: goto label_173c44;
        case 0x173c48u: goto label_173c48;
        case 0x173c4cu: goto label_173c4c;
        case 0x173c50u: goto label_173c50;
        case 0x173c54u: goto label_173c54;
        case 0x173c58u: goto label_173c58;
        case 0x173c5cu: goto label_173c5c;
        case 0x173c60u: goto label_173c60;
        case 0x173c64u: goto label_173c64;
        case 0x173c68u: goto label_173c68;
        case 0x173c6cu: goto label_173c6c;
        case 0x173c70u: goto label_173c70;
        case 0x173c74u: goto label_173c74;
        case 0x173c78u: goto label_173c78;
        case 0x173c7cu: goto label_173c7c;
        case 0x173c80u: goto label_173c80;
        case 0x173c84u: goto label_173c84;
        case 0x173c88u: goto label_173c88;
        case 0x173c8cu: goto label_173c8c;
        case 0x173c90u: goto label_173c90;
        case 0x173c94u: goto label_173c94;
        case 0x173c98u: goto label_173c98;
        case 0x173c9cu: goto label_173c9c;
        case 0x173ca0u: goto label_173ca0;
        case 0x173ca4u: goto label_173ca4;
        case 0x173ca8u: goto label_173ca8;
        case 0x173cacu: goto label_173cac;
        case 0x173cb0u: goto label_173cb0;
        case 0x173cb4u: goto label_173cb4;
        case 0x173cb8u: goto label_173cb8;
        case 0x173cbcu: goto label_173cbc;
        case 0x173cc0u: goto label_173cc0;
        case 0x173cc4u: goto label_173cc4;
        case 0x173cc8u: goto label_173cc8;
        case 0x173cccu: goto label_173ccc;
        case 0x173cd0u: goto label_173cd0;
        case 0x173cd4u: goto label_173cd4;
        case 0x173cd8u: goto label_173cd8;
        case 0x173cdcu: goto label_173cdc;
        case 0x173ce0u: goto label_173ce0;
        case 0x173ce4u: goto label_173ce4;
        case 0x173ce8u: goto label_173ce8;
        case 0x173cecu: goto label_173cec;
        case 0x173cf0u: goto label_173cf0;
        case 0x173cf4u: goto label_173cf4;
        case 0x173cf8u: goto label_173cf8;
        case 0x173cfcu: goto label_173cfc;
        case 0x173d00u: goto label_173d00;
        case 0x173d04u: goto label_173d04;
        case 0x173d08u: goto label_173d08;
        case 0x173d0cu: goto label_173d0c;
        case 0x173d10u: goto label_173d10;
        case 0x173d14u: goto label_173d14;
        case 0x173d18u: goto label_173d18;
        case 0x173d1cu: goto label_173d1c;
        case 0x173d20u: goto label_173d20;
        case 0x173d24u: goto label_173d24;
        case 0x173d28u: goto label_173d28;
        case 0x173d2cu: goto label_173d2c;
        case 0x173d30u: goto label_173d30;
        case 0x173d34u: goto label_173d34;
        case 0x173d38u: goto label_173d38;
        case 0x173d3cu: goto label_173d3c;
        case 0x173d40u: goto label_173d40;
        case 0x173d44u: goto label_173d44;
        case 0x173d48u: goto label_173d48;
        case 0x173d4cu: goto label_173d4c;
        case 0x173d50u: goto label_173d50;
        case 0x173d54u: goto label_173d54;
        case 0x173d58u: goto label_173d58;
        case 0x173d5cu: goto label_173d5c;
        case 0x173d60u: goto label_173d60;
        case 0x173d64u: goto label_173d64;
        case 0x173d68u: goto label_173d68;
        case 0x173d6cu: goto label_173d6c;
        case 0x173d70u: goto label_173d70;
        case 0x173d74u: goto label_173d74;
        case 0x173d78u: goto label_173d78;
        case 0x173d7cu: goto label_173d7c;
        case 0x173d80u: goto label_173d80;
        case 0x173d84u: goto label_173d84;
        case 0x173d88u: goto label_173d88;
        case 0x173d8cu: goto label_173d8c;
        case 0x173d90u: goto label_173d90;
        case 0x173d94u: goto label_173d94;
        case 0x173d98u: goto label_173d98;
        case 0x173d9cu: goto label_173d9c;
        case 0x173da0u: goto label_173da0;
        case 0x173da4u: goto label_173da4;
        case 0x173da8u: goto label_173da8;
        case 0x173dacu: goto label_173dac;
        case 0x173db0u: goto label_173db0;
        case 0x173db4u: goto label_173db4;
        case 0x173db8u: goto label_173db8;
        case 0x173dbcu: goto label_173dbc;
        case 0x173dc0u: goto label_173dc0;
        case 0x173dc4u: goto label_173dc4;
        case 0x173dc8u: goto label_173dc8;
        case 0x173dccu: goto label_173dcc;
        case 0x173dd0u: goto label_173dd0;
        case 0x173dd4u: goto label_173dd4;
        case 0x173dd8u: goto label_173dd8;
        case 0x173ddcu: goto label_173ddc;
        case 0x173de0u: goto label_173de0;
        case 0x173de4u: goto label_173de4;
        case 0x173de8u: goto label_173de8;
        case 0x173decu: goto label_173dec;
        case 0x173df0u: goto label_173df0;
        case 0x173df4u: goto label_173df4;
        case 0x173df8u: goto label_173df8;
        case 0x173dfcu: goto label_173dfc;
        case 0x173e00u: goto label_173e00;
        case 0x173e04u: goto label_173e04;
        case 0x173e08u: goto label_173e08;
        case 0x173e0cu: goto label_173e0c;
        case 0x173e10u: goto label_173e10;
        case 0x173e14u: goto label_173e14;
        case 0x173e18u: goto label_173e18;
        case 0x173e1cu: goto label_173e1c;
        case 0x173e20u: goto label_173e20;
        case 0x173e24u: goto label_173e24;
        case 0x173e28u: goto label_173e28;
        case 0x173e2cu: goto label_173e2c;
        case 0x173e30u: goto label_173e30;
        case 0x173e34u: goto label_173e34;
        case 0x173e38u: goto label_173e38;
        case 0x173e3cu: goto label_173e3c;
        case 0x173e40u: goto label_173e40;
        case 0x173e44u: goto label_173e44;
        case 0x173e48u: goto label_173e48;
        case 0x173e4cu: goto label_173e4c;
        case 0x173e50u: goto label_173e50;
        case 0x173e54u: goto label_173e54;
        case 0x173e58u: goto label_173e58;
        case 0x173e5cu: goto label_173e5c;
        case 0x173e60u: goto label_173e60;
        case 0x173e64u: goto label_173e64;
        case 0x173e68u: goto label_173e68;
        case 0x173e6cu: goto label_173e6c;
        case 0x173e70u: goto label_173e70;
        case 0x173e74u: goto label_173e74;
        case 0x173e78u: goto label_173e78;
        case 0x173e7cu: goto label_173e7c;
        case 0x173e80u: goto label_173e80;
        case 0x173e84u: goto label_173e84;
        case 0x173e88u: goto label_173e88;
        case 0x173e8cu: goto label_173e8c;
        case 0x173e90u: goto label_173e90;
        case 0x173e94u: goto label_173e94;
        case 0x173e98u: goto label_173e98;
        case 0x173e9cu: goto label_173e9c;
        case 0x173ea0u: goto label_173ea0;
        case 0x173ea4u: goto label_173ea4;
        case 0x173ea8u: goto label_173ea8;
        case 0x173eacu: goto label_173eac;
        case 0x173eb0u: goto label_173eb0;
        case 0x173eb4u: goto label_173eb4;
        case 0x173eb8u: goto label_173eb8;
        case 0x173ebcu: goto label_173ebc;
        case 0x173ec0u: goto label_173ec0;
        case 0x173ec4u: goto label_173ec4;
        case 0x173ec8u: goto label_173ec8;
        case 0x173eccu: goto label_173ecc;
        case 0x173ed0u: goto label_173ed0;
        case 0x173ed4u: goto label_173ed4;
        case 0x173ed8u: goto label_173ed8;
        case 0x173edcu: goto label_173edc;
        case 0x173ee0u: goto label_173ee0;
        case 0x173ee4u: goto label_173ee4;
        case 0x173ee8u: goto label_173ee8;
        case 0x173eecu: goto label_173eec;
        case 0x173ef0u: goto label_173ef0;
        case 0x173ef4u: goto label_173ef4;
        case 0x173ef8u: goto label_173ef8;
        case 0x173efcu: goto label_173efc;
        case 0x173f00u: goto label_173f00;
        case 0x173f04u: goto label_173f04;
        case 0x173f08u: goto label_173f08;
        case 0x173f0cu: goto label_173f0c;
        case 0x173f10u: goto label_173f10;
        case 0x173f14u: goto label_173f14;
        case 0x173f18u: goto label_173f18;
        case 0x173f1cu: goto label_173f1c;
        case 0x173f20u: goto label_173f20;
        case 0x173f24u: goto label_173f24;
        case 0x173f28u: goto label_173f28;
        case 0x173f2cu: goto label_173f2c;
        case 0x173f30u: goto label_173f30;
        case 0x173f34u: goto label_173f34;
        case 0x173f38u: goto label_173f38;
        case 0x173f3cu: goto label_173f3c;
        case 0x173f40u: goto label_173f40;
        case 0x173f44u: goto label_173f44;
        case 0x173f48u: goto label_173f48;
        case 0x173f4cu: goto label_173f4c;
        case 0x173f50u: goto label_173f50;
        case 0x173f54u: goto label_173f54;
        case 0x173f58u: goto label_173f58;
        case 0x173f5cu: goto label_173f5c;
        case 0x173f60u: goto label_173f60;
        case 0x173f64u: goto label_173f64;
        case 0x173f68u: goto label_173f68;
        case 0x173f6cu: goto label_173f6c;
        case 0x173f70u: goto label_173f70;
        case 0x173f74u: goto label_173f74;
        case 0x173f78u: goto label_173f78;
        case 0x173f7cu: goto label_173f7c;
        case 0x173f80u: goto label_173f80;
        case 0x173f84u: goto label_173f84;
        case 0x173f88u: goto label_173f88;
        case 0x173f8cu: goto label_173f8c;
        case 0x173f90u: goto label_173f90;
        case 0x173f94u: goto label_173f94;
        case 0x173f98u: goto label_173f98;
        case 0x173f9cu: goto label_173f9c;
        case 0x173fa0u: goto label_173fa0;
        case 0x173fa4u: goto label_173fa4;
        case 0x173fa8u: goto label_173fa8;
        case 0x173facu: goto label_173fac;
        case 0x173fb0u: goto label_173fb0;
        case 0x173fb4u: goto label_173fb4;
        case 0x173fb8u: goto label_173fb8;
        case 0x173fbcu: goto label_173fbc;
        case 0x173fc0u: goto label_173fc0;
        case 0x173fc4u: goto label_173fc4;
        case 0x173fc8u: goto label_173fc8;
        case 0x173fccu: goto label_173fcc;
        case 0x173fd0u: goto label_173fd0;
        case 0x173fd4u: goto label_173fd4;
        case 0x173fd8u: goto label_173fd8;
        case 0x173fdcu: goto label_173fdc;
        case 0x173fe0u: goto label_173fe0;
        case 0x173fe4u: goto label_173fe4;
        case 0x173fe8u: goto label_173fe8;
        case 0x173fecu: goto label_173fec;
        case 0x173ff0u: goto label_173ff0;
        case 0x173ff4u: goto label_173ff4;
        case 0x173ff8u: goto label_173ff8;
        case 0x173ffcu: goto label_173ffc;
        case 0x174000u: goto label_174000;
        case 0x174004u: goto label_174004;
        case 0x174008u: goto label_174008;
        case 0x17400cu: goto label_17400c;
        case 0x174010u: goto label_174010;
        case 0x174014u: goto label_174014;
        case 0x174018u: goto label_174018;
        case 0x17401cu: goto label_17401c;
        case 0x174020u: goto label_174020;
        case 0x174024u: goto label_174024;
        case 0x174028u: goto label_174028;
        case 0x17402cu: goto label_17402c;
        case 0x174030u: goto label_174030;
        case 0x174034u: goto label_174034;
        case 0x174038u: goto label_174038;
        case 0x17403cu: goto label_17403c;
        case 0x174040u: goto label_174040;
        case 0x174044u: goto label_174044;
        case 0x174048u: goto label_174048;
        case 0x17404cu: goto label_17404c;
        case 0x174050u: goto label_174050;
        case 0x174054u: goto label_174054;
        case 0x174058u: goto label_174058;
        case 0x17405cu: goto label_17405c;
        case 0x174060u: goto label_174060;
        case 0x174064u: goto label_174064;
        case 0x174068u: goto label_174068;
        case 0x17406cu: goto label_17406c;
        case 0x174070u: goto label_174070;
        case 0x174074u: goto label_174074;
        case 0x174078u: goto label_174078;
        case 0x17407cu: goto label_17407c;
        case 0x174080u: goto label_174080;
        case 0x174084u: goto label_174084;
        case 0x174088u: goto label_174088;
        case 0x17408cu: goto label_17408c;
        case 0x174090u: goto label_174090;
        case 0x174094u: goto label_174094;
        case 0x174098u: goto label_174098;
        case 0x17409cu: goto label_17409c;
        case 0x1740a0u: goto label_1740a0;
        case 0x1740a4u: goto label_1740a4;
        case 0x1740a8u: goto label_1740a8;
        case 0x1740acu: goto label_1740ac;
        case 0x1740b0u: goto label_1740b0;
        case 0x1740b4u: goto label_1740b4;
        case 0x1740b8u: goto label_1740b8;
        case 0x1740bcu: goto label_1740bc;
        case 0x1740c0u: goto label_1740c0;
        case 0x1740c4u: goto label_1740c4;
        case 0x1740c8u: goto label_1740c8;
        case 0x1740ccu: goto label_1740cc;
        case 0x1740d0u: goto label_1740d0;
        case 0x1740d4u: goto label_1740d4;
        case 0x1740d8u: goto label_1740d8;
        case 0x1740dcu: goto label_1740dc;
        case 0x1740e0u: goto label_1740e0;
        case 0x1740e4u: goto label_1740e4;
        case 0x1740e8u: goto label_1740e8;
        case 0x1740ecu: goto label_1740ec;
        case 0x1740f0u: goto label_1740f0;
        case 0x1740f4u: goto label_1740f4;
        case 0x1740f8u: goto label_1740f8;
        case 0x1740fcu: goto label_1740fc;
        case 0x174100u: goto label_174100;
        case 0x174104u: goto label_174104;
        case 0x174108u: goto label_174108;
        case 0x17410cu: goto label_17410c;
        case 0x174110u: goto label_174110;
        case 0x174114u: goto label_174114;
        case 0x174118u: goto label_174118;
        case 0x17411cu: goto label_17411c;
        case 0x174120u: goto label_174120;
        case 0x174124u: goto label_174124;
        case 0x174128u: goto label_174128;
        case 0x17412cu: goto label_17412c;
        case 0x174130u: goto label_174130;
        case 0x174134u: goto label_174134;
        case 0x174138u: goto label_174138;
        case 0x17413cu: goto label_17413c;
        case 0x174140u: goto label_174140;
        case 0x174144u: goto label_174144;
        case 0x174148u: goto label_174148;
        case 0x17414cu: goto label_17414c;
        case 0x174150u: goto label_174150;
        case 0x174154u: goto label_174154;
        case 0x174158u: goto label_174158;
        case 0x17415cu: goto label_17415c;
        case 0x174160u: goto label_174160;
        case 0x174164u: goto label_174164;
        case 0x174168u: goto label_174168;
        case 0x17416cu: goto label_17416c;
        case 0x174170u: goto label_174170;
        case 0x174174u: goto label_174174;
        case 0x174178u: goto label_174178;
        case 0x17417cu: goto label_17417c;
        case 0x174180u: goto label_174180;
        case 0x174184u: goto label_174184;
        case 0x174188u: goto label_174188;
        case 0x17418cu: goto label_17418c;
        case 0x174190u: goto label_174190;
        case 0x174194u: goto label_174194;
        case 0x174198u: goto label_174198;
        case 0x17419cu: goto label_17419c;
        case 0x1741a0u: goto label_1741a0;
        case 0x1741a4u: goto label_1741a4;
        case 0x1741a8u: goto label_1741a8;
        case 0x1741acu: goto label_1741ac;
        case 0x1741b0u: goto label_1741b0;
        case 0x1741b4u: goto label_1741b4;
        case 0x1741b8u: goto label_1741b8;
        case 0x1741bcu: goto label_1741bc;
        case 0x1741c0u: goto label_1741c0;
        case 0x1741c4u: goto label_1741c4;
        case 0x1741c8u: goto label_1741c8;
        case 0x1741ccu: goto label_1741cc;
        case 0x1741d0u: goto label_1741d0;
        case 0x1741d4u: goto label_1741d4;
        case 0x1741d8u: goto label_1741d8;
        case 0x1741dcu: goto label_1741dc;
        case 0x1741e0u: goto label_1741e0;
        case 0x1741e4u: goto label_1741e4;
        case 0x1741e8u: goto label_1741e8;
        case 0x1741ecu: goto label_1741ec;
        case 0x1741f0u: goto label_1741f0;
        case 0x1741f4u: goto label_1741f4;
        case 0x1741f8u: goto label_1741f8;
        case 0x1741fcu: goto label_1741fc;
        default: break;
    }

    ctx->pc = 0x173bd0u;

label_173bd0:
    // 0x173bd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x173bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_173bd4:
    // 0x173bd4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x173bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_173bd8:
    // 0x173bd8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x173bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_173bdc:
    // 0x173bdc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x173bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_173be0:
    // 0x173be0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x173be0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173be4:
    // 0x173be4: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x173be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_173be8:
    // 0x173be8: 0x26930020  addiu       $s3, $s4, 0x20
    ctx->pc = 0x173be8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_173bec:
    // 0x173bec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_173bf0:
    // 0x173bf0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x173bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_173bf4:
    // 0x173bf4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x173bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_173bf8:
    // 0x173bf8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x173bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_173bfc:
    // 0x173bfc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x173bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_173c00:
    // 0x173c00: 0xc137a1a  jal         func_4DE868
label_173c04:
    if (ctx->pc == 0x173C04u) {
        ctx->pc = 0x173C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C00u;
        // 0x173c04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C08u;
        goto label_173c08;
    }
    ctx->pc = 0x173C00u;
    SET_GPR_U32(ctx, 31, 0x173C08u);
    ctx->pc = 0x173C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173C00u;
    // 0x173c04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE868u, 0x173C00u, 0x173C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173C08u;
label_173c08:
    // 0x173c08: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x173c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_173c0c:
    // 0x173c0c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x173c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_173c10:
    // 0x173c10: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_173c14:
    if (ctx->pc == 0x173C14u) {
        ctx->pc = 0x173C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C10u;
        // 0x173c14: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C18u;
        goto label_173c18;
    }
    ctx->pc = 0x173C10u;
    {
        const bool branch_taken_0x173c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x173C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C10u;
        // 0x173c14: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c10) {
            ctx->pc = 0x173C28u;
            goto label_173c28;
        }
    }
    ctx->pc = 0x173C18u;
label_173c18:
    // 0x173c18: 0x8c920014  lw          $s2, 0x14($a0)
    ctx->pc = 0x173c18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_173c1c:
    // 0x173c1c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x173c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_173c20:
    // 0x173c20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_173c24:
    if (ctx->pc == 0x173C24u) {
        ctx->pc = 0x173C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C20u;
        // 0x173c24: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C28u;
        goto label_173c28;
    }
    ctx->pc = 0x173C20u;
    {
        const bool branch_taken_0x173c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C20u;
        // 0x173c24: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c20) {
            ctx->pc = 0x173C30u;
            goto label_173c30;
        }
    }
    ctx->pc = 0x173C28u;
label_173c28:
    // 0x173c28: 0x1000016d  b           . + 4 + (0x16D << 2)
label_173c2c:
    if (ctx->pc == 0x173C2Cu) {
        ctx->pc = 0x173C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C28u;
        // 0x173c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C30u;
        goto label_173c30;
    }
    ctx->pc = 0x173C28u;
    {
        const bool branch_taken_0x173c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C28u;
        // 0x173c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c28) {
            ctx->pc = 0x1741E0u;
            goto label_1741e0;
        }
    }
    ctx->pc = 0x173C30u;
label_173c30:
    // 0x173c30: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x173c30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_173c34:
    // 0x173c34: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x173c34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_173c38:
    // 0x173c38: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x173c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_173c3c:
    // 0x173c3c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x173c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_173c40:
    // 0x173c40: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x173c40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_173c44:
    // 0x173c44: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x173c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_173c48:
    // 0x173c48: 0x60f809  jalr        $v1
label_173c4c:
    if (ctx->pc == 0x173C4Cu) {
        ctx->pc = 0x173C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C48u;
        // 0x173c4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C50u;
        goto label_173c50;
    }
    ctx->pc = 0x173C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x173C50u);
        ctx->pc = 0x173C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C48u;
        // 0x173c4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173C48u, 0x173C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173C50u;
label_173c50:
    // 0x173c50: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x173c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_173c54:
    // 0x173c54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x173c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_173c58:
    // 0x173c58: 0x2406007e  addiu       $a2, $zero, 0x7E
    ctx->pc = 0x173c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_173c5c:
    // 0x173c5c: 0xc137a72  jal         func_4DE9C8
label_173c60:
    if (ctx->pc == 0x173C60u) {
        ctx->pc = 0x173C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C5Cu;
        // 0x173c60: 0x24a51bf8  addiu       $a1, $a1, 0x1BF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C64u;
        goto label_173c64;
    }
    ctx->pc = 0x173C5Cu;
    SET_GPR_U32(ctx, 31, 0x173C64u);
    ctx->pc = 0x173C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173C5Cu;
    // 0x173c60: 0x24a51bf8  addiu       $a1, $a1, 0x1BF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE9C8u, 0x173C5Cu, 0x173C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173C64u;
label_173c64:
    // 0x173c64: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x173c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_173c68:
    // 0x173c68: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x173c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_173c6c:
    // 0x173c6c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x173c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_173c70:
    // 0x173c70: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x173c70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_173c74:
    // 0x173c74: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x173c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_173c78:
    // 0x173c78: 0x60f809  jalr        $v1
label_173c7c:
    if (ctx->pc == 0x173C7Cu) {
        ctx->pc = 0x173C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C78u;
        // 0x173c7c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C80u;
        goto label_173c80;
    }
    ctx->pc = 0x173C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x173C80u);
        ctx->pc = 0x173C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C78u;
        // 0x173c7c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173C78u, 0x173C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173C80u;
label_173c80:
    // 0x173c80: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x173c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_173c84:
    // 0x173c84: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x173c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_173c88:
    // 0x173c88: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x173c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_173c8c:
    // 0x173c8c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x173c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_173c90:
    // 0x173c90: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x173c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_173c94:
    // 0x173c94: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x173c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_173c98:
    // 0x173c98: 0x2448000c  addiu       $t0, $v0, 0xC
    ctx->pc = 0x173c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_173c9c:
    // 0x173c9c: 0x244a0004  addiu       $t2, $v0, 0x4
    ctx->pc = 0x173c9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_173ca0:
    // 0x173ca0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_173ca4:
    if (ctx->pc == 0x173CA4u) {
        ctx->pc = 0x173CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CA0u;
        // 0x173ca4: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173CA8u;
        goto label_173ca8;
    }
    ctx->pc = 0x173CA0u;
    {
        const bool branch_taken_0x173ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x173CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CA0u;
        // 0x173ca4: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ca0) {
            ctx->pc = 0x173CE8u;
            goto label_173ce8;
        }
    }
    ctx->pc = 0x173CA8u;
label_173ca8:
    // 0x173ca8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x173ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_173cac:
    // 0x173cac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_173cb0:
    if (ctx->pc == 0x173CB0u) {
        ctx->pc = 0x173CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CACu;
        // 0x173cb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173CB4u;
        goto label_173cb4;
    }
    ctx->pc = 0x173CACu;
    {
        const bool branch_taken_0x173cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173cac) {
            ctx->pc = 0x173CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173CACu;
            // 0x173cb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173CBCu;
            goto label_173cbc;
        }
    }
    ctx->pc = 0x173CB4u;
label_173cb4:
    // 0x173cb4: 0x1000000d  b           . + 4 + (0xD << 2)
label_173cb8:
    if (ctx->pc == 0x173CB8u) {
        ctx->pc = 0x173CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CB4u;
        // 0x173cb8: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173CBCu;
        goto label_173cbc;
    }
    ctx->pc = 0x173CB4u;
    {
        const bool branch_taken_0x173cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CB4u;
        // 0x173cb8: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173cb4) {
            ctx->pc = 0x173CECu;
            goto label_173cec;
        }
    }
    ctx->pc = 0x173CBCu;
label_173cbc:
    // 0x173cbc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x173cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_173cc0:
    // 0x173cc0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_173cc4:
    if (ctx->pc == 0x173CC4u) {
        ctx->pc = 0x173CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CC0u;
        // 0x173cc4: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173CC8u;
        goto label_173cc8;
    }
    ctx->pc = 0x173CC0u;
    {
        const bool branch_taken_0x173cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173cc0) {
            ctx->pc = 0x173CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173CC0u;
            // 0x173cc4: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173CECu;
            goto label_173cec;
        }
    }
    ctx->pc = 0x173CC8u;
label_173cc8:
    // 0x173cc8: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x173cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_173ccc:
    // 0x173ccc: 0x0  nop
    ctx->pc = 0x173cccu;
    // NOP
label_173cd0:
    // 0x173cd0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x173cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_173cd4:
    // 0x173cd4: 0x0  nop
    ctx->pc = 0x173cd4u;
    // NOP
label_173cd8:
    // 0x173cd8: 0x0  nop
    ctx->pc = 0x173cd8u;
    // NOP
label_173cdc:
    // 0x173cdc: 0x0  nop
    ctx->pc = 0x173cdcu;
    // NOP
label_173ce0:
    // 0x173ce0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_173ce4:
    if (ctx->pc == 0x173CE4u) {
        ctx->pc = 0x173CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CE0u;
        // 0x173ce4: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173CE8u;
        goto label_173ce8;
    }
    ctx->pc = 0x173CE0u;
    {
        const bool branch_taken_0x173ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173ce0) {
            ctx->pc = 0x173CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173CE0u;
            // 0x173ce4: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173cd0;
        }
    }
    ctx->pc = 0x173CE8u;
label_173ce8:
    // 0x173ce8: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x173ce8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_173cec:
    // 0x173cec: 0x10a60022  beq         $a1, $a2, . + 4 + (0x22 << 2)
label_173cf0:
    if (ctx->pc == 0x173CF0u) {
        ctx->pc = 0x173CF4u;
        goto label_173cf4;
    }
    ctx->pc = 0x173CECu;
    {
        const bool branch_taken_0x173cec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x173cec) {
            ctx->pc = 0x173D78u;
            goto label_173d78;
        }
    }
    ctx->pc = 0x173CF4u;
label_173cf4:
    // 0x173cf4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x173cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_173cf8:
    // 0x173cf8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x173cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_173cfc:
    // 0x173cfc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x173cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_173d00:
    // 0x173d00: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x173d00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_173d04:
    // 0x173d04: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x173d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_173d08:
    // 0x173d08: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_173d0c:
    if (ctx->pc == 0x173D0Cu) {
        ctx->pc = 0x173D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D08u;
        // 0x173d0c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D10u;
        goto label_173d10;
    }
    ctx->pc = 0x173D08u;
    {
        const bool branch_taken_0x173d08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x173D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D08u;
        // 0x173d0c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d08) {
            ctx->pc = 0x173D34u;
            goto label_173d34;
        }
    }
    ctx->pc = 0x173D10u;
label_173d10:
    // 0x173d10: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_173d14:
    if (ctx->pc == 0x173D14u) {
        ctx->pc = 0x173D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D10u;
        // 0x173d14: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D18u;
        goto label_173d18;
    }
    ctx->pc = 0x173D10u;
    {
        const bool branch_taken_0x173d10 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D10u;
        // 0x173d14: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d10) {
            ctx->pc = 0x173D1Cu;
            goto label_173d1c;
        }
    }
    ctx->pc = 0x173D18u;
label_173d18:
    // 0x173d18: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x173d18u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_173d1c:
    // 0x173d1c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x173d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_173d20:
    // 0x173d20: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x173d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
label_173d24:
    // 0x173d24: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x173d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_173d28:
    // 0x173d28: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x173d28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_173d2c:
    // 0x173d2c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x173d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_173d30:
    // 0x173d30: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x173d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_173d34:
    // 0x173d34: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x173d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_173d38:
    // 0x173d38: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
label_173d3c:
    if (ctx->pc == 0x173D3Cu) {
        ctx->pc = 0x173D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D38u;
        // 0x173d3c: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D40u;
        goto label_173d40;
    }
    ctx->pc = 0x173D38u;
    {
        const bool branch_taken_0x173d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x173d38) {
            ctx->pc = 0x173D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173D38u;
            // 0x173d3c: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173D48u;
            goto label_173d48;
        }
    }
    ctx->pc = 0x173D40u;
label_173d40:
    // 0x173d40: 0x10000005  b           . + 4 + (0x5 << 2)
label_173d44:
    if (ctx->pc == 0x173D44u) {
        ctx->pc = 0x173D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D40u;
        // 0x173d44: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D48u;
        goto label_173d48;
    }
    ctx->pc = 0x173D40u;
    {
        const bool branch_taken_0x173d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D40u;
        // 0x173d44: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d40) {
            ctx->pc = 0x173D58u;
            goto label_173d58;
        }
    }
    ctx->pc = 0x173D48u;
label_173d48:
    // 0x173d48: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x173d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_173d4c:
    // 0x173d4c: 0x54460002  bnel        $v0, $a2, . + 4 + (0x2 << 2)
label_173d50:
    if (ctx->pc == 0x173D50u) {
        ctx->pc = 0x173D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D4Cu;
        // 0x173d50: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D54u;
        goto label_173d54;
    }
    ctx->pc = 0x173D4Cu;
    {
        const bool branch_taken_0x173d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x173d4c) {
            ctx->pc = 0x173D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173D4Cu;
            // 0x173d50: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173D58u;
            goto label_173d58;
        }
    }
    ctx->pc = 0x173D54u;
label_173d54:
    // 0x173d54: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x173d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_173d58:
    // 0x173d58: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x173d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_173d5c:
    // 0x173d5c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x173d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_173d60:
    // 0x173d60: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x173d60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_173d64:
    // 0x173d64: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x173d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_173d68:
    // 0x173d68: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x173d68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_173d6c:
    // 0x173d6c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x173d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_173d70:
    // 0x173d70: 0x10000034  b           . + 4 + (0x34 << 2)
label_173d74:
    if (ctx->pc == 0x173D74u) {
        ctx->pc = 0x173D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D70u;
        // 0x173d74: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D78u;
        goto label_173d78;
    }
    ctx->pc = 0x173D70u;
    {
        const bool branch_taken_0x173d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D70u;
        // 0x173d74: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d70) {
            ctx->pc = 0x173E44u;
            goto label_173e44;
        }
    }
    ctx->pc = 0x173D78u;
label_173d78:
    // 0x173d78: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_173d7c:
    if (ctx->pc == 0x173D7Cu) {
        ctx->pc = 0x173D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D78u;
        // 0x173d7c: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D80u;
        goto label_173d80;
    }
    ctx->pc = 0x173D78u;
    {
        const bool branch_taken_0x173d78 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D78u;
        // 0x173d7c: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d78) {
            ctx->pc = 0x173D84u;
            goto label_173d84;
        }
    }
    ctx->pc = 0x173D80u;
label_173d80:
    // 0x173d80: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x173d80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_173d84:
    // 0x173d84: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x173d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_173d88:
    // 0x173d88: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
label_173d8c:
    if (ctx->pc == 0x173D8Cu) {
        ctx->pc = 0x173D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D88u;
        // 0x173d8c: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D90u;
        goto label_173d90;
    }
    ctx->pc = 0x173D88u;
    {
        const bool branch_taken_0x173d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x173d88) {
            ctx->pc = 0x173D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173D88u;
            // 0x173d8c: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173D98u;
            goto label_173d98;
        }
    }
    ctx->pc = 0x173D90u;
label_173d90:
    // 0x173d90: 0x10000005  b           . + 4 + (0x5 << 2)
label_173d94:
    if (ctx->pc == 0x173D94u) {
        ctx->pc = 0x173D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D90u;
        // 0x173d94: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D98u;
        goto label_173d98;
    }
    ctx->pc = 0x173D90u;
    {
        const bool branch_taken_0x173d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D90u;
        // 0x173d94: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d90) {
            ctx->pc = 0x173DA8u;
            goto label_173da8;
        }
    }
    ctx->pc = 0x173D98u;
label_173d98:
    // 0x173d98: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x173d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_173d9c:
    // 0x173d9c: 0x54450002  bnel        $v0, $a1, . + 4 + (0x2 << 2)
label_173da0:
    if (ctx->pc == 0x173DA0u) {
        ctx->pc = 0x173DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D9Cu;
        // 0x173da0: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DA4u;
        goto label_173da4;
    }
    ctx->pc = 0x173D9Cu;
    {
        const bool branch_taken_0x173d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x173d9c) {
            ctx->pc = 0x173DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173D9Cu;
            // 0x173da0: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173DA8u;
            goto label_173da8;
        }
    }
    ctx->pc = 0x173DA4u;
label_173da4:
    // 0x173da4: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x173da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
label_173da8:
    // 0x173da8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x173da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173dac:
    // 0x173dac: 0x54460012  bnel        $v0, $a2, . + 4 + (0x12 << 2)
label_173db0:
    if (ctx->pc == 0x173DB0u) {
        ctx->pc = 0x173DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DACu;
        // 0x173db0: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DB4u;
        goto label_173db4;
    }
    ctx->pc = 0x173DACu;
    {
        const bool branch_taken_0x173dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x173dac) {
            ctx->pc = 0x173DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173DACu;
            // 0x173db0: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173DF8u;
            goto label_173df8;
        }
    }
    ctx->pc = 0x173DB4u;
label_173db4:
    // 0x173db4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x173db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_173db8:
    // 0x173db8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_173dbc:
    if (ctx->pc == 0x173DBCu) {
        ctx->pc = 0x173DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DB8u;
        // 0x173dbc: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DC0u;
        goto label_173dc0;
    }
    ctx->pc = 0x173DB8u;
    {
        const bool branch_taken_0x173db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173db8) {
            ctx->pc = 0x173DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173DB8u;
            // 0x173dbc: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173DCCu;
            goto label_173dcc;
        }
    }
    ctx->pc = 0x173DC0u;
label_173dc0:
    // 0x173dc0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x173dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_173dc4:
    // 0x173dc4: 0x1000000b  b           . + 4 + (0xB << 2)
label_173dc8:
    if (ctx->pc == 0x173DC8u) {
        ctx->pc = 0x173DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DC4u;
        // 0x173dc8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DCCu;
        goto label_173dcc;
    }
    ctx->pc = 0x173DC4u;
    {
        const bool branch_taken_0x173dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DC4u;
        // 0x173dc8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173dc4) {
            ctx->pc = 0x173DF4u;
            goto label_173df4;
        }
    }
    ctx->pc = 0x173DCCu;
label_173dcc:
    // 0x173dcc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_173dd0:
    if (ctx->pc == 0x173DD0u) {
        ctx->pc = 0x173DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DCCu;
        // 0x173dd0: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DD4u;
        goto label_173dd4;
    }
    ctx->pc = 0x173DCCu;
    {
        const bool branch_taken_0x173dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DCCu;
        // 0x173dd0: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173dcc) {
            ctx->pc = 0x173DF0u;
            goto label_173df0;
        }
    }
    ctx->pc = 0x173DD4u;
label_173dd4:
    // 0x173dd4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x173dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_173dd8:
    // 0x173dd8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x173dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_173ddc:
    // 0x173ddc: 0x0  nop
    ctx->pc = 0x173ddcu;
    // NOP
label_173de0:
    // 0x173de0: 0x0  nop
    ctx->pc = 0x173de0u;
    // NOP
label_173de4:
    // 0x173de4: 0x0  nop
    ctx->pc = 0x173de4u;
    // NOP
label_173de8:
    // 0x173de8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_173dec:
    if (ctx->pc == 0x173DECu) {
        ctx->pc = 0x173DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DE8u;
        // 0x173dec: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DF0u;
        goto label_173df0;
    }
    ctx->pc = 0x173DE8u;
    {
        const bool branch_taken_0x173de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173de8) {
            ctx->pc = 0x173DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173DE8u;
            // 0x173dec: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173dd8;
        }
    }
    ctx->pc = 0x173DF0u;
label_173df0:
    // 0x173df0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x173df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_173df4:
    // 0x173df4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x173df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_173df8:
    // 0x173df8: 0x54460013  bnel        $v0, $a2, . + 4 + (0x13 << 2)
label_173dfc:
    if (ctx->pc == 0x173DFCu) {
        ctx->pc = 0x173DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DF8u;
        // 0x173dfc: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E00u;
        goto label_173e00;
    }
    ctx->pc = 0x173DF8u;
    {
        const bool branch_taken_0x173df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x173df8) {
            ctx->pc = 0x173DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173DF8u;
            // 0x173dfc: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173E48u;
            goto label_173e48;
        }
    }
    ctx->pc = 0x173E00u;
label_173e00:
    // 0x173e00: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x173e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_173e04:
    // 0x173e04: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_173e08:
    if (ctx->pc == 0x173E08u) {
        ctx->pc = 0x173E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E04u;
        // 0x173e08: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E0Cu;
        goto label_173e0c;
    }
    ctx->pc = 0x173E04u;
    {
        const bool branch_taken_0x173e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173e04) {
            ctx->pc = 0x173E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173E04u;
            // 0x173e08: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173E18u;
            goto label_173e18;
        }
    }
    ctx->pc = 0x173E0Cu;
label_173e0c:
    // 0x173e0c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x173e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_173e10:
    // 0x173e10: 0x1000000c  b           . + 4 + (0xC << 2)
label_173e14:
    if (ctx->pc == 0x173E14u) {
        ctx->pc = 0x173E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E10u;
        // 0x173e14: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E18u;
        goto label_173e18;
    }
    ctx->pc = 0x173E10u;
    {
        const bool branch_taken_0x173e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E10u;
        // 0x173e14: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e10) {
            ctx->pc = 0x173E44u;
            goto label_173e44;
        }
    }
    ctx->pc = 0x173E18u;
label_173e18:
    // 0x173e18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_173e1c:
    if (ctx->pc == 0x173E1Cu) {
        ctx->pc = 0x173E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E18u;
        // 0x173e1c: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E20u;
        goto label_173e20;
    }
    ctx->pc = 0x173E18u;
    {
        const bool branch_taken_0x173e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E18u;
        // 0x173e1c: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e18) {
            ctx->pc = 0x173E40u;
            goto label_173e40;
        }
    }
    ctx->pc = 0x173E20u;
label_173e20:
    // 0x173e20: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x173e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_173e24:
    // 0x173e24: 0x0  nop
    ctx->pc = 0x173e24u;
    // NOP
label_173e28:
    // 0x173e28: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x173e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_173e2c:
    // 0x173e2c: 0x0  nop
    ctx->pc = 0x173e2cu;
    // NOP
label_173e30:
    // 0x173e30: 0x0  nop
    ctx->pc = 0x173e30u;
    // NOP
label_173e34:
    // 0x173e34: 0x0  nop
    ctx->pc = 0x173e34u;
    // NOP
label_173e38:
    // 0x173e38: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_173e3c:
    if (ctx->pc == 0x173E3Cu) {
        ctx->pc = 0x173E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E38u;
        // 0x173e3c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E40u;
        goto label_173e40;
    }
    ctx->pc = 0x173E38u;
    {
        const bool branch_taken_0x173e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173e38) {
            ctx->pc = 0x173E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173E38u;
            // 0x173e3c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173e28;
        }
    }
    ctx->pc = 0x173E40u;
label_173e40:
    // 0x173e40: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x173e40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_173e44:
    // 0x173e44: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x173e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_173e48:
    // 0x173e48: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
label_173e4c:
    if (ctx->pc == 0x173E4Cu) {
        ctx->pc = 0x173E50u;
        goto label_173e50;
    }
    ctx->pc = 0x173E48u;
    {
        const bool branch_taken_0x173e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173e48) {
            ctx->pc = 0x174194u;
            goto label_174194;
        }
    }
    ctx->pc = 0x173E50u;
label_173e50:
    // 0x173e50: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_173e54:
    if (ctx->pc == 0x173E54u) {
        ctx->pc = 0x173E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E50u;
        // 0x173e54: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E58u;
        goto label_173e58;
    }
    ctx->pc = 0x173E50u;
    {
        const bool branch_taken_0x173e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E50u;
        // 0x173e54: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e50) {
            ctx->pc = 0x174168u;
            goto label_174168;
        }
    }
    ctx->pc = 0x173E58u;
label_173e58:
    // 0x173e58: 0x15220060  bne         $t1, $v0, . + 4 + (0x60 << 2)
label_173e5c:
    if (ctx->pc == 0x173E5Cu) {
        ctx->pc = 0x173E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E58u;
        // 0x173e5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E60u;
        goto label_173e60;
    }
    ctx->pc = 0x173E58u;
    {
        const bool branch_taken_0x173e58 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x173E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E58u;
        // 0x173e5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e58) {
            ctx->pc = 0x173FDCu;
            goto label_173fdc;
        }
    }
    ctx->pc = 0x173E60u;
label_173e60:
    // 0x173e60: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x173e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_173e64:
    // 0x173e64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x173e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173e68:
    // 0x173e68: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_173e6c:
    if (ctx->pc == 0x173E6Cu) {
        ctx->pc = 0x173E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E68u;
        // 0x173e6c: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E70u;
        goto label_173e70;
    }
    ctx->pc = 0x173E68u;
    {
        const bool branch_taken_0x173e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173e68) {
            ctx->pc = 0x173E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173E68u;
            // 0x173e6c: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173ED0u;
            goto label_173ed0;
        }
    }
    ctx->pc = 0x173E70u;
label_173e70:
    // 0x173e70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173e74:
    // 0x173e74: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x173e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_173e78:
    // 0x173e78: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x173e78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_173e7c:
    // 0x173e7c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x173e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_173e80:
    // 0x173e80: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x173e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_173e84:
    // 0x173e84: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x173e84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_173e88:
    // 0x173e88: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x173e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_173e8c:
    // 0x173e8c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_173e90:
    if (ctx->pc == 0x173E90u) {
        ctx->pc = 0x173E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E8Cu;
        // 0x173e90: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E94u;
        goto label_173e94;
    }
    ctx->pc = 0x173E8Cu;
    {
        const bool branch_taken_0x173e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173e8c) {
            ctx->pc = 0x173E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173E8Cu;
            // 0x173e90: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173E94u;
            goto label_173e94;
        }
    }
    ctx->pc = 0x173E94u;
label_173e94:
    // 0x173e94: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x173e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_173e98:
    // 0x173e98: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x173e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_173e9c:
    // 0x173e9c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x173e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_173ea0:
    // 0x173ea0: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_173ea4:
    if (ctx->pc == 0x173EA4u) {
        ctx->pc = 0x173EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EA0u;
        // 0x173ea4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173EA8u;
        goto label_173ea8;
    }
    ctx->pc = 0x173EA0u;
    {
        const bool branch_taken_0x173ea0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x173ea0) {
            ctx->pc = 0x173EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173EA0u;
            // 0x173ea4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173EB0u;
            goto label_173eb0;
        }
    }
    ctx->pc = 0x173EA8u;
label_173ea8:
    // 0x173ea8: 0x10000005  b           . + 4 + (0x5 << 2)
label_173eac:
    if (ctx->pc == 0x173EACu) {
        ctx->pc = 0x173EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EA8u;
        // 0x173eac: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173EB0u;
        goto label_173eb0;
    }
    ctx->pc = 0x173EA8u;
    {
        const bool branch_taken_0x173ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EA8u;
        // 0x173eac: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ea8) {
            ctx->pc = 0x173EC0u;
            goto label_173ec0;
        }
    }
    ctx->pc = 0x173EB0u;
label_173eb0:
    // 0x173eb0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x173eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_173eb4:
    // 0x173eb4: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_173eb8:
    if (ctx->pc == 0x173EB8u) {
        ctx->pc = 0x173EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EB4u;
        // 0x173eb8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173EBCu;
        goto label_173ebc;
    }
    ctx->pc = 0x173EB4u;
    {
        const bool branch_taken_0x173eb4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x173eb4) {
            ctx->pc = 0x173EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173EB4u;
            // 0x173eb8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173EC0u;
            goto label_173ec0;
        }
    }
    ctx->pc = 0x173EBCu;
label_173ebc:
    // 0x173ebc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x173ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_173ec0:
    // 0x173ec0: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x173ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_173ec4:
    // 0x173ec4: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x173ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_173ec8:
    // 0x173ec8: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x173ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_173ecc:
    // 0x173ecc: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x173eccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_173ed0:
    // 0x173ed0: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_173ed4:
    if (ctx->pc == 0x173ED4u) {
        ctx->pc = 0x173ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173ED0u;
        // 0x173ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173ED8u;
        goto label_173ed8;
    }
    ctx->pc = 0x173ED0u;
    {
        const bool branch_taken_0x173ed0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x173ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173ED0u;
        // 0x173ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ed0) {
            ctx->pc = 0x173EE4u;
            goto label_173ee4;
        }
    }
    ctx->pc = 0x173ED8u;
label_173ed8:
    // 0x173ed8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x173ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_173edc:
    // 0x173edc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_173ee0:
    if (ctx->pc == 0x173EE0u) {
        ctx->pc = 0x173EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EDCu;
        // 0x173ee0: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173EE4u;
        goto label_173ee4;
    }
    ctx->pc = 0x173EDCu;
    {
        const bool branch_taken_0x173edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x173EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EDCu;
        // 0x173ee0: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173edc) {
            ctx->pc = 0x173EFCu;
            goto label_173efc;
        }
    }
    ctx->pc = 0x173EE4u;
label_173ee4:
    // 0x173ee4: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x173ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_173ee8:
    // 0x173ee8: 0x10c00062  beqz        $a2, . + 4 + (0x62 << 2)
label_173eec:
    if (ctx->pc == 0x173EECu) {
        ctx->pc = 0x173EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EE8u;
        // 0x173eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173EF0u;
        goto label_173ef0;
    }
    ctx->pc = 0x173EE8u;
    {
        const bool branch_taken_0x173ee8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x173EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EE8u;
        // 0x173eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ee8) {
            ctx->pc = 0x174074u;
            goto label_174074;
        }
    }
    ctx->pc = 0x173EF0u;
label_173ef0:
    // 0x173ef0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x173ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_173ef4:
    // 0x173ef4: 0x50620060  beql        $v1, $v0, . + 4 + (0x60 << 2)
label_173ef8:
    if (ctx->pc == 0x173EF8u) {
        ctx->pc = 0x173EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EF4u;
        // 0x173ef8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173EFCu;
        goto label_173efc;
    }
    ctx->pc = 0x173EF4u;
    {
        const bool branch_taken_0x173ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x173ef4) {
            ctx->pc = 0x173EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173EF4u;
            // 0x173ef8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174078u;
            goto label_174078;
        }
    }
    ctx->pc = 0x173EFCu;
label_173efc:
    // 0x173efc: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_173f00:
    if (ctx->pc == 0x173F00u) {
        ctx->pc = 0x173F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EFCu;
        // 0x173f00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F04u;
        goto label_173f04;
    }
    ctx->pc = 0x173EFCu;
    {
        const bool branch_taken_0x173efc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EFCu;
        // 0x173f00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173efc) {
            ctx->pc = 0x173F10u;
            goto label_173f10;
        }
    }
    ctx->pc = 0x173F04u;
label_173f04:
    // 0x173f04: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x173f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_173f08:
    // 0x173f08: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_173f0c:
    if (ctx->pc == 0x173F0Cu) {
        ctx->pc = 0x173F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F08u;
        // 0x173f0c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F10u;
        goto label_173f10;
    }
    ctx->pc = 0x173F08u;
    {
        const bool branch_taken_0x173f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x173f08) {
            ctx->pc = 0x173F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173F08u;
            // 0x173f0c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173F74u;
            goto label_173f74;
        }
    }
    ctx->pc = 0x173F10u;
label_173f10:
    // 0x173f10: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_173f14:
    if (ctx->pc == 0x173F14u) {
        ctx->pc = 0x173F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F10u;
        // 0x173f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F18u;
        goto label_173f18;
    }
    ctx->pc = 0x173F10u;
    {
        const bool branch_taken_0x173f10 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F10u;
        // 0x173f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f10) {
            ctx->pc = 0x173F1Cu;
            goto label_173f1c;
        }
    }
    ctx->pc = 0x173F18u;
label_173f18:
    // 0x173f18: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x173f18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_173f1c:
    // 0x173f1c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x173f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_173f20:
    // 0x173f20: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x173f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_173f24:
    // 0x173f24: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x173f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_173f28:
    // 0x173f28: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x173f28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_173f2c:
    // 0x173f2c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x173f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_173f30:
    // 0x173f30: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_173f34:
    if (ctx->pc == 0x173F34u) {
        ctx->pc = 0x173F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F30u;
        // 0x173f34: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F38u;
        goto label_173f38;
    }
    ctx->pc = 0x173F30u;
    {
        const bool branch_taken_0x173f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173f30) {
            ctx->pc = 0x173F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173F30u;
            // 0x173f34: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173F38u;
            goto label_173f38;
        }
    }
    ctx->pc = 0x173F38u;
label_173f38:
    // 0x173f38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x173f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_173f3c:
    // 0x173f3c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x173f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_173f40:
    // 0x173f40: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x173f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_173f44:
    // 0x173f44: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_173f48:
    if (ctx->pc == 0x173F48u) {
        ctx->pc = 0x173F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F44u;
        // 0x173f48: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F4Cu;
        goto label_173f4c;
    }
    ctx->pc = 0x173F44u;
    {
        const bool branch_taken_0x173f44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x173f44) {
            ctx->pc = 0x173F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173F44u;
            // 0x173f48: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173F54u;
            goto label_173f54;
        }
    }
    ctx->pc = 0x173F4Cu;
label_173f4c:
    // 0x173f4c: 0x10000005  b           . + 4 + (0x5 << 2)
label_173f50:
    if (ctx->pc == 0x173F50u) {
        ctx->pc = 0x173F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F4Cu;
        // 0x173f50: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F54u;
        goto label_173f54;
    }
    ctx->pc = 0x173F4Cu;
    {
        const bool branch_taken_0x173f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F4Cu;
        // 0x173f50: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f4c) {
            ctx->pc = 0x173F64u;
            goto label_173f64;
        }
    }
    ctx->pc = 0x173F54u;
label_173f54:
    // 0x173f54: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x173f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_173f58:
    // 0x173f58: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_173f5c:
    if (ctx->pc == 0x173F5Cu) {
        ctx->pc = 0x173F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F58u;
        // 0x173f5c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F60u;
        goto label_173f60;
    }
    ctx->pc = 0x173F58u;
    {
        const bool branch_taken_0x173f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x173f58) {
            ctx->pc = 0x173F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173F58u;
            // 0x173f5c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173F64u;
            goto label_173f64;
        }
    }
    ctx->pc = 0x173F60u;
label_173f60:
    // 0x173f60: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x173f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_173f64:
    // 0x173f64: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x173f64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
label_173f68:
    // 0x173f68: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x173f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_173f6c:
    // 0x173f6c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x173f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_173f70:
    // 0x173f70: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x173f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_173f74:
    // 0x173f74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x173f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173f78:
    // 0x173f78: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x173f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_173f7c:
    // 0x173f7c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x173f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_173f80:
    // 0x173f80: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x173f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_173f84:
    // 0x173f84: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_173f88:
    if (ctx->pc == 0x173F88u) {
        ctx->pc = 0x173F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F84u;
        // 0x173f88: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F8Cu;
        goto label_173f8c;
    }
    ctx->pc = 0x173F84u;
    {
        const bool branch_taken_0x173f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173f84) {
            ctx->pc = 0x173F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173F84u;
            // 0x173f88: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173F8Cu;
            goto label_173f8c;
        }
    }
    ctx->pc = 0x173F8Cu;
label_173f8c:
    // 0x173f8c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x173f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_173f90:
    // 0x173f90: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x173f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_173f94:
    // 0x173f94: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x173f94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_173f98:
    // 0x173f98: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x173f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_173f9c:
    // 0x173f9c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_173fa0:
    if (ctx->pc == 0x173FA0u) {
        ctx->pc = 0x173FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F9Cu;
        // 0x173fa0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173FA4u;
        goto label_173fa4;
    }
    ctx->pc = 0x173F9Cu;
    {
        const bool branch_taken_0x173f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173f9c) {
            ctx->pc = 0x173FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173F9Cu;
            // 0x173fa0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173FA4u;
            goto label_173fa4;
        }
    }
    ctx->pc = 0x173FA4u;
label_173fa4:
    // 0x173fa4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x173fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_173fa8:
    // 0x173fa8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x173fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_173fac:
    // 0x173fac: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x173facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_173fb0:
    // 0x173fb0: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_173fb4:
    if (ctx->pc == 0x173FB4u) {
        ctx->pc = 0x173FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FB0u;
        // 0x173fb4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173FB8u;
        goto label_173fb8;
    }
    ctx->pc = 0x173FB0u;
    {
        const bool branch_taken_0x173fb0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x173fb0) {
            ctx->pc = 0x173FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173FB0u;
            // 0x173fb4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173FC0u;
            goto label_173fc0;
        }
    }
    ctx->pc = 0x173FB8u;
label_173fb8:
    // 0x173fb8: 0x10000005  b           . + 4 + (0x5 << 2)
label_173fbc:
    if (ctx->pc == 0x173FBCu) {
        ctx->pc = 0x173FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FB8u;
        // 0x173fbc: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173FC0u;
        goto label_173fc0;
    }
    ctx->pc = 0x173FB8u;
    {
        const bool branch_taken_0x173fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FB8u;
        // 0x173fbc: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173fb8) {
            ctx->pc = 0x173FD0u;
            goto label_173fd0;
        }
    }
    ctx->pc = 0x173FC0u;
label_173fc0:
    // 0x173fc0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x173fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_173fc4:
    // 0x173fc4: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_173fc8:
    if (ctx->pc == 0x173FC8u) {
        ctx->pc = 0x173FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FC4u;
        // 0x173fc8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173FCCu;
        goto label_173fcc;
    }
    ctx->pc = 0x173FC4u;
    {
        const bool branch_taken_0x173fc4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x173fc4) {
            ctx->pc = 0x173FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173FC4u;
            // 0x173fc8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173FD0u;
            goto label_173fd0;
        }
    }
    ctx->pc = 0x173FCCu;
label_173fcc:
    // 0x173fcc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x173fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_173fd0:
    // 0x173fd0: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x173fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_173fd4:
    // 0x173fd4: 0x1000006c  b           . + 4 + (0x6C << 2)
label_173fd8:
    if (ctx->pc == 0x173FD8u) {
        ctx->pc = 0x173FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FD4u;
        // 0x173fd8: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173FDCu;
        goto label_173fdc;
    }
    ctx->pc = 0x173FD4u;
    {
        const bool branch_taken_0x173fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FD4u;
        // 0x173fd8: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173fd4) {
            ctx->pc = 0x174188u;
            goto label_174188;
        }
    }
    ctx->pc = 0x173FDCu;
label_173fdc:
    // 0x173fdc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x173fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173fe0:
    // 0x173fe0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_173fe4:
    if (ctx->pc == 0x173FE4u) {
        ctx->pc = 0x173FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FE0u;
        // 0x173fe4: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173FE8u;
        goto label_173fe8;
    }
    ctx->pc = 0x173FE0u;
    {
        const bool branch_taken_0x173fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173fe0) {
            ctx->pc = 0x173FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173FE0u;
            // 0x173fe4: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174048u;
            goto label_174048;
        }
    }
    ctx->pc = 0x173FE8u;
label_173fe8:
    // 0x173fe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173fec:
    // 0x173fec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x173fecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_173ff0:
    // 0x173ff0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x173ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_173ff4:
    // 0x173ff4: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x173ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_173ff8:
    // 0x173ff8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x173ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_173ffc:
    // 0x173ffc: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x173ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_174000:
    // 0x174000: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x174000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_174004:
    // 0x174004: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_174008:
    if (ctx->pc == 0x174008u) {
        ctx->pc = 0x174008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174004u;
        // 0x174008: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17400Cu;
        goto label_17400c;
    }
    ctx->pc = 0x174004u;
    {
        const bool branch_taken_0x174004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174004) {
            ctx->pc = 0x174008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174004u;
            // 0x174008: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17400Cu;
            goto label_17400c;
        }
    }
    ctx->pc = 0x17400Cu;
label_17400c:
    // 0x17400c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x17400cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_174010:
    // 0x174010: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x174010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_174014:
    // 0x174014: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x174014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_174018:
    // 0x174018: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_17401c:
    if (ctx->pc == 0x17401Cu) {
        ctx->pc = 0x17401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174018u;
        // 0x17401c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174020u;
        goto label_174020;
    }
    ctx->pc = 0x174018u;
    {
        const bool branch_taken_0x174018 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x174018) {
            ctx->pc = 0x17401Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174018u;
            // 0x17401c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174028u;
            goto label_174028;
        }
    }
    ctx->pc = 0x174020u;
label_174020:
    // 0x174020: 0x10000005  b           . + 4 + (0x5 << 2)
label_174024:
    if (ctx->pc == 0x174024u) {
        ctx->pc = 0x174024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174020u;
        // 0x174024: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174028u;
        goto label_174028;
    }
    ctx->pc = 0x174020u;
    {
        const bool branch_taken_0x174020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174020u;
        // 0x174024: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174020) {
            ctx->pc = 0x174038u;
            goto label_174038;
        }
    }
    ctx->pc = 0x174028u;
label_174028:
    // 0x174028: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x174028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_17402c:
    // 0x17402c: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_174030:
    if (ctx->pc == 0x174030u) {
        ctx->pc = 0x174030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17402Cu;
        // 0x174030: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174034u;
        goto label_174034;
    }
    ctx->pc = 0x17402Cu;
    {
        const bool branch_taken_0x17402c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x17402c) {
            ctx->pc = 0x174030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17402Cu;
            // 0x174030: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174038u;
            goto label_174038;
        }
    }
    ctx->pc = 0x174034u;
label_174034:
    // 0x174034: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x174034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_174038:
    // 0x174038: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x174038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_17403c:
    // 0x17403c: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x17403cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_174040:
    // 0x174040: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x174040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_174044:
    // 0x174044: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x174044u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_174048:
    // 0x174048: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_17404c:
    if (ctx->pc == 0x17404Cu) {
        ctx->pc = 0x17404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174048u;
        // 0x17404c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174050u;
        goto label_174050;
    }
    ctx->pc = 0x174048u;
    {
        const bool branch_taken_0x174048 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x17404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174048u;
        // 0x17404c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174048) {
            ctx->pc = 0x17405Cu;
            goto label_17405c;
        }
    }
    ctx->pc = 0x174050u;
label_174050:
    // 0x174050: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x174050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_174054:
    // 0x174054: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_174058:
    if (ctx->pc == 0x174058u) {
        ctx->pc = 0x174058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174054u;
        // 0x174058: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17405Cu;
        goto label_17405c;
    }
    ctx->pc = 0x174054u;
    {
        const bool branch_taken_0x174054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x174058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174054u;
        // 0x174058: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174054) {
            ctx->pc = 0x174084u;
            goto label_174084;
        }
    }
    ctx->pc = 0x17405Cu;
label_17405c:
    // 0x17405c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x17405cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_174060:
    // 0x174060: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_174064:
    if (ctx->pc == 0x174064u) {
        ctx->pc = 0x174064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174060u;
        // 0x174064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174068u;
        goto label_174068;
    }
    ctx->pc = 0x174060u;
    {
        const bool branch_taken_0x174060 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x174064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174060u;
        // 0x174064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174060) {
            ctx->pc = 0x174074u;
            goto label_174074;
        }
    }
    ctx->pc = 0x174068u;
label_174068:
    // 0x174068: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x174068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_17406c:
    // 0x17406c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_174070:
    if (ctx->pc == 0x174070u) {
        ctx->pc = 0x174074u;
        goto label_174074;
    }
    ctx->pc = 0x17406Cu;
    {
        const bool branch_taken_0x17406c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17406c) {
            ctx->pc = 0x174084u;
            goto label_174084;
        }
    }
    ctx->pc = 0x174074u;
label_174074:
    // 0x174074: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x174074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_174078:
    // 0x174078: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x174078u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17407c:
    // 0x17407c: 0x10000039  b           . + 4 + (0x39 << 2)
label_174080:
    if (ctx->pc == 0x174080u) {
        ctx->pc = 0x174080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17407Cu;
        // 0x174080: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174084u;
        goto label_174084;
    }
    ctx->pc = 0x17407Cu;
    {
        const bool branch_taken_0x17407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17407Cu;
        // 0x174080: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17407c) {
            ctx->pc = 0x174164u;
            goto label_174164;
        }
    }
    ctx->pc = 0x174084u;
label_174084:
    // 0x174084: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_174088:
    if (ctx->pc == 0x174088u) {
        ctx->pc = 0x174088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174084u;
        // 0x174088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17408Cu;
        goto label_17408c;
    }
    ctx->pc = 0x174084u;
    {
        const bool branch_taken_0x174084 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x174088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174084u;
        // 0x174088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174084) {
            ctx->pc = 0x174098u;
            goto label_174098;
        }
    }
    ctx->pc = 0x17408Cu;
label_17408c:
    // 0x17408c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x17408cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_174090:
    // 0x174090: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_174094:
    if (ctx->pc == 0x174094u) {
        ctx->pc = 0x174094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174090u;
        // 0x174094: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174098u;
        goto label_174098;
    }
    ctx->pc = 0x174090u;
    {
        const bool branch_taken_0x174090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174090) {
            ctx->pc = 0x174094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174090u;
            // 0x174094: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1740FCu;
            goto label_1740fc;
        }
    }
    ctx->pc = 0x174098u;
label_174098:
    // 0x174098: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_17409c:
    if (ctx->pc == 0x17409Cu) {
        ctx->pc = 0x17409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174098u;
        // 0x17409c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1740A0u;
        goto label_1740a0;
    }
    ctx->pc = 0x174098u;
    {
        const bool branch_taken_0x174098 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x17409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174098u;
        // 0x17409c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174098) {
            ctx->pc = 0x1740A4u;
            goto label_1740a4;
        }
    }
    ctx->pc = 0x1740A0u;
label_1740a0:
    // 0x1740a0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1740a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_1740a4:
    // 0x1740a4: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1740a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1740a8:
    // 0x1740a8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1740a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1740ac:
    // 0x1740ac: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1740acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1740b0:
    // 0x1740b0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1740b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1740b4:
    // 0x1740b4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1740b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1740b8:
    // 0x1740b8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1740bc:
    if (ctx->pc == 0x1740BCu) {
        ctx->pc = 0x1740BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740B8u;
        // 0x1740bc: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1740C0u;
        goto label_1740c0;
    }
    ctx->pc = 0x1740B8u;
    {
        const bool branch_taken_0x1740b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1740b8) {
            ctx->pc = 0x1740BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1740B8u;
            // 0x1740bc: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1740C0u;
            goto label_1740c0;
        }
    }
    ctx->pc = 0x1740C0u;
label_1740c0:
    // 0x1740c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1740c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1740c4:
    // 0x1740c4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1740c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1740c8:
    // 0x1740c8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1740c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1740cc:
    // 0x1740cc: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_1740d0:
    if (ctx->pc == 0x1740D0u) {
        ctx->pc = 0x1740D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740CCu;
        // 0x1740d0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1740D4u;
        goto label_1740d4;
    }
    ctx->pc = 0x1740CCu;
    {
        const bool branch_taken_0x1740cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1740cc) {
            ctx->pc = 0x1740D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1740CCu;
            // 0x1740d0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1740DCu;
            goto label_1740dc;
        }
    }
    ctx->pc = 0x1740D4u;
label_1740d4:
    // 0x1740d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1740d8:
    if (ctx->pc == 0x1740D8u) {
        ctx->pc = 0x1740D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740D4u;
        // 0x1740d8: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1740DCu;
        goto label_1740dc;
    }
    ctx->pc = 0x1740D4u;
    {
        const bool branch_taken_0x1740d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1740D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740D4u;
        // 0x1740d8: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740d4) {
            ctx->pc = 0x1740ECu;
            goto label_1740ec;
        }
    }
    ctx->pc = 0x1740DCu;
label_1740dc:
    // 0x1740dc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1740dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1740e0:
    // 0x1740e0: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_1740e4:
    if (ctx->pc == 0x1740E4u) {
        ctx->pc = 0x1740E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740E0u;
        // 0x1740e4: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1740E8u;
        goto label_1740e8;
    }
    ctx->pc = 0x1740E0u;
    {
        const bool branch_taken_0x1740e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1740e0) {
            ctx->pc = 0x1740E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1740E0u;
            // 0x1740e4: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1740ECu;
            goto label_1740ec;
        }
    }
    ctx->pc = 0x1740E8u;
label_1740e8:
    // 0x1740e8: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1740e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_1740ec:
    // 0x1740ec: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1740ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_1740f0:
    // 0x1740f0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1740f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_1740f4:
    // 0x1740f4: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1740f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1740f8:
    // 0x1740f8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1740f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1740fc:
    // 0x1740fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1740fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174100:
    // 0x174100: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x174100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_174104:
    // 0x174104: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x174104u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_174108:
    // 0x174108: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x174108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17410c:
    // 0x17410c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_174110:
    if (ctx->pc == 0x174110u) {
        ctx->pc = 0x174110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17410Cu;
        // 0x174110: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174114u;
        goto label_174114;
    }
    ctx->pc = 0x17410Cu;
    {
        const bool branch_taken_0x17410c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17410c) {
            ctx->pc = 0x174110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17410Cu;
            // 0x174110: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174114u;
            goto label_174114;
        }
    }
    ctx->pc = 0x174114u;
label_174114:
    // 0x174114: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x174114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_174118:
    // 0x174118: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x174118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17411c:
    // 0x17411c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x17411cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_174120:
    // 0x174120: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x174120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_174124:
    // 0x174124: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_174128:
    if (ctx->pc == 0x174128u) {
        ctx->pc = 0x174128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174124u;
        // 0x174128: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17412Cu;
        goto label_17412c;
    }
    ctx->pc = 0x174124u;
    {
        const bool branch_taken_0x174124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174124) {
            ctx->pc = 0x174128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174124u;
            // 0x174128: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17412Cu;
            goto label_17412c;
        }
    }
    ctx->pc = 0x17412Cu;
label_17412c:
    // 0x17412c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x17412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_174130:
    // 0x174130: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x174130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_174134:
    // 0x174134: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x174134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_174138:
    // 0x174138: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_17413c:
    if (ctx->pc == 0x17413Cu) {
        ctx->pc = 0x17413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174138u;
        // 0x17413c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174140u;
        goto label_174140;
    }
    ctx->pc = 0x174138u;
    {
        const bool branch_taken_0x174138 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x174138) {
            ctx->pc = 0x17413Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174138u;
            // 0x17413c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174148u;
            goto label_174148;
        }
    }
    ctx->pc = 0x174140u;
label_174140:
    // 0x174140: 0x10000005  b           . + 4 + (0x5 << 2)
label_174144:
    if (ctx->pc == 0x174144u) {
        ctx->pc = 0x174144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174140u;
        // 0x174144: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174148u;
        goto label_174148;
    }
    ctx->pc = 0x174140u;
    {
        const bool branch_taken_0x174140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174140u;
        // 0x174144: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174140) {
            ctx->pc = 0x174158u;
            goto label_174158;
        }
    }
    ctx->pc = 0x174148u;
label_174148:
    // 0x174148: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x174148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_17414c:
    // 0x17414c: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_174150:
    if (ctx->pc == 0x174150u) {
        ctx->pc = 0x174150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17414Cu;
        // 0x174150: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174154u;
        goto label_174154;
    }
    ctx->pc = 0x17414Cu;
    {
        const bool branch_taken_0x17414c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x17414c) {
            ctx->pc = 0x174150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17414Cu;
            // 0x174150: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174158u;
            goto label_174158;
        }
    }
    ctx->pc = 0x174154u;
label_174154:
    // 0x174154: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x174154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_174158:
    // 0x174158: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x174158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_17415c:
    // 0x17415c: 0x1000000a  b           . + 4 + (0xA << 2)
label_174160:
    if (ctx->pc == 0x174160u) {
        ctx->pc = 0x174160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17415Cu;
        // 0x174160: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174164u;
        goto label_174164;
    }
    ctx->pc = 0x17415Cu;
    {
        const bool branch_taken_0x17415c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17415Cu;
        // 0x174160: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17415c) {
            ctx->pc = 0x174188u;
            goto label_174188;
        }
    }
    ctx->pc = 0x174164u;
label_174164:
    // 0x174164: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x174164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_174168:
    // 0x174168: 0x11220007  beq         $t1, $v0, . + 4 + (0x7 << 2)
label_17416c:
    if (ctx->pc == 0x17416Cu) {
        ctx->pc = 0x174170u;
        goto label_174170;
    }
    ctx->pc = 0x174168u;
    {
        const bool branch_taken_0x174168 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x174168) {
            ctx->pc = 0x174188u;
            goto label_174188;
        }
    }
    ctx->pc = 0x174170u;
label_174170:
    // 0x174170: 0x5120ff39  beql        $t1, $zero, . + 4 + (-0xC7 << 2)
label_174174:
    if (ctx->pc == 0x174174u) {
        ctx->pc = 0x174174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174170u;
        // 0x174174: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174178u;
        goto label_174178;
    }
    ctx->pc = 0x174170u;
    {
        const bool branch_taken_0x174170 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x174170) {
            ctx->pc = 0x174174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174170u;
            // 0x174174: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173e58;
        }
    }
    ctx->pc = 0x174178u;
label_174178:
    // 0x174178: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x174178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_17417c:
    // 0x17417c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174180:
    // 0x174180: 0x5062ff35  beql        $v1, $v0, . + 4 + (-0xCB << 2)
label_174184:
    if (ctx->pc == 0x174184u) {
        ctx->pc = 0x174184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174180u;
        // 0x174184: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174188u;
        goto label_174188;
    }
    ctx->pc = 0x174180u;
    {
        const bool branch_taken_0x174180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x174180) {
            ctx->pc = 0x174184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174180u;
            // 0x174184: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173e58;
        }
    }
    ctx->pc = 0x174188u;
label_174188:
    // 0x174188: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_17418c:
    if (ctx->pc == 0x17418Cu) {
        ctx->pc = 0x17418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174188u;
        // 0x17418c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174190u;
        goto label_174190;
    }
    ctx->pc = 0x174188u;
    {
        const bool branch_taken_0x174188 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x17418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174188u;
        // 0x17418c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174188) {
            ctx->pc = 0x174194u;
            goto label_174194;
        }
    }
    ctx->pc = 0x174190u;
label_174190:
    // 0x174190: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x174190u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_174194:
    // 0x174194: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_174198:
    if (ctx->pc == 0x174198u) {
        ctx->pc = 0x174198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174194u;
        // 0x174198: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17419Cu;
        goto label_17419c;
    }
    ctx->pc = 0x174194u;
    {
        const bool branch_taken_0x174194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x174198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174194u;
        // 0x174198: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174194) {
            ctx->pc = 0x1741C0u;
            goto label_1741c0;
        }
    }
    ctx->pc = 0x17419Cu;
label_17419c:
    // 0x17419c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x17419cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1741a0:
    // 0x1741a0: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1741a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1741a4:
    // 0x1741a4: 0x24c61c28  addiu       $a2, $a2, 0x1C28
    ctx->pc = 0x1741a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7208));
label_1741a8:
    // 0x1741a8: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1741a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1741ac:
    // 0x1741ac: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1741acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1741b0:
    // 0x1741b0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1741b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1741b4:
    // 0x1741b4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1741b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1741b8:
    // 0x1741b8: 0x60f809  jalr        $v1
label_1741bc:
    if (ctx->pc == 0x1741BCu) {
        ctx->pc = 0x1741BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741B8u;
        // 0x1741bc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1741C0u;
        goto label_1741c0;
    }
    ctx->pc = 0x1741B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1741C0u);
        ctx->pc = 0x1741BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741B8u;
        // 0x1741bc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1741B8u, 0x1741C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1741C0u;
label_1741c0:
    // 0x1741c0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1741c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1741c4:
    // 0x1741c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1741c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1741c8:
    // 0x1741c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1741c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1741cc:
    // 0x1741cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1741ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1741d0:
    // 0x1741d0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1741d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_1741d4:
    // 0x1741d4: 0xc05e2f2  jal         func_178BC8
label_1741d8:
    if (ctx->pc == 0x1741D8u) {
        ctx->pc = 0x1741D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741D4u;
        // 0x1741d8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1741DCu;
        goto label_1741dc;
    }
    ctx->pc = 0x1741D4u;
    SET_GPR_U32(ctx, 31, 0x1741DCu);
    ctx->pc = 0x1741D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1741D4u;
    // 0x1741d8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178BC8u, 0x1741D4u, 0x1741DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1741DCu;
label_1741dc:
    // 0x1741dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1741dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1741e0:
    // 0x1741e0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1741e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1741e4:
    // 0x1741e4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1741e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1741e8:
    // 0x1741e8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1741e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1741ec:
    // 0x1741ec: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1741ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1741f0:
    // 0x1741f0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1741f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1741f4:
    // 0x1741f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1741f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1741f8:
    // 0x1741f8: 0x3e00008  jr          $ra
label_1741fc:
    if (ctx->pc == 0x1741FCu) {
        ctx->pc = 0x1741FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741F8u;
        // 0x1741fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174200u;
        goto label_fallthrough_0x1741f8;
    }
    ctx->pc = 0x1741F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1741FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741F8u;
        // 0x1741fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1741F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1741f8:
    ctx->pc = 0x174200u;
}
