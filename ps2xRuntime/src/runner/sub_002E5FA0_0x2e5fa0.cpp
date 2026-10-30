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

// Function: sub_002E5FA0
// Address: 0x2e5fa0 - 0x2e63e0
void sub_002E5FA0_0x2e5fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5FA0_0x2e5fa0");
#endif

    switch (ctx->pc) {
        case 0x2e5fa0u: goto label_2e5fa0;
        case 0x2e5fa4u: goto label_2e5fa4;
        case 0x2e5fa8u: goto label_2e5fa8;
        case 0x2e5facu: goto label_2e5fac;
        case 0x2e5fb0u: goto label_2e5fb0;
        case 0x2e5fb4u: goto label_2e5fb4;
        case 0x2e5fb8u: goto label_2e5fb8;
        case 0x2e5fbcu: goto label_2e5fbc;
        case 0x2e5fc0u: goto label_2e5fc0;
        case 0x2e5fc4u: goto label_2e5fc4;
        case 0x2e5fc8u: goto label_2e5fc8;
        case 0x2e5fccu: goto label_2e5fcc;
        case 0x2e5fd0u: goto label_2e5fd0;
        case 0x2e5fd4u: goto label_2e5fd4;
        case 0x2e5fd8u: goto label_2e5fd8;
        case 0x2e5fdcu: goto label_2e5fdc;
        case 0x2e5fe0u: goto label_2e5fe0;
        case 0x2e5fe4u: goto label_2e5fe4;
        case 0x2e5fe8u: goto label_2e5fe8;
        case 0x2e5fecu: goto label_2e5fec;
        case 0x2e5ff0u: goto label_2e5ff0;
        case 0x2e5ff4u: goto label_2e5ff4;
        case 0x2e5ff8u: goto label_2e5ff8;
        case 0x2e5ffcu: goto label_2e5ffc;
        case 0x2e6000u: goto label_2e6000;
        case 0x2e6004u: goto label_2e6004;
        case 0x2e6008u: goto label_2e6008;
        case 0x2e600cu: goto label_2e600c;
        case 0x2e6010u: goto label_2e6010;
        case 0x2e6014u: goto label_2e6014;
        case 0x2e6018u: goto label_2e6018;
        case 0x2e601cu: goto label_2e601c;
        case 0x2e6020u: goto label_2e6020;
        case 0x2e6024u: goto label_2e6024;
        case 0x2e6028u: goto label_2e6028;
        case 0x2e602cu: goto label_2e602c;
        case 0x2e6030u: goto label_2e6030;
        case 0x2e6034u: goto label_2e6034;
        case 0x2e6038u: goto label_2e6038;
        case 0x2e603cu: goto label_2e603c;
        case 0x2e6040u: goto label_2e6040;
        case 0x2e6044u: goto label_2e6044;
        case 0x2e6048u: goto label_2e6048;
        case 0x2e604cu: goto label_2e604c;
        case 0x2e6050u: goto label_2e6050;
        case 0x2e6054u: goto label_2e6054;
        case 0x2e6058u: goto label_2e6058;
        case 0x2e605cu: goto label_2e605c;
        case 0x2e6060u: goto label_2e6060;
        case 0x2e6064u: goto label_2e6064;
        case 0x2e6068u: goto label_2e6068;
        case 0x2e606cu: goto label_2e606c;
        case 0x2e6070u: goto label_2e6070;
        case 0x2e6074u: goto label_2e6074;
        case 0x2e6078u: goto label_2e6078;
        case 0x2e607cu: goto label_2e607c;
        case 0x2e6080u: goto label_2e6080;
        case 0x2e6084u: goto label_2e6084;
        case 0x2e6088u: goto label_2e6088;
        case 0x2e608cu: goto label_2e608c;
        case 0x2e6090u: goto label_2e6090;
        case 0x2e6094u: goto label_2e6094;
        case 0x2e6098u: goto label_2e6098;
        case 0x2e609cu: goto label_2e609c;
        case 0x2e60a0u: goto label_2e60a0;
        case 0x2e60a4u: goto label_2e60a4;
        case 0x2e60a8u: goto label_2e60a8;
        case 0x2e60acu: goto label_2e60ac;
        case 0x2e60b0u: goto label_2e60b0;
        case 0x2e60b4u: goto label_2e60b4;
        case 0x2e60b8u: goto label_2e60b8;
        case 0x2e60bcu: goto label_2e60bc;
        case 0x2e60c0u: goto label_2e60c0;
        case 0x2e60c4u: goto label_2e60c4;
        case 0x2e60c8u: goto label_2e60c8;
        case 0x2e60ccu: goto label_2e60cc;
        case 0x2e60d0u: goto label_2e60d0;
        case 0x2e60d4u: goto label_2e60d4;
        case 0x2e60d8u: goto label_2e60d8;
        case 0x2e60dcu: goto label_2e60dc;
        case 0x2e60e0u: goto label_2e60e0;
        case 0x2e60e4u: goto label_2e60e4;
        case 0x2e60e8u: goto label_2e60e8;
        case 0x2e60ecu: goto label_2e60ec;
        case 0x2e60f0u: goto label_2e60f0;
        case 0x2e60f4u: goto label_2e60f4;
        case 0x2e60f8u: goto label_2e60f8;
        case 0x2e60fcu: goto label_2e60fc;
        case 0x2e6100u: goto label_2e6100;
        case 0x2e6104u: goto label_2e6104;
        case 0x2e6108u: goto label_2e6108;
        case 0x2e610cu: goto label_2e610c;
        case 0x2e6110u: goto label_2e6110;
        case 0x2e6114u: goto label_2e6114;
        case 0x2e6118u: goto label_2e6118;
        case 0x2e611cu: goto label_2e611c;
        case 0x2e6120u: goto label_2e6120;
        case 0x2e6124u: goto label_2e6124;
        case 0x2e6128u: goto label_2e6128;
        case 0x2e612cu: goto label_2e612c;
        case 0x2e6130u: goto label_2e6130;
        case 0x2e6134u: goto label_2e6134;
        case 0x2e6138u: goto label_2e6138;
        case 0x2e613cu: goto label_2e613c;
        case 0x2e6140u: goto label_2e6140;
        case 0x2e6144u: goto label_2e6144;
        case 0x2e6148u: goto label_2e6148;
        case 0x2e614cu: goto label_2e614c;
        case 0x2e6150u: goto label_2e6150;
        case 0x2e6154u: goto label_2e6154;
        case 0x2e6158u: goto label_2e6158;
        case 0x2e615cu: goto label_2e615c;
        case 0x2e6160u: goto label_2e6160;
        case 0x2e6164u: goto label_2e6164;
        case 0x2e6168u: goto label_2e6168;
        case 0x2e616cu: goto label_2e616c;
        case 0x2e6170u: goto label_2e6170;
        case 0x2e6174u: goto label_2e6174;
        case 0x2e6178u: goto label_2e6178;
        case 0x2e617cu: goto label_2e617c;
        case 0x2e6180u: goto label_2e6180;
        case 0x2e6184u: goto label_2e6184;
        case 0x2e6188u: goto label_2e6188;
        case 0x2e618cu: goto label_2e618c;
        case 0x2e6190u: goto label_2e6190;
        case 0x2e6194u: goto label_2e6194;
        case 0x2e6198u: goto label_2e6198;
        case 0x2e619cu: goto label_2e619c;
        case 0x2e61a0u: goto label_2e61a0;
        case 0x2e61a4u: goto label_2e61a4;
        case 0x2e61a8u: goto label_2e61a8;
        case 0x2e61acu: goto label_2e61ac;
        case 0x2e61b0u: goto label_2e61b0;
        case 0x2e61b4u: goto label_2e61b4;
        case 0x2e61b8u: goto label_2e61b8;
        case 0x2e61bcu: goto label_2e61bc;
        case 0x2e61c0u: goto label_2e61c0;
        case 0x2e61c4u: goto label_2e61c4;
        case 0x2e61c8u: goto label_2e61c8;
        case 0x2e61ccu: goto label_2e61cc;
        case 0x2e61d0u: goto label_2e61d0;
        case 0x2e61d4u: goto label_2e61d4;
        case 0x2e61d8u: goto label_2e61d8;
        case 0x2e61dcu: goto label_2e61dc;
        case 0x2e61e0u: goto label_2e61e0;
        case 0x2e61e4u: goto label_2e61e4;
        case 0x2e61e8u: goto label_2e61e8;
        case 0x2e61ecu: goto label_2e61ec;
        case 0x2e61f0u: goto label_2e61f0;
        case 0x2e61f4u: goto label_2e61f4;
        case 0x2e61f8u: goto label_2e61f8;
        case 0x2e61fcu: goto label_2e61fc;
        case 0x2e6200u: goto label_2e6200;
        case 0x2e6204u: goto label_2e6204;
        case 0x2e6208u: goto label_2e6208;
        case 0x2e620cu: goto label_2e620c;
        case 0x2e6210u: goto label_2e6210;
        case 0x2e6214u: goto label_2e6214;
        case 0x2e6218u: goto label_2e6218;
        case 0x2e621cu: goto label_2e621c;
        case 0x2e6220u: goto label_2e6220;
        case 0x2e6224u: goto label_2e6224;
        case 0x2e6228u: goto label_2e6228;
        case 0x2e622cu: goto label_2e622c;
        case 0x2e6230u: goto label_2e6230;
        case 0x2e6234u: goto label_2e6234;
        case 0x2e6238u: goto label_2e6238;
        case 0x2e623cu: goto label_2e623c;
        case 0x2e6240u: goto label_2e6240;
        case 0x2e6244u: goto label_2e6244;
        case 0x2e6248u: goto label_2e6248;
        case 0x2e624cu: goto label_2e624c;
        case 0x2e6250u: goto label_2e6250;
        case 0x2e6254u: goto label_2e6254;
        case 0x2e6258u: goto label_2e6258;
        case 0x2e625cu: goto label_2e625c;
        case 0x2e6260u: goto label_2e6260;
        case 0x2e6264u: goto label_2e6264;
        case 0x2e6268u: goto label_2e6268;
        case 0x2e626cu: goto label_2e626c;
        case 0x2e6270u: goto label_2e6270;
        case 0x2e6274u: goto label_2e6274;
        case 0x2e6278u: goto label_2e6278;
        case 0x2e627cu: goto label_2e627c;
        case 0x2e6280u: goto label_2e6280;
        case 0x2e6284u: goto label_2e6284;
        case 0x2e6288u: goto label_2e6288;
        case 0x2e628cu: goto label_2e628c;
        case 0x2e6290u: goto label_2e6290;
        case 0x2e6294u: goto label_2e6294;
        case 0x2e6298u: goto label_2e6298;
        case 0x2e629cu: goto label_2e629c;
        case 0x2e62a0u: goto label_2e62a0;
        case 0x2e62a4u: goto label_2e62a4;
        case 0x2e62a8u: goto label_2e62a8;
        case 0x2e62acu: goto label_2e62ac;
        case 0x2e62b0u: goto label_2e62b0;
        case 0x2e62b4u: goto label_2e62b4;
        case 0x2e62b8u: goto label_2e62b8;
        case 0x2e62bcu: goto label_2e62bc;
        case 0x2e62c0u: goto label_2e62c0;
        case 0x2e62c4u: goto label_2e62c4;
        case 0x2e62c8u: goto label_2e62c8;
        case 0x2e62ccu: goto label_2e62cc;
        case 0x2e62d0u: goto label_2e62d0;
        case 0x2e62d4u: goto label_2e62d4;
        case 0x2e62d8u: goto label_2e62d8;
        case 0x2e62dcu: goto label_2e62dc;
        case 0x2e62e0u: goto label_2e62e0;
        case 0x2e62e4u: goto label_2e62e4;
        case 0x2e62e8u: goto label_2e62e8;
        case 0x2e62ecu: goto label_2e62ec;
        case 0x2e62f0u: goto label_2e62f0;
        case 0x2e62f4u: goto label_2e62f4;
        case 0x2e62f8u: goto label_2e62f8;
        case 0x2e62fcu: goto label_2e62fc;
        case 0x2e6300u: goto label_2e6300;
        case 0x2e6304u: goto label_2e6304;
        case 0x2e6308u: goto label_2e6308;
        case 0x2e630cu: goto label_2e630c;
        case 0x2e6310u: goto label_2e6310;
        case 0x2e6314u: goto label_2e6314;
        case 0x2e6318u: goto label_2e6318;
        case 0x2e631cu: goto label_2e631c;
        case 0x2e6320u: goto label_2e6320;
        case 0x2e6324u: goto label_2e6324;
        case 0x2e6328u: goto label_2e6328;
        case 0x2e632cu: goto label_2e632c;
        case 0x2e6330u: goto label_2e6330;
        case 0x2e6334u: goto label_2e6334;
        case 0x2e6338u: goto label_2e6338;
        case 0x2e633cu: goto label_2e633c;
        case 0x2e6340u: goto label_2e6340;
        case 0x2e6344u: goto label_2e6344;
        case 0x2e6348u: goto label_2e6348;
        case 0x2e634cu: goto label_2e634c;
        case 0x2e6350u: goto label_2e6350;
        case 0x2e6354u: goto label_2e6354;
        case 0x2e6358u: goto label_2e6358;
        case 0x2e635cu: goto label_2e635c;
        case 0x2e6360u: goto label_2e6360;
        case 0x2e6364u: goto label_2e6364;
        case 0x2e6368u: goto label_2e6368;
        case 0x2e636cu: goto label_2e636c;
        case 0x2e6370u: goto label_2e6370;
        case 0x2e6374u: goto label_2e6374;
        case 0x2e6378u: goto label_2e6378;
        case 0x2e637cu: goto label_2e637c;
        case 0x2e6380u: goto label_2e6380;
        case 0x2e6384u: goto label_2e6384;
        case 0x2e6388u: goto label_2e6388;
        case 0x2e638cu: goto label_2e638c;
        case 0x2e6390u: goto label_2e6390;
        case 0x2e6394u: goto label_2e6394;
        case 0x2e6398u: goto label_2e6398;
        case 0x2e639cu: goto label_2e639c;
        case 0x2e63a0u: goto label_2e63a0;
        case 0x2e63a4u: goto label_2e63a4;
        case 0x2e63a8u: goto label_2e63a8;
        case 0x2e63acu: goto label_2e63ac;
        case 0x2e63b0u: goto label_2e63b0;
        case 0x2e63b4u: goto label_2e63b4;
        case 0x2e63b8u: goto label_2e63b8;
        case 0x2e63bcu: goto label_2e63bc;
        case 0x2e63c0u: goto label_2e63c0;
        case 0x2e63c4u: goto label_2e63c4;
        case 0x2e63c8u: goto label_2e63c8;
        case 0x2e63ccu: goto label_2e63cc;
        case 0x2e63d0u: goto label_2e63d0;
        case 0x2e63d4u: goto label_2e63d4;
        case 0x2e63d8u: goto label_2e63d8;
        case 0x2e63dcu: goto label_2e63dc;
        default: break;
    }

    ctx->pc = 0x2e5fa0u;

