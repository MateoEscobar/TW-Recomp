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

// Function: sub_003DF228
// Address: 0x3df228 - 0x3df688
void sub_003DF228_0x3df228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF228_0x3df228");
#endif

    switch (ctx->pc) {
        case 0x3df228u: goto label_3df228;
        case 0x3df22cu: goto label_3df22c;
        case 0x3df230u: goto label_3df230;
        case 0x3df234u: goto label_3df234;
        case 0x3df238u: goto label_3df238;
        case 0x3df23cu: goto label_3df23c;
        case 0x3df240u: goto label_3df240;
        case 0x3df244u: goto label_3df244;
        case 0x3df248u: goto label_3df248;
        case 0x3df24cu: goto label_3df24c;
        case 0x3df250u: goto label_3df250;
        case 0x3df254u: goto label_3df254;
        case 0x3df258u: goto label_3df258;
        case 0x3df25cu: goto label_3df25c;
        case 0x3df260u: goto label_3df260;
        case 0x3df264u: goto label_3df264;
        case 0x3df268u: goto label_3df268;
        case 0x3df26cu: goto label_3df26c;
        case 0x3df270u: goto label_3df270;
        case 0x3df274u: goto label_3df274;
        case 0x3df278u: goto label_3df278;
        case 0x3df27cu: goto label_3df27c;
        case 0x3df280u: goto label_3df280;
        case 0x3df284u: goto label_3df284;
        case 0x3df288u: goto label_3df288;
        case 0x3df28cu: goto label_3df28c;
        case 0x3df290u: goto label_3df290;
        case 0x3df294u: goto label_3df294;
        case 0x3df298u: goto label_3df298;
        case 0x3df29cu: goto label_3df29c;
        case 0x3df2a0u: goto label_3df2a0;
        case 0x3df2a4u: goto label_3df2a4;
        case 0x3df2a8u: goto label_3df2a8;
        case 0x3df2acu: goto label_3df2ac;
        case 0x3df2b0u: goto label_3df2b0;
        case 0x3df2b4u: goto label_3df2b4;
        case 0x3df2b8u: goto label_3df2b8;
        case 0x3df2bcu: goto label_3df2bc;
        case 0x3df2c0u: goto label_3df2c0;
        case 0x3df2c4u: goto label_3df2c4;
        case 0x3df2c8u: goto label_3df2c8;
        case 0x3df2ccu: goto label_3df2cc;
        case 0x3df2d0u: goto label_3df2d0;
        case 0x3df2d4u: goto label_3df2d4;
        case 0x3df2d8u: goto label_3df2d8;
        case 0x3df2dcu: goto label_3df2dc;
        case 0x3df2e0u: goto label_3df2e0;
        case 0x3df2e4u: goto label_3df2e4;
        case 0x3df2e8u: goto label_3df2e8;
        case 0x3df2ecu: goto label_3df2ec;
        case 0x3df2f0u: goto label_3df2f0;
        case 0x3df2f4u: goto label_3df2f4;
        case 0x3df2f8u: goto label_3df2f8;
        case 0x3df2fcu: goto label_3df2fc;
        case 0x3df300u: goto label_3df300;
        case 0x3df304u: goto label_3df304;
        case 0x3df308u: goto label_3df308;
        case 0x3df30cu: goto label_3df30c;
        case 0x3df310u: goto label_3df310;
        case 0x3df314u: goto label_3df314;
        case 0x3df318u: goto label_3df318;
        case 0x3df31cu: goto label_3df31c;
        case 0x3df320u: goto label_3df320;
        case 0x3df324u: goto label_3df324;
        case 0x3df328u: goto label_3df328;
        case 0x3df32cu: goto label_3df32c;
        case 0x3df330u: goto label_3df330;
        case 0x3df334u: goto label_3df334;
        case 0x3df338u: goto label_3df338;
        case 0x3df33cu: goto label_3df33c;
        case 0x3df340u: goto label_3df340;
        case 0x3df344u: goto label_3df344;
        case 0x3df348u: goto label_3df348;
        case 0x3df34cu: goto label_3df34c;
        case 0x3df350u: goto label_3df350;
        case 0x3df354u: goto label_3df354;
        case 0x3df358u: goto label_3df358;
        case 0x3df35cu: goto label_3df35c;
        case 0x3df360u: goto label_3df360;
        case 0x3df364u: goto label_3df364;
        case 0x3df368u: goto label_3df368;
        case 0x3df36cu: goto label_3df36c;
        case 0x3df370u: goto label_3df370;
        case 0x3df374u: goto label_3df374;
        case 0x3df378u: goto label_3df378;
        case 0x3df37cu: goto label_3df37c;
        case 0x3df380u: goto label_3df380;
        case 0x3df384u: goto label_3df384;
        case 0x3df388u: goto label_3df388;
        case 0x3df38cu: goto label_3df38c;
        case 0x3df390u: goto label_3df390;
        case 0x3df394u: goto label_3df394;
        case 0x3df398u: goto label_3df398;
        case 0x3df39cu: goto label_3df39c;
        case 0x3df3a0u: goto label_3df3a0;
        case 0x3df3a4u: goto label_3df3a4;
        case 0x3df3a8u: goto label_3df3a8;
        case 0x3df3acu: goto label_3df3ac;
        case 0x3df3b0u: goto label_3df3b0;
        case 0x3df3b4u: goto label_3df3b4;
        case 0x3df3b8u: goto label_3df3b8;
        case 0x3df3bcu: goto label_3df3bc;
        case 0x3df3c0u: goto label_3df3c0;
        case 0x3df3c4u: goto label_3df3c4;
        case 0x3df3c8u: goto label_3df3c8;
        case 0x3df3ccu: goto label_3df3cc;
        case 0x3df3d0u: goto label_3df3d0;
        case 0x3df3d4u: goto label_3df3d4;
        case 0x3df3d8u: goto label_3df3d8;
        case 0x3df3dcu: goto label_3df3dc;
        case 0x3df3e0u: goto label_3df3e0;
        case 0x3df3e4u: goto label_3df3e4;
        case 0x3df3e8u: goto label_3df3e8;
        case 0x3df3ecu: goto label_3df3ec;
        case 0x3df3f0u: goto label_3df3f0;
        case 0x3df3f4u: goto label_3df3f4;
        case 0x3df3f8u: goto label_3df3f8;
        case 0x3df3fcu: goto label_3df3fc;
        case 0x3df400u: goto label_3df400;
        case 0x3df404u: goto label_3df404;
        case 0x3df408u: goto label_3df408;
        case 0x3df40cu: goto label_3df40c;
        case 0x3df410u: goto label_3df410;
        case 0x3df414u: goto label_3df414;
        case 0x3df418u: goto label_3df418;
        case 0x3df41cu: goto label_3df41c;
        case 0x3df420u: goto label_3df420;
        case 0x3df424u: goto label_3df424;
        case 0x3df428u: goto label_3df428;
        case 0x3df42cu: goto label_3df42c;
        case 0x3df430u: goto label_3df430;
        case 0x3df434u: goto label_3df434;
        case 0x3df438u: goto label_3df438;
        case 0x3df43cu: goto label_3df43c;
        case 0x3df440u: goto label_3df440;
        case 0x3df444u: goto label_3df444;
        case 0x3df448u: goto label_3df448;
        case 0x3df44cu: goto label_3df44c;
        case 0x3df450u: goto label_3df450;
        case 0x3df454u: goto label_3df454;
        case 0x3df458u: goto label_3df458;
        case 0x3df45cu: goto label_3df45c;
        case 0x3df460u: goto label_3df460;
        case 0x3df464u: goto label_3df464;
        case 0x3df468u: goto label_3df468;
        case 0x3df46cu: goto label_3df46c;
        case 0x3df470u: goto label_3df470;
        case 0x3df474u: goto label_3df474;
        case 0x3df478u: goto label_3df478;
        case 0x3df47cu: goto label_3df47c;
        case 0x3df480u: goto label_3df480;
        case 0x3df484u: goto label_3df484;
        case 0x3df488u: goto label_3df488;
        case 0x3df48cu: goto label_3df48c;
        case 0x3df490u: goto label_3df490;
        case 0x3df494u: goto label_3df494;
        case 0x3df498u: goto label_3df498;
        case 0x3df49cu: goto label_3df49c;
        case 0x3df4a0u: goto label_3df4a0;
        case 0x3df4a4u: goto label_3df4a4;
        case 0x3df4a8u: goto label_3df4a8;
        case 0x3df4acu: goto label_3df4ac;
        case 0x3df4b0u: goto label_3df4b0;
        case 0x3df4b4u: goto label_3df4b4;
        case 0x3df4b8u: goto label_3df4b8;
        case 0x3df4bcu: goto label_3df4bc;
        case 0x3df4c0u: goto label_3df4c0;
        case 0x3df4c4u: goto label_3df4c4;
        case 0x3df4c8u: goto label_3df4c8;
        case 0x3df4ccu: goto label_3df4cc;
        case 0x3df4d0u: goto label_3df4d0;
        case 0x3df4d4u: goto label_3df4d4;
        case 0x3df4d8u: goto label_3df4d8;
        case 0x3df4dcu: goto label_3df4dc;
        case 0x3df4e0u: goto label_3df4e0;
        case 0x3df4e4u: goto label_3df4e4;
        case 0x3df4e8u: goto label_3df4e8;
        case 0x3df4ecu: goto label_3df4ec;
        case 0x3df4f0u: goto label_3df4f0;
        case 0x3df4f4u: goto label_3df4f4;
        case 0x3df4f8u: goto label_3df4f8;
        case 0x3df4fcu: goto label_3df4fc;
        case 0x3df500u: goto label_3df500;
        case 0x3df504u: goto label_3df504;
        case 0x3df508u: goto label_3df508;
        case 0x3df50cu: goto label_3df50c;
        case 0x3df510u: goto label_3df510;
        case 0x3df514u: goto label_3df514;
        case 0x3df518u: goto label_3df518;
        case 0x3df51cu: goto label_3df51c;
        case 0x3df520u: goto label_3df520;
        case 0x3df524u: goto label_3df524;
        case 0x3df528u: goto label_3df528;
        case 0x3df52cu: goto label_3df52c;
        case 0x3df530u: goto label_3df530;
        case 0x3df534u: goto label_3df534;
        case 0x3df538u: goto label_3df538;
        case 0x3df53cu: goto label_3df53c;
        case 0x3df540u: goto label_3df540;
        case 0x3df544u: goto label_3df544;
        case 0x3df548u: goto label_3df548;
        case 0x3df54cu: goto label_3df54c;
        case 0x3df550u: goto label_3df550;
        case 0x3df554u: goto label_3df554;
        case 0x3df558u: goto label_3df558;
        case 0x3df55cu: goto label_3df55c;
        case 0x3df560u: goto label_3df560;
        case 0x3df564u: goto label_3df564;
        case 0x3df568u: goto label_3df568;
        case 0x3df56cu: goto label_3df56c;
        case 0x3df570u: goto label_3df570;
        case 0x3df574u: goto label_3df574;
        case 0x3df578u: goto label_3df578;
        case 0x3df57cu: goto label_3df57c;
        case 0x3df580u: goto label_3df580;
        case 0x3df584u: goto label_3df584;
        case 0x3df588u: goto label_3df588;
        case 0x3df58cu: goto label_3df58c;
        case 0x3df590u: goto label_3df590;
        case 0x3df594u: goto label_3df594;
        case 0x3df598u: goto label_3df598;
        case 0x3df59cu: goto label_3df59c;
        case 0x3df5a0u: goto label_3df5a0;
        case 0x3df5a4u: goto label_3df5a4;
        case 0x3df5a8u: goto label_3df5a8;
        case 0x3df5acu: goto label_3df5ac;
        case 0x3df5b0u: goto label_3df5b0;
        case 0x3df5b4u: goto label_3df5b4;
        case 0x3df5b8u: goto label_3df5b8;
        case 0x3df5bcu: goto label_3df5bc;
        case 0x3df5c0u: goto label_3df5c0;
        case 0x3df5c4u: goto label_3df5c4;
        case 0x3df5c8u: goto label_3df5c8;
        case 0x3df5ccu: goto label_3df5cc;
        case 0x3df5d0u: goto label_3df5d0;
        case 0x3df5d4u: goto label_3df5d4;
        case 0x3df5d8u: goto label_3df5d8;
        case 0x3df5dcu: goto label_3df5dc;
        case 0x3df5e0u: goto label_3df5e0;
        case 0x3df5e4u: goto label_3df5e4;
        case 0x3df5e8u: goto label_3df5e8;
        case 0x3df5ecu: goto label_3df5ec;
        case 0x3df5f0u: goto label_3df5f0;
        case 0x3df5f4u: goto label_3df5f4;
        case 0x3df5f8u: goto label_3df5f8;
        case 0x3df5fcu: goto label_3df5fc;
        case 0x3df600u: goto label_3df600;
        case 0x3df604u: goto label_3df604;
        case 0x3df608u: goto label_3df608;
        case 0x3df60cu: goto label_3df60c;
        case 0x3df610u: goto label_3df610;
        case 0x3df614u: goto label_3df614;
        case 0x3df618u: goto label_3df618;
        case 0x3df61cu: goto label_3df61c;
        case 0x3df620u: goto label_3df620;
        case 0x3df624u: goto label_3df624;
        case 0x3df628u: goto label_3df628;
        case 0x3df62cu: goto label_3df62c;
        case 0x3df630u: goto label_3df630;
        case 0x3df634u: goto label_3df634;
        case 0x3df638u: goto label_3df638;
        case 0x3df63cu: goto label_3df63c;
        case 0x3df640u: goto label_3df640;
        case 0x3df644u: goto label_3df644;
        case 0x3df648u: goto label_3df648;
        case 0x3df64cu: goto label_3df64c;
        case 0x3df650u: goto label_3df650;
        case 0x3df654u: goto label_3df654;
        case 0x3df658u: goto label_3df658;
        case 0x3df65cu: goto label_3df65c;
        case 0x3df660u: goto label_3df660;
        case 0x3df664u: goto label_3df664;
        case 0x3df668u: goto label_3df668;
        case 0x3df66cu: goto label_3df66c;
        case 0x3df670u: goto label_3df670;
        case 0x3df674u: goto label_3df674;
        case 0x3df678u: goto label_3df678;
        case 0x3df67cu: goto label_3df67c;
        case 0x3df680u: goto label_3df680;
        case 0x3df684u: goto label_3df684;
        default: break;
    }

    ctx->pc = 0x3df228u;

