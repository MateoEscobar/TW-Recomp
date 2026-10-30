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

// Function: sub_002B1478
// Address: 0x2b1478 - 0x2b1860
void sub_002B1478_0x2b1478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1478_0x2b1478");
#endif

    switch (ctx->pc) {
        case 0x2b1478u: goto label_2b1478;
        case 0x2b147cu: goto label_2b147c;
        case 0x2b1480u: goto label_2b1480;
        case 0x2b1484u: goto label_2b1484;
        case 0x2b1488u: goto label_2b1488;
        case 0x2b148cu: goto label_2b148c;
        case 0x2b1490u: goto label_2b1490;
        case 0x2b1494u: goto label_2b1494;
        case 0x2b1498u: goto label_2b1498;
        case 0x2b149cu: goto label_2b149c;
        case 0x2b14a0u: goto label_2b14a0;
        case 0x2b14a4u: goto label_2b14a4;
        case 0x2b14a8u: goto label_2b14a8;
        case 0x2b14acu: goto label_2b14ac;
        case 0x2b14b0u: goto label_2b14b0;
        case 0x2b14b4u: goto label_2b14b4;
        case 0x2b14b8u: goto label_2b14b8;
        case 0x2b14bcu: goto label_2b14bc;
        case 0x2b14c0u: goto label_2b14c0;
        case 0x2b14c4u: goto label_2b14c4;
        case 0x2b14c8u: goto label_2b14c8;
        case 0x2b14ccu: goto label_2b14cc;
        case 0x2b14d0u: goto label_2b14d0;
        case 0x2b14d4u: goto label_2b14d4;
        case 0x2b14d8u: goto label_2b14d8;
        case 0x2b14dcu: goto label_2b14dc;
        case 0x2b14e0u: goto label_2b14e0;
        case 0x2b14e4u: goto label_2b14e4;
        case 0x2b14e8u: goto label_2b14e8;
        case 0x2b14ecu: goto label_2b14ec;
        case 0x2b14f0u: goto label_2b14f0;
        case 0x2b14f4u: goto label_2b14f4;
        case 0x2b14f8u: goto label_2b14f8;
        case 0x2b14fcu: goto label_2b14fc;
        case 0x2b1500u: goto label_2b1500;
        case 0x2b1504u: goto label_2b1504;
        case 0x2b1508u: goto label_2b1508;
        case 0x2b150cu: goto label_2b150c;
        case 0x2b1510u: goto label_2b1510;
        case 0x2b1514u: goto label_2b1514;
        case 0x2b1518u: goto label_2b1518;
        case 0x2b151cu: goto label_2b151c;
        case 0x2b1520u: goto label_2b1520;
        case 0x2b1524u: goto label_2b1524;
        case 0x2b1528u: goto label_2b1528;
        case 0x2b152cu: goto label_2b152c;
        case 0x2b1530u: goto label_2b1530;
        case 0x2b1534u: goto label_2b1534;
        case 0x2b1538u: goto label_2b1538;
        case 0x2b153cu: goto label_2b153c;
        case 0x2b1540u: goto label_2b1540;
        case 0x2b1544u: goto label_2b1544;
        case 0x2b1548u: goto label_2b1548;
        case 0x2b154cu: goto label_2b154c;
        case 0x2b1550u: goto label_2b1550;
        case 0x2b1554u: goto label_2b1554;
        case 0x2b1558u: goto label_2b1558;
        case 0x2b155cu: goto label_2b155c;
        case 0x2b1560u: goto label_2b1560;
        case 0x2b1564u: goto label_2b1564;
        case 0x2b1568u: goto label_2b1568;
        case 0x2b156cu: goto label_2b156c;
        case 0x2b1570u: goto label_2b1570;
        case 0x2b1574u: goto label_2b1574;
        case 0x2b1578u: goto label_2b1578;
        case 0x2b157cu: goto label_2b157c;
        case 0x2b1580u: goto label_2b1580;
        case 0x2b1584u: goto label_2b1584;
        case 0x2b1588u: goto label_2b1588;
        case 0x2b158cu: goto label_2b158c;
        case 0x2b1590u: goto label_2b1590;
        case 0x2b1594u: goto label_2b1594;
        case 0x2b1598u: goto label_2b1598;
        case 0x2b159cu: goto label_2b159c;
        case 0x2b15a0u: goto label_2b15a0;
        case 0x2b15a4u: goto label_2b15a4;
        case 0x2b15a8u: goto label_2b15a8;
        case 0x2b15acu: goto label_2b15ac;
        case 0x2b15b0u: goto label_2b15b0;
        case 0x2b15b4u: goto label_2b15b4;
        case 0x2b15b8u: goto label_2b15b8;
        case 0x2b15bcu: goto label_2b15bc;
        case 0x2b15c0u: goto label_2b15c0;
        case 0x2b15c4u: goto label_2b15c4;
        case 0x2b15c8u: goto label_2b15c8;
        case 0x2b15ccu: goto label_2b15cc;
        case 0x2b15d0u: goto label_2b15d0;
        case 0x2b15d4u: goto label_2b15d4;
        case 0x2b15d8u: goto label_2b15d8;
        case 0x2b15dcu: goto label_2b15dc;
        case 0x2b15e0u: goto label_2b15e0;
        case 0x2b15e4u: goto label_2b15e4;
        case 0x2b15e8u: goto label_2b15e8;
        case 0x2b15ecu: goto label_2b15ec;
        case 0x2b15f0u: goto label_2b15f0;
        case 0x2b15f4u: goto label_2b15f4;
        case 0x2b15f8u: goto label_2b15f8;
        case 0x2b15fcu: goto label_2b15fc;
        case 0x2b1600u: goto label_2b1600;
        case 0x2b1604u: goto label_2b1604;
        case 0x2b1608u: goto label_2b1608;
        case 0x2b160cu: goto label_2b160c;
        case 0x2b1610u: goto label_2b1610;
        case 0x2b1614u: goto label_2b1614;
        case 0x2b1618u: goto label_2b1618;
        case 0x2b161cu: goto label_2b161c;
        case 0x2b1620u: goto label_2b1620;
        case 0x2b1624u: goto label_2b1624;
        case 0x2b1628u: goto label_2b1628;
        case 0x2b162cu: goto label_2b162c;
        case 0x2b1630u: goto label_2b1630;
        case 0x2b1634u: goto label_2b1634;
        case 0x2b1638u: goto label_2b1638;
        case 0x2b163cu: goto label_2b163c;
        case 0x2b1640u: goto label_2b1640;
        case 0x2b1644u: goto label_2b1644;
        case 0x2b1648u: goto label_2b1648;
        case 0x2b164cu: goto label_2b164c;
        case 0x2b1650u: goto label_2b1650;
        case 0x2b1654u: goto label_2b1654;
        case 0x2b1658u: goto label_2b1658;
        case 0x2b165cu: goto label_2b165c;
        case 0x2b1660u: goto label_2b1660;
        case 0x2b1664u: goto label_2b1664;
        case 0x2b1668u: goto label_2b1668;
        case 0x2b166cu: goto label_2b166c;
        case 0x2b1670u: goto label_2b1670;
        case 0x2b1674u: goto label_2b1674;
        case 0x2b1678u: goto label_2b1678;
        case 0x2b167cu: goto label_2b167c;
        case 0x2b1680u: goto label_2b1680;
        case 0x2b1684u: goto label_2b1684;
        case 0x2b1688u: goto label_2b1688;
        case 0x2b168cu: goto label_2b168c;
        case 0x2b1690u: goto label_2b1690;
        case 0x2b1694u: goto label_2b1694;
        case 0x2b1698u: goto label_2b1698;
        case 0x2b169cu: goto label_2b169c;
        case 0x2b16a0u: goto label_2b16a0;
        case 0x2b16a4u: goto label_2b16a4;
        case 0x2b16a8u: goto label_2b16a8;
        case 0x2b16acu: goto label_2b16ac;
        case 0x2b16b0u: goto label_2b16b0;
        case 0x2b16b4u: goto label_2b16b4;
        case 0x2b16b8u: goto label_2b16b8;
        case 0x2b16bcu: goto label_2b16bc;
        case 0x2b16c0u: goto label_2b16c0;
        case 0x2b16c4u: goto label_2b16c4;
        case 0x2b16c8u: goto label_2b16c8;
        case 0x2b16ccu: goto label_2b16cc;
        case 0x2b16d0u: goto label_2b16d0;
        case 0x2b16d4u: goto label_2b16d4;
        case 0x2b16d8u: goto label_2b16d8;
        case 0x2b16dcu: goto label_2b16dc;
        case 0x2b16e0u: goto label_2b16e0;
        case 0x2b16e4u: goto label_2b16e4;
        case 0x2b16e8u: goto label_2b16e8;
        case 0x2b16ecu: goto label_2b16ec;
        case 0x2b16f0u: goto label_2b16f0;
        case 0x2b16f4u: goto label_2b16f4;
        case 0x2b16f8u: goto label_2b16f8;
        case 0x2b16fcu: goto label_2b16fc;
        case 0x2b1700u: goto label_2b1700;
        case 0x2b1704u: goto label_2b1704;
        case 0x2b1708u: goto label_2b1708;
        case 0x2b170cu: goto label_2b170c;
        case 0x2b1710u: goto label_2b1710;
        case 0x2b1714u: goto label_2b1714;
        case 0x2b1718u: goto label_2b1718;
        case 0x2b171cu: goto label_2b171c;
        case 0x2b1720u: goto label_2b1720;
        case 0x2b1724u: goto label_2b1724;
        case 0x2b1728u: goto label_2b1728;
        case 0x2b172cu: goto label_2b172c;
        case 0x2b1730u: goto label_2b1730;
        case 0x2b1734u: goto label_2b1734;
        case 0x2b1738u: goto label_2b1738;
        case 0x2b173cu: goto label_2b173c;
        case 0x2b1740u: goto label_2b1740;
        case 0x2b1744u: goto label_2b1744;
        case 0x2b1748u: goto label_2b1748;
        case 0x2b174cu: goto label_2b174c;
        case 0x2b1750u: goto label_2b1750;
        case 0x2b1754u: goto label_2b1754;
        case 0x2b1758u: goto label_2b1758;
        case 0x2b175cu: goto label_2b175c;
        case 0x2b1760u: goto label_2b1760;
        case 0x2b1764u: goto label_2b1764;
        case 0x2b1768u: goto label_2b1768;
        case 0x2b176cu: goto label_2b176c;
        case 0x2b1770u: goto label_2b1770;
        case 0x2b1774u: goto label_2b1774;
        case 0x2b1778u: goto label_2b1778;
        case 0x2b177cu: goto label_2b177c;
        case 0x2b1780u: goto label_2b1780;
        case 0x2b1784u: goto label_2b1784;
        case 0x2b1788u: goto label_2b1788;
        case 0x2b178cu: goto label_2b178c;
        case 0x2b1790u: goto label_2b1790;
        case 0x2b1794u: goto label_2b1794;
        case 0x2b1798u: goto label_2b1798;
        case 0x2b179cu: goto label_2b179c;
        case 0x2b17a0u: goto label_2b17a0;
        case 0x2b17a4u: goto label_2b17a4;
        case 0x2b17a8u: goto label_2b17a8;
        case 0x2b17acu: goto label_2b17ac;
        case 0x2b17b0u: goto label_2b17b0;
        case 0x2b17b4u: goto label_2b17b4;
        case 0x2b17b8u: goto label_2b17b8;
        case 0x2b17bcu: goto label_2b17bc;
        case 0x2b17c0u: goto label_2b17c0;
        case 0x2b17c4u: goto label_2b17c4;
        case 0x2b17c8u: goto label_2b17c8;
        case 0x2b17ccu: goto label_2b17cc;
        case 0x2b17d0u: goto label_2b17d0;
        case 0x2b17d4u: goto label_2b17d4;
        case 0x2b17d8u: goto label_2b17d8;
        case 0x2b17dcu: goto label_2b17dc;
        case 0x2b17e0u: goto label_2b17e0;
        case 0x2b17e4u: goto label_2b17e4;
        case 0x2b17e8u: goto label_2b17e8;
        case 0x2b17ecu: goto label_2b17ec;
        case 0x2b17f0u: goto label_2b17f0;
        case 0x2b17f4u: goto label_2b17f4;
        case 0x2b17f8u: goto label_2b17f8;
        case 0x2b17fcu: goto label_2b17fc;
        case 0x2b1800u: goto label_2b1800;
        case 0x2b1804u: goto label_2b1804;
        case 0x2b1808u: goto label_2b1808;
        case 0x2b180cu: goto label_2b180c;
        case 0x2b1810u: goto label_2b1810;
        case 0x2b1814u: goto label_2b1814;
        case 0x2b1818u: goto label_2b1818;
        case 0x2b181cu: goto label_2b181c;
        case 0x2b1820u: goto label_2b1820;
        case 0x2b1824u: goto label_2b1824;
        case 0x2b1828u: goto label_2b1828;
        case 0x2b182cu: goto label_2b182c;
        case 0x2b1830u: goto label_2b1830;
        case 0x2b1834u: goto label_2b1834;
        case 0x2b1838u: goto label_2b1838;
        case 0x2b183cu: goto label_2b183c;
        case 0x2b1840u: goto label_2b1840;
        case 0x2b1844u: goto label_2b1844;
        case 0x2b1848u: goto label_2b1848;
        case 0x2b184cu: goto label_2b184c;
        case 0x2b1850u: goto label_2b1850;
        case 0x2b1854u: goto label_2b1854;
        case 0x2b1858u: goto label_2b1858;
        case 0x2b185cu: goto label_2b185c;
        default: break;
    }

    ctx->pc = 0x2b1478u;

