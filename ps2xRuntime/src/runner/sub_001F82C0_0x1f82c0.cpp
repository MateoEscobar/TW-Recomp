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

// Function: sub_001F82C0
// Address: 0x1f82c0 - 0x1f85c0
void sub_001F82C0_0x1f82c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F82C0_0x1f82c0");
#endif

    switch (ctx->pc) {
        case 0x1f82c0u: goto label_1f82c0;
        case 0x1f82c4u: goto label_1f82c4;
        case 0x1f82c8u: goto label_1f82c8;
        case 0x1f82ccu: goto label_1f82cc;
        case 0x1f82d0u: goto label_1f82d0;
        case 0x1f82d4u: goto label_1f82d4;
        case 0x1f82d8u: goto label_1f82d8;
        case 0x1f82dcu: goto label_1f82dc;
        case 0x1f82e0u: goto label_1f82e0;
        case 0x1f82e4u: goto label_1f82e4;
        case 0x1f82e8u: goto label_1f82e8;
        case 0x1f82ecu: goto label_1f82ec;
        case 0x1f82f0u: goto label_1f82f0;
        case 0x1f82f4u: goto label_1f82f4;
        case 0x1f82f8u: goto label_1f82f8;
        case 0x1f82fcu: goto label_1f82fc;
        case 0x1f8300u: goto label_1f8300;
        case 0x1f8304u: goto label_1f8304;
        case 0x1f8308u: goto label_1f8308;
        case 0x1f830cu: goto label_1f830c;
        case 0x1f8310u: goto label_1f8310;
        case 0x1f8314u: goto label_1f8314;
        case 0x1f8318u: goto label_1f8318;
        case 0x1f831cu: goto label_1f831c;
        case 0x1f8320u: goto label_1f8320;
        case 0x1f8324u: goto label_1f8324;
        case 0x1f8328u: goto label_1f8328;
        case 0x1f832cu: goto label_1f832c;
        case 0x1f8330u: goto label_1f8330;
        case 0x1f8334u: goto label_1f8334;
        case 0x1f8338u: goto label_1f8338;
        case 0x1f833cu: goto label_1f833c;
        case 0x1f8340u: goto label_1f8340;
        case 0x1f8344u: goto label_1f8344;
        case 0x1f8348u: goto label_1f8348;
        case 0x1f834cu: goto label_1f834c;
        case 0x1f8350u: goto label_1f8350;
        case 0x1f8354u: goto label_1f8354;
        case 0x1f8358u: goto label_1f8358;
        case 0x1f835cu: goto label_1f835c;
        case 0x1f8360u: goto label_1f8360;
        case 0x1f8364u: goto label_1f8364;
        case 0x1f8368u: goto label_1f8368;
        case 0x1f836cu: goto label_1f836c;
        case 0x1f8370u: goto label_1f8370;
        case 0x1f8374u: goto label_1f8374;
        case 0x1f8378u: goto label_1f8378;
        case 0x1f837cu: goto label_1f837c;
        case 0x1f8380u: goto label_1f8380;
        case 0x1f8384u: goto label_1f8384;
        case 0x1f8388u: goto label_1f8388;
        case 0x1f838cu: goto label_1f838c;
        case 0x1f8390u: goto label_1f8390;
        case 0x1f8394u: goto label_1f8394;
        case 0x1f8398u: goto label_1f8398;
        case 0x1f839cu: goto label_1f839c;
        case 0x1f83a0u: goto label_1f83a0;
        case 0x1f83a4u: goto label_1f83a4;
        case 0x1f83a8u: goto label_1f83a8;
        case 0x1f83acu: goto label_1f83ac;
        case 0x1f83b0u: goto label_1f83b0;
        case 0x1f83b4u: goto label_1f83b4;
        case 0x1f83b8u: goto label_1f83b8;
        case 0x1f83bcu: goto label_1f83bc;
        case 0x1f83c0u: goto label_1f83c0;
        case 0x1f83c4u: goto label_1f83c4;
        case 0x1f83c8u: goto label_1f83c8;
        case 0x1f83ccu: goto label_1f83cc;
        case 0x1f83d0u: goto label_1f83d0;
        case 0x1f83d4u: goto label_1f83d4;
        case 0x1f83d8u: goto label_1f83d8;
        case 0x1f83dcu: goto label_1f83dc;
        case 0x1f83e0u: goto label_1f83e0;
        case 0x1f83e4u: goto label_1f83e4;
        case 0x1f83e8u: goto label_1f83e8;
        case 0x1f83ecu: goto label_1f83ec;
        case 0x1f83f0u: goto label_1f83f0;
        case 0x1f83f4u: goto label_1f83f4;
        case 0x1f83f8u: goto label_1f83f8;
        case 0x1f83fcu: goto label_1f83fc;
        case 0x1f8400u: goto label_1f8400;
        case 0x1f8404u: goto label_1f8404;
        case 0x1f8408u: goto label_1f8408;
        case 0x1f840cu: goto label_1f840c;
        case 0x1f8410u: goto label_1f8410;
        case 0x1f8414u: goto label_1f8414;
        case 0x1f8418u: goto label_1f8418;
        case 0x1f841cu: goto label_1f841c;
        case 0x1f8420u: goto label_1f8420;
        case 0x1f8424u: goto label_1f8424;
        case 0x1f8428u: goto label_1f8428;
        case 0x1f842cu: goto label_1f842c;
        case 0x1f8430u: goto label_1f8430;
        case 0x1f8434u: goto label_1f8434;
        case 0x1f8438u: goto label_1f8438;
        case 0x1f843cu: goto label_1f843c;
        case 0x1f8440u: goto label_1f8440;
        case 0x1f8444u: goto label_1f8444;
        case 0x1f8448u: goto label_1f8448;
        case 0x1f844cu: goto label_1f844c;
        case 0x1f8450u: goto label_1f8450;
        case 0x1f8454u: goto label_1f8454;
        case 0x1f8458u: goto label_1f8458;
        case 0x1f845cu: goto label_1f845c;
        case 0x1f8460u: goto label_1f8460;
        case 0x1f8464u: goto label_1f8464;
        case 0x1f8468u: goto label_1f8468;
        case 0x1f846cu: goto label_1f846c;
        case 0x1f8470u: goto label_1f8470;
        case 0x1f8474u: goto label_1f8474;
        case 0x1f8478u: goto label_1f8478;
        case 0x1f847cu: goto label_1f847c;
        case 0x1f8480u: goto label_1f8480;
        case 0x1f8484u: goto label_1f8484;
        case 0x1f8488u: goto label_1f8488;
        case 0x1f848cu: goto label_1f848c;
        case 0x1f8490u: goto label_1f8490;
        case 0x1f8494u: goto label_1f8494;
        case 0x1f8498u: goto label_1f8498;
        case 0x1f849cu: goto label_1f849c;
        case 0x1f84a0u: goto label_1f84a0;
        case 0x1f84a4u: goto label_1f84a4;
        case 0x1f84a8u: goto label_1f84a8;
        case 0x1f84acu: goto label_1f84ac;
        case 0x1f84b0u: goto label_1f84b0;
        case 0x1f84b4u: goto label_1f84b4;
        case 0x1f84b8u: goto label_1f84b8;
        case 0x1f84bcu: goto label_1f84bc;
        case 0x1f84c0u: goto label_1f84c0;
        case 0x1f84c4u: goto label_1f84c4;
        case 0x1f84c8u: goto label_1f84c8;
        case 0x1f84ccu: goto label_1f84cc;
        case 0x1f84d0u: goto label_1f84d0;
        case 0x1f84d4u: goto label_1f84d4;
        case 0x1f84d8u: goto label_1f84d8;
        case 0x1f84dcu: goto label_1f84dc;
        case 0x1f84e0u: goto label_1f84e0;
        case 0x1f84e4u: goto label_1f84e4;
        case 0x1f84e8u: goto label_1f84e8;
        case 0x1f84ecu: goto label_1f84ec;
        case 0x1f84f0u: goto label_1f84f0;
        case 0x1f84f4u: goto label_1f84f4;
        case 0x1f84f8u: goto label_1f84f8;
        case 0x1f84fcu: goto label_1f84fc;
        case 0x1f8500u: goto label_1f8500;
        case 0x1f8504u: goto label_1f8504;
        case 0x1f8508u: goto label_1f8508;
        case 0x1f850cu: goto label_1f850c;
        case 0x1f8510u: goto label_1f8510;
        case 0x1f8514u: goto label_1f8514;
        case 0x1f8518u: goto label_1f8518;
        case 0x1f851cu: goto label_1f851c;
        case 0x1f8520u: goto label_1f8520;
        case 0x1f8524u: goto label_1f8524;
        case 0x1f8528u: goto label_1f8528;
        case 0x1f852cu: goto label_1f852c;
        case 0x1f8530u: goto label_1f8530;
        case 0x1f8534u: goto label_1f8534;
        case 0x1f8538u: goto label_1f8538;
        case 0x1f853cu: goto label_1f853c;
        case 0x1f8540u: goto label_1f8540;
        case 0x1f8544u: goto label_1f8544;
        case 0x1f8548u: goto label_1f8548;
        case 0x1f854cu: goto label_1f854c;
        case 0x1f8550u: goto label_1f8550;
        case 0x1f8554u: goto label_1f8554;
        case 0x1f8558u: goto label_1f8558;
        case 0x1f855cu: goto label_1f855c;
        case 0x1f8560u: goto label_1f8560;
        case 0x1f8564u: goto label_1f8564;
        case 0x1f8568u: goto label_1f8568;
        case 0x1f856cu: goto label_1f856c;
        case 0x1f8570u: goto label_1f8570;
        case 0x1f8574u: goto label_1f8574;
        case 0x1f8578u: goto label_1f8578;
        case 0x1f857cu: goto label_1f857c;
        case 0x1f8580u: goto label_1f8580;
        case 0x1f8584u: goto label_1f8584;
        case 0x1f8588u: goto label_1f8588;
        case 0x1f858cu: goto label_1f858c;
        case 0x1f8590u: goto label_1f8590;
        case 0x1f8594u: goto label_1f8594;
        case 0x1f8598u: goto label_1f8598;
        case 0x1f859cu: goto label_1f859c;
        case 0x1f85a0u: goto label_1f85a0;
        case 0x1f85a4u: goto label_1f85a4;
        case 0x1f85a8u: goto label_1f85a8;
        case 0x1f85acu: goto label_1f85ac;
        case 0x1f85b0u: goto label_1f85b0;
        case 0x1f85b4u: goto label_1f85b4;
        case 0x1f85b8u: goto label_1f85b8;
        case 0x1f85bcu: goto label_1f85bc;
        default: break;
    }

    ctx->pc = 0x1f82c0u;

