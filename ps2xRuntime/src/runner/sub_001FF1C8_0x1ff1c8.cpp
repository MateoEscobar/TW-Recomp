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

// Function: sub_001FF1C8
// Address: 0x1ff1c8 - 0x1ff598
void sub_001FF1C8_0x1ff1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF1C8_0x1ff1c8");
#endif

    switch (ctx->pc) {
        case 0x1ff1c8u: goto label_1ff1c8;
        case 0x1ff1ccu: goto label_1ff1cc;
        case 0x1ff1d0u: goto label_1ff1d0;
        case 0x1ff1d4u: goto label_1ff1d4;
        case 0x1ff1d8u: goto label_1ff1d8;
        case 0x1ff1dcu: goto label_1ff1dc;
        case 0x1ff1e0u: goto label_1ff1e0;
        case 0x1ff1e4u: goto label_1ff1e4;
        case 0x1ff1e8u: goto label_1ff1e8;
        case 0x1ff1ecu: goto label_1ff1ec;
        case 0x1ff1f0u: goto label_1ff1f0;
        case 0x1ff1f4u: goto label_1ff1f4;
        case 0x1ff1f8u: goto label_1ff1f8;
        case 0x1ff1fcu: goto label_1ff1fc;
        case 0x1ff200u: goto label_1ff200;
        case 0x1ff204u: goto label_1ff204;
        case 0x1ff208u: goto label_1ff208;
        case 0x1ff20cu: goto label_1ff20c;
        case 0x1ff210u: goto label_1ff210;
        case 0x1ff214u: goto label_1ff214;
        case 0x1ff218u: goto label_1ff218;
        case 0x1ff21cu: goto label_1ff21c;
        case 0x1ff220u: goto label_1ff220;
        case 0x1ff224u: goto label_1ff224;
        case 0x1ff228u: goto label_1ff228;
        case 0x1ff22cu: goto label_1ff22c;
        case 0x1ff230u: goto label_1ff230;
        case 0x1ff234u: goto label_1ff234;
        case 0x1ff238u: goto label_1ff238;
        case 0x1ff23cu: goto label_1ff23c;
        case 0x1ff240u: goto label_1ff240;
        case 0x1ff244u: goto label_1ff244;
        case 0x1ff248u: goto label_1ff248;
        case 0x1ff24cu: goto label_1ff24c;
        case 0x1ff250u: goto label_1ff250;
        case 0x1ff254u: goto label_1ff254;
        case 0x1ff258u: goto label_1ff258;
        case 0x1ff25cu: goto label_1ff25c;
        case 0x1ff260u: goto label_1ff260;
        case 0x1ff264u: goto label_1ff264;
        case 0x1ff268u: goto label_1ff268;
        case 0x1ff26cu: goto label_1ff26c;
        case 0x1ff270u: goto label_1ff270;
        case 0x1ff274u: goto label_1ff274;
        case 0x1ff278u: goto label_1ff278;
        case 0x1ff27cu: goto label_1ff27c;
        case 0x1ff280u: goto label_1ff280;
        case 0x1ff284u: goto label_1ff284;
        case 0x1ff288u: goto label_1ff288;
        case 0x1ff28cu: goto label_1ff28c;
        case 0x1ff290u: goto label_1ff290;
        case 0x1ff294u: goto label_1ff294;
        case 0x1ff298u: goto label_1ff298;
        case 0x1ff29cu: goto label_1ff29c;
        case 0x1ff2a0u: goto label_1ff2a0;
        case 0x1ff2a4u: goto label_1ff2a4;
        case 0x1ff2a8u: goto label_1ff2a8;
        case 0x1ff2acu: goto label_1ff2ac;
        case 0x1ff2b0u: goto label_1ff2b0;
        case 0x1ff2b4u: goto label_1ff2b4;
        case 0x1ff2b8u: goto label_1ff2b8;
        case 0x1ff2bcu: goto label_1ff2bc;
        case 0x1ff2c0u: goto label_1ff2c0;
        case 0x1ff2c4u: goto label_1ff2c4;
        case 0x1ff2c8u: goto label_1ff2c8;
        case 0x1ff2ccu: goto label_1ff2cc;
        case 0x1ff2d0u: goto label_1ff2d0;
        case 0x1ff2d4u: goto label_1ff2d4;
        case 0x1ff2d8u: goto label_1ff2d8;
        case 0x1ff2dcu: goto label_1ff2dc;
        case 0x1ff2e0u: goto label_1ff2e0;
        case 0x1ff2e4u: goto label_1ff2e4;
        case 0x1ff2e8u: goto label_1ff2e8;
        case 0x1ff2ecu: goto label_1ff2ec;
        case 0x1ff2f0u: goto label_1ff2f0;
        case 0x1ff2f4u: goto label_1ff2f4;
        case 0x1ff2f8u: goto label_1ff2f8;
        case 0x1ff2fcu: goto label_1ff2fc;
        case 0x1ff300u: goto label_1ff300;
        case 0x1ff304u: goto label_1ff304;
        case 0x1ff308u: goto label_1ff308;
        case 0x1ff30cu: goto label_1ff30c;
        case 0x1ff310u: goto label_1ff310;
        case 0x1ff314u: goto label_1ff314;
        case 0x1ff318u: goto label_1ff318;
        case 0x1ff31cu: goto label_1ff31c;
        case 0x1ff320u: goto label_1ff320;
        case 0x1ff324u: goto label_1ff324;
        case 0x1ff328u: goto label_1ff328;
        case 0x1ff32cu: goto label_1ff32c;
        case 0x1ff330u: goto label_1ff330;
        case 0x1ff334u: goto label_1ff334;
        case 0x1ff338u: goto label_1ff338;
        case 0x1ff33cu: goto label_1ff33c;
        case 0x1ff340u: goto label_1ff340;
        case 0x1ff344u: goto label_1ff344;
        case 0x1ff348u: goto label_1ff348;
        case 0x1ff34cu: goto label_1ff34c;
        case 0x1ff350u: goto label_1ff350;
        case 0x1ff354u: goto label_1ff354;
        case 0x1ff358u: goto label_1ff358;
        case 0x1ff35cu: goto label_1ff35c;
        case 0x1ff360u: goto label_1ff360;
        case 0x1ff364u: goto label_1ff364;
        case 0x1ff368u: goto label_1ff368;
        case 0x1ff36cu: goto label_1ff36c;
        case 0x1ff370u: goto label_1ff370;
        case 0x1ff374u: goto label_1ff374;
        case 0x1ff378u: goto label_1ff378;
        case 0x1ff37cu: goto label_1ff37c;
        case 0x1ff380u: goto label_1ff380;
        case 0x1ff384u: goto label_1ff384;
        case 0x1ff388u: goto label_1ff388;
        case 0x1ff38cu: goto label_1ff38c;
        case 0x1ff390u: goto label_1ff390;
        case 0x1ff394u: goto label_1ff394;
        case 0x1ff398u: goto label_1ff398;
        case 0x1ff39cu: goto label_1ff39c;
        case 0x1ff3a0u: goto label_1ff3a0;
        case 0x1ff3a4u: goto label_1ff3a4;
        case 0x1ff3a8u: goto label_1ff3a8;
        case 0x1ff3acu: goto label_1ff3ac;
        case 0x1ff3b0u: goto label_1ff3b0;
        case 0x1ff3b4u: goto label_1ff3b4;
        case 0x1ff3b8u: goto label_1ff3b8;
        case 0x1ff3bcu: goto label_1ff3bc;
        case 0x1ff3c0u: goto label_1ff3c0;
        case 0x1ff3c4u: goto label_1ff3c4;
        case 0x1ff3c8u: goto label_1ff3c8;
        case 0x1ff3ccu: goto label_1ff3cc;
        case 0x1ff3d0u: goto label_1ff3d0;
        case 0x1ff3d4u: goto label_1ff3d4;
        case 0x1ff3d8u: goto label_1ff3d8;
        case 0x1ff3dcu: goto label_1ff3dc;
        case 0x1ff3e0u: goto label_1ff3e0;
        case 0x1ff3e4u: goto label_1ff3e4;
        case 0x1ff3e8u: goto label_1ff3e8;
        case 0x1ff3ecu: goto label_1ff3ec;
        case 0x1ff3f0u: goto label_1ff3f0;
        case 0x1ff3f4u: goto label_1ff3f4;
        case 0x1ff3f8u: goto label_1ff3f8;
        case 0x1ff3fcu: goto label_1ff3fc;
        case 0x1ff400u: goto label_1ff400;
        case 0x1ff404u: goto label_1ff404;
        case 0x1ff408u: goto label_1ff408;
        case 0x1ff40cu: goto label_1ff40c;
        case 0x1ff410u: goto label_1ff410;
        case 0x1ff414u: goto label_1ff414;
        case 0x1ff418u: goto label_1ff418;
        case 0x1ff41cu: goto label_1ff41c;
        case 0x1ff420u: goto label_1ff420;
        case 0x1ff424u: goto label_1ff424;
        case 0x1ff428u: goto label_1ff428;
        case 0x1ff42cu: goto label_1ff42c;
        case 0x1ff430u: goto label_1ff430;
        case 0x1ff434u: goto label_1ff434;
        case 0x1ff438u: goto label_1ff438;
        case 0x1ff43cu: goto label_1ff43c;
        case 0x1ff440u: goto label_1ff440;
        case 0x1ff444u: goto label_1ff444;
        case 0x1ff448u: goto label_1ff448;
        case 0x1ff44cu: goto label_1ff44c;
        case 0x1ff450u: goto label_1ff450;
        case 0x1ff454u: goto label_1ff454;
        case 0x1ff458u: goto label_1ff458;
        case 0x1ff45cu: goto label_1ff45c;
        case 0x1ff460u: goto label_1ff460;
        case 0x1ff464u: goto label_1ff464;
        case 0x1ff468u: goto label_1ff468;
        case 0x1ff46cu: goto label_1ff46c;
        case 0x1ff470u: goto label_1ff470;
        case 0x1ff474u: goto label_1ff474;
        case 0x1ff478u: goto label_1ff478;
        case 0x1ff47cu: goto label_1ff47c;
        case 0x1ff480u: goto label_1ff480;
        case 0x1ff484u: goto label_1ff484;
        case 0x1ff488u: goto label_1ff488;
        case 0x1ff48cu: goto label_1ff48c;
        case 0x1ff490u: goto label_1ff490;
        case 0x1ff494u: goto label_1ff494;
        case 0x1ff498u: goto label_1ff498;
        case 0x1ff49cu: goto label_1ff49c;
        case 0x1ff4a0u: goto label_1ff4a0;
        case 0x1ff4a4u: goto label_1ff4a4;
        case 0x1ff4a8u: goto label_1ff4a8;
        case 0x1ff4acu: goto label_1ff4ac;
        case 0x1ff4b0u: goto label_1ff4b0;
        case 0x1ff4b4u: goto label_1ff4b4;
        case 0x1ff4b8u: goto label_1ff4b8;
        case 0x1ff4bcu: goto label_1ff4bc;
        case 0x1ff4c0u: goto label_1ff4c0;
        case 0x1ff4c4u: goto label_1ff4c4;
        case 0x1ff4c8u: goto label_1ff4c8;
        case 0x1ff4ccu: goto label_1ff4cc;
        case 0x1ff4d0u: goto label_1ff4d0;
        case 0x1ff4d4u: goto label_1ff4d4;
        case 0x1ff4d8u: goto label_1ff4d8;
        case 0x1ff4dcu: goto label_1ff4dc;
        case 0x1ff4e0u: goto label_1ff4e0;
        case 0x1ff4e4u: goto label_1ff4e4;
        case 0x1ff4e8u: goto label_1ff4e8;
        case 0x1ff4ecu: goto label_1ff4ec;
        case 0x1ff4f0u: goto label_1ff4f0;
        case 0x1ff4f4u: goto label_1ff4f4;
        case 0x1ff4f8u: goto label_1ff4f8;
        case 0x1ff4fcu: goto label_1ff4fc;
        case 0x1ff500u: goto label_1ff500;
        case 0x1ff504u: goto label_1ff504;
        case 0x1ff508u: goto label_1ff508;
        case 0x1ff50cu: goto label_1ff50c;
        case 0x1ff510u: goto label_1ff510;
        case 0x1ff514u: goto label_1ff514;
        case 0x1ff518u: goto label_1ff518;
        case 0x1ff51cu: goto label_1ff51c;
        case 0x1ff520u: goto label_1ff520;
        case 0x1ff524u: goto label_1ff524;
        case 0x1ff528u: goto label_1ff528;
        case 0x1ff52cu: goto label_1ff52c;
        case 0x1ff530u: goto label_1ff530;
        case 0x1ff534u: goto label_1ff534;
        case 0x1ff538u: goto label_1ff538;
        case 0x1ff53cu: goto label_1ff53c;
        case 0x1ff540u: goto label_1ff540;
        case 0x1ff544u: goto label_1ff544;
        case 0x1ff548u: goto label_1ff548;
        case 0x1ff54cu: goto label_1ff54c;
        case 0x1ff550u: goto label_1ff550;
        case 0x1ff554u: goto label_1ff554;
        case 0x1ff558u: goto label_1ff558;
        case 0x1ff55cu: goto label_1ff55c;
        case 0x1ff560u: goto label_1ff560;
        case 0x1ff564u: goto label_1ff564;
        case 0x1ff568u: goto label_1ff568;
        case 0x1ff56cu: goto label_1ff56c;
        case 0x1ff570u: goto label_1ff570;
        case 0x1ff574u: goto label_1ff574;
        case 0x1ff578u: goto label_1ff578;
        case 0x1ff57cu: goto label_1ff57c;
        case 0x1ff580u: goto label_1ff580;
        case 0x1ff584u: goto label_1ff584;
        case 0x1ff588u: goto label_1ff588;
        case 0x1ff58cu: goto label_1ff58c;
        case 0x1ff590u: goto label_1ff590;
        case 0x1ff594u: goto label_1ff594;
        default: break;
    }

    ctx->pc = 0x1ff1c8u;

