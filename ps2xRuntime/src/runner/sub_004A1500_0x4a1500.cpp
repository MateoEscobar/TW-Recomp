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

// Function: sub_004A1500
// Address: 0x4a1500 - 0x4a17c0
void sub_004A1500_0x4a1500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1500_0x4a1500");
#endif

    switch (ctx->pc) {
        case 0x4a1500u: goto label_4a1500;
        case 0x4a1504u: goto label_4a1504;
        case 0x4a1508u: goto label_4a1508;
        case 0x4a150cu: goto label_4a150c;
        case 0x4a1510u: goto label_4a1510;
        case 0x4a1514u: goto label_4a1514;
        case 0x4a1518u: goto label_4a1518;
        case 0x4a151cu: goto label_4a151c;
        case 0x4a1520u: goto label_4a1520;
        case 0x4a1524u: goto label_4a1524;
        case 0x4a1528u: goto label_4a1528;
        case 0x4a152cu: goto label_4a152c;
        case 0x4a1530u: goto label_4a1530;
        case 0x4a1534u: goto label_4a1534;
        case 0x4a1538u: goto label_4a1538;
        case 0x4a153cu: goto label_4a153c;
        case 0x4a1540u: goto label_4a1540;
        case 0x4a1544u: goto label_4a1544;
        case 0x4a1548u: goto label_4a1548;
        case 0x4a154cu: goto label_4a154c;
        case 0x4a1550u: goto label_4a1550;
        case 0x4a1554u: goto label_4a1554;
        case 0x4a1558u: goto label_4a1558;
        case 0x4a155cu: goto label_4a155c;
        case 0x4a1560u: goto label_4a1560;
        case 0x4a1564u: goto label_4a1564;
        case 0x4a1568u: goto label_4a1568;
        case 0x4a156cu: goto label_4a156c;
        case 0x4a1570u: goto label_4a1570;
        case 0x4a1574u: goto label_4a1574;
        case 0x4a1578u: goto label_4a1578;
        case 0x4a157cu: goto label_4a157c;
        case 0x4a1580u: goto label_4a1580;
        case 0x4a1584u: goto label_4a1584;
        case 0x4a1588u: goto label_4a1588;
        case 0x4a158cu: goto label_4a158c;
        case 0x4a1590u: goto label_4a1590;
        case 0x4a1594u: goto label_4a1594;
        case 0x4a1598u: goto label_4a1598;
        case 0x4a159cu: goto label_4a159c;
        case 0x4a15a0u: goto label_4a15a0;
        case 0x4a15a4u: goto label_4a15a4;
        case 0x4a15a8u: goto label_4a15a8;
        case 0x4a15acu: goto label_4a15ac;
        case 0x4a15b0u: goto label_4a15b0;
        case 0x4a15b4u: goto label_4a15b4;
        case 0x4a15b8u: goto label_4a15b8;
        case 0x4a15bcu: goto label_4a15bc;
        case 0x4a15c0u: goto label_4a15c0;
        case 0x4a15c4u: goto label_4a15c4;
        case 0x4a15c8u: goto label_4a15c8;
        case 0x4a15ccu: goto label_4a15cc;
        case 0x4a15d0u: goto label_4a15d0;
        case 0x4a15d4u: goto label_4a15d4;
        case 0x4a15d8u: goto label_4a15d8;
        case 0x4a15dcu: goto label_4a15dc;
        case 0x4a15e0u: goto label_4a15e0;
        case 0x4a15e4u: goto label_4a15e4;
        case 0x4a15e8u: goto label_4a15e8;
        case 0x4a15ecu: goto label_4a15ec;
        case 0x4a15f0u: goto label_4a15f0;
        case 0x4a15f4u: goto label_4a15f4;
        case 0x4a15f8u: goto label_4a15f8;
        case 0x4a15fcu: goto label_4a15fc;
        case 0x4a1600u: goto label_4a1600;
        case 0x4a1604u: goto label_4a1604;
        case 0x4a1608u: goto label_4a1608;
        case 0x4a160cu: goto label_4a160c;
        case 0x4a1610u: goto label_4a1610;
        case 0x4a1614u: goto label_4a1614;
        case 0x4a1618u: goto label_4a1618;
        case 0x4a161cu: goto label_4a161c;
        case 0x4a1620u: goto label_4a1620;
        case 0x4a1624u: goto label_4a1624;
        case 0x4a1628u: goto label_4a1628;
        case 0x4a162cu: goto label_4a162c;
        case 0x4a1630u: goto label_4a1630;
        case 0x4a1634u: goto label_4a1634;
        case 0x4a1638u: goto label_4a1638;
        case 0x4a163cu: goto label_4a163c;
        case 0x4a1640u: goto label_4a1640;
        case 0x4a1644u: goto label_4a1644;
        case 0x4a1648u: goto label_4a1648;
        case 0x4a164cu: goto label_4a164c;
        case 0x4a1650u: goto label_4a1650;
        case 0x4a1654u: goto label_4a1654;
        case 0x4a1658u: goto label_4a1658;
        case 0x4a165cu: goto label_4a165c;
        case 0x4a1660u: goto label_4a1660;
        case 0x4a1664u: goto label_4a1664;
        case 0x4a1668u: goto label_4a1668;
        case 0x4a166cu: goto label_4a166c;
        case 0x4a1670u: goto label_4a1670;
        case 0x4a1674u: goto label_4a1674;
        case 0x4a1678u: goto label_4a1678;
        case 0x4a167cu: goto label_4a167c;
        case 0x4a1680u: goto label_4a1680;
        case 0x4a1684u: goto label_4a1684;
        case 0x4a1688u: goto label_4a1688;
        case 0x4a168cu: goto label_4a168c;
        case 0x4a1690u: goto label_4a1690;
        case 0x4a1694u: goto label_4a1694;
        case 0x4a1698u: goto label_4a1698;
        case 0x4a169cu: goto label_4a169c;
        case 0x4a16a0u: goto label_4a16a0;
        case 0x4a16a4u: goto label_4a16a4;
        case 0x4a16a8u: goto label_4a16a8;
        case 0x4a16acu: goto label_4a16ac;
        case 0x4a16b0u: goto label_4a16b0;
        case 0x4a16b4u: goto label_4a16b4;
        case 0x4a16b8u: goto label_4a16b8;
        case 0x4a16bcu: goto label_4a16bc;
        case 0x4a16c0u: goto label_4a16c0;
        case 0x4a16c4u: goto label_4a16c4;
        case 0x4a16c8u: goto label_4a16c8;
        case 0x4a16ccu: goto label_4a16cc;
        case 0x4a16d0u: goto label_4a16d0;
        case 0x4a16d4u: goto label_4a16d4;
        case 0x4a16d8u: goto label_4a16d8;
        case 0x4a16dcu: goto label_4a16dc;
        case 0x4a16e0u: goto label_4a16e0;
        case 0x4a16e4u: goto label_4a16e4;
        case 0x4a16e8u: goto label_4a16e8;
        case 0x4a16ecu: goto label_4a16ec;
        case 0x4a16f0u: goto label_4a16f0;
        case 0x4a16f4u: goto label_4a16f4;
        case 0x4a16f8u: goto label_4a16f8;
        case 0x4a16fcu: goto label_4a16fc;
        case 0x4a1700u: goto label_4a1700;
        case 0x4a1704u: goto label_4a1704;
        case 0x4a1708u: goto label_4a1708;
        case 0x4a170cu: goto label_4a170c;
        case 0x4a1710u: goto label_4a1710;
        case 0x4a1714u: goto label_4a1714;
        case 0x4a1718u: goto label_4a1718;
        case 0x4a171cu: goto label_4a171c;
        case 0x4a1720u: goto label_4a1720;
        case 0x4a1724u: goto label_4a1724;
        case 0x4a1728u: goto label_4a1728;
        case 0x4a172cu: goto label_4a172c;
        case 0x4a1730u: goto label_4a1730;
        case 0x4a1734u: goto label_4a1734;
        case 0x4a1738u: goto label_4a1738;
        case 0x4a173cu: goto label_4a173c;
        case 0x4a1740u: goto label_4a1740;
        case 0x4a1744u: goto label_4a1744;
        case 0x4a1748u: goto label_4a1748;
        case 0x4a174cu: goto label_4a174c;
        case 0x4a1750u: goto label_4a1750;
        case 0x4a1754u: goto label_4a1754;
        case 0x4a1758u: goto label_4a1758;
        case 0x4a175cu: goto label_4a175c;
        case 0x4a1760u: goto label_4a1760;
        case 0x4a1764u: goto label_4a1764;
        case 0x4a1768u: goto label_4a1768;
        case 0x4a176cu: goto label_4a176c;
        case 0x4a1770u: goto label_4a1770;
        case 0x4a1774u: goto label_4a1774;
        case 0x4a1778u: goto label_4a1778;
        case 0x4a177cu: goto label_4a177c;
        case 0x4a1780u: goto label_4a1780;
        case 0x4a1784u: goto label_4a1784;
        case 0x4a1788u: goto label_4a1788;
        case 0x4a178cu: goto label_4a178c;
        case 0x4a1790u: goto label_4a1790;
        case 0x4a1794u: goto label_4a1794;
        case 0x4a1798u: goto label_4a1798;
        case 0x4a179cu: goto label_4a179c;
        case 0x4a17a0u: goto label_4a17a0;
        case 0x4a17a4u: goto label_4a17a4;
        case 0x4a17a8u: goto label_4a17a8;
        case 0x4a17acu: goto label_4a17ac;
        case 0x4a17b0u: goto label_4a17b0;
        case 0x4a17b4u: goto label_4a17b4;
        case 0x4a17b8u: goto label_4a17b8;
        case 0x4a17bcu: goto label_4a17bc;
        default: break;
    }

    ctx->pc = 0x4a1500u;

