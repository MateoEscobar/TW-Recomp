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

// Function: sub_004E1380
// Address: 0x4e1380 - 0x4e1750
void sub_004E1380_0x4e1380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1380_0x4e1380");
#endif

    switch (ctx->pc) {
        case 0x4e1380u: goto label_4e1380;
        case 0x4e1384u: goto label_4e1384;
        case 0x4e1388u: goto label_4e1388;
        case 0x4e138cu: goto label_4e138c;
        case 0x4e1390u: goto label_4e1390;
        case 0x4e1394u: goto label_4e1394;
        case 0x4e1398u: goto label_4e1398;
        case 0x4e139cu: goto label_4e139c;
        case 0x4e13a0u: goto label_4e13a0;
        case 0x4e13a4u: goto label_4e13a4;
        case 0x4e13a8u: goto label_4e13a8;
        case 0x4e13acu: goto label_4e13ac;
        case 0x4e13b0u: goto label_4e13b0;
        case 0x4e13b4u: goto label_4e13b4;
        case 0x4e13b8u: goto label_4e13b8;
        case 0x4e13bcu: goto label_4e13bc;
        case 0x4e13c0u: goto label_4e13c0;
        case 0x4e13c4u: goto label_4e13c4;
        case 0x4e13c8u: goto label_4e13c8;
        case 0x4e13ccu: goto label_4e13cc;
        case 0x4e13d0u: goto label_4e13d0;
        case 0x4e13d4u: goto label_4e13d4;
        case 0x4e13d8u: goto label_4e13d8;
        case 0x4e13dcu: goto label_4e13dc;
        case 0x4e13e0u: goto label_4e13e0;
        case 0x4e13e4u: goto label_4e13e4;
        case 0x4e13e8u: goto label_4e13e8;
        case 0x4e13ecu: goto label_4e13ec;
        case 0x4e13f0u: goto label_4e13f0;
        case 0x4e13f4u: goto label_4e13f4;
        case 0x4e13f8u: goto label_4e13f8;
        case 0x4e13fcu: goto label_4e13fc;
        case 0x4e1400u: goto label_4e1400;
        case 0x4e1404u: goto label_4e1404;
        case 0x4e1408u: goto label_4e1408;
        case 0x4e140cu: goto label_4e140c;
        case 0x4e1410u: goto label_4e1410;
        case 0x4e1414u: goto label_4e1414;
        case 0x4e1418u: goto label_4e1418;
        case 0x4e141cu: goto label_4e141c;
        case 0x4e1420u: goto label_4e1420;
        case 0x4e1424u: goto label_4e1424;
        case 0x4e1428u: goto label_4e1428;
        case 0x4e142cu: goto label_4e142c;
        case 0x4e1430u: goto label_4e1430;
        case 0x4e1434u: goto label_4e1434;
        case 0x4e1438u: goto label_4e1438;
        case 0x4e143cu: goto label_4e143c;
        case 0x4e1440u: goto label_4e1440;
        case 0x4e1444u: goto label_4e1444;
        case 0x4e1448u: goto label_4e1448;
        case 0x4e144cu: goto label_4e144c;
        case 0x4e1450u: goto label_4e1450;
        case 0x4e1454u: goto label_4e1454;
        case 0x4e1458u: goto label_4e1458;
        case 0x4e145cu: goto label_4e145c;
        case 0x4e1460u: goto label_4e1460;
        case 0x4e1464u: goto label_4e1464;
        case 0x4e1468u: goto label_4e1468;
        case 0x4e146cu: goto label_4e146c;
        case 0x4e1470u: goto label_4e1470;
        case 0x4e1474u: goto label_4e1474;
        case 0x4e1478u: goto label_4e1478;
        case 0x4e147cu: goto label_4e147c;
        case 0x4e1480u: goto label_4e1480;
        case 0x4e1484u: goto label_4e1484;
        case 0x4e1488u: goto label_4e1488;
        case 0x4e148cu: goto label_4e148c;
        case 0x4e1490u: goto label_4e1490;
        case 0x4e1494u: goto label_4e1494;
        case 0x4e1498u: goto label_4e1498;
        case 0x4e149cu: goto label_4e149c;
        case 0x4e14a0u: goto label_4e14a0;
        case 0x4e14a4u: goto label_4e14a4;
        case 0x4e14a8u: goto label_4e14a8;
        case 0x4e14acu: goto label_4e14ac;
        case 0x4e14b0u: goto label_4e14b0;
        case 0x4e14b4u: goto label_4e14b4;
        case 0x4e14b8u: goto label_4e14b8;
        case 0x4e14bcu: goto label_4e14bc;
        case 0x4e14c0u: goto label_4e14c0;
        case 0x4e14c4u: goto label_4e14c4;
        case 0x4e14c8u: goto label_4e14c8;
        case 0x4e14ccu: goto label_4e14cc;
        case 0x4e14d0u: goto label_4e14d0;
        case 0x4e14d4u: goto label_4e14d4;
        case 0x4e14d8u: goto label_4e14d8;
        case 0x4e14dcu: goto label_4e14dc;
        case 0x4e14e0u: goto label_4e14e0;
        case 0x4e14e4u: goto label_4e14e4;
        case 0x4e14e8u: goto label_4e14e8;
        case 0x4e14ecu: goto label_4e14ec;
        case 0x4e14f0u: goto label_4e14f0;
        case 0x4e14f4u: goto label_4e14f4;
        case 0x4e14f8u: goto label_4e14f8;
        case 0x4e14fcu: goto label_4e14fc;
        case 0x4e1500u: goto label_4e1500;
        case 0x4e1504u: goto label_4e1504;
        case 0x4e1508u: goto label_4e1508;
        case 0x4e150cu: goto label_4e150c;
        case 0x4e1510u: goto label_4e1510;
        case 0x4e1514u: goto label_4e1514;
        case 0x4e1518u: goto label_4e1518;
        case 0x4e151cu: goto label_4e151c;
        case 0x4e1520u: goto label_4e1520;
        case 0x4e1524u: goto label_4e1524;
        case 0x4e1528u: goto label_4e1528;
        case 0x4e152cu: goto label_4e152c;
        case 0x4e1530u: goto label_4e1530;
        case 0x4e1534u: goto label_4e1534;
        case 0x4e1538u: goto label_4e1538;
        case 0x4e153cu: goto label_4e153c;
        case 0x4e1540u: goto label_4e1540;
        case 0x4e1544u: goto label_4e1544;
        case 0x4e1548u: goto label_4e1548;
        case 0x4e154cu: goto label_4e154c;
        case 0x4e1550u: goto label_4e1550;
        case 0x4e1554u: goto label_4e1554;
        case 0x4e1558u: goto label_4e1558;
        case 0x4e155cu: goto label_4e155c;
        case 0x4e1560u: goto label_4e1560;
        case 0x4e1564u: goto label_4e1564;
        case 0x4e1568u: goto label_4e1568;
        case 0x4e156cu: goto label_4e156c;
        case 0x4e1570u: goto label_4e1570;
        case 0x4e1574u: goto label_4e1574;
        case 0x4e1578u: goto label_4e1578;
        case 0x4e157cu: goto label_4e157c;
        case 0x4e1580u: goto label_4e1580;
        case 0x4e1584u: goto label_4e1584;
        case 0x4e1588u: goto label_4e1588;
        case 0x4e158cu: goto label_4e158c;
        case 0x4e1590u: goto label_4e1590;
        case 0x4e1594u: goto label_4e1594;
        case 0x4e1598u: goto label_4e1598;
        case 0x4e159cu: goto label_4e159c;
        case 0x4e15a0u: goto label_4e15a0;
        case 0x4e15a4u: goto label_4e15a4;
        case 0x4e15a8u: goto label_4e15a8;
        case 0x4e15acu: goto label_4e15ac;
        case 0x4e15b0u: goto label_4e15b0;
        case 0x4e15b4u: goto label_4e15b4;
        case 0x4e15b8u: goto label_4e15b8;
        case 0x4e15bcu: goto label_4e15bc;
        case 0x4e15c0u: goto label_4e15c0;
        case 0x4e15c4u: goto label_4e15c4;
        case 0x4e15c8u: goto label_4e15c8;
        case 0x4e15ccu: goto label_4e15cc;
        case 0x4e15d0u: goto label_4e15d0;
        case 0x4e15d4u: goto label_4e15d4;
        case 0x4e15d8u: goto label_4e15d8;
        case 0x4e15dcu: goto label_4e15dc;
        case 0x4e15e0u: goto label_4e15e0;
        case 0x4e15e4u: goto label_4e15e4;
        case 0x4e15e8u: goto label_4e15e8;
        case 0x4e15ecu: goto label_4e15ec;
        case 0x4e15f0u: goto label_4e15f0;
        case 0x4e15f4u: goto label_4e15f4;
        case 0x4e15f8u: goto label_4e15f8;
        case 0x4e15fcu: goto label_4e15fc;
        case 0x4e1600u: goto label_4e1600;
        case 0x4e1604u: goto label_4e1604;
        case 0x4e1608u: goto label_4e1608;
        case 0x4e160cu: goto label_4e160c;
        case 0x4e1610u: goto label_4e1610;
        case 0x4e1614u: goto label_4e1614;
        case 0x4e1618u: goto label_4e1618;
        case 0x4e161cu: goto label_4e161c;
        case 0x4e1620u: goto label_4e1620;
        case 0x4e1624u: goto label_4e1624;
        case 0x4e1628u: goto label_4e1628;
        case 0x4e162cu: goto label_4e162c;
        case 0x4e1630u: goto label_4e1630;
        case 0x4e1634u: goto label_4e1634;
        case 0x4e1638u: goto label_4e1638;
        case 0x4e163cu: goto label_4e163c;
        case 0x4e1640u: goto label_4e1640;
        case 0x4e1644u: goto label_4e1644;
        case 0x4e1648u: goto label_4e1648;
        case 0x4e164cu: goto label_4e164c;
        case 0x4e1650u: goto label_4e1650;
        case 0x4e1654u: goto label_4e1654;
        case 0x4e1658u: goto label_4e1658;
        case 0x4e165cu: goto label_4e165c;
        case 0x4e1660u: goto label_4e1660;
        case 0x4e1664u: goto label_4e1664;
        case 0x4e1668u: goto label_4e1668;
        case 0x4e166cu: goto label_4e166c;
        case 0x4e1670u: goto label_4e1670;
        case 0x4e1674u: goto label_4e1674;
        case 0x4e1678u: goto label_4e1678;
        case 0x4e167cu: goto label_4e167c;
        case 0x4e1680u: goto label_4e1680;
        case 0x4e1684u: goto label_4e1684;
        case 0x4e1688u: goto label_4e1688;
        case 0x4e168cu: goto label_4e168c;
        case 0x4e1690u: goto label_4e1690;
        case 0x4e1694u: goto label_4e1694;
        case 0x4e1698u: goto label_4e1698;
        case 0x4e169cu: goto label_4e169c;
        case 0x4e16a0u: goto label_4e16a0;
        case 0x4e16a4u: goto label_4e16a4;
        case 0x4e16a8u: goto label_4e16a8;
        case 0x4e16acu: goto label_4e16ac;
        case 0x4e16b0u: goto label_4e16b0;
        case 0x4e16b4u: goto label_4e16b4;
        case 0x4e16b8u: goto label_4e16b8;
        case 0x4e16bcu: goto label_4e16bc;
        case 0x4e16c0u: goto label_4e16c0;
        case 0x4e16c4u: goto label_4e16c4;
        case 0x4e16c8u: goto label_4e16c8;
        case 0x4e16ccu: goto label_4e16cc;
        case 0x4e16d0u: goto label_4e16d0;
        case 0x4e16d4u: goto label_4e16d4;
        case 0x4e16d8u: goto label_4e16d8;
        case 0x4e16dcu: goto label_4e16dc;
        case 0x4e16e0u: goto label_4e16e0;
        case 0x4e16e4u: goto label_4e16e4;
        case 0x4e16e8u: goto label_4e16e8;
        case 0x4e16ecu: goto label_4e16ec;
        case 0x4e16f0u: goto label_4e16f0;
        case 0x4e16f4u: goto label_4e16f4;
        case 0x4e16f8u: goto label_4e16f8;
        case 0x4e16fcu: goto label_4e16fc;
        case 0x4e1700u: goto label_4e1700;
        case 0x4e1704u: goto label_4e1704;
        case 0x4e1708u: goto label_4e1708;
        case 0x4e170cu: goto label_4e170c;
        case 0x4e1710u: goto label_4e1710;
        case 0x4e1714u: goto label_4e1714;
        case 0x4e1718u: goto label_4e1718;
        case 0x4e171cu: goto label_4e171c;
        case 0x4e1720u: goto label_4e1720;
        case 0x4e1724u: goto label_4e1724;
        case 0x4e1728u: goto label_4e1728;
        case 0x4e172cu: goto label_4e172c;
        case 0x4e1730u: goto label_4e1730;
        case 0x4e1734u: goto label_4e1734;
        case 0x4e1738u: goto label_4e1738;
        case 0x4e173cu: goto label_4e173c;
        case 0x4e1740u: goto label_4e1740;
        case 0x4e1744u: goto label_4e1744;
        case 0x4e1748u: goto label_4e1748;
        case 0x4e174cu: goto label_4e174c;
        default: break;
    }

    ctx->pc = 0x4e1380u;