label_2b1478:
    // 0x2b1478: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2b1478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2b147c:
    // 0x2b147c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2b147cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_2b1480:
    // 0x2b1480: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2b1480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_2b1484:
    // 0x2b1484: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2b1484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_2b1488:
    // 0x2b1488: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b1488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b148c:
    // 0x2b148c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2b148cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_2b1490:
    // 0x2b1490: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2b1490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_2b1494:
    // 0x2b1494: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2b1494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2b1498:
    // 0x2b1498: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2b1498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2b149c:
    // 0x2b149c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2b149cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_2b14a0:
    // 0x2b14a0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2b14a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2b14a4:
    // 0x2b14a4: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2b14a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_2b14a8:
    // 0x2b14a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b14ac:
    // 0x2b14ac: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2b14acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b14b0:
    // 0x2b14b0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b14b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2b14b4:
    // 0x2b14b4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b14b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b14b8:
    // 0x2b14b8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b14b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b14bc:
    // 0x2b14bc: 0x40f809  jalr        $v0
label_2b14c0:
    if (ctx->pc == 0x2B14C0u) {
        ctx->pc = 0x2B14C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14BCu;
        // 0x2b14c0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B14C4u;
        goto label_2b14c4;
    }
    ctx->pc = 0x2B14BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B14C4u);
        ctx->pc = 0x2B14C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14BCu;
        // 0x2b14c0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B14BCu, 0x2B14C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B14C4u;