label_4a1500:
    // 0x4a1500: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4a1500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4a1504:
    // 0x4a1504: 0x2503fffe  addiu       $v1, $t0, -0x2
    ctx->pc = 0x4a1504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
label_4a1508:
    // 0x4a1508: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a1508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4a150c:
    // 0x4a150c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a150cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4a1510:
    // 0x4a1510: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4a1510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4a1514:
    // 0x4a1514: 0x2d080003  sltiu       $t0, $t0, 0x3
    ctx->pc = 0x4a1514u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_4a1518:
    // 0x4a1518: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4a1518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4a151c:
    // 0x4a151c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4a151cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1520:
    // 0x4a1520: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4a1520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4a1524:
    // 0x4a1524: 0x68a00a  movz        $s4, $v1, $t0
    ctx->pc = 0x4a1524u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_4a1528:
    // 0x4a1528: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4a1528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4a152c:
    // 0x4a152c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4a152cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a1530:
    // 0x4a1530: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4a1530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4a1534:
    // 0x4a1534: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4a1534u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a1538:
    // 0x4a1538: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4a1538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4a153c:
    // 0x4a153c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4a153cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a1540:
    // 0x4a1540: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4a1540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4a1544:
    // 0x4a1544: 0x2457f7a0  addiu       $s7, $v0, -0x860
    ctx->pc = 0x4a1544u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965152));