label_4e1380:
    // 0x4e1380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e1380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e1384:
    // 0x4e1384: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e1384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e1388:
    // 0x4e1388: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e1388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e138c:
    // 0x4e138c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4e138cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e1390:
    // 0x4e1390: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e1390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e1394:
    // 0x4e1394: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4e1394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e1398:
    // 0x4e1398: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e1398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e139c:
    // 0x4e139c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e139cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e13a0:
    // 0x4e13a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e13a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e13a4:
    // 0x4e13a4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e13a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e13a8:
    // 0x4e13a8: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_4e13ac:
    if (ctx->pc == 0x4E13ACu) {
        ctx->pc = 0x4E13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E13A8u;
        // 0x4e13ac: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E13B0u;
        goto label_4e13b0;
    }
    ctx->pc = 0x4E13A8u;
    {
        const bool branch_taken_0x4e13a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E13A8u;
        // 0x4e13ac: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e13a8) {
            ctx->pc = 0x4E13CCu;
            goto label_4e13cc;
        }
    }
    ctx->pc = 0x4E13B0u;
label_4e13b0:
    // 0x4e13b0: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_4e13b4:
    if (ctx->pc == 0x4E13B4u) {
        ctx->pc = 0x4E13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E13B0u;
        // 0x4e13b4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E13B8u;
        goto label_4e13b8;
    }
    ctx->pc = 0x4E13B0u;
    {
        const bool branch_taken_0x4e13b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E13B0u;
        // 0x4e13b4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e13b0) {
            ctx->pc = 0x4E13D0u;
            goto label_4e13d0;
        }
    }
    ctx->pc = 0x4E13B8u;