label_2b14c4:
    // 0x2b14c4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b14c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b14c8:
    // 0x2b14c8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2b14c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b14cc:
    // 0x2b14cc: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2b14ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2b14d0:
    // 0x2b14d0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b14d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b14d4:
    // 0x2b14d4: 0xc0e409a  jal         func_390268
label_2b14d8:
    if (ctx->pc == 0x2B14D8u) {
        ctx->pc = 0x2B14D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14D4u;
        // 0x2b14d8: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B14DCu;
        goto label_2b14dc;
    }
    ctx->pc = 0x2B14D4u;
    SET_GPR_U32(ctx, 31, 0x2B14DCu);
    ctx->pc = 0x2B14D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B14D4u;
    // 0x2b14d8: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B14D4u, 0x2B14DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B14DCu;
label_2b14dc:
    // 0x2b14dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b14dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b14e0:
    // 0x2b14e0: 0xc0a34d6  jal         func_28D358
label_2b14e4:
    if (ctx->pc == 0x2B14E4u) {
        ctx->pc = 0x2B14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14E0u;
        // 0x2b14e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B14E8u;
        goto label_2b14e8;
    }
    ctx->pc = 0x2B14E0u;
    SET_GPR_U32(ctx, 31, 0x2B14E8u);
    ctx->pc = 0x2B14E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B14E0u;
    // 0x2b14e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2B14E0u, 0x2B14E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B14E8u;
label_2b14e8:
    // 0x2b14e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b14e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b14ec:
    // 0x2b14ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b14ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b14f0:
    // 0x2b14f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b14f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b14f4:
    // 0x2b14f4: 0xc087502  jal         func_21D408
label_2b14f8:
    if (ctx->pc == 0x2B14F8u) {
        ctx->pc = 0x2B14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14F4u;
        // 0x2b14f8: 0x8c56020c  lw          $s6, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B14FCu;
        goto label_2b14fc;
    }
    ctx->pc = 0x2B14F4u;
    SET_GPR_U32(ctx, 31, 0x2B14FCu);
    ctx->pc = 0x2B14F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B14F4u;
    // 0x2b14f8: 0x8c56020c  lw          $s6, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B14F4u, 0x2B14FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B14FCu;
label_2b14fc:
    // 0x2b14fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b14fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1500:
    // 0x2b1500: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b1500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b1504:
    // 0x2b1504: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b1504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b1508:
    // 0x2b1508: 0xc6600250  lwc1        $f0, 0x250($s3)
    ctx->pc = 0x2b1508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b150c:
    // 0x2b150c: 0x26620250  addiu       $v0, $s3, 0x250
    ctx->pc = 0x2b150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 592));
label_2b1510:
    // 0x2b1510: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2b1510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b1514:
    // 0x2b1514: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2b1514u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_2b1518:
    // 0x2b1518: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2b1518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2b151c:
    // 0x2b151c: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2b151cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_2b1520:
    // 0x2b1520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1524:
    // 0x2b1524: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1528:
    // 0x2b1528: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2b1528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2b152c:
    // 0x2b152c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b152cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b1530:
    // 0x2b1530: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2b1530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2b1534:
    // 0x2b1534: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x2b1534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_2b1538:
    // 0x2b1538: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2b1538u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b153c:
    // 0x2b153c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2b153cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2b1540:
    // 0x2b1540: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x2b1540u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2b1544:
    // 0x2b1544: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2b1544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2b1548:
    // 0x2b1548: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2b1548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2b154c:
    // 0x2b154c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2b154cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2b1550:
    // 0x2b1550: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2b1550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2b1554:
    // 0x2b1554: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x2b1554u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2b1558:
    // 0x2b1558: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b1558u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2b155c:
    // 0x2b155c: 0xc0cdb38  jal         func_336CE0
