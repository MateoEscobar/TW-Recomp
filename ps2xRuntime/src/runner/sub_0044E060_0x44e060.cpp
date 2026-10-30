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

// Function: sub_0044E060
// Address: 0x44e060 - 0x44e438
void sub_0044E060_0x44e060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044E060_0x44e060");
#endif

    switch (ctx->pc) {
        case 0x44e060u: goto label_44e060;
        case 0x44e064u: goto label_44e064;
        case 0x44e068u: goto label_44e068;
        case 0x44e06cu: goto label_44e06c;
        case 0x44e070u: goto label_44e070;
        case 0x44e074u: goto label_44e074;
        case 0x44e078u: goto label_44e078;
        case 0x44e07cu: goto label_44e07c;
        case 0x44e080u: goto label_44e080;
        case 0x44e084u: goto label_44e084;
        case 0x44e088u: goto label_44e088;
        case 0x44e08cu: goto label_44e08c;
        case 0x44e090u: goto label_44e090;
        case 0x44e094u: goto label_44e094;
        case 0x44e098u: goto label_44e098;
        case 0x44e09cu: goto label_44e09c;
        case 0x44e0a0u: goto label_44e0a0;
        case 0x44e0a4u: goto label_44e0a4;
        case 0x44e0a8u: goto label_44e0a8;
        case 0x44e0acu: goto label_44e0ac;
        case 0x44e0b0u: goto label_44e0b0;
        case 0x44e0b4u: goto label_44e0b4;
        case 0x44e0b8u: goto label_44e0b8;
        case 0x44e0bcu: goto label_44e0bc;
        case 0x44e0c0u: goto label_44e0c0;
        case 0x44e0c4u: goto label_44e0c4;
        case 0x44e0c8u: goto label_44e0c8;
        case 0x44e0ccu: goto label_44e0cc;
        case 0x44e0d0u: goto label_44e0d0;
        case 0x44e0d4u: goto label_44e0d4;
        case 0x44e0d8u: goto label_44e0d8;
        case 0x44e0dcu: goto label_44e0dc;
        case 0x44e0e0u: goto label_44e0e0;
        case 0x44e0e4u: goto label_44e0e4;
        case 0x44e0e8u: goto label_44e0e8;
        case 0x44e0ecu: goto label_44e0ec;
        case 0x44e0f0u: goto label_44e0f0;
        case 0x44e0f4u: goto label_44e0f4;
        case 0x44e0f8u: goto label_44e0f8;
        case 0x44e0fcu: goto label_44e0fc;
        case 0x44e100u: goto label_44e100;
        case 0x44e104u: goto label_44e104;
        case 0x44e108u: goto label_44e108;
        case 0x44e10cu: goto label_44e10c;
        case 0x44e110u: goto label_44e110;
        case 0x44e114u: goto label_44e114;
        case 0x44e118u: goto label_44e118;
        case 0x44e11cu: goto label_44e11c;
        case 0x44e120u: goto label_44e120;
        case 0x44e124u: goto label_44e124;
        case 0x44e128u: goto label_44e128;
        case 0x44e12cu: goto label_44e12c;
        case 0x44e130u: goto label_44e130;
        case 0x44e134u: goto label_44e134;
        case 0x44e138u: goto label_44e138;
        case 0x44e13cu: goto label_44e13c;
        case 0x44e140u: goto label_44e140;
        case 0x44e144u: goto label_44e144;
        case 0x44e148u: goto label_44e148;
        case 0x44e14cu: goto label_44e14c;
        case 0x44e150u: goto label_44e150;
        case 0x44e154u: goto label_44e154;
        case 0x44e158u: goto label_44e158;
        case 0x44e15cu: goto label_44e15c;
        case 0x44e160u: goto label_44e160;
        case 0x44e164u: goto label_44e164;
        case 0x44e168u: goto label_44e168;
        case 0x44e16cu: goto label_44e16c;
        case 0x44e170u: goto label_44e170;
        case 0x44e174u: goto label_44e174;
        case 0x44e178u: goto label_44e178;
        case 0x44e17cu: goto label_44e17c;
        case 0x44e180u: goto label_44e180;
        case 0x44e184u: goto label_44e184;
        case 0x44e188u: goto label_44e188;
        case 0x44e18cu: goto label_44e18c;
        case 0x44e190u: goto label_44e190;
        case 0x44e194u: goto label_44e194;
        case 0x44e198u: goto label_44e198;
        case 0x44e19cu: goto label_44e19c;
        case 0x44e1a0u: goto label_44e1a0;
        case 0x44e1a4u: goto label_44e1a4;
        case 0x44e1a8u: goto label_44e1a8;
        case 0x44e1acu: goto label_44e1ac;
        case 0x44e1b0u: goto label_44e1b0;
        case 0x44e1b4u: goto label_44e1b4;
        case 0x44e1b8u: goto label_44e1b8;
        case 0x44e1bcu: goto label_44e1bc;
        case 0x44e1c0u: goto label_44e1c0;
        case 0x44e1c4u: goto label_44e1c4;
        case 0x44e1c8u: goto label_44e1c8;
        case 0x44e1ccu: goto label_44e1cc;
        case 0x44e1d0u: goto label_44e1d0;
        case 0x44e1d4u: goto label_44e1d4;
        case 0x44e1d8u: goto label_44e1d8;
        case 0x44e1dcu: goto label_44e1dc;
        case 0x44e1e0u: goto label_44e1e0;
        case 0x44e1e4u: goto label_44e1e4;
        case 0x44e1e8u: goto label_44e1e8;
        case 0x44e1ecu: goto label_44e1ec;
        case 0x44e1f0u: goto label_44e1f0;
        case 0x44e1f4u: goto label_44e1f4;
        case 0x44e1f8u: goto label_44e1f8;
        case 0x44e1fcu: goto label_44e1fc;
        case 0x44e200u: goto label_44e200;
        case 0x44e204u: goto label_44e204;
        case 0x44e208u: goto label_44e208;
        case 0x44e20cu: goto label_44e20c;
        case 0x44e210u: goto label_44e210;
        case 0x44e214u: goto label_44e214;
        case 0x44e218u: goto label_44e218;
        case 0x44e21cu: goto label_44e21c;
        case 0x44e220u: goto label_44e220;
        case 0x44e224u: goto label_44e224;
        case 0x44e228u: goto label_44e228;
        case 0x44e22cu: goto label_44e22c;
        case 0x44e230u: goto label_44e230;
        case 0x44e234u: goto label_44e234;
        case 0x44e238u: goto label_44e238;
        case 0x44e23cu: goto label_44e23c;
        case 0x44e240u: goto label_44e240;
        case 0x44e244u: goto label_44e244;
        case 0x44e248u: goto label_44e248;
        case 0x44e24cu: goto label_44e24c;
        case 0x44e250u: goto label_44e250;
        case 0x44e254u: goto label_44e254;
        case 0x44e258u: goto label_44e258;
        case 0x44e25cu: goto label_44e25c;
        case 0x44e260u: goto label_44e260;
        case 0x44e264u: goto label_44e264;
        case 0x44e268u: goto label_44e268;
        case 0x44e26cu: goto label_44e26c;
        case 0x44e270u: goto label_44e270;
        case 0x44e274u: goto label_44e274;
        case 0x44e278u: goto label_44e278;
        case 0x44e27cu: goto label_44e27c;
        case 0x44e280u: goto label_44e280;
        case 0x44e284u: goto label_44e284;
        case 0x44e288u: goto label_44e288;
        case 0x44e28cu: goto label_44e28c;
        case 0x44e290u: goto label_44e290;
        case 0x44e294u: goto label_44e294;
        case 0x44e298u: goto label_44e298;
        case 0x44e29cu: goto label_44e29c;
        case 0x44e2a0u: goto label_44e2a0;
        case 0x44e2a4u: goto label_44e2a4;
        case 0x44e2a8u: goto label_44e2a8;
        case 0x44e2acu: goto label_44e2ac;
        case 0x44e2b0u: goto label_44e2b0;
        case 0x44e2b4u: goto label_44e2b4;
        case 0x44e2b8u: goto label_44e2b8;
        case 0x44e2bcu: goto label_44e2bc;
        case 0x44e2c0u: goto label_44e2c0;
        case 0x44e2c4u: goto label_44e2c4;
        case 0x44e2c8u: goto label_44e2c8;
        case 0x44e2ccu: goto label_44e2cc;
        case 0x44e2d0u: goto label_44e2d0;
        case 0x44e2d4u: goto label_44e2d4;
        case 0x44e2d8u: goto label_44e2d8;
        case 0x44e2dcu: goto label_44e2dc;
        case 0x44e2e0u: goto label_44e2e0;
        case 0x44e2e4u: goto label_44e2e4;
        case 0x44e2e8u: goto label_44e2e8;
        case 0x44e2ecu: goto label_44e2ec;
        case 0x44e2f0u: goto label_44e2f0;
        case 0x44e2f4u: goto label_44e2f4;
        case 0x44e2f8u: goto label_44e2f8;
        case 0x44e2fcu: goto label_44e2fc;
        case 0x44e300u: goto label_44e300;
        case 0x44e304u: goto label_44e304;
        case 0x44e308u: goto label_44e308;
        case 0x44e30cu: goto label_44e30c;
        case 0x44e310u: goto label_44e310;
        case 0x44e314u: goto label_44e314;
        case 0x44e318u: goto label_44e318;
        case 0x44e31cu: goto label_44e31c;
        case 0x44e320u: goto label_44e320;
        case 0x44e324u: goto label_44e324;
        case 0x44e328u: goto label_44e328;
        case 0x44e32cu: goto label_44e32c;
        case 0x44e330u: goto label_44e330;
        case 0x44e334u: goto label_44e334;
        case 0x44e338u: goto label_44e338;
        case 0x44e33cu: goto label_44e33c;
        case 0x44e340u: goto label_44e340;
        case 0x44e344u: goto label_44e344;
        case 0x44e348u: goto label_44e348;
        case 0x44e34cu: goto label_44e34c;
        case 0x44e350u: goto label_44e350;
        case 0x44e354u: goto label_44e354;
        case 0x44e358u: goto label_44e358;
        case 0x44e35cu: goto label_44e35c;
        case 0x44e360u: goto label_44e360;
        case 0x44e364u: goto label_44e364;
        case 0x44e368u: goto label_44e368;
        case 0x44e36cu: goto label_44e36c;
        case 0x44e370u: goto label_44e370;
        case 0x44e374u: goto label_44e374;
        case 0x44e378u: goto label_44e378;
        case 0x44e37cu: goto label_44e37c;
        case 0x44e380u: goto label_44e380;
        case 0x44e384u: goto label_44e384;
        case 0x44e388u: goto label_44e388;
        case 0x44e38cu: goto label_44e38c;
        case 0x44e390u: goto label_44e390;
        case 0x44e394u: goto label_44e394;
        case 0x44e398u: goto label_44e398;
        case 0x44e39cu: goto label_44e39c;
        case 0x44e3a0u: goto label_44e3a0;
        case 0x44e3a4u: goto label_44e3a4;
        case 0x44e3a8u: goto label_44e3a8;
        case 0x44e3acu: goto label_44e3ac;
        case 0x44e3b0u: goto label_44e3b0;
        case 0x44e3b4u: goto label_44e3b4;
        case 0x44e3b8u: goto label_44e3b8;
        case 0x44e3bcu: goto label_44e3bc;
        case 0x44e3c0u: goto label_44e3c0;
        case 0x44e3c4u: goto label_44e3c4;
        case 0x44e3c8u: goto label_44e3c8;
        case 0x44e3ccu: goto label_44e3cc;
        case 0x44e3d0u: goto label_44e3d0;
        case 0x44e3d4u: goto label_44e3d4;
        case 0x44e3d8u: goto label_44e3d8;
        case 0x44e3dcu: goto label_44e3dc;
        case 0x44e3e0u: goto label_44e3e0;
        case 0x44e3e4u: goto label_44e3e4;
        case 0x44e3e8u: goto label_44e3e8;
        case 0x44e3ecu: goto label_44e3ec;
        case 0x44e3f0u: goto label_44e3f0;
        case 0x44e3f4u: goto label_44e3f4;
        case 0x44e3f8u: goto label_44e3f8;
        case 0x44e3fcu: goto label_44e3fc;
        case 0x44e400u: goto label_44e400;
        case 0x44e404u: goto label_44e404;
        case 0x44e408u: goto label_44e408;
        case 0x44e40cu: goto label_44e40c;
        case 0x44e410u: goto label_44e410;
        case 0x44e414u: goto label_44e414;
        case 0x44e418u: goto label_44e418;
        case 0x44e41cu: goto label_44e41c;
        case 0x44e420u: goto label_44e420;
        case 0x44e424u: goto label_44e424;
        case 0x44e428u: goto label_44e428;
        case 0x44e42cu: goto label_44e42c;
        case 0x44e430u: goto label_44e430;
        case 0x44e434u: goto label_44e434;
        default: break;
    }

    ctx->pc = 0x44e060u;