label_4e13b8:
    // 0x4e13b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e13b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e13bc:
    // 0x4e13bc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4e13bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4e13c0:
    // 0x4e13c0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e13c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e13c4:
    // 0x4e13c4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_4e13c8:
    if (ctx->pc == 0x4E13C8u) {
        ctx->pc = 0x4E13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E13C4u;
        // 0x4e13c8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E13CCu;
        goto label_4e13cc;
    }
    ctx->pc = 0x4E13C4u;
    {
        const bool branch_taken_0x4e13c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E13C4u;
        // 0x4e13c8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e13c4) {
            ctx->pc = 0x4E1460u;
            goto label_4e1460;
        }
    }
    ctx->pc = 0x4E13CCu;
label_4e13cc:
    // 0x4e13cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e13ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e13d0:
    // 0x4e13d0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e13d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e13d4:
    // 0x4e13d4: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e13d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e13d8:
    // 0x4e13d8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e13d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e13dc:
    // 0x4e13dc: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e13dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e13e0:
    // 0x4e13e0: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4e13e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4e13e4:
    // 0x4e13e4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e13e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e13e8:
    // 0x4e13e8: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4e13e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4e13ec:
    // 0x4e13ec: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4e13ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4e13f0:
    // 0x4e13f0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e13f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e13f4:
    // 0x4e13f4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e13f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e13f8:
    // 0x4e13f8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e13f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e13fc:
    // 0x4e13fc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e1400:
    // 0x4e1400: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e1400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e1404:
    // 0x4e1404: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e1404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e1408:
    // 0x4e1408: 0x40f809  jalr        $v0
label_4e140c:
    if (ctx->pc == 0x4E140Cu) {
        ctx->pc = 0x4E140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1408u;
        // 0x4e140c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1410u;
        goto label_4e1410;
    }
    ctx->pc = 0x4E1408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E1410u);
        ctx->pc = 0x4E140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1408u;
        // 0x4e140c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1408u, 0x4E1410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E1410u;