label_3df228:
    // 0x3df228: 0x27bdfa70  addiu       $sp, $sp, -0x590
    ctx->pc = 0x3df228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965872));
label_3df22c:
    // 0x3df22c: 0x7fb00540  sq          $s0, 0x540($sp)
    ctx->pc = 0x3df22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 16));
label_3df230:
    // 0x3df230: 0x7fb10530  sq          $s1, 0x530($sp)
    ctx->pc = 0x3df230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 17));
label_3df234:
    // 0x3df234: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3df234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3df238:
    // 0x3df238: 0x7fb20520  sq          $s2, 0x520($sp)
    ctx->pc = 0x3df238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 18));
label_3df23c:
    // 0x3df23c: 0x7fb30510  sq          $s3, 0x510($sp)
    ctx->pc = 0x3df23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 19));
label_3df240:
    // 0x3df240: 0x7fb40500  sq          $s4, 0x500($sp)
    ctx->pc = 0x3df240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 20));
label_3df244:
    // 0x3df244: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3df244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3df248:
    // 0x3df248: 0x7fb504f0  sq          $s5, 0x4F0($sp)
    ctx->pc = 0x3df248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 21));
label_3df24c:
    // 0x3df24c: 0x7fb604e0  sq          $s6, 0x4E0($sp)
    ctx->pc = 0x3df24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 22));