label_44e060:
    // 0x44e060: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x44e060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_44e064:
    // 0x44e064: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44e064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_44e068:
    // 0x44e068: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x44e068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_44e06c:
    // 0x44e06c: 0x3442fe00  ori         $v0, $v0, 0xFE00
    ctx->pc = 0x44e06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65024);
label_44e070:
    // 0x44e070: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x44e070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_44e074:
    // 0x44e074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44e074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44e078:
    // 0x44e078: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x44e078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_44e07c:
    // 0x44e07c: 0x55203  sra         $t2, $a1, 8
    ctx->pc = 0x44e07cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 8));
label_44e080:
    // 0x44e080: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x44e080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_44e084:
    // 0x44e084: 0x588c3  sra         $s1, $a1, 3
    ctx->pc = 0x44e084u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 3));
label_44e088:
    // 0x44e088: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x44e088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_44e08c:
    // 0x44e08c: 0x59883  sra         $s3, $a1, 2
    ctx->pc = 0x44e08cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), 2));
label_44e090:
    // 0x44e090: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x44e090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_44e094:
    // 0x44e094: 0x5a043  sra         $s4, $a1, 1
    ctx->pc = 0x44e094u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 1));
label_44e098:
    // 0x44e098: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x44e098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_44e09c:
    // 0x44e09c: 0x59103  sra         $s2, $a1, 4
    ctx->pc = 0x44e09cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 4));
