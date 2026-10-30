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

// Function: sub_00127D88
// Address: 0x127d88 - 0x128298
void sub_00127D88_0x127d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127D88_0x127d88");
#endif

    switch (ctx->pc) {
        case 0x127d88u: goto label_127d88;
        case 0x127d8cu: goto label_127d8c;
        case 0x127d90u: goto label_127d90;
        case 0x127d94u: goto label_127d94;
        case 0x127d98u: goto label_127d98;
        case 0x127d9cu: goto label_127d9c;
        case 0x127da0u: goto label_127da0;
        case 0x127da4u: goto label_127da4;
        case 0x127da8u: goto label_127da8;
        case 0x127dacu: goto label_127dac;
        case 0x127db0u: goto label_127db0;
        case 0x127db4u: goto label_127db4;
        case 0x127db8u: goto label_127db8;
        case 0x127dbcu: goto label_127dbc;
        case 0x127dc0u: goto label_127dc0;
        case 0x127dc4u: goto label_127dc4;
        case 0x127dc8u: goto label_127dc8;
        case 0x127dccu: goto label_127dcc;
        case 0x127dd0u: goto label_127dd0;
        case 0x127dd4u: goto label_127dd4;
        case 0x127dd8u: goto label_127dd8;
        case 0x127ddcu: goto label_127ddc;
        case 0x127de0u: goto label_127de0;
        case 0x127de4u: goto label_127de4;
        case 0x127de8u: goto label_127de8;
        case 0x127decu: goto label_127dec;
        case 0x127df0u: goto label_127df0;
        case 0x127df4u: goto label_127df4;
        case 0x127df8u: goto label_127df8;
        case 0x127dfcu: goto label_127dfc;
        case 0x127e00u: goto label_127e00;
        case 0x127e04u: goto label_127e04;
        case 0x127e08u: goto label_127e08;
        case 0x127e0cu: goto label_127e0c;
        case 0x127e10u: goto label_127e10;
        case 0x127e14u: goto label_127e14;
        case 0x127e18u: goto label_127e18;
        case 0x127e1cu: goto label_127e1c;
        case 0x127e20u: goto label_127e20;
        case 0x127e24u: goto label_127e24;
        case 0x127e28u: goto label_127e28;
        case 0x127e2cu: goto label_127e2c;
        case 0x127e30u: goto label_127e30;
        case 0x127e34u: goto label_127e34;
        case 0x127e38u: goto label_127e38;
        case 0x127e3cu: goto label_127e3c;
        case 0x127e40u: goto label_127e40;
        case 0x127e44u: goto label_127e44;
        case 0x127e48u: goto label_127e48;
        case 0x127e4cu: goto label_127e4c;
        case 0x127e50u: goto label_127e50;
        case 0x127e54u: goto label_127e54;
        case 0x127e58u: goto label_127e58;
        case 0x127e5cu: goto label_127e5c;
        case 0x127e60u: goto label_127e60;
        case 0x127e64u: goto label_127e64;
        case 0x127e68u: goto label_127e68;
        case 0x127e6cu: goto label_127e6c;
        case 0x127e70u: goto label_127e70;
        case 0x127e74u: goto label_127e74;
        case 0x127e78u: goto label_127e78;
        case 0x127e7cu: goto label_127e7c;
        case 0x127e80u: goto label_127e80;
        case 0x127e84u: goto label_127e84;
        case 0x127e88u: goto label_127e88;
        case 0x127e8cu: goto label_127e8c;
        case 0x127e90u: goto label_127e90;
        case 0x127e94u: goto label_127e94;
        case 0x127e98u: goto label_127e98;
        case 0x127e9cu: goto label_127e9c;
        case 0x127ea0u: goto label_127ea0;
        case 0x127ea4u: goto label_127ea4;
        case 0x127ea8u: goto label_127ea8;
        case 0x127eacu: goto label_127eac;
        case 0x127eb0u: goto label_127eb0;
        case 0x127eb4u: goto label_127eb4;
        case 0x127eb8u: goto label_127eb8;
        case 0x127ebcu: goto label_127ebc;
        case 0x127ec0u: goto label_127ec0;
        case 0x127ec4u: goto label_127ec4;
        case 0x127ec8u: goto label_127ec8;
        case 0x127eccu: goto label_127ecc;
        case 0x127ed0u: goto label_127ed0;
        case 0x127ed4u: goto label_127ed4;
        case 0x127ed8u: goto label_127ed8;
        case 0x127edcu: goto label_127edc;
        case 0x127ee0u: goto label_127ee0;
        case 0x127ee4u: goto label_127ee4;
        case 0x127ee8u: goto label_127ee8;
        case 0x127eecu: goto label_127eec;
        case 0x127ef0u: goto label_127ef0;
        case 0x127ef4u: goto label_127ef4;
        case 0x127ef8u: goto label_127ef8;
        case 0x127efcu: goto label_127efc;
        case 0x127f00u: goto label_127f00;
        case 0x127f04u: goto label_127f04;
        case 0x127f08u: goto label_127f08;
        case 0x127f0cu: goto label_127f0c;
        case 0x127f10u: goto label_127f10;
        case 0x127f14u: goto label_127f14;
        case 0x127f18u: goto label_127f18;
        case 0x127f1cu: goto label_127f1c;
        case 0x127f20u: goto label_127f20;
        case 0x127f24u: goto label_127f24;
        case 0x127f28u: goto label_127f28;
        case 0x127f2cu: goto label_127f2c;
        case 0x127f30u: goto label_127f30;
        case 0x127f34u: goto label_127f34;
        case 0x127f38u: goto label_127f38;
        case 0x127f3cu: goto label_127f3c;
        case 0x127f40u: goto label_127f40;
        case 0x127f44u: goto label_127f44;
        case 0x127f48u: goto label_127f48;
        case 0x127f4cu: goto label_127f4c;
        case 0x127f50u: goto label_127f50;
        case 0x127f54u: goto label_127f54;
        case 0x127f58u: goto label_127f58;
        case 0x127f5cu: goto label_127f5c;
        case 0x127f60u: goto label_127f60;
        case 0x127f64u: goto label_127f64;
        case 0x127f68u: goto label_127f68;
        case 0x127f6cu: goto label_127f6c;
        case 0x127f70u: goto label_127f70;
        case 0x127f74u: goto label_127f74;
        case 0x127f78u: goto label_127f78;
        case 0x127f7cu: goto label_127f7c;
        case 0x127f80u: goto label_127f80;
        case 0x127f84u: goto label_127f84;
        case 0x127f88u: goto label_127f88;
        case 0x127f8cu: goto label_127f8c;
        case 0x127f90u: goto label_127f90;
        case 0x127f94u: goto label_127f94;
        case 0x127f98u: goto label_127f98;
        case 0x127f9cu: goto label_127f9c;
        case 0x127fa0u: goto label_127fa0;
        case 0x127fa4u: goto label_127fa4;
        case 0x127fa8u: goto label_127fa8;
        case 0x127facu: goto label_127fac;
        case 0x127fb0u: goto label_127fb0;
        case 0x127fb4u: goto label_127fb4;
        case 0x127fb8u: goto label_127fb8;
        case 0x127fbcu: goto label_127fbc;
        case 0x127fc0u: goto label_127fc0;
        case 0x127fc4u: goto label_127fc4;
        case 0x127fc8u: goto label_127fc8;
        case 0x127fccu: goto label_127fcc;
        case 0x127fd0u: goto label_127fd0;
        case 0x127fd4u: goto label_127fd4;
        case 0x127fd8u: goto label_127fd8;
        case 0x127fdcu: goto label_127fdc;
        case 0x127fe0u: goto label_127fe0;
        case 0x127fe4u: goto label_127fe4;
        case 0x127fe8u: goto label_127fe8;
        case 0x127fecu: goto label_127fec;
        case 0x127ff0u: goto label_127ff0;
        case 0x127ff4u: goto label_127ff4;
        case 0x127ff8u: goto label_127ff8;
        case 0x127ffcu: goto label_127ffc;
        case 0x128000u: goto label_128000;
        case 0x128004u: goto label_128004;
        case 0x128008u: goto label_128008;
        case 0x12800cu: goto label_12800c;
        case 0x128010u: goto label_128010;
        case 0x128014u: goto label_128014;
        case 0x128018u: goto label_128018;
        case 0x12801cu: goto label_12801c;
        case 0x128020u: goto label_128020;
        case 0x128024u: goto label_128024;
        case 0x128028u: goto label_128028;
        case 0x12802cu: goto label_12802c;
        case 0x128030u: goto label_128030;
        case 0x128034u: goto label_128034;
        case 0x128038u: goto label_128038;
        case 0x12803cu: goto label_12803c;
        case 0x128040u: goto label_128040;
        case 0x128044u: goto label_128044;
        case 0x128048u: goto label_128048;
        case 0x12804cu: goto label_12804c;
        case 0x128050u: goto label_128050;
        case 0x128054u: goto label_128054;
        case 0x128058u: goto label_128058;
        case 0x12805cu: goto label_12805c;
        case 0x128060u: goto label_128060;
        case 0x128064u: goto label_128064;
        case 0x128068u: goto label_128068;
        case 0x12806cu: goto label_12806c;
        case 0x128070u: goto label_128070;
        case 0x128074u: goto label_128074;
        case 0x128078u: goto label_128078;
        case 0x12807cu: goto label_12807c;
        case 0x128080u: goto label_128080;
        case 0x128084u: goto label_128084;
        case 0x128088u: goto label_128088;
        case 0x12808cu: goto label_12808c;
        case 0x128090u: goto label_128090;
        case 0x128094u: goto label_128094;
        case 0x128098u: goto label_128098;
        case 0x12809cu: goto label_12809c;
        case 0x1280a0u: goto label_1280a0;
        case 0x1280a4u: goto label_1280a4;
        case 0x1280a8u: goto label_1280a8;
        case 0x1280acu: goto label_1280ac;
        case 0x1280b0u: goto label_1280b0;
        case 0x1280b4u: goto label_1280b4;
        case 0x1280b8u: goto label_1280b8;
        case 0x1280bcu: goto label_1280bc;
        case 0x1280c0u: goto label_1280c0;
        case 0x1280c4u: goto label_1280c4;
        case 0x1280c8u: goto label_1280c8;
        case 0x1280ccu: goto label_1280cc;
        case 0x1280d0u: goto label_1280d0;
        case 0x1280d4u: goto label_1280d4;
        case 0x1280d8u: goto label_1280d8;
        case 0x1280dcu: goto label_1280dc;
        case 0x1280e0u: goto label_1280e0;
        case 0x1280e4u: goto label_1280e4;
        case 0x1280e8u: goto label_1280e8;
        case 0x1280ecu: goto label_1280ec;
        case 0x1280f0u: goto label_1280f0;
        case 0x1280f4u: goto label_1280f4;
        case 0x1280f8u: goto label_1280f8;
        case 0x1280fcu: goto label_1280fc;
        case 0x128100u: goto label_128100;
        case 0x128104u: goto label_128104;
        case 0x128108u: goto label_128108;
        case 0x12810cu: goto label_12810c;
        case 0x128110u: goto label_128110;
        case 0x128114u: goto label_128114;
        case 0x128118u: goto label_128118;
        case 0x12811cu: goto label_12811c;
        case 0x128120u: goto label_128120;
        case 0x128124u: goto label_128124;
        case 0x128128u: goto label_128128;
        case 0x12812cu: goto label_12812c;
        case 0x128130u: goto label_128130;
        case 0x128134u: goto label_128134;
        case 0x128138u: goto label_128138;
        case 0x12813cu: goto label_12813c;
        case 0x128140u: goto label_128140;
        case 0x128144u: goto label_128144;
        case 0x128148u: goto label_128148;
        case 0x12814cu: goto label_12814c;
        case 0x128150u: goto label_128150;
        case 0x128154u: goto label_128154;
        case 0x128158u: goto label_128158;
        case 0x12815cu: goto label_12815c;
        case 0x128160u: goto label_128160;
        case 0x128164u: goto label_128164;
        case 0x128168u: goto label_128168;
        case 0x12816cu: goto label_12816c;
        case 0x128170u: goto label_128170;
        case 0x128174u: goto label_128174;
        case 0x128178u: goto label_128178;
        case 0x12817cu: goto label_12817c;
        case 0x128180u: goto label_128180;
        case 0x128184u: goto label_128184;
        case 0x128188u: goto label_128188;
        case 0x12818cu: goto label_12818c;
        case 0x128190u: goto label_128190;
        case 0x128194u: goto label_128194;
        case 0x128198u: goto label_128198;
        case 0x12819cu: goto label_12819c;
        case 0x1281a0u: goto label_1281a0;
        case 0x1281a4u: goto label_1281a4;
        case 0x1281a8u: goto label_1281a8;
        case 0x1281acu: goto label_1281ac;
        case 0x1281b0u: goto label_1281b0;
        case 0x1281b4u: goto label_1281b4;
        case 0x1281b8u: goto label_1281b8;
        case 0x1281bcu: goto label_1281bc;
        case 0x1281c0u: goto label_1281c0;
        case 0x1281c4u: goto label_1281c4;
        case 0x1281c8u: goto label_1281c8;
        case 0x1281ccu: goto label_1281cc;
        case 0x1281d0u: goto label_1281d0;
        case 0x1281d4u: goto label_1281d4;
        case 0x1281d8u: goto label_1281d8;
        case 0x1281dcu: goto label_1281dc;
        case 0x1281e0u: goto label_1281e0;
        case 0x1281e4u: goto label_1281e4;
        case 0x1281e8u: goto label_1281e8;
        case 0x1281ecu: goto label_1281ec;
        case 0x1281f0u: goto label_1281f0;
        case 0x1281f4u: goto label_1281f4;
        case 0x1281f8u: goto label_1281f8;
        case 0x1281fcu: goto label_1281fc;
        case 0x128200u: goto label_128200;
        case 0x128204u: goto label_128204;
        case 0x128208u: goto label_128208;
        case 0x12820cu: goto label_12820c;
        case 0x128210u: goto label_128210;
        case 0x128214u: goto label_128214;
        case 0x128218u: goto label_128218;
        case 0x12821cu: goto label_12821c;
        case 0x128220u: goto label_128220;
        case 0x128224u: goto label_128224;
        case 0x128228u: goto label_128228;
        case 0x12822cu: goto label_12822c;
        case 0x128230u: goto label_128230;
        case 0x128234u: goto label_128234;
        case 0x128238u: goto label_128238;
        case 0x12823cu: goto label_12823c;
        case 0x128240u: goto label_128240;
        case 0x128244u: goto label_128244;
        case 0x128248u: goto label_128248;
        case 0x12824cu: goto label_12824c;
        case 0x128250u: goto label_128250;
        case 0x128254u: goto label_128254;
        case 0x128258u: goto label_128258;
        case 0x12825cu: goto label_12825c;
        case 0x128260u: goto label_128260;
        case 0x128264u: goto label_128264;
        case 0x128268u: goto label_128268;
        case 0x12826cu: goto label_12826c;
        case 0x128270u: goto label_128270;
        case 0x128274u: goto label_128274;
        case 0x128278u: goto label_128278;
        case 0x12827cu: goto label_12827c;
        case 0x128280u: goto label_128280;
        case 0x128284u: goto label_128284;
        case 0x128288u: goto label_128288;
        case 0x12828cu: goto label_12828c;
        case 0x128290u: goto label_128290;
        case 0x128294u: goto label_128294;
        default: break;
    }

    ctx->pc = 0x127d88u;

