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

// Function: sub_004A1258
// Address: 0x4a1258 - 0x4a1500
void sub_004A1258_0x4a1258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1258_0x4a1258");
#endif

    switch (ctx->pc) {
        case 0x4a1258u: goto label_4a1258;
        case 0x4a125cu: goto label_4a125c;
        case 0x4a1260u: goto label_4a1260;
        case 0x4a1264u: goto label_4a1264;
        case 0x4a1268u: goto label_4a1268;
        case 0x4a126cu: goto label_4a126c;
        case 0x4a1270u: goto label_4a1270;
        case 0x4a1274u: goto label_4a1274;
        case 0x4a1278u: goto label_4a1278;
        case 0x4a127cu: goto label_4a127c;
        case 0x4a1280u: goto label_4a1280;
        case 0x4a1284u: goto label_4a1284;
        case 0x4a1288u: goto label_4a1288;
        case 0x4a128cu: goto label_4a128c;
        case 0x4a1290u: goto label_4a1290;
        case 0x4a1294u: goto label_4a1294;
        case 0x4a1298u: goto label_4a1298;
        case 0x4a129cu: goto label_4a129c;
        case 0x4a12a0u: goto label_4a12a0;
        case 0x4a12a4u: goto label_4a12a4;
        case 0x4a12a8u: goto label_4a12a8;
        case 0x4a12acu: goto label_4a12ac;
        case 0x4a12b0u: goto label_4a12b0;
        case 0x4a12b4u: goto label_4a12b4;
        case 0x4a12b8u: goto label_4a12b8;
        case 0x4a12bcu: goto label_4a12bc;
        case 0x4a12c0u: goto label_4a12c0;
        case 0x4a12c4u: goto label_4a12c4;
        case 0x4a12c8u: goto label_4a12c8;
        case 0x4a12ccu: goto label_4a12cc;
        case 0x4a12d0u: goto label_4a12d0;
        case 0x4a12d4u: goto label_4a12d4;
        case 0x4a12d8u: goto label_4a12d8;
        case 0x4a12dcu: goto label_4a12dc;
        case 0x4a12e0u: goto label_4a12e0;
        case 0x4a12e4u: goto label_4a12e4;
        case 0x4a12e8u: goto label_4a12e8;
        case 0x4a12ecu: goto label_4a12ec;
        case 0x4a12f0u: goto label_4a12f0;
        case 0x4a12f4u: goto label_4a12f4;
        case 0x4a12f8u: goto label_4a12f8;
        case 0x4a12fcu: goto label_4a12fc;
        case 0x4a1300u: goto label_4a1300;
        case 0x4a1304u: goto label_4a1304;
        case 0x4a1308u: goto label_4a1308;
        case 0x4a130cu: goto label_4a130c;
        case 0x4a1310u: goto label_4a1310;
        case 0x4a1314u: goto label_4a1314;
        case 0x4a1318u: goto label_4a1318;
        case 0x4a131cu: goto label_4a131c;
        case 0x4a1320u: goto label_4a1320;
        case 0x4a1324u: goto label_4a1324;
        case 0x4a1328u: goto label_4a1328;
        case 0x4a132cu: goto label_4a132c;
        case 0x4a1330u: goto label_4a1330;
        case 0x4a1334u: goto label_4a1334;
        case 0x4a1338u: goto label_4a1338;
        case 0x4a133cu: goto label_4a133c;
        case 0x4a1340u: goto label_4a1340;
        case 0x4a1344u: goto label_4a1344;
        case 0x4a1348u: goto label_4a1348;
        case 0x4a134cu: goto label_4a134c;
        case 0x4a1350u: goto label_4a1350;
        case 0x4a1354u: goto label_4a1354;
        case 0x4a1358u: goto label_4a1358;
        case 0x4a135cu: goto label_4a135c;
        case 0x4a1360u: goto label_4a1360;
        case 0x4a1364u: goto label_4a1364;
        case 0x4a1368u: goto label_4a1368;
        case 0x4a136cu: goto label_4a136c;
        case 0x4a1370u: goto label_4a1370;
        case 0x4a1374u: goto label_4a1374;
        case 0x4a1378u: goto label_4a1378;
        case 0x4a137cu: goto label_4a137c;
        case 0x4a1380u: goto label_4a1380;
        case 0x4a1384u: goto label_4a1384;
        case 0x4a1388u: goto label_4a1388;
        case 0x4a138cu: goto label_4a138c;
        case 0x4a1390u: goto label_4a1390;
        case 0x4a1394u: goto label_4a1394;
        case 0x4a1398u: goto label_4a1398;
        case 0x4a139cu: goto label_4a139c;
        case 0x4a13a0u: goto label_4a13a0;
        case 0x4a13a4u: goto label_4a13a4;
        case 0x4a13a8u: goto label_4a13a8;
        case 0x4a13acu: goto label_4a13ac;
        case 0x4a13b0u: goto label_4a13b0;
        case 0x4a13b4u: goto label_4a13b4;
        case 0x4a13b8u: goto label_4a13b8;
        case 0x4a13bcu: goto label_4a13bc;
        case 0x4a13c0u: goto label_4a13c0;
        case 0x4a13c4u: goto label_4a13c4;
        case 0x4a13c8u: goto label_4a13c8;
        case 0x4a13ccu: goto label_4a13cc;
        case 0x4a13d0u: goto label_4a13d0;
        case 0x4a13d4u: goto label_4a13d4;
        case 0x4a13d8u: goto label_4a13d8;
        case 0x4a13dcu: goto label_4a13dc;
        case 0x4a13e0u: goto label_4a13e0;
        case 0x4a13e4u: goto label_4a13e4;
        case 0x4a13e8u: goto label_4a13e8;
        case 0x4a13ecu: goto label_4a13ec;
        case 0x4a13f0u: goto label_4a13f0;
        case 0x4a13f4u: goto label_4a13f4;
        case 0x4a13f8u: goto label_4a13f8;
        case 0x4a13fcu: goto label_4a13fc;
        case 0x4a1400u: goto label_4a1400;
        case 0x4a1404u: goto label_4a1404;
        case 0x4a1408u: goto label_4a1408;
        case 0x4a140cu: goto label_4a140c;
        case 0x4a1410u: goto label_4a1410;
        case 0x4a1414u: goto label_4a1414;
        case 0x4a1418u: goto label_4a1418;
        case 0x4a141cu: goto label_4a141c;
        case 0x4a1420u: goto label_4a1420;
        case 0x4a1424u: goto label_4a1424;
        case 0x4a1428u: goto label_4a1428;
        case 0x4a142cu: goto label_4a142c;
        case 0x4a1430u: goto label_4a1430;
        case 0x4a1434u: goto label_4a1434;
        case 0x4a1438u: goto label_4a1438;
        case 0x4a143cu: goto label_4a143c;
        case 0x4a1440u: goto label_4a1440;
        case 0x4a1444u: goto label_4a1444;
        case 0x4a1448u: goto label_4a1448;
        case 0x4a144cu: goto label_4a144c;
        case 0x4a1450u: goto label_4a1450;
        case 0x4a1454u: goto label_4a1454;
        case 0x4a1458u: goto label_4a1458;
        case 0x4a145cu: goto label_4a145c;
        case 0x4a1460u: goto label_4a1460;
        case 0x4a1464u: goto label_4a1464;
        case 0x4a1468u: goto label_4a1468;
        case 0x4a146cu: goto label_4a146c;
        case 0x4a1470u: goto label_4a1470;
        case 0x4a1474u: goto label_4a1474;
        case 0x4a1478u: goto label_4a1478;
        case 0x4a147cu: goto label_4a147c;
        case 0x4a1480u: goto label_4a1480;
        case 0x4a1484u: goto label_4a1484;
        case 0x4a1488u: goto label_4a1488;
        case 0x4a148cu: goto label_4a148c;
        case 0x4a1490u: goto label_4a1490;
        case 0x4a1494u: goto label_4a1494;
        case 0x4a1498u: goto label_4a1498;
        case 0x4a149cu: goto label_4a149c;
        case 0x4a14a0u: goto label_4a14a0;
        case 0x4a14a4u: goto label_4a14a4;
        case 0x4a14a8u: goto label_4a14a8;
        case 0x4a14acu: goto label_4a14ac;
        case 0x4a14b0u: goto label_4a14b0;
        case 0x4a14b4u: goto label_4a14b4;
        case 0x4a14b8u: goto label_4a14b8;
        case 0x4a14bcu: goto label_4a14bc;
        case 0x4a14c0u: goto label_4a14c0;
        case 0x4a14c4u: goto label_4a14c4;
        case 0x4a14c8u: goto label_4a14c8;
        case 0x4a14ccu: goto label_4a14cc;
        case 0x4a14d0u: goto label_4a14d0;
        case 0x4a14d4u: goto label_4a14d4;
        case 0x4a14d8u: goto label_4a14d8;
        case 0x4a14dcu: goto label_4a14dc;
        case 0x4a14e0u: goto label_4a14e0;
        case 0x4a14e4u: goto label_4a14e4;
        case 0x4a14e8u: goto label_4a14e8;
        case 0x4a14ecu: goto label_4a14ec;
        case 0x4a14f0u: goto label_4a14f0;
        case 0x4a14f4u: goto label_4a14f4;
        case 0x4a14f8u: goto label_4a14f8;
        case 0x4a14fcu: goto label_4a14fc;
        default: break;
    }

    ctx->pc = 0x4a1258u;