label_1ff1c8:
    // 0x1ff1c8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1ff1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1ff1cc:
    // 0x1ff1cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ff1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ff1d0:
    // 0x1ff1d0: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x1ff1d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1ff1d4:
    // 0x1ff1d4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ff1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ff1d8:
    // 0x1ff1d8: 0xc441f514  lwc1        $f1, -0xAEC($v0)
    ctx->pc = 0x1ff1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ff1dc:
    // 0x1ff1dc: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x1ff1dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ff1e0:
    // 0x1ff1e0: 0xc462f518  lwc1        $f2, -0xAE8($v1)
    ctx->pc = 0x1ff1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ff1e4:
    // 0x1ff1e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ff1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ff1e8:
    // 0x1ff1e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ff1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ff1ec:
    // 0x1ff1ec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ff1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1ff1f0:
    // 0x1ff1f0: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x1ff1f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_1ff1f4:
    // 0x1ff1f4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1ff1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1ff1f8:
    // 0x1ff1f8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ff1f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ff1fc:
    // 0x1ff1fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ff1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ff200:
    // 0x1ff200: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x1ff200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_1ff204:
    // 0x1ff204: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1ff204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1ff208:
    // 0x1ff208: 0x25088298  addiu       $t0, $t0, -0x7D68
    ctx->pc = 0x1ff208u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935192));