label_4e1410:
    // 0x4e1410: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e1410u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e1414:
    // 0x4e1414: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e1414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e1418:
    // 0x4e1418: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e141c:
    if (ctx->pc == 0x4E141Cu) {
        ctx->pc = 0x4E141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1418u;
        // 0x4e141c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1420u;
        goto label_4e1420;
    }
    ctx->pc = 0x4E1418u;
    {
        const bool branch_taken_0x4e1418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1418u;
        // 0x4e141c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1418) {
            ctx->pc = 0x4E1430u;
            goto label_4e1430;
        }
    }
    ctx->pc = 0x4E1420u;
label_4e1420:
    // 0x4e1420: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e1420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e1424:
    // 0x4e1424: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e1424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e1428:
    // 0x4e1428: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e1428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e142c:
    // 0x4e142c: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e142cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e1430:
    // 0x4e1430: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x4e1430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_4e1434:
    // 0x4e1434: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e1434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e1438:
    // 0x4e1438: 0x56030005  bnel        $s0, $v1, . + 4 + (0x5 << 2)
label_4e143c:
    if (ctx->pc == 0x4E143Cu) {
        ctx->pc = 0x4E143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1438u;
        // 0x4e143c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1440u;
        goto label_4e1440;
    }
    ctx->pc = 0x4E1438u;
    {
        const bool branch_taken_0x4e1438 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e1438) {
            ctx->pc = 0x4E143Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1438u;
            // 0x4e143c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1450u;
            goto label_4e1450;
        }
    }
    ctx->pc = 0x4E1440u;
label_4e1440:
    // 0x4e1440: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x4e1440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
label_4e1444:
    // 0x4e1444: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e1444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e1448:
    // 0x4e1448: 0x10000022  b           . + 4 + (0x22 << 2)
label_4e144c:
    if (ctx->pc == 0x4E144Cu) {
        ctx->pc = 0x4E144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1448u;
        // 0x4e144c: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1450u;
        goto label_4e1450;
    }
    ctx->pc = 0x4E1448u;
    {
        const bool branch_taken_0x4e1448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1448u;
        // 0x4e144c: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1448) {
            ctx->pc = 0x4E14D4u;
            goto label_4e14d4;
        }
    }
    ctx->pc = 0x4E1450u;
label_4e1450:
    // 0x4e1450: 0x52020020  beql        $s0, $v0, . + 4 + (0x20 << 2)
label_4e1454:
    if (ctx->pc == 0x4E1454u) {
        ctx->pc = 0x4E1454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1450u;
        // 0x4e1454: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1458u;
        goto label_4e1458;
    }
    ctx->pc = 0x4E1450u;
    {
        const bool branch_taken_0x4e1450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e1450) {
            ctx->pc = 0x4E1454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1450u;
            // 0x4e1454: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E14D4u;
            goto label_4e14d4;
        }
    }
    ctx->pc = 0x4E1458u;
label_4e1458:
    // 0x4e1458: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4e145c:
    if (ctx->pc == 0x4E145Cu) {
        ctx->pc = 0x4E145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1458u;
        // 0x4e145c: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1460u;
        goto label_4e1460;
    }
    ctx->pc = 0x4E1458u;
    {
        const bool branch_taken_0x4e1458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1458u;
        // 0x4e145c: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1458) {
            ctx->pc = 0x4E14D8u;
            goto label_4e14d8;
        }
    }
    ctx->pc = 0x4E1460u;
label_4e1460:
    // 0x4e1460: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e1460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e1464:
    // 0x4e1464: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e1464u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e1468:
    // 0x4e1468: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e1468u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e146c:
    // 0x4e146c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e146cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e1470:
    // 0x4e1470: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4e1470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4e1474:
    // 0x4e1474: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e1474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e1478:
    // 0x4e1478: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4e1478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4e147c:
    // 0x4e147c: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4e147cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4e1480:
    // 0x4e1480: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e1480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e1484:
    // 0x4e1484: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e1484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e1488:
    // 0x4e1488: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e1488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e148c:
    // 0x4e148c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e1490:
    // 0x4e1490: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e1490u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e1494:
    // 0x4e1494: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e1494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e1498:
    // 0x4e1498: 0x40f809  jalr        $v0
label_4e149c:
    if (ctx->pc == 0x4E149Cu) {
        ctx->pc = 0x4E149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1498u;
        // 0x4e149c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E14A0u;
        goto label_4e14a0;
    }
    ctx->pc = 0x4E1498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E14A0u);
        ctx->pc = 0x4E149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1498u;
        // 0x4e149c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1498u, 0x4E14A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E14A0u;
label_4e14a0:
    // 0x4e14a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e14a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e14a4:
    // 0x4e14a4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e14a8:
    // 0x4e14a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e14ac:
    if (ctx->pc == 0x4E14ACu) {
        ctx->pc = 0x4E14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E14A8u;
        // 0x4e14ac: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E14B0u;
        goto label_4e14b0;
    }
    ctx->pc = 0x4E14A8u;
    {
        const bool branch_taken_0x4e14a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E14A8u;
        // 0x4e14ac: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e14a8) {
            ctx->pc = 0x4E14C0u;
            goto label_4e14c0;
        }
    }
    ctx->pc = 0x4E14B0u;
label_4e14b0:
    // 0x4e14b0: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e14b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e14b4:
    // 0x4e14b4: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e14b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e14b8:
    // 0x4e14b8: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e14b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e14bc:
    // 0x4e14bc: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e14bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e14c0:
    // 0x4e14c0: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x4e14c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
label_4e14c4:
    // 0x4e14c4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e14c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e14c8:
    // 0x4e14c8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e14c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e14cc:
    // 0x4e14cc: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