label_44e0a0:
    // 0x44e0a0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x44e0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_44e0a4:
    // 0x44e0a4: 0x5a983  sra         $s5, $a1, 6
    ctx->pc = 0x44e0a4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 5), 6));
label_44e0a8:
    // 0x44e0a8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x44e0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_44e0ac:
    // 0x44e0ac: 0x5b943  sra         $s7, $a1, 5
    ctx->pc = 0x44e0acu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 5), 5));
label_44e0b0:
    // 0x44e0b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44e0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44e0b4:
    // 0x44e0b4: 0x5f1c3  sra         $fp, $a1, 7
    ctx->pc = 0x44e0b4u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 5), 7));
label_44e0b8:
    // 0x44e0b8: 0x30b60001  andi        $s6, $a1, 0x1
    ctx->pc = 0x44e0b8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_44e0bc:
    // 0x44e0bc: 0x32940001  andi        $s4, $s4, 0x1
    ctx->pc = 0x44e0bcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_44e0c0:
    // 0x44e0c0: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x44e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44e0c4:
    // 0x44e0c4: 0x32730001  andi        $s3, $s3, 0x1
    ctx->pc = 0x44e0c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_44e0c8:
    // 0x44e0c8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x44e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_44e0cc:
    // 0x44e0cc: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x44e0ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_44e0d0:
    // 0x44e0d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x44e0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_44e0d4:
    // 0x44e0d4: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x44e0d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_44e0d8:
    // 0x44e0d8: 0x32f70001  andi        $s7, $s7, 0x1
    ctx->pc = 0x44e0d8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_44e0dc:
    // 0x44e0dc: 0x32b50001  andi        $s5, $s5, 0x1
    ctx->pc = 0x44e0dcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_44e0e0:
    // 0x44e0e0: 0x33de0001  andi        $fp, $fp, 0x1
    ctx->pc = 0x44e0e0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_44e0e4:
    // 0x44e0e4: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x44e0e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
