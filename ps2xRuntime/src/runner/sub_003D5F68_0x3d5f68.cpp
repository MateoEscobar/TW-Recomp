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

// Function: sub_003D5F68
// Address: 0x3d5f68 - 0x3d6480
void sub_003D5F68_0x3d5f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5F68_0x3d5f68");
#endif

    switch (ctx->pc) {
        case 0x3d5f68u: goto label_3d5f68;
        case 0x3d5f6cu: goto label_3d5f6c;
        case 0x3d5f70u: goto label_3d5f70;
        case 0x3d5f74u: goto label_3d5f74;
        case 0x3d5f78u: goto label_3d5f78;
        case 0x3d5f7cu: goto label_3d5f7c;
        case 0x3d5f80u: goto label_3d5f80;
        case 0x3d5f84u: goto label_3d5f84;
        case 0x3d5f88u: goto label_3d5f88;
        case 0x3d5f8cu: goto label_3d5f8c;
        case 0x3d5f90u: goto label_3d5f90;
        case 0x3d5f94u: goto label_3d5f94;
        case 0x3d5f98u: goto label_3d5f98;
        case 0x3d5f9cu: goto label_3d5f9c;
        case 0x3d5fa0u: goto label_3d5fa0;
        case 0x3d5fa4u: goto label_3d5fa4;
        case 0x3d5fa8u: goto label_3d5fa8;
        case 0x3d5facu: goto label_3d5fac;
        case 0x3d5fb0u: goto label_3d5fb0;
        case 0x3d5fb4u: goto label_3d5fb4;
        case 0x3d5fb8u: goto label_3d5fb8;
        case 0x3d5fbcu: goto label_3d5fbc;
        case 0x3d5fc0u: goto label_3d5fc0;
        case 0x3d5fc4u: goto label_3d5fc4;
        case 0x3d5fc8u: goto label_3d5fc8;
        case 0x3d5fccu: goto label_3d5fcc;
        case 0x3d5fd0u: goto label_3d5fd0;
        case 0x3d5fd4u: goto label_3d5fd4;
        case 0x3d5fd8u: goto label_3d5fd8;
        case 0x3d5fdcu: goto label_3d5fdc;
        case 0x3d5fe0u: goto label_3d5fe0;
        case 0x3d5fe4u: goto label_3d5fe4;
        case 0x3d5fe8u: goto label_3d5fe8;
        case 0x3d5fecu: goto label_3d5fec;
        case 0x3d5ff0u: goto label_3d5ff0;
        case 0x3d5ff4u: goto label_3d5ff4;
        case 0x3d5ff8u: goto label_3d5ff8;
        case 0x3d5ffcu: goto label_3d5ffc;
        case 0x3d6000u: goto label_3d6000;
        case 0x3d6004u: goto label_3d6004;
        case 0x3d6008u: goto label_3d6008;
        case 0x3d600cu: goto label_3d600c;
        case 0x3d6010u: goto label_3d6010;
        case 0x3d6014u: goto label_3d6014;
        case 0x3d6018u: goto label_3d6018;
        case 0x3d601cu: goto label_3d601c;
        case 0x3d6020u: goto label_3d6020;
        case 0x3d6024u: goto label_3d6024;
        case 0x3d6028u: goto label_3d6028;
        case 0x3d602cu: goto label_3d602c;
        case 0x3d6030u: goto label_3d6030;
        case 0x3d6034u: goto label_3d6034;
        case 0x3d6038u: goto label_3d6038;
        case 0x3d603cu: goto label_3d603c;
        case 0x3d6040u: goto label_3d6040;
        case 0x3d6044u: goto label_3d6044;
        case 0x3d6048u: goto label_3d6048;
        case 0x3d604cu: goto label_3d604c;
        case 0x3d6050u: goto label_3d6050;
        case 0x3d6054u: goto label_3d6054;
        case 0x3d6058u: goto label_3d6058;
        case 0x3d605cu: goto label_3d605c;
        case 0x3d6060u: goto label_3d6060;
        case 0x3d6064u: goto label_3d6064;
        case 0x3d6068u: goto label_3d6068;
        case 0x3d606cu: goto label_3d606c;
        case 0x3d6070u: goto label_3d6070;
        case 0x3d6074u: goto label_3d6074;
        case 0x3d6078u: goto label_3d6078;
        case 0x3d607cu: goto label_3d607c;
        case 0x3d6080u: goto label_3d6080;
        case 0x3d6084u: goto label_3d6084;
        case 0x3d6088u: goto label_3d6088;
        case 0x3d608cu: goto label_3d608c;
        case 0x3d6090u: goto label_3d6090;
        case 0x3d6094u: goto label_3d6094;
        case 0x3d6098u: goto label_3d6098;
        case 0x3d609cu: goto label_3d609c;
        case 0x3d60a0u: goto label_3d60a0;
        case 0x3d60a4u: goto label_3d60a4;
        case 0x3d60a8u: goto label_3d60a8;
        case 0x3d60acu: goto label_3d60ac;
        case 0x3d60b0u: goto label_3d60b0;
        case 0x3d60b4u: goto label_3d60b4;
        case 0x3d60b8u: goto label_3d60b8;
        case 0x3d60bcu: goto label_3d60bc;
        case 0x3d60c0u: goto label_3d60c0;
        case 0x3d60c4u: goto label_3d60c4;
        case 0x3d60c8u: goto label_3d60c8;
        case 0x3d60ccu: goto label_3d60cc;
        case 0x3d60d0u: goto label_3d60d0;
        case 0x3d60d4u: goto label_3d60d4;
        case 0x3d60d8u: goto label_3d60d8;
        case 0x3d60dcu: goto label_3d60dc;
        case 0x3d60e0u: goto label_3d60e0;
        case 0x3d60e4u: goto label_3d60e4;
        case 0x3d60e8u: goto label_3d60e8;
        case 0x3d60ecu: goto label_3d60ec;
        case 0x3d60f0u: goto label_3d60f0;
        case 0x3d60f4u: goto label_3d60f4;
        case 0x3d60f8u: goto label_3d60f8;
        case 0x3d60fcu: goto label_3d60fc;
        case 0x3d6100u: goto label_3d6100;
        case 0x3d6104u: goto label_3d6104;
        case 0x3d6108u: goto label_3d6108;
        case 0x3d610cu: goto label_3d610c;
        case 0x3d6110u: goto label_3d6110;
        case 0x3d6114u: goto label_3d6114;
        case 0x3d6118u: goto label_3d6118;
        case 0x3d611cu: goto label_3d611c;
        case 0x3d6120u: goto label_3d6120;
        case 0x3d6124u: goto label_3d6124;
        case 0x3d6128u: goto label_3d6128;
        case 0x3d612cu: goto label_3d612c;
        case 0x3d6130u: goto label_3d6130;
        case 0x3d6134u: goto label_3d6134;
        case 0x3d6138u: goto label_3d6138;
        case 0x3d613cu: goto label_3d613c;
        case 0x3d6140u: goto label_3d6140;
        case 0x3d6144u: goto label_3d6144;
        case 0x3d6148u: goto label_3d6148;
        case 0x3d614cu: goto label_3d614c;
        case 0x3d6150u: goto label_3d6150;
        case 0x3d6154u: goto label_3d6154;
        case 0x3d6158u: goto label_3d6158;
        case 0x3d615cu: goto label_3d615c;
        case 0x3d6160u: goto label_3d6160;
        case 0x3d6164u: goto label_3d6164;
        case 0x3d6168u: goto label_3d6168;
        case 0x3d616cu: goto label_3d616c;
        case 0x3d6170u: goto label_3d6170;
        case 0x3d6174u: goto label_3d6174;
        case 0x3d6178u: goto label_3d6178;
        case 0x3d617cu: goto label_3d617c;
        case 0x3d6180u: goto label_3d6180;
        case 0x3d6184u: goto label_3d6184;
        case 0x3d6188u: goto label_3d6188;
        case 0x3d618cu: goto label_3d618c;
        case 0x3d6190u: goto label_3d6190;
        case 0x3d6194u: goto label_3d6194;
        case 0x3d6198u: goto label_3d6198;
        case 0x3d619cu: goto label_3d619c;
        case 0x3d61a0u: goto label_3d61a0;
        case 0x3d61a4u: goto label_3d61a4;
        case 0x3d61a8u: goto label_3d61a8;
        case 0x3d61acu: goto label_3d61ac;
        case 0x3d61b0u: goto label_3d61b0;
        case 0x3d61b4u: goto label_3d61b4;
        case 0x3d61b8u: goto label_3d61b8;
        case 0x3d61bcu: goto label_3d61bc;
        case 0x3d61c0u: goto label_3d61c0;
        case 0x3d61c4u: goto label_3d61c4;
        case 0x3d61c8u: goto label_3d61c8;
        case 0x3d61ccu: goto label_3d61cc;
        case 0x3d61d0u: goto label_3d61d0;
        case 0x3d61d4u: goto label_3d61d4;
        case 0x3d61d8u: goto label_3d61d8;
        case 0x3d61dcu: goto label_3d61dc;
        case 0x3d61e0u: goto label_3d61e0;
        case 0x3d61e4u: goto label_3d61e4;
        case 0x3d61e8u: goto label_3d61e8;
        case 0x3d61ecu: goto label_3d61ec;
        case 0x3d61f0u: goto label_3d61f0;
        case 0x3d61f4u: goto label_3d61f4;
        case 0x3d61f8u: goto label_3d61f8;
        case 0x3d61fcu: goto label_3d61fc;
        case 0x3d6200u: goto label_3d6200;
        case 0x3d6204u: goto label_3d6204;
        case 0x3d6208u: goto label_3d6208;
        case 0x3d620cu: goto label_3d620c;
        case 0x3d6210u: goto label_3d6210;
        case 0x3d6214u: goto label_3d6214;
        case 0x3d6218u: goto label_3d6218;
        case 0x3d621cu: goto label_3d621c;
        case 0x3d6220u: goto label_3d6220;
        case 0x3d6224u: goto label_3d6224;
        case 0x3d6228u: goto label_3d6228;
        case 0x3d622cu: goto label_3d622c;
        case 0x3d6230u: goto label_3d6230;
        case 0x3d6234u: goto label_3d6234;
        case 0x3d6238u: goto label_3d6238;
        case 0x3d623cu: goto label_3d623c;
        case 0x3d6240u: goto label_3d6240;
        case 0x3d6244u: goto label_3d6244;
        case 0x3d6248u: goto label_3d6248;
        case 0x3d624cu: goto label_3d624c;
        case 0x3d6250u: goto label_3d6250;
        case 0x3d6254u: goto label_3d6254;
        case 0x3d6258u: goto label_3d6258;
        case 0x3d625cu: goto label_3d625c;
        case 0x3d6260u: goto label_3d6260;
        case 0x3d6264u: goto label_3d6264;
        case 0x3d6268u: goto label_3d6268;
        case 0x3d626cu: goto label_3d626c;
        case 0x3d6270u: goto label_3d6270;
        case 0x3d6274u: goto label_3d6274;
        case 0x3d6278u: goto label_3d6278;
        case 0x3d627cu: goto label_3d627c;
        case 0x3d6280u: goto label_3d6280;
        case 0x3d6284u: goto label_3d6284;
        case 0x3d6288u: goto label_3d6288;
        case 0x3d628cu: goto label_3d628c;
        case 0x3d6290u: goto label_3d6290;
        case 0x3d6294u: goto label_3d6294;
        case 0x3d6298u: goto label_3d6298;
        case 0x3d629cu: goto label_3d629c;
        case 0x3d62a0u: goto label_3d62a0;
        case 0x3d62a4u: goto label_3d62a4;
        case 0x3d62a8u: goto label_3d62a8;
        case 0x3d62acu: goto label_3d62ac;
        case 0x3d62b0u: goto label_3d62b0;
        case 0x3d62b4u: goto label_3d62b4;
        case 0x3d62b8u: goto label_3d62b8;
        case 0x3d62bcu: goto label_3d62bc;
        case 0x3d62c0u: goto label_3d62c0;
        case 0x3d62c4u: goto label_3d62c4;
        case 0x3d62c8u: goto label_3d62c8;
        case 0x3d62ccu: goto label_3d62cc;
        case 0x3d62d0u: goto label_3d62d0;
        case 0x3d62d4u: goto label_3d62d4;
        case 0x3d62d8u: goto label_3d62d8;
        case 0x3d62dcu: goto label_3d62dc;
        case 0x3d62e0u: goto label_3d62e0;
        case 0x3d62e4u: goto label_3d62e4;
        case 0x3d62e8u: goto label_3d62e8;
        case 0x3d62ecu: goto label_3d62ec;
        case 0x3d62f0u: goto label_3d62f0;
        case 0x3d62f4u: goto label_3d62f4;
        case 0x3d62f8u: goto label_3d62f8;
        case 0x3d62fcu: goto label_3d62fc;
        case 0x3d6300u: goto label_3d6300;
        case 0x3d6304u: goto label_3d6304;
        case 0x3d6308u: goto label_3d6308;
        case 0x3d630cu: goto label_3d630c;
        case 0x3d6310u: goto label_3d6310;
        case 0x3d6314u: goto label_3d6314;
        case 0x3d6318u: goto label_3d6318;
        case 0x3d631cu: goto label_3d631c;
        case 0x3d6320u: goto label_3d6320;
        case 0x3d6324u: goto label_3d6324;
        case 0x3d6328u: goto label_3d6328;
        case 0x3d632cu: goto label_3d632c;
        case 0x3d6330u: goto label_3d6330;
        case 0x3d6334u: goto label_3d6334;
        case 0x3d6338u: goto label_3d6338;
        case 0x3d633cu: goto label_3d633c;
        case 0x3d6340u: goto label_3d6340;
        case 0x3d6344u: goto label_3d6344;
        case 0x3d6348u: goto label_3d6348;
        case 0x3d634cu: goto label_3d634c;
        case 0x3d6350u: goto label_3d6350;
        case 0x3d6354u: goto label_3d6354;
        case 0x3d6358u: goto label_3d6358;
        case 0x3d635cu: goto label_3d635c;
        case 0x3d6360u: goto label_3d6360;
        case 0x3d6364u: goto label_3d6364;
        case 0x3d6368u: goto label_3d6368;
        case 0x3d636cu: goto label_3d636c;
        case 0x3d6370u: goto label_3d6370;
        case 0x3d6374u: goto label_3d6374;
        case 0x3d6378u: goto label_3d6378;
        case 0x3d637cu: goto label_3d637c;
        case 0x3d6380u: goto label_3d6380;
        case 0x3d6384u: goto label_3d6384;
        case 0x3d6388u: goto label_3d6388;
        case 0x3d638cu: goto label_3d638c;
        case 0x3d6390u: goto label_3d6390;
        case 0x3d6394u: goto label_3d6394;
        case 0x3d6398u: goto label_3d6398;
        case 0x3d639cu: goto label_3d639c;
        case 0x3d63a0u: goto label_3d63a0;
        case 0x3d63a4u: goto label_3d63a4;
        case 0x3d63a8u: goto label_3d63a8;
        case 0x3d63acu: goto label_3d63ac;
        case 0x3d63b0u: goto label_3d63b0;
        case 0x3d63b4u: goto label_3d63b4;
        case 0x3d63b8u: goto label_3d63b8;
        case 0x3d63bcu: goto label_3d63bc;
        case 0x3d63c0u: goto label_3d63c0;
        case 0x3d63c4u: goto label_3d63c4;
        case 0x3d63c8u: goto label_3d63c8;
        case 0x3d63ccu: goto label_3d63cc;
        case 0x3d63d0u: goto label_3d63d0;
        case 0x3d63d4u: goto label_3d63d4;
        case 0x3d63d8u: goto label_3d63d8;
        case 0x3d63dcu: goto label_3d63dc;
        case 0x3d63e0u: goto label_3d63e0;
        case 0x3d63e4u: goto label_3d63e4;
        case 0x3d63e8u: goto label_3d63e8;
        case 0x3d63ecu: goto label_3d63ec;
        case 0x3d63f0u: goto label_3d63f0;
        case 0x3d63f4u: goto label_3d63f4;
        case 0x3d63f8u: goto label_3d63f8;
        case 0x3d63fcu: goto label_3d63fc;
        case 0x3d6400u: goto label_3d6400;
        case 0x3d6404u: goto label_3d6404;
        case 0x3d6408u: goto label_3d6408;
        case 0x3d640cu: goto label_3d640c;
        case 0x3d6410u: goto label_3d6410;
        case 0x3d6414u: goto label_3d6414;
        case 0x3d6418u: goto label_3d6418;
        case 0x3d641cu: goto label_3d641c;
        case 0x3d6420u: goto label_3d6420;
        case 0x3d6424u: goto label_3d6424;
        case 0x3d6428u: goto label_3d6428;
        case 0x3d642cu: goto label_3d642c;
        case 0x3d6430u: goto label_3d6430;
        case 0x3d6434u: goto label_3d6434;
        case 0x3d6438u: goto label_3d6438;
        case 0x3d643cu: goto label_3d643c;
        case 0x3d6440u: goto label_3d6440;
        case 0x3d6444u: goto label_3d6444;
        case 0x3d6448u: goto label_3d6448;
        case 0x3d644cu: goto label_3d644c;
        case 0x3d6450u: goto label_3d6450;
        case 0x3d6454u: goto label_3d6454;
        case 0x3d6458u: goto label_3d6458;
        case 0x3d645cu: goto label_3d645c;
        case 0x3d6460u: goto label_3d6460;
        case 0x3d6464u: goto label_3d6464;
        case 0x3d6468u: goto label_3d6468;
        case 0x3d646cu: goto label_3d646c;
        case 0x3d6470u: goto label_3d6470;
        case 0x3d6474u: goto label_3d6474;
        case 0x3d6478u: goto label_3d6478;
        case 0x3d647cu: goto label_3d647c;
        default: break;
    }

    ctx->pc = 0x3d5f68u;

