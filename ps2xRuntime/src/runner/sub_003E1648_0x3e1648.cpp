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

// Function: sub_003E1648
// Address: 0x3e1648 - 0x3e1938
void sub_003E1648_0x3e1648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1648_0x3e1648");
#endif

    switch (ctx->pc) {
        case 0x3e1648u: goto label_3e1648;
        case 0x3e164cu: goto label_3e164c;
        case 0x3e1650u: goto label_3e1650;
        case 0x3e1654u: goto label_3e1654;
        case 0x3e1658u: goto label_3e1658;
        case 0x3e165cu: goto label_3e165c;
        case 0x3e1660u: goto label_3e1660;
        case 0x3e1664u: goto label_3e1664;
        case 0x3e1668u: goto label_3e1668;
        case 0x3e166cu: goto label_3e166c;
        case 0x3e1670u: goto label_3e1670;
        case 0x3e1674u: goto label_3e1674;
        case 0x3e1678u: goto label_3e1678;
        case 0x3e167cu: goto label_3e167c;
        case 0x3e1680u: goto label_3e1680;
        case 0x3e1684u: goto label_3e1684;
        case 0x3e1688u: goto label_3e1688;
        case 0x3e168cu: goto label_3e168c;
        case 0x3e1690u: goto label_3e1690;
        case 0x3e1694u: goto label_3e1694;
        case 0x3e1698u: goto label_3e1698;
        case 0x3e169cu: goto label_3e169c;
        case 0x3e16a0u: goto label_3e16a0;
        case 0x3e16a4u: goto label_3e16a4;
        case 0x3e16a8u: goto label_3e16a8;
        case 0x3e16acu: goto label_3e16ac;
        case 0x3e16b0u: goto label_3e16b0;
        case 0x3e16b4u: goto label_3e16b4;
        case 0x3e16b8u: goto label_3e16b8;
        case 0x3e16bcu: goto label_3e16bc;
        case 0x3e16c0u: goto label_3e16c0;
        case 0x3e16c4u: goto label_3e16c4;
        case 0x3e16c8u: goto label_3e16c8;
        case 0x3e16ccu: goto label_3e16cc;
        case 0x3e16d0u: goto label_3e16d0;
        case 0x3e16d4u: goto label_3e16d4;
        case 0x3e16d8u: goto label_3e16d8;
        case 0x3e16dcu: goto label_3e16dc;
        case 0x3e16e0u: goto label_3e16e0;
        case 0x3e16e4u: goto label_3e16e4;
        case 0x3e16e8u: goto label_3e16e8;
        case 0x3e16ecu: goto label_3e16ec;
        case 0x3e16f0u: goto label_3e16f0;
        case 0x3e16f4u: goto label_3e16f4;
        case 0x3e16f8u: goto label_3e16f8;
        case 0x3e16fcu: goto label_3e16fc;
        case 0x3e1700u: goto label_3e1700;
        case 0x3e1704u: goto label_3e1704;
        case 0x3e1708u: goto label_3e1708;
        case 0x3e170cu: goto label_3e170c;
        case 0x3e1710u: goto label_3e1710;
        case 0x3e1714u: goto label_3e1714;
        case 0x3e1718u: goto label_3e1718;
        case 0x3e171cu: goto label_3e171c;
        case 0x3e1720u: goto label_3e1720;
        case 0x3e1724u: goto label_3e1724;
        case 0x3e1728u: goto label_3e1728;
        case 0x3e172cu: goto label_3e172c;
        case 0x3e1730u: goto label_3e1730;
        case 0x3e1734u: goto label_3e1734;
        case 0x3e1738u: goto label_3e1738;
        case 0x3e173cu: goto label_3e173c;
        case 0x3e1740u: goto label_3e1740;
        case 0x3e1744u: goto label_3e1744;
        case 0x3e1748u: goto label_3e1748;
        case 0x3e174cu: goto label_3e174c;
        case 0x3e1750u: goto label_3e1750;
        case 0x3e1754u: goto label_3e1754;
        case 0x3e1758u: goto label_3e1758;
        case 0x3e175cu: goto label_3e175c;
        case 0x3e1760u: goto label_3e1760;
        case 0x3e1764u: goto label_3e1764;
        case 0x3e1768u: goto label_3e1768;
        case 0x3e176cu: goto label_3e176c;
        case 0x3e1770u: goto label_3e1770;
        case 0x3e1774u: goto label_3e1774;
        case 0x3e1778u: goto label_3e1778;
        case 0x3e177cu: goto label_3e177c;
        case 0x3e1780u: goto label_3e1780;
        case 0x3e1784u: goto label_3e1784;
        case 0x3e1788u: goto label_3e1788;
        case 0x3e178cu: goto label_3e178c;
        case 0x3e1790u: goto label_3e1790;
        case 0x3e1794u: goto label_3e1794;
        case 0x3e1798u: goto label_3e1798;
        case 0x3e179cu: goto label_3e179c;
        case 0x3e17a0u: goto label_3e17a0;
        case 0x3e17a4u: goto label_3e17a4;
        case 0x3e17a8u: goto label_3e17a8;
        case 0x3e17acu: goto label_3e17ac;
        case 0x3e17b0u: goto label_3e17b0;
        case 0x3e17b4u: goto label_3e17b4;
        case 0x3e17b8u: goto label_3e17b8;
        case 0x3e17bcu: goto label_3e17bc;
        case 0x3e17c0u: goto label_3e17c0;
        case 0x3e17c4u: goto label_3e17c4;
        case 0x3e17c8u: goto label_3e17c8;
        case 0x3e17ccu: goto label_3e17cc;
        case 0x3e17d0u: goto label_3e17d0;
        case 0x3e17d4u: goto label_3e17d4;
        case 0x3e17d8u: goto label_3e17d8;
        case 0x3e17dcu: goto label_3e17dc;
        case 0x3e17e0u: goto label_3e17e0;
        case 0x3e17e4u: goto label_3e17e4;
        case 0x3e17e8u: goto label_3e17e8;
        case 0x3e17ecu: goto label_3e17ec;
        case 0x3e17f0u: goto label_3e17f0;
        case 0x3e17f4u: goto label_3e17f4;
        case 0x3e17f8u: goto label_3e17f8;
        case 0x3e17fcu: goto label_3e17fc;
        case 0x3e1800u: goto label_3e1800;
        case 0x3e1804u: goto label_3e1804;
        case 0x3e1808u: goto label_3e1808;
        case 0x3e180cu: goto label_3e180c;
        case 0x3e1810u: goto label_3e1810;
        case 0x3e1814u: goto label_3e1814;
        case 0x3e1818u: goto label_3e1818;
        case 0x3e181cu: goto label_3e181c;
        case 0x3e1820u: goto label_3e1820;
        case 0x3e1824u: goto label_3e1824;
        case 0x3e1828u: goto label_3e1828;
        case 0x3e182cu: goto label_3e182c;
        case 0x3e1830u: goto label_3e1830;
        case 0x3e1834u: goto label_3e1834;
        case 0x3e1838u: goto label_3e1838;
        case 0x3e183cu: goto label_3e183c;
        case 0x3e1840u: goto label_3e1840;
        case 0x3e1844u: goto label_3e1844;
        case 0x3e1848u: goto label_3e1848;
        case 0x3e184cu: goto label_3e184c;
        case 0x3e1850u: goto label_3e1850;
        case 0x3e1854u: goto label_3e1854;
        case 0x3e1858u: goto label_3e1858;
        case 0x3e185cu: goto label_3e185c;
        case 0x3e1860u: goto label_3e1860;
        case 0x3e1864u: goto label_3e1864;
        case 0x3e1868u: goto label_3e1868;
        case 0x3e186cu: goto label_3e186c;
        case 0x3e1870u: goto label_3e1870;
        case 0x3e1874u: goto label_3e1874;
        case 0x3e1878u: goto label_3e1878;
        case 0x3e187cu: goto label_3e187c;
        case 0x3e1880u: goto label_3e1880;
        case 0x3e1884u: goto label_3e1884;
        case 0x3e1888u: goto label_3e1888;
        case 0x3e188cu: goto label_3e188c;
        case 0x3e1890u: goto label_3e1890;
        case 0x3e1894u: goto label_3e1894;
        case 0x3e1898u: goto label_3e1898;
        case 0x3e189cu: goto label_3e189c;
        case 0x3e18a0u: goto label_3e18a0;
        case 0x3e18a4u: goto label_3e18a4;
        case 0x3e18a8u: goto label_3e18a8;
        case 0x3e18acu: goto label_3e18ac;
        case 0x3e18b0u: goto label_3e18b0;
        case 0x3e18b4u: goto label_3e18b4;
        case 0x3e18b8u: goto label_3e18b8;
        case 0x3e18bcu: goto label_3e18bc;
        case 0x3e18c0u: goto label_3e18c0;
        case 0x3e18c4u: goto label_3e18c4;
        case 0x3e18c8u: goto label_3e18c8;
        case 0x3e18ccu: goto label_3e18cc;
        case 0x3e18d0u: goto label_3e18d0;
        case 0x3e18d4u: goto label_3e18d4;
        case 0x3e18d8u: goto label_3e18d8;
        case 0x3e18dcu: goto label_3e18dc;
        case 0x3e18e0u: goto label_3e18e0;
        case 0x3e18e4u: goto label_3e18e4;
        case 0x3e18e8u: goto label_3e18e8;
        case 0x3e18ecu: goto label_3e18ec;
        case 0x3e18f0u: goto label_3e18f0;
        case 0x3e18f4u: goto label_3e18f4;
        case 0x3e18f8u: goto label_3e18f8;
        case 0x3e18fcu: goto label_3e18fc;
        case 0x3e1900u: goto label_3e1900;
        case 0x3e1904u: goto label_3e1904;
        case 0x3e1908u: goto label_3e1908;
        case 0x3e190cu: goto label_3e190c;
        case 0x3e1910u: goto label_3e1910;
        case 0x3e1914u: goto label_3e1914;
        case 0x3e1918u: goto label_3e1918;
        case 0x3e191cu: goto label_3e191c;
        case 0x3e1920u: goto label_3e1920;
        case 0x3e1924u: goto label_3e1924;
        case 0x3e1928u: goto label_3e1928;
        case 0x3e192cu: goto label_3e192c;
        case 0x3e1930u: goto label_3e1930;
        case 0x3e1934u: goto label_3e1934;
        default: break;
    }

    ctx->pc = 0x3e1648u;