label_2b1560:
    if (ctx->pc == 0x2B1560u) {
        ctx->pc = 0x2B1560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B155Cu;
        // 0x2b1560: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1564u;
        goto label_2b1564;
    }
    ctx->pc = 0x2B155Cu;
    SET_GPR_U32(ctx, 31, 0x2B1564u);
    ctx->pc = 0x2B1560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B155Cu;
    // 0x2b1560: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B155Cu, 0x2B1564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1564u;
label_2b1564:
    // 0x2b1564: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b1564u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b1568:
    // 0x2b1568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b156c:
    // 0x2b156c: 0xc0cdb38  jal         func_336CE0
label_2b1570:
    if (ctx->pc == 0x2B1570u) {
        ctx->pc = 0x2B1570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B156Cu;
        // 0x2b1570: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1574u;
        goto label_2b1574;
    }
    ctx->pc = 0x2B156Cu;
    SET_GPR_U32(ctx, 31, 0x2B1574u);
    ctx->pc = 0x2B1570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B156Cu;
    // 0x2b1570: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B156Cu, 0x2B1574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1574u;
label_2b1574:
    // 0x2b1574: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2b1574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b1578:
    // 0x2b1578: 0x0  nop
    ctx->pc = 0x2b1578u;
    // NOP
label_2b157c:
    // 0x2b157c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_2b1580:
    if (ctx->pc == 0x2B1580u) {
        ctx->pc = 0x2B1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B157Cu;
        // 0x2b1580: 0x8ec50040  lw          $a1, 0x40($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1584u;
        goto label_2b1584;
    }
    ctx->pc = 0x2B157Cu;
    {
        const bool branch_taken_0x2b157c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b157c) {
            ctx->pc = 0x2B1580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B157Cu;
            // 0x2b1580: 0x8ec50040  lw          $a1, 0x40($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B15A4u;
            goto label_2b15a4;
        }
    }
    ctx->pc = 0x2B1584u;
label_2b1584:
    // 0x2b1584: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2b1584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b1588:
    // 0x2b1588: 0x508000a7  beql        $a0, $zero, . + 4 + (0xA7 << 2)
label_2b158c:
    if (ctx->pc == 0x2B158Cu) {
        ctx->pc = 0x2B158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1588u;
        // 0x2b158c: 0xa2200059  sb          $zero, 0x59($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1590u;
        goto label_2b1590;
    }
    ctx->pc = 0x2B1588u;
    {
        const bool branch_taken_0x2b1588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1588) {
            ctx->pc = 0x2B158Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1588u;
            // 0x2b158c: 0xa2200059  sb          $zero, 0x59($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1828u;
            goto label_2b1828;
        }
    }
    ctx->pc = 0x2B1590u;
label_2b1590:
    // 0x2b1590: 0xc10586e  jal         func_4161B8
label_2b1594:
    if (ctx->pc == 0x2B1594u) {
        ctx->pc = 0x2B1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1590u;
        // 0x2b1594: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1598u;
        goto label_2b1598;
    }
    ctx->pc = 0x2B1590u;
    SET_GPR_U32(ctx, 31, 0x2B1598u);
    ctx->pc = 0x2B1594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1590u;
    // 0x2b1594: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B8u, 0x2B1590u, 0x2B1598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1598u;
label_2b1598:
    // 0x2b1598: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2b1598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2b159c:
    // 0x2b159c: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_2b15a0:
    if (ctx->pc == 0x2B15A0u) {
        ctx->pc = 0x2B15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B159Cu;
        // 0x2b15a0: 0xa2200059  sb          $zero, 0x59($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B15A4u;
        goto label_2b15a4;
    }
    ctx->pc = 0x2B159Cu;
    {
        const bool branch_taken_0x2b159c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B159Cu;
        // 0x2b15a0: 0xa2200059  sb          $zero, 0x59($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b159c) {
            ctx->pc = 0x2B1828u;
            goto label_2b1828;
        }
    }
    ctx->pc = 0x2B15A4u;
label_2b15a4:
    // 0x2b15a4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_2b15a8:
    if (ctx->pc == 0x2B15A8u) {
        ctx->pc = 0x2B15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15A4u;
        // 0x2b15a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B15ACu;
        goto label_2b15ac;
    }
    ctx->pc = 0x2B15A4u;
    {
        const bool branch_taken_0x2b15a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15A4u;
        // 0x2b15a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b15a4) {
            ctx->pc = 0x2B15CCu;
            goto label_2b15cc;
        }
    }
    ctx->pc = 0x2B15ACu;
label_2b15ac:
    // 0x2b15ac: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2b15acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2b15b0:
    // 0x2b15b0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2b15b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2b15b4:
    // 0x2b15b4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2b15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2b15b8:
    // 0x2b15b8: 0x40f809  jalr        $v0
label_2b15bc:
    if (ctx->pc == 0x2B15BCu) {
        ctx->pc = 0x2B15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15B8u;
        // 0x2b15bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B15C0u;
        goto label_2b15c0;
    }
    ctx->pc = 0x2B15B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B15C0u);
        ctx->pc = 0x2B15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15B8u;
        // 0x2b15bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B15B8u, 0x2B15C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B15C0u;
label_2b15c0:
    // 0x2b15c0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2b15c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b15c4:
    // 0x2b15c4: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_2b15c8:
    if (ctx->pc == 0x2B15C8u) {
        ctx->pc = 0x2B15C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15C4u;
        // 0x2b15c8: 0x8ed00040  lw          $s0, 0x40($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B15CCu;
        goto label_2b15cc;
    }
    ctx->pc = 0x2B15C4u;
    {
        const bool branch_taken_0x2b15c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b15c4) {
            ctx->pc = 0x2B15C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B15C4u;
            // 0x2b15c8: 0x8ed00040  lw          $s0, 0x40($s6) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B15CCu;
            goto label_2b15cc;
        }
    }
    ctx->pc = 0x2B15CCu;
label_2b15cc:
    // 0x2b15cc: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_2b15d0:
    if (ctx->pc == 0x2B15D0u) {
        ctx->pc = 0x2B15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15CCu;
        // 0x2b15d0: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B15D4u;
        goto label_2b15d4;
    }
    ctx->pc = 0x2B15CCu;
    {
        const bool branch_taken_0x2b15cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b15cc) {
            ctx->pc = 0x2B15D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B15CCu;
            // 0x2b15d0: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B15E4u;
            goto label_2b15e4;
        }
    }
    ctx->pc = 0x2B15D4u;
