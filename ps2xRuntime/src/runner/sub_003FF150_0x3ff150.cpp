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

// Function: sub_003FF150
// Address: 0x3ff150 - 0x3ff5c0
void sub_003FF150_0x3ff150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FF150_0x3ff150");
#endif

    switch (ctx->pc) {
        case 0x3ff150u: goto label_3ff150;
        case 0x3ff154u: goto label_3ff154;
        case 0x3ff158u: goto label_3ff158;
        case 0x3ff15cu: goto label_3ff15c;
        case 0x3ff160u: goto label_3ff160;
        case 0x3ff164u: goto label_3ff164;
        case 0x3ff168u: goto label_3ff168;
        case 0x3ff16cu: goto label_3ff16c;
        case 0x3ff170u: goto label_3ff170;
        case 0x3ff174u: goto label_3ff174;
        case 0x3ff178u: goto label_3ff178;
        case 0x3ff17cu: goto label_3ff17c;
        case 0x3ff180u: goto label_3ff180;
        case 0x3ff184u: goto label_3ff184;
        case 0x3ff188u: goto label_3ff188;
        case 0x3ff18cu: goto label_3ff18c;
        case 0x3ff190u: goto label_3ff190;
        case 0x3ff194u: goto label_3ff194;
        case 0x3ff198u: goto label_3ff198;
        case 0x3ff19cu: goto label_3ff19c;
        case 0x3ff1a0u: goto label_3ff1a0;
        case 0x3ff1a4u: goto label_3ff1a4;
        case 0x3ff1a8u: goto label_3ff1a8;
        case 0x3ff1acu: goto label_3ff1ac;
        case 0x3ff1b0u: goto label_3ff1b0;
        case 0x3ff1b4u: goto label_3ff1b4;
        case 0x3ff1b8u: goto label_3ff1b8;
        case 0x3ff1bcu: goto label_3ff1bc;
        case 0x3ff1c0u: goto label_3ff1c0;
        case 0x3ff1c4u: goto label_3ff1c4;
        case 0x3ff1c8u: goto label_3ff1c8;
        case 0x3ff1ccu: goto label_3ff1cc;
        case 0x3ff1d0u: goto label_3ff1d0;
        case 0x3ff1d4u: goto label_3ff1d4;
        case 0x3ff1d8u: goto label_3ff1d8;
        case 0x3ff1dcu: goto label_3ff1dc;
        case 0x3ff1e0u: goto label_3ff1e0;
        case 0x3ff1e4u: goto label_3ff1e4;
        case 0x3ff1e8u: goto label_3ff1e8;
        case 0x3ff1ecu: goto label_3ff1ec;
        case 0x3ff1f0u: goto label_3ff1f0;
        case 0x3ff1f4u: goto label_3ff1f4;
        case 0x3ff1f8u: goto label_3ff1f8;
        case 0x3ff1fcu: goto label_3ff1fc;
        case 0x3ff200u: goto label_3ff200;
        case 0x3ff204u: goto label_3ff204;
        case 0x3ff208u: goto label_3ff208;
        case 0x3ff20cu: goto label_3ff20c;
        case 0x3ff210u: goto label_3ff210;
        case 0x3ff214u: goto label_3ff214;
        case 0x3ff218u: goto label_3ff218;
        case 0x3ff21cu: goto label_3ff21c;
        case 0x3ff220u: goto label_3ff220;
        case 0x3ff224u: goto label_3ff224;
        case 0x3ff228u: goto label_3ff228;
        case 0x3ff22cu: goto label_3ff22c;
        case 0x3ff230u: goto label_3ff230;
        case 0x3ff234u: goto label_3ff234;
        case 0x3ff238u: goto label_3ff238;
        case 0x3ff23cu: goto label_3ff23c;
        case 0x3ff240u: goto label_3ff240;
        case 0x3ff244u: goto label_3ff244;
        case 0x3ff248u: goto label_3ff248;
        case 0x3ff24cu: goto label_3ff24c;
        case 0x3ff250u: goto label_3ff250;
        case 0x3ff254u: goto label_3ff254;
        case 0x3ff258u: goto label_3ff258;
        case 0x3ff25cu: goto label_3ff25c;
        case 0x3ff260u: goto label_3ff260;
        case 0x3ff264u: goto label_3ff264;
        case 0x3ff268u: goto label_3ff268;
        case 0x3ff26cu: goto label_3ff26c;
        case 0x3ff270u: goto label_3ff270;
        case 0x3ff274u: goto label_3ff274;
        case 0x3ff278u: goto label_3ff278;
        case 0x3ff27cu: goto label_3ff27c;
        case 0x3ff280u: goto label_3ff280;
        case 0x3ff284u: goto label_3ff284;
        case 0x3ff288u: goto label_3ff288;
        case 0x3ff28cu: goto label_3ff28c;
        case 0x3ff290u: goto label_3ff290;
        case 0x3ff294u: goto label_3ff294;
        case 0x3ff298u: goto label_3ff298;
        case 0x3ff29cu: goto label_3ff29c;
        case 0x3ff2a0u: goto label_3ff2a0;
        case 0x3ff2a4u: goto label_3ff2a4;
        case 0x3ff2a8u: goto label_3ff2a8;
        case 0x3ff2acu: goto label_3ff2ac;
        case 0x3ff2b0u: goto label_3ff2b0;
        case 0x3ff2b4u: goto label_3ff2b4;
        case 0x3ff2b8u: goto label_3ff2b8;
        case 0x3ff2bcu: goto label_3ff2bc;
        case 0x3ff2c0u: goto label_3ff2c0;
        case 0x3ff2c4u: goto label_3ff2c4;
        case 0x3ff2c8u: goto label_3ff2c8;
        case 0x3ff2ccu: goto label_3ff2cc;
        case 0x3ff2d0u: goto label_3ff2d0;
        case 0x3ff2d4u: goto label_3ff2d4;
        case 0x3ff2d8u: goto label_3ff2d8;
        case 0x3ff2dcu: goto label_3ff2dc;
        case 0x3ff2e0u: goto label_3ff2e0;
        case 0x3ff2e4u: goto label_3ff2e4;
        case 0x3ff2e8u: goto label_3ff2e8;
        case 0x3ff2ecu: goto label_3ff2ec;
        case 0x3ff2f0u: goto label_3ff2f0;
        case 0x3ff2f4u: goto label_3ff2f4;
        case 0x3ff2f8u: goto label_3ff2f8;
        case 0x3ff2fcu: goto label_3ff2fc;
        case 0x3ff300u: goto label_3ff300;
        case 0x3ff304u: goto label_3ff304;
        case 0x3ff308u: goto label_3ff308;
        case 0x3ff30cu: goto label_3ff30c;
        case 0x3ff310u: goto label_3ff310;
        case 0x3ff314u: goto label_3ff314;
        case 0x3ff318u: goto label_3ff318;
        case 0x3ff31cu: goto label_3ff31c;
        case 0x3ff320u: goto label_3ff320;
        case 0x3ff324u: goto label_3ff324;
        case 0x3ff328u: goto label_3ff328;
        case 0x3ff32cu: goto label_3ff32c;
        case 0x3ff330u: goto label_3ff330;
        case 0x3ff334u: goto label_3ff334;
        case 0x3ff338u: goto label_3ff338;
        case 0x3ff33cu: goto label_3ff33c;
        case 0x3ff340u: goto label_3ff340;
        case 0x3ff344u: goto label_3ff344;
        case 0x3ff348u: goto label_3ff348;
        case 0x3ff34cu: goto label_3ff34c;
        case 0x3ff350u: goto label_3ff350;
        case 0x3ff354u: goto label_3ff354;
        case 0x3ff358u: goto label_3ff358;
        case 0x3ff35cu: goto label_3ff35c;
        case 0x3ff360u: goto label_3ff360;
        case 0x3ff364u: goto label_3ff364;
        case 0x3ff368u: goto label_3ff368;
        case 0x3ff36cu: goto label_3ff36c;
        case 0x3ff370u: goto label_3ff370;
        case 0x3ff374u: goto label_3ff374;
        case 0x3ff378u: goto label_3ff378;
        case 0x3ff37cu: goto label_3ff37c;
        case 0x3ff380u: goto label_3ff380;
        case 0x3ff384u: goto label_3ff384;
        case 0x3ff388u: goto label_3ff388;
        case 0x3ff38cu: goto label_3ff38c;
        case 0x3ff390u: goto label_3ff390;
        case 0x3ff394u: goto label_3ff394;
        case 0x3ff398u: goto label_3ff398;
        case 0x3ff39cu: goto label_3ff39c;
        case 0x3ff3a0u: goto label_3ff3a0;
        case 0x3ff3a4u: goto label_3ff3a4;
        case 0x3ff3a8u: goto label_3ff3a8;
        case 0x3ff3acu: goto label_3ff3ac;
        case 0x3ff3b0u: goto label_3ff3b0;
        case 0x3ff3b4u: goto label_3ff3b4;
        case 0x3ff3b8u: goto label_3ff3b8;
        case 0x3ff3bcu: goto label_3ff3bc;
        case 0x3ff3c0u: goto label_3ff3c0;
        case 0x3ff3c4u: goto label_3ff3c4;
        case 0x3ff3c8u: goto label_3ff3c8;
        case 0x3ff3ccu: goto label_3ff3cc;
        case 0x3ff3d0u: goto label_3ff3d0;
        case 0x3ff3d4u: goto label_3ff3d4;
        case 0x3ff3d8u: goto label_3ff3d8;
        case 0x3ff3dcu: goto label_3ff3dc;
        case 0x3ff3e0u: goto label_3ff3e0;
        case 0x3ff3e4u: goto label_3ff3e4;
        case 0x3ff3e8u: goto label_3ff3e8;
        case 0x3ff3ecu: goto label_3ff3ec;
        case 0x3ff3f0u: goto label_3ff3f0;
        case 0x3ff3f4u: goto label_3ff3f4;
        case 0x3ff3f8u: goto label_3ff3f8;
        case 0x3ff3fcu: goto label_3ff3fc;
        case 0x3ff400u: goto label_3ff400;
        case 0x3ff404u: goto label_3ff404;
        case 0x3ff408u: goto label_3ff408;
        case 0x3ff40cu: goto label_3ff40c;
        case 0x3ff410u: goto label_3ff410;
        case 0x3ff414u: goto label_3ff414;
        case 0x3ff418u: goto label_3ff418;
        case 0x3ff41cu: goto label_3ff41c;
        case 0x3ff420u: goto label_3ff420;
        case 0x3ff424u: goto label_3ff424;
        case 0x3ff428u: goto label_3ff428;
        case 0x3ff42cu: goto label_3ff42c;
        case 0x3ff430u: goto label_3ff430;
        case 0x3ff434u: goto label_3ff434;
        case 0x3ff438u: goto label_3ff438;
        case 0x3ff43cu: goto label_3ff43c;
        case 0x3ff440u: goto label_3ff440;
        case 0x3ff444u: goto label_3ff444;
        case 0x3ff448u: goto label_3ff448;
        case 0x3ff44cu: goto label_3ff44c;
        case 0x3ff450u: goto label_3ff450;
        case 0x3ff454u: goto label_3ff454;
        case 0x3ff458u: goto label_3ff458;
        case 0x3ff45cu: goto label_3ff45c;
        case 0x3ff460u: goto label_3ff460;
        case 0x3ff464u: goto label_3ff464;
        case 0x3ff468u: goto label_3ff468;
        case 0x3ff46cu: goto label_3ff46c;
        case 0x3ff470u: goto label_3ff470;
        case 0x3ff474u: goto label_3ff474;
        case 0x3ff478u: goto label_3ff478;
        case 0x3ff47cu: goto label_3ff47c;
        case 0x3ff480u: goto label_3ff480;
        case 0x3ff484u: goto label_3ff484;
        case 0x3ff488u: goto label_3ff488;
        case 0x3ff48cu: goto label_3ff48c;
        case 0x3ff490u: goto label_3ff490;
        case 0x3ff494u: goto label_3ff494;
        case 0x3ff498u: goto label_3ff498;
        case 0x3ff49cu: goto label_3ff49c;
        case 0x3ff4a0u: goto label_3ff4a0;
        case 0x3ff4a4u: goto label_3ff4a4;
        case 0x3ff4a8u: goto label_3ff4a8;
        case 0x3ff4acu: goto label_3ff4ac;
        case 0x3ff4b0u: goto label_3ff4b0;
        case 0x3ff4b4u: goto label_3ff4b4;
        case 0x3ff4b8u: goto label_3ff4b8;
        case 0x3ff4bcu: goto label_3ff4bc;
        case 0x3ff4c0u: goto label_3ff4c0;
        case 0x3ff4c4u: goto label_3ff4c4;
        case 0x3ff4c8u: goto label_3ff4c8;
        case 0x3ff4ccu: goto label_3ff4cc;
        case 0x3ff4d0u: goto label_3ff4d0;
        case 0x3ff4d4u: goto label_3ff4d4;
        case 0x3ff4d8u: goto label_3ff4d8;
        case 0x3ff4dcu: goto label_3ff4dc;
        case 0x3ff4e0u: goto label_3ff4e0;
        case 0x3ff4e4u: goto label_3ff4e4;
        case 0x3ff4e8u: goto label_3ff4e8;
        case 0x3ff4ecu: goto label_3ff4ec;
        case 0x3ff4f0u: goto label_3ff4f0;
        case 0x3ff4f4u: goto label_3ff4f4;
        case 0x3ff4f8u: goto label_3ff4f8;
        case 0x3ff4fcu: goto label_3ff4fc;
        case 0x3ff500u: goto label_3ff500;
        case 0x3ff504u: goto label_3ff504;
        case 0x3ff508u: goto label_3ff508;
        case 0x3ff50cu: goto label_3ff50c;
        case 0x3ff510u: goto label_3ff510;
        case 0x3ff514u: goto label_3ff514;
        case 0x3ff518u: goto label_3ff518;
        case 0x3ff51cu: goto label_3ff51c;
        case 0x3ff520u: goto label_3ff520;
        case 0x3ff524u: goto label_3ff524;
        case 0x3ff528u: goto label_3ff528;
        case 0x3ff52cu: goto label_3ff52c;
        case 0x3ff530u: goto label_3ff530;
        case 0x3ff534u: goto label_3ff534;
        case 0x3ff538u: goto label_3ff538;
        case 0x3ff53cu: goto label_3ff53c;
        case 0x3ff540u: goto label_3ff540;
        case 0x3ff544u: goto label_3ff544;
        case 0x3ff548u: goto label_3ff548;
        case 0x3ff54cu: goto label_3ff54c;
        case 0x3ff550u: goto label_3ff550;
        case 0x3ff554u: goto label_3ff554;
        case 0x3ff558u: goto label_3ff558;
        case 0x3ff55cu: goto label_3ff55c;
        case 0x3ff560u: goto label_3ff560;
        case 0x3ff564u: goto label_3ff564;
        case 0x3ff568u: goto label_3ff568;
        case 0x3ff56cu: goto label_3ff56c;
        case 0x3ff570u: goto label_3ff570;
        case 0x3ff574u: goto label_3ff574;
        case 0x3ff578u: goto label_3ff578;
        case 0x3ff57cu: goto label_3ff57c;
        case 0x3ff580u: goto label_3ff580;
        case 0x3ff584u: goto label_3ff584;
        case 0x3ff588u: goto label_3ff588;
        case 0x3ff58cu: goto label_3ff58c;
        case 0x3ff590u: goto label_3ff590;
        case 0x3ff594u: goto label_3ff594;
        case 0x3ff598u: goto label_3ff598;
        case 0x3ff59cu: goto label_3ff59c;
        case 0x3ff5a0u: goto label_3ff5a0;
        case 0x3ff5a4u: goto label_3ff5a4;
        case 0x3ff5a8u: goto label_3ff5a8;
        case 0x3ff5acu: goto label_3ff5ac;
        case 0x3ff5b0u: goto label_3ff5b0;
        case 0x3ff5b4u: goto label_3ff5b4;
        case 0x3ff5b8u: goto label_3ff5b8;
        case 0x3ff5bcu: goto label_3ff5bc;
        default: break;
    }

    ctx->pc = 0x3ff150u;

