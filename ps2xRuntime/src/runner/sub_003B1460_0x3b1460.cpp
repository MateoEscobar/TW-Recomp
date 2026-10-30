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

// Function: sub_003B1460
// Address: 0x3b1460 - 0x3b17e8
void sub_003B1460_0x3b1460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1460_0x3b1460");
#endif

    switch (ctx->pc) {
        case 0x3b1460u: goto label_3b1460;
        case 0x3b1464u: goto label_3b1464;
        case 0x3b1468u: goto label_3b1468;
        case 0x3b146cu: goto label_3b146c;
        case 0x3b1470u: goto label_3b1470;
        case 0x3b1474u: goto label_3b1474;
        case 0x3b1478u: goto label_3b1478;
        case 0x3b147cu: goto label_3b147c;
        case 0x3b1480u: goto label_3b1480;
        case 0x3b1484u: goto label_3b1484;
        case 0x3b1488u: goto label_3b1488;
        case 0x3b148cu: goto label_3b148c;
        case 0x3b1490u: goto label_3b1490;
        case 0x3b1494u: goto label_3b1494;
        case 0x3b1498u: goto label_3b1498;
        case 0x3b149cu: goto label_3b149c;
        case 0x3b14a0u: goto label_3b14a0;
        case 0x3b14a4u: goto label_3b14a4;
        case 0x3b14a8u: goto label_3b14a8;
        case 0x3b14acu: goto label_3b14ac;
        case 0x3b14b0u: goto label_3b14b0;
        case 0x3b14b4u: goto label_3b14b4;
        case 0x3b14b8u: goto label_3b14b8;
        case 0x3b14bcu: goto label_3b14bc;
        case 0x3b14c0u: goto label_3b14c0;
        case 0x3b14c4u: goto label_3b14c4;
        case 0x3b14c8u: goto label_3b14c8;
        case 0x3b14ccu: goto label_3b14cc;
        case 0x3b14d0u: goto label_3b14d0;
        case 0x3b14d4u: goto label_3b14d4;
        case 0x3b14d8u: goto label_3b14d8;
        case 0x3b14dcu: goto label_3b14dc;
        case 0x3b14e0u: goto label_3b14e0;
        case 0x3b14e4u: goto label_3b14e4;
        case 0x3b14e8u: goto label_3b14e8;
        case 0x3b14ecu: goto label_3b14ec;
        case 0x3b14f0u: goto label_3b14f0;
        case 0x3b14f4u: goto label_3b14f4;
        case 0x3b14f8u: goto label_3b14f8;
        case 0x3b14fcu: goto label_3b14fc;
        case 0x3b1500u: goto label_3b1500;
        case 0x3b1504u: goto label_3b1504;
        case 0x3b1508u: goto label_3b1508;
        case 0x3b150cu: goto label_3b150c;
        case 0x3b1510u: goto label_3b1510;
        case 0x3b1514u: goto label_3b1514;
        case 0x3b1518u: goto label_3b1518;
        case 0x3b151cu: goto label_3b151c;
        case 0x3b1520u: goto label_3b1520;
        case 0x3b1524u: goto label_3b1524;
        case 0x3b1528u: goto label_3b1528;
        case 0x3b152cu: goto label_3b152c;
        case 0x3b1530u: goto label_3b1530;
        case 0x3b1534u: goto label_3b1534;
        case 0x3b1538u: goto label_3b1538;
        case 0x3b153cu: goto label_3b153c;
        case 0x3b1540u: goto label_3b1540;
        case 0x3b1544u: goto label_3b1544;
        case 0x3b1548u: goto label_3b1548;
        case 0x3b154cu: goto label_3b154c;
        case 0x3b1550u: goto label_3b1550;
        case 0x3b1554u: goto label_3b1554;
        case 0x3b1558u: goto label_3b1558;
        case 0x3b155cu: goto label_3b155c;
        case 0x3b1560u: goto label_3b1560;
        case 0x3b1564u: goto label_3b1564;
        case 0x3b1568u: goto label_3b1568;
        case 0x3b156cu: goto label_3b156c;
        case 0x3b1570u: goto label_3b1570;
        case 0x3b1574u: goto label_3b1574;
        case 0x3b1578u: goto label_3b1578;
        case 0x3b157cu: goto label_3b157c;
        case 0x3b1580u: goto label_3b1580;
        case 0x3b1584u: goto label_3b1584;
        case 0x3b1588u: goto label_3b1588;
        case 0x3b158cu: goto label_3b158c;
        case 0x3b1590u: goto label_3b1590;
        case 0x3b1594u: goto label_3b1594;
        case 0x3b1598u: goto label_3b1598;
        case 0x3b159cu: goto label_3b159c;
        case 0x3b15a0u: goto label_3b15a0;
        case 0x3b15a4u: goto label_3b15a4;
        case 0x3b15a8u: goto label_3b15a8;
        case 0x3b15acu: goto label_3b15ac;
        case 0x3b15b0u: goto label_3b15b0;
        case 0x3b15b4u: goto label_3b15b4;
        case 0x3b15b8u: goto label_3b15b8;
        case 0x3b15bcu: goto label_3b15bc;
        case 0x3b15c0u: goto label_3b15c0;
        case 0x3b15c4u: goto label_3b15c4;
        case 0x3b15c8u: goto label_3b15c8;
        case 0x3b15ccu: goto label_3b15cc;
        case 0x3b15d0u: goto label_3b15d0;
        case 0x3b15d4u: goto label_3b15d4;
        case 0x3b15d8u: goto label_3b15d8;
        case 0x3b15dcu: goto label_3b15dc;
        case 0x3b15e0u: goto label_3b15e0;
        case 0x3b15e4u: goto label_3b15e4;
        case 0x3b15e8u: goto label_3b15e8;
        case 0x3b15ecu: goto label_3b15ec;
        case 0x3b15f0u: goto label_3b15f0;
        case 0x3b15f4u: goto label_3b15f4;
        case 0x3b15f8u: goto label_3b15f8;
        case 0x3b15fcu: goto label_3b15fc;
        case 0x3b1600u: goto label_3b1600;
        case 0x3b1604u: goto label_3b1604;
        case 0x3b1608u: goto label_3b1608;
        case 0x3b160cu: goto label_3b160c;
        case 0x3b1610u: goto label_3b1610;
        case 0x3b1614u: goto label_3b1614;
        case 0x3b1618u: goto label_3b1618;
        case 0x3b161cu: goto label_3b161c;
        case 0x3b1620u: goto label_3b1620;
        case 0x3b1624u: goto label_3b1624;
        case 0x3b1628u: goto label_3b1628;
        case 0x3b162cu: goto label_3b162c;
        case 0x3b1630u: goto label_3b1630;
        case 0x3b1634u: goto label_3b1634;
        case 0x3b1638u: goto label_3b1638;
        case 0x3b163cu: goto label_3b163c;
        case 0x3b1640u: goto label_3b1640;
        case 0x3b1644u: goto label_3b1644;
        case 0x3b1648u: goto label_3b1648;
        case 0x3b164cu: goto label_3b164c;
        case 0x3b1650u: goto label_3b1650;
        case 0x3b1654u: goto label_3b1654;
        case 0x3b1658u: goto label_3b1658;
        case 0x3b165cu: goto label_3b165c;
        case 0x3b1660u: goto label_3b1660;
        case 0x3b1664u: goto label_3b1664;
        case 0x3b1668u: goto label_3b1668;
        case 0x3b166cu: goto label_3b166c;
        case 0x3b1670u: goto label_3b1670;
        case 0x3b1674u: goto label_3b1674;
        case 0x3b1678u: goto label_3b1678;
        case 0x3b167cu: goto label_3b167c;
        case 0x3b1680u: goto label_3b1680;
        case 0x3b1684u: goto label_3b1684;
        case 0x3b1688u: goto label_3b1688;
        case 0x3b168cu: goto label_3b168c;
        case 0x3b1690u: goto label_3b1690;
        case 0x3b1694u: goto label_3b1694;
        case 0x3b1698u: goto label_3b1698;
        case 0x3b169cu: goto label_3b169c;
        case 0x3b16a0u: goto label_3b16a0;
        case 0x3b16a4u: goto label_3b16a4;
        case 0x3b16a8u: goto label_3b16a8;
        case 0x3b16acu: goto label_3b16ac;
        case 0x3b16b0u: goto label_3b16b0;
        case 0x3b16b4u: goto label_3b16b4;
        case 0x3b16b8u: goto label_3b16b8;
        case 0x3b16bcu: goto label_3b16bc;
        case 0x3b16c0u: goto label_3b16c0;
        case 0x3b16c4u: goto label_3b16c4;
        case 0x3b16c8u: goto label_3b16c8;
        case 0x3b16ccu: goto label_3b16cc;
        case 0x3b16d0u: goto label_3b16d0;
        case 0x3b16d4u: goto label_3b16d4;
        case 0x3b16d8u: goto label_3b16d8;
        case 0x3b16dcu: goto label_3b16dc;
        case 0x3b16e0u: goto label_3b16e0;
        case 0x3b16e4u: goto label_3b16e4;
        case 0x3b16e8u: goto label_3b16e8;
        case 0x3b16ecu: goto label_3b16ec;
        case 0x3b16f0u: goto label_3b16f0;
        case 0x3b16f4u: goto label_3b16f4;
        case 0x3b16f8u: goto label_3b16f8;
        case 0x3b16fcu: goto label_3b16fc;
        case 0x3b1700u: goto label_3b1700;
        case 0x3b1704u: goto label_3b1704;
        case 0x3b1708u: goto label_3b1708;
        case 0x3b170cu: goto label_3b170c;
        case 0x3b1710u: goto label_3b1710;
        case 0x3b1714u: goto label_3b1714;
        case 0x3b1718u: goto label_3b1718;
        case 0x3b171cu: goto label_3b171c;
        case 0x3b1720u: goto label_3b1720;
        case 0x3b1724u: goto label_3b1724;
        case 0x3b1728u: goto label_3b1728;
        case 0x3b172cu: goto label_3b172c;
        case 0x3b1730u: goto label_3b1730;
        case 0x3b1734u: goto label_3b1734;
        case 0x3b1738u: goto label_3b1738;
        case 0x3b173cu: goto label_3b173c;
        case 0x3b1740u: goto label_3b1740;
        case 0x3b1744u: goto label_3b1744;
        case 0x3b1748u: goto label_3b1748;
        case 0x3b174cu: goto label_3b174c;
        case 0x3b1750u: goto label_3b1750;
        case 0x3b1754u: goto label_3b1754;
        case 0x3b1758u: goto label_3b1758;
        case 0x3b175cu: goto label_3b175c;
        case 0x3b1760u: goto label_3b1760;
        case 0x3b1764u: goto label_3b1764;
        case 0x3b1768u: goto label_3b1768;
        case 0x3b176cu: goto label_3b176c;
        case 0x3b1770u: goto label_3b1770;
        case 0x3b1774u: goto label_3b1774;
        case 0x3b1778u: goto label_3b1778;
        case 0x3b177cu: goto label_3b177c;
        case 0x3b1780u: goto label_3b1780;
        case 0x3b1784u: goto label_3b1784;
        case 0x3b1788u: goto label_3b1788;
        case 0x3b178cu: goto label_3b178c;
        case 0x3b1790u: goto label_3b1790;
        case 0x3b1794u: goto label_3b1794;
        case 0x3b1798u: goto label_3b1798;
        case 0x3b179cu: goto label_3b179c;
        case 0x3b17a0u: goto label_3b17a0;
        case 0x3b17a4u: goto label_3b17a4;
        case 0x3b17a8u: goto label_3b17a8;
        case 0x3b17acu: goto label_3b17ac;
        case 0x3b17b0u: goto label_3b17b0;
        case 0x3b17b4u: goto label_3b17b4;
        case 0x3b17b8u: goto label_3b17b8;
        case 0x3b17bcu: goto label_3b17bc;
        case 0x3b17c0u: goto label_3b17c0;
        case 0x3b17c4u: goto label_3b17c4;
        case 0x3b17c8u: goto label_3b17c8;
        case 0x3b17ccu: goto label_3b17cc;
        case 0x3b17d0u: goto label_3b17d0;
        case 0x3b17d4u: goto label_3b17d4;
        case 0x3b17d8u: goto label_3b17d8;
        case 0x3b17dcu: goto label_3b17dc;
        case 0x3b17e0u: goto label_3b17e0;
        case 0x3b17e4u: goto label_3b17e4;
        default: break;
    }

    ctx->pc = 0x3b1460u;