label_127d88:
    // 0x127d88: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x127d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_127d8c:
    // 0x127d8c: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x127d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_127d90:
    // 0x127d90: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x127d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_127d94:
    // 0x127d94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x127d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_127d98:
    // 0x127d98: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x127d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_127d9c:
    // 0x127d9c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x127d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_127da0:
    // 0x127da0: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x127da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_127da4:
    // 0x127da4: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x127da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_127da8:
    // 0x127da8: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x127da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_127dac:
    // 0x127dac: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x127dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_127db0:
    // 0x127db0: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x127db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_127db4:
    // 0x127db4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x127db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_127db8:
    // 0x127db8: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x127db8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_127dbc:
    // 0x127dbc: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x127dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_127dc0:
    // 0x127dc0: 0x96220444  lhu         $v0, 0x444($s1)
    ctx->pc = 0x127dc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_127dc4:
    // 0x127dc4: 0x10400127  beqz        $v0, . + 4 + (0x127 << 2)
label_127dc8:
    if (ctx->pc == 0x127DC8u) {
        ctx->pc = 0x127DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DC4u;
        // 0x127dc8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127DCCu;
        goto label_127dcc;
    }
    ctx->pc = 0x127DC4u;
    {
        const bool branch_taken_0x127dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DC4u;
        // 0x127dc8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127dc4) {
            ctx->pc = 0x128264u;
            goto label_128264;
        }
    }
    ctx->pc = 0x127DCCu;