label_3ff150:
    // 0x3ff150: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3ff150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3ff154:
    // 0x3ff154: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3ff154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3ff158:
    // 0x3ff158: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3ff158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_3ff15c:
    // 0x3ff15c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ff15cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ff160:
    // 0x3ff160: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3ff160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3ff164:
    // 0x3ff164: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ff164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ff168:
    // 0x3ff168: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3ff168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_3ff16c:
    // 0x3ff16c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x3ff16cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_3ff170:
    // 0x3ff170: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3ff170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_3ff174:
    // 0x3ff174: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x3ff174u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_3ff178:
    // 0x3ff178: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3ff178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3ff17c:
    // 0x3ff17c: 0x3652ff64  ori         $s2, $s2, 0xFF64
    ctx->pc = 0x3ff17cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65380);
label_3ff180:
    // 0x3ff180: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x3ff180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_3ff184:
    // 0x3ff184: 0x3673ff74  ori         $s3, $s3, 0xFF74
    ctx->pc = 0x3ff184u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65396);
label_3ff188:
    // 0x3ff188: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x3ff188u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3ff18c:
    // 0x3ff18c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x3ff18cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ff190:
    // 0x3ff190: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x3ff190u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3ff194:
    // 0x3ff194: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3ff194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3ff198:
    // 0x3ff198: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x3ff198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_3ff19c:
    // 0x3ff19c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ff19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ff1a0:
    // 0x3ff1a0: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x3ff1a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_3ff1a4:
    // 0x3ff1a4: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x3ff1a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_3ff1a8:
    // 0x3ff1a8: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x3ff1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_3ff1ac:
    // 0x3ff1ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3ff1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3ff1b0:
    // 0x3ff1b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ff1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ff1b4:
    // 0x3ff1b4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3ff1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3ff1b8:
    // 0x3ff1b8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3ff1b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3ff1bc:
    // 0x3ff1bc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ff1bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ff1c0:
    // 0x3ff1c0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ff1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ff1c4:
    // 0x3ff1c4: 0x40f809  jalr        $v0