label_1f82c0:
    // 0x1f82c0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1f82c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1f82c4:
    // 0x1f82c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f82c8:
    // 0x1f82c8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1f82c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f82cc:
    // 0x1f82cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f82ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f82d0:
    // 0x1f82d0: 0xc440f468  lwc1        $f0, -0xB98($v0)
    ctx->pc = 0x1f82d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f82d4:
    // 0x1f82d4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1f82d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1f82d8:
    // 0x1f82d8: 0x3c013e57  lui         $at, 0x3E57
    ctx->pc = 0x1f82d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15959 << 16));
label_1f82dc:
    // 0x1f82dc: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1f82dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1f82e0:
    // 0x1f82e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f82e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f82e4:
    // 0x1f82e4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f82e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f82e8:
    // 0x1f82e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f82e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f82ec:
    // 0x1f82ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f82ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f82f0:
    // 0x1f82f0: 0x24a57948  addiu       $a1, $a1, 0x7948
    ctx->pc = 0x1f82f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31048));
label_1f82f4:
    // 0x1f82f4: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1f82f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1f82f8:
    // 0x1f82f8: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1f82f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1f82fc:
    // 0x1f82fc: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1f82fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1f8300:
    // 0x1f8300: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f8300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f8304:
    // 0x1f8304: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1f8304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1f8308:
    // 0x1f8308: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1f8308u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f830c:
    // 0x1f830c: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x1f830cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1f8310:
    // 0x1f8310: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x1f8310u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f8314:
    // 0x1f8314: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1f8314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1f8318:
    // 0x1f8318: 0x25087910  addiu       $t0, $t0, 0x7910
    ctx->pc = 0x1f8318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30992));