label_44e0e8:
    // 0x44e0e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44e0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44e0ec:
    // 0x44e0ec: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x44e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_44e0f0:
    // 0x44e0f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e0f4:
    // 0x44e0f4: 0x16c20007  bne         $s6, $v0, . + 4 + (0x7 << 2)
label_44e0f8:
    if (ctx->pc == 0x44E0F8u) {
        ctx->pc = 0x44E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E0F4u;
        // 0x44e0f8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E0FCu;
        goto label_44e0fc;
    }
    ctx->pc = 0x44E0F4u;
    {
        const bool branch_taken_0x44e0f4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x44E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E0F4u;
        // 0x44e0f8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e0f4) {
            ctx->pc = 0x44E114u;
            goto label_44e114;
        }
    }
    ctx->pc = 0x44E0FCu;
label_44e0fc:
    // 0x44e0fc: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x44e0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_44e100:
    // 0x44e100: 0xae1600a0  sw          $s6, 0xA0($s0)
    ctx->pc = 0x44e100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 22));
label_44e104:
    // 0x44e104: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x44e104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_44e108:
    // 0x44e108: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x44e108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_44e10c:
    // 0x44e10c: 0x8c66e788  lw          $a2, -0x1878($v1)
    ctx->pc = 0x44e10cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961032)));
label_44e110:
    // 0x44e110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44e110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e114:
    // 0x44e114: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
label_44e118:
    if (ctx->pc == 0x44E118u) {
        ctx->pc = 0x44E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E114u;
        // 0x44e118: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E11Cu;
        goto label_44e11c;
    }
    ctx->pc = 0x44E114u;
    {
        const bool branch_taken_0x44e114 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x44E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E114u;
        // 0x44e118: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e114) {
            ctx->pc = 0x44E140u;
            goto label_44e140;
        }
    }
    ctx->pc = 0x44E11Cu;
label_44e11c:
    // 0x44e11c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x44e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44e120:
    // 0x44e120: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x44e120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44e124:
    // 0x44e124: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x44e124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_44e128:
    // 0x44e128: 0x8c85e78c  lw          $a1, -0x1874($a0)
    ctx->pc = 0x44e128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961036)));
label_44e12c:
    // 0x44e12c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x44e12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_44e130:
    // 0x44e130: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x44e130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_44e134:
    // 0x44e134: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x44e134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_44e138:
    // 0x44e138: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x44e138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_44e13c:
    // 0x44e13c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e140:
    // 0x44e140: 0x1642000b  bne         $s2, $v0, . + 4 + (0xB << 2)
label_44e144:
    if (ctx->pc == 0x44E144u) {
        ctx->pc = 0x44E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E140u;
        // 0x44e144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E148u;
        goto label_44e148;
    }
    ctx->pc = 0x44E140u;
    {
        const bool branch_taken_0x44e140 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x44E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E140u;
        // 0x44e144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e140) {
            ctx->pc = 0x44E170u;
            goto label_44e170;
        }
    }
    ctx->pc = 0x44E148u;
label_44e148:
    // 0x44e148: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x44e148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44e14c:
    // 0x44e14c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x44e14cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_44e150:
    // 0x44e150: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x44e150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44e154:
    // 0x44e154: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x44e154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_44e158:
    // 0x44e158: 0x8c85e790  lw          $a1, -0x1870($a0)
    ctx->pc = 0x44e158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961040)));
label_44e15c:
    // 0x44e15c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x44e15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_44e160:
    // 0x44e160: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x44e160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_44e164:
    // 0x44e164: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x44e164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_44e168:
    // 0x44e168: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x44e168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_44e16c:
    // 0x44e16c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e170:
    // 0x44e170: 0x1662000b  bne         $s3, $v0, . + 4 + (0xB << 2)
label_44e174:
    if (ctx->pc == 0x44E174u) {
        ctx->pc = 0x44E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E170u;
        // 0x44e174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E178u;
        goto label_44e178;
    }
    ctx->pc = 0x44E170u;
    {
        const bool branch_taken_0x44e170 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x44E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E170u;
        // 0x44e174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e170) {
            ctx->pc = 0x44E1A0u;
            goto label_44e1a0;
        }
    }
    ctx->pc = 0x44E178u;
label_44e178:
    // 0x44e178: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x44e178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44e17c:
    // 0x44e17c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x44e17cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_44e180:
    // 0x44e180: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x44e180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44e184:
    // 0x44e184: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x44e184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_44e188:
    // 0x44e188: 0x8c85e794  lw          $a1, -0x186C($a0)
    ctx->pc = 0x44e188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961044)));