label_3ff1c8:
    if (ctx->pc == 0x3FF1C8u) {
        ctx->pc = 0x3FF1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF1C4u;
        // 0x3ff1c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF1CCu;
        goto label_3ff1cc;
    }
    ctx->pc = 0x3FF1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FF1CCu);
        ctx->pc = 0x3FF1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF1C4u;
        // 0x3ff1c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FF1C4u, 0x3FF1CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FF1CCu;
label_3ff1cc:
    // 0x3ff1cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ff1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ff1d0:
    // 0x3ff1d0: 0xc0ea146  jal         func_3A8518
label_3ff1d4:
    if (ctx->pc == 0x3FF1D4u) {
        ctx->pc = 0x3FF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF1D0u;
        // 0x3ff1d4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF1D8u;
        goto label_3ff1d8;
    }
    ctx->pc = 0x3FF1D0u;
    SET_GPR_U32(ctx, 31, 0x3FF1D8u);
    ctx->pc = 0x3FF1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF1D0u;
    // 0x3ff1d4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FF1D0u, 0x3FF1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF1D8u;
label_3ff1d8:
    // 0x3ff1d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ff1d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ff1dc:
    // 0x3ff1dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ff1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ff1e0:
    // 0x3ff1e0: 0xc0ea12a  jal         func_3A84A8
label_3ff1e4:
    if (ctx->pc == 0x3FF1E4u) {
        ctx->pc = 0x3FF1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF1E0u;
        // 0x3ff1e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF1E8u;
        goto label_3ff1e8;
    }
    ctx->pc = 0x3FF1E0u;
    SET_GPR_U32(ctx, 31, 0x3FF1E8u);
    ctx->pc = 0x3FF1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF1E0u;
    // 0x3ff1e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FF1E0u, 0x3FF1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF1E8u;
label_3ff1e8:
    // 0x3ff1e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ff1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ff1ec:
    // 0x3ff1ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ff1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff1f0:
    // 0x3ff1f0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3ff1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3ff1f4:
    // 0x3ff1f4: 0xc0e858c  jal         func_3A1630