label_2e5fa0:
    // 0x2e5fa0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2e5fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2e5fa4:
    // 0x2e5fa4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2e5fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2e5fa8:
    // 0x2e5fa8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2e5fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2e5fac:
    // 0x2e5fac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e5facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e5fb0:
    // 0x2e5fb0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2e5fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_2e5fb4:
    // 0x2e5fb4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e5fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e5fb8:
    // 0x2e5fb8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2e5fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2e5fbc:
    // 0x2e5fbc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2e5fbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2e5fc0:
    // 0x2e5fc0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2e5fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2e5fc4:
    // 0x2e5fc4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2e5fc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2e5fc8:
    // 0x2e5fc8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2e5fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2e5fcc:
    // 0x2e5fcc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e5fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2e5fd0:
    // 0x2e5fd0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2e5fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_2e5fd4:
    // 0x2e5fd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e5fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2e5fd8:
    // 0x2e5fd8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e5fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_2e5fdc:
    // 0x2e5fdc: 0xc0e409a  jal         func_390268
label_2e5fe0:
    if (ctx->pc == 0x2E5FE0u) {
        ctx->pc = 0x2E5FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FDCu;
        // 0x2e5fe0: 0xafa60024  sw          $a2, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5FE4u;
        goto label_2e5fe4;
    }
    ctx->pc = 0x2E5FDCu;
    SET_GPR_U32(ctx, 31, 0x2E5FE4u);
    ctx->pc = 0x2E5FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5FDCu;
    // 0x2e5fe0: 0xafa60024  sw          $a2, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E5FDCu, 0x2E5FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5FE4u;