label_3d5f68:
    // 0x3d5f68: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3d5f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3d5f6c:
    // 0x3d5f6c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3d5f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3d5f70:
    // 0x3d5f70: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3d5f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3d5f74:
    // 0x3d5f74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d5f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d5f78:
    // 0x3d5f78: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3d5f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_3d5f7c:
    // 0x3d5f7c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3d5f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d5f80:
    // 0x3d5f80: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3d5f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_3d5f84:
    // 0x3d5f84: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3d5f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3d5f88:
    // 0x3d5f88: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3d5f88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d5f8c:
    // 0x3d5f8c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3d5f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3d5f90:
    // 0x3d5f90: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x3d5f90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_3d5f94:
    // 0x3d5f94: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x3d5f94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_3d5f98:
    // 0x3d5f98: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x3d5f98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_3d5f9c:
    // 0x3d5f9c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3d5f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3d5fa0:
    // 0x3d5fa0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d5fa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d5fa4:
    // 0x3d5fa4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d5fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d5fa8:
    // 0x3d5fa8: 0x40f809  jalr        $v0
label_3d5fac:
    if (ctx->pc == 0x3D5FACu) {
        ctx->pc = 0x3D5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FA8u;
        // 0x3d5fac: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5FB0u;
        goto label_3d5fb0;
    }
    ctx->pc = 0x3D5FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D5FB0u);
        ctx->pc = 0x3D5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FA8u;
        // 0x3d5fac: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5FA8u, 0x3D5FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5FB0u;