label_4a1258:
    // 0x4a1258: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4a1258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a125c:
    // 0x4a125c: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4a125cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4a1260:
    // 0x4a1260: 0x102001b  divu        $zero, $t0, $v0
    ctx->pc = 0x4a1260u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
label_4a1264:
    // 0x4a1264: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4a1264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4a1268:
    // 0x4a1268: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4a1268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4a126c:
    // 0x4a126c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4a126cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_4a1270:
    // 0x4a1270: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4a1270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4a1274:
    // 0x4a1274: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4a1274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a1278:
    // 0x4a1278: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a1278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4a127c:
    // 0x4a127c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4a127cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a1280:
    // 0x4a1280: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4a1280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4a1284:
    // 0x4a1284: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a1284u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a1288:
    // 0x4a1288: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4a1288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4a128c:
    // 0x4a128c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4a128cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a1290:
    // 0x4a1290: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4a1290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4a1294:
    // 0x4a1294: 0x2477f7a0  addiu       $s7, $v1, -0x860
    ctx->pc = 0x4a1294u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965152));
label_4a1298:
    // 0x4a1298: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4a1298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4a129c:
    // 0x4a129c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a12a0:
    // 0x4a12a0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_4a12a4:
    if (ctx->pc == 0x4A12A4u) {
        ctx->pc = 0x4A12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A12A0u;
        // 0x4a12a4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A12A8u;
        goto label_4a12a8;
    }
    ctx->pc = 0x4A12A0u;
    {
        const bool branch_taken_0x4a12a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a12a0) {
            ctx->pc = 0x4A12A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A12A0u;
            // 0x4a12a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A12A8u;
            goto label_4a12a8;
        }
    }
    ctx->pc = 0x4A12A8u;
