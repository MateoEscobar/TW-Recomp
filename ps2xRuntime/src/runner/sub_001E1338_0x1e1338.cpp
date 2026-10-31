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

// Function: sub_001E1338
// Address: 0x1e1338 - 0x1e1458
void sub_001E1338_0x1e1338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1338_0x1e1338");
#endif

    switch (ctx->pc) {
        case 0x1e1338u: goto label_1e1338;
        case 0x1e133cu: goto label_1e133c;
        case 0x1e1340u: goto label_1e1340;
        case 0x1e1344u: goto label_1e1344;
        case 0x1e1348u: goto label_1e1348;
        case 0x1e134cu: goto label_1e134c;
        case 0x1e1350u: goto label_1e1350;
        case 0x1e1354u: goto label_1e1354;
        case 0x1e1358u: goto label_1e1358;
        case 0x1e135cu: goto label_1e135c;
        case 0x1e1360u: goto label_1e1360;
        case 0x1e1364u: goto label_1e1364;
        case 0x1e1368u: goto label_1e1368;
        case 0x1e136cu: goto label_1e136c;
        case 0x1e1370u: goto label_1e1370;
        case 0x1e1374u: goto label_1e1374;
        case 0x1e1378u: goto label_1e1378;
        case 0x1e137cu: goto label_1e137c;
        case 0x1e1380u: goto label_1e1380;
        case 0x1e1384u: goto label_1e1384;
        case 0x1e1388u: goto label_1e1388;
        case 0x1e138cu: goto label_1e138c;
        case 0x1e1390u: goto label_1e1390;
        case 0x1e1394u: goto label_1e1394;
        case 0x1e1398u: goto label_1e1398;
        case 0x1e139cu: goto label_1e139c;
        case 0x1e13a0u: goto label_1e13a0;
        case 0x1e13a4u: goto label_1e13a4;
        case 0x1e13a8u: goto label_1e13a8;
        case 0x1e13acu: goto label_1e13ac;
        case 0x1e13b0u: goto label_1e13b0;
        case 0x1e13b4u: goto label_1e13b4;
        case 0x1e13b8u: goto label_1e13b8;
        case 0x1e13bcu: goto label_1e13bc;
        case 0x1e13c0u: goto label_1e13c0;
        case 0x1e13c4u: goto label_1e13c4;
        case 0x1e13c8u: goto label_1e13c8;
        case 0x1e13ccu: goto label_1e13cc;
        case 0x1e13d0u: goto label_1e13d0;
        case 0x1e13d4u: goto label_1e13d4;
        case 0x1e13d8u: goto label_1e13d8;
        case 0x1e13dcu: goto label_1e13dc;
        case 0x1e13e0u: goto label_1e13e0;
        case 0x1e13e4u: goto label_1e13e4;
        case 0x1e13e8u: goto label_1e13e8;
        case 0x1e13ecu: goto label_1e13ec;
        case 0x1e13f0u: goto label_1e13f0;
        case 0x1e13f4u: goto label_1e13f4;
        case 0x1e13f8u: goto label_1e13f8;
        case 0x1e13fcu: goto label_1e13fc;
        case 0x1e1400u: goto label_1e1400;
        case 0x1e1404u: goto label_1e1404;
        case 0x1e1408u: goto label_1e1408;
        case 0x1e140cu: goto label_1e140c;
        case 0x1e1410u: goto label_1e1410;
        case 0x1e1414u: goto label_1e1414;
        case 0x1e1418u: goto label_1e1418;
        case 0x1e141cu: goto label_1e141c;
        case 0x1e1420u: goto label_1e1420;
        case 0x1e1424u: goto label_1e1424;
        case 0x1e1428u: goto label_1e1428;
        case 0x1e142cu: goto label_1e142c;
        case 0x1e1430u: goto label_1e1430;
        case 0x1e1434u: goto label_1e1434;
        case 0x1e1438u: goto label_1e1438;
        case 0x1e143cu: goto label_1e143c;
        case 0x1e1440u: goto label_1e1440;
        case 0x1e1444u: goto label_1e1444;
        case 0x1e1448u: goto label_1e1448;
        case 0x1e144cu: goto label_1e144c;
        case 0x1e1450u: goto label_1e1450;
        case 0x1e1454u: goto label_1e1454;
        default: break;
    }

    ctx->pc = 0x1e1338u;

label_1e1338:
    // 0x1e1338: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e1338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e133c:
    // 0x1e133c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e133cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1e1340:
    // 0x1e1340: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e1340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e1344:
    // 0x1e1344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e1348:
    // 0x1e1348: 0xc06a38c  jal         func_1A8E30
label_1e134c:
    if (ctx->pc == 0x1E134Cu) {
        ctx->pc = 0x1E134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1348u;
        // 0x1e134c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1350u;
        goto label_1e1350;
    }
    ctx->pc = 0x1E1348u;
    SET_GPR_U32(ctx, 31, 0x1E1350u);
    ctx->pc = 0x1E134Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1348u;
    // 0x1e134c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1E1348u, 0x1E1350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1350u;