label_4a1548:
    // 0x4a1548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a1548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a154c:
    // 0x4a154c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4a154cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a1550:
    // 0x4a1550: 0x1000007e  b           . + 4 + (0x7E << 2)
label_4a1554:
    if (ctx->pc == 0x4A1554u) {
        ctx->pc = 0x4A1554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1550u;
        // 0x4a1554: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1558u;
        goto label_4a1558;
    }
    ctx->pc = 0x4A1550u;
    {
        const bool branch_taken_0x4a1550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1550u;
        // 0x4a1554: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1550) {
            ctx->pc = 0x4A174Cu;
            goto label_4a174c;
        }
    }
    ctx->pc = 0x4A1558u;
label_4a1558:
    // 0x4a1558: 0x7aeb0000  lq          $t3, 0x0($s7)
    ctx->pc = 0x4a1558u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_4a155c:
    // 0x4a155c: 0x2459f700  addiu       $t9, $v0, -0x900
    ctx->pc = 0x4a155cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
label_4a1560:
    // 0x4a1560: 0x290a023  subu        $s4, $s4, $s0
    ctx->pc = 0x4a1560u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_4a1564:
    // 0x4a1564: 0x24180010  addiu       $t8, $zero, 0x10
    ctx->pc = 0x4a1564u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4a1568:
    // 0x4a1568: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x4a1568u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a156c:
    // 0x4a156c: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x4a156cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
