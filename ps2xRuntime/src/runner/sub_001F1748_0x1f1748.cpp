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

// Function: sub_001F1748
// Address: 0x1f1748 - 0x1f1ac8
void sub_001F1748_0x1f1748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1748_0x1f1748");
#endif

    switch (ctx->pc) {
        case 0x1f1748u: goto label_1f1748;
        case 0x1f174cu: goto label_1f174c;
        case 0x1f1750u: goto label_1f1750;
        case 0x1f1754u: goto label_1f1754;
        case 0x1f1758u: goto label_1f1758;
        case 0x1f175cu: goto label_1f175c;
        case 0x1f1760u: goto label_1f1760;
        case 0x1f1764u: goto label_1f1764;
        case 0x1f1768u: goto label_1f1768;
        case 0x1f176cu: goto label_1f176c;
        case 0x1f1770u: goto label_1f1770;
        case 0x1f1774u: goto label_1f1774;
        case 0x1f1778u: goto label_1f1778;
        case 0x1f177cu: goto label_1f177c;
        case 0x1f1780u: goto label_1f1780;
        case 0x1f1784u: goto label_1f1784;
        case 0x1f1788u: goto label_1f1788;
        case 0x1f178cu: goto label_1f178c;
        case 0x1f1790u: goto label_1f1790;
        case 0x1f1794u: goto label_1f1794;
        case 0x1f1798u: goto label_1f1798;
        case 0x1f179cu: goto label_1f179c;
        case 0x1f17a0u: goto label_1f17a0;
        case 0x1f17a4u: goto label_1f17a4;
        case 0x1f17a8u: goto label_1f17a8;
        case 0x1f17acu: goto label_1f17ac;
        case 0x1f17b0u: goto label_1f17b0;
        case 0x1f17b4u: goto label_1f17b4;
        case 0x1f17b8u: goto label_1f17b8;
        case 0x1f17bcu: goto label_1f17bc;
        case 0x1f17c0u: goto label_1f17c0;
        case 0x1f17c4u: goto label_1f17c4;
        case 0x1f17c8u: goto label_1f17c8;
        case 0x1f17ccu: goto label_1f17cc;
        case 0x1f17d0u: goto label_1f17d0;
        case 0x1f17d4u: goto label_1f17d4;
        case 0x1f17d8u: goto label_1f17d8;
        case 0x1f17dcu: goto label_1f17dc;
        case 0x1f17e0u: goto label_1f17e0;
        case 0x1f17e4u: goto label_1f17e4;
        case 0x1f17e8u: goto label_1f17e8;
        case 0x1f17ecu: goto label_1f17ec;
        case 0x1f17f0u: goto label_1f17f0;
        case 0x1f17f4u: goto label_1f17f4;
        case 0x1f17f8u: goto label_1f17f8;
        case 0x1f17fcu: goto label_1f17fc;
        case 0x1f1800u: goto label_1f1800;
        case 0x1f1804u: goto label_1f1804;
        case 0x1f1808u: goto label_1f1808;
        case 0x1f180cu: goto label_1f180c;
        case 0x1f1810u: goto label_1f1810;
        case 0x1f1814u: goto label_1f1814;
        case 0x1f1818u: goto label_1f1818;
        case 0x1f181cu: goto label_1f181c;
        case 0x1f1820u: goto label_1f1820;
        case 0x1f1824u: goto label_1f1824;
        case 0x1f1828u: goto label_1f1828;
        case 0x1f182cu: goto label_1f182c;
        case 0x1f1830u: goto label_1f1830;
        case 0x1f1834u: goto label_1f1834;
        case 0x1f1838u: goto label_1f1838;
        case 0x1f183cu: goto label_1f183c;
        case 0x1f1840u: goto label_1f1840;
        case 0x1f1844u: goto label_1f1844;
        case 0x1f1848u: goto label_1f1848;
        case 0x1f184cu: goto label_1f184c;
        case 0x1f1850u: goto label_1f1850;
        case 0x1f1854u: goto label_1f1854;
        case 0x1f1858u: goto label_1f1858;
        case 0x1f185cu: goto label_1f185c;
        case 0x1f1860u: goto label_1f1860;
        case 0x1f1864u: goto label_1f1864;
        case 0x1f1868u: goto label_1f1868;
        case 0x1f186cu: goto label_1f186c;
        case 0x1f1870u: goto label_1f1870;
        case 0x1f1874u: goto label_1f1874;
        case 0x1f1878u: goto label_1f1878;
        case 0x1f187cu: goto label_1f187c;
        case 0x1f1880u: goto label_1f1880;
        case 0x1f1884u: goto label_1f1884;
        case 0x1f1888u: goto label_1f1888;
        case 0x1f188cu: goto label_1f188c;
        case 0x1f1890u: goto label_1f1890;
        case 0x1f1894u: goto label_1f1894;
        case 0x1f1898u: goto label_1f1898;
        case 0x1f189cu: goto label_1f189c;
        case 0x1f18a0u: goto label_1f18a0;
        case 0x1f18a4u: goto label_1f18a4;
        case 0x1f18a8u: goto label_1f18a8;
        case 0x1f18acu: goto label_1f18ac;
        case 0x1f18b0u: goto label_1f18b0;
        case 0x1f18b4u: goto label_1f18b4;
        case 0x1f18b8u: goto label_1f18b8;
        case 0x1f18bcu: goto label_1f18bc;
        case 0x1f18c0u: goto label_1f18c0;
        case 0x1f18c4u: goto label_1f18c4;
        case 0x1f18c8u: goto label_1f18c8;
        case 0x1f18ccu: goto label_1f18cc;
        case 0x1f18d0u: goto label_1f18d0;
        case 0x1f18d4u: goto label_1f18d4;
        case 0x1f18d8u: goto label_1f18d8;
        case 0x1f18dcu: goto label_1f18dc;
        case 0x1f18e0u: goto label_1f18e0;
        case 0x1f18e4u: goto label_1f18e4;
        case 0x1f18e8u: goto label_1f18e8;
        case 0x1f18ecu: goto label_1f18ec;
        case 0x1f18f0u: goto label_1f18f0;
        case 0x1f18f4u: goto label_1f18f4;
        case 0x1f18f8u: goto label_1f18f8;
        case 0x1f18fcu: goto label_1f18fc;
        case 0x1f1900u: goto label_1f1900;
        case 0x1f1904u: goto label_1f1904;
        case 0x1f1908u: goto label_1f1908;
        case 0x1f190cu: goto label_1f190c;
        case 0x1f1910u: goto label_1f1910;
        case 0x1f1914u: goto label_1f1914;
        case 0x1f1918u: goto label_1f1918;
        case 0x1f191cu: goto label_1f191c;
        case 0x1f1920u: goto label_1f1920;
        case 0x1f1924u: goto label_1f1924;
        case 0x1f1928u: goto label_1f1928;
        case 0x1f192cu: goto label_1f192c;
        case 0x1f1930u: goto label_1f1930;
        case 0x1f1934u: goto label_1f1934;
        case 0x1f1938u: goto label_1f1938;
        case 0x1f193cu: goto label_1f193c;
        case 0x1f1940u: goto label_1f1940;
        case 0x1f1944u: goto label_1f1944;
        case 0x1f1948u: goto label_1f1948;
        case 0x1f194cu: goto label_1f194c;
        case 0x1f1950u: goto label_1f1950;
        case 0x1f1954u: goto label_1f1954;
        case 0x1f1958u: goto label_1f1958;
        case 0x1f195cu: goto label_1f195c;
        case 0x1f1960u: goto label_1f1960;
        case 0x1f1964u: goto label_1f1964;
        case 0x1f1968u: goto label_1f1968;
        case 0x1f196cu: goto label_1f196c;
        case 0x1f1970u: goto label_1f1970;
        case 0x1f1974u: goto label_1f1974;
        case 0x1f1978u: goto label_1f1978;
        case 0x1f197cu: goto label_1f197c;
        case 0x1f1980u: goto label_1f1980;
        case 0x1f1984u: goto label_1f1984;
        case 0x1f1988u: goto label_1f1988;
        case 0x1f198cu: goto label_1f198c;
        case 0x1f1990u: goto label_1f1990;
        case 0x1f1994u: goto label_1f1994;
        case 0x1f1998u: goto label_1f1998;
        case 0x1f199cu: goto label_1f199c;
        case 0x1f19a0u: goto label_1f19a0;
        case 0x1f19a4u: goto label_1f19a4;
        case 0x1f19a8u: goto label_1f19a8;
        case 0x1f19acu: goto label_1f19ac;
        case 0x1f19b0u: goto label_1f19b0;
        case 0x1f19b4u: goto label_1f19b4;
        case 0x1f19b8u: goto label_1f19b8;
        case 0x1f19bcu: goto label_1f19bc;
        case 0x1f19c0u: goto label_1f19c0;
        case 0x1f19c4u: goto label_1f19c4;
        case 0x1f19c8u: goto label_1f19c8;
        case 0x1f19ccu: goto label_1f19cc;
        case 0x1f19d0u: goto label_1f19d0;
        case 0x1f19d4u: goto label_1f19d4;
        case 0x1f19d8u: goto label_1f19d8;
        case 0x1f19dcu: goto label_1f19dc;
        case 0x1f19e0u: goto label_1f19e0;
        case 0x1f19e4u: goto label_1f19e4;
        case 0x1f19e8u: goto label_1f19e8;
        case 0x1f19ecu: goto label_1f19ec;
        case 0x1f19f0u: goto label_1f19f0;
        case 0x1f19f4u: goto label_1f19f4;
        case 0x1f19f8u: goto label_1f19f8;
        case 0x1f19fcu: goto label_1f19fc;
        case 0x1f1a00u: goto label_1f1a00;
        case 0x1f1a04u: goto label_1f1a04;
        case 0x1f1a08u: goto label_1f1a08;
        case 0x1f1a0cu: goto label_1f1a0c;
        case 0x1f1a10u: goto label_1f1a10;
        case 0x1f1a14u: goto label_1f1a14;
        case 0x1f1a18u: goto label_1f1a18;
        case 0x1f1a1cu: goto label_1f1a1c;
        case 0x1f1a20u: goto label_1f1a20;
        case 0x1f1a24u: goto label_1f1a24;
        case 0x1f1a28u: goto label_1f1a28;
        case 0x1f1a2cu: goto label_1f1a2c;
        case 0x1f1a30u: goto label_1f1a30;
        case 0x1f1a34u: goto label_1f1a34;
        case 0x1f1a38u: goto label_1f1a38;
        case 0x1f1a3cu: goto label_1f1a3c;
        case 0x1f1a40u: goto label_1f1a40;
        case 0x1f1a44u: goto label_1f1a44;
        case 0x1f1a48u: goto label_1f1a48;
        case 0x1f1a4cu: goto label_1f1a4c;
        case 0x1f1a50u: goto label_1f1a50;
        case 0x1f1a54u: goto label_1f1a54;
        case 0x1f1a58u: goto label_1f1a58;
        case 0x1f1a5cu: goto label_1f1a5c;
        case 0x1f1a60u: goto label_1f1a60;
        case 0x1f1a64u: goto label_1f1a64;
        case 0x1f1a68u: goto label_1f1a68;
        case 0x1f1a6cu: goto label_1f1a6c;
        case 0x1f1a70u: goto label_1f1a70;
        case 0x1f1a74u: goto label_1f1a74;
        case 0x1f1a78u: goto label_1f1a78;
        case 0x1f1a7cu: goto label_1f1a7c;
        case 0x1f1a80u: goto label_1f1a80;
        case 0x1f1a84u: goto label_1f1a84;
        case 0x1f1a88u: goto label_1f1a88;
        case 0x1f1a8cu: goto label_1f1a8c;
        case 0x1f1a90u: goto label_1f1a90;
        case 0x1f1a94u: goto label_1f1a94;
        case 0x1f1a98u: goto label_1f1a98;
        case 0x1f1a9cu: goto label_1f1a9c;
        case 0x1f1aa0u: goto label_1f1aa0;
        case 0x1f1aa4u: goto label_1f1aa4;
        case 0x1f1aa8u: goto label_1f1aa8;
        case 0x1f1aacu: goto label_1f1aac;
        case 0x1f1ab0u: goto label_1f1ab0;
        case 0x1f1ab4u: goto label_1f1ab4;
        case 0x1f1ab8u: goto label_1f1ab8;
        case 0x1f1abcu: goto label_1f1abc;
        case 0x1f1ac0u: goto label_1f1ac0;
        case 0x1f1ac4u: goto label_1f1ac4;
        default: break;
    }

    ctx->pc = 0x1f1748u;