label_127dcc:
    // 0x127dcc: 0x96240444  lhu         $a0, 0x444($s1)
    ctx->pc = 0x127dccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_127dd0:
    // 0x127dd0: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x127dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_127dd4:
    // 0x127dd4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x127dd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127dd8:
    // 0x127dd8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x127dd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_127ddc:
    // 0x127ddc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x127ddcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127de0:
    // 0x127de0: 0x26370180  addiu       $s7, $s1, 0x180
    ctx->pc = 0x127de0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_127de4:
    // 0x127de4: 0x7e230180  sq          $v1, 0x180($s1)
    ctx->pc = 0x127de4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 384), GPR_VEC(ctx, 3));
label_127de8:
    // 0x127de8: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
label_127dec:
    if (ctx->pc == 0x127DECu) {
        ctx->pc = 0x127DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DE8u;
        // 0x127dec: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127DF0u;
        goto label_127df0;
    }
    ctx->pc = 0x127DE8u;
    {
        const bool branch_taken_0x127de8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DE8u;
        // 0x127dec: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127de8) {
            ctx->pc = 0x127E74u;
            goto label_127e74;
        }
    }
    ctx->pc = 0x127DF0u;
label_127df0:
    // 0x127df0: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x127df0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_127df4:
    // 0x127df4: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x127df4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_127df8:
    // 0x127df8: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x127df8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_127dfc:
    // 0x127dfc: 0x26320314  addiu       $s2, $s1, 0x314
    ctx->pc = 0x127dfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
label_127e00:
    // 0x127e00: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x127e00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_127e04:
    // 0x127e04: 0x0  nop
    ctx->pc = 0x127e04u;
    // NOP
label_127e08:
    // 0x127e08: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x127e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_127e0c:
    // 0x127e0c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x127e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_127e10:
    // 0x127e10: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x127e10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_127e14:
    // 0x127e14: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x127e14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_127e18:
    // 0x127e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127e1c:
    // 0x127e1c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x127e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_127e20:
    // 0x127e20: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x127e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_127e24:
    // 0x127e24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x127e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_127e28:
    // 0x127e28: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x127e28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_127e2c:
    // 0x127e2c: 0xc089fe4  jal         func_227F90