label_1f831c:
    // 0x1f831c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1f831cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1f8320:
    // 0x1f8320: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f8320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f8324:
    // 0x1f8324: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1f8324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1f8328:
    // 0x1f8328: 0x24090053  addiu       $t1, $zero, 0x53
    ctx->pc = 0x1f8328u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1f832c:
    // 0x1f832c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1f832cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1f8330:
    // 0x1f8330: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f8330u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8334:
    // 0x1f8334: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1f8334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1f8338:
    // 0x1f8338: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f8338u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f833c:
    // 0x1f833c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1f833cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1f8340:
    // 0x1f8340: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f8340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f8344:
    // 0x1f8344: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f8344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f8348:
    // 0x1f8348: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1f8348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1f834c:
    // 0x1f834c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f834cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1f8350:
    // 0x1f8350: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1f8350u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1f8354:
    // 0x1f8354: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x1f8354u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1f8358:
    // 0x1f8358: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1f8358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1f835c:
    // 0x1f835c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f835cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1f8360:
    // 0x1f8360: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f8360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1f8364:
    // 0x1f8364: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f8364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f8368:
    // 0x1f8368: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f8368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f836c:
    // 0x1f836c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f8370:
    // 0x1f8370: 0x40f809  jalr        $v0
label_1f8374:
    if (ctx->pc == 0x1F8374u) {
        ctx->pc = 0x1F8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8370u;
        // 0x1f8374: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8378u;
        goto label_1f8378;
    }
    ctx->pc = 0x1F8370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F8378u);
        ctx->pc = 0x1F8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8370u;
        // 0x1f8374: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8370u, 0x1F8378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8378u;