label_1ff20c:
    // 0x1ff20c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1ff20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1ff210:
    // 0x1ff210: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ff210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ff214:
    // 0x1ff214: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1ff214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1ff218:
    // 0x1ff218: 0x24a582d0  addiu       $a1, $a1, -0x7D30
    ctx->pc = 0x1ff218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935248));
label_1ff21c:
    // 0x1ff21c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1ff21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1ff220:
    // 0x1ff220: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1ff220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1ff224:
    // 0x1ff224: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1ff224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1ff228:
    // 0x1ff228: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ff228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ff22c:
    // 0x1ff22c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1ff22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1ff230:
    // 0x1ff230: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ff230u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff234:
    // 0x1ff234: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1ff234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1ff238:
    // 0x1ff238: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ff238u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff23c:
    // 0x1ff23c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1ff23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1ff240:
    // 0x1ff240: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1ff240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1ff244:
    // 0x1ff244: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ff244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ff248:
    // 0x1ff248: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1ff248u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1ff24c:
    // 0x1ff24c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1ff24cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ff250:
    // 0x1ff250: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1ff250u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ff254:
    // 0x1ff254: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1ff254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1ff258:
    // 0x1ff258: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1ff258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1ff25c:
    // 0x1ff25c: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1ff25cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1ff260:
    // 0x1ff260: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ff260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1ff264:
    // 0x1ff264: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1ff264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1ff268:
    // 0x1ff268: 0xe535000c  swc1        $f21, 0xC($t1)
    ctx->pc = 0x1ff268u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_1ff26c:
    // 0x1ff26c: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1ff26cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1ff270:
    // 0x1ff270: 0x240900bc  addiu       $t1, $zero, 0xBC
    ctx->pc = 0x1ff270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_1ff274:
    // 0x1ff274: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ff274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ff278:
    // 0x1ff278: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ff278u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ff27c:
    // 0x1ff27c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ff27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ff280:
    // 0x1ff280: 0x40f809  jalr        $v0