label_3df250:
    // 0x3df250: 0x2415000f  addiu       $s5, $zero, 0xF
    ctx->pc = 0x3df250u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3df254:
    // 0x3df254: 0x7fb704d0  sq          $s7, 0x4D0($sp)
    ctx->pc = 0x3df254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 23));
label_3df258:
    // 0x3df258: 0x7fbe04c0  sq          $fp, 0x4C0($sp)
    ctx->pc = 0x3df258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 30));
label_3df25c:
    // 0x3df25c: 0xe7bb0588  swc1        $f27, 0x588($sp)
    ctx->pc = 0x3df25cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1416), bits); }
label_3df260:
    // 0x3df260: 0xe7ba0580  swc1        $f26, 0x580($sp)
    ctx->pc = 0x3df260u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
label_3df264:
    // 0x3df264: 0xe7b90578  swc1        $f25, 0x578($sp)
    ctx->pc = 0x3df264u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1400), bits); }
label_3df268:
    // 0x3df268: 0xe7b80570  swc1        $f24, 0x570($sp)
    ctx->pc = 0x3df268u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1392), bits); }
label_3df26c:
    // 0x3df26c: 0xffbf04b0  sd          $ra, 0x4B0($sp)
    ctx->pc = 0x3df26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 31));
label_3df270:
    // 0x3df270: 0xe7b70568  swc1        $f23, 0x568($sp)
    ctx->pc = 0x3df270u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1384), bits); }
label_3df274:
    // 0x3df274: 0xe7b60560  swc1        $f22, 0x560($sp)
    ctx->pc = 0x3df274u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1376), bits); }
label_3df278:
    // 0x3df278: 0xe7b50558  swc1        $f21, 0x558($sp)
    ctx->pc = 0x3df278u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1368), bits); }
label_3df27c:
    // 0x3df27c: 0xe7b40550  swc1        $f20, 0x550($sp)
    ctx->pc = 0x3df27cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1360), bits); }
label_3df280:
    // 0x3df280: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x3df280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
label_3df284:
    // 0x3df284: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3df284u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3df288:
    // 0x3df288: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3df288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3df28c:
    // 0x3df28c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3df28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3df290:
    // 0x3df290: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3df290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3df294:
    // 0x3df294: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3df294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3df298:
    // 0x3df298: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3df298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3df29c:
    // 0x3df29c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3df29cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3df2a0:
    // 0x3df2a0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3df2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3df2a4:
    // 0x3df2a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3df2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3df2a8:
    // 0x3df2a8: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x3df2a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_3df2ac:
    // 0x3df2ac: 0x40f809  jalr        $v0
label_3df2b0:
    if (ctx->pc == 0x3DF2B0u) {
        ctx->pc = 0x3DF2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2ACu;
        // 0x3df2b0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF2B4u;
        goto label_3df2b4;
    }
    ctx->pc = 0x3DF2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DF2B4u);
        ctx->pc = 0x3DF2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2ACu;
        // 0x3df2b0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF2ACu, 0x3DF2B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DF2B4u;
label_3df2b4:
    // 0x3df2b4: 0x24020404  addiu       $v0, $zero, 0x404
    ctx->pc = 0x3df2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_3df2b8:
    // 0x3df2b8: 0xae6000bc  sw          $zero, 0xBC($s3)
    ctx->pc = 0x3df2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 0));
label_3df2bc:
    // 0x3df2bc: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3df2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3df2c0:
    // 0x3df2c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3df2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3df2c4:
    // 0x3df2c4: 0xc0e858c  jal         func_3A1630
label_3df2c8:
    if (ctx->pc == 0x3DF2C8u) {
        ctx->pc = 0x3DF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2C4u;
        // 0x3df2c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF2CCu;
        goto label_3df2cc;
    }
    ctx->pc = 0x3DF2C4u;
    SET_GPR_U32(ctx, 31, 0x3DF2CCu);
    ctx->pc = 0x3DF2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF2C4u;
    // 0x3df2c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DF2C4u, 0x3DF2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF2CCu;
label_3df2cc:
    // 0x3df2cc: 0xc0ea13a  jal         func_3A84E8
label_3df2d0:
    if (ctx->pc == 0x3DF2D0u) {
        ctx->pc = 0x3DF2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2CCu;
        // 0x3df2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF2D4u;
        goto label_3df2d4;
    }
    ctx->pc = 0x3DF2CCu;
    SET_GPR_U32(ctx, 31, 0x3DF2D4u);
    ctx->pc = 0x3DF2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF2CCu;
    // 0x3df2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3DF2CCu, 0x3DF2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF2D4u;