label_3d5fb0:
    // 0x3d5fb0: 0x2603ffee  addiu       $v1, $s0, -0x12
    ctx->pc = 0x3d5fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967278));
label_3d5fb4:
    // 0x3d5fb4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d5fb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5fb8:
    // 0x3d5fb8: 0x2c62002f  sltiu       $v0, $v1, 0x2F
    ctx->pc = 0x3d5fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)47) ? 1 : 0);
label_3d5fbc:
    // 0x3d5fbc: 0x10400125  beqz        $v0, . + 4 + (0x125 << 2)
label_3d5fc0:
    if (ctx->pc == 0x3D5FC0u) {
        ctx->pc = 0x3D5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FBCu;
        // 0x3d5fc0: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5FC4u;
        goto label_3d5fc4;
    }
    ctx->pc = 0x3D5FBCu;
    {
        const bool branch_taken_0x3d5fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FBCu;
        // 0x3d5fc0: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5fbc) {
            ctx->pc = 0x3D6454u;
            goto label_3d6454;
        }
    }
    ctx->pc = 0x3D5FC4u;
label_3d5fc4:
    // 0x3d5fc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d5fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d5fc8:
    // 0x3d5fc8: 0x24424f80  addiu       $v0, $v0, 0x4F80
    ctx->pc = 0x3d5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20352));