label_2e5fe4:
    // 0x2e5fe4: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x2e5fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_2e5fe8:
    // 0x2e5fe8: 0xc0e409a  jal         func_390268
label_2e5fec:
    if (ctx->pc == 0x2E5FECu) {
        ctx->pc = 0x2E5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FE8u;
        // 0x2e5fec: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5FF0u;
        goto label_2e5ff0;
    }
    ctx->pc = 0x2E5FE8u;
    SET_GPR_U32(ctx, 31, 0x2E5FF0u);
    ctx->pc = 0x2E5FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5FE8u;
    // 0x2e5fec: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E5FE8u, 0x2E5FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5FF0u;
label_2e5ff0:
    // 0x2e5ff0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e5ff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5ff4:
    // 0x2e5ff4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e5ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2e5ff8:
    // 0x2e5ff8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2e5ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2e5ffc:
    // 0x2e5ffc: 0xc0e409a  jal         func_390268
label_2e6000:
    if (ctx->pc == 0x2E6000u) {
        ctx->pc = 0x2E6000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FFCu;
        // 0x2e6000: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6004u;
        goto label_2e6004;
    }
    ctx->pc = 0x2E5FFCu;
    SET_GPR_U32(ctx, 31, 0x2E6004u);
    ctx->pc = 0x2E6000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5FFCu;
    // 0x2e6000: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E5FFCu, 0x2E6004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6004u;
label_2e6004:
    // 0x2e6004: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2e6004u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6008:
    // 0x2e6008: 0x8624003e  lh          $a0, 0x3E($s1)
    ctx->pc = 0x2e6008u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 62)));
label_2e600c:
    // 0x2e600c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e600cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2e6010:
    // 0x2e6010: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2e6010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2e6014:
    // 0x2e6014: 0xc0e403c  jal         func_3900F0
label_2e6018:
    if (ctx->pc == 0x2E6018u) {
        ctx->pc = 0x2E6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6014u;
        // 0x2e6018: 0x8c770048  lw          $s7, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E601Cu;
        goto label_2e601c;
    }
    ctx->pc = 0x2E6014u;
    SET_GPR_U32(ctx, 31, 0x2E601Cu);
    ctx->pc = 0x2E6018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6014u;
    // 0x2e6018: 0x8c770048  lw          $s7, 0x48($v1) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900F0u, 0x2E6014u, 0x2E601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E601Cu;
label_2e601c:
    // 0x2e601c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e601cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6020:
    // 0x2e6020: 0x520000e5  beql        $s0, $zero, . + 4 + (0xE5 << 2)
label_2e6024:
    if (ctx->pc == 0x2E6024u) {
        ctx->pc = 0x2E6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6020u;
        // 0x2e6024: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6028u;
        goto label_2e6028;
    }
    ctx->pc = 0x2E6020u;
    {
        const bool branch_taken_0x2e6020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6020) {
            ctx->pc = 0x2E6024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6020u;
            // 0x2e6024: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E63B8u;
            goto label_2e63b8;
        }
    }
    ctx->pc = 0x2E6028u;
label_2e6028:
    // 0x2e6028: 0x526000e3  beql        $s3, $zero, . + 4 + (0xE3 << 2)
label_2e602c:
    if (ctx->pc == 0x2E602Cu) {
        ctx->pc = 0x2E602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6028u;
        // 0x2e602c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6030u;
        goto label_2e6030;
    }
    ctx->pc = 0x2E6028u;
    {
        const bool branch_taken_0x2e6028 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6028) {
            ctx->pc = 0x2E602Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6028u;
            // 0x2e602c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E63B8u;
            goto label_2e63b8;
        }
    }
    ctx->pc = 0x2E6030u;
label_2e6030:
    // 0x2e6030: 0x524000e1  beql        $s2, $zero, . + 4 + (0xE1 << 2)
label_2e6034:
    if (ctx->pc == 0x2E6034u) {
        ctx->pc = 0x2E6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6030u;
        // 0x2e6034: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6038u;
        goto label_2e6038;
    }
    ctx->pc = 0x2E6030u;
    {
        const bool branch_taken_0x2e6030 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6030) {
            ctx->pc = 0x2E6034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6030u;
            // 0x2e6034: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E63B8u;
            goto label_2e63b8;
        }
    }
    ctx->pc = 0x2E6038u;
label_2e6038:
    // 0x2e6038: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2e6038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2e603c:
    // 0x2e603c: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x2e603cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_2e6040:
    // 0x2e6040: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2e6040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2e6044:
    // 0x2e6044: 0x544000dc  bnel        $v0, $zero, . + 4 + (0xDC << 2)
label_2e6048:
    if (ctx->pc == 0x2E6048u) {
        ctx->pc = 0x2E6048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6044u;
        // 0x2e6048: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E604Cu;
        goto label_2e604c;
    }
    ctx->pc = 0x2E6044u;
    {
        const bool branch_taken_0x2e6044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6044) {
            ctx->pc = 0x2E6048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6044u;
            // 0x2e6048: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E63B8u;
            goto label_2e63b8;
        }
    }
    ctx->pc = 0x2E604Cu;
label_2e604c:
    // 0x2e604c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2e604cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2e6050:
    // 0x2e6050: 0x106200d8  beq         $v1, $v0, . + 4 + (0xD8 << 2)
label_2e6054:
    if (ctx->pc == 0x2E6054u) {
        ctx->pc = 0x2E6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6050u;
        // 0x2e6054: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6058u;
        goto label_2e6058;
    }
    ctx->pc = 0x2E6050u;
    {
        const bool branch_taken_0x2e6050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6050u;
        // 0x2e6054: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6050) {
            ctx->pc = 0x2E63B4u;
            goto label_2e63b4;
        }
    }
    ctx->pc = 0x2E6058u;
label_2e6058:
    // 0x2e6058: 0x16c20009  bne         $s6, $v0, . + 4 + (0x9 << 2)
label_2e605c:
    if (ctx->pc == 0x2E605Cu) {
        ctx->pc = 0x2E605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6058u;
        // 0x2e605c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6060u;
        goto label_2e6060;
    }
    ctx->pc = 0x2E6058u;
    {
        const bool branch_taken_0x2e6058 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6058u;
        // 0x2e605c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6058) {
            ctx->pc = 0x2E6080u;
            goto label_2e6080;
        }
    }
    ctx->pc = 0x2E6060u;
label_2e6060:
    // 0x2e6060: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2e6060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2e6064:
    // 0x2e6064: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2e6064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2e6068:
    // 0x2e6068: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2e6068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2e606c:
    // 0x2e606c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e606cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2e6070:
    // 0x2e6070: 0xc104a86  jal         func_412A18