label_1f1748:
    // 0x1f1748: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f1748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1f174c:
    // 0x1f174c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1f174cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1f1750:
    // 0x1f1750: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f1750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f1754:
    // 0x1f1754: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1f1754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1f1758:
    // 0x1f1758: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1f1758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1f175c:
    // 0x1f175c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1f175cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1f1760:
    // 0x1f1760: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1f1760u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1f1764:
    // 0x1f1764: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f1764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1f1768:
    // 0x1f1768: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1f1768u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1f176c:
    // 0x1f176c: 0xc07f704  jal         func_1FDC10
label_1f1770:
    if (ctx->pc == 0x1F1770u) {
        ctx->pc = 0x1F1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F176Cu;
        // 0x1f1770: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1774u;
        goto label_1f1774;
    }
    ctx->pc = 0x1F176Cu;
    SET_GPR_U32(ctx, 31, 0x1F1774u);
    ctx->pc = 0x1F1770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F176Cu;
    // 0x1f1770: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC10u, 0x1F176Cu, 0x1F1774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1774u;
label_1f1774:
    // 0x1f1774: 0xc07f738  jal         func_1FDCE0
label_1f1778:
    if (ctx->pc == 0x1F1778u) {
        ctx->pc = 0x1F177Cu;
        goto label_1f177c;
    }
    ctx->pc = 0x1F1774u;
    SET_GPR_U32(ctx, 31, 0x1F177Cu);
    ctx->pc = 0x1FDCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCE0u, 0x1F1774u, 0x1F177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F177Cu;