label_4a12a8:
    // 0x4a12a8: 0x4012  mflo        $t0
    ctx->pc = 0x4a12a8u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_4a12ac:
    // 0x4a12ac: 0x10000078  b           . + 4 + (0x78 << 2)
label_4a12b0:
    if (ctx->pc == 0x4A12B0u) {
        ctx->pc = 0x4A12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A12ACu;
        // 0x4a12b0: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A12B4u;
        goto label_4a12b4;
    }
    ctx->pc = 0x4A12ACu;
    {
        const bool branch_taken_0x4a12ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A12ACu;
        // 0x4a12b0: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a12ac) {
            ctx->pc = 0x4A1490u;
            goto label_4a1490;
        }
    }
    ctx->pc = 0x4A12B4u;
label_4a12b4:
    // 0x4a12b4: 0x0  nop
    ctx->pc = 0x4a12b4u;
    // NOP
label_4a12b8:
    // 0x4a12b8: 0x3c0c7c00  lui         $t4, 0x7C00
    ctx->pc = 0x4a12b8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)31744 << 16));
label_4a12bc:
    // 0x4a12bc: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x4a12bcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_4a12c0:
    // 0x4a12c0: 0x7aea0000  lq          $t2, 0x0($s7)
    ctx->pc = 0x4a12c0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_4a12c4:
    // 0x4a12c4: 0x2455f700  addiu       $s5, $v0, -0x900
    ctx->pc = 0x4a12c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