label_2e6074:
    if (ctx->pc == 0x2E6074u) {
        ctx->pc = 0x2E6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6070u;
        // 0x2e6074: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6078u;
        goto label_2e6078;
    }
    ctx->pc = 0x2E6070u;
    SET_GPR_U32(ctx, 31, 0x2E6078u);
    ctx->pc = 0x2E6074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6070u;
    // 0x2e6074: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412A18u, 0x2E6070u, 0x2E6078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6078u;
label_2e6078:
    // 0x2e6078: 0x504000cf  beql        $v0, $zero, . + 4 + (0xCF << 2)
label_2e607c:
    if (ctx->pc == 0x2E607Cu) {
        ctx->pc = 0x2E607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6078u;
        // 0x2e607c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6080u;
        goto label_2e6080;
    }
    ctx->pc = 0x2E6078u;
    {
        const bool branch_taken_0x2e6078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6078) {
            ctx->pc = 0x2E607Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6078u;
            // 0x2e607c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E63B8u;
            goto label_2e63b8;
        }
    }
    ctx->pc = 0x2E6080u;
label_2e6080:
    // 0x2e6080: 0x16c00015  bnez        $s6, . + 4 + (0x15 << 2)
label_2e6084:
    if (ctx->pc == 0x2E6084u) {
        ctx->pc = 0x2E6084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6080u;
        // 0x2e6084: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6088u;
        goto label_2e6088;
    }
    ctx->pc = 0x2E6080u;
    {
        const bool branch_taken_0x2e6080 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6080u;
        // 0x2e6084: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6080) {
            ctx->pc = 0x2E60D8u;
            goto label_2e60d8;
        }
    }
    ctx->pc = 0x2E6088u;
label_2e6088:
    // 0x2e6088: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2e6088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2e608c:
    // 0x2e608c: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2e608cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2e6090:
    // 0x2e6090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6094:
    // 0x2e6094: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e6094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2e6098:
    // 0x2e6098: 0xc104a86  jal         func_412A18
label_2e609c:
    if (ctx->pc == 0x2E609Cu) {
        ctx->pc = 0x2E609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6098u;
        // 0x2e609c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E60A0u;
        goto label_2e60a0;
    }
    ctx->pc = 0x2E6098u;
    SET_GPR_U32(ctx, 31, 0x2E60A0u);
    ctx->pc = 0x2E609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6098u;
    // 0x2e609c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412A18u, 0x2E6098u, 0x2E60A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E60A0u;
label_2e60a0:
    // 0x2e60a0: 0x504000c5  beql        $v0, $zero, . + 4 + (0xC5 << 2)
label_2e60a4:
    if (ctx->pc == 0x2E60A4u) {
        ctx->pc = 0x2E60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60A0u;
        // 0x2e60a4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E60A8u;
        goto label_2e60a8;
    }
    ctx->pc = 0x2E60A0u;
    {
        const bool branch_taken_0x2e60a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e60a0) {
            ctx->pc = 0x2E60A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E60A0u;
            // 0x2e60a4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E63B8u;
            goto label_2e63b8;
        }
    }
    ctx->pc = 0x2E60A8u;
label_2e60a8:
    // 0x2e60a8: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_2e60ac:
    if (ctx->pc == 0x2E60ACu) {
        ctx->pc = 0x2E60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60A8u;
        // 0x2e60ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E60B0u;
        goto label_2e60b0;
    }
    ctx->pc = 0x2E60A8u;
    {
        const bool branch_taken_0x2e60a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60A8u;
        // 0x2e60ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e60a8) {
            ctx->pc = 0x2E60D8u;
            goto label_2e60d8;
        }
    }
    ctx->pc = 0x2E60B0u;
label_2e60b0:
    // 0x2e60b0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2e60b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e60b4:
    // 0x2e60b4: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2e60b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2e60b8:
    // 0x2e60b8: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2e60b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2e60bc:
    // 0x2e60bc: 0x60f809  jalr        $v1
label_2e60c0:
    if (ctx->pc == 0x2E60C0u) {
        ctx->pc = 0x2E60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60BCu;
        // 0x2e60c0: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E60C4u;
        goto label_2e60c4;
    }
    ctx->pc = 0x2E60BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E60C4u);
        ctx->pc = 0x2E60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60BCu;
        // 0x2e60c0: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E60BCu, 0x2E60C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E60C4u;
label_2e60c4:
    // 0x2e60c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e60c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e60c8:
    // 0x2e60c8: 0xc104a86  jal         func_412A18
label_2e60cc:
    if (ctx->pc == 0x2E60CCu) {
        ctx->pc = 0x2E60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60C8u;
        // 0x2e60cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E60D0u;
        goto label_2e60d0;
    }
    ctx->pc = 0x2E60C8u;
    SET_GPR_U32(ctx, 31, 0x2E60D0u);
    ctx->pc = 0x2E60CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E60C8u;
    // 0x2e60cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412A18u, 0x2E60C8u, 0x2E60D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E60D0u;
label_2e60d0:
    // 0x2e60d0: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
label_2e60d4:
    if (ctx->pc == 0x2E60D4u) {
        ctx->pc = 0x2E60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60D0u;
        // 0x2e60d4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E60D8u;
        goto label_2e60d8;
    }
    ctx->pc = 0x2E60D0u;
    {
        const bool branch_taken_0x2e60d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60D0u;
        // 0x2e60d4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e60d0) {
            ctx->pc = 0x2E63B8u;
            goto label_2e63b8;
        }
    }
    ctx->pc = 0x2E60D8u;
label_2e60d8:
    // 0x2e60d8: 0xc0a36c8  jal         func_28DB20
label_2e60dc:
    if (ctx->pc == 0x2E60DCu) {
        ctx->pc = 0x2E60DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60D8u;
        // 0x2e60dc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E60E0u;
        goto label_2e60e0;
    }
    ctx->pc = 0x2E60D8u;
    SET_GPR_U32(ctx, 31, 0x2E60E0u);
    ctx->pc = 0x2E60DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E60D8u;
    // 0x2e60dc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2E60D8u, 0x2E60E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E60E0u;
label_2e60e0:
    // 0x2e60e0: 0x92230059  lbu         $v1, 0x59($s1)
    ctx->pc = 0x2e60e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 89)));
label_2e60e4:
    // 0x2e60e4: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
label_2e60e8:
    if (ctx->pc == 0x2E60E8u) {
        ctx->pc = 0x2E60E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60E4u;
        // 0x2e60e8: 0x9222005b  lbu         $v0, 0x5B($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 91)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E60ECu;
        goto label_2e60ec;
    }
    ctx->pc = 0x2E60E4u;
    {
        const bool branch_taken_0x2e60e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e60e4) {
            ctx->pc = 0x2E60E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E60E4u;
            // 0x2e60e8: 0x9222005b  lbu         $v0, 0x5B($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 91)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6140u;
            goto label_2e6140;
        }
    }
    ctx->pc = 0x2E60ECu;
label_2e60ec:
    // 0x2e60ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e60f0:
    // 0x2e60f0: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x2e60f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2e60f4:
    // 0x2e60f4: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_2e60f8:
    if (ctx->pc == 0x2E60F8u) {
        ctx->pc = 0x2E60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60F4u;
        // 0x2e60f8: 0xa2220059  sb          $v0, 0x59($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E60FCu;
        goto label_2e60fc;
    }
    ctx->pc = 0x2E60F4u;
    {
        const bool branch_taken_0x2e60f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60F4u;
        // 0x2e60f8: 0xa2220059  sb          $v0, 0x59($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e60f4) {
            ctx->pc = 0x2E613Cu;
            goto label_2e613c;
        }
    }
    ctx->pc = 0x2E60FCu;