label_3b1460:
    // 0x3b1460: 0x27bdfa90  addiu       $sp, $sp, -0x570
    ctx->pc = 0x3b1460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965904));
label_3b1464:
    // 0x3b1464: 0x7fb00540  sq          $s0, 0x540($sp)
    ctx->pc = 0x3b1464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 16));
label_3b1468:
    // 0x3b1468: 0x7fb10530  sq          $s1, 0x530($sp)
    ctx->pc = 0x3b1468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 17));
label_3b146c:
    // 0x3b146c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b146cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b1470:
    // 0x3b1470: 0x7fb20520  sq          $s2, 0x520($sp)
    ctx->pc = 0x3b1470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 18));
label_3b1474:
    // 0x3b1474: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b1474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b1478:
    // 0x3b1478: 0x7fb30510  sq          $s3, 0x510($sp)
    ctx->pc = 0x3b1478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 19));
label_3b147c:
    // 0x3b147c: 0x7fb504f0  sq          $s5, 0x4F0($sp)
    ctx->pc = 0x3b147cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 21));
label_3b1480:
    // 0x3b1480: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3b1480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1484:
    // 0x3b1484: 0x7fb604e0  sq          $s6, 0x4E0($sp)
    ctx->pc = 0x3b1484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 22));
label_3b1488:
    // 0x3b1488: 0x7fb704d0  sq          $s7, 0x4D0($sp)
    ctx->pc = 0x3b1488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 23));