label_4a12c8:
    // 0x4a12c8: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x4a12c8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_4a12cc:
    // 0x4a12cc: 0x24190010  addiu       $t9, $zero, 0x10
    ctx->pc = 0x4a12ccu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4a12d0:
    // 0x4a12d0: 0x2418000c  addiu       $t8, $zero, 0xC
    ctx->pc = 0x4a12d0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a12d4:
    // 0x4a12d4: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x4a12d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
label_4a12d8:
    // 0x4a12d8: 0x3c0e0400  lui         $t6, 0x400
    ctx->pc = 0x4a12d8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)1024 << 16));
label_4a12dc:
    // 0x4a12dc: 0x3c0d0100  lui         $t5, 0x100
    ctx->pc = 0x4a12dcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)256 << 16));
label_4a12e0:
    // 0x4a12e0: 0x35ad0404  ori         $t5, $t5, 0x404
    ctx->pc = 0x4a12e0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)1028);
label_4a12e4:
    // 0x4a12e4: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x4a12e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
label_4a12e8:
    // 0x4a12e8: 0x358c8000  ori         $t4, $t4, 0x8000
    ctx->pc = 0x4a12e8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32768);
label_4a12ec:
    // 0x4a12ec: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4a12ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_4a12f0:
    // 0x4a12f0: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x4a12f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4a12f4:
    // 0x4a12f4: 0x320402d  daddu       $t0, $t9, $zero
    ctx->pc = 0x4a12f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_4a12f8:
    // 0x4a12f8: 0x202400b  movn        $t0, $s0, $v0
    ctx->pc = 0x4a12f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
label_4a12fc:
    // 0x4a12fc: 0x1182018  mult        $a0, $t0, $t8
    ctx->pc = 0x4a12fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4a1300:
    // 0x4a1300: 0x10e1825  or          $v1, $t0, $t6
    ctx->pc = 0x4a1300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 14));
label_4a1304:
    // 0x4a1304: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a1304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a1308:
    // 0x4a1308: 0x2088023  subu        $s0, $s0, $t0
    ctx->pc = 0x4a1308u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_4a130c:
    // 0x4a130c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4a130cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_4a1310:
    // 0x4a1310: 0x6d2825  or          $a1, $v1, $t5
    ctx->pc = 0x4a1310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
label_4a1314:
    // 0x4a1314: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x4a1314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_4a1318:
    // 0x4a1318: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4a1318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_4a131c:
    // 0x4a131c: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x4a131cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_4a1320:
    // 0x4a1320: 0x4f1825  or          $v1, $v0, $t7
    ctx->pc = 0x4a1320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