label_4e14d0:
    if (ctx->pc == 0x4E14D0u) {
        ctx->pc = 0x4E14D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E14CCu;
        // 0x4e14d0: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E14D4u;
        goto label_4e14d4;
    }
    ctx->pc = 0x4E14CCu;
    {
        const bool branch_taken_0x4e14cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e14cc) {
            ctx->pc = 0x4E14D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E14CCu;
            // 0x4e14d0: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E14D4u;
            goto label_4e14d4;
        }
    }
    ctx->pc = 0x4E14D4u;
label_4e14d4:
    // 0x4e14d4: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x4e14d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
label_4e14d8:
    // 0x4e14d8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e14d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e14dc:
    // 0x4e14dc: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x4e14dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_4e14e0:
    // 0x4e14e0: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x4e14e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_4e14e4:
    // 0x4e14e4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e14e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e14e8:
    // 0x4e14e8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4e14e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4e14ec:
    // 0x4e14ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e14ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e14f0:
    // 0x4e14f0: 0x10e20088  beq         $a3, $v0, . + 4 + (0x88 << 2)
label_4e14f4:
    if (ctx->pc == 0x4E14F4u) {
        ctx->pc = 0x4E14F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E14F0u;
        // 0x4e14f4: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E14F8u;
        goto label_4e14f8;
    }
    ctx->pc = 0x4E14F0u;
    {
        const bool branch_taken_0x4e14f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E14F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E14F0u;
        // 0x4e14f4: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e14f0) {
            ctx->pc = 0x4E1714u;
            goto label_4e1714;
        }
    }
    ctx->pc = 0x4E14F8u;
label_4e14f8:
    // 0x4e14f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e14f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e14fc:
    // 0x4e14fc: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
label_4e1500:
    if (ctx->pc == 0x4E1500u) {
        ctx->pc = 0x4E1500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E14FCu;
        // 0x4e1500: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1504u;
        goto label_4e1504;
    }
    ctx->pc = 0x4E14FCu;
    {
        const bool branch_taken_0x4e14fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e14fc) {
            ctx->pc = 0x4E1500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E14FCu;
            // 0x4e1500: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1718u;
            goto label_4e1718;
        }
    }
    ctx->pc = 0x4E1504u;
label_4e1504:
    // 0x4e1504: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4e1504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e1508:
    // 0x4e1508: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e1508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e150c:
    // 0x4e150c: 0x0  nop
    ctx->pc = 0x4e150cu;
    // NOP
label_4e1510:
    // 0x4e1510: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e1510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e1514:
    // 0x4e1514: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4e1514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4e1518:
    // 0x4e1518: 0x1464003a  bne         $v1, $a0, . + 4 + (0x3A << 2)
label_4e151c:
    if (ctx->pc == 0x4E151Cu) {
        ctx->pc = 0x4E1520u;
        goto label_4e1520;
    }
    ctx->pc = 0x4E1518u;
    {
        const bool branch_taken_0x4e1518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e1518) {
            ctx->pc = 0x4E1604u;
            goto label_4e1604;
        }
    }
    ctx->pc = 0x4E1520u;
label_4e1520:
    // 0x4e1520: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4e1520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e1524:
    // 0x4e1524: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4e1528:
    if (ctx->pc == 0x4E1528u) {
        ctx->pc = 0x4E1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1524u;
        // 0x4e1528: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E152Cu;
        goto label_4e152c;
    }
    ctx->pc = 0x4E1524u;
    {
        const bool branch_taken_0x4e1524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1524) {
            ctx->pc = 0x4E1528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1524u;
            // 0x4e1528: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1544u;
            goto label_4e1544;
        }
    }
    ctx->pc = 0x4E152Cu;
label_4e152c:
    // 0x4e152c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e1530:
    // 0x4e1530: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4e1534:
    if (ctx->pc == 0x4E1534u) {
        ctx->pc = 0x4E1534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1530u;
        // 0x4e1534: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1538u;
        goto label_4e1538;
    }
    ctx->pc = 0x4E1530u;
    {
        const bool branch_taken_0x4e1530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1530) {
            ctx->pc = 0x4E1534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1530u;
            // 0x4e1534: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1544u;
            goto label_4e1544;
        }
    }
    ctx->pc = 0x4E1538u;
label_4e1538:
    // 0x4e1538: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e1538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e153c:
    // 0x4e153c: 0x10000038  b           . + 4 + (0x38 << 2)
label_4e1540:
    if (ctx->pc == 0x4E1540u) {
        ctx->pc = 0x4E1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E153Cu;
        // 0x4e1540: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1544u;
        goto label_4e1544;
    }
    ctx->pc = 0x4E153Cu;
    {
        const bool branch_taken_0x4e153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E153Cu;
        // 0x4e1540: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e153c) {
            ctx->pc = 0x4E1620u;
            goto label_4e1620;
        }
    }
    ctx->pc = 0x4E1544u;
label_4e1544:
    // 0x4e1544: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4e1544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e1548:
    // 0x4e1548: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e154c:
    if (ctx->pc == 0x4E154Cu) {
        ctx->pc = 0x4E154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1548u;
        // 0x4e154c: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1550u;
        goto label_4e1550;
    }
    ctx->pc = 0x4E1548u;
    {
        const bool branch_taken_0x4e1548 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e1548) {
            ctx->pc = 0x4E154Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1548u;
            // 0x4e154c: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E15A0u;
            goto label_4e15a0;
        }
    }
    ctx->pc = 0x4E1550u;