label_1ff284:
    if (ctx->pc == 0x1FF284u) {
        ctx->pc = 0x1FF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF280u;
        // 0x1ff284: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF288u;
        goto label_1ff288;
    }
    ctx->pc = 0x1FF280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF288u);
        ctx->pc = 0x1FF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF280u;
        // 0x1ff284: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF280u, 0x1FF288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF288u;
label_1ff288:
    // 0x1ff288: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1ff288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff28c:
    // 0x1ff28c: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
label_1ff290:
    if (ctx->pc == 0x1FF290u) {
        ctx->pc = 0x1FF290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF28Cu;
        // 0x1ff290: 0xae2800b8  sw          $t0, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF294u;
        goto label_1ff294;
    }
    ctx->pc = 0x1FF28Cu;
    {
        const bool branch_taken_0x1ff28c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff28c) {
            ctx->pc = 0x1FF290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF28Cu;
            // 0x1ff290: 0xae2800b8  sw          $t0, 0xB8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF2A4u;
            goto label_1ff2a4;
        }
    }
    ctx->pc = 0x1FF294u;
label_1ff294:
    // 0x1ff294: 0xc0784ce  jal         func_1E1338
label_1ff298:
    if (ctx->pc == 0x1FF298u) {
        ctx->pc = 0x1FF298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF294u;
        // 0x1ff298: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF29Cu;
        goto label_1ff29c;
    }
    ctx->pc = 0x1FF294u;
    SET_GPR_U32(ctx, 31, 0x1FF29Cu);
    ctx->pc = 0x1FF298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF294u;
    // 0x1ff298: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1338u, 0x1FF294u, 0x1FF29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF29Cu;
label_1ff29c:
    // 0x1ff29c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1ff29cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff2a0:
    // 0x1ff2a0: 0xae2800b8  sw          $t0, 0xB8($s1)
    ctx->pc = 0x1ff2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 8));
label_1ff2a4:
    // 0x1ff2a4: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x1ff2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1ff2a8:
    // 0x1ff2a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ff2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ff2ac:
    // 0x1ff2ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ff2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff2b0:
    // 0x1ff2b0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1ff2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1ff2b4:
    // 0x1ff2b4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1ff2b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ff2b8:
    // 0x1ff2b8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ff2b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ff2bc:
    // 0x1ff2bc: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1ff2bcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1ff2c0:
    // 0x1ff2c0: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1ff2c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1ff2c4:
    // 0x1ff2c4: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1ff2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1ff2c8:
    // 0x1ff2c8: 0x40f809  jalr        $v0
label_1ff2cc:
    if (ctx->pc == 0x1FF2CCu) {
        ctx->pc = 0x1FF2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2C8u;
        // 0x1ff2cc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF2D0u;
        goto label_1ff2d0;
    }
    ctx->pc = 0x1FF2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF2D0u);
        ctx->pc = 0x1FF2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2C8u;
        // 0x1ff2cc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF2C8u, 0x1FF2D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF2D0u;
label_1ff2d0:
    // 0x1ff2d0: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x1ff2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1ff2d4:
    // 0x1ff2d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ff2d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1ff2d8:
    // 0x1ff2d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ff2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ff2dc:
    // 0x1ff2dc: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x1ff2dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_1ff2e0:
    // 0x1ff2e0: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x1ff2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1ff2e4:
    // 0x1ff2e4: 0x60f809  jalr        $v1
label_1ff2e8:
    if (ctx->pc == 0x1FF2E8u) {
        ctx->pc = 0x1FF2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2E4u;
        // 0x1ff2e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF2ECu;
        goto label_1ff2ec;
    }
    ctx->pc = 0x1FF2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FF2ECu);
        ctx->pc = 0x1FF2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2E4u;
        // 0x1ff2e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF2E4u, 0x1FF2ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF2ECu;