label_2b15d4:
    // 0x2b15d4: 0x9202004f  lbu         $v0, 0x4F($s0)
    ctx->pc = 0x2b15d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
label_2b15d8:
    // 0x2b15d8: 0x14400094  bnez        $v0, . + 4 + (0x94 << 2)
label_2b15dc:
    if (ctx->pc == 0x2B15DCu) {
        ctx->pc = 0x2B15DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15D8u;
        // 0x2b15dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B15E0u;
        goto label_2b15e0;
    }
    ctx->pc = 0x2B15D8u;
    {
        const bool branch_taken_0x2b15d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B15DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15D8u;
        // 0x2b15dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b15d8) {
            ctx->pc = 0x2B182Cu;
            goto label_2b182c;
        }
    }
    ctx->pc = 0x2B15E0u;
label_2b15e0:
    // 0x2b15e0: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2b15e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b15e4:
    // 0x2b15e4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2b15e8:
    if (ctx->pc == 0x2B15E8u) {
        ctx->pc = 0x2B15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15E4u;
        // 0x2b15e8: 0x8e250050  lw          $a1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B15ECu;
        goto label_2b15ec;
    }
    ctx->pc = 0x2B15E4u;
    {
        const bool branch_taken_0x2b15e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b15e4) {
            ctx->pc = 0x2B15E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B15E4u;
            // 0x2b15e8: 0x8e250050  lw          $a1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1604u;
            goto label_2b1604;
        }
    }
    ctx->pc = 0x2B15ECu;
label_2b15ec:
    // 0x2b15ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b15ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b15f0:
    // 0x2b15f0: 0xc105bc2  jal         func_416F08
label_2b15f4:
    if (ctx->pc == 0x2B15F4u) {
        ctx->pc = 0x2B15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15F0u;
        // 0x2b15f4: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B15F8u;
        goto label_2b15f8;
    }
    ctx->pc = 0x2B15F0u;
    SET_GPR_U32(ctx, 31, 0x2B15F8u);
    ctx->pc = 0x2B15F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B15F0u;
    // 0x2b15f4: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416F08u, 0x2B15F0u, 0x2B15F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B15F8u;
label_2b15f8:
    // 0x2b15f8: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_2b15fc:
    if (ctx->pc == 0x2B15FCu) {
        ctx->pc = 0x2B15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15F8u;
        // 0x2b15fc: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1600u;
        goto label_2b1600;
    }
    ctx->pc = 0x2B15F8u;
    {
        const bool branch_taken_0x2b15f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15F8u;
        // 0x2b15fc: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b15f8) {
            ctx->pc = 0x2B1828u;
            goto label_2b1828;
        }
    }
    ctx->pc = 0x2B1600u;
label_2b1600:
    // 0x2b1600: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x2b1600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b1604:
    // 0x2b1604: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2b1604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2b1608:
    // 0x2b1608: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x2b1608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2b160c:
    // 0x2b160c: 0x8ca300dc  lw          $v1, 0xDC($a1)
    ctx->pc = 0x2b160cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
label_2b1610:
    // 0x2b1610: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_2b1614:
    if (ctx->pc == 0x2B1614u) {
        ctx->pc = 0x2B1614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1610u;
        // 0x2b1614: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1618u;
        goto label_2b1618;
    }
    ctx->pc = 0x2B1610u;
    {
        const bool branch_taken_0x2b1610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B1614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1610u;
        // 0x2b1614: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1610) {
            ctx->pc = 0x2B1624u;
            goto label_2b1624;
        }
    }
    ctx->pc = 0x2B1618u;
label_2b1618:
    // 0x2b1618: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b1618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b161c:
    // 0x2b161c: 0xc10586c  jal         func_4161B0
label_2b1620:
    if (ctx->pc == 0x2B1620u) {
        ctx->pc = 0x2B1620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B161Cu;
        // 0x2b1620: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1624u;
        goto label_2b1624;
    }
    ctx->pc = 0x2B161Cu;
    SET_GPR_U32(ctx, 31, 0x2B1624u);
    ctx->pc = 0x2B1620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B161Cu;
    // 0x2b1620: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B0u, 0x2B161Cu, 0x2B1624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1624u;
label_2b1624:
    // 0x2b1624: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2b1624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b1628:
    // 0x2b1628: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x2b1628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_2b162c:
    // 0x2b162c: 0x1475007f  bne         $v1, $s5, . + 4 + (0x7F << 2)
label_2b1630:
    if (ctx->pc == 0x2B1630u) {
        ctx->pc = 0x2B1630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B162Cu;
        // 0x2b1630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1634u;
        goto label_2b1634;
    }
    ctx->pc = 0x2B162Cu;
    {
        const bool branch_taken_0x2b162c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x2B1630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B162Cu;
        // 0x2b1630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b162c) {
            ctx->pc = 0x2B182Cu;
            goto label_2b182c;
        }
    }
    ctx->pc = 0x2B1634u;
label_2b1634:
    // 0x2b1634: 0x92240059  lbu         $a0, 0x59($s1)
    ctx->pc = 0x2b1634u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 89)));
label_2b1638:
    // 0x2b1638: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2b1638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b163c:
    // 0x2b163c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2b163cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2b1640:
    // 0x2b1640: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_2b1644:
    if (ctx->pc == 0x2B1644u) {
        ctx->pc = 0x2B1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1640u;
        // 0x2b1644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1648u;
        goto label_2b1648;
    }
    ctx->pc = 0x2B1640u;
    {
        const bool branch_taken_0x2b1640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1640u;
        // 0x2b1644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1640) {
            ctx->pc = 0x2B176Cu;
            goto label_2b176c;
        }
    }
    ctx->pc = 0x2B1648u;
label_2b1648:
    // 0x2b1648: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2b164c:
    if (ctx->pc == 0x2B164Cu) {
        ctx->pc = 0x2B164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1648u;
        // 0x2b164c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1650u;
        goto label_2b1650;
    }
    ctx->pc = 0x2B1648u;
    {
        const bool branch_taken_0x2b1648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1648u;
        // 0x2b164c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1648) {
            ctx->pc = 0x2B1668u;
            goto label_2b1668;
        }
    }
    ctx->pc = 0x2B1650u;