label_2e60fc:
    // 0x2e60fc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2e60fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2e6100:
    // 0x2e6100: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2e6100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2e6104:
    // 0x2e6104: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e6104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e6108:
    // 0x2e6108: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2e6108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2e610c:
    // 0x2e610c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2e610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2e6110:
    // 0x2e6110: 0x40f809  jalr        $v0
label_2e6114:
    if (ctx->pc == 0x2E6114u) {
        ctx->pc = 0x2E6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6110u;
        // 0x2e6114: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6118u;
        goto label_2e6118;
    }
    ctx->pc = 0x2E6110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E6118u);
        ctx->pc = 0x2E6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6110u;
        // 0x2e6114: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6110u, 0x2E6118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6118u;
label_2e6118:
    // 0x2e6118: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2e611c:
    if (ctx->pc == 0x2E611Cu) {
        ctx->pc = 0x2E611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6118u;
        // 0x2e611c: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6120u;
        goto label_2e6120;
    }
    ctx->pc = 0x2E6118u;
    {
        const bool branch_taken_0x2e6118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6118u;
        // 0x2e611c: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6118) {
            ctx->pc = 0x2E613Cu;
            goto label_2e613c;
        }
    }
    ctx->pc = 0x2E6120u;
label_2e6120:
    // 0x2e6120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e6120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6124:
    // 0x2e6124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e6124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6128:
    // 0x2e6128: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2e6128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2e612c:
    // 0x2e612c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2e612cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2e6130:
    // 0x2e6130: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2e6130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2e6134:
    // 0x2e6134: 0x60f809  jalr        $v1
label_2e6138:
    if (ctx->pc == 0x2E6138u) {
        ctx->pc = 0x2E6138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6134u;
        // 0x2e6138: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E613Cu;
        goto label_2e613c;
    }
    ctx->pc = 0x2E6134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E613Cu);
        ctx->pc = 0x2E6138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6134u;
        // 0x2e6138: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6134u, 0x2E613Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E613Cu;
label_2e613c:
    // 0x2e613c: 0x9222005b  lbu         $v0, 0x5B($s1)
    ctx->pc = 0x2e613cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 91)));
label_2e6140:
    // 0x2e6140: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_2e6144:
    if (ctx->pc == 0x2E6144u) {
        ctx->pc = 0x2E6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6140u;
        // 0x2e6144: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6148u;
        goto label_2e6148;
    }
    ctx->pc = 0x2E6140u;
    {
        const bool branch_taken_0x2e6140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6140u;
        // 0x2e6144: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6140) {
            ctx->pc = 0x2E619Cu;
            goto label_2e619c;
        }
    }
    ctx->pc = 0x2E6148u;
label_2e6148:
    // 0x2e6148: 0x12a00014  beqz        $s5, . + 4 + (0x14 << 2)
label_2e614c:
    if (ctx->pc == 0x2E614Cu) {
        ctx->pc = 0x2E6150u;
        goto label_2e6150;
    }
    ctx->pc = 0x2E6148u;
    {
        const bool branch_taken_0x2e6148 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6148) {
            ctx->pc = 0x2E619Cu;
            goto label_2e619c;
        }
    }
    ctx->pc = 0x2E6150u;
label_2e6150:
    // 0x2e6150: 0xc088aa4  jal         func_222A90
label_2e6154:
    if (ctx->pc == 0x2E6154u) {
        ctx->pc = 0x2E6154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6150u;
        // 0x2e6154: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6158u;
        goto label_2e6158;
    }
    ctx->pc = 0x2E6150u;
    SET_GPR_U32(ctx, 31, 0x2E6158u);
    ctx->pc = 0x2E6154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6150u;
    // 0x2e6154: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x2E6150u, 0x2E6158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6158u;
label_2e6158:
    // 0x2e6158: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2e615c:
    if (ctx->pc == 0x2E615Cu) {
        ctx->pc = 0x2E615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6158u;
        // 0x2e615c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6160u;
        goto label_2e6160;
    }
    ctx->pc = 0x2E6158u;
    {
        const bool branch_taken_0x2e6158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6158u;
        // 0x2e615c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6158) {
            ctx->pc = 0x2E619Cu;
            goto label_2e619c;
        }
    }
    ctx->pc = 0x2E6160u;
label_2e6160:
    // 0x2e6160: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x2e6160u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_2e6164:
    // 0x2e6164: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2e6164u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2e6168:
    // 0x2e6168: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2e616c:
    if (ctx->pc == 0x2E616Cu) {
        ctx->pc = 0x2E616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6168u;
        // 0x2e616c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6170u;
        goto label_2e6170;
    }
    ctx->pc = 0x2E6168u;
    {
        const bool branch_taken_0x2e6168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6168u;
        // 0x2e616c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6168) {
            ctx->pc = 0x2E6194u;
            goto label_2e6194;
        }
    }
    ctx->pc = 0x2E6170u;
label_2e6170:
    // 0x2e6170: 0xc087502  jal         func_21D408
label_2e6174:
    if (ctx->pc == 0x2E6174u) {
        ctx->pc = 0x2E6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6170u;
        // 0x2e6174: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6178u;
        goto label_2e6178;
    }
    ctx->pc = 0x2E6170u;
    SET_GPR_U32(ctx, 31, 0x2E6178u);
    ctx->pc = 0x2E6174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6170u;
    // 0x2e6174: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E6170u, 0x2E6178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6178u;
label_2e6178:
    // 0x2e6178: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x2e6178u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2e617c:
    // 0x2e617c: 0xc087502  jal         func_21D408
label_2e6180:
    if (ctx->pc == 0x2E6180u) {
        ctx->pc = 0x2E6180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E617Cu;
        // 0x2e6180: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6184u;
        goto label_2e6184;
    }
    ctx->pc = 0x2E617Cu;
    SET_GPR_U32(ctx, 31, 0x2E6184u);
    ctx->pc = 0x2E6180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E617Cu;
    // 0x2e6180: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E617Cu, 0x2E6184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6184u;
label_2e6184:
    // 0x2e6184: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2e6184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2e6188:
    // 0x2e6188: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
label_2e618c:
    if (ctx->pc == 0x2E618Cu) {
        ctx->pc = 0x2E618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6188u;
        // 0x2e618c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6190u;
        goto label_2e6190;
    }
    ctx->pc = 0x2E6188u;
    {
        const bool branch_taken_0x2e6188 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6188u;
        // 0x2e618c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6188) {
            ctx->pc = 0x2E619Cu;
            goto label_2e619c;
        }
    }
    ctx->pc = 0x2E6190u;
label_2e6190:
    // 0x2e6190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6194:
    // 0x2e6194: 0xa222005b  sb          $v0, 0x5B($s1)
    ctx->pc = 0x2e6194u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 2));
label_2e6198:
    // 0x2e6198: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e619c:
    // 0x2e619c: 0xc088aa4  jal         func_222A90
label_2e61a0:
    if (ctx->pc == 0x2E61A0u) {
        ctx->pc = 0x2E61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E619Cu;
        // 0x2e61a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E61A4u;
        goto label_2e61a4;
    }
    ctx->pc = 0x2E619Cu;
    SET_GPR_U32(ctx, 31, 0x2E61A4u);
    ctx->pc = 0x2E61A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E619Cu;
    // 0x2e61a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x2E619Cu, 0x2E61A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E61A4u;
label_2e61a4:
    // 0x2e61a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e61a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e61a8:
    // 0x2e61a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e61a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2e61ac:
    // 0x2e61ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e61acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e61b0:
    // 0x2e61b0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x2e61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2e61b4:
    // 0x2e61b4: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x2e61b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_2e61b8:
    // 0x2e61b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e61b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e61bc:
    // 0x2e61bc: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
label_2e61c0:
    if (ctx->pc == 0x2E61C0u) {
        ctx->pc = 0x2E61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61BCu;
        // 0x2e61c0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E61C4u;
        goto label_2e61c4;
    }
    ctx->pc = 0x2E61BCu;
    {
        const bool branch_taken_0x2e61bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61BCu;
        // 0x2e61c0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61bc) {
            ctx->pc = 0x2E6268u;
            goto label_2e6268;
        }
    }
    ctx->pc = 0x2E61C4u;