label_3b148c:
    // 0x3b148c: 0x7fb40500  sq          $s4, 0x500($sp)
    ctx->pc = 0x3b148cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 20));
label_3b1490:
    // 0x3b1490: 0x7fbe04c0  sq          $fp, 0x4C0($sp)
    ctx->pc = 0x3b1490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 30));
label_3b1494:
    // 0x3b1494: 0xffbf04b0  sd          $ra, 0x4B0($sp)
    ctx->pc = 0x3b1494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 31));
label_3b1498:
    // 0x3b1498: 0xe7b60560  swc1        $f22, 0x560($sp)
    ctx->pc = 0x3b1498u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1376), bits); }
label_3b149c:
    // 0x3b149c: 0xe7b50558  swc1        $f21, 0x558($sp)
    ctx->pc = 0x3b149cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1368), bits); }
label_3b14a0:
    // 0x3b14a0: 0xe7b40550  swc1        $f20, 0x550($sp)
    ctx->pc = 0x3b14a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1360), bits); }
label_3b14a4:
    // 0x3b14a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b14a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b14a8:
    // 0x3b14a8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b14a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b14ac:
    // 0x3b14ac: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b14acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b14b0:
    // 0x3b14b0: 0x40f809  jalr        $v0
label_3b14b4:
    if (ctx->pc == 0x3B14B4u) {
        ctx->pc = 0x3B14B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14B0u;
        // 0x3b14b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B14B8u;
        goto label_3b14b8;
    }
    ctx->pc = 0x3B14B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B14B8u);
        ctx->pc = 0x3B14B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14B0u;
        // 0x3b14b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B14B0u, 0x3B14B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B14B8u;
label_3b14b8:
    // 0x3b14b8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3b14b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3b14bc:
    // 0x3b14bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3b14bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3b14c0:
    // 0x3b14c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b14c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b14c4:
    // 0x3b14c4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3b14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3b14c8:
    // 0x3b14c8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3b14c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3b14cc:
    // 0x3b14cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3b14ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b14d0:
    // 0x3b14d0: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x3b14d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3b14d4:
    // 0x3b14d4: 0xc0e858c  jal         func_3A1630
label_3b14d8:
    if (ctx->pc == 0x3B14D8u) {
        ctx->pc = 0x3B14D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14D4u;
        // 0x3b14d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B14DCu;
        goto label_3b14dc;
    }
    ctx->pc = 0x3B14D4u;
    SET_GPR_U32(ctx, 31, 0x3B14DCu);
    ctx->pc = 0x3B14D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B14D4u;
    // 0x3b14d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B14D4u, 0x3B14DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B14DCu;
label_3b14dc:
    // 0x3b14dc: 0xc0ea146  jal         func_3A8518
label_3b14e0:
    if (ctx->pc == 0x3B14E0u) {
        ctx->pc = 0x3B14E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14DCu;
        // 0x3b14e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B14E4u;
        goto label_3b14e4;
    }
    ctx->pc = 0x3B14DCu;
    SET_GPR_U32(ctx, 31, 0x3B14E4u);
    ctx->pc = 0x3B14E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B14DCu;
    // 0x3b14e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B14DCu, 0x3B14E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B14E4u;
label_3b14e4:
    // 0x3b14e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b14e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b14e8:
    // 0x3b14e8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3b14e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b14ec:
    // 0x3b14ec: 0xc0ea12a  jal         func_3A84A8
label_3b14f0:
    if (ctx->pc == 0x3B14F0u) {
        ctx->pc = 0x3B14F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14ECu;
        // 0x3b14f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B14F4u;
        goto label_3b14f4;
    }
    ctx->pc = 0x3B14ECu;
    SET_GPR_U32(ctx, 31, 0x3B14F4u);
    ctx->pc = 0x3B14F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B14ECu;
    // 0x3b14f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B14ECu, 0x3B14F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B14F4u;