label_4a1324:
    // 0x4a1324: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x4a1324u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_4a1328:
    // 0x4a1328: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a1328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a132c:
    // 0x4a132c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a132cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a1330:
    // 0x4a1330: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a1330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a1334:
    // 0x4a1334: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a1334u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a1338:
    // 0x4a1338: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a1338u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4a133c:
    // 0x4a133c: 0x8c2025  or          $a0, $a0, $t4
    ctx->pc = 0x4a133cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
label_4a1340:
    // 0x4a1340: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x4a1340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_4a1344:
    // 0x4a1344: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x4a1344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_4a1348:
    // 0x4a1348: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4a1348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_4a134c:
    // 0x4a134c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x4a134cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_4a1350:
    // 0x4a1350: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4a1350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_4a1354:
    // 0x4a1354: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x4a1354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_4a1358:
    // 0x4a1358: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x4a1358u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_4a135c:
    // 0x4a135c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a135cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a1360:
    // 0x4a1360: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a1360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a1364:
    // 0x4a1364: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4a1364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_4a1368:
    // 0x4a1368: 0x110b0041  beq         $t0, $t3, . + 4 + (0x41 << 2)
label_4a136c:
    if (ctx->pc == 0x4A136Cu) {
        ctx->pc = 0x4A136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1368u;
        // 0x4a136c: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1370u;
        goto label_4a1370;
    }
    ctx->pc = 0x4A1368u;
    {
        const bool branch_taken_0x4a1368 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        ctx->pc = 0x4A136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1368u;
        // 0x4a136c: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1368) {
            ctx->pc = 0x4A1470u;
            goto label_4a1470;
        }
    }
    ctx->pc = 0x4A1370u;
label_4a1370:
    // 0x4a1370: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4a1370u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_4a1374:
    // 0x4a1374: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4a1374u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_4a1378:
    // 0x4a1378: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x4a1378u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a137c:
    // 0x4a137c: 0x96260002  lhu         $a2, 0x2($s1)
    ctx->pc = 0x4a137cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4a1380:
    // 0x4a1380: 0x96270004  lhu         $a3, 0x4($s1)
    ctx->pc = 0x4a1380u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_4a1384:
    // 0x4a1384: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x4a1384u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4a1388:
    // 0x4a1388: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x4a1388u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_4a138c:
    // 0x4a138c: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x4a138cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_4a1390:
    // 0x4a1390: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x4a1390u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_4a1394:
    // 0x4a1394: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x4a1394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_4a1398:
    // 0x4a1398: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x4a1398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_4a139c:
    // 0x4a139c: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x4a139cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a13a0:
    // 0x4a13a0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4a13a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_4a13a4:
    // 0x4a13a4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a13a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a13a8:
    // 0x4a13a8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a13a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a13ac:
    // 0x4a13ac: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a13acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a13b0:
    // 0x4a13b0: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x4a13b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_4a13b4:
    // 0x4a13b4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a13b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a13b8:
    // 0x4a13b8: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4a13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a13bc:
    // 0x4a13bc: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a13bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a13c0:
    // 0x4a13c0: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x4a13c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_4a13c4:
    // 0x4a13c4: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4a13c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_4a13c8:
    // 0x4a13c8: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4a13c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_4a13cc:
    // 0x4a13cc: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a13d0:
    // 0x4a13d0: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x4a13d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_4a13d4:
    // 0x4a13d4: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4a13d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_4a13d8:
    // 0x4a13d8: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x4a13d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_4a13dc:
    // 0x4a13dc: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a13dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a13e0:
    // 0x4a13e0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x4a13e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_4a13e4:
    // 0x4a13e4: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4a13e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_4a13e8:
    // 0x4a13e8: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x4a13e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_4a13ec:
    // 0x4a13ec: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a13ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a13f0:
    // 0x4a13f0: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x4a13f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_4a13f4:
    // 0x4a13f4: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x4a13f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_4a13f8:
    // 0x4a13f8: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x4a13f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_4a13fc:
    // 0x4a13fc: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a13fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a1400:
    // 0x4a1400: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x4a1400u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_4a1404:
    // 0x4a1404: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x4a1404u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_4a1408:
    // 0x4a1408: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x4a1408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_4a140c:
    // 0x4a140c: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a140cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a1410:
    // 0x4a1410: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x4a1410u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_4a1414:
    // 0x4a1414: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x4a1414u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_4a1418:
    // 0x4a1418: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x4a1418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_4a141c:
    // 0x4a141c: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a141cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a1420:
    // 0x4a1420: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x4a1420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_4a1424:
    // 0x4a1424: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x4a1424u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_4a1428:
    // 0x4a1428: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x4a1428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_4a142c:
    // 0x4a142c: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a142cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a1430:
    // 0x4a1430: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x4a1430u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_4a1434:
    // 0x4a1434: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x4a1434u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_4a1438:
    // 0x4a1438: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x4a1438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_4a143c:
    // 0x4a143c: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a143cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a1440:
    // 0x4a1440: 0x78e20020  lq          $v0, 0x20($a3)
    ctx->pc = 0x4a1440u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_4a1444:
    // 0x4a1444: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x4a1444u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_4a1448:
    // 0x4a1448: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x4a1448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_4a144c:
    // 0x4a144c: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a144cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a1450:
    // 0x4a1450: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x4a1450u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_4a1454:
    // 0x4a1454: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x4a1454u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_4a1458:
    // 0x4a1458: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x4a1458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_4a145c:
    // 0x4a145c: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a145cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a1460:
    // 0x4a1460: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4a1460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_4a1464:
    // 0x4a1464: 0x1509ffc4  bne         $t0, $t1, . + 4 + (-0x3C << 2)