label_1f8378:
    // 0x1f8378: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f8378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f837c:
    // 0x1f837c: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
label_1f8380:
    if (ctx->pc == 0x1F8380u) {
        ctx->pc = 0x1F8380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F837Cu;
        // 0x1f8380: 0xae4800a0  sw          $t0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8384u;
        goto label_1f8384;
    }
    ctx->pc = 0x1F837Cu;
    {
        const bool branch_taken_0x1f837c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f837c) {
            ctx->pc = 0x1F8380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F837Cu;
            // 0x1f8380: 0xae4800a0  sw          $t0, 0xA0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8394u;
            goto label_1f8394;
        }
    }
    ctx->pc = 0x1F8384u;
label_1f8384:
    // 0x1f8384: 0xc0784ce  jal         func_1E1338
label_1f8388:
    if (ctx->pc == 0x1F8388u) {
        ctx->pc = 0x1F8388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8384u;
        // 0x1f8388: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F838Cu;
        goto label_1f838c;
    }
    ctx->pc = 0x1F8384u;
    SET_GPR_U32(ctx, 31, 0x1F838Cu);
    ctx->pc = 0x1F8388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8384u;
    // 0x1f8388: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1338u, 0x1F8384u, 0x1F838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F838Cu;
label_1f838c:
    // 0x1f838c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f838cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f8390:
    // 0x1f8390: 0xae4800a0  sw          $t0, 0xA0($s2)
    ctx->pc = 0x1f8390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 8));