label_3df2d4:
    // 0x3df2d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3df2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df2d8:
    // 0x3df2d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3df2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3df2dc:
    // 0x3df2dc: 0xc0ea12a  jal         func_3A84A8
label_3df2e0:
    if (ctx->pc == 0x3DF2E0u) {
        ctx->pc = 0x3DF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2DCu;
        // 0x3df2e0: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF2E4u;
        goto label_3df2e4;
    }
    ctx->pc = 0x3DF2DCu;
    SET_GPR_U32(ctx, 31, 0x3DF2E4u);
    ctx->pc = 0x3DF2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF2DCu;
    // 0x3df2e0: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DF2DCu, 0x3DF2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF2E4u;
label_3df2e4:
    // 0x3df2e4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3df2e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3df2e8:
    // 0x3df2e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3df2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3df2ec:
    // 0x3df2ec: 0x2451b8b8  addiu       $s1, $v0, -0x4748
    ctx->pc = 0x3df2ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3df2f0:
    // 0x3df2f0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3df2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3df2f4:
    // 0x3df2f4: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x3df2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
label_3df2f8:
    // 0x3df2f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3df2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3df2fc:
    // 0x3df2fc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3df2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3df300:
    // 0x3df300: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x3df300u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3df304:
    // 0x3df304: 0x27b20450  addiu       $s2, $sp, 0x450
    ctx->pc = 0x3df304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3df308:
    // 0x3df308: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x3df308u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3df30c:
    // 0x3df30c: 0x27b004a0  addiu       $s0, $sp, 0x4A0
    ctx->pc = 0x3df30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_3df310:
    // 0x3df310: 0x24573030  addiu       $s7, $v0, 0x3030
    ctx->pc = 0x3df310u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 12336));
label_3df314:
    // 0x3df314: 0x24962f30  addiu       $s6, $a0, 0x2F30
    ctx->pc = 0x3df314u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 12080));
label_3df318:
    // 0x3df318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3df318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df31c:
    // 0x3df31c: 0xc0cd4ee  jal         func_3353B8
label_3df320:
    if (ctx->pc == 0x3DF320u) {
        ctx->pc = 0x3DF320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF31Cu;
        // 0x3df320: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF324u;
        goto label_3df324;
    }
    ctx->pc = 0x3DF31Cu;
    SET_GPR_U32(ctx, 31, 0x3DF324u);
    ctx->pc = 0x3DF320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF31Cu;
    // 0x3df320: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DF31Cu, 0x3DF324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF324u;
label_3df324:
    // 0x3df324: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
label_3df328:
    if (ctx->pc == 0x3DF328u) {
        ctx->pc = 0x3DF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF324u;
        // 0x3df328: 0x26f70010  addiu       $s7, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF32Cu;
        goto label_3df32c;
    }
    ctx->pc = 0x3DF324u;
    {
        const bool branch_taken_0x3df324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3df324) {
            ctx->pc = 0x3DF328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF324u;
            // 0x3df328: 0x26f70010  addiu       $s7, $s7, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF474u;
            goto label_3df474;
        }
    }
    ctx->pc = 0x3DF32Cu;
label_3df32c:
    // 0x3df32c: 0xc0e9694  jal         func_3A5A50
label_3df330:
    if (ctx->pc == 0x3DF330u) {
        ctx->pc = 0x3DF330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF32Cu;
        // 0x3df330: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF334u;
        goto label_3df334;
    }
    ctx->pc = 0x3DF32Cu;
    SET_GPR_U32(ctx, 31, 0x3DF334u);
    ctx->pc = 0x3DF330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF32Cu;
    // 0x3df330: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3DF32Cu, 0x3DF334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF334u;
label_3df334:
    // 0x3df334: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_3df338:
    if (ctx->pc == 0x3DF338u) {
        ctx->pc = 0x3DF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF334u;
        // 0x3df338: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF33Cu;
        goto label_3df33c;
    }
    ctx->pc = 0x3DF334u;
    {
        const bool branch_taken_0x3df334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF334u;
        // 0x3df338: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df334) {
            ctx->pc = 0x3DF470u;
            goto label_3df470;
        }
    }
    ctx->pc = 0x3DF33Cu;
label_3df33c:
    // 0x3df33c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3df33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df340:
    // 0x3df340: 0xc0cd518  jal         func_335460
label_3df344:
    if (ctx->pc == 0x3DF344u) {
        ctx->pc = 0x3DF344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF340u;
        // 0x3df344: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF348u;
        goto label_3df348;
    }
    ctx->pc = 0x3DF340u;
    SET_GPR_U32(ctx, 31, 0x3DF348u);
    ctx->pc = 0x3DF344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF340u;
    // 0x3df344: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF340u, 0x3DF348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF348u;
label_3df348:
    // 0x3df348: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3df348u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3df34c:
    // 0x3df34c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3df34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df350:
    // 0x3df350: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3df350u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3df354:
    // 0x3df354: 0xc0cd518  jal         func_335460
label_3df358:
    if (ctx->pc == 0x3DF358u) {
        ctx->pc = 0x3DF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF354u;
        // 0x3df358: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF35Cu;
        goto label_3df35c;
    }
    ctx->pc = 0x3DF354u;
    SET_GPR_U32(ctx, 31, 0x3DF35Cu);
    ctx->pc = 0x3DF358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF354u;
    // 0x3df358: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF354u, 0x3DF35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF35Cu;
label_3df35c:
    // 0x3df35c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3df35cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3df360:
    // 0x3df360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3df360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df364:
    // 0x3df364: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3df364u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3df368:
    // 0x3df368: 0xc0cd518  jal         func_335460
label_3df36c:
    if (ctx->pc == 0x3DF36Cu) {
        ctx->pc = 0x3DF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF368u;
        // 0x3df36c: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF370u;
        goto label_3df370;
    }
    ctx->pc = 0x3DF368u;
    SET_GPR_U32(ctx, 31, 0x3DF370u);
    ctx->pc = 0x3DF36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF368u;
    // 0x3df36c: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF368u, 0x3DF370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF370u;
label_3df370:
    // 0x3df370: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x3df370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
label_3df374:
    // 0x3df374: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3df374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3df378:
    // 0x3df378: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3df378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3df37c:
    // 0x3df37c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3df37cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3df380:
    // 0x3df380: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3df380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3df384:
    // 0x3df384: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3df384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3df388:
    // 0x3df388: 0xc0cd518  jal         func_335460
label_3df38c:
    if (ctx->pc == 0x3DF38Cu) {
        ctx->pc = 0x3DF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF388u;
        // 0x3df38c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF390u;
        goto label_3df390;
    }
    ctx->pc = 0x3DF388u;
    SET_GPR_U32(ctx, 31, 0x3DF390u);
    ctx->pc = 0x3DF38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF388u;
    // 0x3df38c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF388u, 0x3DF390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF390u;