label_2b1650:
    // 0x2b1650: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x2b1650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
label_2b1654:
    // 0x2b1654: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x2b1654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_2b1658:
    // 0x2b1658: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b1658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b165c:
    // 0x2b165c: 0xc440013c  lwc1        $f0, 0x13C($v0)
    ctx->pc = 0x2b165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1660:
    // 0x2b1660: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b1664:
    if (ctx->pc == 0x2B1664u) {
        ctx->pc = 0x2B1664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1660u;
        // 0x2b1664: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1668u;
        goto label_2b1668;
    }
    ctx->pc = 0x2B1660u;
    {
        const bool branch_taken_0x2b1660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1660u;
        // 0x2b1664: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1660) {
            ctx->pc = 0x2B166Cu;
            goto label_2b166c;
        }
    }
    ctx->pc = 0x2B1668u;
label_2b1668:
    // 0x2b1668: 0xc454013c  lwc1        $f20, 0x13C($v0)
    ctx->pc = 0x2b1668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b166c:
    // 0x2b166c: 0xc66c025c  lwc1        $f12, 0x25C($s3)
    ctx->pc = 0x2b166cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b1670:
    // 0x2b1670: 0xc0cd790  jal         func_335E40
label_2b1674:
    if (ctx->pc == 0x2B1674u) {
        ctx->pc = 0x2B1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1670u;
        // 0x2b1674: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1678u;
        goto label_2b1678;
    }
    ctx->pc = 0x2B1670u;
    SET_GPR_U32(ctx, 31, 0x2B1678u);
    ctx->pc = 0x2B1674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1670u;
    // 0x2b1674: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x2B1670u, 0x2B1678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1678u;
label_2b1678:
    // 0x2b1678: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2b1678u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b167c:
    // 0x2b167c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2b167cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2b1680:
    // 0x2b1680: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2b1680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2b1684:
    // 0x2b1684: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b1684u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b1688:
    // 0x2b1688: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b1688u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2b168c:
    // 0x2b168c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2b168cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2b1690:
    // 0x2b1690: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2b1690u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2b1694:
    // 0x2b1694: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2b1694u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2b1698:
    // 0x2b1698: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2b1698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2b169c:
    // 0x2b169c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2b169cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2b16a0:
    // 0x2b16a0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2b16a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2b16a4:
    // 0x2b16a4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2b16a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b16a8:
    // 0x2b16a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b16a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b16ac:
    // 0x2b16ac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b16acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2b16b0:
    // 0x2b16b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2b16b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2b16b4:
    // 0x2b16b4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2b16b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2b16b8:
    // 0x2b16b8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2b16b8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2b16bc:
    // 0x2b16bc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2b16bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2b16c0:
    // 0x2b16c0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2b16c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2b16c4:
    // 0x2b16c4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2b16c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2b16c8:
    // 0x2b16c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b16c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b16cc:
    // 0x2b16cc: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2b16ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2b16d0:
    // 0x2b16d0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2b16d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b16d4:
    // 0x2b16d4: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2b16d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_2b16d8:
    // 0x2b16d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b16d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b16dc:
    // 0x2b16dc: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2b16dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2b16e0:
    // 0x2b16e0: 0xc0a7cf2  jal         func_29F3C8
label_2b16e4:
    if (ctx->pc == 0x2B16E4u) {
        ctx->pc = 0x2B16E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16E0u;
        // 0x2b16e4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B16E8u;
        goto label_2b16e8;
    }
    ctx->pc = 0x2B16E0u;
    SET_GPR_U32(ctx, 31, 0x2B16E8u);
    ctx->pc = 0x2B16E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B16E0u;
    // 0x2b16e4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x2B16E0u, 0x2B16E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B16E8u;
label_2b16e8:
    // 0x2b16e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b16e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b16ec:
    // 0x2b16ec: 0x1443004f  bne         $v0, $v1, . + 4 + (0x4F << 2)
label_2b16f0:
    if (ctx->pc == 0x2B16F0u) {
        ctx->pc = 0x2B16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16ECu;
        // 0x2b16f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B16F4u;
        goto label_2b16f4;
    }
    ctx->pc = 0x2B16ECu;
    {
        const bool branch_taken_0x2b16ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16ECu;
        // 0x2b16f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16ec) {
            ctx->pc = 0x2B182Cu;
            goto label_2b182c;
        }
    }
    ctx->pc = 0x2B16F4u;
label_2b16f4:
    // 0x2b16f4: 0xc092414  jal         func_249050
label_2b16f8:
    if (ctx->pc == 0x2B16F8u) {
        ctx->pc = 0x2B16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16F4u;
        // 0x2b16f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B16FCu;
        goto label_2b16fc;
    }
    ctx->pc = 0x2B16F4u;
    SET_GPR_U32(ctx, 31, 0x2B16FCu);
    ctx->pc = 0x2B16F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B16F4u;
    // 0x2b16f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249050u, 0x2B16F4u, 0x2B16FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B16FCu;
label_2b16fc:
    // 0x2b16fc: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_2b1700:
    if (ctx->pc == 0x2B1700u) {
        ctx->pc = 0x2B1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16FCu;
        // 0x2b1700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1704u;
        goto label_2b1704;
    }
    ctx->pc = 0x2B16FCu;
    {
        const bool branch_taken_0x2b16fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16FCu;
        // 0x2b1700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16fc) {
            ctx->pc = 0x2B182Cu;
            goto label_2b182c;
        }
    }
    ctx->pc = 0x2B1704u;
label_2b1704:
    // 0x2b1704: 0xc0a367c  jal         func_28D9F0
label_2b1708:
    if (ctx->pc == 0x2B1708u) {
        ctx->pc = 0x2B1708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1704u;
        // 0x2b1708: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B170Cu;
        goto label_2b170c;
    }
    ctx->pc = 0x2B1704u;
    SET_GPR_U32(ctx, 31, 0x2B170Cu);
    ctx->pc = 0x2B1708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1704u;
    // 0x2b1708: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B1704u, 0x2B170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B170Cu;