label_1f8394:
    // 0x1f8394: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f8394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f8398:
    // 0x1f8398: 0x26460050  addiu       $a2, $s2, 0x50
    ctx->pc = 0x1f8398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_1f839c:
    // 0x1f839c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f839cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f83a0:
    // 0x1f83a0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1f83a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1f83a4:
    // 0x1f83a4: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1f83a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1f83a8:
    // 0x1f83a8: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1f83a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1f83ac:
    // 0x1f83ac: 0x60f809  jalr        $v1
label_1f83b0:
    if (ctx->pc == 0x1F83B0u) {
        ctx->pc = 0x1F83B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83ACu;
        // 0x1f83b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F83B4u;
        goto label_1f83b4;
    }
    ctx->pc = 0x1F83ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F83B4u);
        ctx->pc = 0x1F83B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83ACu;
        // 0x1f83b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F83ACu, 0x1F83B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F83B4u;
label_1f83b4:
    // 0x1f83b4: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x1f83b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1f83b8:
    // 0x1f83b8: 0x3c013d44  lui         $at, 0x3D44
    ctx->pc = 0x1f83b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15684 << 16));
label_1f83bc:
    // 0x1f83bc: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x1f83bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_1f83c0:
    // 0x1f83c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f83c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f83c4:
    // 0x1f83c4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f83c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f83c8:
    // 0x1f83c8: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x1f83c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_1f83cc:
    // 0x1f83cc: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x1f83ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1f83d0:
    // 0x1f83d0: 0x60f809  jalr        $v1
label_1f83d4:
    if (ctx->pc == 0x1F83D4u) {
        ctx->pc = 0x1F83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83D0u;
        // 0x1f83d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F83D8u;
        goto label_1f83d8;
    }
    ctx->pc = 0x1F83D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F83D8u);
        ctx->pc = 0x1F83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83D0u;
        // 0x1f83d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F83D0u, 0x1F83D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F83D8u;
label_1f83d8:
    // 0x1f83d8: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x1f83d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1f83dc:
    // 0x1f83dc: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1f83dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_1f83e0:
    // 0x1f83e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f83e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1f83e4:
    // 0x1f83e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f83e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f83e8:
    // 0x1f83e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f83ec:
    // 0x1f83ec: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1f83ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1f83f0:
    // 0x1f83f0: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1f83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1f83f4:
    // 0x1f83f4: 0x60f809  jalr        $v1
label_1f83f8:
    if (ctx->pc == 0x1F83F8u) {
        ctx->pc = 0x1F83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83F4u;
        // 0x1f83f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F83FCu;
        goto label_1f83fc;
    }
    ctx->pc = 0x1F83F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F83FCu);
        ctx->pc = 0x1F83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83F4u;
        // 0x1f83f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F83F4u, 0x1F83FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F83FCu;
label_1f83fc:
    // 0x1f83fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f83fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f8400:
    // 0x1f8400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f8400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8404:
    // 0x1f8404: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1f8404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f8408:
    // 0x1f8408: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1f8408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1f840c:
    // 0x1f840c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1f840cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f8410:
    // 0x1f8410: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1f8410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1f8414:
    // 0x1f8414: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1f8414u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f8418:
    // 0x1f8418: 0x3c013d85  lui         $at, 0x3D85
    ctx->pc = 0x1f8418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15749 << 16));
label_1f841c:
    // 0x1f841c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1f841cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1f8420:
    // 0x1f8420: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f8420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8424:
    // 0x1f8424: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1f8424u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f8428:
    // 0x1f8428: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1f8428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1f842c:
    // 0x1f842c: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x1f842cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