label_1f177c:
    // 0x1f177c: 0x8e2a27e4  lw          $t2, 0x27E4($s1)
    ctx->pc = 0x1f177cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_1f1780:
    // 0x1f1780: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1f1780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1f1784:
    // 0x1f1784: 0x24507170  addiu       $s0, $v0, 0x7170
    ctx->pc = 0x1f1784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29040));
label_1f1788:
    // 0x1f1788: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f1788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f178c:
    // 0x1f178c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1f178cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1f1790:
    // 0x1f1790: 0x24a57248  addiu       $a1, $a1, 0x7248
    ctx->pc = 0x1f1790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29256));
label_1f1794:
    // 0x1f1794: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1f1794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1f1798:
    // 0x1f1798: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f1798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f179c:
    // 0x1f179c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f179cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f17a0:
    // 0x1f17a0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1f17a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f17a4:
    // 0x1f17a4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f17a8:
    // 0x1f17a8: 0x24090069  addiu       $t1, $zero, 0x69
    ctx->pc = 0x1f17a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_1f17ac:
    // 0x1f17ac: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1f17acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1f17b0:
    // 0x1f17b0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f17b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f17b4:
    // 0x1f17b4: 0x40f809  jalr        $v0
label_1f17b8:
    if (ctx->pc == 0x1F17B8u) {
        ctx->pc = 0x1F17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17B4u;
        // 0x1f17b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F17BCu;
        goto label_1f17bc;
    }
    ctx->pc = 0x1F17B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F17BCu);
        ctx->pc = 0x1F17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17B4u;
        // 0x1f17b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F17B4u, 0x1F17BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F17BCu;