label_3d5fcc:
    // 0x3d5fcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d5fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d5fd0:
    // 0x3d5fd0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d5fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d5fd4:
    // 0x3d5fd4: 0x800008  jr          $a0
label_3d5fd8:
    if (ctx->pc == 0x3D5FD8u) {
        ctx->pc = 0x3D5FDCu;
        goto label_3d5fdc;
    }
    ctx->pc = 0x3D5FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D5FDCu: goto label_3d5fdc;
            case 0x3D5FF8u: goto label_3d5ff8;
            case 0x3D60A4u: goto label_3d60a4;
            case 0x3D6140u: goto label_3d6140;
            case 0x3D61B4u: goto label_3d61b4;
            case 0x3D6454u: goto label_3d6454;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5FD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D5FDCu;
label_3d5fdc:
    // 0x3d5fdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d5fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d5fe0:
    // 0x3d5fe0: 0xc0ea12a  jal         func_3A84A8
label_3d5fe4:
    if (ctx->pc == 0x3D5FE4u) {
        ctx->pc = 0x3D5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FE0u;
        // 0x3d5fe4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5FE8u;
        goto label_3d5fe8;
    }
    ctx->pc = 0x3D5FE0u;
    SET_GPR_U32(ctx, 31, 0x3D5FE8u);
    ctx->pc = 0x3D5FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5FE0u;
    // 0x3d5fe4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D5FE0u, 0x3D5FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5FE8u;
label_3d5fe8:
    // 0x3d5fe8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d5fe8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d5fec:
    // 0x3d5fec: 0x7e820020  sq          $v0, 0x20($s4)
    ctx->pc = 0x3d5fecu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
label_3d5ff0:
    // 0x3d5ff0: 0x10000118  b           . + 4 + (0x118 << 2)
label_3d5ff4:
    if (ctx->pc == 0x3D5FF4u) {
        ctx->pc = 0x3D5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FF0u;
        // 0x3d5ff4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5FF8u;
        goto label_3d5ff8;
    }
    ctx->pc = 0x3D5FF0u;
    {
        const bool branch_taken_0x3d5ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FF0u;
        // 0x3d5ff4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5ff0) {
            ctx->pc = 0x3D6454u;
            goto label_3d6454;
        }
    }
    ctx->pc = 0x3D5FF8u;
label_3d5ff8:
    // 0x3d5ff8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3d5ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d5ffc:
    // 0x3d5ffc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d6000:
    // 0x3d6000: 0x14620115  bne         $v1, $v0, . + 4 + (0x115 << 2)
label_3d6004:
    if (ctx->pc == 0x3D6004u) {
        ctx->pc = 0x3D6004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6000u;
        // 0x3d6004: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6008u;
        goto label_3d6008;
    }
    ctx->pc = 0x3D6000u;
    {
        const bool branch_taken_0x3d6000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D6004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6000u;
        // 0x3d6004: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6000) {
            ctx->pc = 0x3D6458u;
            goto label_3d6458;
        }
    }
    ctx->pc = 0x3D6008u;
label_3d6008:
    // 0x3d6008: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d6008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d600c:
    // 0x3d600c: 0xc0ea16a  jal         func_3A85A8
label_3d6010:
    if (ctx->pc == 0x3D6010u) {
        ctx->pc = 0x3D6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D600Cu;
        // 0x3d6010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6014u;
        goto label_3d6014;
    }
    ctx->pc = 0x3D600Cu;
    SET_GPR_U32(ctx, 31, 0x3D6014u);
    ctx->pc = 0x3D6010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D600Cu;
    // 0x3d6010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D600Cu, 0x3D6014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6014u;
label_3d6014:
    // 0x3d6014: 0x8e67000c  lw          $a3, 0xC($s3)
    ctx->pc = 0x3d6014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3d6018:
    // 0x3d6018: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d6018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d601c:
    // 0x3d601c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3d601cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d6020:
    // 0x3d6020: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d6020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d6024:
    // 0x3d6024: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d6024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d6028:
    // 0x3d6028: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d6028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d602c:
    // 0x3d602c: 0x60f809  jalr        $v1
label_3d6030:
    if (ctx->pc == 0x3D6030u) {
        ctx->pc = 0x3D6030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D602Cu;
        // 0x3d6030: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6034u;
        goto label_3d6034;
    }
    ctx->pc = 0x3D602Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D6034u);
        ctx->pc = 0x3D6030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D602Cu;
        // 0x3d6030: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D602Cu, 0x3D6034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D6034u;
label_3d6034:
    // 0x3d6034: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d6034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6038:
    // 0x3d6038: 0xc0ea16a  jal         func_3A85A8
label_3d603c:
    if (ctx->pc == 0x3D603Cu) {
        ctx->pc = 0x3D603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6038u;
        // 0x3d603c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6040u;
        goto label_3d6040;
    }
    ctx->pc = 0x3D6038u;
    SET_GPR_U32(ctx, 31, 0x3D6040u);
    ctx->pc = 0x3D603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6038u;
    // 0x3d603c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D6038u, 0x3D6040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6040u;
label_3d6040:
    // 0x3d6040: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x3d6040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3d6044:
    // 0x3d6044: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d6044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6048:
    // 0x3d6048: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3d6048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d604c:
    // 0x3d604c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d604cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d6050:
    // 0x3d6050: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d6050u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d6054:
    // 0x3d6054: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d6054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d6058:
    // 0x3d6058: 0x60f809  jalr        $v1