label_3df390:
    // 0x3df390: 0xe7b60450  swc1        $f22, 0x450($sp)
    ctx->pc = 0x3df390u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3df394:
    // 0x3df394: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3df394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3df398:
    // 0x3df398: 0xe7b50454  swc1        $f21, 0x454($sp)
    ctx->pc = 0x3df398u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1108), bits); }
label_3df39c:
    // 0x3df39c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x3df39cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_3df3a0:
    // 0x3df3a0: 0xe7b40458  swc1        $f20, 0x458($sp)
    ctx->pc = 0x3df3a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1112), bits); }
label_3df3a4:
    // 0x3df3a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3df3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3df3a8:
    // 0x3df3a8: 0xe65b000c  swc1        $f27, 0xC($s2)
    ctx->pc = 0x3df3a8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3df3ac:
    // 0x3df3ac: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x3df3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3df3b0:
    // 0x3df3b0: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3df3b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3df3b4:
    // 0x3df3b4: 0xc136b18  jal         func_4DAC60
label_3df3b8:
    if (ctx->pc == 0x3DF3B8u) {
        ctx->pc = 0x3DF3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF3B4u;
        // 0x3df3b8: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF3BCu;
        goto label_3df3bc;
    }
    ctx->pc = 0x3DF3B4u;
    SET_GPR_U32(ctx, 31, 0x3DF3BCu);
    ctx->pc = 0x3DF3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF3B4u;
    // 0x3df3b8: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DF3B4u, 0x3DF3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF3BCu;
label_3df3bc:
    // 0x3df3bc: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3df3bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3df3c0:
    // 0x3df3c0: 0x27a60490  addiu       $a2, $sp, 0x490
    ctx->pc = 0x3df3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3df3c4:
    // 0x3df3c4: 0xe7b704a8  swc1        $f23, 0x4A8($sp)
    ctx->pc = 0x3df3c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1192), bits); }
label_3df3c8:
    // 0x3df3c8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3df3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3df3cc:
    // 0x3df3cc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3df3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3df3d0:
    // 0x3df3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3df3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df3d4:
    // 0x3df3d4: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3df3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3df3d8:
    // 0x3df3d8: 0xafa004a0  sw          $zero, 0x4A0($sp)
    ctx->pc = 0x3df3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 0));
label_3df3dc:
    // 0x3df3dc: 0xafa004a4  sw          $zero, 0x4A4($sp)
    ctx->pc = 0x3df3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 0));
label_3df3e0:
    // 0x3df3e0: 0xe61b000c  swc1        $f27, 0xC($s0)
    ctx->pc = 0x3df3e0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3df3e4:
    // 0x3df3e4: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3df3e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3df3e8:
    // 0x3df3e8: 0xc136b18  jal         func_4DAC60
label_3df3ec:
    if (ctx->pc == 0x3DF3ECu) {
        ctx->pc = 0x3DF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF3E8u;
        // 0x3df3ec: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF3F0u;
        goto label_3df3f0;
    }
    ctx->pc = 0x3DF3E8u;
    SET_GPR_U32(ctx, 31, 0x3DF3F0u);
    ctx->pc = 0x3DF3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF3E8u;
    // 0x3df3ec: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DF3E8u, 0x3DF3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF3F0u;
label_3df3f0:
    // 0x3df3f0: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3df3f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3df3f4:
    // 0x3df3f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3df3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df3f8:
    // 0x3df3f8: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x3df3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
label_3df3fc:
    // 0x3df3fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3df3fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3df400:
    // 0x3df400: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x3df400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_3df404:
    // 0x3df404: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3df404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3df408:
    // 0x3df408: 0xc0cd518  jal         func_335460
label_3df40c:
    if (ctx->pc == 0x3DF40Cu) {
        ctx->pc = 0x3DF40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF408u;
        // 0x3df40c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF410u;
        goto label_3df410;
    }
    ctx->pc = 0x3DF408u;
    SET_GPR_U32(ctx, 31, 0x3DF410u);
    ctx->pc = 0x3DF40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF408u;
    // 0x3df40c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF408u, 0x3DF410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF410u;
label_3df410:
    // 0x3df410: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3df410u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3df414:
    // 0x3df414: 0x27a50480  addiu       $a1, $sp, 0x480
    ctx->pc = 0x3df414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3df418:
    // 0x3df418: 0xc136b24  jal         func_4DAC90
label_3df41c:
    if (ctx->pc == 0x3DF41Cu) {
        ctx->pc = 0x3DF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF418u;
        // 0x3df41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF420u;
        goto label_3df420;
    }
    ctx->pc = 0x3DF418u;
    SET_GPR_U32(ctx, 31, 0x3DF420u);
    ctx->pc = 0x3DF41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF418u;
    // 0x3df41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DF418u, 0x3DF420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF420u;
label_3df420:
    // 0x3df420: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3df420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3df424:
    // 0x3df424: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3df424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3df428:
    // 0x3df428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3df428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df42c:
    // 0x3df42c: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x3df42cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_3df430:
    // 0x3df430: 0xc136b24  jal         func_4DAC90
label_3df434:
    if (ctx->pc == 0x3DF434u) {
        ctx->pc = 0x3DF434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF430u;
        // 0x3df434: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF438u;
        goto label_3df438;
    }
    ctx->pc = 0x3DF430u;
    SET_GPR_U32(ctx, 31, 0x3DF438u);
    ctx->pc = 0x3DF434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF430u;
    // 0x3df434: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DF430u, 0x3DF438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF438u;
label_3df438:
    // 0x3df438: 0x7ba304a0  lq          $v1, 0x4A0($sp)
    ctx->pc = 0x3df438u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3df43c:
    // 0x3df43c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3df43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3df440:
    // 0x3df440: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x3df440u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_3df444:
    // 0x3df444: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3df444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3df448:
    // 0x3df448: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3df448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df44c:
    // 0x3df44c: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3df44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3df450:
    // 0x3df450: 0x7fa204a0  sq          $v0, 0x4A0($sp)
    ctx->pc = 0x3df450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
label_3df454:
    // 0x3df454: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3df454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3df458:
    // 0x3df458: 0xc0e9fa6  jal         func_3A7E98
label_3df45c:
    if (ctx->pc == 0x3DF45Cu) {
        ctx->pc = 0x3DF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF458u;
        // 0x3df45c: 0x7fa30460  sq          $v1, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF460u;
        goto label_3df460;
    }
    ctx->pc = 0x3DF458u;
    SET_GPR_U32(ctx, 31, 0x3DF460u);
    ctx->pc = 0x3DF45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF458u;
    // 0x3df45c: 0x7fa30460  sq          $v1, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3DF458u, 0x3DF460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF460u;
