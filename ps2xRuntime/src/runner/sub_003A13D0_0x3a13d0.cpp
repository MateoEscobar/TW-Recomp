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

// Function: sub_003A13D0
// Address: 0x3a13d0 - 0x3a14e8
void sub_003A13D0_0x3a13d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A13D0_0x3a13d0");
#endif

    switch (ctx->pc) {
        case 0x3a13d0u: goto label_3a13d0;
        case 0x3a13d4u: goto label_3a13d4;
        case 0x3a13d8u: goto label_3a13d8;
        case 0x3a13dcu: goto label_3a13dc;
        case 0x3a13e0u: goto label_3a13e0;
        case 0x3a13e4u: goto label_3a13e4;
        case 0x3a13e8u: goto label_3a13e8;
        case 0x3a13ecu: goto label_3a13ec;
        case 0x3a13f0u: goto label_3a13f0;
        case 0x3a13f4u: goto label_3a13f4;
        case 0x3a13f8u: goto label_3a13f8;
        case 0x3a13fcu: goto label_3a13fc;
        case 0x3a1400u: goto label_3a1400;
        case 0x3a1404u: goto label_3a1404;
        case 0x3a1408u: goto label_3a1408;
        case 0x3a140cu: goto label_3a140c;
        case 0x3a1410u: goto label_3a1410;
        case 0x3a1414u: goto label_3a1414;
        case 0x3a1418u: goto label_3a1418;
        case 0x3a141cu: goto label_3a141c;
        case 0x3a1420u: goto label_3a1420;
        case 0x3a1424u: goto label_3a1424;
        case 0x3a1428u: goto label_3a1428;
        case 0x3a142cu: goto label_3a142c;
        case 0x3a1430u: goto label_3a1430;
        case 0x3a1434u: goto label_3a1434;
        case 0x3a1438u: goto label_3a1438;
        case 0x3a143cu: goto label_3a143c;
        case 0x3a1440u: goto label_3a1440;
        case 0x3a1444u: goto label_3a1444;
        case 0x3a1448u: goto label_3a1448;
        case 0x3a144cu: goto label_3a144c;
        case 0x3a1450u: goto label_3a1450;
        case 0x3a1454u: goto label_3a1454;
        case 0x3a1458u: goto label_3a1458;
        case 0x3a145cu: goto label_3a145c;
        case 0x3a1460u: goto label_3a1460;
        case 0x3a1464u: goto label_3a1464;
        case 0x3a1468u: goto label_3a1468;
        case 0x3a146cu: goto label_3a146c;
        case 0x3a1470u: goto label_3a1470;
        case 0x3a1474u: goto label_3a1474;
        case 0x3a1478u: goto label_3a1478;
        case 0x3a147cu: goto label_3a147c;
        case 0x3a1480u: goto label_3a1480;
        case 0x3a1484u: goto label_3a1484;
        case 0x3a1488u: goto label_3a1488;
        case 0x3a148cu: goto label_3a148c;
        case 0x3a1490u: goto label_3a1490;
        case 0x3a1494u: goto label_3a1494;
        case 0x3a1498u: goto label_3a1498;
        case 0x3a149cu: goto label_3a149c;
        case 0x3a14a0u: goto label_3a14a0;
        case 0x3a14a4u: goto label_3a14a4;
        case 0x3a14a8u: goto label_3a14a8;
        case 0x3a14acu: goto label_3a14ac;
        case 0x3a14b0u: goto label_3a14b0;
        case 0x3a14b4u: goto label_3a14b4;
        case 0x3a14b8u: goto label_3a14b8;
        case 0x3a14bcu: goto label_3a14bc;
        case 0x3a14c0u: goto label_3a14c0;
        case 0x3a14c4u: goto label_3a14c4;
        case 0x3a14c8u: goto label_3a14c8;
        case 0x3a14ccu: goto label_3a14cc;
        case 0x3a14d0u: goto label_3a14d0;
        case 0x3a14d4u: goto label_3a14d4;
        case 0x3a14d8u: goto label_3a14d8;
        case 0x3a14dcu: goto label_3a14dc;
        case 0x3a14e0u: goto label_3a14e0;
        case 0x3a14e4u: goto label_3a14e4;
        default: break;
    }

    ctx->pc = 0x3a13d0u;