label_44e18c:
    // 0x44e18c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x44e18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_44e190:
    // 0x44e190: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x44e190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_44e194:
    // 0x44e194: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x44e194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_44e198:
    // 0x44e198: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x44e198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_44e19c:
    // 0x44e19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e1a0:
    // 0x44e1a0: 0x1682000b  bne         $s4, $v0, . + 4 + (0xB << 2)
label_44e1a4:
    if (ctx->pc == 0x44E1A4u) {
        ctx->pc = 0x44E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E1A0u;
        // 0x44e1a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E1A8u;
        goto label_44e1a8;
    }
    ctx->pc = 0x44E1A0u;
    {
        const bool branch_taken_0x44e1a0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x44E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E1A0u;
        // 0x44e1a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e1a0) {
            ctx->pc = 0x44E1D0u;
            goto label_44e1d0;
        }
    }
    ctx->pc = 0x44E1A8u;
label_44e1a8:
    // 0x44e1a8: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x44e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44e1ac:
    // 0x44e1ac: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x44e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_44e1b0:
    // 0x44e1b0: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x44e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44e1b4:
    // 0x44e1b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x44e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_44e1b8:
    // 0x44e1b8: 0x8c85e798  lw          $a1, -0x1868($a0)
    ctx->pc = 0x44e1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961048)));
label_44e1bc:
    // 0x44e1bc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x44e1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_44e1c0:
    // 0x44e1c0: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x44e1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_44e1c4:
    // 0x44e1c4: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x44e1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_44e1c8:
    // 0x44e1c8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x44e1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_44e1cc:
    // 0x44e1cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e1d0:
    // 0x44e1d0: 0x16a2000b  bne         $s5, $v0, . + 4 + (0xB << 2)
label_44e1d4:
    if (ctx->pc == 0x44E1D4u) {
        ctx->pc = 0x44E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E1D0u;
        // 0x44e1d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E1D8u;
        goto label_44e1d8;
    }
    ctx->pc = 0x44E1D0u;
    {
        const bool branch_taken_0x44e1d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x44E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E1D0u;
        // 0x44e1d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e1d0) {
            ctx->pc = 0x44E200u;
            goto label_44e200;
        }
    }
    ctx->pc = 0x44E1D8u;
label_44e1d8:
    // 0x44e1d8: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x44e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44e1dc:
    // 0x44e1dc: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x44e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_44e1e0:
    // 0x44e1e0: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x44e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44e1e4:
    // 0x44e1e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x44e1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_44e1e8:
    // 0x44e1e8: 0x8c85e79c  lw          $a1, -0x1864($a0)
    ctx->pc = 0x44e1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961052)));
label_44e1ec:
    // 0x44e1ec: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x44e1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_44e1f0:
    // 0x44e1f0: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x44e1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_44e1f4:
    // 0x44e1f4: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x44e1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_44e1f8:
    // 0x44e1f8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x44e1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_44e1fc:
    // 0x44e1fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e200:
    // 0x44e200: 0x16e2000b  bne         $s7, $v0, . + 4 + (0xB << 2)
label_44e204:
    if (ctx->pc == 0x44E204u) {
        ctx->pc = 0x44E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E200u;
        // 0x44e204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E208u;
        goto label_44e208;
    }
    ctx->pc = 0x44E200u;
    {
        const bool branch_taken_0x44e200 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x44E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E200u;
        // 0x44e204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e200) {
            ctx->pc = 0x44E230u;
            goto label_44e230;
        }
    }
    ctx->pc = 0x44E208u;
label_44e208:
    // 0x44e208: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x44e208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44e20c:
    // 0x44e20c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x44e20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_44e210:
    // 0x44e210: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x44e210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44e214:
    // 0x44e214: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x44e214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_44e218:
    // 0x44e218: 0x8c85e7a0  lw          $a1, -0x1860($a0)
    ctx->pc = 0x44e218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961056)));
label_44e21c:
    // 0x44e21c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x44e21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_44e220:
    // 0x44e220: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x44e220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_44e224:
    // 0x44e224: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x44e224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_44e228:
    // 0x44e228: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x44e228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_44e22c:
    // 0x44e22c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e230:
    // 0x44e230: 0x17c2000b  bne         $fp, $v0, . + 4 + (0xB << 2)
label_44e234:
    if (ctx->pc == 0x44E234u) {
        ctx->pc = 0x44E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E230u;
        // 0x44e234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E238u;
        goto label_44e238;
    }
    ctx->pc = 0x44E230u;
    {
        const bool branch_taken_0x44e230 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x44E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E230u;
        // 0x44e234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e230) {
            ctx->pc = 0x44E260u;
            goto label_44e260;
        }
    }
    ctx->pc = 0x44E238u;
label_44e238:
    // 0x44e238: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x44e238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44e23c:
    // 0x44e23c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x44e23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_44e240:
    // 0x44e240: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x44e240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44e244:
    // 0x44e244: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x44e244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_44e248:
    // 0x44e248: 0x8c85e7a4  lw          $a1, -0x185C($a0)
    ctx->pc = 0x44e248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961060)));
label_44e24c:
    // 0x44e24c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x44e24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_44e250:
    // 0x44e250: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x44e250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_44e254:
    // 0x44e254: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x44e254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_44e258:
    // 0x44e258: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x44e258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_44e25c:
    // 0x44e25c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e260:
    // 0x44e260: 0x15420009  bne         $t2, $v0, . + 4 + (0x9 << 2)