label_3d605c:
    if (ctx->pc == 0x3D605Cu) {
        ctx->pc = 0x3D605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6058u;
        // 0x3d605c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6060u;
        goto label_3d6060;
    }
    ctx->pc = 0x3D6058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D6060u);
        ctx->pc = 0x3D605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6058u;
        // 0x3d605c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6058u, 0x3D6060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D6060u;
label_3d6060:
    // 0x3d6060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d6060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6064:
    // 0x3d6064: 0xc0ea16a  jal         func_3A85A8
label_3d6068:
    if (ctx->pc == 0x3D6068u) {
        ctx->pc = 0x3D6068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6064u;
        // 0x3d6068: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D606Cu;
        goto label_3d606c;
    }
    ctx->pc = 0x3D6064u;
    SET_GPR_U32(ctx, 31, 0x3D606Cu);
    ctx->pc = 0x3D6068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6064u;
    // 0x3d6068: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D6064u, 0x3D606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D606Cu;
label_3d606c:
    // 0x3d606c: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x3d606cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3d6070:
    // 0x3d6070: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d6070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6074:
    // 0x3d6074: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3d6074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d6078:
    // 0x3d6078: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d6078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d607c:
    // 0x3d607c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d607cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d6080:
    // 0x3d6080: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d6080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d6084:
    // 0x3d6084: 0x60f809  jalr        $v1
label_3d6088:
    if (ctx->pc == 0x3D6088u) {
        ctx->pc = 0x3D6088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6084u;
        // 0x3d6088: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D608Cu;
        goto label_3d608c;
    }
    ctx->pc = 0x3D6084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D608Cu);
        ctx->pc = 0x3D6088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6084u;
        // 0x3d6088: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6084u, 0x3D608Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D608Cu;
label_3d608c:
    // 0x3d608c: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x3d608cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3d6090:
    // 0x3d6090: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3d6090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3d6094:
    // 0x3d6094: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x3d6094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_3d6098:
    // 0x3d6098: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x3d6098u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_3d609c:
    // 0x3d609c: 0x100000ed  b           . + 4 + (0xED << 2)
label_3d60a0:
    if (ctx->pc == 0x3D60A0u) {
        ctx->pc = 0x3D60A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D609Cu;
        // 0x3d60a0: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D60A4u;
        goto label_3d60a4;
    }
    ctx->pc = 0x3D609Cu;
    {
        const bool branch_taken_0x3d609c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D60A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D609Cu;
        // 0x3d60a0: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d609c) {
            ctx->pc = 0x3D6454u;
            goto label_3d6454;
        }
    }
    ctx->pc = 0x3D60A4u;
label_3d60a4:
    // 0x3d60a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d60a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d60a8:
    // 0x3d60a8: 0xc0ea16a  jal         func_3A85A8
label_3d60ac:
    if (ctx->pc == 0x3D60ACu) {
        ctx->pc = 0x3D60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60A8u;
        // 0x3d60ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D60B0u;
        goto label_3d60b0;
    }
    ctx->pc = 0x3D60A8u;
    SET_GPR_U32(ctx, 31, 0x3D60B0u);
    ctx->pc = 0x3D60ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D60A8u;
    // 0x3d60ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D60A8u, 0x3D60B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D60B0u;
label_3d60b0:
    // 0x3d60b0: 0x8e67000c  lw          $a3, 0xC($s3)
    ctx->pc = 0x3d60b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3d60b4:
    // 0x3d60b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d60b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d60b8:
    // 0x3d60b8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3d60b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d60bc:
    // 0x3d60bc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d60bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d60c0:
    // 0x3d60c0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d60c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d60c4:
    // 0x3d60c4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d60c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d60c8:
    // 0x3d60c8: 0x60f809  jalr        $v1
label_3d60cc:
    if (ctx->pc == 0x3D60CCu) {
        ctx->pc = 0x3D60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60C8u;
        // 0x3d60cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D60D0u;
        goto label_3d60d0;
    }
    ctx->pc = 0x3D60C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D60D0u);
        ctx->pc = 0x3D60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60C8u;
        // 0x3d60cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D60C8u, 0x3D60D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D60D0u;
label_3d60d0:
    // 0x3d60d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d60d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d60d4:
    // 0x3d60d4: 0xc0ea16a  jal         func_3A85A8
label_3d60d8:
    if (ctx->pc == 0x3D60D8u) {
        ctx->pc = 0x3D60D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60D4u;
        // 0x3d60d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D60DCu;
        goto label_3d60dc;
    }
    ctx->pc = 0x3D60D4u;
    SET_GPR_U32(ctx, 31, 0x3D60DCu);
    ctx->pc = 0x3D60D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D60D4u;
    // 0x3d60d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D60D4u, 0x3D60DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D60DCu;
label_3d60dc:
    // 0x3d60dc: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x3d60dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3d60e0:
    // 0x3d60e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d60e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d60e4:
    // 0x3d60e4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3d60e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d60e8:
    // 0x3d60e8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d60ec:
    // 0x3d60ec: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d60ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d60f0:
    // 0x3d60f0: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d60f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d60f4:
    // 0x3d60f4: 0x60f809  jalr        $v1
label_3d60f8:
    if (ctx->pc == 0x3D60F8u) {
        ctx->pc = 0x3D60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60F4u;
        // 0x3d60f8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D60FCu;
        goto label_3d60fc;
    }
    ctx->pc = 0x3D60F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D60FCu);
        ctx->pc = 0x3D60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60F4u;
        // 0x3d60f8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D60F4u, 0x3D60FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D60FCu;
label_3d60fc:
    // 0x3d60fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d60fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6100:
    // 0x3d6100: 0xc0ea16a  jal         func_3A85A8
label_3d6104:
    if (ctx->pc == 0x3D6104u) {
        ctx->pc = 0x3D6104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6100u;
        // 0x3d6104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6108u;
        goto label_3d6108;
    }
    ctx->pc = 0x3D6100u;
    SET_GPR_U32(ctx, 31, 0x3D6108u);
    ctx->pc = 0x3D6104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6100u;
    // 0x3d6104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D6100u, 0x3D6108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6108u;
label_3d6108:
    // 0x3d6108: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x3d6108u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3d610c:
    // 0x3d610c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d610cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6110:
    // 0x3d6110: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3d6110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d6114:
    // 0x3d6114: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d6114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d6118:
    // 0x3d6118: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d6118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d611c:
    // 0x3d611c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d611cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d6120:
    // 0x3d6120: 0x60f809  jalr        $v1