label_2b170c:
    // 0x2b170c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2b1710:
    if (ctx->pc == 0x2B1710u) {
        ctx->pc = 0x2B1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B170Cu;
        // 0x2b1710: 0x8e4abd30  lw          $t2, -0x42D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1714u;
        goto label_2b1714;
    }
    ctx->pc = 0x2B170Cu;
    {
        const bool branch_taken_0x2b170c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B170Cu;
        // 0x2b1710: 0x8e4abd30  lw          $t2, -0x42D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b170c) {
            ctx->pc = 0x2B1740u;
            goto label_2b1740;
        }
    }
    ctx->pc = 0x2B1714u;
label_2b1714:
    // 0x2b1714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1718:
    // 0x2b1718: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b1718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b171c:
    // 0x2b171c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b171cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1720:
    // 0x2b1720: 0x8e270034  lw          $a3, 0x34($s1)
    ctx->pc = 0x2b1720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2b1724:
    // 0x2b1724: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b1724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1728:
    // 0x2b1728: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2b1728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2b172c:
    // 0x2b172c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2b172cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2b1730:
    // 0x2b1730: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b1730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b1734:
    // 0x2b1734: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b1734u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1738:
    // 0x2b1738: 0xc0bee7a  jal         func_2FB9E8
label_2b173c:
    if (ctx->pc == 0x2B173Cu) {
        ctx->pc = 0x2B173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1738u;
        // 0x2b173c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1740u;
        goto label_2b1740;
    }
    ctx->pc = 0x2B1738u;
    SET_GPR_U32(ctx, 31, 0x2B1740u);
    ctx->pc = 0x2B173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1738u;
    // 0x2b173c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2B1738u, 0x2B1740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1740u;
label_2b1740:
    // 0x2b1740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b1744:
    // 0x2b1744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b1744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1748:
    // 0x2b1748: 0xc0ac3b6  jal         func_2B0ED8
label_2b174c:
    if (ctx->pc == 0x2B174Cu) {
        ctx->pc = 0x2B174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1748u;
        // 0x2b174c: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1750u;
        goto label_2b1750;
    }
    ctx->pc = 0x2B1748u;
    SET_GPR_U32(ctx, 31, 0x2B1750u);
    ctx->pc = 0x2B174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1748u;
    // 0x2b174c: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0ED8u, 0x2B1748u, 0x2B1750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1750u;
label_2b1750:
    // 0x2b1750: 0x92230059  lbu         $v1, 0x59($s1)
    ctx->pc = 0x2b1750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 89)));
label_2b1754:
    // 0x2b1754: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2b1758:
    if (ctx->pc == 0x2B1758u) {
        ctx->pc = 0x2B1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1754u;
        // 0x2b1758: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B175Cu;
        goto label_2b175c;
    }
    ctx->pc = 0x2B1754u;
    {
        const bool branch_taken_0x2b1754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1754u;
        // 0x2b1758: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1754) {
            ctx->pc = 0x2B1760u;
            goto label_2b1760;
        }
    }
    ctx->pc = 0x2B175Cu;
label_2b175c:
    // 0x2b175c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1760:
    // 0x2b1760: 0xa2220059  sb          $v0, 0x59($s1)
    ctx->pc = 0x2b1760u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 2));
label_2b1764:
    // 0x2b1764: 0x10000031  b           . + 4 + (0x31 << 2)
label_2b1768:
    if (ctx->pc == 0x2B1768u) {
        ctx->pc = 0x2B1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1764u;
        // 0x2b1768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B176Cu;
        goto label_2b176c;
    }
    ctx->pc = 0x2B1764u;
    {
        const bool branch_taken_0x2b1764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1764u;
        // 0x2b1768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1764) {
            ctx->pc = 0x2B182Cu;
            goto label_2b182c;
        }
    }
    ctx->pc = 0x2B176Cu;
label_2b176c:
    // 0x2b176c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b176cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b1770:
    // 0x2b1770: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_2b1774:
    if (ctx->pc == 0x2B1774u) {
        ctx->pc = 0x2B1774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1770u;
        // 0x2b1774: 0x2482fffd  addiu       $v0, $a0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1778u;
        goto label_2b1778;
    }
    ctx->pc = 0x2B1770u;
    {
        const bool branch_taken_0x2b1770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B1774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1770u;
        // 0x2b1774: 0x2482fffd  addiu       $v0, $a0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1770) {
            ctx->pc = 0x2B17ECu;
            goto label_2b17ec;
        }
    }
    ctx->pc = 0x2B1778u;
label_2b1778:
    // 0x2b1778: 0xc661025c  lwc1        $f1, 0x25C($s3)
    ctx->pc = 0x2b1778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b177c:
    // 0x2b177c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2b177cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2b1780:
    // 0x2b1780: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2b1780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2b1784:
    // 0x2b1784: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b1788:
    // 0x2b1788: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b1788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b178c:
    // 0x2b178c: 0xc0a367c  jal         func_28D9F0
label_2b1790:
    if (ctx->pc == 0x2B1790u) {
        ctx->pc = 0x2B1790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B178Cu;
        // 0x2b1790: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1794u;
        goto label_2b1794;
    }
    ctx->pc = 0x2B178Cu;
    SET_GPR_U32(ctx, 31, 0x2B1794u);
    ctx->pc = 0x2B1790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B178Cu;
    // 0x2b1790: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B178Cu, 0x2B1794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1794u;
label_2b1794:
    // 0x2b1794: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b1794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1798:
    // 0x2b1798: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2b179c:
    if (ctx->pc == 0x2B179Cu) {
        ctx->pc = 0x2B179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1798u;
        // 0x2b179c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B17A0u;
        goto label_2b17a0;
    }
    ctx->pc = 0x2B1798u;
    {
        const bool branch_taken_0x2b1798 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1798u;
        // 0x2b179c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1798) {
            ctx->pc = 0x2B17CCu;
            goto label_2b17cc;
        }
    }
    ctx->pc = 0x2B17A0u;
label_2b17a0:
    // 0x2b17a0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2b17a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_2b17a4:
    // 0x2b17a4: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2b17a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_2b17a8:
    // 0x2b17a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b17a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2b17ac:
    // 0x2b17ac: 0xc0884f6  jal         func_2213D8