label_3e1648:
    // 0x3e1648: 0x27bdf6c0  addiu       $sp, $sp, -0x940
    ctx->pc = 0x3e1648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964928));
label_3e164c:
    // 0x3e164c: 0x7fb208f0  sq          $s2, 0x8F0($sp)
    ctx->pc = 0x3e164cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 18));
label_3e1650:
    // 0x3e1650: 0x7fb308e0  sq          $s3, 0x8E0($sp)
    ctx->pc = 0x3e1650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 19));
label_3e1654:
    // 0x3e1654: 0x7fb608b0  sq          $s6, 0x8B0($sp)
    ctx->pc = 0x3e1654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 22));
label_3e1658:
    // 0x3e1658: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e1658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e165c:
    // 0x3e165c: 0x7fbe0890  sq          $fp, 0x890($sp)
    ctx->pc = 0x3e165cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 30));
label_3e1660:
    // 0x3e1660: 0x7fb00910  sq          $s0, 0x910($sp)
    ctx->pc = 0x3e1660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), GPR_VEC(ctx, 16));
label_3e1664:
    // 0x3e1664: 0x3c1e006f  lui         $fp, 0x6F
    ctx->pc = 0x3e1664u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)111 << 16));
label_3e1668:
    // 0x3e1668: 0x7fb10900  sq          $s1, 0x900($sp)
    ctx->pc = 0x3e1668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 17));