label_4a1468:
    if (ctx->pc == 0x4A1468u) {
        ctx->pc = 0x4A1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1464u;
        // 0x4a1468: 0x26310006  addiu       $s1, $s1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A146Cu;
        goto label_4a146c;
    }
    ctx->pc = 0x4A1464u;
    {
        const bool branch_taken_0x4a1464 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x4A1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1464u;
        // 0x4a1468: 0x26310006  addiu       $s1, $s1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1464) {
            ctx->pc = 0x4A1378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1378;
        }
    }
    ctx->pc = 0x4A146Cu;
label_4a146c:
    // 0x4a146c: 0x0  nop
    ctx->pc = 0x4a146cu;
    // NOP
label_4a1470:
    // 0x4a1470: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a1470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a1474:
    // 0x4a1474: 0x7c4a0000  sq          $t2, 0x0($v0)
    ctx->pc = 0x4a1474u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 10));
label_4a1478:
    // 0x4a1478: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a1478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a147c:
    // 0x4a147c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a147cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a1480:
    // 0x4a1480: 0x1600ff9b  bnez        $s0, . + 4 + (-0x65 << 2)
label_4a1484:
    if (ctx->pc == 0x4A1484u) {
        ctx->pc = 0x4A1484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1480u;
        // 0x4a1484: 0x7aaa0000  lq          $t2, 0x0($s5) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1488u;
        goto label_4a1488;
    }
    ctx->pc = 0x4A1480u;
    {
        const bool branch_taken_0x4a1480 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1480u;
        // 0x4a1484: 0x7aaa0000  lq          $t2, 0x0($s5) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1480) {
            ctx->pc = 0x4A12F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a12f0;
        }
    }
    ctx->pc = 0x4A1488u;
label_4a1488:
    // 0x4a1488: 0xc127ec8  jal         func_49FB20
label_4a148c:
    if (ctx->pc == 0x4A148Cu) {
        ctx->pc = 0x4A1490u;
        goto label_4a1490;
    }
    ctx->pc = 0x4A1488u;
    SET_GPR_U32(ctx, 31, 0x4A1490u);
    ctx->pc = 0x49FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FB20u, 0x4A1488u, 0x4A1490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1490u;