label_127e30:
    if (ctx->pc == 0x127E30u) {
        ctx->pc = 0x127E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E2Cu;
        // 0x127e30: 0x7e620010  sq          $v0, 0x10($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E34u;
        goto label_127e34;
    }
    ctx->pc = 0x127E2Cu;
    SET_GPR_U32(ctx, 31, 0x127E34u);
    ctx->pc = 0x127E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127E2Cu;
    // 0x127e30: 0x7e620010  sq          $v0, 0x10($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x127E2Cu, 0x127E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127E34u;
label_127e34:
    // 0x127e34: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x127e34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_127e38:
    // 0x127e38: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x127e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_127e3c:
    // 0x127e3c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x127e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_127e40:
    // 0x127e40: 0x3c2f025  or          $fp, $fp, $v0
    ctx->pc = 0x127e40u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
label_127e44:
    // 0x127e44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x127e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_127e48:
    // 0x127e48: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x127e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_127e4c:
    // 0x127e4c: 0xc136b18  jal         func_4DAC60
label_127e50:
    if (ctx->pc == 0x127E50u) {
        ctx->pc = 0x127E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E4Cu;
        // 0x127e50: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E54u;
        goto label_127e54;
    }
    ctx->pc = 0x127E4Cu;
    SET_GPR_U32(ctx, 31, 0x127E54u);
    ctx->pc = 0x127E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127E4Cu;
    // 0x127e50: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x127E4Cu, 0x127E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127E54u;
label_127e54:
    // 0x127e54: 0x260604e0  addiu       $a2, $s0, 0x4E0
    ctx->pc = 0x127e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
label_127e58:
    // 0x127e58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x127e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_127e5c:
    // 0x127e5c: 0xc136b18  jal         func_4DAC60
label_127e60:
    if (ctx->pc == 0x127E60u) {
        ctx->pc = 0x127E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E5Cu;
        // 0x127e60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E64u;
        goto label_127e64;
    }
    ctx->pc = 0x127E5Cu;
    SET_GPR_U32(ctx, 31, 0x127E64u);
    ctx->pc = 0x127E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127E5Cu;
    // 0x127e60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x127E5Cu, 0x127E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127E64u;
label_127e64:
    // 0x127e64: 0x96220444  lhu         $v0, 0x444($s1)
    ctx->pc = 0x127e64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_127e68:
    // 0x127e68: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x127e68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_127e6c:
    // 0x127e6c: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
label_127e70:
    if (ctx->pc == 0x127E70u) {
        ctx->pc = 0x127E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E6Cu;
        // 0x127e70: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E74u;
        goto label_127e74;
    }
    ctx->pc = 0x127E6Cu;
    {
        const bool branch_taken_0x127e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127e6c) {
            ctx->pc = 0x127E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127E6Cu;
            // 0x127e70: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127e08;
        }
    }
    ctx->pc = 0x127E74u;
label_127e74:
    // 0x127e74: 0x96220444  lhu         $v0, 0x444($s1)
    ctx->pc = 0x127e74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_127e78:
    // 0x127e78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x127e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_127e7c:
    // 0x127e7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x127e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_127e80:
    // 0x127e80: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x127e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_127e84:
    // 0x127e84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x127e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_127e88:
    // 0x127e88: 0x0  nop
    ctx->pc = 0x127e88u;
    // NOP
label_127e8c:
    // 0x127e8c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x127e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_127e90:
    // 0x127e90: 0x0  nop
    ctx->pc = 0x127e90u;
    // NOP
label_127e94:
    // 0x127e94: 0x0  nop
    ctx->pc = 0x127e94u;
    // NOP
label_127e98:
    // 0x127e98: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x127e98u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
label_127e9c:
    // 0x127e9c: 0xc136b24  jal         func_4DAC90
label_127ea0:
    if (ctx->pc == 0x127EA0u) {
        ctx->pc = 0x127EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E9Cu;
        // 0x127ea0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127EA4u;
        goto label_127ea4;
    }
    ctx->pc = 0x127E9Cu;
    SET_GPR_U32(ctx, 31, 0x127EA4u);
    ctx->pc = 0x127EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127E9Cu;
    // 0x127ea0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x127E9Cu, 0x127EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127EA4u;
label_127ea4:
    // 0x127ea4: 0x96220444  lhu         $v0, 0x444($s1)
    ctx->pc = 0x127ea4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_127ea8:
    // 0x127ea8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x127ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_127eac:
    // 0x127eac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x127eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_127eb0:
    // 0x127eb0: 0x0  nop
    ctx->pc = 0x127eb0u;
    // NOP
label_127eb4:
    // 0x127eb4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x127eb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_127eb8:
    // 0x127eb8: 0x0  nop
    ctx->pc = 0x127eb8u;
    // NOP
label_127ebc:
    // 0x127ebc: 0x0  nop
    ctx->pc = 0x127ebcu;
    // NOP
label_127ec0:
    // 0x127ec0: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x127ec0u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
label_127ec4:
    // 0x127ec4: 0xc136b24  jal         func_4DAC90
label_127ec8:
    if (ctx->pc == 0x127EC8u) {
        ctx->pc = 0x127EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EC4u;
        // 0x127ec8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127ECCu;
        goto label_127ecc;
    }
    ctx->pc = 0x127EC4u;
    SET_GPR_U32(ctx, 31, 0x127ECCu);
    ctx->pc = 0x127EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127EC4u;
    // 0x127ec8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x127EC4u, 0x127ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127ECCu;
label_127ecc:
    // 0x127ecc: 0x96230444  lhu         $v1, 0x444($s1)
    ctx->pc = 0x127eccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_127ed0:
    // 0x127ed0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x127ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_127ed4:
    // 0x127ed4: 0x5462007f  bnel        $v1, $v0, . + 4 + (0x7F << 2)
label_127ed8:
    if (ctx->pc == 0x127ED8u) {
        ctx->pc = 0x127ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127ED4u;
        // 0x127ed8: 0xc6210188  lwc1        $f1, 0x188($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x127EDCu;
        goto label_127edc;
    }
    ctx->pc = 0x127ED4u;
    {
        const bool branch_taken_0x127ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127ed4) {
            ctx->pc = 0x127ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127ED4u;
            // 0x127ed8: 0xc6210188  lwc1        $f1, 0x188($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1280D4u;
            goto label_1280d4;
        }
    }
    ctx->pc = 0x127EDCu;