label_1f8430:
    // 0x1f8430: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f8430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1f8434:
    // 0x1f8434: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f8434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8438:
    // 0x1f8438: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1f8438u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1f843c:
    // 0x1f843c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1f843cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1f8440:
    // 0x1f8440: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x1f8440u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1f8444:
    // 0x1f8444: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1f8444u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f8448:
    // 0x1f8448: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1f8448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1f844c:
    // 0x1f844c: 0xe7b4002c  swc1        $f20, 0x2C($sp)
    ctx->pc = 0x1f844cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1f8450:
    // 0x1f8450: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1f8450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1f8454:
    // 0x1f8454: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1f8454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1f8458:
    // 0x1f8458: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1f8458u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1f845c:
    // 0x1f845c: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x1f845cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1f8460:
    // 0x1f8460: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1f8460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1f8464:
    // 0x1f8464: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1f8464u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f8468:
    // 0x1f8468: 0x12230039  beq         $s1, $v1, . + 4 + (0x39 << 2)
label_1f846c:
    if (ctx->pc == 0x1F846Cu) {
        ctx->pc = 0x1F846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8468u;
        // 0x1f846c: 0x3c140055  lui         $s4, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8470u;
        goto label_1f8470;
    }
    ctx->pc = 0x1F8468u;
    {
        const bool branch_taken_0x1f8468 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8468u;
        // 0x1f846c: 0x3c140055  lui         $s4, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8468) {
            ctx->pc = 0x1F8550u;
            goto label_1f8550;
        }
    }
    ctx->pc = 0x1F8470u;
label_1f8470:
    // 0x1f8470: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1f8470u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1f8474:
    // 0x1f8474: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x1f8474u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1f8478:
    // 0x1f8478: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f8478u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f847c:
    // 0x1f847c: 0x26857958  addiu       $a1, $s4, 0x7958
    ctx->pc = 0x1f847cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 31064));
label_1f8480:
    // 0x1f8480: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1f8480u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f8484:
    // 0x1f8484: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f8484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f8488:
    // 0x1f8488: 0x24060270  addiu       $a2, $zero, 0x270
    ctx->pc = 0x1f8488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
label_1f848c:
    // 0x1f848c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f848cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f8490:
    // 0x1f8490: 0x26e87910  addiu       $t0, $s7, 0x7910
    ctx->pc = 0x1f8490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 30992));
label_1f8494:
    // 0x1f8494: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f8494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f8498:
    // 0x1f8498: 0x24090075  addiu       $t1, $zero, 0x75
    ctx->pc = 0x1f8498u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_1f849c:
    // 0x1f849c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f849cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f84a0:
    // 0x1f84a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f84a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f84a4:
    // 0x1f84a4: 0x40f809  jalr        $v0
label_1f84a8:
    if (ctx->pc == 0x1F84A8u) {
        ctx->pc = 0x1F84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84A4u;
        // 0x1f84a8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F84ACu;
        goto label_1f84ac;
    }
    ctx->pc = 0x1F84A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F84ACu);
        ctx->pc = 0x1F84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84A4u;
        // 0x1f84a8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F84A4u, 0x1F84ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F84ACu;
label_1f84ac:
    // 0x1f84ac: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1f84acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f84b0:
    // 0x1f84b0: 0x51600005  beql        $t3, $zero, . + 4 + (0x5 << 2)
label_1f84b4:
    if (ctx->pc == 0x1F84B4u) {
        ctx->pc = 0x1F84B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84B0u;
        // 0x1f84b4: 0xae0b0000  sw          $t3, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F84B8u;
        goto label_1f84b8;
    }
    ctx->pc = 0x1F84B0u;
    {
        const bool branch_taken_0x1f84b0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f84b0) {
            ctx->pc = 0x1F84B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F84B0u;
            // 0x1f84b4: 0xae0b0000  sw          $t3, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F84C8u;
            goto label_1f84c8;
        }
    }
    ctx->pc = 0x1F84B8u;