label_1e1350:
    // 0x1e1350: 0x26110084  addiu       $s1, $s0, 0x84
    ctx->pc = 0x1e1350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_1e1354:
    // 0x1e1354: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e1354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e1358:
    // 0x1e1358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e1358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e135c:
    // 0x1e135c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1e135cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1e1360:
    // 0x1e1360: 0x24639d70  addiu       $v1, $v1, -0x6290
    ctx->pc = 0x1e1360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942064));
label_1e1364:
    // 0x1e1364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e1364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1368:
    // 0x1e1368: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1e1368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1e136c:
    // 0x1e136c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1e136cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1e1370:
    // 0x1e1370: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1e1370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_1e1374:
    // 0x1e1374: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x1e1374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1e1378:
    // 0x1e1378: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x1e1378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
label_1e137c:
    // 0x1e137c: 0x24848510  addiu       $a0, $a0, -0x7AF0
    ctx->pc = 0x1e137cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935824));
label_1e1380:
    // 0x1e1380: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1e1380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1e1384:
    // 0x1e1384: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1e1384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1e1388:
    // 0x1e1388: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1e1388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
label_1e138c:
    // 0x1e138c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1e138cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1e1390:
    // 0x1e1390: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e1390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_1e1394:
    // 0x1e1394: 0x2463bfa0  addiu       $v1, $v1, -0x4060
    ctx->pc = 0x1e1394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950816));
label_1e1398:
    // 0x1e1398: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e1398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_1e139c:
    // 0x1e139c: 0x24c6bfc8  addiu       $a2, $a2, -0x4038
    ctx->pc = 0x1e139cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950856));
label_1e13a0:
    // 0x1e13a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e13a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1e13a4:
    // 0x1e13a4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1e13a8:
    // 0x1e13a8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1e13a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1e13ac:
    // 0x1e13ac: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1e13acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1e13b0:
    // 0x1e13b0: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1e13b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_1e13b4:
    // 0x1e13b4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1e13b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1e13b8:
    // 0x1e13b8: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x1e13b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
label_1e13bc:
    // 0x1e13bc: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1e13bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1e13c0:
    // 0x1e13c0: 0x8c8cb9c0  lw          $t4, -0x4640($a0)
    ctx->pc = 0x1e13c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949312)));
label_1e13c4:
    // 0x1e13c4: 0x24a56658  addiu       $a1, $a1, 0x6658
    ctx->pc = 0x1e13c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26200));
label_1e13c8:
    // 0x1e13c8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1e13c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1e13cc:
    // 0x1e13cc: 0x25086660  addiu       $t0, $t0, 0x6660
    ctx->pc = 0x1e13ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26208));
label_1e13d0:
    // 0x1e13d0: 0x254a6688  addiu       $t2, $t2, 0x6688
    ctx->pc = 0x1e13d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 26248));
label_1e13d4:
    // 0x1e13d4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1e13d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1e13d8:
    // 0x1e13d8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1e13d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1e13dc:
    // 0x1e13dc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1e13dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e13e0:
    // 0x1e13e0: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1e13e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1e13e4:
    // 0x1e13e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e13e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e13e8:
    // 0x1e13e8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1e13e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1e13ec:
    // 0x1e13ec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1e13ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1e13f0:
    // 0x1e13f0: 0x40f809  jalr        $v0
label_1e13f4:
    if (ctx->pc == 0x1E13F4u) {
        ctx->pc = 0x1E13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13F0u;
        // 0x1e13f4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E13F8u;
        goto label_1e13f8;
    }
    ctx->pc = 0x1E13F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E13F8u);
        ctx->pc = 0x1E13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13F0u;
        // 0x1e13f4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E13F0u, 0x1E13F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E13F8u;
label_1e13f8:
    // 0x1e13f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e13f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e13fc:
    // 0x1e13fc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1e13fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1e1400:
    // 0x1e1400: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1e1400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_1e1404:
    // 0x1e1404: 0x26050094  addiu       $a1, $s0, 0x94
    ctx->pc = 0x1e1404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_1e1408:
    // 0x1e1408: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x1e1408u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_1e140c:
    // 0x1e140c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e140cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1410:
    // 0x1e1410: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1e1410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1e1414:
    // 0x1e1414: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1418:
    // 0x1e1418: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1e1418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e141c:
    // 0x1e141c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1e141cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1e1420:
    // 0x1e1420: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e1420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e1424:
    // 0x1e1424: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x1e1424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_1e1428:
    // 0x1e1428: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1e1428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e142c:
    // 0x1e142c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e142cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e1430:
    // 0x1e1430: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x1e1430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_1e1434:
    // 0x1e1434: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1e1434u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_1e1438:
    // 0x1e1438: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1e1438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_1e143c:
    // 0x1e143c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1e143cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_1e1440:
    // 0x1e1440: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x1e1440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
label_1e1444:
    // 0x1e1444: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1e1444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_1e1448:
    // 0x1e1448: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e1448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e144c:
    // 0x1e144c: 0x3e00008  jr          $ra
label_1e1450:
    if (ctx->pc == 0x1E1450u) {
        ctx->pc = 0x1E1450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E144Cu;
        // 0x1e1450: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1454u;
        goto label_1e1454;
    }
    ctx->pc = 0x1E144Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E144Cu;
        // 0x1e1450: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E144Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1454u;
label_1e1454:
    // 0x1e1454: 0x0  nop
    ctx->pc = 0x1e1454u;
    // NOP
    ctx->pc = 0x1e1458u;
}