label_1f17bc:
    // 0x1f17bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f17c0:
    if (ctx->pc == 0x1F17C0u) {
        ctx->pc = 0x1F17C4u;
        goto label_1f17c4;
    }
    ctx->pc = 0x1F17BCu;
    {
        const bool branch_taken_0x1f17bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f17bc) {
            ctx->pc = 0x1F17CCu;
            goto label_1f17cc;
        }
    }
    ctx->pc = 0x1F17C4u;
label_1f17c4:
    // 0x1f17c4: 0xc0e1a60  jal         func_386980
label_1f17c8:
    if (ctx->pc == 0x1F17C8u) {
        ctx->pc = 0x1F17C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17C4u;
        // 0x1f17c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F17CCu;
        goto label_1f17cc;
    }
    ctx->pc = 0x1F17C4u;
    SET_GPR_U32(ctx, 31, 0x1F17CCu);
    ctx->pc = 0x1F17C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F17C4u;
    // 0x1f17c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386980u, 0x1F17C4u, 0x1F17CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F17CCu;
label_1f17cc:
    // 0x1f17cc: 0xc07f7c4  jal         func_1FDF10
label_1f17d0:
    if (ctx->pc == 0x1F17D0u) {
        ctx->pc = 0x1F17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17CCu;
        // 0x1f17d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F17D4u;
        goto label_1f17d4;
    }
    ctx->pc = 0x1F17CCu;
    SET_GPR_U32(ctx, 31, 0x1F17D4u);
    ctx->pc = 0x1F17D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F17CCu;
    // 0x1f17d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDF10u, 0x1F17CCu, 0x1F17D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F17D4u;
label_1f17d4:
    // 0x1f17d4: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x1f17d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_1f17d8:
    // 0x1f17d8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f17d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f17dc:
    // 0x1f17dc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1f17dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f17e0:
    // 0x1f17e0: 0x24a57260  addiu       $a1, $a1, 0x7260
    ctx->pc = 0x1f17e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29280));
label_1f17e4:
    // 0x1f17e4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f17e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f17e8:
    // 0x1f17e8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1f17e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f17ec:
    // 0x1f17ec: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f17ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f17f0:
    // 0x1f17f0: 0x2409006a  addiu       $t1, $zero, 0x6A
    ctx->pc = 0x1f17f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_1f17f4:
    // 0x1f17f4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f17f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f17f8:
    // 0x1f17f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f17f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f17fc:
    // 0x1f17fc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f17fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f1800:
    // 0x1f1800: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f1800u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1804:
    // 0x1f1804: 0x40f809  jalr        $v0
label_1f1808:
    if (ctx->pc == 0x1F1808u) {
        ctx->pc = 0x1F1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1804u;
        // 0x1f1808: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F180Cu;
        goto label_1f180c;
    }
    ctx->pc = 0x1F1804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F180Cu);
        ctx->pc = 0x1F1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1804u;
        // 0x1f1808: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1804u, 0x1F180Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F180Cu;
label_1f180c:
    // 0x1f180c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f180cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f1810:
    // 0x1f1810: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_1f1814:
    if (ctx->pc == 0x1F1814u) {
        ctx->pc = 0x1F1814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1810u;
        // 0x1f1814: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1818u;
        goto label_1f1818;
    }
    ctx->pc = 0x1F1810u;
    {
        const bool branch_taken_0x1f1810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1810u;
        // 0x1f1814: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1810) {
            ctx->pc = 0x1F1884u;
            goto label_1f1884;
        }
    }
    ctx->pc = 0x1F1818u;
label_1f1818:
    // 0x1f1818: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1f1818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1f181c:
    // 0x1f181c: 0x8c49b9c0  lw          $t1, -0x4640($v0)
    ctx->pc = 0x1f181cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1f1820:
    // 0x1f1820: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f1820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f1824:
    // 0x1f1824: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1f1824u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1f1828:
    // 0x1f1828: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1f1828u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1f182c:
    // 0x1f182c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1f182cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1f1830:
    // 0x1f1830: 0x24a57048  addiu       $a1, $a1, 0x7048
    ctx->pc = 0x1f1830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28744));
label_1f1834:
    // 0x1f1834: 0x25087050  addiu       $t0, $t0, 0x7050
    ctx->pc = 0x1f1834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28752));