label_3a13d0:
    // 0x3a13d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3a13d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3a13d4:
    // 0x3a13d4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3a13d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3a13d8:
    // 0x3a13d8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3a13d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3a13dc:
    // 0x3a13dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a13dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a13e0:
    // 0x3a13e0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3a13e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3a13e4:
    // 0x3a13e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a13e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a13e8:
    // 0x3a13e8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3a13e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3a13ec:
    // 0x3a13ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3a13ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a13f0:
    // 0x3a13f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a13f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3a13f4:
    // 0x3a13f4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3a13f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3a13f8:
    // 0x3a13f8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3a13f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3a13fc:
    // 0x3a13fc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x3a13fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3a1400:
    // 0x3a1400: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3a1400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_3a1404:
    // 0x3a1404: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x3a1404u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3a1408:
    // 0x3a1408: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x3a1408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_3a140c:
    // 0x3a140c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x3a140cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3a1410:
    // 0x3a1410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a1410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a1414:
    // 0x3a1414: 0xc0579d2  jal         func_15E748
label_3a1418:
    if (ctx->pc == 0x3A1418u) {
        ctx->pc = 0x3A1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1414u;
        // 0x3a1418: 0x160b82d  daddu       $s7, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A141Cu;
        goto label_3a141c;
    }
    ctx->pc = 0x3A1414u;
    SET_GPR_U32(ctx, 31, 0x3A141Cu);
    ctx->pc = 0x3A1418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1414u;
    // 0x3a1418: 0x160b82d  daddu       $s7, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x3A1414u, 0x3A141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A141Cu;
label_3a141c:
    // 0x3a141c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3a141cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3a1420:
    // 0x3a1420: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_3a1424:
    if (ctx->pc == 0x3A1424u) {
        ctx->pc = 0x3A1424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1420u;
        // 0x3a1424: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1428u;
        goto label_3a1428;
    }
    ctx->pc = 0x3A1420u;
    {
        const bool branch_taken_0x3a1420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a1420) {
            ctx->pc = 0x3A1424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1420u;
            // 0x3a1424: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1434u;
            goto label_3a1434;
        }
    }
    ctx->pc = 0x3A1428u;
label_3a1428:
    // 0x3a1428: 0xc057994  jal         func_15E650
label_3a142c:
    if (ctx->pc == 0x3A142Cu) {
        ctx->pc = 0x3A1430u;
        goto label_3a1430;
    }
    ctx->pc = 0x3A1428u;
    SET_GPR_U32(ctx, 31, 0x3A1430u);
    ctx->pc = 0x15E650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E650u, 0x3A1428u, 0x3A1430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1430u;
label_3a1430:
    // 0x3a1430: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a1430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a1434:
    // 0x3a1434: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3a1434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3a1438:
    // 0x3a1438: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3a1438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3a143c:
    // 0x3a143c: 0x40f809  jalr        $v0
label_3a1440:
    if (ctx->pc == 0x3A1440u) {
        ctx->pc = 0x3A1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A143Cu;
        // 0x3a1440: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1444u;
        goto label_3a1444;
    }
    ctx->pc = 0x3A143Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1444u);
        ctx->pc = 0x3A1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A143Cu;
        // 0x3a1440: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A143Cu, 0x3A1444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1444u;
label_3a1444:
    // 0x3a1444: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a1444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a1448:
    // 0x3a1448: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a1448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a144c:
    // 0x3a144c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a1450:
    // 0x3a1450: 0x84440130  lh          $a0, 0x130($v0)
    ctx->pc = 0x3a1450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
label_3a1454:
    // 0x3a1454: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x3a1454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_3a1458:
    // 0x3a1458: 0x60f809  jalr        $v1
label_3a145c:
    if (ctx->pc == 0x3A145Cu) {
        ctx->pc = 0x3A145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1458u;
        // 0x3a145c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1460u;
        goto label_3a1460;
    }
    ctx->pc = 0x3A1458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A1460u);
        ctx->pc = 0x3A145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1458u;
        // 0x3a145c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1458u, 0x3A1460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1460u;
label_3a1460:
    // 0x3a1460: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a1460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3a1464:
    // 0x3a1464: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a1464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a1468:
    // 0x3a1468: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x3a1468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_3a146c:
    // 0x3a146c: 0xc0e8cbc  jal         func_3A32F0