label_4a1570:
    // 0x4a1570: 0x3c0d0400  lui         $t5, 0x400
    ctx->pc = 0x4a1570u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1024 << 16));
label_4a1574:
    // 0x4a1574: 0x3c0c0100  lui         $t4, 0x100
    ctx->pc = 0x4a1574u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)256 << 16));
label_4a1578:
    // 0x4a1578: 0x358c0404  ori         $t4, $t4, 0x404
    ctx->pc = 0x4a1578u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1028);
label_4a157c:
    // 0x4a157c: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x4a157cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
label_4a1580:
    // 0x4a1580: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x4a1580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4a1584:
    // 0x4a1584: 0x300482d  daddu       $t1, $t8, $zero
    ctx->pc = 0x4a1584u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_4a1588:
    // 0x4a1588: 0x202480b  movn        $t1, $s0, $v0
    ctx->pc = 0x4a1588u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 16));
label_4a158c:
    // 0x4a158c: 0x12f2018  mult        $a0, $t1, $t7
    ctx->pc = 0x4a158cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4a1590:
    // 0x4a1590: 0x12d1825  or          $v1, $t1, $t5
    ctx->pc = 0x4a1590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 13));
label_4a1594:
    // 0x4a1594: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a1594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a1598:
    // 0x4a1598: 0x2098023  subu        $s0, $s0, $t1
    ctx->pc = 0x4a1598u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
label_4a159c:
    // 0x4a159c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4a159cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_4a15a0:
    // 0x4a15a0: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x4a15a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
label_4a15a4:
    // 0x4a15a4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x4a15a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_4a15a8:
    // 0x4a15a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4a15a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_4a15ac:
    // 0x4a15ac: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x4a15acu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_4a15b0:
    // 0x4a15b0: 0x4e2825  or          $a1, $v0, $t6
    ctx->pc = 0x4a15b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_4a15b4:
    // 0x4a15b4: 0x70651b89  pcpyld      $v1, $v1, $a1
    ctx->pc = 0x4a15b4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
label_4a15b8:
    // 0x4a15b8: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a15b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a15bc:
    // 0x4a15bc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a15bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a15c0:
    // 0x4a15c0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a15c4:
    // 0x4a15c4: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a15c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a15c8:
    // 0x4a15c8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a15c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4a15cc:
    // 0x4a15cc: 0x3c037c00  lui         $v1, 0x7C00
    ctx->pc = 0x4a15ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31744 << 16));
label_4a15d0:
    // 0x4a15d0: 0x3c05c000  lui         $a1, 0xC000
    ctx->pc = 0x4a15d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49152 << 16));
label_4a15d4:
    // 0x4a15d4: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x4a15d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
label_4a15d8:
    // 0x4a15d8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x4a15d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_4a15dc:
    // 0x4a15dc: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x4a15dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