label_3b14f4:
    // 0x3b14f4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b14f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b14f8:
    // 0x3b14f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b14f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b14fc:
    // 0x3b14fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b14fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1500:
    // 0x3b1500: 0xc0ea12a  jal         func_3A84A8
label_3b1504:
    if (ctx->pc == 0x3B1504u) {
        ctx->pc = 0x3B1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1500u;
        // 0x3b1504: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1508u;
        goto label_3b1508;
    }
    ctx->pc = 0x3B1500u;
    SET_GPR_U32(ctx, 31, 0x3B1508u);
    ctx->pc = 0x3B1504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1500u;
    // 0x3b1504: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B1500u, 0x3B1508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1508u;
label_3b1508:
    // 0x3b1508: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b1508u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b150c:
    // 0x3b150c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b150cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1510:
    // 0x3b1510: 0xc0ea146  jal         func_3A8518
label_3b1514:
    if (ctx->pc == 0x3B1514u) {
        ctx->pc = 0x3B1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1510u;
        // 0x3b1514: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1518u;
        goto label_3b1518;
    }
    ctx->pc = 0x3B1510u;
    SET_GPR_U32(ctx, 31, 0x3B1518u);
    ctx->pc = 0x3B1514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1510u;
    // 0x3b1514: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B1510u, 0x3B1518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1518u;
label_3b1518:
    // 0x3b1518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b1518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b151c:
    // 0x3b151c: 0xc0ea14c  jal         func_3A8530
label_3b1520:
    if (ctx->pc == 0x3B1520u) {
        ctx->pc = 0x3B1520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B151Cu;
        // 0x3b1520: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1524u;
        goto label_3b1524;
    }
    ctx->pc = 0x3B151Cu;
    SET_GPR_U32(ctx, 31, 0x3B1524u);
    ctx->pc = 0x3B1520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B151Cu;
    // 0x3b1520: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B151Cu, 0x3B1524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1524u;
label_3b1524:
    // 0x3b1524: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b1524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1528:
    // 0x3b1528: 0xc0ea146  jal         func_3A8518
label_3b152c:
    if (ctx->pc == 0x3B152Cu) {
        ctx->pc = 0x3B152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1528u;
        // 0x3b152c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1530u;
        goto label_3b1530;
    }
    ctx->pc = 0x3B1528u;
    SET_GPR_U32(ctx, 31, 0x3B1530u);
    ctx->pc = 0x3B152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1528u;
    // 0x3b152c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B1528u, 0x3B1530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1530u;
label_3b1530:
    // 0x3b1530: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3b1530u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1534:
    // 0x3b1534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1538:
    // 0x3b1538: 0xc0e862e  jal         func_3A18B8
label_3b153c:
    if (ctx->pc == 0x3B153Cu) {
        ctx->pc = 0x3B153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1538u;
        // 0x3b153c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1540u;
        goto label_3b1540;
    }
    ctx->pc = 0x3B1538u;
    SET_GPR_U32(ctx, 31, 0x3B1540u);
    ctx->pc = 0x3B153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1538u;
    // 0x3b153c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3B1538u, 0x3B1540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1540u;
label_3b1540:
    // 0x3b1540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1544:
    // 0x3b1544: 0xc0e896c  jal         func_3A25B0
label_3b1548:
    if (ctx->pc == 0x3B1548u) {
        ctx->pc = 0x3B1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1544u;
        // 0x3b1548: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B154Cu;
        goto label_3b154c;
    }
    ctx->pc = 0x3B1544u;
    SET_GPR_U32(ctx, 31, 0x3B154Cu);
    ctx->pc = 0x3B1548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1544u;
    // 0x3b1548: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3B1544u, 0x3B154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B154Cu;
label_3b154c:
    // 0x3b154c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3b154cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b1550:
    // 0x3b1550: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b1550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b1554:
    // 0x3b1554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b1554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b1558:
    // 0x3b1558: 0x846500a0  lh          $a1, 0xA0($v1)
    ctx->pc = 0x3b1558u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_3b155c:
    // 0x3b155c: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x3b155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_3b1560:
    // 0x3b1560: 0x40f809  jalr        $v0
label_3b1564:
    if (ctx->pc == 0x3B1564u) {
        ctx->pc = 0x3B1564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1560u;
        // 0x3b1564: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1568u;
        goto label_3b1568;
    }
    ctx->pc = 0x3B1560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B1568u);
        ctx->pc = 0x3B1564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1560u;
        // 0x3b1564: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1560u, 0x3B1568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1568u;
label_3b1568:
    // 0x3b1568: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3b1568u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b156c:
    // 0x3b156c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3b156cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b1570:
    // 0x3b1570: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x3b1570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_3b1574:
    // 0x3b1574: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b1574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b1578:
    // 0x3b1578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b157c:
    // 0x3b157c: 0xc0e94a0  jal         func_3A5280
label_3b1580:
    if (ctx->pc == 0x3B1580u) {
        ctx->pc = 0x3B1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B157Cu;
        // 0x3b1580: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1584u;
        goto label_3b1584;
    }
    ctx->pc = 0x3B157Cu;
    SET_GPR_U32(ctx, 31, 0x3B1584u);
    ctx->pc = 0x3B1580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B157Cu;
    // 0x3b1580: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3B157Cu, 0x3B1584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1584u;
label_3b1584:
    // 0x3b1584: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3b1588:
    if (ctx->pc == 0x3B1588u) {
        ctx->pc = 0x3B1588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1584u;
        // 0x3b1588: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B158Cu;
        goto label_3b158c;
    }
    ctx->pc = 0x3B1584u;
    {
        const bool branch_taken_0x3b1584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1584) {
            ctx->pc = 0x3B1588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1584u;
            // 0x3b1588: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B15A4u;
            goto label_3b15a4;
        }
    }
    ctx->pc = 0x3B158Cu;