label_127edc:
    // 0x127edc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x127edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_127ee0:
    // 0x127ee0: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x127ee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_127ee4:
    // 0x127ee4: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x127ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_127ee8:
    // 0x127ee8: 0x40f809  jalr        $v0
label_127eec:
    if (ctx->pc == 0x127EECu) {
        ctx->pc = 0x127EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EE8u;
        // 0x127eec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127EF0u;
        goto label_127ef0;
    }
    ctx->pc = 0x127EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x127EF0u);
        ctx->pc = 0x127EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EE8u;
        // 0x127eec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127EE8u, 0x127EF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127EF0u;
label_127ef0:
    // 0x127ef0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x127ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_127ef4:
    // 0x127ef4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x127ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127ef8:
    // 0x127ef8: 0xc136afa  jal         func_4DABE8
label_127efc:
    if (ctx->pc == 0x127EFCu) {
        ctx->pc = 0x127EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EF8u;
        // 0x127efc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F00u;
        goto label_127f00;
    }
    ctx->pc = 0x127EF8u;
    SET_GPR_U32(ctx, 31, 0x127F00u);
    ctx->pc = 0x127EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127EF8u;
    // 0x127efc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x127EF8u, 0x127F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127F00u;
label_127f00:
    // 0x127f00: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x127f00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_127f04:
    // 0x127f04: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x127f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_127f08:
    // 0x127f08: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x127f08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_127f0c:
    // 0x127f0c: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x127f0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_127f10:
    // 0x127f10: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x127f10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_127f14:
    // 0x127f14: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x127f14u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_127f18:
    // 0x127f18: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x127f18u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_127f1c:
    // 0x127f1c: 0x4a0003bf  vwaitq
    ctx->pc = 0x127f1cu;
    // VWAITQ (Q already resolved in this runtime)
label_127f20:
    // 0x127f20: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x127f20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_127f24:
    // 0x127f24: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x127f24u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_127f28:
    // 0x127f28: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x127f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_127f2c:
    // 0x127f2c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x127f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_127f30:
    // 0x127f30: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x127f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_127f34:
    // 0x127f34: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x127f34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_127f38:
    // 0x127f38: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x127f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_127f3c:
    // 0x127f3c: 0x40f809  jalr        $v0
label_127f40:
    if (ctx->pc == 0x127F40u) {
        ctx->pc = 0x127F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F3Cu;
        // 0x127f40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F44u;
        goto label_127f44;
    }
    ctx->pc = 0x127F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x127F44u);
        ctx->pc = 0x127F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F3Cu;
        // 0x127f40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F3Cu, 0x127F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127F44u;
label_127f44:
    // 0x127f44: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x127f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_127f48:
    // 0x127f48: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x127f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_127f4c:
    // 0x127f4c: 0xc136afa  jal         func_4DABE8
label_127f50:
    if (ctx->pc == 0x127F50u) {
        ctx->pc = 0x127F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F4Cu;
        // 0x127f50: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F54u;
        goto label_127f54;
    }
    ctx->pc = 0x127F4Cu;
    SET_GPR_U32(ctx, 31, 0x127F54u);
    ctx->pc = 0x127F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F4Cu;
    // 0x127f50: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x127F4Cu, 0x127F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127F54u;
label_127f54:
    // 0x127f54: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x127f54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_127f58:
    // 0x127f58: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x127f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_127f5c:
    // 0x127f5c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x127f5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_127f60:
    // 0x127f60: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x127f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_127f64:
    // 0x127f64: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x127f64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_127f68:
    // 0x127f68: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x127f68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_127f6c:
    // 0x127f6c: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x127f6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_127f70:
    // 0x127f70: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x127f70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_127f74:
    // 0x127f74: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x127f74u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_127f78:
    // 0x127f78: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x127f78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_127f7c:
    // 0x127f7c: 0xc136b24  jal         func_4DAC90
label_127f80:
    if (ctx->pc == 0x127F80u) {
        ctx->pc = 0x127F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F7Cu;
        // 0x127f80: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F84u;
        goto label_127f84;
    }
    ctx->pc = 0x127F7Cu;
    SET_GPR_U32(ctx, 31, 0x127F84u);
    ctx->pc = 0x127F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F7Cu;
    // 0x127f80: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x127F7Cu, 0x127F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127F84u;
label_127f84:
    // 0x127f84: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x127f84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_127f88:
    // 0x127f88: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x127f88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_127f8c:
    // 0x127f8c: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x127f8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_127f90:
    // 0x127f90: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x127f90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_127f94:
    // 0x127f94: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x127f94u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_127f98:
    // 0x127f98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_127f9c:
    // 0x127f9c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x127f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_127fa0:
    // 0x127fa0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x127fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_127fa4:
    // 0x127fa4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x127fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_127fa8:
    // 0x127fa8: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x127fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_127fac:
    // 0x127fac: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x127facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_127fb0:
    // 0x127fb0: 0x40f809  jalr        $v0
label_127fb4:
    if (ctx->pc == 0x127FB4u) {
        ctx->pc = 0x127FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FB0u;
        // 0x127fb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127FB8u;
        goto label_127fb8;
    }
    ctx->pc = 0x127FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x127FB8u);
        ctx->pc = 0x127FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FB0u;
        // 0x127fb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127FB0u, 0x127FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127FB8u;
label_127fb8:
    // 0x127fb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x127fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127fbc:
    // 0x127fbc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x127fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_127fc0:
    // 0x127fc0: 0xc136afa  jal         func_4DABE8
label_127fc4:
    if (ctx->pc == 0x127FC4u) {
        ctx->pc = 0x127FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FC0u;
        // 0x127fc4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127FC8u;
        goto label_127fc8;
    }
    ctx->pc = 0x127FC0u;
    SET_GPR_U32(ctx, 31, 0x127FC8u);
    ctx->pc = 0x127FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127FC0u;
    // 0x127fc4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x127FC0u, 0x127FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127FC8u;