label_2e61c4:
    // 0x2e61c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2e61c8:
    if (ctx->pc == 0x2E61C8u) {
        ctx->pc = 0x2E61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61C4u;
        // 0x2e61c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E61CCu;
        goto label_2e61cc;
    }
    ctx->pc = 0x2E61C4u;
    {
        const bool branch_taken_0x2e61c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e61c4) {
            ctx->pc = 0x2E61C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E61C4u;
            // 0x2e61c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E61DCu;
            goto label_2e61dc;
        }
    }
    ctx->pc = 0x2E61CCu;
label_2e61cc:
    // 0x2e61cc: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
label_2e61d0:
    if (ctx->pc == 0x2E61D0u) {
        ctx->pc = 0x2E61D4u;
        goto label_2e61d4;
    }
    ctx->pc = 0x2E61CCu;
    {
        const bool branch_taken_0x2e61cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e61cc) {
            ctx->pc = 0x2E61F4u;
            goto label_2e61f4;
        }
    }
    ctx->pc = 0x2E61D4u;
label_2e61d4:
    // 0x2e61d4: 0x10000078  b           . + 4 + (0x78 << 2)
label_2e61d8:
    if (ctx->pc == 0x2E61D8u) {
        ctx->pc = 0x2E61D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61D4u;
        // 0x2e61d8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E61DCu;
        goto label_2e61dc;
    }
    ctx->pc = 0x2E61D4u;
    {
        const bool branch_taken_0x2e61d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E61D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61D4u;
        // 0x2e61d8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61d4) {
            ctx->pc = 0x2E63B8u;
            goto label_2e63b8;
        }
    }
    ctx->pc = 0x2E61DCu;
label_2e61dc:
    // 0x2e61dc: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
label_2e61e0:
    if (ctx->pc == 0x2E61E0u) {
        ctx->pc = 0x2E61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61DCu;
        // 0x2e61e0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E61E4u;
        goto label_2e61e4;
    }
    ctx->pc = 0x2E61DCu;
    {
        const bool branch_taken_0x2e61dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61DCu;
        // 0x2e61e0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61dc) {
            ctx->pc = 0x2E62DCu;
            goto label_2e62dc;
        }
    }
    ctx->pc = 0x2E61E4u;
label_2e61e4:
    // 0x2e61e4: 0x10620062  beq         $v1, $v0, . + 4 + (0x62 << 2)
label_2e61e8:
    if (ctx->pc == 0x2E61E8u) {
        ctx->pc = 0x2E61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61E4u;
        // 0x2e61e8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E61ECu;
        goto label_2e61ec;
    }
    ctx->pc = 0x2E61E4u;
    {
        const bool branch_taken_0x2e61e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61E4u;
        // 0x2e61e8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61e4) {
            ctx->pc = 0x2E6370u;
            goto label_2e6370;
        }
    }
    ctx->pc = 0x2E61ECu;
label_2e61ec:
    // 0x2e61ec: 0x10000073  b           . + 4 + (0x73 << 2)
label_2e61f0:
    if (ctx->pc == 0x2E61F0u) {
        ctx->pc = 0x2E61F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61ECu;
        // 0x2e61f0: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E61F4u;
        goto label_2e61f4;
    }
    ctx->pc = 0x2E61ECu;
    {
        const bool branch_taken_0x2e61ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E61F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61ECu;
        // 0x2e61f0: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61ec) {
            ctx->pc = 0x2E63BCu;
            goto label_2e63bc;
        }
    }
    ctx->pc = 0x2E61F4u;
label_2e61f4:
    // 0x2e61f4: 0xc0a367c  jal         func_28D9F0
label_2e61f8:
    if (ctx->pc == 0x2E61F8u) {
        ctx->pc = 0x2E61F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61F4u;
        // 0x2e61f8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E61FCu;
        goto label_2e61fc;
    }
    ctx->pc = 0x2E61F4u;
    SET_GPR_U32(ctx, 31, 0x2E61FCu);
    ctx->pc = 0x2E61F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E61F4u;
    // 0x2e61f8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E61F4u, 0x2E61FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E61FCu;
label_2e61fc:
    // 0x2e61fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e61fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6200:
    // 0x2e6200: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2e6204:
    if (ctx->pc == 0x2E6204u) {
        ctx->pc = 0x2E6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6200u;
        // 0x2e6204: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6208u;
        goto label_2e6208;
    }
    ctx->pc = 0x2E6200u;
    {
        const bool branch_taken_0x2e6200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6200u;
        // 0x2e6204: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6200) {
            ctx->pc = 0x2E622Cu;
            goto label_2e622c;
        }
    }
    ctx->pc = 0x2E6208u;
label_2e6208:
    // 0x2e6208: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2e6208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2e620c:
    // 0x2e620c: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2e620cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_2e6210:
    // 0x2e6210: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e6210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e6214:
    // 0x2e6214: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e6214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2e6218:
    // 0x2e6218: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e6218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2e621c:
    // 0x2e621c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e621cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e6220:
    // 0x2e6220: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2e6220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2e6224:
    // 0x2e6224: 0xc0bf800  jal         func_2FE000
label_2e6228:
    if (ctx->pc == 0x2E6228u) {
        ctx->pc = 0x2E6228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6224u;
        // 0x2e6228: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E622Cu;
        goto label_2e622c;
    }
    ctx->pc = 0x2E6224u;
    SET_GPR_U32(ctx, 31, 0x2E622Cu);
    ctx->pc = 0x2E6228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6224u;
    // 0x2e6228: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2E6224u, 0x2E622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E622Cu;
label_2e622c:
    // 0x2e622c: 0x92220056  lbu         $v0, 0x56($s1)
    ctx->pc = 0x2e622cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 86)));
label_2e6230:
    // 0x2e6230: 0x54400061  bnel        $v0, $zero, . + 4 + (0x61 << 2)
label_2e6234:
    if (ctx->pc == 0x2E6234u) {
        ctx->pc = 0x2E6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6230u;
        // 0x2e6234: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6238u;
        goto label_2e6238;
    }
    ctx->pc = 0x2E6230u;
    {
        const bool branch_taken_0x2e6230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6230) {
            ctx->pc = 0x2E6234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6230u;
            // 0x2e6234: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E63B8u;
            goto label_2e63b8;
        }
    }
    ctx->pc = 0x2E6238u;
label_2e6238:
    // 0x2e6238: 0x1600005f  bnez        $s0, . + 4 + (0x5F << 2)
label_2e623c:
    if (ctx->pc == 0x2E623Cu) {
        ctx->pc = 0x2E623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6238u;
        // 0x2e623c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6240u;
        goto label_2e6240;
    }
    ctx->pc = 0x2E6238u;
    {
        const bool branch_taken_0x2e6238 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6238u;
        // 0x2e623c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6238) {
            ctx->pc = 0x2E63B8u;
            goto label_2e63b8;
        }
    }
    ctx->pc = 0x2E6240u;
label_2e6240:
    // 0x2e6240: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e6240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2e6244:
    // 0x2e6244: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2e6244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2e6248:
    // 0x2e6248: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2e6248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2e624c:
    // 0x2e624c: 0xc0cd4fc  jal         func_3353F0
label_2e6250:
    if (ctx->pc == 0x2E6250u) {
        ctx->pc = 0x2E6250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E624Cu;
        // 0x2e6250: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6254u;
        goto label_2e6254;
    }
    ctx->pc = 0x2E624Cu;
    SET_GPR_U32(ctx, 31, 0x2E6254u);
    ctx->pc = 0x2E6250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E624Cu;
    // 0x2e6250: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2E624Cu, 0x2E6254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6254u;