label_3ff1f8:
    if (ctx->pc == 0x3FF1F8u) {
        ctx->pc = 0x3FF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF1F4u;
        // 0x3ff1f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF1FCu;
        goto label_3ff1fc;
    }
    ctx->pc = 0x3FF1F4u;
    SET_GPR_U32(ctx, 31, 0x3FF1FCu);
    ctx->pc = 0x3FF1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF1F4u;
    // 0x3ff1f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3FF1F4u, 0x3FF1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF1FCu;
label_3ff1fc:
    // 0x3ff1fc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3ff1fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ff200:
    // 0x3ff200: 0x16960005  bne         $s4, $s6, . + 4 + (0x5 << 2)
label_3ff204:
    if (ctx->pc == 0x3FF204u) {
        ctx->pc = 0x3FF204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF200u;
        // 0x3ff204: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF208u;
        goto label_3ff208;
    }
    ctx->pc = 0x3FF200u;
    {
        const bool branch_taken_0x3ff200 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 22));
        ctx->pc = 0x3FF204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF200u;
        // 0x3ff204: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff200) {
            ctx->pc = 0x3FF218u;
            goto label_3ff218;
        }
    }
    ctx->pc = 0x3FF208u;
label_3ff208:
    // 0x3ff208: 0x3c12dcca  lui         $s2, 0xDCCA
    ctx->pc = 0x3ff208u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56522 << 16));
label_3ff20c:
    // 0x3ff20c: 0x3c13dcca  lui         $s3, 0xDCCA
    ctx->pc = 0x3ff20cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56522 << 16));
label_3ff210:
    // 0x3ff210: 0x3652ca34  ori         $s2, $s2, 0xCA34
    ctx->pc = 0x3ff210u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)51764);
label_3ff214:
    // 0x3ff214: 0x3673ca44  ori         $s3, $s3, 0xCA44
    ctx->pc = 0x3ff214u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)51780);
label_3ff218:
    // 0x3ff218: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x3ff218u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ff21c:
    // 0x3ff21c: 0x1695001d  bne         $s4, $s5, . + 4 + (0x1D << 2)
label_3ff220:
    if (ctx->pc == 0x3FF220u) {
        ctx->pc = 0x3FF220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF21Cu;
        // 0x3ff220: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF224u;
        goto label_3ff224;
    }
    ctx->pc = 0x3FF21Cu;
    {
        const bool branch_taken_0x3ff21c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        ctx->pc = 0x3FF220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF21Cu;
        // 0x3ff220: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff21c) {
            ctx->pc = 0x3FF294u;
            goto label_3ff294;
        }
    }
    ctx->pc = 0x3FF224u;
label_3ff224:
    // 0x3ff224: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x3ff224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_3ff228:
    // 0x3ff228: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3ff228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3ff22c:
    // 0x3ff22c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ff22cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ff230:
    // 0x3ff230: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3ff230u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3ff234:
    // 0x3ff234: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3ff234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3ff238:
    // 0x3ff238: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x3ff238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_3ff23c:
    // 0x3ff23c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3ff23cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3ff240:
    // 0x3ff240: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ff240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ff244:
    // 0x3ff244: 0x26101770  addiu       $s0, $s0, 0x1770
    ctx->pc = 0x3ff244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6000));
label_3ff248:
    // 0x3ff248: 0xc0cd518  jal         func_335460
label_3ff24c:
    if (ctx->pc == 0x3FF24Cu) {
        ctx->pc = 0x3FF24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF248u;
        // 0x3ff24c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF250u;
        goto label_3ff250;
    }
    ctx->pc = 0x3FF248u;
    SET_GPR_U32(ctx, 31, 0x3FF250u);
    ctx->pc = 0x3FF24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF248u;
    // 0x3ff24c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FF248u, 0x3FF250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF250u;
label_3ff250:
    // 0x3ff250: 0x3c12ab8f  lui         $s2, 0xAB8F
    ctx->pc = 0x3ff250u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)43919 << 16));
label_3ff254:
    // 0x3ff254: 0x3c136954  lui         $s3, 0x6954
    ctx->pc = 0x3ff254u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)26964 << 16));
label_3ff258:
    // 0x3ff258: 0x3c066954  lui         $a2, 0x6954
    ctx->pc = 0x3ff258u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26964 << 16));
label_3ff25c:
    // 0x3ff25c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ff25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff260:
    // 0x3ff260: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3ff260u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3ff264:
    // 0x3ff264: 0x36526280  ori         $s2, $s2, 0x6280
    ctx->pc = 0x3ff264u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)25216);
label_3ff268:
    // 0x3ff268: 0x36733590  ori         $s3, $s3, 0x3590
    ctx->pc = 0x3ff268u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)13712);
label_3ff26c:
    // 0x3ff26c: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x3ff26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_3ff270:
    // 0x3ff270: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ff270u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ff274:
    // 0x3ff274: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3ff274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3ff278:
    // 0x3ff278: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ff278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ff27c:
    // 0x3ff27c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3ff27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3ff280:
    // 0x3ff280: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ff280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ff284:
    // 0x3ff284: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3ff284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3ff288:
    // 0x3ff288: 0xc0f1794  jal         func_3C5E50
label_3ff28c:
    if (ctx->pc == 0x3FF28Cu) {
        ctx->pc = 0x3FF28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF288u;
        // 0x3ff28c: 0x34c63590  ori         $a2, $a2, 0x3590 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13712);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF290u;
        goto label_3ff290;
    }
    ctx->pc = 0x3FF288u;
    SET_GPR_U32(ctx, 31, 0x3FF290u);
    ctx->pc = 0x3FF28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF288u;
    // 0x3ff28c: 0x34c63590  ori         $a2, $a2, 0x3590 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13712);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5E50u, 0x3FF288u, 0x3FF290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF290u;
label_3ff290:
    // 0x3ff290: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x3ff290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ff294:
    // 0x3ff294: 0x16910017  bne         $s4, $s1, . + 4 + (0x17 << 2)
label_3ff298:
    if (ctx->pc == 0x3FF298u) {
        ctx->pc = 0x3FF298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF294u;
        // 0x3ff298: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF29Cu;
        goto label_3ff29c;
    }
    ctx->pc = 0x3FF294u;
    {
        const bool branch_taken_0x3ff294 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 17));
        ctx->pc = 0x3FF298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF294u;
        // 0x3ff298: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff294) {
            ctx->pc = 0x3FF2F4u;
            goto label_3ff2f4;
        }
    }
    ctx->pc = 0x3FF29Cu;