label_3e166c:
    // 0x3e166c: 0x7fb408d0  sq          $s4, 0x8D0($sp)
    ctx->pc = 0x3e166cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 20));
label_3e1670:
    // 0x3e1670: 0x7fb508c0  sq          $s5, 0x8C0($sp)
    ctx->pc = 0x3e1670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 21));
label_3e1674:
    // 0x3e1674: 0x7fb708a0  sq          $s7, 0x8A0($sp)
    ctx->pc = 0x3e1674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 23));
label_3e1678:
    // 0x3e1678: 0xffbf0880  sd          $ra, 0x880($sp)
    ctx->pc = 0x3e1678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2176), GPR_U64(ctx, 31));
label_3e167c:
    // 0x3e167c: 0xe7b60930  swc1        $f22, 0x930($sp)
    ctx->pc = 0x3e167cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2352), bits); }
label_3e1680:
    // 0x3e1680: 0xe7b50928  swc1        $f21, 0x928($sp)
    ctx->pc = 0x3e1680u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2344), bits); }
label_3e1684:
    // 0x3e1684: 0xe7b40920  swc1        $f20, 0x920($sp)
    ctx->pc = 0x3e1684u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2336), bits); }
label_3e1688:
    // 0x3e1688: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e1688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e168c:
    // 0x3e168c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e168cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e1690:
    // 0x3e1690: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e1690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e1694:
    // 0x3e1694: 0x40f809  jalr        $v0
label_3e1698:
    if (ctx->pc == 0x3E1698u) {
        ctx->pc = 0x3E1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1694u;
        // 0x3e1698: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E169Cu;
        goto label_3e169c;
    }
    ctx->pc = 0x3E1694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E169Cu);
        ctx->pc = 0x3E1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1694u;
        // 0x3e1698: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1694u, 0x3E169Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E169Cu;
label_3e169c:
    // 0x3e169c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e169cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e16a0:
    // 0x3e16a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e16a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e16a4:
    // 0x3e16a4: 0x27b60430  addiu       $s6, $sp, 0x430
    ctx->pc = 0x3e16a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3e16a8:
    // 0x3e16a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e16a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e16ac:
    // 0x3e16ac: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e16acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e16b0:
    // 0x3e16b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e16b4:
    // 0x3e16b4: 0x0  nop
    ctx->pc = 0x3e16b4u;
    // NOP
label_3e16b8:
    // 0x3e16b8: 0x0  nop
    ctx->pc = 0x3e16b8u;
    // NOP
label_3e16bc:
    // 0x3e16bc: 0x0  nop
    ctx->pc = 0x3e16bcu;
    // NOP
label_3e16c0:
    // 0x3e16c0: 0x0  nop
    ctx->pc = 0x3e16c0u;
    // NOP
label_3e16c4:
    // 0x3e16c4: 0x0  nop
    ctx->pc = 0x3e16c4u;
    // NOP
label_3e16c8:
    // 0x3e16c8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e16cc:
    if (ctx->pc == 0x3E16CCu) {
        ctx->pc = 0x3E16CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E16C8u;
        // 0x3e16cc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E16D0u;
        goto label_3e16d0;
    }
    ctx->pc = 0x3E16C8u;
    {
        const bool branch_taken_0x3e16c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E16CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E16C8u;
        // 0x3e16cc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e16c8) {
            ctx->pc = 0x3E16B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e16b8;
        }
    }
    ctx->pc = 0x3E16D0u;