label_3b158c:
    // 0x3b158c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3b158cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3b1590:
    // 0x3b1590: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b1590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b1594:
    // 0x3b1594: 0xc0e947e  jal         func_3A51F8
label_3b1598:
    if (ctx->pc == 0x3B1598u) {
        ctx->pc = 0x3B1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1594u;
        // 0x3b1598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B159Cu;
        goto label_3b159c;
    }
    ctx->pc = 0x3B1594u;
    SET_GPR_U32(ctx, 31, 0x3B159Cu);
    ctx->pc = 0x3B1598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1594u;
    // 0x3b1598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3B1594u, 0x3B159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B159Cu;
label_3b159c:
    // 0x3b159c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3b15a0:
    if (ctx->pc == 0x3B15A0u) {
        ctx->pc = 0x3B15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B159Cu;
        // 0x3b15a0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15A4u;
        goto label_3b15a4;
    }
    ctx->pc = 0x3B159Cu;
    {
        const bool branch_taken_0x3b159c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b159c) {
            ctx->pc = 0x3B15A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B159Cu;
            // 0x3b15a0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B15A4u;
            goto label_3b15a4;
        }
    }
    ctx->pc = 0x3B15A4u;
label_3b15a4:
    // 0x3b15a4: 0x56600082  bnel        $s3, $zero, . + 4 + (0x82 << 2)
label_3b15a8:
    if (ctx->pc == 0x3B15A8u) {
        ctx->pc = 0x3B15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15A4u;
        // 0x3b15a8: 0x7bb00540  lq          $s0, 0x540($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15ACu;
        goto label_3b15ac;
    }
    ctx->pc = 0x3B15A4u;
    {
        const bool branch_taken_0x3b15a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b15a4) {
            ctx->pc = 0x3B15A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B15A4u;
            // 0x3b15a8: 0x7bb00540  lq          $s0, 0x540($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B17B0u;
            goto label_3b17b0;
        }
    }
    ctx->pc = 0x3B15ACu;
label_3b15ac:
    // 0x3b15ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3b15acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3b15b0:
    // 0x3b15b0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3b15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3b15b4:
    // 0x3b15b4: 0x84640454  lh          $a0, 0x454($v1)
    ctx->pc = 0x3b15b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1108)));
label_3b15b8:
    // 0x3b15b8: 0x5480007d  bnel        $a0, $zero, . + 4 + (0x7D << 2)
label_3b15bc:
    if (ctx->pc == 0x3B15BCu) {
        ctx->pc = 0x3B15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15B8u;
        // 0x3b15bc: 0x7bb00540  lq          $s0, 0x540($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15C0u;
        goto label_3b15c0;
    }
    ctx->pc = 0x3B15B8u;
    {
        const bool branch_taken_0x3b15b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b15b8) {
            ctx->pc = 0x3B15BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B15B8u;
            // 0x3b15bc: 0x7bb00540  lq          $s0, 0x540($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B17B0u;
            goto label_3b17b0;
        }
    }
    ctx->pc = 0x3B15C0u;
label_3b15c0:
    // 0x3b15c0: 0x1aa0007a  blez        $s5, . + 4 + (0x7A << 2)
label_3b15c4:
    if (ctx->pc == 0x3B15C4u) {
        ctx->pc = 0x3B15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15C0u;
        // 0x3b15c4: 0x2aa20002  slti        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15C8u;
        goto label_3b15c8;
    }
    ctx->pc = 0x3B15C0u;
    {
        const bool branch_taken_0x3b15c0 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x3B15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15C0u;
        // 0x3b15c4: 0x2aa20002  slti        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b15c0) {
            ctx->pc = 0x3B17ACu;
            goto label_3b17ac;
        }
    }
    ctx->pc = 0x3B15C8u;
label_3b15c8:
    // 0x3b15c8: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
label_3b15cc:
    if (ctx->pc == 0x3B15CCu) {
        ctx->pc = 0x3B15D0u;
        goto label_3b15d0;
    }
    ctx->pc = 0x3B15C8u;
    {
        const bool branch_taken_0x3b15c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b15c8) {
            ctx->pc = 0x3B1748u;
            goto label_3b1748;
        }
    }
    ctx->pc = 0x3B15D0u;
label_3b15d0:
    // 0x3b15d0: 0xc0e9694  jal         func_3A5A50
label_3b15d4:
    if (ctx->pc == 0x3B15D4u) {
        ctx->pc = 0x3B15D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15D0u;
        // 0x3b15d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15D8u;
        goto label_3b15d8;
    }
    ctx->pc = 0x3B15D0u;
    SET_GPR_U32(ctx, 31, 0x3B15D8u);
    ctx->pc = 0x3B15D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B15D0u;
    // 0x3b15d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3B15D0u, 0x3B15D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B15D8u;
label_3b15d8:
    // 0x3b15d8: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_3b15dc:
    if (ctx->pc == 0x3B15DCu) {
        ctx->pc = 0x3B15DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15D8u;
        // 0x3b15dc: 0x27a80480  addiu       $t0, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15E0u;
        goto label_3b15e0;
    }
    ctx->pc = 0x3B15D8u;
    {
        const bool branch_taken_0x3b15d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B15DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15D8u;
        // 0x3b15dc: 0x27a80480  addiu       $t0, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b15d8) {
            ctx->pc = 0x3B1748u;
            goto label_3b1748;
        }
    }
    ctx->pc = 0x3B15E0u;
label_3b15e0:
    // 0x3b15e0: 0x3c013faa  lui         $at, 0x3FAA
    ctx->pc = 0x3b15e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16298 << 16));
label_3b15e4:
    // 0x3b15e4: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x3b15e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_3b15e8:
    // 0x3b15e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b15e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b15ec:
    // 0x3b15ec: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x3b15ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3b15f0:
    // 0x3b15f0: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x3b15f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3b15f4:
    // 0x3b15f4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b15f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b15f8:
    // 0x3b15f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b15f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b15fc:
    // 0x3b15fc: 0x26101f98  addiu       $s0, $s0, 0x1F98
    ctx->pc = 0x3b15fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8088));