label_1ff2ec:
    // 0x1ff2ec: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x1ff2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1ff2f0:
    // 0x1ff2f0: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1ff2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_1ff2f4:
    // 0x1ff2f4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ff2f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ff2f8:
    // 0x1ff2f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ff2f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ff2fc:
    // 0x1ff2fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ff2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ff300:
    // 0x1ff300: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1ff300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1ff304:
    // 0x1ff304: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1ff304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1ff308:
    // 0x1ff308: 0x60f809  jalr        $v1
label_1ff30c:
    if (ctx->pc == 0x1FF30Cu) {
        ctx->pc = 0x1FF30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF308u;
        // 0x1ff30c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF310u;
        goto label_1ff310;
    }
    ctx->pc = 0x1FF308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FF310u);
        ctx->pc = 0x1FF30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF308u;
        // 0x1ff30c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF308u, 0x1FF310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF310u;
label_1ff310:
    // 0x1ff310: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x1ff310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1ff314:
    // 0x1ff314: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ff314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ff318:
    // 0x1ff318: 0x84440188  lh          $a0, 0x188($v0)
    ctx->pc = 0x1ff318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 392)));
label_1ff31c:
    // 0x1ff31c: 0x8c43018c  lw          $v1, 0x18C($v0)
    ctx->pc = 0x1ff31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_1ff320:
    // 0x1ff320: 0x60f809  jalr        $v1
label_1ff324:
    if (ctx->pc == 0x1FF324u) {
        ctx->pc = 0x1FF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF320u;
        // 0x1ff324: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF328u;
        goto label_1ff328;
    }
    ctx->pc = 0x1FF320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FF328u);
        ctx->pc = 0x1FF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF320u;
        // 0x1ff324: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF320u, 0x1FF328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF328u;
label_1ff328:
    // 0x1ff328: 0x8e2600b8  lw          $a2, 0xB8($s1)
    ctx->pc = 0x1ff328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1ff32c:
    // 0x1ff32c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff330:
    // 0x1ff330: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ff330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff334:
    // 0x1ff334: 0x84440160  lh          $a0, 0x160($v0)
    ctx->pc = 0x1ff334u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 352)));
label_1ff338:
    // 0x1ff338: 0x8c430164  lw          $v1, 0x164($v0)
    ctx->pc = 0x1ff338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
label_1ff33c:
    // 0x1ff33c: 0x60f809  jalr        $v1
label_1ff340:
    if (ctx->pc == 0x1FF340u) {
        ctx->pc = 0x1FF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF33Cu;
        // 0x1ff340: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF344u;
        goto label_1ff344;
    }
    ctx->pc = 0x1FF33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FF344u);
        ctx->pc = 0x1FF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF33Cu;
        // 0x1ff340: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF33Cu, 0x1FF344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF344u;
label_1ff344:
    // 0x1ff344: 0x8e2600b8  lw          $a2, 0xB8($s1)
    ctx->pc = 0x1ff344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1ff348:
    // 0x1ff348: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1ff348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1ff34c:
    // 0x1ff34c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1ff34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_1ff350:
    // 0x1ff350: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ff350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff354:
    // 0x1ff354: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x1ff354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
label_1ff358:
    // 0x1ff358: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x1ff358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
label_1ff35c:
    // 0x1ff35c: 0x60f809  jalr        $v1
label_1ff360:
    if (ctx->pc == 0x1FF360u) {
        ctx->pc = 0x1FF360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF35Cu;
        // 0x1ff360: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF364u;
        goto label_1ff364;
    }
    ctx->pc = 0x1FF35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FF364u);
        ctx->pc = 0x1FF360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF35Cu;
        // 0x1ff360: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF35Cu, 0x1FF364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF364u;
label_1ff364:
    // 0x1ff364: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x1ff364u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1ff368:
    // 0x1ff368: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1ff368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ff36c:
    // 0x1ff36c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1ff36cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1ff370:
    // 0x1ff370: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1ff370u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ff374:
    // 0x1ff374: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x1ff374u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1ff378:
    // 0x1ff378: 0xe475000c  swc1        $f21, 0xC($v1)
    ctx->pc = 0x1ff378u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1ff37c:
    // 0x1ff37c: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x1ff37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_1ff380:
    // 0x1ff380: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ff380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ff384:
    // 0x1ff384: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x1ff384u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ff388:
    // 0x1ff388: 0x12430044  beq         $s2, $v1, . + 4 + (0x44 << 2)
label_1ff38c:
    if (ctx->pc == 0x1FF38Cu) {
        ctx->pc = 0x1FF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF388u;
        // 0x1ff38c: 0x3c150056  lui         $s5, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF390u;
        goto label_1ff390;
    }
    ctx->pc = 0x1FF388u;
    {
        const bool branch_taken_0x1ff388 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF388u;
        // 0x1ff38c: 0x3c150056  lui         $s5, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff388) {
            ctx->pc = 0x1FF49Cu;
            goto label_1ff49c;
        }
    }
    ctx->pc = 0x1FF390u;
label_1ff390:
    // 0x1ff390: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1ff390u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ff394:
    // 0x1ff394: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ff394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ff398:
    // 0x1ff398: 0x26a582e0  addiu       $a1, $s5, -0x7D20
    ctx->pc = 0x1ff398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935264));