label_2e6254:
    // 0x2e6254: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2e6254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_2e6258:
    // 0x2e6258: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e6258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e625c:
    // 0x2e625c: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x2e625cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_2e6260:
    // 0x2e6260: 0x10000054  b           . + 4 + (0x54 << 2)
label_2e6264:
    if (ctx->pc == 0x2E6264u) {
        ctx->pc = 0x2E6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6260u;
        // 0x2e6264: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6268u;
        goto label_2e6268;
    }
    ctx->pc = 0x2E6260u;
    {
        const bool branch_taken_0x2e6260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6260u;
        // 0x2e6264: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6260) {
            ctx->pc = 0x2E63B4u;
            goto label_2e63b4;
        }
    }
    ctx->pc = 0x2E6268u;
label_2e6268:
    // 0x2e6268: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e6268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2e626c:
    // 0x2e626c: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2e626cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2e6270:
    // 0x2e6270: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2e6270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2e6274:
    // 0x2e6274: 0xc0cd4fc  jal         func_3353F0
label_2e6278:
    if (ctx->pc == 0x2E6278u) {
        ctx->pc = 0x2E6278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6274u;
        // 0x2e6278: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E627Cu;
        goto label_2e627c;
    }
    ctx->pc = 0x2E6274u;
    SET_GPR_U32(ctx, 31, 0x2E627Cu);
    ctx->pc = 0x2E6278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6274u;
    // 0x2e6278: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2E6274u, 0x2E627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E627Cu;
label_2e627c:
    // 0x2e627c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2e627cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_2e6280:
    // 0x2e6280: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_2e6284:
    if (ctx->pc == 0x2E6284u) {
        ctx->pc = 0x2E6284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6280u;
        // 0x2e6284: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6288u;
        goto label_2e6288;
    }
    ctx->pc = 0x2E6280u;
    {
        const bool branch_taken_0x2e6280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6280u;
        // 0x2e6284: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6280) {
            ctx->pc = 0x2E629Cu;
            goto label_2e629c;
        }
    }
    ctx->pc = 0x2E6288u;
label_2e6288:
    // 0x2e6288: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e6288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e628c:
    // 0x2e628c: 0xae320020  sw          $s2, 0x20($s1)
    ctx->pc = 0x2e628cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 18));
label_2e6290:
    // 0x2e6290: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2e6290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2e6294:
    // 0x2e6294: 0x10000047  b           . + 4 + (0x47 << 2)
label_2e6298:
    if (ctx->pc == 0x2E6298u) {
        ctx->pc = 0x2E6298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6294u;
        // 0x2e6298: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E629Cu;
        goto label_2e629c;
    }
    ctx->pc = 0x2E6294u;
    {
        const bool branch_taken_0x2e6294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6294u;
        // 0x2e6298: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6294) {
            ctx->pc = 0x2E63B4u;
            goto label_2e63b4;
        }
    }
    ctx->pc = 0x2E629Cu;
label_2e629c:
    // 0x2e629c: 0xc0a367c  jal         func_28D9F0
label_2e62a0:
    if (ctx->pc == 0x2E62A0u) {
        ctx->pc = 0x2E62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E629Cu;
        // 0x2e62a0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E62A4u;
        goto label_2e62a4;
    }
    ctx->pc = 0x2E629Cu;
    SET_GPR_U32(ctx, 31, 0x2E62A4u);
    ctx->pc = 0x2E62A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E629Cu;
    // 0x2e62a0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E629Cu, 0x2E62A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62A4u;
label_2e62a4:
    // 0x2e62a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e62a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e62a8:
    // 0x2e62a8: 0x10800042  beqz        $a0, . + 4 + (0x42 << 2)
label_2e62ac:
    if (ctx->pc == 0x2E62ACu) {
        ctx->pc = 0x2E62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62A8u;
        // 0x2e62ac: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E62B0u;
        goto label_2e62b0;
    }
    ctx->pc = 0x2E62A8u;
    {
        const bool branch_taken_0x2e62a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62A8u;
        // 0x2e62ac: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e62a8) {
            ctx->pc = 0x2E63B4u;
            goto label_2e63b4;
        }
    }
    ctx->pc = 0x2E62B0u;
label_2e62b0:
    // 0x2e62b0: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2e62b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2e62b4:
    // 0x2e62b4: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2e62b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_2e62b8:
    // 0x2e62b8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e62b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e62bc:
    // 0x2e62bc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e62bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2e62c0:
    // 0x2e62c0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e62c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2e62c4:
    // 0x2e62c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e62c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e62c8:
    // 0x2e62c8: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2e62c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2e62cc:
    // 0x2e62cc: 0xc0bf800  jal         func_2FE000
label_2e62d0:
    if (ctx->pc == 0x2E62D0u) {
        ctx->pc = 0x2E62D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62CCu;
        // 0x2e62d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E62D4u;
        goto label_2e62d4;
    }
    ctx->pc = 0x2E62CCu;
    SET_GPR_U32(ctx, 31, 0x2E62D4u);
    ctx->pc = 0x2E62D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E62CCu;
    // 0x2e62d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2E62CCu, 0x2E62D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62D4u;
label_2e62d4:
    // 0x2e62d4: 0x10000038  b           . + 4 + (0x38 << 2)
label_2e62d8:
    if (ctx->pc == 0x2E62D8u) {
        ctx->pc = 0x2E62D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62D4u;
        // 0x2e62d8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E62DCu;
        goto label_2e62dc;
    }
    ctx->pc = 0x2E62D4u;
    {
        const bool branch_taken_0x2e62d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E62D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62D4u;
        // 0x2e62d8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e62d4) {
            ctx->pc = 0x2E63B8u;
            goto label_2e63b8;
        }
    }
    ctx->pc = 0x2E62DCu;
label_2e62dc:
    // 0x2e62dc: 0x16c40011  bne         $s6, $a0, . + 4 + (0x11 << 2)
label_2e62e0:
    if (ctx->pc == 0x2E62E0u) {
        ctx->pc = 0x2E62E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62DCu;
        // 0x2e62e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E62E4u;
        goto label_2e62e4;
    }
    ctx->pc = 0x2E62DCu;
    {
        const bool branch_taken_0x2e62dc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E62E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62DCu;
        // 0x2e62e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e62dc) {
            ctx->pc = 0x2E6324u;
            goto label_2e6324;
        }
    }
    ctx->pc = 0x2E62E4u;
label_2e62e4:
    // 0x2e62e4: 0xc088680  jal         func_221A00
label_2e62e8:
    if (ctx->pc == 0x2E62E8u) {
        ctx->pc = 0x2E62E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62E4u;
        // 0x2e62e8: 0x24050158  addiu       $a1, $zero, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E62ECu;
        goto label_2e62ec;
    }
    ctx->pc = 0x2E62E4u;
    SET_GPR_U32(ctx, 31, 0x2E62ECu);
    ctx->pc = 0x2E62E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E62E4u;
    // 0x2e62e8: 0x24050158  addiu       $a1, $zero, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x2E62E4u, 0x2E62ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62ECu;
label_2e62ec:
    // 0x2e62ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2e62f0:
    if (ctx->pc == 0x2E62F0u) {
        ctx->pc = 0x2E62F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62ECu;
        // 0x2e62f0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E62F4u;
        goto label_2e62f4;
    }
    ctx->pc = 0x2E62ECu;
    {
        const bool branch_taken_0x2e62ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E62F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62ECu;
        // 0x2e62f0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e62ec) {
            ctx->pc = 0x2E6324u;
            goto label_2e6324;
        }
    }
    ctx->pc = 0x2E62F4u;