label_4e1550:
    // 0x4e1550: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e1550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e1554:
    // 0x4e1554: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e1554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e1558:
    // 0x4e1558: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x4e1558u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_4e155c:
    // 0x4e155c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e1560:
    // 0x4e1560: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e1564:
    if (ctx->pc == 0x4E1564u) {
        ctx->pc = 0x4E1564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1560u;
        // 0x4e1564: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1568u;
        goto label_4e1568;
    }
    ctx->pc = 0x4E1560u;
    {
        const bool branch_taken_0x4e1560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1560) {
            ctx->pc = 0x4E1564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1560u;
            // 0x4e1564: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1568u;
            goto label_4e1568;
        }
    }
    ctx->pc = 0x4E1568u;
label_4e1568:
    // 0x4e1568: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e1568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e156c:
    // 0x4e156c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e156cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e1570:
    // 0x4e1570: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e1570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e1574:
    // 0x4e1574: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e1578:
    if (ctx->pc == 0x4E1578u) {
        ctx->pc = 0x4E1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1574u;
        // 0x4e1578: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E157Cu;
        goto label_4e157c;
    }
    ctx->pc = 0x4E1574u;
    {
        const bool branch_taken_0x4e1574 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e1574) {
            ctx->pc = 0x4E1578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1574u;
            // 0x4e1578: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1584u;
            goto label_4e1584;
        }
    }
    ctx->pc = 0x4E157Cu;
label_4e157c:
    // 0x4e157c: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e1580:
    if (ctx->pc == 0x4E1580u) {
        ctx->pc = 0x4E1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E157Cu;
        // 0x4e1580: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1584u;
        goto label_4e1584;
    }
    ctx->pc = 0x4E157Cu;
    {
        const bool branch_taken_0x4e157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E157Cu;
        // 0x4e1580: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e157c) {
            ctx->pc = 0x4E1594u;
            goto label_4e1594;
        }
    }
    ctx->pc = 0x4E1584u;
label_4e1584:
    // 0x4e1584: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e1584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e1588:
    // 0x4e1588: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e158c:
    if (ctx->pc == 0x4E158Cu) {
        ctx->pc = 0x4E158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1588u;
        // 0x4e158c: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1590u;
        goto label_4e1590;
    }
    ctx->pc = 0x4E1588u;
    {
        const bool branch_taken_0x4e1588 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e1588) {
            ctx->pc = 0x4E158Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1588u;
            // 0x4e158c: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1594u;
            goto label_4e1594;
        }
    }
    ctx->pc = 0x4E1590u;
label_4e1590:
    // 0x4e1590: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4e1590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_4e1594:
    // 0x4e1594: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x4e1594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_4e1598:
    // 0x4e1598: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e1598u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e159c:
    // 0x4e159c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e15a0:
    // 0x4e15a0: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e15a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e15a4:
    // 0x4e15a4: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e15a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e15a8:
    // 0x4e15a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e15ac:
    // 0x4e15ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e15acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e15b0:
    // 0x4e15b0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e15b4:
    // 0x4e15b4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e15b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e15b8:
    // 0x4e15b8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4e15b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e15bc:
    // 0x4e15bc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e15c0:
    // 0x4e15c0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4e15c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4e15c4:
    // 0x4e15c4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e15c8:
    // 0x4e15c8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e15cc:
    if (ctx->pc == 0x4E15CCu) {
        ctx->pc = 0x4E15CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E15C8u;
        // 0x4e15cc: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E15D0u;
        goto label_4e15d0;
    }
    ctx->pc = 0x4E15C8u;
    {
        const bool branch_taken_0x4e15c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e15c8) {
            ctx->pc = 0x4E15CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E15C8u;
            // 0x4e15cc: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E15D0u;
            goto label_4e15d0;
        }
    }
    ctx->pc = 0x4E15D0u;
label_4e15d0:
    // 0x4e15d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e15d4:
    // 0x4e15d4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e15d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e15d8:
    // 0x4e15d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e15d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e15dc:
    // 0x4e15dc: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e15e0:
    if (ctx->pc == 0x4E15E0u) {
        ctx->pc = 0x4E15E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E15DCu;
        // 0x4e15e0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E15E4u;
        goto label_4e15e4;
    }
    ctx->pc = 0x4E15DCu;
    {
        const bool branch_taken_0x4e15dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e15dc) {
            ctx->pc = 0x4E15E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E15DCu;
            // 0x4e15e0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E15ECu;
            goto label_4e15ec;
        }
    }
    ctx->pc = 0x4E15E4u;
label_4e15e4:
    // 0x4e15e4: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e15e8:
    if (ctx->pc == 0x4E15E8u) {
        ctx->pc = 0x4E15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E15E4u;
        // 0x4e15e8: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E15ECu;
        goto label_4e15ec;
    }
    ctx->pc = 0x4E15E4u;
    {
        const bool branch_taken_0x4e15e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E15E4u;
        // 0x4e15e8: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e15e4) {
            ctx->pc = 0x4E15FCu;
            goto label_4e15fc;
        }
    }
    ctx->pc = 0x4E15ECu;
label_4e15ec:
    // 0x4e15ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e15f0:
    // 0x4e15f0: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e15f4:
    if (ctx->pc == 0x4E15F4u) {
        ctx->pc = 0x4E15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E15F0u;
        // 0x4e15f4: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E15F8u;
        goto label_4e15f8;
    }
    ctx->pc = 0x4E15F0u;
    {
        const bool branch_taken_0x4e15f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e15f0) {
            ctx->pc = 0x4E15F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E15F0u;
            // 0x4e15f4: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E15FCu;
            goto label_4e15fc;
        }
    }
    ctx->pc = 0x4E15F8u;