label_1f1838:
    // 0x1f1838: 0x254a7078  addiu       $t2, $t2, 0x7078
    ctx->pc = 0x1f1838u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28792));
label_1f183c:
    // 0x1f183c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f183cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f1840:
    // 0x1f1840: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1f1840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f1844:
    // 0x1f1844: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f1844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f1848:
    // 0x1f1848: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f1848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f184c:
    // 0x1f184c: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1f184cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1f1850:
    // 0x1f1850: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f1850u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1854:
    // 0x1f1854: 0x40f809  jalr        $v0
label_1f1858:
    if (ctx->pc == 0x1F1858u) {
        ctx->pc = 0x1F1858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1854u;
        // 0x1f1858: 0x24090042  addiu       $t1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F185Cu;
        goto label_1f185c;
    }
    ctx->pc = 0x1F1854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F185Cu);
        ctx->pc = 0x1F1858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1854u;
        // 0x1f1858: 0x24090042  addiu       $t1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1854u, 0x1F185Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F185Cu;
label_1f185c:
    // 0x1f185c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1f185cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f1860:
    // 0x1f1860: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1f1860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1f1864:
    // 0x1f1864: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x1f1864u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
label_1f1868:
    // 0x1f1868: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f1868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f186c:
    // 0x1f186c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f186cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f1870:
    // 0x1f1870: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f1870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1f1874:
    // 0x1f1874: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f1874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f1878:
    // 0x1f1878: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1f1878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1f187c:
    // 0x1f187c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f187cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f1880:
    // 0x1f1880: 0xac63000c  sw          $v1, 0xC($v1)
    ctx->pc = 0x1f1880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 3));
label_1f1884:
    // 0x1f1884: 0xc07f7cc  jal         func_1FDF30
label_1f1888:
    if (ctx->pc == 0x1F1888u) {
        ctx->pc = 0x1F1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1884u;
        // 0x1f1888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F188Cu;
        goto label_1f188c;
    }
    ctx->pc = 0x1F1884u;
    SET_GPR_U32(ctx, 31, 0x1F188Cu);
    ctx->pc = 0x1F1888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1884u;
    // 0x1f1888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDF30u, 0x1F1884u, 0x1F188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F188Cu;
label_1f188c:
    // 0x1f188c: 0xc07f86a  jal         func_1FE1A8
label_1f1890:
    if (ctx->pc == 0x1F1890u) {
        ctx->pc = 0x1F1894u;
        goto label_1f1894;
    }
    ctx->pc = 0x1F188Cu;
    SET_GPR_U32(ctx, 31, 0x1F1894u);
    ctx->pc = 0x1FE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1A8u, 0x1F188Cu, 0x1F1894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1894u;
label_1f1894:
    // 0x1f1894: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_1f1898:
    if (ctx->pc == 0x1F1898u) {
        ctx->pc = 0x1F1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1894u;
        // 0x1f1898: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F189Cu;
        goto label_1f189c;
    }
    ctx->pc = 0x1F1894u;
    {
        const bool branch_taken_0x1f1894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1894) {
            ctx->pc = 0x1F1898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1894u;
            // 0x1f1898: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F18D8u;
            goto label_1f18d8;
        }
    }
    ctx->pc = 0x1F189Cu;
label_1f189c:
    // 0x1f189c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f189cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f18a0:
    // 0x1f18a0: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x1f18a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_1f18a4:
    // 0x1f18a4: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x1f18a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_1f18a8:
    // 0x1f18a8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1f18a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f18ac:
    // 0x1f18ac: 0x24687288  addiu       $t0, $v1, 0x7288
    ctx->pc = 0x1f18acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 29320));
label_1f18b0:
    // 0x1f18b0: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x1f18b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1f18b4:
    // 0x1f18b4: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x1f18b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1f18b8:
    // 0x1f18b8: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1f18b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f18bc:
    // 0x1f18bc: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1f18bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f18c0:
    // 0x1f18c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f18c4:
    // 0x1f18c4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f18c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f18c8:
    // 0x1f18c8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f18c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f18cc:
    // 0x1f18cc: 0x60f809  jalr        $v1
label_1f18d0:
    if (ctx->pc == 0x1F18D0u) {
        ctx->pc = 0x1F18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18CCu;
        // 0x1f18d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F18D4u;
        goto label_1f18d4;
    }
    ctx->pc = 0x1F18CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F18D4u);
        ctx->pc = 0x1F18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18CCu;
        // 0x1f18d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F18CCu, 0x1F18D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F18D4u;
label_1f18d4:
    // 0x1f18d4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1f18d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f18d8:
    // 0x1f18d8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1f18d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1f18dc:
    // 0x1f18dc: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1f18dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1f18e0:
    // 0x1f18e0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1f18e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1f18e4:
    // 0x1f18e4: 0x60f809  jalr        $v1
label_1f18e8:
    if (ctx->pc == 0x1F18E8u) {
        ctx->pc = 0x1F18E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18E4u;
        // 0x1f18e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F18ECu;
        goto label_1f18ec;
    }
    ctx->pc = 0x1F18E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F18ECu);
        ctx->pc = 0x1F18E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18E4u;
        // 0x1f18e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F18E4u, 0x1F18ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F18ECu;