label_2e62f4:
    // 0x2e62f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e62f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e62f8:
    // 0x2e62f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e62f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e62fc:
    // 0x2e62fc: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e62fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e6300:
    // 0x2e6300: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e6304:
    // 0x2e6304: 0x240500bc  addiu       $a1, $zero, 0xBC
    ctx->pc = 0x2e6304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_2e6308:
    // 0x2e6308: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e6308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e630c:
    // 0x2e630c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e630cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6310:
    // 0x2e6310: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e6310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6314:
    // 0x2e6314: 0xc088178  jal         func_2205E0
label_2e6318:
    if (ctx->pc == 0x2E6318u) {
        ctx->pc = 0x2E6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6314u;
        // 0x2e6318: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E631Cu;
        goto label_2e631c;
    }
    ctx->pc = 0x2E6314u;
    SET_GPR_U32(ctx, 31, 0x2E631Cu);
    ctx->pc = 0x2E6318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6314u;
    // 0x2e6318: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E6314u, 0x2E631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E631Cu;
label_2e631c:
    // 0x2e631c: 0x1000000f  b           . + 4 + (0xF << 2)
label_2e6320:
    if (ctx->pc == 0x2E6320u) {
        ctx->pc = 0x2E6324u;
        goto label_2e6324;
    }
    ctx->pc = 0x2E631Cu;
    {
        const bool branch_taken_0x2e631c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e631c) {
            ctx->pc = 0x2E635Cu;
            goto label_2e635c;
        }
    }
    ctx->pc = 0x2E6324u;
label_2e6324:
    // 0x2e6324: 0xc0a367c  jal         func_28D9F0
label_2e6328:
    if (ctx->pc == 0x2E6328u) {
        ctx->pc = 0x2E6328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6324u;
        // 0x2e6328: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E632Cu;
        goto label_2e632c;
    }
    ctx->pc = 0x2E6324u;
    SET_GPR_U32(ctx, 31, 0x2E632Cu);
    ctx->pc = 0x2E6328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6324u;
    // 0x2e6328: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E6324u, 0x2E632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E632Cu;
label_2e632c:
    // 0x2e632c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e632cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6330:
    // 0x2e6330: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2e6334:
    if (ctx->pc == 0x2E6334u) {
        ctx->pc = 0x2E6334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6330u;
        // 0x2e6334: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6338u;
        goto label_2e6338;
    }
    ctx->pc = 0x2E6330u;
    {
        const bool branch_taken_0x2e6330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6330u;
        // 0x2e6334: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6330) {
            ctx->pc = 0x2E635Cu;
            goto label_2e635c;
        }
    }
    ctx->pc = 0x2E6338u;
label_2e6338:
    // 0x2e6338: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2e6338u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2e633c:
    // 0x2e633c: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2e633cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_2e6340:
    // 0x2e6340: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e6340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e6344:
    // 0x2e6344: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e6344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2e6348:
    // 0x2e6348: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e6348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2e634c:
    // 0x2e634c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e634cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e6350:
    // 0x2e6350: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2e6350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2e6354:
    // 0x2e6354: 0xc0bf800  jal         func_2FE000
label_2e6358:
    if (ctx->pc == 0x2E6358u) {
        ctx->pc = 0x2E6358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6354u;
        // 0x2e6358: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E635Cu;
        goto label_2e635c;
    }
    ctx->pc = 0x2E6354u;
    SET_GPR_U32(ctx, 31, 0x2E635Cu);
    ctx->pc = 0x2E6358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6354u;
    // 0x2e6358: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2E6354u, 0x2E635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E635Cu;
label_2e635c:
    // 0x2e635c: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
label_2e6360:
    if (ctx->pc == 0x2E6360u) {
        ctx->pc = 0x2E6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E635Cu;
        // 0x2e6360: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6364u;
        goto label_2e6364;
    }
    ctx->pc = 0x2E635Cu;
    {
        const bool branch_taken_0x2e635c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E635Cu;
        // 0x2e6360: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e635c) {
            ctx->pc = 0x2E63B8u;
            goto label_2e63b8;
        }
    }
    ctx->pc = 0x2E6364u;
label_2e6364:
    // 0x2e6364: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e6364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e6368:
    // 0x2e6368: 0x10000013  b           . + 4 + (0x13 << 2)
label_2e636c:
    if (ctx->pc == 0x2E636Cu) {
        ctx->pc = 0x2E636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6368u;
        // 0x2e636c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6370u;
        goto label_2e6370;
    }
    ctx->pc = 0x2E6368u;
    {
        const bool branch_taken_0x2e6368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6368u;
        // 0x2e636c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6368) {
            ctx->pc = 0x2E63B8u;
            goto label_2e63b8;
        }
    }
    ctx->pc = 0x2E6370u;
label_2e6370:
    // 0x2e6370: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e6370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e6374:
    // 0x2e6374: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e6378:
    // 0x2e6378: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2e6378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2e637c:
    // 0x2e637c: 0xc088680  jal         func_221A00
label_2e6380:
    if (ctx->pc == 0x2E6380u) {
        ctx->pc = 0x2E6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E637Cu;
        // 0x2e6380: 0x24050158  addiu       $a1, $zero, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6384u;
        goto label_2e6384;
    }
    ctx->pc = 0x2E637Cu;
    SET_GPR_U32(ctx, 31, 0x2E6384u);
    ctx->pc = 0x2E6380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E637Cu;
    // 0x2e6380: 0x24050158  addiu       $a1, $zero, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x2E637Cu, 0x2E6384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6384u;
label_2e6384:
    // 0x2e6384: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2e6388:
    if (ctx->pc == 0x2E6388u) {
        ctx->pc = 0x2E6388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6384u;
        // 0x2e6388: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E638Cu;
        goto label_2e638c;
    }
    ctx->pc = 0x2E6384u;
    {
        const bool branch_taken_0x2e6384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6384u;
        // 0x2e6388: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6384) {
            ctx->pc = 0x2E63B4u;
            goto label_2e63b4;
        }
    }
    ctx->pc = 0x2E638Cu;
label_2e638c:
    // 0x2e638c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e638cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e6390:
    // 0x2e6390: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e6390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e6394:
    // 0x2e6394: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e6394u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e6398:
    // 0x2e6398: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e639c:
    // 0x2e639c: 0x240500bc  addiu       $a1, $zero, 0xBC
    ctx->pc = 0x2e639cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_2e63a0:
    // 0x2e63a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e63a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e63a4:
    // 0x2e63a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e63a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e63a8:
    // 0x2e63a8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e63a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e63ac:
    // 0x2e63ac: 0xc088178  jal         func_2205E0
label_2e63b0:
    if (ctx->pc == 0x2E63B0u) {
        ctx->pc = 0x2E63B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63ACu;
        // 0x2e63b0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E63B4u;
        goto label_2e63b4;
    }
    ctx->pc = 0x2E63ACu;
    SET_GPR_U32(ctx, 31, 0x2E63B4u);
    ctx->pc = 0x2E63B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E63ACu;
    // 0x2e63b0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E63ACu, 0x2E63B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E63B4u;
label_2e63b4:
    // 0x2e63b4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2e63b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2e63b8:
    // 0x2e63b8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2e63b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2e63bc:
    // 0x2e63bc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2e63bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2e63c0:
    // 0x2e63c0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2e63c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e63c4:
    // 0x2e63c4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2e63c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e63c8:
    // 0x2e63c8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e63c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e63cc:
    // 0x2e63cc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2e63ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e63d0:
    // 0x2e63d0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2e63d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e63d4:
    // 0x2e63d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e63d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e63d8:
    // 0x2e63d8: 0x3e00008  jr          $ra
label_2e63dc:
    if (ctx->pc == 0x2E63DCu) {
        ctx->pc = 0x2E63DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63D8u;
        // 0x2e63dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E63E0u;
        goto label_fallthrough_0x2e63d8;
    }
    ctx->pc = 0x2E63D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E63DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63D8u;
        // 0x2e63dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E63D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e63d8:
    ctx->pc = 0x2E63E0u;
}