label_3e16d0:
    // 0x3e16d0: 0xc138ddc  jal         func_4E3770
label_3e16d4:
    if (ctx->pc == 0x3E16D4u) {
        ctx->pc = 0x3E16D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E16D0u;
        // 0x3e16d4: 0x27d1b8b8  addiu       $s1, $fp, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E16D8u;
        goto label_3e16d8;
    }
    ctx->pc = 0x3E16D0u;
    SET_GPR_U32(ctx, 31, 0x3E16D8u);
    ctx->pc = 0x3E16D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E16D0u;
    // 0x3e16d4: 0x27d1b8b8  addiu       $s1, $fp, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E16D0u, 0x3E16D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E16D8u;
label_3e16d8:
    // 0x3e16d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e16d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e16dc:
    // 0x3e16dc: 0xc0cd4ee  jal         func_3353B8
label_3e16e0:
    if (ctx->pc == 0x3E16E0u) {
        ctx->pc = 0x3E16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E16DCu;
        // 0x3e16e0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E16E4u;
        goto label_3e16e4;
    }
    ctx->pc = 0x3E16DCu;
    SET_GPR_U32(ctx, 31, 0x3E16E4u);
    ctx->pc = 0x3E16E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E16DCu;
    // 0x3e16e0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E16DCu, 0x3E16E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E16E4u;
label_3e16e4:
    // 0x3e16e4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3e16e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3e16e8:
    // 0x3e16e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e16e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e16ec:
    // 0x3e16ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e16ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e16f0:
    // 0x3e16f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3e16f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e16f4:
    // 0x3e16f4: 0xc0cd4ee  jal         func_3353B8
label_3e16f8:
    if (ctx->pc == 0x3E16F8u) {
        ctx->pc = 0x3E16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E16F4u;
        // 0x3e16f8: 0x26104620  addiu       $s0, $s0, 0x4620 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E16FCu;
        goto label_3e16fc;
    }
    ctx->pc = 0x3E16F4u;
    SET_GPR_U32(ctx, 31, 0x3E16FCu);
    ctx->pc = 0x3E16F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E16F4u;
    // 0x3e16f8: 0x26104620  addiu       $s0, $s0, 0x4620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E16F4u, 0x3E16FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E16FCu;
label_3e16fc:
    // 0x3e16fc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3e16fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e1700:
    // 0x3e1700: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e1700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e1704:
    // 0x3e1704: 0x7a630010  lq          $v1, 0x10($s3)
    ctx->pc = 0x3e1704u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3e1708:
    // 0x3e1708: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3e1708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3e170c:
    // 0x3e170c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3e170cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3e1710:
    // 0x3e1710: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e1710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e1714:
    // 0x3e1714: 0x2695000a  addiu       $s5, $s4, 0xA
    ctx->pc = 0x3e1714u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 10));
label_3e1718:
    // 0x3e1718: 0xc045c8e  jal         func_117238
label_3e171c:
    if (ctx->pc == 0x3E171Cu) {
        ctx->pc = 0x3E171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1718u;
        // 0x3e171c: 0x7fa30430  sq          $v1, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1720u;
        goto label_3e1720;
    }
    ctx->pc = 0x3E1718u;
    SET_GPR_U32(ctx, 31, 0x3E1720u);
    ctx->pc = 0x3E171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1718u;
    // 0x3e171c: 0x7fa30430  sq          $v1, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3E1718u, 0x3E1720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1720u;
label_3e1720:
    // 0x3e1720: 0x7a630010  lq          $v1, 0x10($s3)
    ctx->pc = 0x3e1720u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3e1724:
    // 0x3e1724: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3e1724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3e1728:
    // 0x3e1728: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3e1728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3e172c:
    // 0x3e172c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e172cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e1730:
    // 0x3e1730: 0xc0e947e  jal         func_3A51F8
label_3e1734:
    if (ctx->pc == 0x3E1734u) {
        ctx->pc = 0x3E1734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1730u;
        // 0x3e1734: 0x7fa30430  sq          $v1, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1738u;
        goto label_3e1738;
    }
    ctx->pc = 0x3E1730u;
    SET_GPR_U32(ctx, 31, 0x3E1738u);
    ctx->pc = 0x3E1734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1730u;
    // 0x3e1734: 0x7fa30430  sq          $v1, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3E1730u, 0x3E1738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1738u;
label_3e1738:
    // 0x3e1738: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e173c:
    if (ctx->pc == 0x3E173Cu) {
        ctx->pc = 0x3E1740u;
        goto label_3e1740;
    }
    ctx->pc = 0x3E1738u;
    {
        const bool branch_taken_0x3e1738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1738) {
            ctx->pc = 0x3E174Cu;
            goto label_3e174c;
        }
    }
    ctx->pc = 0x3E1740u;
label_3e1740:
    // 0x3e1740: 0xc0e9694  jal         func_3A5A50
label_3e1744:
    if (ctx->pc == 0x3E1744u) {
        ctx->pc = 0x3E1744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1740u;
        // 0x3e1744: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1748u;
        goto label_3e1748;
    }
    ctx->pc = 0x3E1740u;
    SET_GPR_U32(ctx, 31, 0x3E1748u);
    ctx->pc = 0x3E1744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1740u;
    // 0x3e1744: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3E1740u, 0x3E1748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1748u;