label_1f18ec:
    // 0x1f18ec: 0xc07c780  jal         func_1F1E00
label_1f18f0:
    if (ctx->pc == 0x1F18F0u) {
        ctx->pc = 0x1F18F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18ECu;
        // 0x1f18f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F18F4u;
        goto label_1f18f4;
    }
    ctx->pc = 0x1F18ECu;
    SET_GPR_U32(ctx, 31, 0x1F18F4u);
    ctx->pc = 0x1F18F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18ECu;
    // 0x1f18f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1E00u, 0x1F18ECu, 0x1F18F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18F4u;
label_1f18f4:
    // 0x1f18f4: 0xc047e6c  jal         func_11F9B0
label_1f18f8:
    if (ctx->pc == 0x1F18F8u) {
        ctx->pc = 0x1F18F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18F4u;
        // 0x1f18f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F18FCu;
        goto label_1f18fc;
    }
    ctx->pc = 0x1F18F4u;
    SET_GPR_U32(ctx, 31, 0x1F18FCu);
    ctx->pc = 0x1F18F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18F4u;
    // 0x1f18f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1F18F4u, 0x1F18FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18FCu;
label_1f18fc:
    // 0x1f18fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f18fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1900:
    // 0x1f1900: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x1f1900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_1f1904:
    // 0x1f1904: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x1f1904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_1f1908:
    // 0x1f1908: 0xa0f809  jalr        $a1
label_1f190c:
    if (ctx->pc == 0x1F190Cu) {
        ctx->pc = 0x1F190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1908u;
        // 0x1f190c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1910u;
        goto label_1f1910;
    }
    ctx->pc = 0x1F1908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F1910u);
        ctx->pc = 0x1F190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1908u;
        // 0x1f190c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1908u, 0x1F1910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1910u;
label_1f1910:
    // 0x1f1910: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1f1910u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1914:
    // 0x1f1914: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1f1914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f1918:
    // 0x1f1918: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1f1918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1f191c:
    // 0x1f191c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f191cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1920:
    // 0x1f1920: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1f1920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_1f1924:
    // 0x1f1924: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1f1924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1928:
    // 0x1f1928: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1f1928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f192c:
    // 0x1f192c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1f192cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f1930:
    // 0x1f1930: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1f1930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1f1934:
    // 0x1f1934: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1f1934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1f1938:
    // 0x1f1938: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1f1938u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1f193c:
    // 0x1f193c: 0x6ba30037  ldl         $v1, 0x37($sp)
    ctx->pc = 0x1f193cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1f1940:
    // 0x1f1940: 0x6fa30030  ldr         $v1, 0x30($sp)
    ctx->pc = 0x1f1940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1f1944:
    // 0x1f1944: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f1944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1f1948:
    // 0x1f1948: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x1f1948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f194c:
    // 0x1f194c: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x1f194cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f1950:
    // 0x1f1950: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1f1950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
label_1f1954:
    // 0x1f1954: 0x24467290  addiu       $a2, $v0, 0x7290
    ctx->pc = 0x1f1954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 29328));
label_1f1958:
    // 0x1f1958: 0x68c80007  ldl         $t0, 0x7($a2)
    ctx->pc = 0x1f1958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1f195c:
    // 0x1f195c: 0x6cc80000  ldr         $t0, 0x0($a2)
    ctx->pc = 0x1f195cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1f1960:
    // 0x1f1960: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1f1960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1f1964:
    // 0x1f1964: 0xb3a80037  sdl         $t0, 0x37($sp)
    ctx->pc = 0x1f1964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f1968:
    // 0x1f1968: 0xb7a80030  sdr         $t0, 0x30($sp)
    ctx->pc = 0x1f1968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f196c:
    // 0x1f196c: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1f196cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_1f1970:
    // 0x1f1970: 0xc046e0e  jal         func_11B838
label_1f1974:
    if (ctx->pc == 0x1F1974u) {
        ctx->pc = 0x1F1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1970u;
        // 0x1f1974: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1978u;
        goto label_1f1978;
    }
    ctx->pc = 0x1F1970u;
    SET_GPR_U32(ctx, 31, 0x1F1978u);
    ctx->pc = 0x1F1974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1970u;
    // 0x1f1974: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B838u, 0x1F1970u, 0x1F1978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1978u;
label_1f1978:
    // 0x1f1978: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f197c:
    // 0x1f197c: 0xc046e5c  jal         func_11B970
label_1f1980:
    if (ctx->pc == 0x1F1980u) {
        ctx->pc = 0x1F1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F197Cu;
        // 0x1f1980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1984u;
        goto label_1f1984;
    }
    ctx->pc = 0x1F197Cu;
    SET_GPR_U32(ctx, 31, 0x1F1984u);
    ctx->pc = 0x1F1980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F197Cu;
    // 0x1f1980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x1F197Cu, 0x1F1984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1984u;
label_1f1984:
    // 0x1f1984: 0xc0579e4  jal         func_15E790