label_1ff39c:
    // 0x1ff39c: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1ff39cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1ff3a0:
    // 0x1ff3a0: 0x24060270  addiu       $a2, $zero, 0x270
    ctx->pc = 0x1ff3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
label_1ff3a4:
    // 0x1ff3a4: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x1ff3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_1ff3a8:
    // 0x1ff3a8: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1ff3a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ff3ac:
    // 0x1ff3ac: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ff3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ff3b0:
    // 0x1ff3b0: 0x24488298  addiu       $t0, $v0, -0x7D68
    ctx->pc = 0x1ff3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935192));
label_1ff3b4:
    // 0x1ff3b4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ff3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ff3b8:
    // 0x1ff3b8: 0x240900ce  addiu       $t1, $zero, 0xCE
    ctx->pc = 0x1ff3b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
label_1ff3bc:
    // 0x1ff3bc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ff3bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ff3c0:
    // 0x1ff3c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ff3c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff3c4:
    // 0x1ff3c4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ff3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ff3c8:
    // 0x1ff3c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ff3c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff3cc:
    // 0x1ff3cc: 0x40f809  jalr        $v0
label_1ff3d0:
    if (ctx->pc == 0x1FF3D0u) {
        ctx->pc = 0x1FF3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3CCu;
        // 0x1ff3d0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF3D4u;
        goto label_1ff3d4;
    }
    ctx->pc = 0x1FF3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF3D4u);
        ctx->pc = 0x1FF3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3CCu;
        // 0x1ff3d0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF3CCu, 0x1FF3D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF3D4u;
label_1ff3d4:
    // 0x1ff3d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ff3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff3d8:
    // 0x1ff3d8: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_1ff3dc:
    if (ctx->pc == 0x1FF3DCu) {
        ctx->pc = 0x1FF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3D8u;
        // 0x1ff3dc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF3E0u;
        goto label_1ff3e0;
    }
    ctx->pc = 0x1FF3D8u;
    {
        const bool branch_taken_0x1ff3d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff3d8) {
            ctx->pc = 0x1FF3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF3D8u;
            // 0x1ff3dc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF3F0u;
            goto label_1ff3f0;
        }
    }
    ctx->pc = 0x1FF3E0u;
label_1ff3e0:
    // 0x1ff3e0: 0xc078bd0  jal         func_1E2F40
label_1ff3e4:
    if (ctx->pc == 0x1FF3E4u) {
        ctx->pc = 0x1FF3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3E0u;
        // 0x1ff3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF3E8u;
        goto label_1ff3e8;
    }
    ctx->pc = 0x1FF3E0u;
    SET_GPR_U32(ctx, 31, 0x1FF3E8u);
    ctx->pc = 0x1FF3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF3E0u;
    // 0x1ff3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2F40u, 0x1FF3E0u, 0x1FF3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF3E8u;
label_1ff3e8:
    // 0x1ff3e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ff3e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff3ec:
    // 0x1ff3ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ff3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ff3f0:
    // 0x1ff3f0: 0x3c08001c  lui         $t0, 0x1C
    ctx->pc = 0x1ff3f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28 << 16));
label_1ff3f4:
    // 0x1ff3f4: 0x8e2900b0  lw          $t1, 0xB0($s1)
    ctx->pc = 0x1ff3f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1ff3f8:
    // 0x1ff3f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ff3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ff3fc:
    // 0x1ff3fc: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1ff3fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1ff400:
    // 0x1ff400: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1ff400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ff404:
    // 0x1ff404: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1ff404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1ff408:
    // 0x1ff408: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1ff408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ff40c:
    // 0x1ff40c: 0x3508001c  ori         $t0, $t0, 0x1C
    ctx->pc = 0x1ff40cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)28);
label_1ff410:
    // 0x1ff410: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1ff410u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ff414:
    // 0x1ff414: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1ff414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1ff418:
    // 0x1ff418: 0x60f809  jalr        $v1
label_1ff41c:
    if (ctx->pc == 0x1FF41Cu) {
        ctx->pc = 0x1FF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF418u;
        // 0x1ff41c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF420u;
        goto label_1ff420;
    }
    ctx->pc = 0x1FF418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FF420u);
        ctx->pc = 0x1FF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF418u;
        // 0x1ff41c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF418u, 0x1FF420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF420u;
label_1ff420:
    // 0x1ff420: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x1ff420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
label_1ff424:
    // 0x1ff424: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ff424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ff428:
    // 0x1ff428: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ff428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ff42c:
    // 0x1ff42c: 0xc05e602  jal         func_179808
label_1ff430:
    if (ctx->pc == 0x1FF430u) {
        ctx->pc = 0x1FF430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF42Cu;
        // 0x1ff430: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF434u;
        goto label_1ff434;
    }
    ctx->pc = 0x1FF42Cu;
    SET_GPR_U32(ctx, 31, 0x1FF434u);
    ctx->pc = 0x1FF430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF42Cu;
    // 0x1ff430: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1FF42Cu, 0x1FF434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF434u;
label_1ff434:
    // 0x1ff434: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ff434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ff438:
    // 0x1ff438: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ff438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ff43c:
    // 0x1ff43c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ff43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff440:
    // 0x1ff440: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x1ff440u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_1ff444:
    // 0x1ff444: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x1ff444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_1ff448:
    // 0x1ff448: 0x40f809  jalr        $v0