label_127fc8:
    // 0x127fc8: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x127fc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_127fcc:
    // 0x127fcc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x127fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_127fd0:
    // 0x127fd0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x127fd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_127fd4:
    // 0x127fd4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x127fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_127fd8:
    // 0x127fd8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x127fd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_127fdc:
    // 0x127fdc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x127fdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_127fe0:
    // 0x127fe0: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x127fe0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_127fe4:
    // 0x127fe4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x127fe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_127fe8:
    // 0x127fe8: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x127fe8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_127fec:
    // 0x127fec: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x127fecu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_127ff0:
    // 0x127ff0: 0xc136b24  jal         func_4DAC90
label_127ff4:
    if (ctx->pc == 0x127FF4u) {
        ctx->pc = 0x127FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FF0u;
        // 0x127ff4: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127FF8u;
        goto label_127ff8;
    }
    ctx->pc = 0x127FF0u;
    SET_GPR_U32(ctx, 31, 0x127FF8u);
    ctx->pc = 0x127FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127FF0u;
    // 0x127ff4: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x127FF0u, 0x127FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127FF8u;
label_127ff8:
    // 0x127ff8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x127ff8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_127ffc:
    // 0x127ffc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x127ffcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_128000:
    // 0x128000: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x128000u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_128004:
    // 0x128004: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x128004u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_128008:
    // 0x128008: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x128008u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_12800c:
    // 0x12800c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12800cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128010:
    // 0x128010: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x128010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_128014:
    // 0x128014: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x128014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_128018:
    // 0x128018: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x128018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_12801c:
    // 0x12801c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x12801cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_128020:
    // 0x128020: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x128020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_128024:
    // 0x128024: 0x40f809  jalr        $v0
label_128028:
    if (ctx->pc == 0x128028u) {
        ctx->pc = 0x128028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128024u;
        // 0x128028: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12802Cu;
        goto label_12802c;
    }
    ctx->pc = 0x128024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12802Cu);
        ctx->pc = 0x128028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128024u;
        // 0x128028: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128024u, 0x12802Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12802Cu;
label_12802c:
    // 0x12802c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12802cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_128030:
    // 0x128030: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x128030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_128034:
    // 0x128034: 0xc136afa  jal         func_4DABE8
label_128038:
    if (ctx->pc == 0x128038u) {
        ctx->pc = 0x128038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128034u;
        // 0x128038: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12803Cu;
        goto label_12803c;
    }
    ctx->pc = 0x128034u;
    SET_GPR_U32(ctx, 31, 0x12803Cu);
    ctx->pc = 0x128038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128034u;
    // 0x128038: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x128034u, 0x12803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12803Cu;
label_12803c:
    // 0x12803c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x12803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128040:
    // 0x128040: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x128040u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128044:
    // 0x128044: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x128044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_128048:
    // 0x128048: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x128048u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12804c:
    // 0x12804c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12804cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128050:
    // 0x128050: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x128050u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_128054:
    // 0x128054: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x128054u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_128058:
    // 0x128058: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x128058u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12805c:
    // 0x12805c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x12805cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_128060:
    // 0x128060: 0x4a0003bf  vwaitq
    ctx->pc = 0x128060u;
    // VWAITQ (Q already resolved in this runtime)
label_128064:
    // 0x128064: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x128064u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_128068:
    // 0x128068: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x128068u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_12806c:
    // 0x12806c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x12806cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_128070:
    // 0x128070: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_128074:
    if (ctx->pc == 0x128074u) {
        ctx->pc = 0x128074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128070u;
        // 0x128074: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128078u;
        goto label_128078;
    }
    ctx->pc = 0x128070u;
    {
        const bool branch_taken_0x128070 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x128074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128070u;
        // 0x128074: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128070) {
            ctx->pc = 0x12807Cu;
            goto label_12807c;
        }
    }
    ctx->pc = 0x128078u;
label_128078:
    // 0x128078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12807c:
    // 0x12807c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12807cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_128080:
    // 0x128080: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x128080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_128084:
    // 0x128084: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x128084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_128088:
    // 0x128088: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x128088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12808c:
    // 0x12808c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12808cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_128090:
    // 0x128090: 0x0  nop
    ctx->pc = 0x128090u;
    // NOP
label_128094:
    // 0x128094: 0x0  nop
    ctx->pc = 0x128094u;
    // NOP
label_128098:
    // 0x128098: 0x46000004  c1          0x4
    ctx->pc = 0x128098u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_12809c:
    // 0x12809c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x12809cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_1280a0:
    // 0x1280a0: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x1280a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1280a4:
    // 0x1280a4: 0x0  nop
    ctx->pc = 0x1280a4u;
    // NOP
label_1280a8:
    // 0x1280a8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1280ac:
    if (ctx->pc == 0x1280ACu) {
        ctx->pc = 0x1280ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280A8u;
        // 0x1280ac: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1280B0u;
        goto label_1280b0;
    }
    ctx->pc = 0x1280A8u;
    {
        const bool branch_taken_0x1280a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1280ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280A8u;
        // 0x1280ac: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280a8) {
            ctx->pc = 0x1280D0u;
            goto label_1280d0;
        }
    }
    ctx->pc = 0x1280B0u;
label_1280b0:
    // 0x1280b0: 0xc136b24  jal         func_4DAC90
label_1280b4:
    if (ctx->pc == 0x1280B4u) {
        ctx->pc = 0x1280B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280B0u;
        // 0x1280b4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1280B8u;
        goto label_1280b8;
    }
    ctx->pc = 0x1280B0u;
    SET_GPR_U32(ctx, 31, 0x1280B8u);
    ctx->pc = 0x1280B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1280B0u;
    // 0x1280b4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1280B0u, 0x1280B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1280B8u;
label_1280b8:
    // 0x1280b8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1280b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1280bc:
    // 0x1280bc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1280bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1280c0:
    // 0x1280c0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1280c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1280c4:
    // 0x1280c4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1280c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1280c8:
    // 0x1280c8: 0xc136afa  jal         func_4DABE8
label_1280cc:
    if (ctx->pc == 0x1280CCu) {
        ctx->pc = 0x1280CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280C8u;
        // 0x1280cc: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1280D0u;
        goto label_1280d0;
    }
    ctx->pc = 0x1280C8u;
    SET_GPR_U32(ctx, 31, 0x1280D0u);
    ctx->pc = 0x1280CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1280C8u;
    // 0x1280cc: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1280C8u, 0x1280D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1280D0u;