label_4a15e0:
    // 0x4a15e0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x4a15e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_4a15e4:
    // 0x4a15e4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x4a15e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_4a15e8:
    // 0x4a15e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4a15e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4a15ec:
    // 0x4a15ec: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x4a15ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_4a15f0:
    // 0x4a15f0: 0x70651b89  pcpyld      $v1, $v1, $a1
    ctx->pc = 0x4a15f0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
label_4a15f4:
    // 0x4a15f4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a15f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a15f8:
    // 0x4a15f8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a15fc:
    // 0x4a15fc: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a1600:
    // 0x4a1600: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4a1600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_4a1604:
    // 0x4a1604: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a1604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4a1608:
    // 0x4a1608: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a1608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4a160c:
    // 0x4a160c: 0x11220048  beq         $t1, $v0, . + 4 + (0x48 << 2)
label_4a1610:
    if (ctx->pc == 0x4A1610u) {
        ctx->pc = 0x4A1610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A160Cu;
        // 0x4a1610: 0x8f82898c  lw          $v0, -0x7674($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1614u;
        goto label_4a1614;
    }
    ctx->pc = 0x4A160Cu;
    {
        const bool branch_taken_0x4a160c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A1610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A160Cu;
        // 0x4a1610: 0x8f82898c  lw          $v0, -0x7674($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a160c) {
            ctx->pc = 0x4A1730u;
            goto label_4a1730;
        }
    }
    ctx->pc = 0x4A1614u;
label_4a1614:
    // 0x4a1614: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4a1614u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_4a1618:
    // 0x4a1618: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4a1618u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_4a161c:
    // 0x4a161c: 0x0  nop
    ctx->pc = 0x4a161cu;
    // NOP
label_4a1620:
    // 0x4a1620: 0x3a680003  xori        $t0, $s3, 0x3
    ctx->pc = 0x4a1620u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)3);
label_4a1624:
    // 0x4a1624: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x4a1624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_4a1628:
    // 0x4a1628: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x4a1628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_4a162c:
    // 0x4a162c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4a162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4a1630:
    // 0x4a1630: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4a1630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4a1634:
    // 0x4a1634: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x4a1634u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4a1638:
    // 0x4a1638: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x4a1638u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4a163c:
    // 0x4a163c: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x4a163cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a1640:
    // 0x4a1640: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x4a1640u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_4a1644:
    // 0x4a1644: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x4a1644u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_4a1648:
    // 0x4a1648: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x4a1648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_4a164c:
    // 0x4a164c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x4a164cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4a1650:
    // 0x4a1650: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x4a1650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_4a1654:
    // 0x4a1654: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x4a1654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_4a1658:
    // 0x4a1658: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x4a1658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a165c:
    // 0x4a165c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4a165cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_4a1660:
    // 0x4a1660: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a1660u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a1664:
    // 0x4a1664: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a1664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a1668:
    // 0x4a1668: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a1668u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a166c:
    // 0x4a166c: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x4a166cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_4a1670:
    // 0x4a1670: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a1670u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a1674:
    // 0x4a1674: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4a1674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a1678:
    // 0x4a1678: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1678u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a167c:
    // 0x4a167c: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x4a167cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_4a1680:
    // 0x4a1680: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4a1680u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_4a1684:
    // 0x4a1684: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4a1684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_4a1688:
    // 0x4a1688: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1688u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a168c:
    // 0x4a168c: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x4a168cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_4a1690:
    // 0x4a1690: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4a1690u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_4a1694:
    // 0x4a1694: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x4a1694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_4a1698:
    // 0x4a1698: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a169c:
    // 0x4a169c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x4a169cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_4a16a0:
    // 0x4a16a0: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4a16a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_4a16a4:
    // 0x4a16a4: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x4a16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_4a16a8:
    // 0x4a16a8: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a16a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a16ac:
    // 0x4a16ac: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x4a16acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_4a16b0:
    // 0x4a16b0: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x4a16b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_4a16b4:
    // 0x4a16b4: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x4a16b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_4a16b8:
    // 0x4a16b8: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a16b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a16bc:
    // 0x4a16bc: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x4a16bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_4a16c0:
    // 0x4a16c0: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x4a16c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_4a16c4:
    // 0x4a16c4: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x4a16c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_4a16c8:
    // 0x4a16c8: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a16c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a16cc:
    // 0x4a16cc: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x4a16ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_4a16d0:
    // 0x4a16d0: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x4a16d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_4a16d4:
    // 0x4a16d4: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x4a16d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_4a16d8:
    // 0x4a16d8: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a16d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a16dc:
    // 0x4a16dc: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x4a16dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_4a16e0:
    // 0x4a16e0: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x4a16e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_4a16e4:
    // 0x4a16e4: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x4a16e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_4a16e8:
    // 0x4a16e8: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a16e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a16ec:
    // 0x4a16ec: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x4a16ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_4a16f0:
    // 0x4a16f0: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x4a16f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_4a16f4:
    // 0x4a16f4: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x4a16f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_4a16f8:
    // 0x4a16f8: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a16f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a16fc:
    // 0x4a16fc: 0x78e20020  lq          $v0, 0x20($a3)
    ctx->pc = 0x4a16fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_4a1700:
    // 0x4a1700: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x4a1700u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_4a1704:
    // 0x4a1704: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x4a1704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_4a1708:
    // 0x4a1708: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1708u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a170c:
    // 0x4a170c: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x4a170cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_4a1710:
    // 0x4a1710: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x4a1710u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_4a1714:
    // 0x4a1714: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x4a1714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_4a1718:
    // 0x4a1718: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a1718u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a171c:
    // 0x4a171c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4a171cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_4a1720:
    // 0x4a1720: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4a1720u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_4a1724:
    // 0x4a1724: 0x152affbe  bne         $t1, $t2, . + 4 + (-0x42 << 2)