label_3ff29c:
    // 0x3ff29c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x3ff29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_3ff2a0:
    // 0x3ff2a0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3ff2a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3ff2a4:
    // 0x3ff2a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ff2a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ff2a8:
    // 0x3ff2a8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3ff2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3ff2ac:
    // 0x3ff2ac: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3ff2acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3ff2b0:
    // 0x3ff2b0: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x3ff2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_3ff2b4:
    // 0x3ff2b4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3ff2b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3ff2b8:
    // 0x3ff2b8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ff2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ff2bc:
    // 0x3ff2bc: 0x26101770  addiu       $s0, $s0, 0x1770
    ctx->pc = 0x3ff2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6000));
label_3ff2c0:
    // 0x3ff2c0: 0xc0cd518  jal         func_335460
label_3ff2c4:
    if (ctx->pc == 0x3FF2C4u) {
        ctx->pc = 0x3FF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF2C0u;
        // 0x3ff2c4: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF2C8u;
        goto label_3ff2c8;
    }
    ctx->pc = 0x3FF2C0u;
    SET_GPR_U32(ctx, 31, 0x3FF2C8u);
    ctx->pc = 0x3FF2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF2C0u;
    // 0x3ff2c4: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FF2C0u, 0x3FF2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF2C8u;
label_3ff2c8:
    // 0x3ff2c8: 0x3c12bd59  lui         $s2, 0xBD59
    ctx->pc = 0x3ff2c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48473 << 16));
label_3ff2cc:
    // 0x3ff2cc: 0x3c13bd59  lui         $s3, 0xBD59
    ctx->pc = 0x3ff2ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48473 << 16));
label_3ff2d0:
    // 0x3ff2d0: 0x3c06bd59  lui         $a2, 0xBD59
    ctx->pc = 0x3ff2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48473 << 16));
label_3ff2d4:
    // 0x3ff2d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ff2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff2d8:
    // 0x3ff2d8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3ff2d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3ff2dc:
    // 0x3ff2dc: 0x36522e34  ori         $s2, $s2, 0x2E34
    ctx->pc = 0x3ff2dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)11828);
label_3ff2e0:
    // 0x3ff2e0: 0x36732e44  ori         $s3, $s3, 0x2E44
    ctx->pc = 0x3ff2e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)11844);
label_3ff2e4:
    // 0x3ff2e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ff2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ff2e8:
    // 0x3ff2e8: 0xc0f1794  jal         func_3C5E50
label_3ff2ec:
    if (ctx->pc == 0x3FF2ECu) {
        ctx->pc = 0x3FF2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF2E8u;
        // 0x3ff2ec: 0x34c62e44  ori         $a2, $a2, 0x2E44 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11844);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF2F0u;
        goto label_3ff2f0;
    }
    ctx->pc = 0x3FF2E8u;
    SET_GPR_U32(ctx, 31, 0x3FF2F0u);
    ctx->pc = 0x3FF2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF2E8u;
    // 0x3ff2ec: 0x34c62e44  ori         $a2, $a2, 0x2E44 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11844);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5E50u, 0x3FF2E8u, 0x3FF2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF2F0u;
label_3ff2f0:
    // 0x3ff2f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3ff2f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3ff2f4:
    // 0x3ff2f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ff2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ff2f8:
    // 0x3ff2f8: 0xc0f15f6  jal         func_3C57D8
label_3ff2fc:
    if (ctx->pc == 0x3FF2FCu) {
        ctx->pc = 0x3FF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF2F8u;
        // 0x3ff2fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF300u;
        goto label_3ff300;
    }
    ctx->pc = 0x3FF2F8u;
    SET_GPR_U32(ctx, 31, 0x3FF300u);
    ctx->pc = 0x3FF2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF2F8u;
    // 0x3ff2fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3FF2F8u, 0x3FF300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF300u;
label_3ff300:
    // 0x3ff300: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3ff300u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3ff304:
    // 0x3ff304: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ff304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ff308:
    // 0x3ff308: 0xc0f15f6  jal         func_3C57D8
label_3ff30c:
    if (ctx->pc == 0x3FF30Cu) {
        ctx->pc = 0x3FF30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF308u;
        // 0x3ff30c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF310u;
        goto label_3ff310;
    }
    ctx->pc = 0x3FF308u;
    SET_GPR_U32(ctx, 31, 0x3FF310u);
    ctx->pc = 0x3FF30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF308u;
    // 0x3ff30c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3FF308u, 0x3FF310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF310u;
label_3ff310:
    // 0x3ff310: 0x52950090  beql        $s4, $s5, . + 4 + (0x90 << 2)
label_3ff314:
    if (ctx->pc == 0x3FF314u) {
        ctx->pc = 0x3FF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF310u;
        // 0x3ff314: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF318u;
        goto label_3ff318;
    }
    ctx->pc = 0x3FF310u;
    {
        const bool branch_taken_0x3ff310 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        if (branch_taken_0x3ff310) {
            ctx->pc = 0x3FF314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FF310u;
            // 0x3ff314: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FF554u;
            goto label_3ff554;
        }
    }
    ctx->pc = 0x3FF318u;
label_3ff318:
    // 0x3ff318: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_3ff31c:
    if (ctx->pc == 0x3FF31Cu) {
        ctx->pc = 0x3FF320u;
        goto label_3ff320;
    }
    ctx->pc = 0x3FF318u;
    {
        const bool branch_taken_0x3ff318 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ff318) {
            ctx->pc = 0x3FF330u;
            goto label_3ff330;
        }
    }
    ctx->pc = 0x3FF320u;
label_3ff320:
    // 0x3ff320: 0x3c12cf9b  lui         $s2, 0xCF9B
    ctx->pc = 0x3ff320u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53147 << 16));
label_3ff324:
    // 0x3ff324: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x3ff324u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_3ff328:
    // 0x3ff328: 0x36526fff  ori         $s2, $s2, 0x6FFF
    ctx->pc = 0x3ff328u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)28671);
label_3ff32c:
    // 0x3ff32c: 0x3673ff80  ori         $s3, $s3, 0xFF80
    ctx->pc = 0x3ff32cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65408);
label_3ff330:
    // 0x3ff330: 0x16960005  bne         $s4, $s6, . + 4 + (0x5 << 2)
label_3ff334:
    if (ctx->pc == 0x3FF334u) {
        ctx->pc = 0x3FF338u;
        goto label_3ff338;
    }
    ctx->pc = 0x3FF330u;
    {
        const bool branch_taken_0x3ff330 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 22));
        if (branch_taken_0x3ff330) {
            ctx->pc = 0x3FF348u;
            goto label_3ff348;
        }
    }
    ctx->pc = 0x3FF338u;
label_3ff338:
    // 0x3ff338: 0x3c12cf9b  lui         $s2, 0xCF9B
    ctx->pc = 0x3ff338u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53147 << 16));
label_3ff33c:
    // 0x3ff33c: 0x3c13dcca  lui         $s3, 0xDCCA
    ctx->pc = 0x3ff33cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56522 << 16));
label_3ff340:
    // 0x3ff340: 0x36526f01  ori         $s2, $s2, 0x6F01
    ctx->pc = 0x3ff340u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)28417);