label_1280d0:
    // 0x1280d0: 0xc6210188  lwc1        $f1, 0x188($s1)
    ctx->pc = 0x1280d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1280d4:
    // 0x1280d4: 0xc6200208  lwc1        $f0, 0x208($s1)
    ctx->pc = 0x1280d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1280d8:
    // 0x1280d8: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x1280d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1280dc:
    // 0x1280dc: 0xe6340188  swc1        $f20, 0x188($s1)
    ctx->pc = 0x1280dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
label_1280e0:
    // 0x1280e0: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1280e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1280e4:
    // 0x1280e4: 0x54c0003f  bnel        $a2, $zero, . + 4 + (0x3F << 2)
label_1280e8:
    if (ctx->pc == 0x1280E8u) {
        ctx->pc = 0x1280E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280E4u;
        // 0x1280e8: 0x96220444  lhu         $v0, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1280ECu;
        goto label_1280ec;
    }
    ctx->pc = 0x1280E4u;
    {
        const bool branch_taken_0x1280e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1280e4) {
            ctx->pc = 0x1280E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1280E4u;
            // 0x1280e8: 0x96220444  lhu         $v0, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1281E4u;
            goto label_1281e4;
        }
    }
    ctx->pc = 0x1280ECu;
label_1280ec:
    // 0x1280ec: 0x57c0003d  bnel        $fp, $zero, . + 4 + (0x3D << 2)
label_1280f0:
    if (ctx->pc == 0x1280F0u) {
        ctx->pc = 0x1280F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280ECu;
        // 0x1280f0: 0x96220444  lhu         $v0, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1280F4u;
        goto label_1280f4;
    }
    ctx->pc = 0x1280ECu;
    {
        const bool branch_taken_0x1280ec = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1280ec) {
            ctx->pc = 0x1280F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1280ECu;
            // 0x1280f0: 0x96220444  lhu         $v0, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1281E4u;
            goto label_1281e4;
        }
    }
    ctx->pc = 0x1280F4u;
label_1280f4:
    // 0x1280f4: 0x26260270  addiu       $a2, $s1, 0x270
    ctx->pc = 0x1280f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
label_1280f8:
    // 0x1280f8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1280f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1280fc:
    // 0x1280fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1280fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_128100:
    // 0x128100: 0xc136afa  jal         func_4DABE8
label_128104:
    if (ctx->pc == 0x128104u) {
        ctx->pc = 0x128104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128100u;
        // 0x128104: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128108u;
        goto label_128108;
    }
    ctx->pc = 0x128100u;
    SET_GPR_U32(ctx, 31, 0x128108u);
    ctx->pc = 0x128104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128100u;
    // 0x128104: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x128100u, 0x128108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128108u;
label_128108:
    // 0x128108: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x128108u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12810c:
    // 0x12810c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12810cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_128110:
    // 0x128110: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x128110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_128114:
    // 0x128114: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x128114u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_128118:
    // 0x128118: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x128118u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12811c:
    // 0x12811c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x12811cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_128120:
    // 0x128120: 0x3c013f23  lui         $at, 0x3F23
    ctx->pc = 0x128120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16163 << 16));
label_128124:
    // 0x128124: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x128124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
label_128128:
    // 0x128128: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12812c:
    // 0x12812c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x12812cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_128130:
    // 0x128130: 0x0  nop
    ctx->pc = 0x128130u;
    // NOP
label_128134:
    // 0x128134: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x128134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128138:
    // 0x128138: 0x0  nop
    ctx->pc = 0x128138u;
    // NOP
label_12813c:
    // 0x12813c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_128140:
    if (ctx->pc == 0x128140u) {
        ctx->pc = 0x128140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12813Cu;
        // 0x128140: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128144u;
        goto label_128144;
    }
    ctx->pc = 0x12813Cu;
    {
        const bool branch_taken_0x12813c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x128140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12813Cu;
        // 0x128140: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12813c) {
            ctx->pc = 0x128164u;
            goto label_128164;
        }
    }
    ctx->pc = 0x128144u;
label_128144:
    // 0x128144: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x128144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_128148:
    // 0x128148: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x128148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_12814c:
    // 0x12814c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12814cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_128150:
    // 0x128150: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x128150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_128154:
    // 0x128154: 0xc136b24  jal         func_4DAC90
label_128158:
    if (ctx->pc == 0x128158u) {
        ctx->pc = 0x128158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128154u;
        // 0x128158: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12815Cu;
        goto label_12815c;
    }
    ctx->pc = 0x128154u;
    SET_GPR_U32(ctx, 31, 0x12815Cu);
    ctx->pc = 0x128158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128154u;
    // 0x128158: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x128154u, 0x12815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12815Cu;
label_12815c:
    // 0x12815c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_128160:
    if (ctx->pc == 0x128160u) {
        ctx->pc = 0x128160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12815Cu;
        // 0x128160: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128164u;
        goto label_128164;
    }
    ctx->pc = 0x12815Cu;
    {
        const bool branch_taken_0x12815c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12815Cu;
        // 0x128160: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12815c) {
            ctx->pc = 0x1281C8u;
            goto label_1281c8;
        }
    }
    ctx->pc = 0x128164u;
label_128164:
    // 0x128164: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x128164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
label_128168:
    // 0x128168: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x128168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
label_12816c:
    // 0x12816c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12816cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128170:
    // 0x128170: 0x0  nop
    ctx->pc = 0x128170u;
    // NOP
label_128174:
    // 0x128174: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x128174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128178:
    // 0x128178: 0x0  nop
    ctx->pc = 0x128178u;
    // NOP
label_12817c:
    // 0x12817c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_128180:
    if (ctx->pc == 0x128180u) {
        ctx->pc = 0x128180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12817Cu;
        // 0x128180: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128184u;
        goto label_128184;
    }
    ctx->pc = 0x12817Cu;
    {
        const bool branch_taken_0x12817c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x128180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12817Cu;
        // 0x128180: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12817c) {
            ctx->pc = 0x1281C8u;
            goto label_1281c8;
        }
    }
    ctx->pc = 0x128184u;
label_128184:
    // 0x128184: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x128184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_128188:
    // 0x128188: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x128188u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12818c:
    // 0x12818c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12818cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_128190:
    // 0x128190: 0x0  nop
    ctx->pc = 0x128190u;
    // NOP
label_128194:
    // 0x128194: 0x0  nop
    ctx->pc = 0x128194u;
    // NOP