label_4a1728:
    if (ctx->pc == 0x4A1728u) {
        ctx->pc = 0x4A1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1724u;
        // 0x4a1728: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A172Cu;
        goto label_4a172c;
    }
    ctx->pc = 0x4A1724u;
    {
        const bool branch_taken_0x4a1724 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        ctx->pc = 0x4A1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1724u;
        // 0x4a1728: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1724) {
            ctx->pc = 0x4A1620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1620;
        }
    }
    ctx->pc = 0x4A172Cu;
label_4a172c:
    // 0x4a172c: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a172cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a1730:
    // 0x4a1730: 0x7c4b0000  sq          $t3, 0x0($v0)
    ctx->pc = 0x4a1730u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 11));
label_4a1734:
    // 0x4a1734: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a1734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a1738:
    // 0x4a1738: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a1738u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a173c:
    // 0x4a173c: 0x1600ff90  bnez        $s0, . + 4 + (-0x70 << 2)
label_4a1740:
    if (ctx->pc == 0x4A1740u) {
        ctx->pc = 0x4A1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A173Cu;
        // 0x4a1740: 0x7b2b0000  lq          $t3, 0x0($t9) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 25), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1744u;
        goto label_4a1744;
    }
    ctx->pc = 0x4A173Cu;
    {
        const bool branch_taken_0x4a173c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A173Cu;
        // 0x4a1740: 0x7b2b0000  lq          $t3, 0x0($t9) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 25), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a173c) {
            ctx->pc = 0x4A1580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1580;
        }
    }
    ctx->pc = 0x4A1744u;
label_4a1744:
    // 0x4a1744: 0xc127ec8  jal         func_49FB20
label_4a1748:
    if (ctx->pc == 0x4A1748u) {
        ctx->pc = 0x4A174Cu;
        goto label_4a174c;
    }
    ctx->pc = 0x4A1744u;
    SET_GPR_U32(ctx, 31, 0x4A174Cu);
    ctx->pc = 0x49FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FB20u, 0x4A1744u, 0x4A174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A174Cu;