label_1ff44c:
    if (ctx->pc == 0x1FF44Cu) {
        ctx->pc = 0x1FF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF448u;
        // 0x1ff44c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF450u;
        goto label_1ff450;
    }
    ctx->pc = 0x1FF448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF450u);
        ctx->pc = 0x1FF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF448u;
        // 0x1ff44c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF448u, 0x1FF450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF450u;
label_1ff450:
    // 0x1ff450: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ff450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ff454:
    // 0x1ff454: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff458:
    // 0x1ff458: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1ff458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ff45c:
    // 0x1ff45c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1ff45cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_1ff460:
    // 0x1ff460: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1ff460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1ff464:
    // 0x1ff464: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ff464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ff468:
    // 0x1ff468: 0x40f809  jalr        $v0
label_1ff46c:
    if (ctx->pc == 0x1FF46Cu) {
        ctx->pc = 0x1FF46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF468u;
        // 0x1ff46c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF470u;
        goto label_1ff470;
    }
    ctx->pc = 0x1FF468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF470u);
        ctx->pc = 0x1FF46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF468u;
        // 0x1ff46c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF468u, 0x1FF470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF470u;
label_1ff470:
    // 0x1ff470: 0x8e2600b8  lw          $a2, 0xB8($s1)
    ctx->pc = 0x1ff470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1ff474:
    // 0x1ff474: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ff474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ff478:
    // 0x1ff478: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ff478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff47c:
    // 0x1ff47c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1ff47cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_1ff480:
    // 0x1ff480: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x1ff480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1ff484:
    // 0x1ff484: 0x60f809  jalr        $v1
label_1ff488:
    if (ctx->pc == 0x1FF488u) {
        ctx->pc = 0x1FF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF484u;
        // 0x1ff488: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF48Cu;
        goto label_1ff48c;
    }
    ctx->pc = 0x1FF484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FF48Cu);
        ctx->pc = 0x1FF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF484u;
        // 0x1ff488: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF484u, 0x1FF48Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF48Cu;
label_1ff48c:
    // 0x1ff48c: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x1ff48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_1ff490:
    // 0x1ff490: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ff490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ff494:
    // 0x1ff494: 0x1643ffc0  bne         $s2, $v1, . + 4 + (-0x40 << 2)
label_1ff498:
    if (ctx->pc == 0x1FF498u) {
        ctx->pc = 0x1FF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF494u;
        // 0x1ff498: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF49Cu;
        goto label_1ff49c;
    }
    ctx->pc = 0x1FF494u;
    {
        const bool branch_taken_0x1ff494 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF494u;
        // 0x1ff498: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff494) {
            ctx->pc = 0x1FF398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff398;
        }
    }
    ctx->pc = 0x1FF49Cu;
label_1ff49c:
    // 0x1ff49c: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x1ff49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_1ff4a0:
    // 0x1ff4a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ff4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ff4a4:
    // 0x1ff4a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ff4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ff4a8:
    // 0x1ff4a8: 0xc07fb84  jal         func_1FEE10
label_1ff4ac:
    if (ctx->pc == 0x1FF4ACu) {
        ctx->pc = 0x1FF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4A8u;
        // 0x1ff4ac: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4B0u;
        goto label_1ff4b0;
    }
    ctx->pc = 0x1FF4A8u;
    SET_GPR_U32(ctx, 31, 0x1FF4B0u);
    ctx->pc = 0x1FF4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF4A8u;
    // 0x1ff4ac: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE10u, 0x1FF4A8u, 0x1FF4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF4B0u;
label_1ff4b0:
    // 0x1ff4b0: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x1ff4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_1ff4b4:
    // 0x1ff4b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff4b8:
    // 0x1ff4b8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1ff4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ff4bc:
    // 0x1ff4bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ff4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ff4c0:
    // 0x1ff4c0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1ff4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ff4c4:
    // 0x1ff4c4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1ff4c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1ff4c8:
    // 0x1ff4c8: 0x54450008  bnel        $v0, $a1, . + 4 + (0x8 << 2)
label_1ff4cc:
    if (ctx->pc == 0x1FF4CCu) {
        ctx->pc = 0x1FF4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4C8u;
        // 0x1ff4cc: 0x8e2500b8  lw          $a1, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4D0u;
        goto label_1ff4d0;
    }
    ctx->pc = 0x1FF4C8u;
    {
        const bool branch_taken_0x1ff4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ff4c8) {
            ctx->pc = 0x1FF4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF4C8u;
            // 0x1ff4cc: 0x8e2500b8  lw          $a1, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF4ECu;
            goto label_1ff4ec;
        }
    }
    ctx->pc = 0x1FF4D0u;
label_1ff4d0:
    // 0x1ff4d0: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x1ff4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_1ff4d4:
    // 0x1ff4d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ff4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ff4d8:
    // 0x1ff4d8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1ff4d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1ff4dc:
    // 0x1ff4dc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1ff4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1ff4e0:
    // 0x1ff4e0: 0x40f809  jalr        $v0