label_4e15f8:
    // 0x4e15f8: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x4e15f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_4e15fc:
    // 0x4e15fc: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e1600:
    if (ctx->pc == 0x4E1600u) {
        ctx->pc = 0x4E1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E15FCu;
        // 0x4e1600: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1604u;
        goto label_4e1604;
    }
    ctx->pc = 0x4E15FCu;
    {
        const bool branch_taken_0x4e15fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E15FCu;
        // 0x4e1600: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e15fc) {
            ctx->pc = 0x4E16F4u;
            goto label_4e16f4;
        }
    }
    ctx->pc = 0x4E1604u;
label_4e1604:
    // 0x4e1604: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_4e1608:
    if (ctx->pc == 0x4E1608u) {
        ctx->pc = 0x4E1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1604u;
        // 0x4e1608: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E160Cu;
        goto label_4e160c;
    }
    ctx->pc = 0x4E1604u;
    {
        const bool branch_taken_0x4e1604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1604) {
            ctx->pc = 0x4E1608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1604u;
            // 0x4e1608: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1638u;
            goto label_4e1638;
        }
    }
    ctx->pc = 0x4E160Cu;
label_4e160c:
    // 0x4e160c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4e160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e1610:
    // 0x4e1610: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4e1614:
    if (ctx->pc == 0x4E1614u) {
        ctx->pc = 0x4E1614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1610u;
        // 0x4e1614: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1618u;
        goto label_4e1618;
    }
    ctx->pc = 0x4E1610u;
    {
        const bool branch_taken_0x4e1610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1610) {
            ctx->pc = 0x4E1614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1610u;
            // 0x4e1614: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1638u;
            goto label_4e1638;
        }
    }
    ctx->pc = 0x4E1618u;
label_4e1618:
    // 0x4e1618: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x4e1618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_4e161c:
    // 0x4e161c: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e161cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e1620:
    // 0x4e1620: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e1620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e1624:
    // 0x4e1624: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e1624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e1628:
    // 0x4e1628: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4e1628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4e162c:
    // 0x4e162c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e1630:
    // 0x4e1630: 0x10000031  b           . + 4 + (0x31 << 2)
label_4e1634:
    if (ctx->pc == 0x4E1634u) {
        ctx->pc = 0x4E1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1630u;
        // 0x4e1634: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1638u;
        goto label_4e1638;
    }
    ctx->pc = 0x4E1630u;
    {
        const bool branch_taken_0x4e1630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1630u;
        // 0x4e1634: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1630) {
            ctx->pc = 0x4E16F8u;
            goto label_4e16f8;
        }
    }
    ctx->pc = 0x4E1638u;
label_4e1638:
    // 0x4e1638: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4e1638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e163c:
    // 0x4e163c: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e1640:
    if (ctx->pc == 0x4E1640u) {
        ctx->pc = 0x4E1640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E163Cu;
        // 0x4e1640: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1644u;
        goto label_4e1644;
    }
    ctx->pc = 0x4E163Cu;
    {
        const bool branch_taken_0x4e163c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e163c) {
            ctx->pc = 0x4E1640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E163Cu;
            // 0x4e1640: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1694u;
            goto label_4e1694;
        }
    }
    ctx->pc = 0x4E1644u;
label_4e1644:
    // 0x4e1644: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e1644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e1648:
    // 0x4e1648: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e1648u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e164c:
    // 0x4e164c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x4e164cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_4e1650:
    // 0x4e1650: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e1650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e1654:
    // 0x4e1654: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e1658:
    if (ctx->pc == 0x4E1658u) {
        ctx->pc = 0x4E1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1654u;
        // 0x4e1658: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E165Cu;
        goto label_4e165c;
    }
    ctx->pc = 0x4E1654u;
    {
        const bool branch_taken_0x4e1654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1654) {
            ctx->pc = 0x4E1658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1654u;
            // 0x4e1658: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E165Cu;
            goto label_4e165c;
        }
    }
    ctx->pc = 0x4E165Cu;
label_4e165c:
    // 0x4e165c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e165cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e1660:
    // 0x4e1660: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e1660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e1664:
    // 0x4e1664: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e1664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e1668:
    // 0x4e1668: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e166c:
    if (ctx->pc == 0x4E166Cu) {
        ctx->pc = 0x4E166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1668u;
        // 0x4e166c: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1670u;
        goto label_4e1670;
    }
    ctx->pc = 0x4E1668u;
    {
        const bool branch_taken_0x4e1668 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e1668) {
            ctx->pc = 0x4E166Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1668u;
            // 0x4e166c: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1678u;
            goto label_4e1678;
        }
    }
    ctx->pc = 0x4E1670u;
label_4e1670:
    // 0x4e1670: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e1674:
    if (ctx->pc == 0x4E1674u) {
        ctx->pc = 0x4E1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1670u;
        // 0x4e1674: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1678u;
        goto label_4e1678;
    }
    ctx->pc = 0x4E1670u;
    {
        const bool branch_taken_0x4e1670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1670u;
        // 0x4e1674: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1670) {
            ctx->pc = 0x4E1688u;
            goto label_4e1688;
        }
    }
    ctx->pc = 0x4E1678u;
label_4e1678:
    // 0x4e1678: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e1678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e167c:
    // 0x4e167c: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e1680:
    if (ctx->pc == 0x4E1680u) {
        ctx->pc = 0x4E1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E167Cu;
        // 0x4e1680: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1684u;
        goto label_4e1684;
    }
    ctx->pc = 0x4E167Cu;
    {
        const bool branch_taken_0x4e167c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e167c) {
            ctx->pc = 0x4E1680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E167Cu;
            // 0x4e1680: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1688u;
            goto label_4e1688;
        }
    }
    ctx->pc = 0x4E1684u;