label_4a174c:
    // 0x4a174c: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_4a1750:
    if (ctx->pc == 0x4A1750u) {
        ctx->pc = 0x4A1750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A174Cu;
        // 0x4a1750: 0x8f90879c  lw          $s0, -0x7864($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1754u;
        goto label_4a1754;
    }
    ctx->pc = 0x4A174Cu;
    {
        const bool branch_taken_0x4a174c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A174Cu;
        // 0x4a1750: 0x8f90879c  lw          $s0, -0x7864($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a174c) {
            ctx->pc = 0x4A1784u;
            goto label_4a1784;
        }
    }
    ctx->pc = 0x4A1754u;
label_4a1754:
    // 0x4a1754: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a1754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a1758:
    // 0x4a1758: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4a1758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4a175c:
    // 0x4a175c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4a175cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a1760:
    // 0x4a1760: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x4a1760u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4a1764:
    // 0x4a1764: 0x8ea80008  lw          $t0, 0x8($s5)
    ctx->pc = 0x4a1764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4a1768:
    // 0x4a1768: 0x283800a  movz        $s0, $s4, $v1
    ctx->pc = 0x4a1768u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
label_4a176c:
    // 0x4a176c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x4a176cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a1770:
    // 0x4a1770: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4a1770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a1774:
    // 0x4a1774: 0x40f809  jalr        $v0
label_4a1778:
    if (ctx->pc == 0x4A1778u) {
        ctx->pc = 0x4A1778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1774u;
        // 0x4a1778: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A177Cu;
        goto label_4a177c;
    }
    ctx->pc = 0x4A1774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A177Cu);
        ctx->pc = 0x4A1778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1774u;
        // 0x4a1778: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1774u, 0x4A177Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A177Cu;
label_4a177c:
    // 0x4a177c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a1780:
    if (ctx->pc == 0x4A1780u) {
        ctx->pc = 0x4A1784u;
        goto label_4a1784;
    }
    ctx->pc = 0x4A177Cu;
    {
        const bool branch_taken_0x4a177c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a177c) {
            ctx->pc = 0x4A1788u;
            goto label_4a1788;
        }
    }
    ctx->pc = 0x4A1784u;
label_4a1784:
    // 0x4a1784: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a1784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1788:
    // 0x4a1788: 0x1600ff73  bnez        $s0, . + 4 + (-0x8D << 2)
label_4a178c:
    if (ctx->pc == 0x4A178Cu) {
        ctx->pc = 0x4A178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1788u;
        // 0x4a178c: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1790u;
        goto label_4a1790;
    }
    ctx->pc = 0x4A1788u;
    {
        const bool branch_taken_0x4a1788 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1788u;
        // 0x4a178c: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1788) {
            ctx->pc = 0x4A1558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1558;
        }
    }
    ctx->pc = 0x4A1790u;
label_4a1790:
    // 0x4a1790: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4a1790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a1794:
    // 0x4a1794: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4a1794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a1798:
    // 0x4a1798: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4a1798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a179c:
    // 0x4a179c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4a179cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a17a0:
    // 0x4a17a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a17a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a17a4:
    // 0x4a17a4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4a17a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a17a8:
    // 0x4a17a8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4a17a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a17ac:
    // 0x4a17ac: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4a17acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a17b0:
    // 0x4a17b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a17b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a17b4:
    // 0x4a17b4: 0x3e00008  jr          $ra
label_4a17b8:
    if (ctx->pc == 0x4A17B8u) {
        ctx->pc = 0x4A17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A17B4u;
        // 0x4a17b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A17BCu;
        goto label_4a17bc;
    }
    ctx->pc = 0x4A17B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A17B4u;
        // 0x4a17b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A17B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A17BCu;
label_4a17bc:
    // 0x4a17bc: 0x0  nop
    ctx->pc = 0x4a17bcu;
    // NOP
    ctx->pc = 0x4a17c0u;
}