label_1f1988:
    if (ctx->pc == 0x1F1988u) {
        ctx->pc = 0x1F198Cu;
        goto label_1f198c;
    }
    ctx->pc = 0x1F1984u;
    SET_GPR_U32(ctx, 31, 0x1F198Cu);
    ctx->pc = 0x15E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E790u, 0x1F1984u, 0x1F198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F198Cu;
label_1f198c:
    // 0x1f198c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1f198cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f1990:
    // 0x1f1990: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_1f1994:
    if (ctx->pc == 0x1F1994u) {
        ctx->pc = 0x1F1998u;
        goto label_1f1998;
    }
    ctx->pc = 0x1F1990u;
    {
        const bool branch_taken_0x1f1990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1990) {
            ctx->pc = 0x1F19A8u;
            goto label_1f19a8;
        }
    }
    ctx->pc = 0x1F1998u;
label_1f1998:
    // 0x1f1998: 0xc080ffa  jal         func_203FE8
label_1f199c:
    if (ctx->pc == 0x1F199Cu) {
        ctx->pc = 0x1F19A0u;
        goto label_1f19a0;
    }
    ctx->pc = 0x1F1998u;
    SET_GPR_U32(ctx, 31, 0x1F19A0u);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x1F1998u, 0x1F19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19A0u;
label_1f19a0:
    // 0x1f19a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1f19a4:
    if (ctx->pc == 0x1F19A4u) {
        ctx->pc = 0x1F19A8u;
        goto label_1f19a8;
    }
    ctx->pc = 0x1F19A0u;
    {
        const bool branch_taken_0x1f19a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f19a0) {
            ctx->pc = 0x1F19B4u;
            goto label_1f19b4;
        }
    }
    ctx->pc = 0x1F19A8u;
label_1f19a8:
    // 0x1f19a8: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x1f19a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
label_1f19ac:
    // 0x1f19ac: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1f19acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1f19b0:
    // 0x1f19b0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f19b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1f19b4:
    // 0x1f19b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f19b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f19b8:
    // 0x1f19b8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1f19b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f19bc:
    // 0x1f19bc: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x1f19bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
label_1f19c0:
    // 0x1f19c0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1f19c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f19c4:
    // 0x1f19c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f19c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f19c8:
    // 0x1f19c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f19c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f19cc:
    // 0x1f19cc: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1f19ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f19d0:
    // 0x1f19d0: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1f19d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1f19d4:
    // 0x1f19d4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f19d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1f19d8:
    // 0x1f19d8: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x1f19d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1f19dc:
    // 0x1f19dc: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x1f19dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_1f19e0:
    // 0x1f19e0: 0xe7b50044  swc1        $f21, 0x44($sp)
    ctx->pc = 0x1f19e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1f19e4:
    // 0x1f19e4: 0x460003c6  mov.s       $f15, $f0
    ctx->pc = 0x1f19e4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
label_1f19e8:
    // 0x1f19e8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1f19e8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1f19ec:
    // 0x1f19ec: 0x46000406  mov.s       $f16, $f0
    ctx->pc = 0x1f19ecu;
    ctx->f[16] = FPU_MOV_S(ctx->f[0]);
label_1f19f0:
    // 0x1f19f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f19f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f19f4:
    // 0x1f19f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f19f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f19f8:
    // 0x1f19f8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1f19f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1f19fc:
    // 0x1f19fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f19fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a00:
    // 0x1f1a00: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f1a00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a04:
    // 0x1f1a04: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1f1a04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1f1a08:
    // 0x1f1a08: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f1a08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1a0c:
    // 0x1f1a0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f1a0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a10:
    // 0x1f1a10: 0xc05fbc8  jal         func_17EF20
label_1f1a14:
    if (ctx->pc == 0x1F1A14u) {
        ctx->pc = 0x1F1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A10u;
        // 0x1f1a14: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A18u;
        goto label_1f1a18;
    }
    ctx->pc = 0x1F1A10u;
    SET_GPR_U32(ctx, 31, 0x1F1A18u);
    ctx->pc = 0x1F1A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A10u;
    // 0x1f1a14: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EF20u, 0x1F1A10u, 0x1F1A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A18u;
label_1f1a18:
    // 0x1f1a18: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x1f1a18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
label_1f1a1c:
    // 0x1f1a1c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1f1a1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1f1a20:
    // 0x1f1a20: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x1f1a20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
label_1f1a24:
    // 0x1f1a24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f1a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a28:
    // 0x1f1a28: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f1a28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a2c:
    // 0x1f1a2c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1f1a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1f1a30:
    // 0x1f1a30: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1f1a30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1f1a34:
    // 0x1f1a34: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x1f1a34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1f1a38:
    // 0x1f1a38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f1a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a3c:
    // 0x1f1a3c: 0xe7b50054  swc1        $f21, 0x54($sp)
    ctx->pc = 0x1f1a3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1f1a40:
    // 0x1f1a40: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f1a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f1a44:
    // 0x1f1a44: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1f1a44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1f1a48:
    // 0x1f1a48: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x1f1a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f1a4c:
    // 0x1f1a4c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1f1a4cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_1f1a50:
    // 0x1f1a50: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1f1a50u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