label_44e264:
    if (ctx->pc == 0x44E264u) {
        ctx->pc = 0x44E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E260u;
        // 0x44e264: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E268u;
        goto label_44e268;
    }
    ctx->pc = 0x44E260u;
    {
        const bool branch_taken_0x44e260 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x44E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E260u;
        // 0x44e264: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e260) {
            ctx->pc = 0x44E288u;
            goto label_44e288;
        }
    }
    ctx->pc = 0x44E268u;
label_44e268:
    // 0x44e268: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x44e268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44e26c:
    // 0x44e26c: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x44e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44e270:
    // 0x44e270: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x44e270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_44e274:
    // 0x44e274: 0x8c85e7a8  lw          $a1, -0x1858($a0)
    ctx->pc = 0x44e274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961064)));
label_44e278:
    // 0x44e278: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x44e278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_44e27c:
    // 0x44e27c: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x44e27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_44e280:
    // 0x44e280: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x44e280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_44e284:
    // 0x44e284: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x44e284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_44e288:
    // 0x44e288: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_44e28c:
    if (ctx->pc == 0x44E28Cu) {
        ctx->pc = 0x44E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E288u;
        // 0x44e28c: 0x24c3000f  addiu       $v1, $a2, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E290u;
        goto label_44e290;
    }
    ctx->pc = 0x44E288u;
    {
        const bool branch_taken_0x44e288 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E288u;
        // 0x44e28c: 0x24c3000f  addiu       $v1, $a2, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e288) {
            ctx->pc = 0x44E29Cu;
            goto label_44e29c;
        }
    }
    ctx->pc = 0x44E290u;
label_44e290:
    // 0x44e290: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44e290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_44e294:
    // 0x44e294: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x44e294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_44e298:
    // 0x44e298: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x44e298u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_44e29c:
    // 0x44e29c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x44e29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44e2a0:
    // 0x44e2a0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x44e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_44e2a4:
    // 0x44e2a4: 0xae0600a4  sw          $a2, 0xA4($s0)
    ctx->pc = 0x44e2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 6));
label_44e2a8:
    // 0x44e2a8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x44e2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_44e2ac:
    // 0x44e2ac: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x44e2acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_44e2b0:
    // 0x44e2b0: 0x7faa0010  sq          $t2, 0x10($sp)
    ctx->pc = 0x44e2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 10));
label_44e2b4:
    // 0x44e2b4: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x44e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_44e2b8:
    // 0x44e2b8: 0x40f809  jalr        $v0
label_44e2bc:
    if (ctx->pc == 0x44E2BCu) {
        ctx->pc = 0x44E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E2B8u;
        // 0x44e2bc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E2C0u;
        goto label_44e2c0;
    }
    ctx->pc = 0x44E2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44E2C0u);
        ctx->pc = 0x44E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E2B8u;
        // 0x44e2bc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E2B8u, 0x44E2C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E2C0u;
label_44e2c0:
    // 0x44e2c0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x44e2c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44e2c4:
    // 0x44e2c4: 0x1120004e  beqz        $t1, . + 4 + (0x4E << 2)
label_44e2c8:
    if (ctx->pc == 0x44E2C8u) {
        ctx->pc = 0x44E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E2C4u;
        // 0x44e2c8: 0x7baa0010  lq          $t2, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E2CCu;
        goto label_44e2cc;
    }
    ctx->pc = 0x44E2C4u;
    {
        const bool branch_taken_0x44e2c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E2C4u;
        // 0x44e2c8: 0x7baa0010  lq          $t2, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e2c4) {
            ctx->pc = 0x44E400u;
            goto label_44e400;
        }
    }
    ctx->pc = 0x44E2CCu;
label_44e2cc:
    // 0x44e2cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_44e2d0:
    // 0x44e2d0: 0x2523000f  addiu       $v1, $t1, 0xF
    ctx->pc = 0x44e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
label_44e2d4:
    // 0x44e2d4: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x44e2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_44e2d8:
    // 0x44e2d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44e2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44e2dc:
    // 0x44e2dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x44e2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e2e0:
    // 0x44e2e0: 0x16c80006  bne         $s6, $t0, . + 4 + (0x6 << 2)
label_44e2e4:
    if (ctx->pc == 0x44E2E4u) {
        ctx->pc = 0x44E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E2E0u;
        // 0x44e2e4: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E2E8u;
        goto label_44e2e8;
    }
    ctx->pc = 0x44E2E0u;
    {
        const bool branch_taken_0x44e2e0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 8));
        ctx->pc = 0x44E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E2E0u;
        // 0x44e2e4: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e2e0) {
            ctx->pc = 0x44E2FCu;
            goto label_44e2fc;
        }
    }
    ctx->pc = 0x44E2E8u;
label_44e2e8:
    // 0x44e2e8: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x44e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_44e2ec:
    // 0x44e2ec: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x44e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_44e2f0:
    // 0x44e2f0: 0x8c46e788  lw          $a2, -0x1878($v0)
    ctx->pc = 0x44e2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961032)));
label_44e2f4:
    // 0x44e2f4: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x44e2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_44e2f8:
    // 0x44e2f8: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x44e2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_44e2fc:
    // 0x44e2fc: 0x16280007  bne         $s1, $t0, . + 4 + (0x7 << 2)