label_3b1600:
    // 0x3b1600: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b1600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b1604:
    // 0x3b1604: 0x27a60460  addiu       $a2, $sp, 0x460
    ctx->pc = 0x3b1604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3b1608:
    // 0x3b1608: 0x27a70470  addiu       $a3, $sp, 0x470
    ctx->pc = 0x3b1608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3b160c:
    // 0x3b160c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x3b160cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b1610:
    // 0x3b1610: 0xe7a00460  swc1        $f0, 0x460($sp)
    ctx->pc = 0x3b1610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3b1614:
    // 0x3b1614: 0xafb20040  sw          $s2, 0x40($sp)
    ctx->pc = 0x3b1614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 18));
label_3b1618:
    // 0x3b1618: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3b1618u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b161c:
    // 0x3b161c: 0xafb60470  sw          $s6, 0x470($sp)
    ctx->pc = 0x3b161cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 22));
label_3b1620:
    // 0x3b1620: 0xc0e9fd0  jal         func_3A7F40
label_3b1624:
    if (ctx->pc == 0x3B1624u) {
        ctx->pc = 0x3B1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1620u;
        // 0x3b1624: 0xafb70480  sw          $s7, 0x480($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1628u;
        goto label_3b1628;
    }
    ctx->pc = 0x3B1620u;
    SET_GPR_U32(ctx, 31, 0x3B1628u);
    ctx->pc = 0x3B1624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1620u;
    // 0x3b1624: 0xafb70480  sw          $s7, 0x480($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3B1620u, 0x3B1628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1628u;
label_3b1628:
    // 0x3b1628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b162c:
    // 0x3b162c: 0xc0f15bc  jal         func_3C56F0
label_3b1630:
    if (ctx->pc == 0x3B1630u) {
        ctx->pc = 0x3B1630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B162Cu;
        // 0x3b1630: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1634u;
        goto label_3b1634;
    }
    ctx->pc = 0x3B162Cu;
    SET_GPR_U32(ctx, 31, 0x3B1634u);
    ctx->pc = 0x3B1630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B162Cu;
    // 0x3b1630: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B162Cu, 0x3B1634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1634u;
label_3b1634:
    // 0x3b1634: 0x6a0005d  bltz        $s5, . + 4 + (0x5D << 2)
label_3b1638:
    if (ctx->pc == 0x3B1638u) {
        ctx->pc = 0x3B1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1634u;
        // 0x3b1638: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B163Cu;
        goto label_3b163c;
    }
    ctx->pc = 0x3B1634u;
    {
        const bool branch_taken_0x3b1634 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x3B1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1634u;
        // 0x3b1638: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1634) {
            ctx->pc = 0x3B17ACu;
            goto label_3b17ac;
        }
    }
    ctx->pc = 0x3B163Cu;
label_3b163c:
    // 0x3b163c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3b163cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3b1640:
    // 0x3b1640: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x3b1640u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
label_3b1644:
    // 0x3b1644: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3b1644u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3b1648:
    // 0x3b1648: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3b1648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_3b164c:
    // 0x3b164c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3b164cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3b1650:
    // 0x3b1650: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b1650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b1654:
    // 0x3b1654: 0x2664b8b8  addiu       $a0, $s3, -0x4748
    ctx->pc = 0x3b1654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949048));
label_3b1658:
    // 0x3b1658: 0xc0cd518  jal         func_335460
label_3b165c:
    if (ctx->pc == 0x3B165Cu) {
        ctx->pc = 0x3B165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1658u;
        // 0x3b165c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1660u;
        goto label_3b1660;
    }
    ctx->pc = 0x3B1658u;
    SET_GPR_U32(ctx, 31, 0x3B1660u);
    ctx->pc = 0x3B165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1658u;
    // 0x3b165c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B1658u, 0x3B1660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1660u;
label_3b1660:
    // 0x3b1660: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3b1660u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b1664:
    // 0x3b1664: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3b1664u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3b1668:
    // 0x3b1668: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3b1668u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3b166c:
    // 0x3b166c: 0xc12e310  jal         func_4B8C40
label_3b1670:
    if (ctx->pc == 0x3B1670u) {
        ctx->pc = 0x3B1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B166Cu;
        // 0x3b1670: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1674u;
        goto label_3b1674;
    }
    ctx->pc = 0x3B166Cu;
    SET_GPR_U32(ctx, 31, 0x3B1674u);
    ctx->pc = 0x3B1670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B166Cu;
    // 0x3b1670: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3B166Cu, 0x3B1674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1674u;
label_3b1674:
    // 0x3b1674: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3b1674u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3b1678:
    // 0x3b1678: 0xc12e29c  jal         func_4B8A70
label_3b167c:
    if (ctx->pc == 0x3B167Cu) {
        ctx->pc = 0x3B167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1678u;
        // 0x3b167c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1680u;
        goto label_3b1680;
    }
    ctx->pc = 0x3B1678u;
    SET_GPR_U32(ctx, 31, 0x3B1680u);
    ctx->pc = 0x3B167Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1678u;
    // 0x3b167c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3B1678u, 0x3B1680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1680u;