label_1f84b8:
    // 0x1f84b8: 0xc078bd0  jal         func_1E2F40
label_1f84bc:
    if (ctx->pc == 0x1F84BCu) {
        ctx->pc = 0x1F84BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84B8u;
        // 0x1f84bc: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F84C0u;
        goto label_1f84c0;
    }
    ctx->pc = 0x1F84B8u;
    SET_GPR_U32(ctx, 31, 0x1F84C0u);
    ctx->pc = 0x1F84BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F84B8u;
    // 0x1f84bc: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2F40u, 0x1F84B8u, 0x1F84C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F84C0u;
label_1f84c0:
    // 0x1f84c0: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1f84c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f84c4:
    // 0x1f84c4: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x1f84c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
label_1f84c8:
    // 0x1f84c8: 0x3c08001c  lui         $t0, 0x1C
    ctx->pc = 0x1f84c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28 << 16));
label_1f84cc:
    // 0x1f84cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f84ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f84d0:
    // 0x1f84d0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1f84d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f84d4:
    // 0x1f84d4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1f84d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1f84d8:
    // 0x1f84d8: 0x3508001c  ori         $t0, $t0, 0x1C
    ctx->pc = 0x1f84d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)28);
label_1f84dc:
    // 0x1f84dc: 0x8e490098  lw          $t1, 0x98($s2)
    ctx->pc = 0x1f84dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_1f84e0:
    // 0x1f84e0: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1f84e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f84e4:
    // 0x1f84e4: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1f84e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1f84e8:
    // 0x1f84e8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1f84e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f84ec:
    // 0x1f84ec: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1f84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1f84f0:
    // 0x1f84f0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1f84f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1f84f4:
    // 0x1f84f4: 0x40f809  jalr        $v0
label_1f84f8:
    if (ctx->pc == 0x1F84F8u) {
        ctx->pc = 0x1F84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84F4u;
        // 0x1f84f8: 0x1642021  addu        $a0, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F84FCu;
        goto label_1f84fc;
    }
    ctx->pc = 0x1F84F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F84FCu);
        ctx->pc = 0x1F84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84F4u;
        // 0x1f84f8: 0x1642021  addu        $a0, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F84F4u, 0x1F84FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F84FCu;
label_1f84fc:
    // 0x1f84fc: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1f84fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f8500:
    // 0x1f8500: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8504:
    // 0x1f8504: 0xc66cf464  lwc1        $f12, -0xB9C($s3)
    ctx->pc = 0x1f8504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294964324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f8508:
    // 0x1f8508: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x1f8508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_1f850c:
    // 0x1f850c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f8510:
    // 0x1f8510: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1f8510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_1f8514:
    // 0x1f8514: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x1f8514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1f8518:
    // 0x1f8518: 0x60f809  jalr        $v1
label_1f851c:
    if (ctx->pc == 0x1F851Cu) {
        ctx->pc = 0x1F851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8518u;
        // 0x1f851c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8520u;
        goto label_1f8520;
    }
    ctx->pc = 0x1F8518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F8520u);
        ctx->pc = 0x1F851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8518u;
        // 0x1f851c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8518u, 0x1F8520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8520u;
label_1f8520:
    // 0x1f8520: 0x8e4600a0  lw          $a2, 0xA0($s2)
    ctx->pc = 0x1f8520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1f8524:
    // 0x1f8524: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f8524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f8528:
    // 0x1f8528: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f8528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f852c:
    // 0x1f852c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1f852cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_1f8530:
    // 0x1f8530: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x1f8530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1f8534:
    // 0x1f8534: 0x60f809  jalr        $v1