label_3ff344:
    // 0x3ff344: 0x3673ca44  ori         $s3, $s3, 0xCA44
    ctx->pc = 0x3ff344u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)51780);
label_3ff348:
    // 0x3ff348: 0x16910005  bne         $s4, $s1, . + 4 + (0x5 << 2)
label_3ff34c:
    if (ctx->pc == 0x3FF34Cu) {
        ctx->pc = 0x3FF34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF348u;
        // 0x3ff34c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF350u;
        goto label_3ff350;
    }
    ctx->pc = 0x3FF348u;
    {
        const bool branch_taken_0x3ff348 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 17));
        ctx->pc = 0x3FF34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF348u;
        // 0x3ff34c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff348) {
            ctx->pc = 0x3FF360u;
            goto label_3ff360;
        }
    }
    ctx->pc = 0x3FF350u;
label_3ff350:
    // 0x3ff350: 0x3c12cf9b  lui         $s2, 0xCF9B
    ctx->pc = 0x3ff350u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53147 << 16));
label_3ff354:
    // 0x3ff354: 0x3c13bd59  lui         $s3, 0xBD59
    ctx->pc = 0x3ff354u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48473 << 16));
label_3ff358:
    // 0x3ff358: 0x36526f01  ori         $s2, $s2, 0x6F01
    ctx->pc = 0x3ff358u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)28417);
label_3ff35c:
    // 0x3ff35c: 0x36732e44  ori         $s3, $s3, 0x2E44
    ctx->pc = 0x3ff35cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)11844);
label_3ff360:
    // 0x3ff360: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x3ff360u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
label_3ff364:
    // 0x3ff364: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3ff364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3ff368:
    // 0x3ff368: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3ff368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3ff36c:
    // 0x3ff36c: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x3ff36cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ff370:
    // 0x3ff370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ff370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ff374:
    // 0x3ff374: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3ff374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3ff378:
    // 0x3ff378: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x3ff378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3ff37c:
    // 0x3ff37c: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x3ff37cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ff380:
    // 0x3ff380: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3ff380u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ff384:
    // 0x3ff384: 0x36310036  ori         $s1, $s1, 0x36
    ctx->pc = 0x3ff384u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)54);
label_3ff388:
    // 0x3ff388: 0xc0e9694  jal         func_3A5A50
label_3ff38c:
    if (ctx->pc == 0x3FF38Cu) {
        ctx->pc = 0x3FF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF388u;
        // 0x3ff38c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF390u;
        goto label_3ff390;
    }
    ctx->pc = 0x3FF388u;
    SET_GPR_U32(ctx, 31, 0x3FF390u);
    ctx->pc = 0x3FF38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF388u;
    // 0x3ff38c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3FF388u, 0x3FF390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF390u;
label_3ff390:
    // 0x3ff390: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
label_3ff394:
    if (ctx->pc == 0x3FF394u) {
        ctx->pc = 0x3FF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF390u;
        // 0x3ff394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF398u;
        goto label_3ff398;
    }
    ctx->pc = 0x3FF390u;
    {
        const bool branch_taken_0x3ff390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF390u;
        // 0x3ff394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff390) {
            ctx->pc = 0x3FF57Cu;
            goto label_3ff57c;
        }
    }
    ctx->pc = 0x3FF398u;
label_3ff398:
    // 0x3ff398: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3ff398u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3ff39c:
    // 0x3ff39c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3ff39cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3ff3a0:
    // 0x3ff3a0: 0xc0cd518  jal         func_335460
label_3ff3a4:
    if (ctx->pc == 0x3FF3A4u) {
        ctx->pc = 0x3FF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF3A0u;
        // 0x3ff3a4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF3A8u;
        goto label_3ff3a8;
    }
    ctx->pc = 0x3FF3A0u;
    SET_GPR_U32(ctx, 31, 0x3FF3A8u);
    ctx->pc = 0x3FF3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF3A0u;
    // 0x3ff3a4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FF3A0u, 0x3FF3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF3A8u;
label_3ff3a8:
    // 0x3ff3a8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3ff3a8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3ff3ac:
    // 0x3ff3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ff3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff3b0:
    // 0x3ff3b0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3ff3b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3ff3b4:
    // 0x3ff3b4: 0xc0cd518  jal         func_335460
label_3ff3b8:
    if (ctx->pc == 0x3FF3B8u) {
        ctx->pc = 0x3FF3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF3B4u;
        // 0x3ff3b8: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF3BCu;
        goto label_3ff3bc;
    }
    ctx->pc = 0x3FF3B4u;
    SET_GPR_U32(ctx, 31, 0x3FF3BCu);
    ctx->pc = 0x3FF3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF3B4u;
    // 0x3ff3b8: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FF3B4u, 0x3FF3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF3BCu;
label_3ff3bc:
    // 0x3ff3bc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ff3bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ff3c0:
    // 0x3ff3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ff3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff3c4:
    // 0x3ff3c4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3ff3c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3ff3c8:
    // 0x3ff3c8: 0xc0cd518  jal         func_335460
label_3ff3cc:
    if (ctx->pc == 0x3FF3CCu) {
        ctx->pc = 0x3FF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF3C8u;
        // 0x3ff3cc: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF3D0u;
        goto label_3ff3d0;
    }
    ctx->pc = 0x3FF3C8u;
    SET_GPR_U32(ctx, 31, 0x3FF3D0u);
    ctx->pc = 0x3FF3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF3C8u;
    // 0x3ff3cc: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FF3C8u, 0x3FF3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF3D0u;
label_3ff3d0:
    // 0x3ff3d0: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x3ff3d0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_3ff3d4:
    // 0x3ff3d4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3ff3d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3ff3d8:
    // 0x3ff3d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ff3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff3dc:
    // 0x3ff3dc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3ff3dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3ff3e0:
    // 0x3ff3e0: 0xc0cd55c  jal         func_335570
label_3ff3e4:
    if (ctx->pc == 0x3FF3E4u) {
        ctx->pc = 0x3FF3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF3E0u;
        // 0x3ff3e4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF3E8u;
        goto label_3ff3e8;
    }
    ctx->pc = 0x3FF3E0u;
    SET_GPR_U32(ctx, 31, 0x3FF3E8u);
    ctx->pc = 0x3FF3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF3E0u;
    // 0x3ff3e4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x3FF3E0u, 0x3FF3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF3E8u;
label_3ff3e8:
    // 0x3ff3e8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ff3e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ff3ec:
    // 0x3ff3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ff3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff3f0:
    // 0x3ff3f0: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3ff3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3ff3f4:
    // 0x3ff3f4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3ff3f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3ff3f8:
    // 0x3ff3f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ff3f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ff3fc:
    // 0x3ff3fc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3ff3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3ff400:
    // 0x3ff400: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ff400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ff404:
    // 0x3ff404: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ff404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ff408:
    // 0x3ff408: 0xc0cd518  jal         func_335460