label_2b17b0:
    if (ctx->pc == 0x2B17B0u) {
        ctx->pc = 0x2B17B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B17ACu;
        // 0x2b17b0: 0x4614ad02  mul.s       $f20, $f21, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B17B4u;
        goto label_2b17b4;
    }
    ctx->pc = 0x2B17ACu;
    SET_GPR_U32(ctx, 31, 0x2B17B4u);
    ctx->pc = 0x2B17B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B17ACu;
    // 0x2b17b0: 0x4614ad02  mul.s       $f20, $f21, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2B17ACu, 0x2B17B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B17B4u;
label_2b17b4:
    // 0x2b17b4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b17b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b17b8:
    // 0x2b17b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b17b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b17bc:
    // 0x2b17bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b17bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b17c0:
    // 0x2b17c0: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2b17c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2b17c4:
    // 0x2b17c4: 0xc0bf70a  jal         func_2FDC28
label_2b17c8:
    if (ctx->pc == 0x2B17C8u) {
        ctx->pc = 0x2B17C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B17C4u;
        // 0x2b17c8: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B17CCu;
        goto label_2b17cc;
    }
    ctx->pc = 0x2B17C4u;
    SET_GPR_U32(ctx, 31, 0x2B17CCu);
    ctx->pc = 0x2B17C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B17C4u;
    // 0x2b17c8: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2B17C4u, 0x2B17CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B17CCu;
label_2b17cc:
    // 0x2b17cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b17ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b17d0:
    // 0x2b17d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b17d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b17d4:
    // 0x2b17d4: 0xc0ac3b6  jal         func_2B0ED8
label_2b17d8:
    if (ctx->pc == 0x2B17D8u) {
        ctx->pc = 0x2B17D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B17D4u;
        // 0x2b17d8: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B17DCu;
        goto label_2b17dc;
    }
    ctx->pc = 0x2B17D4u;
    SET_GPR_U32(ctx, 31, 0x2B17DCu);
    ctx->pc = 0x2B17D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B17D4u;
    // 0x2b17d8: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0ED8u, 0x2B17D4u, 0x2B17DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B17DCu;
label_2b17dc:
    // 0x2b17dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b17dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b17e0:
    // 0x2b17e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b17e4:
    // 0x2b17e4: 0x10000011  b           . + 4 + (0x11 << 2)
label_2b17e8:
    if (ctx->pc == 0x2B17E8u) {
        ctx->pc = 0x2B17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B17E4u;
        // 0x2b17e8: 0xa2230059  sb          $v1, 0x59($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B17ECu;
        goto label_2b17ec;
    }
    ctx->pc = 0x2B17E4u;
    {
        const bool branch_taken_0x2b17e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B17E4u;
        // 0x2b17e8: 0xa2230059  sb          $v1, 0x59($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b17e4) {
            ctx->pc = 0x2B182Cu;
            goto label_2b182c;
        }
    }
    ctx->pc = 0x2B17ECu;
label_2b17ec:
    // 0x2b17ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b17ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b17f0:
    // 0x2b17f0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b17f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2b17f4:
    // 0x2b17f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2b17f8:
    if (ctx->pc == 0x2B17F8u) {
        ctx->pc = 0x2B17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B17F4u;
        // 0x2b17f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B17FCu;
        goto label_2b17fc;
    }
    ctx->pc = 0x2B17F4u;
    {
        const bool branch_taken_0x2b17f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B17F4u;
        // 0x2b17f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b17f4) {
            ctx->pc = 0x2B182Cu;
            goto label_2b182c;
        }
    }
    ctx->pc = 0x2B17FCu;
label_2b17fc:
    // 0x2b17fc: 0x9222005a  lbu         $v0, 0x5A($s1)
    ctx->pc = 0x2b17fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
label_2b1800:
    // 0x2b1800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b1800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b1804:
    // 0x2b1804: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b1804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b1808:
    // 0x2b1808: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x2b1808u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2b180c:
    // 0x2b180c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2b1810:
    if (ctx->pc == 0x2B1810u) {
        ctx->pc = 0x2B1810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B180Cu;
        // 0x2b1810: 0xa222005a  sb          $v0, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1814u;
        goto label_2b1814;
    }
    ctx->pc = 0x2B180Cu;
    {
        const bool branch_taken_0x2b180c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B180Cu;
        // 0x2b1810: 0xa222005a  sb          $v0, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b180c) {
            ctx->pc = 0x2B1828u;
            goto label_2b1828;
        }
    }
    ctx->pc = 0x2B1814u;
label_2b1814:
    // 0x2b1814: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_2b1818:
    if (ctx->pc == 0x2B1818u) {
        ctx->pc = 0x2B1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1814u;
        // 0x2b1818: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B181Cu;
        goto label_2b181c;
    }
    ctx->pc = 0x2B1814u;
    {
        const bool branch_taken_0x2b1814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1814u;
        // 0x2b1818: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1814) {
            ctx->pc = 0x2B1820u;
            goto label_2b1820;
        }
    }
    ctx->pc = 0x2B181Cu;
label_2b181c:
    // 0x2b181c: 0xa202004f  sb          $v0, 0x4F($s0)
    ctx->pc = 0x2b181cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
label_2b1820:
    // 0x2b1820: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b1820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b1824:
    // 0x2b1824: 0xa2220059  sb          $v0, 0x59($s1)
    ctx->pc = 0x2b1824u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 2));
label_2b1828:
    // 0x2b1828: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b1828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b182c:
    // 0x2b182c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2b182cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2b1830:
    // 0x2b1830: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2b1830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2b1834:
    // 0x2b1834: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2b1834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2b1838:
    // 0x2b1838: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2b1838u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2b183c:
    // 0x2b183c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2b183cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2b1840:
    // 0x2b1840: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2b1840u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2b1844:
    // 0x2b1844: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2b1844u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2b1848:
    // 0x2b1848: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2b1848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b184c:
    // 0x2b184c: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2b184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2b1850:
    // 0x2b1850: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2b1850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b1854:
    // 0x2b1854: 0x3e00008  jr          $ra
label_2b1858:
    if (ctx->pc == 0x2B1858u) {
        ctx->pc = 0x2B1858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1854u;
        // 0x2b1858: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B185Cu;
        goto label_2b185c;
    }
    ctx->pc = 0x2B1854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1854u;
        // 0x2b1858: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B185Cu;
label_2b185c:
    // 0x2b185c: 0x0  nop
    ctx->pc = 0x2b185cu;
    // NOP
    ctx->pc = 0x2b1860u;
}