label_128198:
    // 0x128198: 0x46020304  c1          0x20304
    ctx->pc = 0x128198u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_12819c:
    // 0x12819c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x12819cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_1281a0:
    // 0x1281a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1281a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1281a4:
    // 0x1281a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1281a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1281a8:
    // 0x1281a8: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x1281a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_1281ac:
    // 0x1281ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1281acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1281b0:
    // 0x1281b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1281b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1281b4:
    // 0x1281b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1281b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1281b8:
    // 0x1281b8: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x1281b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_1281bc:
    // 0x1281bc: 0xc136b24  jal         func_4DAC90
label_1281c0:
    if (ctx->pc == 0x1281C0u) {
        ctx->pc = 0x1281C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281BCu;
        // 0x1281c0: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1281C4u;
        goto label_1281c4;
    }
    ctx->pc = 0x1281BCu;
    SET_GPR_U32(ctx, 31, 0x1281C4u);
    ctx->pc = 0x1281C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1281BCu;
    // 0x1281c0: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1281BCu, 0x1281C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1281C4u;
label_1281c4:
    // 0x1281c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1281c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1281c8:
    // 0x1281c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1281c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1281cc:
    // 0x1281cc: 0xc136b18  jal         func_4DAC60
label_1281d0:
    if (ctx->pc == 0x1281D0u) {
        ctx->pc = 0x1281D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281CCu;
        // 0x1281d0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1281D4u;
        goto label_1281d4;
    }
    ctx->pc = 0x1281CCu;
    SET_GPR_U32(ctx, 31, 0x1281D4u);
    ctx->pc = 0x1281D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1281CCu;
    // 0x1281d0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1281CCu, 0x1281D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1281D4u;
label_1281d4:
    // 0x1281d4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1281d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1281d8:
    // 0x1281d8: 0x7e220180  sq          $v0, 0x180($s1)
    ctx->pc = 0x1281d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 384), GPR_VEC(ctx, 2));
label_1281dc:
    // 0x1281dc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1281dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1281e0:
    // 0x1281e0: 0x96220444  lhu         $v0, 0x444($s1)
    ctx->pc = 0x1281e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_1281e4:
    // 0x1281e4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1281e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1281e8:
    // 0x1281e8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_1281ec:
    if (ctx->pc == 0x1281ECu) {
        ctx->pc = 0x1281ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281E8u;
        // 0x1281ec: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1281F0u;
        goto label_1281f0;
    }
    ctx->pc = 0x1281E8u;
    {
        const bool branch_taken_0x1281e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1281ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281E8u;
        // 0x1281ec: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281e8) {
            ctx->pc = 0x128268u;
            goto label_128268;
        }
    }
    ctx->pc = 0x1281F0u;
label_1281f0:
    // 0x1281f0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1281f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1281f4:
    // 0x1281f4: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x1281f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_1281f8:
    // 0x1281f8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1281f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1281fc:
    // 0x1281fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1281fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128200:
    // 0x128200: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x128200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_128204:
    // 0x128204: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x128204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_128208:
    // 0x128208: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x128208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_12820c:
    // 0x12820c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12820cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128210:
    // 0x128210: 0x0  nop
    ctx->pc = 0x128210u;
    // NOP
label_128214:
    // 0x128214: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_128218:
    if (ctx->pc == 0x128218u) {
        ctx->pc = 0x128218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128214u;
        // 0x128218: 0xe6340188  swc1        $f20, 0x188($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12821Cu;
        goto label_12821c;
    }
    ctx->pc = 0x128214u;
    {
        const bool branch_taken_0x128214 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x128218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128214u;
        // 0x128218: 0xe6340188  swc1        $f20, 0x188($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128214) {
            ctx->pc = 0x12822Cu;
            goto label_12822c;
        }
    }
    ctx->pc = 0x12821Cu;
label_12821c:
    // 0x12821c: 0xc6200208  lwc1        $f0, 0x208($s1)
    ctx->pc = 0x12821cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_128220:
    // 0x128220: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x128220u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_128224:
    // 0x128224: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x128224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_128228:
    // 0x128228: 0xe6200188  swc1        $f0, 0x188($s1)
    ctx->pc = 0x128228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
label_12822c:
    // 0x12822c: 0x7a220180  lq          $v0, 0x180($s1)
    ctx->pc = 0x12822cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 384)));
label_128230:
    // 0x128230: 0xc6220248  lwc1        $f2, 0x248($s1)
    ctx->pc = 0x128230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_128234:
    // 0x128234: 0x7e220240  sq          $v0, 0x240($s1)
    ctx->pc = 0x128234u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 576), GPR_VEC(ctx, 2));
label_128238:
    // 0x128238: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x128238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_12823c:
    // 0x12823c: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_128240:
    if (ctx->pc == 0x128240u) {
        ctx->pc = 0x128240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12823Cu;
        // 0x128240: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128244u;
        goto label_128244;
    }
    ctx->pc = 0x12823Cu;
    {
        const bool branch_taken_0x12823c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x128240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12823Cu;
        // 0x128240: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12823c) {
            ctx->pc = 0x128268u;
            goto label_128268;
        }
    }
    ctx->pc = 0x128244u;
label_128244:
    // 0x128244: 0xc6200248  lwc1        $f0, 0x248($s1)
    ctx->pc = 0x128244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_128248:
    // 0x128248: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x128248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_12824c:
    // 0x12824c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12824cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_128250:
    // 0x128250: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x128250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_128254:
    // 0x128254: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x128254u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_128258:
    // 0x128258: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x128258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12825c:
    // 0x12825c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x12825cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_128260:
    // 0x128260: 0xe6200248  swc1        $f0, 0x248($s1)
    ctx->pc = 0x128260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
label_128264:
    // 0x128264: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x128264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_128268:
    // 0x128268: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x128268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_12826c:
    // 0x12826c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x12826cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_128270:
    // 0x128270: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x128270u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_128274:
    // 0x128274: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x128274u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_128278:
    // 0x128278: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x128278u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_12827c:
    // 0x12827c: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x12827cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_128280:
    // 0x128280: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x128280u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_128284:
    // 0x128284: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x128284u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_128288:
    // 0x128288: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x128288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_12828c:
    // 0x12828c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x12828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_128290:
    // 0x128290: 0x3e00008  jr          $ra
label_128294:
    if (ctx->pc == 0x128294u) {
        ctx->pc = 0x128294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128290u;
        // 0x128294: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128298u;
        goto label_fallthrough_0x128290;
    }
    ctx->pc = 0x128290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128290u;
        // 0x128294: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x128290:
    ctx->pc = 0x128298u;
}