label_3ff40c:
    if (ctx->pc == 0x3FF40Cu) {
        ctx->pc = 0x3FF40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF408u;
        // 0x3ff40c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF410u;
        goto label_3ff410;
    }
    ctx->pc = 0x3FF408u;
    SET_GPR_U32(ctx, 31, 0x3FF410u);
    ctx->pc = 0x3FF40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF408u;
    // 0x3ff40c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FF408u, 0x3FF410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF410u;
label_3ff410:
    // 0x3ff410: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ff410u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ff414:
    // 0x3ff414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ff414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff418:
    // 0x3ff418: 0xc0cd4ee  jal         func_3353B8
label_3ff41c:
    if (ctx->pc == 0x3FF41Cu) {
        ctx->pc = 0x3FF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF418u;
        // 0x3ff41c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF420u;
        goto label_3ff420;
    }
    ctx->pc = 0x3FF418u;
    SET_GPR_U32(ctx, 31, 0x3FF420u);
    ctx->pc = 0x3FF41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF418u;
    // 0x3ff41c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3FF418u, 0x3FF420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF420u;
label_3ff420:
    // 0x3ff420: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3ff420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3ff424:
    // 0x3ff424: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3ff424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3ff428:
    // 0x3ff428: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ff428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ff42c:
    // 0x3ff42c: 0x514021  addu        $t0, $v0, $s1
    ctx->pc = 0x3ff42cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3ff430:
    // 0x3ff430: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3ff430u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3ff434:
    // 0x3ff434: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ff434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ff438:
    // 0x3ff438: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3ff438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ff43c:
    // 0x3ff43c: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x3ff43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3ff440:
    // 0x3ff440: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3ff440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ff444:
    // 0x3ff444: 0xc0f1618  jal         func_3C5860
label_3ff448:
    if (ctx->pc == 0x3FF448u) {
        ctx->pc = 0x3FF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF444u;
        // 0x3ff448: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF44Cu;
        goto label_3ff44c;
    }
    ctx->pc = 0x3FF444u;
    SET_GPR_U32(ctx, 31, 0x3FF44Cu);
    ctx->pc = 0x3FF448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF444u;
    // 0x3ff448: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x3FF444u, 0x3FF44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF44Cu;
label_3ff44c:
    // 0x3ff44c: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x3ff44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
label_3ff450:
    // 0x3ff450: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_3ff454:
    if (ctx->pc == 0x3FF454u) {
        ctx->pc = 0x3FF458u;
        goto label_3ff458;
    }
    ctx->pc = 0x3FF450u;
    {
        const bool branch_taken_0x3ff450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ff450) {
            ctx->pc = 0x3FF388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ff388;
        }
    }
    ctx->pc = 0x3FF458u;
label_3ff458:
    // 0x3ff458: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x3ff458u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
label_3ff45c:
    // 0x3ff45c: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x3ff45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
label_3ff460:
    // 0x3ff460: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3ff460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3ff464:
    // 0x3ff464: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3ff464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3ff468:
    // 0x3ff468: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3ff468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3ff46c:
    // 0x3ff46c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3ff46cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3ff470:
    // 0x3ff470: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3ff470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3ff474:
    // 0x3ff474: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ff474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ff478:
    // 0x3ff478: 0x3631002a  ori         $s1, $s1, 0x2A
    ctx->pc = 0x3ff478u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)42);
label_3ff47c:
    // 0x3ff47c: 0x0  nop
    ctx->pc = 0x3ff47cu;
    // NOP
label_3ff480:
    // 0x3ff480: 0xc0e9694  jal         func_3A5A50
label_3ff484:
    if (ctx->pc == 0x3FF484u) {
        ctx->pc = 0x3FF484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF480u;
        // 0x3ff484: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF488u;
        goto label_3ff488;
    }
    ctx->pc = 0x3FF480u;
    SET_GPR_U32(ctx, 31, 0x3FF488u);
    ctx->pc = 0x3FF484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF480u;
    // 0x3ff484: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3FF480u, 0x3FF488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF488u;
label_3ff488:
    // 0x3ff488: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_3ff48c:
    if (ctx->pc == 0x3FF48Cu) {
        ctx->pc = 0x3FF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF488u;
        // 0x3ff48c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF490u;
        goto label_3ff490;
    }
    ctx->pc = 0x3FF488u;
    {
        const bool branch_taken_0x3ff488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF488u;
        // 0x3ff48c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff488) {
            ctx->pc = 0x3FF57Cu;
            goto label_3ff57c;
        }
    }
    ctx->pc = 0x3FF490u;
label_3ff490:
    // 0x3ff490: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3ff490u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3ff494:
    // 0x3ff494: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3ff494u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_3ff498:
    // 0x3ff498: 0xc0cd518  jal         func_335460
label_3ff49c:
    if (ctx->pc == 0x3FF49Cu) {
        ctx->pc = 0x3FF49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF498u;
        // 0x3ff49c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF4A0u;
        goto label_3ff4a0;
    }
    ctx->pc = 0x3FF498u;
    SET_GPR_U32(ctx, 31, 0x3FF4A0u);
    ctx->pc = 0x3FF49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF498u;
    // 0x3ff49c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FF498u, 0x3FF4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF4A0u;
label_3ff4a0:
    // 0x3ff4a0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3ff4a0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3ff4a4:
    // 0x3ff4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ff4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff4a8:
    // 0x3ff4a8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3ff4a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3ff4ac:
    // 0x3ff4ac: 0xc0cd518  jal         func_335460
label_3ff4b0:
    if (ctx->pc == 0x3FF4B0u) {
        ctx->pc = 0x3FF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF4ACu;
        // 0x3ff4b0: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF4B4u;
        goto label_3ff4b4;
    }
    ctx->pc = 0x3FF4ACu;
    SET_GPR_U32(ctx, 31, 0x3FF4B4u);
    ctx->pc = 0x3FF4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF4ACu;
    // 0x3ff4b0: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FF4ACu, 0x3FF4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF4B4u;
label_3ff4b4:
    // 0x3ff4b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3ff4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3ff4b8:
    // 0x3ff4b8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ff4b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ff4bc:
    // 0x3ff4bc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ff4bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ff4c0:
    // 0x3ff4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ff4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff4c4:
    // 0x3ff4c4: 0xc0cd518  jal         func_335460
label_3ff4c8:
    if (ctx->pc == 0x3FF4C8u) {
        ctx->pc = 0x3FF4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF4C4u;
        // 0x3ff4c8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF4CCu;
        goto label_3ff4cc;
    }
    ctx->pc = 0x3FF4C4u;
    SET_GPR_U32(ctx, 31, 0x3FF4CCu);
    ctx->pc = 0x3FF4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF4C4u;
    // 0x3ff4c8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FF4C4u, 0x3FF4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF4CCu;