label_3e1748:
    // 0x3e1748: 0x2b82b  sltu        $s7, $zero, $v0
    ctx->pc = 0x3e1748u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e174c:
    // 0x3e174c: 0x12e00047  beqz        $s7, . + 4 + (0x47 << 2)
label_3e1750:
    if (ctx->pc == 0x3E1750u) {
        ctx->pc = 0x3E1754u;
        goto label_3e1754;
    }
    ctx->pc = 0x3E174Cu;
    {
        const bool branch_taken_0x3e174c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e174c) {
            ctx->pc = 0x3E186Cu;
            goto label_3e186c;
        }
    }
    ctx->pc = 0x3E1754u;
label_3e1754:
    // 0x3e1754: 0x1aa00045  blez        $s5, . + 4 + (0x45 << 2)
label_3e1758:
    if (ctx->pc == 0x3E1758u) {
        ctx->pc = 0x3E175Cu;
        goto label_3e175c;
    }
    ctx->pc = 0x3E1754u;
    {
        const bool branch_taken_0x3e1754 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x3e1754) {
            ctx->pc = 0x3E186Cu;
            goto label_3e186c;
        }
    }
    ctx->pc = 0x3E175Cu;
label_3e175c:
    // 0x3e175c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x3e175cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e1760:
    // 0x3e1760: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3e1760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3e1764:
    // 0x3e1764: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3e1764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3e1768:
    // 0x3e1768: 0x2691000a  addiu       $s1, $s4, 0xA
    ctx->pc = 0x3e1768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 10));
label_3e176c:
    // 0x3e176c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e176cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e1770:
    // 0x3e1770: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3e1770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3e1774:
    // 0x3e1774: 0x27b00460  addiu       $s0, $sp, 0x460
    ctx->pc = 0x3e1774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3e1778:
    // 0x3e1778: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x3e1778u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
label_3e177c:
    // 0x3e177c: 0x27b40470  addiu       $s4, $sp, 0x470
    ctx->pc = 0x3e177cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3e1780:
    // 0x3e1780: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3e1780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3e1784:
    // 0x3e1784: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3e1784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e1788:
    // 0x3e1788: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e1788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e178c:
    // 0x3e178c: 0xc0cd518  jal         func_335460
label_3e1790:
    if (ctx->pc == 0x3E1790u) {
        ctx->pc = 0x3E1790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E178Cu;
        // 0x3e1790: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1794u;
        goto label_3e1794;
    }
    ctx->pc = 0x3E178Cu;
    SET_GPR_U32(ctx, 31, 0x3E1794u);
    ctx->pc = 0x3E1790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E178Cu;
    // 0x3e1790: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E178Cu, 0x3E1794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1794u;
label_3e1794:
    // 0x3e1794: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x3e1794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3e1798:
    // 0x3e1798: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e1798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e179c:
    // 0x3e179c: 0xc136b24  jal         func_4DAC90
label_3e17a0:
    if (ctx->pc == 0x3E17A0u) {
        ctx->pc = 0x3E17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E179Cu;
        // 0x3e17a0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E17A4u;
        goto label_3e17a4;
    }
    ctx->pc = 0x3E179Cu;
    SET_GPR_U32(ctx, 31, 0x3E17A4u);
    ctx->pc = 0x3E17A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E179Cu;
    // 0x3e17a0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E179Cu, 0x3E17A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E17A4u;
label_3e17a4:
    // 0x3e17a4: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3e17a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3e17a8:
    // 0x3e17a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e17a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e17ac:
    // 0x3e17ac: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x3e17acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
label_3e17b0:
    // 0x3e17b0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3e17b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3e17b4:
    // 0x3e17b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e17b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e17b8:
    // 0x3e17b8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3e17b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3e17bc:
    // 0x3e17bc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3e17bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3e17c0:
    // 0x3e17c0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3e17c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e17c4:
    // 0x3e17c4: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3e17c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3e17c8:
    // 0x3e17c8: 0xc0cd518  jal         func_335460
label_3e17cc:
    if (ctx->pc == 0x3E17CCu) {
        ctx->pc = 0x3E17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E17C8u;
        // 0x3e17cc: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E17D0u;
        goto label_3e17d0;
    }
    ctx->pc = 0x3E17C8u;
    SET_GPR_U32(ctx, 31, 0x3E17D0u);
    ctx->pc = 0x3E17CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E17C8u;
    // 0x3e17cc: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E17C8u, 0x3E17D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E17D0u;
label_3e17d0:
    // 0x3e17d0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3e17d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3e17d4:
    // 0x3e17d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e17d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e17d8:
    // 0x3e17d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e17d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e17dc:
    // 0x3e17dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e17dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e17e0:
    // 0x3e17e0: 0xc0cd518  jal         func_335460
label_3e17e4:
    if (ctx->pc == 0x3E17E4u) {
        ctx->pc = 0x3E17E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E17E0u;
        // 0x3e17e4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E17E8u;
        goto label_3e17e8;
    }
    ctx->pc = 0x3E17E0u;
    SET_GPR_U32(ctx, 31, 0x3E17E8u);
    ctx->pc = 0x3E17E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E17E0u;
    // 0x3e17e4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E17E0u, 0x3E17E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E17E8u;