label_3b1680:
    // 0x3b1680: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x3b1680u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3b1684:
    // 0x3b1684: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x3b1684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_3b1688:
    // 0x3b1688: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x3b1688u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3b168c:
    // 0x3b168c: 0xe7b60074  swc1        $f22, 0x74($sp)
    ctx->pc = 0x3b168cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3b1690:
    // 0x3b1690: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3b1690u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b1694:
    // 0x3b1694: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3b1694u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b1698:
    // 0x3b1698: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b1698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3b169c:
    // 0x3b169c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b169cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b16a0:
    // 0x3b16a0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3b16a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3b16a4:
    // 0x3b16a4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3b16a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b16a8:
    // 0x3b16a8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3b16a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b16ac:
    // 0x3b16ac: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3b16acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b16b0:
    // 0x3b16b0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b16b0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b16b4:
    // 0x3b16b4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b16b4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b16b8:
    // 0x3b16b8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b16b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b16bc:
    // 0x3b16bc: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3b16bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b16c0:
    // 0x3b16c0: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3b16c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b16c4:
    // 0x3b16c4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b16c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b16c8:
    // 0x3b16c8: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3b16c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b16cc:
    // 0x3b16cc: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3b16ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b16d0:
    // 0x3b16d0: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3b16d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b16d4:
    // 0x3b16d4: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x3b16d4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b16d8:
    // 0x3b16d8: 0x27a50450  addiu       $a1, $sp, 0x450
    ctx->pc = 0x3b16d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3b16dc:
    // 0x3b16dc: 0x7fa30490  sq          $v1, 0x490($sp)
    ctx->pc = 0x3b16dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 3));
label_3b16e0:
    // 0x3b16e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b16e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b16e4:
    // 0x3b16e4: 0x7fa60480  sq          $a2, 0x480($sp)
    ctx->pc = 0x3b16e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 6));
label_3b16e8:
    // 0x3b16e8: 0x27a70470  addiu       $a3, $sp, 0x470
    ctx->pc = 0x3b16e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3b16ec:
    // 0x3b16ec: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3b16ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_3b16f0:
    // 0x3b16f0: 0x27a60460  addiu       $a2, $sp, 0x460
    ctx->pc = 0x3b16f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3b16f4:
    // 0x3b16f4: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3b16f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_3b16f8:
    // 0x3b16f8: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x3b16f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b16fc:
    // 0x3b16fc: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3b16fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3b1700:
    // 0x3b1700: 0x27a90490  addiu       $t1, $sp, 0x490
    ctx->pc = 0x3b1700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3b1704:
    // 0x3b1704: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3b1704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3b1708:
    // 0x3b1708: 0x27aa04a0  addiu       $t2, $sp, 0x4A0
    ctx->pc = 0x3b1708u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_3b170c:
    // 0x3b170c: 0xafa00450  sw          $zero, 0x450($sp)
    ctx->pc = 0x3b170cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
label_3b1710:
    // 0x3b1710: 0xafb20460  sw          $s2, 0x460($sp)
    ctx->pc = 0x3b1710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 18));
label_3b1714:
    // 0x3b1714: 0xafb60470  sw          $s6, 0x470($sp)
    ctx->pc = 0x3b1714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 22));
label_3b1718:
    // 0x3b1718: 0xc0ea040  jal         func_3A8100
label_3b171c:
    if (ctx->pc == 0x3B171Cu) {
        ctx->pc = 0x3B171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1718u;
        // 0x3b171c: 0xafb704a0  sw          $s7, 0x4A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1720u;
        goto label_3b1720;
    }
    ctx->pc = 0x3B1718u;
    SET_GPR_U32(ctx, 31, 0x3B1720u);
    ctx->pc = 0x3B171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1718u;
    // 0x3b171c: 0xafb704a0  sw          $s7, 0x4A0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3B1718u, 0x3B1720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1720u;
label_3b1720:
    // 0x3b1720: 0x26242010  addiu       $a0, $s1, 0x2010
    ctx->pc = 0x3b1720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8208));
label_3b1724:
    // 0x3b1724: 0xc0f15bc  jal         func_3C56F0
label_3b1728:
    if (ctx->pc == 0x3B1728u) {
        ctx->pc = 0x3B1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1724u;
        // 0x3b1728: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B172Cu;
        goto label_3b172c;
    }
    ctx->pc = 0x3B1724u;
    SET_GPR_U32(ctx, 31, 0x3B172Cu);
    ctx->pc = 0x3B1728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1724u;
    // 0x3b1728: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B1724u, 0x3B172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B172Cu;
label_3b172c:
    // 0x3b172c: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x3b172cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3b1730:
    // 0x3b1730: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x3b1730u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b1734:
    // 0x3b1734: 0x2b4102a  slt         $v0, $s5, $s4
    ctx->pc = 0x3b1734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_3b1738:
    // 0x3b1738: 0x1040ffc3  beqz        $v0, . + 4 + (-0x3D << 2)
label_3b173c:
    if (ctx->pc == 0x3B173Cu) {
        ctx->pc = 0x3B1740u;
        goto label_3b1740;
    }
    ctx->pc = 0x3B1738u;
    {
        const bool branch_taken_0x3b1738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1738) {
            ctx->pc = 0x3B1648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1648;
        }
    }
    ctx->pc = 0x3B1740u;
label_3b1740:
    // 0x3b1740: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3b1744:
    if (ctx->pc == 0x3B1744u) {
        ctx->pc = 0x3B1744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1740u;
        // 0x3b1744: 0x7bb00540  lq          $s0, 0x540($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1748u;
        goto label_3b1748;
    }
    ctx->pc = 0x3B1740u;
    {
        const bool branch_taken_0x3b1740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1740u;
        // 0x3b1744: 0x7bb00540  lq          $s0, 0x540($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1740) {
            ctx->pc = 0x3B17B0u;
            goto label_3b17b0;
        }
    }
    ctx->pc = 0x3B1748u;
label_3b1748:
    // 0x3b1748: 0xc0e9694  jal         func_3A5A50
label_3b174c:
    if (ctx->pc == 0x3B174Cu) {
        ctx->pc = 0x3B174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1748u;
        // 0x3b174c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1750u;
        goto label_3b1750;
    }
    ctx->pc = 0x3B1748u;
    SET_GPR_U32(ctx, 31, 0x3B1750u);
    ctx->pc = 0x3B174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1748u;
    // 0x3b174c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3B1748u, 0x3B1750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1750u;