label_3df460:
    // 0x3df460: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3df460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3df464:
    // 0x3df464: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3df464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3df468:
    // 0x3df468: 0xc0f15bc  jal         func_3C56F0
label_3df46c:
    if (ctx->pc == 0x3DF46Cu) {
        ctx->pc = 0x3DF46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF468u;
        // 0x3df46c: 0x244452d0  addiu       $a0, $v0, 0x52D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF470u;
        goto label_3df470;
    }
    ctx->pc = 0x3DF468u;
    SET_GPR_U32(ctx, 31, 0x3DF470u);
    ctx->pc = 0x3DF46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF468u;
    // 0x3df46c: 0x244452d0  addiu       $a0, $v0, 0x52D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DF468u, 0x3DF470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF470u;
label_3df470:
    // 0x3df470: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x3df470u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_3df474:
    // 0x3df474: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x3df474u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_3df478:
    // 0x3df478: 0x6a1ffa7  bgez        $s5, . + 4 + (-0x59 << 2)
label_3df47c:
    if (ctx->pc == 0x3DF47Cu) {
        ctx->pc = 0x3DF47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF478u;
        // 0x3df47c: 0x26d60010  addiu       $s6, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF480u;
        goto label_3df480;
    }
    ctx->pc = 0x3DF478u;
    {
        const bool branch_taken_0x3df478 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x3DF47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF478u;
        // 0x3df47c: 0x26d60010  addiu       $s6, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df478) {
            ctx->pc = 0x3DF318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df318;
        }
    }
    ctx->pc = 0x3DF480u;
label_3df480:
    // 0x3df480: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3df480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3df484:
    // 0x3df484: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3df484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3df488:
    // 0x3df488: 0x0  nop
    ctx->pc = 0x3df488u;
    // NOP
label_3df48c:
    // 0x3df48c: 0x461a0036  c.le.s      $f0, $f26
    ctx->pc = 0x3df48cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df490:
    // 0x3df490: 0x0  nop
    ctx->pc = 0x3df490u;
    // NOP
label_3df494:
    // 0x3df494: 0x45000067  bc1f        . + 4 + (0x67 << 2)
label_3df498:
    if (ctx->pc == 0x3DF498u) {
        ctx->pc = 0x3DF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF494u;
        // 0x3df498: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF49Cu;
        goto label_3df49c;
    }
    ctx->pc = 0x3DF494u;
    {
        const bool branch_taken_0x3df494 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF494u;
        // 0x3df498: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df494) {
            ctx->pc = 0x3DF634u;
            goto label_3df634;
        }
    }
    ctx->pc = 0x3DF49Cu;
label_3df49c:
    // 0x3df49c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3df49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3df4a0:
    // 0x3df4a0: 0x3c01beb3  lui         $at, 0xBEB3
    ctx->pc = 0x3df4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48819 << 16));
label_3df4a4:
    // 0x3df4a4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3df4a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3df4a8:
    // 0x3df4a8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3df4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3df4ac:
    // 0x3df4ac: 0x2451b8b8  addiu       $s1, $v0, -0x4748
    ctx->pc = 0x3df4acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3df4b0:
    // 0x3df4b0: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x3df4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_3df4b4:
    // 0x3df4b4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3df4b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3df4b8:
    // 0x3df4b8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3df4b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3df4bc:
    // 0x3df4bc: 0x460006c6  mov.s       $f27, $f0
    ctx->pc = 0x3df4bcu;
    ctx->f[27] = FPU_MOV_S(ctx->f[0]);
label_3df4c0:
    // 0x3df4c0: 0x24762f30  addiu       $s6, $v1, 0x2F30
    ctx->pc = 0x3df4c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 12080));
label_3df4c4:
    // 0x3df4c4: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x3df4c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3df4c8:
    // 0x3df4c8: 0x27b20450  addiu       $s2, $sp, 0x450
    ctx->pc = 0x3df4c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3df4cc:
    // 0x3df4cc: 0x27b70420  addiu       $s7, $sp, 0x420
    ctx->pc = 0x3df4ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3df4d0:
    // 0x3df4d0: 0x27b004a0  addiu       $s0, $sp, 0x4A0
    ctx->pc = 0x3df4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_3df4d4:
    // 0x3df4d4: 0x3c1e0058  lui         $fp, 0x58
    ctx->pc = 0x3df4d4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)88 << 16));
label_3df4d8:
    // 0x3df4d8: 0x2415000f  addiu       $s5, $zero, 0xF
    ctx->pc = 0x3df4d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3df4dc:
    // 0x3df4dc: 0x0  nop
    ctx->pc = 0x3df4dcu;
    // NOP
label_3df4e0:
    // 0x3df4e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3df4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df4e4:
    // 0x3df4e4: 0xc0cd4ee  jal         func_3353B8
label_3df4e8:
    if (ctx->pc == 0x3DF4E8u) {
        ctx->pc = 0x3DF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF4E4u;
        // 0x3df4e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF4ECu;
        goto label_3df4ec;
    }
    ctx->pc = 0x3DF4E4u;
    SET_GPR_U32(ctx, 31, 0x3DF4ECu);
    ctx->pc = 0x3DF4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF4E4u;
    // 0x3df4e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DF4E4u, 0x3DF4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF4ECu;
label_3df4ec:
    // 0x3df4ec: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
label_3df4f0:
    if (ctx->pc == 0x3DF4F0u) {
        ctx->pc = 0x3DF4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF4ECu;
        // 0x3df4f0: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF4F4u;
        goto label_3df4f4;
    }
    ctx->pc = 0x3DF4ECu;
    {
        const bool branch_taken_0x3df4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3df4ec) {
            ctx->pc = 0x3DF4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF4ECu;
            // 0x3df4f0: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF62Cu;
            goto label_3df62c;
        }
    }
    ctx->pc = 0x3DF4F4u;
label_3df4f4:
    // 0x3df4f4: 0xc0e9694  jal         func_3A5A50
label_3df4f8:
    if (ctx->pc == 0x3DF4F8u) {
        ctx->pc = 0x3DF4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF4F4u;
        // 0x3df4f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF4FCu;
        goto label_3df4fc;
    }
    ctx->pc = 0x3DF4F4u;
    SET_GPR_U32(ctx, 31, 0x3DF4FCu);
    ctx->pc = 0x3DF4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF4F4u;
    // 0x3df4f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3DF4F4u, 0x3DF4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF4FCu;
label_3df4fc:
    // 0x3df4fc: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_3df500:
    if (ctx->pc == 0x3DF500u) {
        ctx->pc = 0x3DF500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF4FCu;
        // 0x3df500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF504u;
        goto label_3df504;
    }
    ctx->pc = 0x3DF4FCu;
    {
        const bool branch_taken_0x3df4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF4FCu;
        // 0x3df500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df4fc) {
            ctx->pc = 0x3DF628u;
            goto label_3df628;
        }
    }
    ctx->pc = 0x3DF504u;