label_3e17e8:
    // 0x3e17e8: 0xe7b40460  swc1        $f20, 0x460($sp)
    ctx->pc = 0x3e17e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3e17ec:
    // 0x3e17ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e17ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e17f0:
    // 0x3e17f0: 0xe7a00464  swc1        $f0, 0x464($sp)
    ctx->pc = 0x3e17f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1124), bits); }
label_3e17f4:
    // 0x3e17f4: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x3e17f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3e17f8:
    // 0x3e17f8: 0xafa00468  sw          $zero, 0x468($sp)
    ctx->pc = 0x3e17f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1128), GPR_U32(ctx, 0));
label_3e17fc:
    // 0x3e17fc: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3e17fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3e1800:
    // 0x3e1800: 0xe616000c  swc1        $f22, 0xC($s0)
    ctx->pc = 0x3e1800u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3e1804:
    // 0x3e1804: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3e1804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e1808:
    // 0x3e1808: 0xc136b18  jal         func_4DAC60
label_3e180c:
    if (ctx->pc == 0x3E180Cu) {
        ctx->pc = 0x3E180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1808u;
        // 0x3e180c: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1810u;
        goto label_3e1810;
    }
    ctx->pc = 0x3E1808u;
    SET_GPR_U32(ctx, 31, 0x3E1810u);
    ctx->pc = 0x3E180Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1808u;
    // 0x3e180c: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E1808u, 0x3E1810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1810u;
label_3e1810:
    // 0x3e1810: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3e1810u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e1814:
    // 0x3e1814: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e1814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e1818:
    // 0x3e1818: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3e1818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3e181c:
    // 0x3e181c: 0xc0e9694  jal         func_3A5A50
label_3e1820:
    if (ctx->pc == 0x3E1820u) {
        ctx->pc = 0x3E1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E181Cu;
        // 0x3e1820: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1824u;
        goto label_3e1824;
    }
    ctx->pc = 0x3E181Cu;
    SET_GPR_U32(ctx, 31, 0x3E1824u);
    ctx->pc = 0x3E1820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E181Cu;
    // 0x3e1820: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3E181Cu, 0x3E1824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1824u;
label_3e1824:
    // 0x3e1824: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3e1828:
    if (ctx->pc == 0x3E1828u) {
        ctx->pc = 0x3E1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1824u;
        // 0x3e1828: 0x7ba20420  lq          $v0, 0x420($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E182Cu;
        goto label_3e182c;
    }
    ctx->pc = 0x3E1824u;
    {
        const bool branch_taken_0x3e1824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1824u;
        // 0x3e1828: 0x7ba20420  lq          $v0, 0x420($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1824) {
            ctx->pc = 0x3E1860u;
            goto label_3e1860;
        }
    }
    ctx->pc = 0x3E182Cu;
label_3e182c:
    // 0x3e182c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e182cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e1830:
    // 0x3e1830: 0x7ba30410  lq          $v1, 0x410($sp)
    ctx->pc = 0x3e1830u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3e1834:
    // 0x3e1834: 0x27a50440  addiu       $a1, $sp, 0x440
    ctx->pc = 0x3e1834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3e1838:
    // 0x3e1838: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3e1838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3e183c:
    // 0x3e183c: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3e183cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3e1840:
    // 0x3e1840: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3e1840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3e1844:
    // 0x3e1844: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3e1844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e1848:
    // 0x3e1848: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3e1848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3e184c:
    // 0x3e184c: 0xc0e9fa6  jal         func_3A7E98
label_3e1850:
    if (ctx->pc == 0x3E1850u) {
        ctx->pc = 0x3E1850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E184Cu;
        // 0x3e1850: 0xafa20460  sw          $v0, 0x460($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1854u;
        goto label_3e1854;
    }
    ctx->pc = 0x3E184Cu;
    SET_GPR_U32(ctx, 31, 0x3E1854u);
    ctx->pc = 0x3E1850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E184Cu;
    // 0x3e1850: 0xafa20460  sw          $v0, 0x460($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3E184Cu, 0x3E1854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1854u;
label_3e1854:
    // 0x3e1854: 0x26e45380  addiu       $a0, $s7, 0x5380
    ctx->pc = 0x3e1854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 21376));
label_3e1858:
    // 0x3e1858: 0xc0f15bc  jal         func_3C56F0
label_3e185c:
    if (ctx->pc == 0x3E185Cu) {
        ctx->pc = 0x3E185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1858u;
        // 0x3e185c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1860u;
        goto label_3e1860;
    }
    ctx->pc = 0x3E1858u;
    SET_GPR_U32(ctx, 31, 0x3E1860u);
    ctx->pc = 0x3E185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1858u;
    // 0x3e185c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E1858u, 0x3E1860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1860u;
label_3e1860:
    // 0x3e1860: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3e1860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3e1864:
    // 0x3e1864: 0x1620ffc6  bnez        $s1, . + 4 + (-0x3A << 2)