label_3d6124:
    if (ctx->pc == 0x3D6124u) {
        ctx->pc = 0x3D6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6120u;
        // 0x3d6124: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6128u;
        goto label_3d6128;
    }
    ctx->pc = 0x3D6120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D6128u);
        ctx->pc = 0x3D6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6120u;
        // 0x3d6124: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6120u, 0x3D6128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D6128u;
label_3d6128:
    // 0x3d6128: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x3d6128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3d612c:
    // 0x3d612c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d612cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d6130:
    // 0x3d6130: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3d6130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3d6134:
    // 0x3d6134: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x3d6134u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_3d6138:
    // 0x3d6138: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_3d613c:
    if (ctx->pc == 0x3D613Cu) {
        ctx->pc = 0x3D613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6138u;
        // 0x3d613c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6140u;
        goto label_3d6140;
    }
    ctx->pc = 0x3D6138u;
    {
        const bool branch_taken_0x3d6138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6138u;
        // 0x3d613c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6138) {
            ctx->pc = 0x3D6454u;
            goto label_3d6454;
        }
    }
    ctx->pc = 0x3D6140u;
label_3d6140:
    // 0x3d6140: 0x8e67000c  lw          $a3, 0xC($s3)
    ctx->pc = 0x3d6140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3d6144:
    // 0x3d6144: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3d6144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3d6148:
    // 0x3d6148: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d6148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d614c:
    // 0x3d614c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d6150:
    // 0x3d6150: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d6150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d6154:
    // 0x3d6154: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d6154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d6158:
    // 0x3d6158: 0x60f809  jalr        $v1
label_3d615c:
    if (ctx->pc == 0x3D615Cu) {
        ctx->pc = 0x3D615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6158u;
        // 0x3d615c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6160u;
        goto label_3d6160;
    }
    ctx->pc = 0x3D6158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D6160u);
        ctx->pc = 0x3D615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6158u;
        // 0x3d615c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6158u, 0x3D6160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D6160u;
label_3d6160:
    // 0x3d6160: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x3d6160u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3d6164:
    // 0x3d6164: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3d6164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3d6168:
    // 0x3d6168: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d6168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d616c:
    // 0x3d616c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d6170:
    // 0x3d6170: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d6170u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d6174:
    // 0x3d6174: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d6174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d6178:
    // 0x3d6178: 0x60f809  jalr        $v1
label_3d617c:
    if (ctx->pc == 0x3D617Cu) {
        ctx->pc = 0x3D617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6178u;
        // 0x3d617c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6180u;
        goto label_3d6180;
    }
    ctx->pc = 0x3D6178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D6180u);
        ctx->pc = 0x3D617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6178u;
        // 0x3d617c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6178u, 0x3D6180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D6180u;
label_3d6180:
    // 0x3d6180: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x3d6180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3d6184:
    // 0x3d6184: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d6184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6188:
    // 0x3d6188: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3d6188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3d618c:
    // 0x3d618c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d618cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d6190:
    // 0x3d6190: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d6190u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d6194:
    // 0x3d6194: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d6194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d6198:
    // 0x3d6198: 0x60f809  jalr        $v1
label_3d619c:
    if (ctx->pc == 0x3D619Cu) {
        ctx->pc = 0x3D619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6198u;
        // 0x3d619c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D61A0u;
        goto label_3d61a0;
    }
    ctx->pc = 0x3D6198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D61A0u);
        ctx->pc = 0x3D619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6198u;
        // 0x3d619c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6198u, 0x3D61A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D61A0u;
label_3d61a0:
    // 0x3d61a0: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x3d61a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3d61a4:
    // 0x3d61a4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3d61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3d61a8:
    // 0x3d61a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d61a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d61ac:
    // 0x3d61ac: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_3d61b0:
    if (ctx->pc == 0x3D61B0u) {
        ctx->pc = 0x3D61B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D61ACu;
        // 0x3d61b0: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D61B4u;
        goto label_3d61b4;
    }
    ctx->pc = 0x3D61ACu;
    {
        const bool branch_taken_0x3d61ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D61B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D61ACu;
        // 0x3d61b0: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d61ac) {
            ctx->pc = 0x3D6454u;
            goto label_3d6454;
        }
    }
    ctx->pc = 0x3D61B4u;
label_3d61b4:
    // 0x3d61b4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3d61b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3d61b8:
    // 0x3d61b8: 0xc0ea12a  jal         func_3A84A8
label_3d61bc:
    if (ctx->pc == 0x3D61BCu) {
        ctx->pc = 0x3D61BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D61B8u;
        // 0x3d61bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D61C0u;
        goto label_3d61c0;
    }
    ctx->pc = 0x3D61B8u;
    SET_GPR_U32(ctx, 31, 0x3D61C0u);
    ctx->pc = 0x3D61BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D61B8u;
    // 0x3d61bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D61B8u, 0x3D61C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D61C0u;
label_3d61c0:
    // 0x3d61c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d61c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d61c4:
    // 0x3d61c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3d61c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3d61c8:
    // 0x3d61c8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d61c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d61cc:
    // 0x3d61cc: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x3d61ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d61d0:
    // 0x3d61d0: 0x3c01bf21  lui         $at, 0xBF21
    ctx->pc = 0x3d61d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48929 << 16));
label_3d61d4:
    // 0x3d61d4: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x3d61d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_3d61d8:
    // 0x3d61d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d61d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d61dc:
    // 0x3d61dc: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x3d61dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3d61e0:
    // 0x3d61e0: 0x3c01be75  lui         $at, 0xBE75
    ctx->pc = 0x3d61e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48757 << 16));
label_3d61e4:
    // 0x3d61e4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3d61e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3d61e8:
    // 0x3d61e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d61e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d61ec:
    // 0x3d61ec: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3d61ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3d61f0:
    // 0x3d61f0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3d61f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3d61f4:
    // 0x3d61f4: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x3d61f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3d61f8:
    // 0x3d61f8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3d61f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3d61fc:
    // 0x3d61fc: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3d61fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3d6200:
    // 0x3d6200: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x3d6200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
label_3d6204:
    // 0x3d6204: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x3d6204u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_3d6208:
    // 0x3d6208: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3d6208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3d620c:
    // 0x3d620c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3d620cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d6210:
    // 0x3d6210: 0x3c013f1a  lui         $at, 0x3F1A
    ctx->pc = 0x3d6210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16154 << 16));
label_3d6214:
    // 0x3d6214: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x3d6214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_3d6218:
    // 0x3d6218: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d6218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d621c:
    // 0x3d621c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3d621cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3d6220:
    // 0x3d6220: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3d6220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3d6224:
    // 0x3d6224: 0x3c01bea7  lui         $at, 0xBEA7
    ctx->pc = 0x3d6224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48807 << 16));