label_1f1a54:
    // 0x1f1a54: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x1f1a54u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
label_1f1a58:
    // 0x1f1a58: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f1a58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1a5c:
    // 0x1f1a5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f1a5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a60:
    // 0x1f1a60: 0xc05fbc8  jal         func_17EF20
label_1f1a64:
    if (ctx->pc == 0x1F1A64u) {
        ctx->pc = 0x1F1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A60u;
        // 0x1f1a64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A68u;
        goto label_1f1a68;
    }
    ctx->pc = 0x1F1A60u;
    SET_GPR_U32(ctx, 31, 0x1F1A68u);
    ctx->pc = 0x1F1A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A60u;
    // 0x1f1a64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EF20u, 0x1F1A60u, 0x1F1A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A68u;
label_1f1a68:
    // 0x1f1a68: 0xc07f86a  jal         func_1FE1A8
label_1f1a6c:
    if (ctx->pc == 0x1F1A6Cu) {
        ctx->pc = 0x1F1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A68u;
        // 0x1f1a6c: 0xae420074  sw          $v0, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A70u;
        goto label_1f1a70;
    }
    ctx->pc = 0x1F1A68u;
    SET_GPR_U32(ctx, 31, 0x1F1A70u);
    ctx->pc = 0x1F1A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A68u;
    // 0x1f1a6c: 0xae420074  sw          $v0, 0x74($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1A8u, 0x1F1A68u, 0x1F1A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A70u;
label_1f1a70:
    // 0x1f1a70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1f1a74:
    if (ctx->pc == 0x1F1A74u) {
        ctx->pc = 0x1F1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A70u;
        // 0x1f1a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A78u;
        goto label_1f1a78;
    }
    ctx->pc = 0x1F1A70u;
    {
        const bool branch_taken_0x1f1a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A70u;
        // 0x1f1a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a70) {
            ctx->pc = 0x1F1A90u;
            goto label_1f1a90;
        }
    }
    ctx->pc = 0x1F1A78u;
label_1f1a78:
    // 0x1f1a78: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1f1a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1f1a7c:
    // 0x1f1a7c: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x1f1a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1f1a80:
    // 0x1f1a80: 0xc072032  jal         func_1C80C8
label_1f1a84:
    if (ctx->pc == 0x1F1A84u) {
        ctx->pc = 0x1F1A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A80u;
        // 0x1f1a84: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A88u;
        goto label_1f1a88;
    }
    ctx->pc = 0x1F1A80u;
    SET_GPR_U32(ctx, 31, 0x1F1A88u);
    ctx->pc = 0x1F1A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A80u;
    // 0x1f1a84: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80C8u, 0x1F1A80u, 0x1F1A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A88u;
label_1f1a88:
    // 0x1f1a88: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f1a8c:
    if (ctx->pc == 0x1F1A8Cu) {
        ctx->pc = 0x1F1A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A88u;
        // 0x1f1a8c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A90u;
        goto label_1f1a90;
    }
    ctx->pc = 0x1F1A88u;
    {
        const bool branch_taken_0x1f1a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A88u;
        // 0x1f1a8c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a88) {
            ctx->pc = 0x1F1AA4u;
            goto label_1f1aa4;
        }
    }
    ctx->pc = 0x1F1A90u;
label_1f1a90:
    // 0x1f1a90: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x1f1a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_1f1a94:
    // 0x1f1a94: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x1f1a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1f1a98:
    // 0x1f1a98: 0xc072032  jal         func_1C80C8
label_1f1a9c:
    if (ctx->pc == 0x1F1A9Cu) {
        ctx->pc = 0x1F1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A98u;
        // 0x1f1a9c: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1AA0u;
        goto label_1f1aa0;
    }
    ctx->pc = 0x1F1A98u;
    SET_GPR_U32(ctx, 31, 0x1F1AA0u);
    ctx->pc = 0x1F1A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A98u;
    // 0x1f1a9c: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80C8u, 0x1F1A98u, 0x1F1AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AA0u;
label_1f1aa0:
    // 0x1f1aa0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1f1aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f1aa4:
    // 0x1f1aa4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1f1aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f1aa8:
    // 0x1f1aa8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1f1aa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f1aac:
    // 0x1f1aac: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1f1aacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f1ab0:
    // 0x1f1ab0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f1ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1f1ab4:
    // 0x1f1ab4: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1f1ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1f1ab8:
    // 0x1f1ab8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1f1ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f1abc:
    // 0x1f1abc: 0x3e00008  jr          $ra
label_1f1ac0:
    if (ctx->pc == 0x1F1AC0u) {
        ctx->pc = 0x1F1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1ABCu;
        // 0x1f1ac0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1AC4u;
        goto label_1f1ac4;
    }
    ctx->pc = 0x1F1ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1ABCu;
        // 0x1f1ac0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1AC4u;
label_1f1ac4:
    // 0x1f1ac4: 0x0  nop
    ctx->pc = 0x1f1ac4u;
    // NOP
    ctx->pc = 0x1f1ac8u;
}