label_44e300:
    if (ctx->pc == 0x44E300u) {
        ctx->pc = 0x44E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E2FCu;
        // 0x44e300: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E304u;
        goto label_44e304;
    }
    ctx->pc = 0x44E2FCu;
    {
        const bool branch_taken_0x44e2fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 8));
        ctx->pc = 0x44E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E2FCu;
        // 0x44e300: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e2fc) {
            ctx->pc = 0x44E31Cu;
            goto label_44e31c;
        }
    }
    ctx->pc = 0x44E304u;
label_44e304:
    // 0x44e304: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x44e304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_44e308:
    // 0x44e308: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x44e308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44e30c:
    // 0x44e30c: 0x8c44e78c  lw          $a0, -0x1874($v0)
    ctx->pc = 0x44e30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961036)));
label_44e310:
    // 0x44e310: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x44e310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_44e314:
    // 0x44e314: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x44e314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_44e318:
    // 0x44e318: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x44e318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_44e31c:
    // 0x44e31c: 0x16480007  bne         $s2, $t0, . + 4 + (0x7 << 2)
label_44e320:
    if (ctx->pc == 0x44E320u) {
        ctx->pc = 0x44E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E31Cu;
        // 0x44e320: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E324u;
        goto label_44e324;
    }
    ctx->pc = 0x44E31Cu;
    {
        const bool branch_taken_0x44e31c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 8));
        ctx->pc = 0x44E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E31Cu;
        // 0x44e320: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e31c) {
            ctx->pc = 0x44E33Cu;
            goto label_44e33c;
        }
    }
    ctx->pc = 0x44E324u;
label_44e324:
    // 0x44e324: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x44e324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_44e328:
    // 0x44e328: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x44e328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44e32c:
    // 0x44e32c: 0x8c44e790  lw          $a0, -0x1870($v0)
    ctx->pc = 0x44e32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961040)));
label_44e330:
    // 0x44e330: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x44e330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_44e334:
    // 0x44e334: 0xae050068  sw          $a1, 0x68($s0)
    ctx->pc = 0x44e334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 5));
label_44e338:
    // 0x44e338: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x44e338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_44e33c:
    // 0x44e33c: 0x16680007  bne         $s3, $t0, . + 4 + (0x7 << 2)
label_44e340:
    if (ctx->pc == 0x44E340u) {
        ctx->pc = 0x44E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E33Cu;
        // 0x44e340: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E344u;
        goto label_44e344;
    }
    ctx->pc = 0x44E33Cu;
    {
        const bool branch_taken_0x44e33c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 8));
        ctx->pc = 0x44E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E33Cu;
        // 0x44e340: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e33c) {
            ctx->pc = 0x44E35Cu;
            goto label_44e35c;
        }
    }
    ctx->pc = 0x44E344u;
label_44e344:
    // 0x44e344: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x44e344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_44e348:
    // 0x44e348: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x44e348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44e34c:
    // 0x44e34c: 0x8c44e794  lw          $a0, -0x186C($v0)
    ctx->pc = 0x44e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961044)));
label_44e350:
    // 0x44e350: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x44e350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
label_44e354:
    // 0x44e354: 0xae050070  sw          $a1, 0x70($s0)
    ctx->pc = 0x44e354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 5));
label_44e358:
    // 0x44e358: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x44e358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_44e35c:
    // 0x44e35c: 0x16880007  bne         $s4, $t0, . + 4 + (0x7 << 2)
label_44e360:
    if (ctx->pc == 0x44E360u) {
        ctx->pc = 0x44E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E35Cu;
        // 0x44e360: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E364u;
        goto label_44e364;
    }
    ctx->pc = 0x44E35Cu;
    {
        const bool branch_taken_0x44e35c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 8));
        ctx->pc = 0x44E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E35Cu;
        // 0x44e360: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e35c) {
            ctx->pc = 0x44E37Cu;
            goto label_44e37c;
        }
    }
    ctx->pc = 0x44E364u;
label_44e364:
    // 0x44e364: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x44e364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_44e368:
    // 0x44e368: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x44e368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44e36c:
    // 0x44e36c: 0x8c44e798  lw          $a0, -0x1868($v0)
    ctx->pc = 0x44e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961048)));
label_44e370:
    // 0x44e370: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x44e370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
label_44e374:
    // 0x44e374: 0xae050078  sw          $a1, 0x78($s0)
    ctx->pc = 0x44e374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
label_44e378:
    // 0x44e378: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x44e378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_44e37c:
    // 0x44e37c: 0x16a80007  bne         $s5, $t0, . + 4 + (0x7 << 2)
label_44e380:
    if (ctx->pc == 0x44E380u) {
        ctx->pc = 0x44E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E37Cu;
        // 0x44e380: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E384u;
        goto label_44e384;
    }
    ctx->pc = 0x44E37Cu;
    {
        const bool branch_taken_0x44e37c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 8));
        ctx->pc = 0x44E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E37Cu;
        // 0x44e380: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e37c) {
            ctx->pc = 0x44E39Cu;
            goto label_44e39c;
        }
    }
    ctx->pc = 0x44E384u;
label_44e384:
    // 0x44e384: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x44e384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_44e388:
    // 0x44e388: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x44e388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44e38c:
    // 0x44e38c: 0x8c44e79c  lw          $a0, -0x1864($v0)
    ctx->pc = 0x44e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961052)));