label_3b1750:
    // 0x3b1750: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_3b1754:
    if (ctx->pc == 0x3B1754u) {
        ctx->pc = 0x3B1754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1750u;
        // 0x3b1754: 0x7ba70010  lq          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1758u;
        goto label_3b1758;
    }
    ctx->pc = 0x3B1750u;
    {
        const bool branch_taken_0x3b1750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1750u;
        // 0x3b1754: 0x7ba70010  lq          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1750) {
            ctx->pc = 0x3B17ACu;
            goto label_3b17ac;
        }
    }
    ctx->pc = 0x3B1758u;
label_3b1758:
    // 0x3b1758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b1758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b175c:
    // 0x3b175c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3b175cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b1760:
    // 0x3b1760: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b1760u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b1764:
    // 0x3b1764: 0x7fa70480  sq          $a3, 0x480($sp)
    ctx->pc = 0x3b1764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 7));
label_3b1768:
    // 0x3b1768: 0x26102010  addiu       $s0, $s0, 0x2010
    ctx->pc = 0x3b1768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8208));
label_3b176c:
    // 0x3b176c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b176cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1770:
    // 0x3b1770: 0x27a50440  addiu       $a1, $sp, 0x440
    ctx->pc = 0x3b1770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3b1774:
    // 0x3b1774: 0xafa20440  sw          $v0, 0x440($sp)
    ctx->pc = 0x3b1774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 2));
label_3b1778:
    // 0x3b1778: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3b1778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3b177c:
    // 0x3b177c: 0xafb20450  sw          $s2, 0x450($sp)
    ctx->pc = 0x3b177cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 18));
label_3b1780:
    // 0x3b1780: 0x27a70460  addiu       $a3, $sp, 0x460
    ctx->pc = 0x3b1780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3b1784:
    // 0x3b1784: 0xafb60460  sw          $s6, 0x460($sp)
    ctx->pc = 0x3b1784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 22));
label_3b1788:
    // 0x3b1788: 0x27a80470  addiu       $t0, $sp, 0x470
    ctx->pc = 0x3b1788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3b178c:
    // 0x3b178c: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3b178cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3b1790:
    // 0x3b1790: 0x27a90480  addiu       $t1, $sp, 0x480
    ctx->pc = 0x3b1790u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3b1794:
    // 0x3b1794: 0xafb70490  sw          $s7, 0x490($sp)
    ctx->pc = 0x3b1794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 23));
label_3b1798:
    // 0x3b1798: 0xc0ea040  jal         func_3A8100
label_3b179c:
    if (ctx->pc == 0x3B179Cu) {
        ctx->pc = 0x3B179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1798u;
        // 0x3b179c: 0x27aa0490  addiu       $t2, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B17A0u;
        goto label_3b17a0;
    }
    ctx->pc = 0x3B1798u;
    SET_GPR_U32(ctx, 31, 0x3B17A0u);
    ctx->pc = 0x3B179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1798u;
    // 0x3b179c: 0x27aa0490  addiu       $t2, $sp, 0x490 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3B1798u, 0x3B17A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B17A0u;
label_3b17a0:
    // 0x3b17a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b17a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b17a4:
    // 0x3b17a4: 0xc0f15bc  jal         func_3C56F0
label_3b17a8:
    if (ctx->pc == 0x3B17A8u) {
        ctx->pc = 0x3B17A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17A4u;
        // 0x3b17a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B17ACu;
        goto label_3b17ac;
    }
    ctx->pc = 0x3B17A4u;
    SET_GPR_U32(ctx, 31, 0x3B17ACu);
    ctx->pc = 0x3B17A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B17A4u;
    // 0x3b17a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B17A4u, 0x3B17ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B17ACu;
label_3b17ac:
    // 0x3b17ac: 0x7bb00540  lq          $s0, 0x540($sp)
    ctx->pc = 0x3b17acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_3b17b0:
    // 0x3b17b0: 0x7bb10530  lq          $s1, 0x530($sp)
    ctx->pc = 0x3b17b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_3b17b4:
    // 0x3b17b4: 0x7bb20520  lq          $s2, 0x520($sp)
    ctx->pc = 0x3b17b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_3b17b8:
    // 0x3b17b8: 0x7bb30510  lq          $s3, 0x510($sp)
    ctx->pc = 0x3b17b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3b17bc:
    // 0x3b17bc: 0x7bb40500  lq          $s4, 0x500($sp)
    ctx->pc = 0x3b17bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3b17c0:
    // 0x3b17c0: 0x7bb504f0  lq          $s5, 0x4F0($sp)
    ctx->pc = 0x3b17c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3b17c4:
    // 0x3b17c4: 0x7bb604e0  lq          $s6, 0x4E0($sp)
    ctx->pc = 0x3b17c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3b17c8:
    // 0x3b17c8: 0x7bb704d0  lq          $s7, 0x4D0($sp)
    ctx->pc = 0x3b17c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3b17cc:
    // 0x3b17cc: 0x7bbe04c0  lq          $fp, 0x4C0($sp)
    ctx->pc = 0x3b17ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3b17d0:
    // 0x3b17d0: 0xdfbf04b0  ld          $ra, 0x4B0($sp)
    ctx->pc = 0x3b17d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
label_3b17d4:
    // 0x3b17d4: 0xc7b60560  lwc1        $f22, 0x560($sp)
    ctx->pc = 0x3b17d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3b17d8:
    // 0x3b17d8: 0xc7b50558  lwc1        $f21, 0x558($sp)
    ctx->pc = 0x3b17d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b17dc:
    // 0x3b17dc: 0xc7b40550  lwc1        $f20, 0x550($sp)
    ctx->pc = 0x3b17dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b17e0:
    // 0x3b17e0: 0x3e00008  jr          $ra
label_3b17e4:
    if (ctx->pc == 0x3B17E4u) {
        ctx->pc = 0x3B17E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17E0u;
        // 0x3b17e4: 0x27bd0570  addiu       $sp, $sp, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B17E8u;
        goto label_fallthrough_0x3b17e0;
    }
    ctx->pc = 0x3B17E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B17E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17E0u;
        // 0x3b17e4: 0x27bd0570  addiu       $sp, $sp, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B17E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b17e0:
    ctx->pc = 0x3B17E8u;
}