label_3d6228:
    // 0x3d6228: 0x3421ef9e  ori         $at, $at, 0xEF9E
    ctx->pc = 0x3d6228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61342);
label_3d622c:
    // 0x3d622c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3d622cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3d6230:
    // 0x3d6230: 0x7a830020  lq          $v1, 0x20($s4)
    ctx->pc = 0x3d6230u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_3d6234:
    // 0x3d6234: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x3d6234u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3d6238:
    // 0x3d6238: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x3d6238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3d623c:
    // 0x3d623c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3d623cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3d6240:
    // 0x3d6240: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3d6240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3d6244:
    // 0x3d6244: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x3d6244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
label_3d6248:
    // 0x3d6248: 0x3421ced9  ori         $at, $at, 0xCED9
    ctx->pc = 0x3d6248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52953);
label_3d624c:
    // 0x3d624c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3d624cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3d6250:
    // 0x3d6250: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3d6250u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d6254:
    // 0x3d6254: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3d6254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3d6258:
    // 0x3d6258: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d6258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d625c:
    // 0x3d625c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3d625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3d6260:
    // 0x3d6260: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x3d6260u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3d6264:
    // 0x3d6264: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x3d6264u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3d6268:
    // 0x3d6268: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3d6268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d626c:
    // 0x3d626c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3d626cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d6270:
    // 0x3d6270: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3d6270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3d6274:
    // 0x3d6274: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d6274u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d6278:
    // 0x3d6278: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3d6278u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d627c:
    // 0x3d627c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d627cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d6280:
    // 0x3d6280: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d6280u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d6284:
    // 0x3d6284: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d6284u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d6288:
    // 0x3d6288: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d6288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d628c:
    // 0x3d628c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d628cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d6290:
    // 0x3d6290: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d6290u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d6294:
    // 0x3d6294: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d6294u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d6298:
    // 0x3d6298: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d6298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d629c:
    // 0x3d629c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d629cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d62a0:
    // 0x3d62a0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d62a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d62a4:
    // 0x3d62a4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d62a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d62a8:
    // 0x3d62a8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d62a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d62ac:
    // 0x3d62ac: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d62acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d62b0:
    // 0x3d62b0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d62b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d62b4:
    // 0x3d62b4: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3d62b4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d62b8:
    // 0x3d62b8: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3d62b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3d62bc:
    // 0x3d62bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d62bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d62c0:
    // 0x3d62c0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3d62c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3d62c4:
    // 0x3d62c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d62c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d62c8:
    // 0x3d62c8: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3d62c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3d62cc:
    // 0x3d62cc: 0xc136b18  jal         func_4DAC60
label_3d62d0:
    if (ctx->pc == 0x3D62D0u) {
        ctx->pc = 0x3D62D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D62CCu;
        // 0x3d62d0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D62D4u;
        goto label_3d62d4;
    }
    ctx->pc = 0x3D62CCu;
    SET_GPR_U32(ctx, 31, 0x3D62D4u);
    ctx->pc = 0x3D62D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D62CCu;
    // 0x3d62d0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D62CCu, 0x3D62D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D62D4u;
label_3d62d4:
    // 0x3d62d4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3d62d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d62d8:
    // 0x3d62d8: 0x3c01bf18  lui         $at, 0xBF18
    ctx->pc = 0x3d62d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48920 << 16));
label_3d62dc:
    // 0x3d62dc: 0x3421d4fe  ori         $at, $at, 0xD4FE
    ctx->pc = 0x3d62dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54526);
label_3d62e0:
    // 0x3d62e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d62e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d62e4:
    // 0x3d62e4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3d62e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3d62e8:
    // 0x3d62e8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3d62e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3d62ec:
    // 0x3d62ec: 0x7a830020  lq          $v1, 0x20($s4)
    ctx->pc = 0x3d62ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_3d62f0:
    // 0x3d62f0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3d62f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3d62f4:
    // 0x3d62f4: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x3d62f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3d62f8:
    // 0x3d62f8: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x3d62f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3d62fc:
    // 0x3d62fc: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3d62fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d6300:
    // 0x3d6300: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3d6300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d6304:
    // 0x3d6304: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3d6304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3d6308:
    // 0x3d6308: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d6308u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d630c:
    // 0x3d630c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3d630cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d6310:
    // 0x3d6310: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d6310u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d6314:
    // 0x3d6314: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d6314u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d6318:
    // 0x3d6318: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d6318u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d631c:
    // 0x3d631c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d631cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d6320:
    // 0x3d6320: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d6320u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d6324:
    // 0x3d6324: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d6324u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d6328:
    // 0x3d6328: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d6328u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d632c:
    // 0x3d632c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d632cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d6330:
    // 0x3d6330: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d6330u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d6334:
    // 0x3d6334: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d6334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d6338:
    // 0x3d6338: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d6338u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d633c:
    // 0x3d633c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d633cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d6340:
    // 0x3d6340: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d6340u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d6344:
    // 0x3d6344: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d6344u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d6348:
    // 0x3d6348: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3d6348u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d634c:
    // 0x3d634c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3d634cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3d6350:
    // 0x3d6350: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3d6350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d6354:
    // 0x3d6354: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3d6354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3d6358:
    // 0x3d6358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d635c:
    // 0x3d635c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3d635cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3d6360:
    // 0x3d6360: 0xc136b18  jal         func_4DAC60
label_3d6364:
    if (ctx->pc == 0x3D6364u) {
        ctx->pc = 0x3D6364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6360u;
        // 0x3d6364: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6368u;
        goto label_3d6368;
    }
    ctx->pc = 0x3D6360u;
    SET_GPR_U32(ctx, 31, 0x3D6368u);
    ctx->pc = 0x3D6364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6360u;
    // 0x3d6364: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6360u, 0x3D6368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6368u;
label_3d6368:
    // 0x3d6368: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3d6368u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d636c:
    // 0x3d636c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d636cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d6370:
    // 0x3d6370: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d6370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d6374:
    // 0x3d6374: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3d6374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3d6378:
    // 0x3d6378: 0xc0e93f4  jal         func_3A4FD0
label_3d637c:
    if (ctx->pc == 0x3D637Cu) {
        ctx->pc = 0x3D637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6378u;
        // 0x3d637c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6380u;
        goto label_3d6380;
    }
    ctx->pc = 0x3D6378u;
    SET_GPR_U32(ctx, 31, 0x3D6380u);
    ctx->pc = 0x3D637Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6378u;
    // 0x3d637c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FD0u, 0x3D6378u, 0x3D6380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6380u;
label_3d6380:
    // 0x3d6380: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x3d6380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