label_4a1490:
    // 0x4a1490: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_4a1494:
    if (ctx->pc == 0x4A1494u) {
        ctx->pc = 0x4A1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1490u;
        // 0x4a1494: 0x8f90879c  lw          $s0, -0x7864($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1498u;
        goto label_4a1498;
    }
    ctx->pc = 0x4A1490u;
    {
        const bool branch_taken_0x4a1490 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1490u;
        // 0x4a1494: 0x8f90879c  lw          $s0, -0x7864($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1490) {
            ctx->pc = 0x4A14C8u;
            goto label_4a14c8;
        }
    }
    ctx->pc = 0x4A1498u;
label_4a1498:
    // 0x4a1498: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a1498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a149c:
    // 0x4a149c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4a149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4a14a0:
    // 0x4a14a0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4a14a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a14a4:
    // 0x4a14a4: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x4a14a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_4a14a8:
    // 0x4a14a8: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x4a14a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4a14ac:
    // 0x4a14ac: 0x263800a  movz        $s0, $s3, $v1
    ctx->pc = 0x4a14acu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
label_4a14b0:
    // 0x4a14b0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x4a14b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a14b4:
    // 0x4a14b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4a14b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a14b8:
    // 0x4a14b8: 0x40f809  jalr        $v0
label_4a14bc:
    if (ctx->pc == 0x4A14BCu) {
        ctx->pc = 0x4A14BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A14B8u;
        // 0x4a14bc: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A14C0u;
        goto label_4a14c0;
    }
    ctx->pc = 0x4A14B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A14C0u);
        ctx->pc = 0x4A14BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A14B8u;
        // 0x4a14bc: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A14B8u, 0x4A14C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A14C0u;
label_4a14c0:
    // 0x4a14c0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a14c4:
    if (ctx->pc == 0x4A14C4u) {
        ctx->pc = 0x4A14C8u;
        goto label_4a14c8;
    }
    ctx->pc = 0x4A14C0u;
    {
        const bool branch_taken_0x4a14c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a14c0) {
            ctx->pc = 0x4A14CCu;
            goto label_4a14cc;
        }
    }
    ctx->pc = 0x4A14C8u;
label_4a14c8:
    // 0x4a14c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a14c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a14cc:
    // 0x4a14cc: 0x1600ff7a  bnez        $s0, . + 4 + (-0x86 << 2)
label_4a14d0:
    if (ctx->pc == 0x4A14D0u) {
        ctx->pc = 0x4A14D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A14CCu;
        // 0x4a14d0: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A14D4u;
        goto label_4a14d4;
    }
    ctx->pc = 0x4A14CCu;
    {
        const bool branch_taken_0x4a14cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A14D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A14CCu;
        // 0x4a14d0: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a14cc) {
            ctx->pc = 0x4A12B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a12b8;
        }
    }
    ctx->pc = 0x4A14D4u;
label_4a14d4:
    // 0x4a14d4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4a14d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a14d8:
    // 0x4a14d8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4a14d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a14dc:
    // 0x4a14dc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4a14dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a14e0:
    // 0x4a14e0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4a14e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a14e4:
    // 0x4a14e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a14e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a14e8:
    // 0x4a14e8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4a14e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a14ec:
    // 0x4a14ec: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4a14ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a14f0:
    // 0x4a14f0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4a14f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a14f4:
    // 0x4a14f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a14f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a14f8:
    // 0x4a14f8: 0x3e00008  jr          $ra
label_4a14fc:
    if (ctx->pc == 0x4A14FCu) {
        ctx->pc = 0x4A14FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A14F8u;
        // 0x4a14fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1500u;
        goto label_fallthrough_0x4a14f8;
    }
    ctx->pc = 0x4A14F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A14FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A14F8u;
        // 0x4a14fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A14F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a14f8:
    ctx->pc = 0x4A1500u;
}