label_1ff4e4:
    if (ctx->pc == 0x1FF4E4u) {
        ctx->pc = 0x1FF4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4E0u;
        // 0x1ff4e4: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4E8u;
        goto label_1ff4e8;
    }
    ctx->pc = 0x1FF4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF4E8u);
        ctx->pc = 0x1FF4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4E0u;
        // 0x1ff4e4: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF4E0u, 0x1FF4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF4E8u;
label_1ff4e8:
    // 0x1ff4e8: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x1ff4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1ff4ec:
    // 0x1ff4ec: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1ff4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1ff4f0:
    // 0x1ff4f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ff4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ff4f4:
    // 0x1ff4f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ff4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ff4f8:
    // 0x1ff4f8: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1ff4f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1ff4fc:
    // 0x1ff4fc: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1ff4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1ff500:
    // 0x1ff500: 0x60f809  jalr        $v1
label_1ff504:
    if (ctx->pc == 0x1FF504u) {
        ctx->pc = 0x1FF504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF500u;
        // 0x1ff504: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF508u;
        goto label_1ff508;
    }
    ctx->pc = 0x1FF500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FF508u);
        ctx->pc = 0x1FF504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF500u;
        // 0x1ff504: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF500u, 0x1FF508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF508u;
label_1ff508:
    // 0x1ff508: 0x8e2600b8  lw          $a2, 0xB8($s1)
    ctx->pc = 0x1ff508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1ff50c:
    // 0x1ff50c: 0x8fc5f520  lw          $a1, -0xAE0($fp)
    ctx->pc = 0x1ff50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294964512)));
label_1ff510:
    // 0x1ff510: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ff510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff514:
    // 0x1ff514: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x1ff514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_1ff518:
    // 0x1ff518: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x1ff518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_1ff51c:
    // 0x1ff51c: 0x60f809  jalr        $v1
label_1ff520:
    if (ctx->pc == 0x1FF520u) {
        ctx->pc = 0x1FF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF51Cu;
        // 0x1ff520: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF524u;
        goto label_1ff524;
    }
    ctx->pc = 0x1FF51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FF524u);
        ctx->pc = 0x1FF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF51Cu;
        // 0x1ff520: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF51Cu, 0x1FF524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF524u;
label_1ff524:
    // 0x1ff524: 0x8e2600b8  lw          $a2, 0xB8($s1)
    ctx->pc = 0x1ff524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1ff528:
    // 0x1ff528: 0x8fc5f520  lw          $a1, -0xAE0($fp)
    ctx->pc = 0x1ff528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294964512)));
label_1ff52c:
    // 0x1ff52c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ff52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff530:
    // 0x1ff530: 0x84440138  lh          $a0, 0x138($v0)
    ctx->pc = 0x1ff530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 312)));
label_1ff534:
    // 0x1ff534: 0x8c43013c  lw          $v1, 0x13C($v0)
    ctx->pc = 0x1ff534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_1ff538:
    // 0x1ff538: 0x60f809  jalr        $v1
label_1ff53c:
    if (ctx->pc == 0x1FF53Cu) {
        ctx->pc = 0x1FF53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF538u;
        // 0x1ff53c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF540u;
        goto label_1ff540;
    }
    ctx->pc = 0x1FF538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FF540u);
        ctx->pc = 0x1FF53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF538u;
        // 0x1ff53c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF538u, 0x1FF540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF540u;
label_1ff540:
    // 0x1ff540: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x1ff540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1ff544:
    // 0x1ff544: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ff544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ff548:
    // 0x1ff548: 0xc44cf51c  lwc1        $f12, -0xAE4($v0)
    ctx->pc = 0x1ff548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ff54c:
    // 0x1ff54c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ff54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ff550:
    // 0x1ff550: 0x84640130  lh          $a0, 0x130($v1)
    ctx->pc = 0x1ff550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 304)));
label_1ff554:
    // 0x1ff554: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x1ff554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
label_1ff558:
    // 0x1ff558: 0x40f809  jalr        $v0
label_1ff55c:
    if (ctx->pc == 0x1FF55Cu) {
        ctx->pc = 0x1FF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF558u;
        // 0x1ff55c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF560u;
        goto label_1ff560;
    }
    ctx->pc = 0x1FF558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF560u);
        ctx->pc = 0x1FF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF558u;
        // 0x1ff55c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF558u, 0x1FF560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF560u;
label_1ff560:
    // 0x1ff560: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1ff560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1ff564:
    // 0x1ff564: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1ff564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1ff568:
    // 0x1ff568: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1ff568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1ff56c:
    // 0x1ff56c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1ff56cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1ff570:
    // 0x1ff570: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1ff570u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1ff574:
    // 0x1ff574: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1ff574u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ff578:
    // 0x1ff578: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1ff578u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ff57c:
    // 0x1ff57c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1ff57cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ff580:
    // 0x1ff580: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1ff580u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ff584:
    // 0x1ff584: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ff584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ff588:
    // 0x1ff588: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x1ff588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1ff58c:
    // 0x1ff58c: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1ff58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ff590:
    // 0x1ff590: 0x3e00008  jr          $ra
label_1ff594:
    if (ctx->pc == 0x1FF594u) {
        ctx->pc = 0x1FF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF590u;
        // 0x1ff594: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF598u;
        goto label_fallthrough_0x1ff590;
    }
    ctx->pc = 0x1FF590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF590u;
        // 0x1ff594: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ff590:
    ctx->pc = 0x1FF598u;
}