label_3e1868:
    if (ctx->pc == 0x3E1868u) {
        ctx->pc = 0x3E186Cu;
        goto label_3e186c;
    }
    ctx->pc = 0x3E1864u;
    {
        const bool branch_taken_0x3e1864 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1864) {
            ctx->pc = 0x3E1780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1780;
        }
    }
    ctx->pc = 0x3E186Cu;
label_3e186c:
    // 0x3e186c: 0xc0e9694  jal         func_3A5A50
label_3e1870:
    if (ctx->pc == 0x3E1870u) {
        ctx->pc = 0x3E1870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E186Cu;
        // 0x3e1870: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1874u;
        goto label_3e1874;
    }
    ctx->pc = 0x3E186Cu;
    SET_GPR_U32(ctx, 31, 0x3E1874u);
    ctx->pc = 0x3E1870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E186Cu;
    // 0x3e1870: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3E186Cu, 0x3E1874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1874u;
label_3e1874:
    // 0x3e1874: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3e1878:
    if (ctx->pc == 0x3E1878u) {
        ctx->pc = 0x3E1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1874u;
        // 0x3e1878: 0x7ba20420  lq          $v0, 0x420($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E187Cu;
        goto label_3e187c;
    }
    ctx->pc = 0x3E1874u;
    {
        const bool branch_taken_0x3e1874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1874u;
        // 0x3e1878: 0x7ba20420  lq          $v0, 0x420($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1874) {
            ctx->pc = 0x3E18A8u;
            goto label_3e18a8;
        }
    }
    ctx->pc = 0x3E187Cu;
label_3e187c:
    // 0x3e187c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3e187cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3e1880:
    // 0x3e1880: 0x26105388  addiu       $s0, $s0, 0x5388
    ctx->pc = 0x3e1880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21384));
label_3e1884:
    // 0x3e1884: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3e1884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3e1888:
    // 0x3e1888: 0x27a50840  addiu       $a1, $sp, 0x840
    ctx->pc = 0x3e1888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3e188c:
    // 0x3e188c: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x3e188cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_3e1890:
    // 0x3e1890: 0xafb30850  sw          $s3, 0x850($sp)
    ctx->pc = 0x3e1890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2128), GPR_U32(ctx, 19));
label_3e1894:
    // 0x3e1894: 0xc0e9f84  jal         func_3A7E10
label_3e1898:
    if (ctx->pc == 0x3E1898u) {
        ctx->pc = 0x3E1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1894u;
        // 0x3e1898: 0x27a60850  addiu       $a2, $sp, 0x850 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E189Cu;
        goto label_3e189c;
    }
    ctx->pc = 0x3E1894u;
    SET_GPR_U32(ctx, 31, 0x3E189Cu);
    ctx->pc = 0x3E1898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1894u;
    // 0x3e1898: 0x27a60850  addiu       $a2, $sp, 0x850 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3E1894u, 0x3E189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E189Cu;
label_3e189c:
    // 0x3e189c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e189cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e18a0:
    // 0x3e18a0: 0xc0f15bc  jal         func_3C56F0
label_3e18a4:
    if (ctx->pc == 0x3E18A4u) {
        ctx->pc = 0x3E18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18A0u;
        // 0x3e18a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E18A8u;
        goto label_3e18a8;
    }
    ctx->pc = 0x3E18A0u;
    SET_GPR_U32(ctx, 31, 0x3E18A8u);
    ctx->pc = 0x3E18A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E18A0u;
    // 0x3e18a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E18A0u, 0x3E18A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E18A8u;
label_3e18a8:
    // 0x3e18a8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3e18a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3e18ac:
    // 0x3e18ac: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x3e18acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3e18b0:
    // 0x3e18b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3e18b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3e18b4:
    // 0x3e18b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3e18b8:
    if (ctx->pc == 0x3E18B8u) {
        ctx->pc = 0x3E18B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18B4u;
        // 0x3e18b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E18BCu;
        goto label_3e18bc;
    }
    ctx->pc = 0x3E18B4u;
    {
        const bool branch_taken_0x3e18b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E18B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18B4u;
        // 0x3e18b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e18b4) {
            ctx->pc = 0x3E18F8u;
            goto label_3e18f8;
        }
    }
    ctx->pc = 0x3E18BCu;
label_3e18bc:
    // 0x3e18bc: 0xc0e9694  jal         func_3A5A50
label_3e18c0:
    if (ctx->pc == 0x3E18C0u) {
        ctx->pc = 0x3E18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18BCu;
        // 0x3e18c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E18C4u;
        goto label_3e18c4;
    }
    ctx->pc = 0x3E18BCu;
    SET_GPR_U32(ctx, 31, 0x3E18C4u);
    ctx->pc = 0x3E18C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E18BCu;
    // 0x3e18c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3E18BCu, 0x3E18C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E18C4u;