label_3ff4cc:
    // 0x3ff4cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ff4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ff4d0:
    // 0x3ff4d0: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x3ff4d0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_3ff4d4:
    // 0x3ff4d4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3ff4d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3ff4d8:
    // 0x3ff4d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ff4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff4dc:
    // 0x3ff4dc: 0xc0cd55c  jal         func_335570
label_3ff4e0:
    if (ctx->pc == 0x3FF4E0u) {
        ctx->pc = 0x3FF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF4DCu;
        // 0x3ff4e0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF4E4u;
        goto label_3ff4e4;
    }
    ctx->pc = 0x3FF4DCu;
    SET_GPR_U32(ctx, 31, 0x3FF4E4u);
    ctx->pc = 0x3FF4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF4DCu;
    // 0x3ff4e0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x3FF4DCu, 0x3FF4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF4E4u;
label_3ff4e4:
    // 0x3ff4e4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ff4e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ff4e8:
    // 0x3ff4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ff4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff4ec:
    // 0x3ff4ec: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x3ff4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
label_3ff4f0:
    // 0x3ff4f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3ff4f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3ff4f4:
    // 0x3ff4f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ff4f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ff4f8:
    // 0x3ff4f8: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x3ff4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_3ff4fc:
    // 0x3ff4fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ff4fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ff500:
    // 0x3ff500: 0xc0cd518  jal         func_335460
label_3ff504:
    if (ctx->pc == 0x3FF504u) {
        ctx->pc = 0x3FF504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF500u;
        // 0x3ff504: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF508u;
        goto label_3ff508;
    }
    ctx->pc = 0x3FF500u;
    SET_GPR_U32(ctx, 31, 0x3FF508u);
    ctx->pc = 0x3FF504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF500u;
    // 0x3ff504: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FF500u, 0x3FF508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF508u;
label_3ff508:
    // 0x3ff508: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ff508u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ff50c:
    // 0x3ff50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ff50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff510:
    // 0x3ff510: 0xc0cd4ee  jal         func_3353B8
label_3ff514:
    if (ctx->pc == 0x3FF514u) {
        ctx->pc = 0x3FF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF510u;
        // 0x3ff514: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF518u;
        goto label_3ff518;
    }
    ctx->pc = 0x3FF510u;
    SET_GPR_U32(ctx, 31, 0x3FF518u);
    ctx->pc = 0x3FF514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF510u;
    // 0x3ff514: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3FF510u, 0x3FF518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF518u;
label_3ff518:
    // 0x3ff518: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3ff518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3ff51c:
    // 0x3ff51c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3ff51cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3ff520:
    // 0x3ff520: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ff520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ff524:
    // 0x3ff524: 0x514021  addu        $t0, $v0, $s1
    ctx->pc = 0x3ff524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3ff528:
    // 0x3ff528: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3ff528u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3ff52c:
    // 0x3ff52c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ff52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ff530:
    // 0x3ff530: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3ff530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ff534:
    // 0x3ff534: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x3ff534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3ff538:
    // 0x3ff538: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3ff538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ff53c:
    // 0x3ff53c: 0xc0f1618  jal         func_3C5860
label_3ff540:
    if (ctx->pc == 0x3FF540u) {
        ctx->pc = 0x3FF540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF53Cu;
        // 0x3ff540: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF544u;
        goto label_3ff544;
    }
    ctx->pc = 0x3FF53Cu;
    SET_GPR_U32(ctx, 31, 0x3FF544u);
    ctx->pc = 0x3FF540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF53Cu;
    // 0x3ff540: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x3FF53Cu, 0x3FF544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF544u;
label_3ff544:
    // 0x3ff544: 0x2a420050  slti        $v0, $s2, 0x50
    ctx->pc = 0x3ff544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)80) ? 1 : 0);
label_3ff548:
    // 0x3ff548: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_3ff54c:
    if (ctx->pc == 0x3FF54Cu) {
        ctx->pc = 0x3FF550u;
        goto label_3ff550;
    }
    ctx->pc = 0x3FF548u;
    {
        const bool branch_taken_0x3ff548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ff548) {
            ctx->pc = 0x3FF480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ff480;
        }
    }
    ctx->pc = 0x3FF550u;
label_3ff550:
    // 0x3ff550: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x3ff550u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_3ff554:
    // 0x3ff554: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ff554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ff558:
    // 0x3ff558: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ff558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ff55c:
    // 0x3ff55c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ff55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ff560:
    // 0x3ff560: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
label_3ff564:
    if (ctx->pc == 0x3FF564u) {
        ctx->pc = 0x3FF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF560u;
        // 0x3ff564: 0xafd40004  sw          $s4, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF568u;
        goto label_3ff568;
    }
    ctx->pc = 0x3FF560u;
    {
        const bool branch_taken_0x3ff560 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF560u;
        // 0x3ff564: 0xafd40004  sw          $s4, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff560) {
            ctx->pc = 0x3FF574u;
            goto label_3ff574;
        }
    }
    ctx->pc = 0x3FF568u;
label_3ff568:
    // 0x3ff568: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x3ff568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_3ff56c:
    // 0x3ff56c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3ff56cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3ff570:
    // 0x3ff570: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ff570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ff574:
    // 0x3ff574: 0x0  nop
    ctx->pc = 0x3ff574u;
    // NOP
label_3ff578:
    // 0x3ff578: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x3ff578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_3ff57c:
    // 0x3ff57c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3ff57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ff580:
    // 0x3ff580: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3ff580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3ff584:
    // 0x3ff584: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3ff584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3ff588:
    // 0x3ff588: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3ff588u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ff58c:
    // 0x3ff58c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3ff58cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ff590:
    // 0x3ff590: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3ff590u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ff594:
    // 0x3ff594: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3ff594u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ff598:
    // 0x3ff598: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3ff598u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ff59c:
    // 0x3ff59c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3ff59cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ff5a0:
    // 0x3ff5a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ff5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ff5a4:
    // 0x3ff5a4: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x3ff5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3ff5a8:
    // 0x3ff5a8: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x3ff5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3ff5ac:
    // 0x3ff5ac: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x3ff5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ff5b0:
    // 0x3ff5b0: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x3ff5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ff5b4:
    // 0x3ff5b4: 0x3e00008  jr          $ra
label_3ff5b8:
    if (ctx->pc == 0x3FF5B8u) {
        ctx->pc = 0x3FF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF5B4u;
        // 0x3ff5b8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF5BCu;
        goto label_3ff5bc;
    }
    ctx->pc = 0x3FF5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF5B4u;
        // 0x3ff5b8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FF5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FF5BCu;
label_3ff5bc:
    // 0x3ff5bc: 0x0  nop
    ctx->pc = 0x3ff5bcu;
    // NOP
    ctx->pc = 0x3ff5c0u;
}