label_3d6384:
    // 0x3d6384: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d6384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d6388:
    // 0x3d6388: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d6388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d638c:
    // 0x3d638c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3d638cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d6390:
    // 0x3d6390: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3d6390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3d6394:
    // 0x3d6394: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d6394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d6398:
    // 0x3d6398: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3d6398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3d639c:
    // 0x3d639c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3d639cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3d63a0:
    // 0x3d63a0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3d63a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3d63a4:
    // 0x3d63a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d63a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d63a8:
    // 0x3d63a8: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x3d63a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3d63ac:
    // 0x3d63ac: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3d63acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d63b0:
    // 0x3d63b0: 0xc136b18  jal         func_4DAC60
label_3d63b4:
    if (ctx->pc == 0x3D63B4u) {
        ctx->pc = 0x3D63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D63B0u;
        // 0x3d63b4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D63B8u;
        goto label_3d63b8;
    }
    ctx->pc = 0x3D63B0u;
    SET_GPR_U32(ctx, 31, 0x3D63B8u);
    ctx->pc = 0x3D63B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D63B0u;
    // 0x3d63b4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D63B0u, 0x3D63B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D63B8u;
label_3d63b8:
    // 0x3d63b8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3d63b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d63bc:
    // 0x3d63bc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d63bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d63c0:
    // 0x3d63c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d63c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d63c4:
    // 0x3d63c4: 0xc0ea158  jal         func_3A8560
label_3d63c8:
    if (ctx->pc == 0x3D63C8u) {
        ctx->pc = 0x3D63C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D63C4u;
        // 0x3d63c8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D63CCu;
        goto label_3d63cc;
    }
    ctx->pc = 0x3D63C4u;
    SET_GPR_U32(ctx, 31, 0x3D63CCu);
    ctx->pc = 0x3D63C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D63C4u;
    // 0x3d63c8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3D63C4u, 0x3D63CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D63CCu;
label_3d63cc:
    // 0x3d63cc: 0x8e67000c  lw          $a3, 0xC($s3)
    ctx->pc = 0x3d63ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3d63d0:
    // 0x3d63d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d63d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d63d4:
    // 0x3d63d4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3d63d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3d63d8:
    // 0x3d63d8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d63d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d63dc:
    // 0x3d63dc: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d63dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d63e0:
    // 0x3d63e0: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d63e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d63e4:
    // 0x3d63e4: 0x60f809  jalr        $v1
label_3d63e8:
    if (ctx->pc == 0x3D63E8u) {
        ctx->pc = 0x3D63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D63E4u;
        // 0x3d63e8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D63ECu;
        goto label_3d63ec;
    }
    ctx->pc = 0x3D63E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D63ECu);
        ctx->pc = 0x3D63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D63E4u;
        // 0x3d63e8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D63E4u, 0x3D63ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D63ECu;
label_3d63ec:
    // 0x3d63ec: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d63ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d63f0:
    // 0x3d63f0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d63f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d63f4:
    // 0x3d63f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d63f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d63f8:
    // 0x3d63f8: 0xc0ea158  jal         func_3A8560
label_3d63fc:
    if (ctx->pc == 0x3D63FCu) {
        ctx->pc = 0x3D63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D63F8u;
        // 0x3d63fc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6400u;
        goto label_3d6400;
    }
    ctx->pc = 0x3D63F8u;
    SET_GPR_U32(ctx, 31, 0x3D6400u);
    ctx->pc = 0x3D63FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D63F8u;
    // 0x3d63fc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3D63F8u, 0x3D6400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6400u;
label_3d6400:
    // 0x3d6400: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x3d6400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3d6404:
    // 0x3d6404: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d6404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6408:
    // 0x3d6408: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3d6408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3d640c:
    // 0x3d640c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d640cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d6410:
    // 0x3d6410: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d6410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d6414:
    // 0x3d6414: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d6414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d6418:
    // 0x3d6418: 0x60f809  jalr        $v1
label_3d641c:
    if (ctx->pc == 0x3D641Cu) {
        ctx->pc = 0x3D641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6418u;
        // 0x3d641c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6420u;
        goto label_3d6420;
    }
    ctx->pc = 0x3D6418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D6420u);
        ctx->pc = 0x3D641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6418u;
        // 0x3d641c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6418u, 0x3D6420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D6420u;
label_3d6420:
    // 0x3d6420: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d6420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d6424:
    // 0x3d6424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d6424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6428:
    // 0x3d6428: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d6428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d642c:
    // 0x3d642c: 0xc0ea158  jal         func_3A8560
label_3d6430:
    if (ctx->pc == 0x3D6430u) {
        ctx->pc = 0x3D6430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D642Cu;
        // 0x3d6430: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6434u;
        goto label_3d6434;
    }
    ctx->pc = 0x3D642Cu;
    SET_GPR_U32(ctx, 31, 0x3D6434u);
    ctx->pc = 0x3D6430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D642Cu;
    // 0x3d6430: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3D642Cu, 0x3D6434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6434u;
label_3d6434:
    // 0x3d6434: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x3d6434u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3d6438:
    // 0x3d6438: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d6438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d643c:
    // 0x3d643c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3d643cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3d6440:
    // 0x3d6440: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d6440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d6444:
    // 0x3d6444: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d6444u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d6448:
    // 0x3d6448: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d6448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d644c:
    // 0x3d644c: 0x60f809  jalr        $v1
label_3d6450:
    if (ctx->pc == 0x3D6450u) {
        ctx->pc = 0x3D6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D644Cu;
        // 0x3d6450: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6454u;
        goto label_3d6454;
    }
    ctx->pc = 0x3D644Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D6454u);
        ctx->pc = 0x3D6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D644Cu;
        // 0x3d6450: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D644Cu, 0x3D6454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D6454u;
label_3d6454:
    // 0x3d6454: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3d6454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3d6458:
    // 0x3d6458: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3d6458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3d645c:
    // 0x3d645c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3d645cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3d6460:
    // 0x3d6460: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3d6460u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3d6464:
    // 0x3d6464: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3d6464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3d6468:
    // 0x3d6468: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3d6468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3d646c:
    // 0x3d646c: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x3d646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3d6470:
    // 0x3d6470: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x3d6470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3d6474:
    // 0x3d6474: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x3d6474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d6478:
    // 0x3d6478: 0x3e00008  jr          $ra
label_3d647c:
    if (ctx->pc == 0x3D647Cu) {
        ctx->pc = 0x3D647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6478u;
        // 0x3d647c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6480u;
        goto label_fallthrough_0x3d6478;
    }
    ctx->pc = 0x3D6478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6478u;
        // 0x3d647c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d6478:
    ctx->pc = 0x3D6480u;
}