label_3e18c4:
    // 0x3e18c4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3e18c8:
    if (ctx->pc == 0x3E18C8u) {
        ctx->pc = 0x3E18C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18C4u;
        // 0x3e18c8: 0x27c4b8b8  addiu       $a0, $fp, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E18CCu;
        goto label_3e18cc;
    }
    ctx->pc = 0x3E18C4u;
    {
        const bool branch_taken_0x3e18c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e18c4) {
            ctx->pc = 0x3E18C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E18C4u;
            // 0x3e18c8: 0x27c4b8b8  addiu       $a0, $fp, -0x4748 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949048));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E18D4u;
            goto label_3e18d4;
        }
    }
    ctx->pc = 0x3E18CCu;
label_3e18cc:
    // 0x3e18cc: 0x1000000a  b           . + 4 + (0xA << 2)
label_3e18d0:
    if (ctx->pc == 0x3E18D0u) {
        ctx->pc = 0x3E18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18CCu;
        // 0x3e18d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E18D4u;
        goto label_3e18d4;
    }
    ctx->pc = 0x3E18CCu;
    {
        const bool branch_taken_0x3e18cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18CCu;
        // 0x3e18d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e18cc) {
            ctx->pc = 0x3E18F8u;
            goto label_3e18f8;
        }
    }
    ctx->pc = 0x3E18D4u;
label_3e18d4:
    // 0x3e18d4: 0xc0cd4ee  jal         func_3353B8
label_3e18d8:
    if (ctx->pc == 0x3E18D8u) {
        ctx->pc = 0x3E18D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18D4u;
        // 0x3e18d8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E18DCu;
        goto label_3e18dc;
    }
    ctx->pc = 0x3E18D4u;
    SET_GPR_U32(ctx, 31, 0x3E18DCu);
    ctx->pc = 0x3E18D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E18D4u;
    // 0x3e18d8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E18D4u, 0x3E18DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E18DCu;
label_3e18dc:
    // 0x3e18dc: 0x2445000a  addiu       $a1, $v0, 0xA
    ctx->pc = 0x3e18dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_3e18e0:
    // 0x3e18e0: 0xc0e858c  jal         func_3A1630
label_3e18e4:
    if (ctx->pc == 0x3E18E4u) {
        ctx->pc = 0x3E18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18E0u;
        // 0x3e18e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E18E8u;
        goto label_3e18e8;
    }
    ctx->pc = 0x3E18E0u;
    SET_GPR_U32(ctx, 31, 0x3E18E8u);
    ctx->pc = 0x3E18E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E18E0u;
    // 0x3e18e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E18E0u, 0x3E18E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E18E8u;
label_3e18e8:
    // 0x3e18e8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3e18e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3e18ec:
    // 0x3e18ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e18ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e18f0:
    // 0x3e18f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e18f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3e18f4:
    // 0x3e18f4: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x3e18f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_3e18f8:
    // 0x3e18f8: 0x7bb00910  lq          $s0, 0x910($sp)
    ctx->pc = 0x3e18f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
label_3e18fc:
    // 0x3e18fc: 0x7bb10900  lq          $s1, 0x900($sp)
    ctx->pc = 0x3e18fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_3e1900:
    // 0x3e1900: 0x7bb208f0  lq          $s2, 0x8F0($sp)
    ctx->pc = 0x3e1900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3e1904:
    // 0x3e1904: 0x7bb308e0  lq          $s3, 0x8E0($sp)
    ctx->pc = 0x3e1904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3e1908:
    // 0x3e1908: 0x7bb408d0  lq          $s4, 0x8D0($sp)
    ctx->pc = 0x3e1908u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_3e190c:
    // 0x3e190c: 0x7bb508c0  lq          $s5, 0x8C0($sp)
    ctx->pc = 0x3e190cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3e1910:
    // 0x3e1910: 0x7bb608b0  lq          $s6, 0x8B0($sp)
    ctx->pc = 0x3e1910u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_3e1914:
    // 0x3e1914: 0x7bb708a0  lq          $s7, 0x8A0($sp)
    ctx->pc = 0x3e1914u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_3e1918:
    // 0x3e1918: 0x7bbe0890  lq          $fp, 0x890($sp)
    ctx->pc = 0x3e1918u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3e191c:
    // 0x3e191c: 0xdfbf0880  ld          $ra, 0x880($sp)
    ctx->pc = 0x3e191cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2176)));
label_3e1920:
    // 0x3e1920: 0xc7b60930  lwc1        $f22, 0x930($sp)
    ctx->pc = 0x3e1920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3e1924:
    // 0x3e1924: 0xc7b50928  lwc1        $f21, 0x928($sp)
    ctx->pc = 0x3e1924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3e1928:
    // 0x3e1928: 0xc7b40920  lwc1        $f20, 0x920($sp)
    ctx->pc = 0x3e1928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e192c:
    // 0x3e192c: 0x3e00008  jr          $ra
label_3e1930:
    if (ctx->pc == 0x3E1930u) {
        ctx->pc = 0x3E1930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E192Cu;
        // 0x3e1930: 0x27bd0940  addiu       $sp, $sp, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1934u;
        goto label_3e1934;
    }
    ctx->pc = 0x3E192Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E192Cu;
        // 0x3e1930: 0x27bd0940  addiu       $sp, $sp, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E192Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1934u;
label_3e1934:
    // 0x3e1934: 0x0  nop
    ctx->pc = 0x3e1934u;
    // NOP
    ctx->pc = 0x3e1938u;
}