label_3a1470:
    if (ctx->pc == 0x3A1470u) {
        ctx->pc = 0x3A1470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A146Cu;
        // 0x3a1470: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1474u;
        goto label_3a1474;
    }
    ctx->pc = 0x3A146Cu;
    SET_GPR_U32(ctx, 31, 0x3A1474u);
    ctx->pc = 0x3A1470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A146Cu;
    // 0x3a1470: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3A146Cu, 0x3A1474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1474u;
label_3a1474:
    // 0x3a1474: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3a1474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a1478:
    // 0x3a1478: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3a1478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3a147c:
    // 0x3a147c: 0xae12009c  sw          $s2, 0x9C($s0)
    ctx->pc = 0x3a147cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 18));
label_3a1480:
    // 0x3a1480: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3a1480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3a1484:
    // 0x3a1484: 0xa21300eb  sb          $s3, 0xEB($s0)
    ctx->pc = 0x3a1484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 235), (uint8_t)GPR_U32(ctx, 19));
label_3a1488:
    // 0x3a1488: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a1488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3a148c:
    // 0x3a148c: 0xa21400ed  sb          $s4, 0xED($s0)
    ctx->pc = 0x3a148cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 237), (uint8_t)GPR_U32(ctx, 20));
label_3a1490:
    // 0x3a1490: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a1490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1494:
    // 0x3a1494: 0xa21500e5  sb          $s5, 0xE5($s0)
    ctx->pc = 0x3a1494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 229), (uint8_t)GPR_U32(ctx, 21));
label_3a1498:
    // 0x3a1498: 0x24849570  addiu       $a0, $a0, -0x6A90
    ctx->pc = 0x3a1498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
label_3a149c:
    // 0x3a149c: 0xa21600ef  sb          $s6, 0xEF($s0)
    ctx->pc = 0x3a149cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 239), (uint8_t)GPR_U32(ctx, 22));
label_3a14a0:
    // 0x3a14a0: 0xa21700e7  sb          $s7, 0xE7($s0)
    ctx->pc = 0x3a14a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 231), (uint8_t)GPR_U32(ctx, 23));
label_3a14a4:
    // 0x3a14a4: 0xae1100fc  sw          $s1, 0xFC($s0)
    ctx->pc = 0x3a14a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 17));
label_3a14a8:
    // 0x3a14a8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x3a14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_3a14ac:
    // 0x3a14ac: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3a14acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3a14b0:
    // 0x3a14b0: 0xc072b4e  jal         func_1CAD38
label_3a14b4:
    if (ctx->pc == 0x3A14B4u) {
        ctx->pc = 0x3A14B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14B0u;
        // 0x3a14b4: 0xa20200e8  sb          $v0, 0xE8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 232), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A14B8u;
        goto label_3a14b8;
    }
    ctx->pc = 0x3A14B0u;
    SET_GPR_U32(ctx, 31, 0x3A14B8u);
    ctx->pc = 0x3A14B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A14B0u;
    // 0x3a14b4: 0xa20200e8  sb          $v0, 0xE8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 232), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD38u, 0x3A14B0u, 0x3A14B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A14B8u;
label_3a14b8:
    // 0x3a14b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a14b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a14bc:
    // 0x3a14bc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3a14bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a14c0:
    // 0x3a14c0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3a14c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a14c4:
    // 0x3a14c4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3a14c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a14c8:
    // 0x3a14c8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3a14c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a14cc:
    // 0x3a14cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a14ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a14d0:
    // 0x3a14d0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3a14d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a14d4:
    // 0x3a14d4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3a14d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a14d8:
    // 0x3a14d8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3a14d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a14dc:
    // 0x3a14dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a14dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a14e0:
    // 0x3a14e0: 0x3e00008  jr          $ra
label_3a14e4:
    if (ctx->pc == 0x3A14E4u) {
        ctx->pc = 0x3A14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14E0u;
        // 0x3a14e4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A14E8u;
        goto label_fallthrough_0x3a14e0;
    }
    ctx->pc = 0x3A14E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14E0u;
        // 0x3a14e4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A14E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a14e0:
    ctx->pc = 0x3A14E8u;
}