label_3df504:
    // 0x3df504: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3df504u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3df508:
    // 0x3df508: 0xc0cd518  jal         func_335460
label_3df50c:
    if (ctx->pc == 0x3DF50Cu) {
        ctx->pc = 0x3DF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF508u;
        // 0x3df50c: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF510u;
        goto label_3df510;
    }
    ctx->pc = 0x3DF508u;
    SET_GPR_U32(ctx, 31, 0x3DF510u);
    ctx->pc = 0x3DF50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF508u;
    // 0x3df50c: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF508u, 0x3DF510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF510u;
label_3df510:
    // 0x3df510: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3df510u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3df514:
    // 0x3df514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3df514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df518:
    // 0x3df518: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3df518u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3df51c:
    // 0x3df51c: 0xc0cd518  jal         func_335460
label_3df520:
    if (ctx->pc == 0x3DF520u) {
        ctx->pc = 0x3DF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF51Cu;
        // 0x3df520: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF524u;
        goto label_3df524;
    }
    ctx->pc = 0x3DF51Cu;
    SET_GPR_U32(ctx, 31, 0x3DF524u);
    ctx->pc = 0x3DF520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF51Cu;
    // 0x3df520: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF51Cu, 0x3DF524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF524u;
label_3df524:
    // 0x3df524: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3df524u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3df528:
    // 0x3df528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3df528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df52c:
    // 0x3df52c: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3df52cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3df530:
    // 0x3df530: 0xc0cd518  jal         func_335460
label_3df534:
    if (ctx->pc == 0x3DF534u) {
        ctx->pc = 0x3DF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF530u;
        // 0x3df534: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF538u;
        goto label_3df538;
    }
    ctx->pc = 0x3DF530u;
    SET_GPR_U32(ctx, 31, 0x3DF538u);
    ctx->pc = 0x3DF534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF530u;
    // 0x3df534: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF530u, 0x3DF538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF538u;
label_3df538:
    // 0x3df538: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x3df538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
label_3df53c:
    // 0x3df53c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3df53cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3df540:
    // 0x3df540: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3df540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3df544:
    // 0x3df544: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3df544u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3df548:
    // 0x3df548: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3df548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3df54c:
    // 0x3df54c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3df54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3df550:
    // 0x3df550: 0xc0cd518  jal         func_335460
label_3df554:
    if (ctx->pc == 0x3DF554u) {
        ctx->pc = 0x3DF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF550u;
        // 0x3df554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF558u;
        goto label_3df558;
    }
    ctx->pc = 0x3DF550u;
    SET_GPR_U32(ctx, 31, 0x3DF558u);
    ctx->pc = 0x3DF554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF550u;
    // 0x3df554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF550u, 0x3DF558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF558u;
label_3df558:
    // 0x3df558: 0xe7b60450  swc1        $f22, 0x450($sp)
    ctx->pc = 0x3df558u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3df55c:
    // 0x3df55c: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3df55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3df560:
    // 0x3df560: 0xe7b50454  swc1        $f21, 0x454($sp)
    ctx->pc = 0x3df560u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1108), bits); }
label_3df564:
    // 0x3df564: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x3df564u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_3df568:
    // 0x3df568: 0xe7b40458  swc1        $f20, 0x458($sp)
    ctx->pc = 0x3df568u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1112), bits); }
label_3df56c:
    // 0x3df56c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3df56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3df570:
    // 0x3df570: 0xe65b000c  swc1        $f27, 0xC($s2)
    ctx->pc = 0x3df570u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3df574:
    // 0x3df574: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x3df574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3df578:
    // 0x3df578: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3df578u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3df57c:
    // 0x3df57c: 0xc136b18  jal         func_4DAC60
label_3df580:
    if (ctx->pc == 0x3DF580u) {
        ctx->pc = 0x3DF580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF57Cu;
        // 0x3df580: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF584u;
        goto label_3df584;
    }
    ctx->pc = 0x3DF57Cu;
    SET_GPR_U32(ctx, 31, 0x3DF584u);
    ctx->pc = 0x3DF580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF57Cu;
    // 0x3df580: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DF57Cu, 0x3DF584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF584u;
label_3df584:
    // 0x3df584: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3df584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3df588:
    // 0x3df588: 0x27a60490  addiu       $a2, $sp, 0x490
    ctx->pc = 0x3df588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3df58c:
    // 0x3df58c: 0xe7b704a8  swc1        $f23, 0x4A8($sp)
    ctx->pc = 0x3df58cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1192), bits); }
label_3df590:
    // 0x3df590: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3df590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3df594:
    // 0x3df594: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3df594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3df598:
    // 0x3df598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3df598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df59c:
    // 0x3df59c: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3df59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3df5a0:
    // 0x3df5a0: 0xafa004a0  sw          $zero, 0x4A0($sp)
    ctx->pc = 0x3df5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 0));
label_3df5a4:
    // 0x3df5a4: 0xafa004a4  sw          $zero, 0x4A4($sp)
    ctx->pc = 0x3df5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 0));
label_3df5a8:
    // 0x3df5a8: 0xe61b000c  swc1        $f27, 0xC($s0)
    ctx->pc = 0x3df5a8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3df5ac:
    // 0x3df5ac: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3df5acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3df5b0:
    // 0x3df5b0: 0xc136b18  jal         func_4DAC60
label_3df5b4:
    if (ctx->pc == 0x3DF5B4u) {
        ctx->pc = 0x3DF5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF5B0u;
        // 0x3df5b4: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF5B8u;
        goto label_3df5b8;
    }
    ctx->pc = 0x3DF5B0u;
    SET_GPR_U32(ctx, 31, 0x3DF5B8u);
    ctx->pc = 0x3DF5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF5B0u;
    // 0x3df5b4: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DF5B0u, 0x3DF5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF5B8u;
label_3df5b8:
    // 0x3df5b8: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3df5b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3df5bc:
    // 0x3df5bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3df5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df5c0:
    // 0x3df5c0: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x3df5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_3df5c4:
    // 0x3df5c4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3df5c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3df5c8:
    // 0x3df5c8: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3df5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3df5cc:
    // 0x3df5cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3df5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3df5d0:
    // 0x3df5d0: 0xc0cd518  jal         func_335460
label_3df5d4:
    if (ctx->pc == 0x3DF5D4u) {
        ctx->pc = 0x3DF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF5D0u;
        // 0x3df5d4: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF5D8u;
        goto label_3df5d8;
    }
    ctx->pc = 0x3DF5D0u;
    SET_GPR_U32(ctx, 31, 0x3DF5D8u);
    ctx->pc = 0x3DF5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF5D0u;
    // 0x3df5d4: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF5D0u, 0x3DF5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF5D8u;