label_44e390:
    // 0x44e390: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x44e390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
label_44e394:
    // 0x44e394: 0xae050080  sw          $a1, 0x80($s0)
    ctx->pc = 0x44e394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 5));
label_44e398:
    // 0x44e398: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x44e398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_44e39c:
    // 0x44e39c: 0x16e80007  bne         $s7, $t0, . + 4 + (0x7 << 2)
label_44e3a0:
    if (ctx->pc == 0x44E3A0u) {
        ctx->pc = 0x44E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E39Cu;
        // 0x44e3a0: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E3A4u;
        goto label_44e3a4;
    }
    ctx->pc = 0x44E39Cu;
    {
        const bool branch_taken_0x44e39c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 8));
        ctx->pc = 0x44E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E39Cu;
        // 0x44e3a0: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e39c) {
            ctx->pc = 0x44E3BCu;
            goto label_44e3bc;
        }
    }
    ctx->pc = 0x44E3A4u;
label_44e3a4:
    // 0x44e3a4: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x44e3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_44e3a8:
    // 0x44e3a8: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x44e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44e3ac:
    // 0x44e3ac: 0x8c44e7a0  lw          $a0, -0x1860($v0)
    ctx->pc = 0x44e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961056)));
label_44e3b0:
    // 0x44e3b0: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x44e3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
label_44e3b4:
    // 0x44e3b4: 0xae050088  sw          $a1, 0x88($s0)
    ctx->pc = 0x44e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 5));
label_44e3b8:
    // 0x44e3b8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x44e3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_44e3bc:
    // 0x44e3bc: 0x17c80007  bne         $fp, $t0, . + 4 + (0x7 << 2)
label_44e3c0:
    if (ctx->pc == 0x44E3C0u) {
        ctx->pc = 0x44E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E3BCu;
        // 0x44e3c0: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E3C4u;
        goto label_44e3c4;
    }
    ctx->pc = 0x44E3BCu;
    {
        const bool branch_taken_0x44e3bc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 8));
        ctx->pc = 0x44E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E3BCu;
        // 0x44e3c0: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e3bc) {
            ctx->pc = 0x44E3DCu;
            goto label_44e3dc;
        }
    }
    ctx->pc = 0x44E3C4u;
label_44e3c4:
    // 0x44e3c4: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x44e3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_44e3c8:
    // 0x44e3c8: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x44e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44e3cc:
    // 0x44e3cc: 0x8c44e7a4  lw          $a0, -0x185C($v0)
    ctx->pc = 0x44e3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961060)));
label_44e3d0:
    // 0x44e3d0: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x44e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_44e3d4:
    // 0x44e3d4: 0xae050090  sw          $a1, 0x90($s0)
    ctx->pc = 0x44e3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 5));
label_44e3d8:
    // 0x44e3d8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x44e3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_44e3dc:
    // 0x44e3dc: 0x55480006  bnel        $t2, $t0, . + 4 + (0x6 << 2)
label_44e3e0:
    if (ctx->pc == 0x44E3E0u) {
        ctx->pc = 0x44E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E3DCu;
        // 0x44e3e0: 0xae09000c  sw          $t1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E3E4u;
        goto label_44e3e4;
    }
    ctx->pc = 0x44E3DCu;
    {
        const bool branch_taken_0x44e3dc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 8));
        if (branch_taken_0x44e3dc) {
            ctx->pc = 0x44E3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44E3DCu;
            // 0x44e3e0: 0xae09000c  sw          $t1, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44E3F8u;
            goto label_44e3f8;
        }
    }
    ctx->pc = 0x44E3E4u;
label_44e3e4:
    // 0x44e3e4: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x44e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_44e3e8:
    // 0x44e3e8: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x44e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44e3ec:
    // 0x44e3ec: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x44e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_44e3f0:
    // 0x44e3f0: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x44e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_44e3f4:
    // 0x44e3f4: 0xae09000c  sw          $t1, 0xC($s0)
    ctx->pc = 0x44e3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 9));
label_44e3f8:
    // 0x44e3f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e3fc:
    // 0x44e3fc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x44e3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_44e400:
    // 0x44e400: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x44e400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44e404:
    // 0x44e404: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x44e404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_44e408:
    // 0x44e408: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x44e408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_44e40c:
    // 0x44e40c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x44e40cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_44e410:
    // 0x44e410: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x44e410u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_44e414:
    // 0x44e414: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x44e414u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_44e418:
    // 0x44e418: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x44e418u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_44e41c:
    // 0x44e41c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x44e41cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44e420:
    // 0x44e420: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x44e420u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44e424:
    // 0x44e424: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x44e424u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44e428:
    // 0x44e428: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44e428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44e42c:
    // 0x44e42c: 0x3e00008  jr          $ra
label_44e430:
    if (ctx->pc == 0x44E430u) {
        ctx->pc = 0x44E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E42Cu;
        // 0x44e430: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E434u;
        goto label_44e434;
    }
    ctx->pc = 0x44E42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E42Cu;
        // 0x44e430: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E434u;
label_44e434:
    // 0x44e434: 0x0  nop
    ctx->pc = 0x44e434u;
    // NOP
    ctx->pc = 0x44e438u;
}