label_4e1684:
    // 0x4e1684: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4e1684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_4e1688:
    // 0x4e1688: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x4e1688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_4e168c:
    // 0x4e168c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e168cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e1690:
    // 0x4e1690: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e1690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e1694:
    // 0x4e1694: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e1694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e1698:
    // 0x4e1698: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e1698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e169c:
    // 0x4e169c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e16a0:
    // 0x4e16a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e16a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e16a4:
    // 0x4e16a4: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e16a8:
    // 0x4e16a8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e16a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e16ac:
    // 0x4e16ac: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x4e16acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e16b0:
    // 0x4e16b0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e16b4:
    // 0x4e16b4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x4e16b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_4e16b8:
    // 0x4e16b8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e16b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e16bc:
    // 0x4e16bc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e16c0:
    if (ctx->pc == 0x4E16C0u) {
        ctx->pc = 0x4E16C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E16BCu;
        // 0x4e16c0: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E16C4u;
        goto label_4e16c4;
    }
    ctx->pc = 0x4E16BCu;
    {
        const bool branch_taken_0x4e16bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e16bc) {
            ctx->pc = 0x4E16C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E16BCu;
            // 0x4e16c0: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E16C4u;
            goto label_4e16c4;
        }
    }
    ctx->pc = 0x4E16C4u;
label_4e16c4:
    // 0x4e16c4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e16c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e16c8:
    // 0x4e16c8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e16c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e16cc:
    // 0x4e16cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e16ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e16d0:
    // 0x4e16d0: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e16d4:
    if (ctx->pc == 0x4E16D4u) {
        ctx->pc = 0x4E16D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E16D0u;
        // 0x4e16d4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E16D8u;
        goto label_4e16d8;
    }
    ctx->pc = 0x4E16D0u;
    {
        const bool branch_taken_0x4e16d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e16d0) {
            ctx->pc = 0x4E16D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E16D0u;
            // 0x4e16d4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E16E0u;
            goto label_4e16e0;
        }
    }
    ctx->pc = 0x4E16D8u;
label_4e16d8:
    // 0x4e16d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e16dc:
    if (ctx->pc == 0x4E16DCu) {
        ctx->pc = 0x4E16DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E16D8u;
        // 0x4e16dc: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E16E0u;
        goto label_4e16e0;
    }
    ctx->pc = 0x4E16D8u;
    {
        const bool branch_taken_0x4e16d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E16DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E16D8u;
        // 0x4e16dc: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e16d8) {
            ctx->pc = 0x4E16F0u;
            goto label_4e16f0;
        }
    }
    ctx->pc = 0x4E16E0u;
label_4e16e0:
    // 0x4e16e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e16e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e16e4:
    // 0x4e16e4: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e16e8:
    if (ctx->pc == 0x4E16E8u) {
        ctx->pc = 0x4E16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E16E4u;
        // 0x4e16e8: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E16ECu;
        goto label_4e16ec;
    }
    ctx->pc = 0x4E16E4u;
    {
        const bool branch_taken_0x4e16e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e16e4) {
            ctx->pc = 0x4E16E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E16E4u;
            // 0x4e16e8: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E16F0u;
            goto label_4e16f0;
        }
    }
    ctx->pc = 0x4E16ECu;
label_4e16ec:
    // 0x4e16ec: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x4e16ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_4e16f0:
    // 0x4e16f0: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4e16f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_4e16f4:
    // 0x4e16f4: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x4e16f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_4e16f8:
    // 0x4e16f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e16fc:
    // 0x4e16fc: 0x51020006  beql        $t0, $v0, . + 4 + (0x6 << 2)
label_4e1700:
    if (ctx->pc == 0x4E1700u) {
        ctx->pc = 0x4E1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E16FCu;
        // 0x4e1700: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1704u;
        goto label_4e1704;
    }
    ctx->pc = 0x4E16FCu;
    {
        const bool branch_taken_0x4e16fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e16fc) {
            ctx->pc = 0x4E1700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E16FCu;
            // 0x4e1700: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1718u;
            goto label_4e1718;
        }
    }
    ctx->pc = 0x4E1704u;
label_4e1704:
    // 0x4e1704: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e1704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e1708:
    // 0x4e1708: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4e1708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e170c:
    // 0x4e170c: 0x5060ff80  beql        $v1, $zero, . + 4 + (-0x80 << 2)
label_4e1710:
    if (ctx->pc == 0x4E1710u) {
        ctx->pc = 0x4E1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E170Cu;
        // 0x4e1710: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1714u;
        goto label_4e1714;
    }
    ctx->pc = 0x4E170Cu;
    {
        const bool branch_taken_0x4e170c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e170c) {
            ctx->pc = 0x4E1710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E170Cu;
            // 0x4e1710: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e1510;
        }
    }
    ctx->pc = 0x4E1714u;
label_4e1714:
    // 0x4e1714: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4e1714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e1718:
    // 0x4e1718: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e1718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e171c:
    // 0x4e171c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e171cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e1720:
    // 0x4e1720: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e1720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e1724:
    // 0x4e1724: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4e1724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4e1728:
    // 0x4e1728: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e1728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e172c:
    // 0x4e172c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4e172cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4e1730:
    // 0x4e1730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e1730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e1734:
    // 0x4e1734: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4e1734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4e1738:
    // 0x4e1738: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4e1738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4e173c:
    // 0x4e173c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e173cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_4e1740:
    // 0x4e1740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e1740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e1744:
    // 0x4e1744: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e1744u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1748:
    // 0x4e1748: 0x3e00008  jr          $ra
label_4e174c:
    if (ctx->pc == 0x4E174Cu) {
        ctx->pc = 0x4E174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1748u;
        // 0x4e174c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1750u;
        goto label_fallthrough_0x4e1748;
    }
    ctx->pc = 0x4E1748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1748u;
        // 0x4e174c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e1748:
    ctx->pc = 0x4E1750u;
}