label_3df5d8:
    // 0x3df5d8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3df5d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3df5dc:
    // 0x3df5dc: 0x27a50480  addiu       $a1, $sp, 0x480
    ctx->pc = 0x3df5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3df5e0:
    // 0x3df5e0: 0xc136b24  jal         func_4DAC90
label_3df5e4:
    if (ctx->pc == 0x3DF5E4u) {
        ctx->pc = 0x3DF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF5E0u;
        // 0x3df5e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF5E8u;
        goto label_3df5e8;
    }
    ctx->pc = 0x3DF5E0u;
    SET_GPR_U32(ctx, 31, 0x3DF5E8u);
    ctx->pc = 0x3DF5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF5E0u;
    // 0x3df5e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DF5E0u, 0x3DF5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF5E8u;
label_3df5e8:
    // 0x3df5e8: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3df5e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3df5ec:
    // 0x3df5ec: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3df5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3df5f0:
    // 0x3df5f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3df5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df5f4:
    // 0x3df5f4: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x3df5f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_3df5f8:
    // 0x3df5f8: 0xc136b24  jal         func_4DAC90
label_3df5fc:
    if (ctx->pc == 0x3DF5FCu) {
        ctx->pc = 0x3DF5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF5F8u;
        // 0x3df5fc: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF600u;
        goto label_3df600;
    }
    ctx->pc = 0x3DF5F8u;
    SET_GPR_U32(ctx, 31, 0x3DF600u);
    ctx->pc = 0x3DF5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF5F8u;
    // 0x3df5fc: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DF5F8u, 0x3DF600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF600u;
label_3df600:
    // 0x3df600: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3df600u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3df604:
    // 0x3df604: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3df604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3df608:
    // 0x3df608: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3df608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3df60c:
    // 0x3df60c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3df60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3df610:
    // 0x3df610: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3df610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3df614:
    // 0x3df614: 0xc0e9f84  jal         func_3A7E10
label_3df618:
    if (ctx->pc == 0x3DF618u) {
        ctx->pc = 0x3DF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF614u;
        // 0x3df618: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF61Cu;
        goto label_3df61c;
    }
    ctx->pc = 0x3DF614u;
    SET_GPR_U32(ctx, 31, 0x3DF61Cu);
    ctx->pc = 0x3DF618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF614u;
    // 0x3df618: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3DF614u, 0x3DF61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF61Cu;
label_3df61c:
    // 0x3df61c: 0x27c452e0  addiu       $a0, $fp, 0x52E0
    ctx->pc = 0x3df61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 21216));
label_3df620:
    // 0x3df620: 0xc0f15bc  jal         func_3C56F0
label_3df624:
    if (ctx->pc == 0x3DF624u) {
        ctx->pc = 0x3DF624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF620u;
        // 0x3df624: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF628u;
        goto label_3df628;
    }
    ctx->pc = 0x3DF620u;
    SET_GPR_U32(ctx, 31, 0x3DF628u);
    ctx->pc = 0x3DF624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF620u;
    // 0x3df624: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DF620u, 0x3DF628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF628u;
label_3df628:
    // 0x3df628: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x3df628u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_3df62c:
    // 0x3df62c: 0x6a1ffac  bgez        $s5, . + 4 + (-0x54 << 2)
label_3df630:
    if (ctx->pc == 0x3DF630u) {
        ctx->pc = 0x3DF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF62Cu;
        // 0x3df630: 0x26d60010  addiu       $s6, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF634u;
        goto label_3df634;
    }
    ctx->pc = 0x3DF62Cu;
    {
        const bool branch_taken_0x3df62c = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x3DF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF62Cu;
        // 0x3df630: 0x26d60010  addiu       $s6, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df62c) {
            ctx->pc = 0x3DF4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df4e0;
        }
    }
    ctx->pc = 0x3DF634u;
label_3df634:
    // 0x3df634: 0x7bb00540  lq          $s0, 0x540($sp)
    ctx->pc = 0x3df634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_3df638:
    // 0x3df638: 0x7bb10530  lq          $s1, 0x530($sp)
    ctx->pc = 0x3df638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_3df63c:
    // 0x3df63c: 0x7bb20520  lq          $s2, 0x520($sp)
    ctx->pc = 0x3df63cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_3df640:
    // 0x3df640: 0x7bb30510  lq          $s3, 0x510($sp)
    ctx->pc = 0x3df640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3df644:
    // 0x3df644: 0x7bb40500  lq          $s4, 0x500($sp)
    ctx->pc = 0x3df644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3df648:
    // 0x3df648: 0x7bb504f0  lq          $s5, 0x4F0($sp)
    ctx->pc = 0x3df648u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3df64c:
    // 0x3df64c: 0x7bb604e0  lq          $s6, 0x4E0($sp)
    ctx->pc = 0x3df64cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3df650:
    // 0x3df650: 0x7bb704d0  lq          $s7, 0x4D0($sp)
    ctx->pc = 0x3df650u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3df654:
    // 0x3df654: 0x7bbe04c0  lq          $fp, 0x4C0($sp)
    ctx->pc = 0x3df654u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3df658:
    // 0x3df658: 0xdfbf04b0  ld          $ra, 0x4B0($sp)
    ctx->pc = 0x3df658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
label_3df65c:
    // 0x3df65c: 0xc7bb0588  lwc1        $f27, 0x588($sp)
    ctx->pc = 0x3df65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_3df660:
    // 0x3df660: 0xc7ba0580  lwc1        $f26, 0x580($sp)
    ctx->pc = 0x3df660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3df664:
    // 0x3df664: 0xc7b90578  lwc1        $f25, 0x578($sp)
    ctx->pc = 0x3df664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3df668:
    // 0x3df668: 0xc7b80570  lwc1        $f24, 0x570($sp)
    ctx->pc = 0x3df668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3df66c:
    // 0x3df66c: 0xc7b70568  lwc1        $f23, 0x568($sp)
    ctx->pc = 0x3df66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3df670:
    // 0x3df670: 0xc7b60560  lwc1        $f22, 0x560($sp)
    ctx->pc = 0x3df670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3df674:
    // 0x3df674: 0xc7b50558  lwc1        $f21, 0x558($sp)
    ctx->pc = 0x3df674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3df678:
    // 0x3df678: 0xc7b40550  lwc1        $f20, 0x550($sp)
    ctx->pc = 0x3df678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3df67c:
    // 0x3df67c: 0x3e00008  jr          $ra
label_3df680:
    if (ctx->pc == 0x3DF680u) {
        ctx->pc = 0x3DF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF67Cu;
        // 0x3df680: 0x27bd0590  addiu       $sp, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF684u;
        goto label_3df684;
    }
    ctx->pc = 0x3DF67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF67Cu;
        // 0x3df680: 0x27bd0590  addiu       $sp, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF684u;
label_3df684:
    // 0x3df684: 0x0  nop
    ctx->pc = 0x3df684u;
    // NOP
    ctx->pc = 0x3df688u;
}