label_1f8538:
    if (ctx->pc == 0x1F8538u) {
        ctx->pc = 0x1F8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8534u;
        // 0x1f8538: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F853Cu;
        goto label_1f853c;
    }
    ctx->pc = 0x1F8534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F853Cu);
        ctx->pc = 0x1F8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8534u;
        // 0x1f8538: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8534u, 0x1F853Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F853Cu;
label_1f853c:
    // 0x1f853c: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x1f853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1f8540:
    // 0x1f8540: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1f8540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1f8544:
    // 0x1f8544: 0x1623ffcc  bne         $s1, $v1, . + 4 + (-0x34 << 2)
label_1f8548:
    if (ctx->pc == 0x1F8548u) {
        ctx->pc = 0x1F8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8544u;
        // 0x1f8548: 0x8fcc27e4  lw          $t4, 0x27E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F854Cu;
        goto label_1f854c;
    }
    ctx->pc = 0x1F8544u;
    {
        const bool branch_taken_0x1f8544 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8544u;
        // 0x1f8548: 0x8fcc27e4  lw          $t4, 0x27E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8544) {
            ctx->pc = 0x1F8478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8478;
        }
    }
    ctx->pc = 0x1F854Cu;
label_1f854c:
    // 0x1f854c: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x1f854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1f8550:
    // 0x1f8550: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1f8550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f8554:
    // 0x1f8554: 0x8e4800a0  lw          $t0, 0xA0($s2)
    ctx->pc = 0x1f8554u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1f8558:
    // 0x1f8558: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1f8558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f855c:
    // 0x1f855c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1f855cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1f8560:
    // 0x1f8560: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1f8560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1f8564:
    // 0x1f8564: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x1f8564u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1f8568:
    // 0x1f8568: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x1f8568u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_1f856c:
    // 0x1f856c: 0x84640128  lh          $a0, 0x128($v1)
    ctx->pc = 0x1f856cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 296)));
label_1f8570:
    // 0x1f8570: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x1f8570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1f8574:
    // 0x1f8574: 0x8c66012c  lw          $a2, 0x12C($v1)
    ctx->pc = 0x1f8574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
label_1f8578:
    // 0x1f8578: 0xe2280b  movn        $a1, $a3, $v0
    ctx->pc = 0x1f8578u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1f857c:
    // 0x1f857c: 0xc0f809  jalr        $a2
label_1f8580:
    if (ctx->pc == 0x1F8580u) {
        ctx->pc = 0x1F8580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F857Cu;
        // 0x1f8580: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8584u;
        goto label_1f8584;
    }
    ctx->pc = 0x1F857Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1F8584u);
        ctx->pc = 0x1F8580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F857Cu;
        // 0x1f8580: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F857Cu, 0x1F8584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8584u;
label_1f8584:
    // 0x1f8584: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1f8584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1f8588:
    // 0x1f8588: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1f8588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1f858c:
    // 0x1f858c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1f858cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1f8590:
    // 0x1f8590: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1f8590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f8594:
    // 0x1f8594: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1f8594u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f8598:
    // 0x1f8598: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1f8598u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f859c:
    // 0x1f859c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1f859cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f85a0:
    // 0x1f85a0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1f85a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f85a4:
    // 0x1f85a4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1f85a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f85a8:
    // 0x1f85a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f85a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f85ac:
    // 0x1f85ac: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x1f85acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1f85b0:
    // 0x1f85b0: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1f85b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f85b4:
    // 0x1f85b4: 0x3e00008  jr          $ra
label_1f85b8:
    if (ctx->pc == 0x1F85B8u) {
        ctx->pc = 0x1F85B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85B4u;
        // 0x1f85b8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F85BCu;
        goto label_1f85bc;
    }
    ctx->pc = 0x1F85B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F85B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85B4u;
        // 0x1f85b8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F85B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F85BCu;
label_1f85bc:
    // 0x1f85bc: 0x0  nop
    ctx->pc = 0x1f85bcu;
    // NOP
    ctx->pc = 0x1f85c0u;
}
