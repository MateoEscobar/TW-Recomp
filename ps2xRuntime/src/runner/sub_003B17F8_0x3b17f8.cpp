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

// Function: sub_003B17F8
// Address: 0x3b17f8 - 0x3b1a18
void sub_003B17F8_0x3b17f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B17F8_0x3b17f8");
#endif

    switch (ctx->pc) {
        case 0x3b17f8u: goto label_3b17f8;
        case 0x3b17fcu: goto label_3b17fc;
        case 0x3b1800u: goto label_3b1800;
        case 0x3b1804u: goto label_3b1804;
        case 0x3b1808u: goto label_3b1808;
        case 0x3b180cu: goto label_3b180c;
        case 0x3b1810u: goto label_3b1810;
        case 0x3b1814u: goto label_3b1814;
        case 0x3b1818u: goto label_3b1818;
        case 0x3b181cu: goto label_3b181c;
        case 0x3b1820u: goto label_3b1820;
        case 0x3b1824u: goto label_3b1824;
        case 0x3b1828u: goto label_3b1828;
        case 0x3b182cu: goto label_3b182c;
        case 0x3b1830u: goto label_3b1830;
        case 0x3b1834u: goto label_3b1834;
        case 0x3b1838u: goto label_3b1838;
        case 0x3b183cu: goto label_3b183c;
        case 0x3b1840u: goto label_3b1840;
        case 0x3b1844u: goto label_3b1844;
        case 0x3b1848u: goto label_3b1848;
        case 0x3b184cu: goto label_3b184c;
        case 0x3b1850u: goto label_3b1850;
        case 0x3b1854u: goto label_3b1854;
        case 0x3b1858u: goto label_3b1858;
        case 0x3b185cu: goto label_3b185c;
        case 0x3b1860u: goto label_3b1860;
        case 0x3b1864u: goto label_3b1864;
        case 0x3b1868u: goto label_3b1868;
        case 0x3b186cu: goto label_3b186c;
        case 0x3b1870u: goto label_3b1870;
        case 0x3b1874u: goto label_3b1874;
        case 0x3b1878u: goto label_3b1878;
        case 0x3b187cu: goto label_3b187c;
        case 0x3b1880u: goto label_3b1880;
        case 0x3b1884u: goto label_3b1884;
        case 0x3b1888u: goto label_3b1888;
        case 0x3b188cu: goto label_3b188c;
        case 0x3b1890u: goto label_3b1890;
        case 0x3b1894u: goto label_3b1894;
        case 0x3b1898u: goto label_3b1898;
        case 0x3b189cu: goto label_3b189c;
        case 0x3b18a0u: goto label_3b18a0;
        case 0x3b18a4u: goto label_3b18a4;
        case 0x3b18a8u: goto label_3b18a8;
        case 0x3b18acu: goto label_3b18ac;
        case 0x3b18b0u: goto label_3b18b0;
        case 0x3b18b4u: goto label_3b18b4;
        case 0x3b18b8u: goto label_3b18b8;
        case 0x3b18bcu: goto label_3b18bc;
        case 0x3b18c0u: goto label_3b18c0;
        case 0x3b18c4u: goto label_3b18c4;
        case 0x3b18c8u: goto label_3b18c8;
        case 0x3b18ccu: goto label_3b18cc;
        case 0x3b18d0u: goto label_3b18d0;
        case 0x3b18d4u: goto label_3b18d4;
        case 0x3b18d8u: goto label_3b18d8;
        case 0x3b18dcu: goto label_3b18dc;
        case 0x3b18e0u: goto label_3b18e0;
        case 0x3b18e4u: goto label_3b18e4;
        case 0x3b18e8u: goto label_3b18e8;
        case 0x3b18ecu: goto label_3b18ec;
        case 0x3b18f0u: goto label_3b18f0;
        case 0x3b18f4u: goto label_3b18f4;
        case 0x3b18f8u: goto label_3b18f8;
        case 0x3b18fcu: goto label_3b18fc;
        case 0x3b1900u: goto label_3b1900;
        case 0x3b1904u: goto label_3b1904;
        case 0x3b1908u: goto label_3b1908;
        case 0x3b190cu: goto label_3b190c;
        case 0x3b1910u: goto label_3b1910;
        case 0x3b1914u: goto label_3b1914;
        case 0x3b1918u: goto label_3b1918;
        case 0x3b191cu: goto label_3b191c;
        case 0x3b1920u: goto label_3b1920;
        case 0x3b1924u: goto label_3b1924;
        case 0x3b1928u: goto label_3b1928;
        case 0x3b192cu: goto label_3b192c;
        case 0x3b1930u: goto label_3b1930;
        case 0x3b1934u: goto label_3b1934;
        case 0x3b1938u: goto label_3b1938;
        case 0x3b193cu: goto label_3b193c;
        case 0x3b1940u: goto label_3b1940;
        case 0x3b1944u: goto label_3b1944;
        case 0x3b1948u: goto label_3b1948;
        case 0x3b194cu: goto label_3b194c;
        case 0x3b1950u: goto label_3b1950;
        case 0x3b1954u: goto label_3b1954;
        case 0x3b1958u: goto label_3b1958;
        case 0x3b195cu: goto label_3b195c;
        case 0x3b1960u: goto label_3b1960;
        case 0x3b1964u: goto label_3b1964;
        case 0x3b1968u: goto label_3b1968;
        case 0x3b196cu: goto label_3b196c;
        case 0x3b1970u: goto label_3b1970;
        case 0x3b1974u: goto label_3b1974;
        case 0x3b1978u: goto label_3b1978;
        case 0x3b197cu: goto label_3b197c;
        case 0x3b1980u: goto label_3b1980;
        case 0x3b1984u: goto label_3b1984;
        case 0x3b1988u: goto label_3b1988;
        case 0x3b198cu: goto label_3b198c;
        case 0x3b1990u: goto label_3b1990;
        case 0x3b1994u: goto label_3b1994;
        case 0x3b1998u: goto label_3b1998;
        case 0x3b199cu: goto label_3b199c;
        case 0x3b19a0u: goto label_3b19a0;
        case 0x3b19a4u: goto label_3b19a4;
        case 0x3b19a8u: goto label_3b19a8;
        case 0x3b19acu: goto label_3b19ac;
        case 0x3b19b0u: goto label_3b19b0;
        case 0x3b19b4u: goto label_3b19b4;
        case 0x3b19b8u: goto label_3b19b8;
        case 0x3b19bcu: goto label_3b19bc;
        case 0x3b19c0u: goto label_3b19c0;
        case 0x3b19c4u: goto label_3b19c4;
        case 0x3b19c8u: goto label_3b19c8;
        case 0x3b19ccu: goto label_3b19cc;
        case 0x3b19d0u: goto label_3b19d0;
        case 0x3b19d4u: goto label_3b19d4;
        case 0x3b19d8u: goto label_3b19d8;
        case 0x3b19dcu: goto label_3b19dc;
        case 0x3b19e0u: goto label_3b19e0;
        case 0x3b19e4u: goto label_3b19e4;
        case 0x3b19e8u: goto label_3b19e8;
        case 0x3b19ecu: goto label_3b19ec;
        case 0x3b19f0u: goto label_3b19f0;
        case 0x3b19f4u: goto label_3b19f4;
        case 0x3b19f8u: goto label_3b19f8;
        case 0x3b19fcu: goto label_3b19fc;
        case 0x3b1a00u: goto label_3b1a00;
        case 0x3b1a04u: goto label_3b1a04;
        case 0x3b1a08u: goto label_3b1a08;
        case 0x3b1a0cu: goto label_3b1a0c;
        case 0x3b1a10u: goto label_3b1a10;
        case 0x3b1a14u: goto label_3b1a14;
        default: break;
    }

    ctx->pc = 0x3b17f8u;

label_3b17f8:
    // 0x3b17f8: 0x27bdfae0  addiu       $sp, $sp, -0x520
    ctx->pc = 0x3b17f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965984));
label_3b17fc:
    // 0x3b17fc: 0x7fb00510  sq          $s0, 0x510($sp)
    ctx->pc = 0x3b17fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 16));
label_3b1800:
    // 0x3b1800: 0x7fb10500  sq          $s1, 0x500($sp)
    ctx->pc = 0x3b1800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 17));
label_3b1804:
    // 0x3b1804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b1808:
    // 0x3b1808: 0x7fb204f0  sq          $s2, 0x4F0($sp)
    ctx->pc = 0x3b1808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 18));
label_3b180c:
    // 0x3b180c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b180cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b1810:
    // 0x3b1810: 0x7fb304e0  sq          $s3, 0x4E0($sp)
    ctx->pc = 0x3b1810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 19));
label_3b1814:
    // 0x3b1814: 0x7fb404d0  sq          $s4, 0x4D0($sp)
    ctx->pc = 0x3b1814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 20));
label_3b1818:
    // 0x3b1818: 0x7fb504c0  sq          $s5, 0x4C0($sp)
    ctx->pc = 0x3b1818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 21));
label_3b181c:
    // 0x3b181c: 0x7fb604b0  sq          $s6, 0x4B0($sp)
    ctx->pc = 0x3b181cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 22));
label_3b1820:
    // 0x3b1820: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x3b1820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
label_3b1824:
    // 0x3b1824: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3b1824u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1828:
    // 0x3b1828: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b1828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b182c:
    // 0x3b182c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b182cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b1830:
    // 0x3b1830: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b1830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b1834:
    // 0x3b1834: 0x40f809  jalr        $v0
label_3b1838:
    if (ctx->pc == 0x3B1838u) {
        ctx->pc = 0x3B1838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1834u;
        // 0x3b1838: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B183Cu;
        goto label_3b183c;
    }
    ctx->pc = 0x3B1834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B183Cu);
        ctx->pc = 0x3B1838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1834u;
        // 0x3b1838: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1834u, 0x3B183Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B183Cu;
label_3b183c:
    // 0x3b183c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b183cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b1840:
    // 0x3b1840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1844:
    // 0x3b1844: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3b1844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3b1848:
    // 0x3b1848: 0xc0e858c  jal         func_3A1630
label_3b184c:
    if (ctx->pc == 0x3B184Cu) {
        ctx->pc = 0x3B184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1848u;
        // 0x3b184c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1850u;
        goto label_3b1850;
    }
    ctx->pc = 0x3B1848u;
    SET_GPR_U32(ctx, 31, 0x3B1850u);
    ctx->pc = 0x3B184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1848u;
    // 0x3b184c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B1848u, 0x3B1850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1850u;
label_3b1850:
    // 0x3b1850: 0xc0ea146  jal         func_3A8518
label_3b1854:
    if (ctx->pc == 0x3B1854u) {
        ctx->pc = 0x3B1854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1850u;
        // 0x3b1854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1858u;
        goto label_3b1858;
    }
    ctx->pc = 0x3B1850u;
    SET_GPR_U32(ctx, 31, 0x3B1858u);
    ctx->pc = 0x3B1854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1850u;
    // 0x3b1854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B1850u, 0x3B1858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1858u;
label_3b1858:
    // 0x3b1858: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b1858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b185c:
    // 0x3b185c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3b185cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1860:
    // 0x3b1860: 0xc0ea12a  jal         func_3A84A8
label_3b1864:
    if (ctx->pc == 0x3B1864u) {
        ctx->pc = 0x3B1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1860u;
        // 0x3b1864: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1868u;
        goto label_3b1868;
    }
    ctx->pc = 0x3B1860u;
    SET_GPR_U32(ctx, 31, 0x3B1868u);
    ctx->pc = 0x3B1864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1860u;
    // 0x3b1864: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B1860u, 0x3B1868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1868u;
label_3b1868:
    // 0x3b1868: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b1868u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b186c:
    // 0x3b186c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b186cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1870:
    // 0x3b1870: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b1870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b1874:
    // 0x3b1874: 0xc0ea12a  jal         func_3A84A8
label_3b1878:
    if (ctx->pc == 0x3B1878u) {
        ctx->pc = 0x3B1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1874u;
        // 0x3b1878: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B187Cu;
        goto label_3b187c;
    }
    ctx->pc = 0x3B1874u;
    SET_GPR_U32(ctx, 31, 0x3B187Cu);
    ctx->pc = 0x3B1878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1874u;
    // 0x3b1878: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B1874u, 0x3B187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B187Cu;
label_3b187c:
    // 0x3b187c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b187cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b1880:
    // 0x3b1880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b1880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1884:
    // 0x3b1884: 0xc0ea146  jal         func_3A8518
label_3b1888:
    if (ctx->pc == 0x3B1888u) {
        ctx->pc = 0x3B1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1884u;
        // 0x3b1888: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B188Cu;
        goto label_3b188c;
    }
    ctx->pc = 0x3B1884u;
    SET_GPR_U32(ctx, 31, 0x3B188Cu);
    ctx->pc = 0x3B1888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1884u;
    // 0x3b1888: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B1884u, 0x3B188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B188Cu;
label_3b188c:
    // 0x3b188c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b188cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1890:
    // 0x3b1890: 0xc0ea14c  jal         func_3A8530
label_3b1894:
    if (ctx->pc == 0x3B1894u) {
        ctx->pc = 0x3B1894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1890u;
        // 0x3b1894: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1898u;
        goto label_3b1898;
    }
    ctx->pc = 0x3B1890u;
    SET_GPR_U32(ctx, 31, 0x3B1898u);
    ctx->pc = 0x3B1894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1890u;
    // 0x3b1894: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B1890u, 0x3B1898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1898u;
label_3b1898:
    // 0x3b1898: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b1898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b189c:
    // 0x3b189c: 0xc0ea146  jal         func_3A8518
label_3b18a0:
    if (ctx->pc == 0x3B18A0u) {
        ctx->pc = 0x3B18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B189Cu;
        // 0x3b18a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B18A4u;
        goto label_3b18a4;
    }
    ctx->pc = 0x3B189Cu;
    SET_GPR_U32(ctx, 31, 0x3B18A4u);
    ctx->pc = 0x3B18A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B189Cu;
    // 0x3b18a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B189Cu, 0x3B18A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B18A4u;
label_3b18a4:
    // 0x3b18a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b18a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b18a8:
    // 0x3b18a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b18a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b18ac:
    // 0x3b18ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3b18acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b18b0:
    // 0x3b18b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b18b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b18b4:
    // 0x3b18b4: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x3b18b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_3b18b8:
    // 0x3b18b8: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x3b18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_3b18bc:
    // 0x3b18bc: 0x60f809  jalr        $v1
label_3b18c0:
    if (ctx->pc == 0x3B18C0u) {
        ctx->pc = 0x3B18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18BCu;
        // 0x3b18c0: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B18C4u;
        goto label_3b18c4;
    }
    ctx->pc = 0x3B18BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B18C4u);
        ctx->pc = 0x3B18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18BCu;
        // 0x3b18c0: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B18BCu, 0x3B18C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B18C4u;
label_3b18c4:
    // 0x3b18c4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3b18c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b18c8:
    // 0x3b18c8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3b18c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b18cc:
    // 0x3b18cc: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x3b18ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_3b18d0:
    // 0x3b18d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b18d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b18d4:
    // 0x3b18d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b18d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b18d8:
    // 0x3b18d8: 0xc0e94a0  jal         func_3A5280
label_3b18dc:
    if (ctx->pc == 0x3B18DCu) {
        ctx->pc = 0x3B18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18D8u;
        // 0x3b18dc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B18E0u;
        goto label_3b18e0;
    }
    ctx->pc = 0x3B18D8u;
    SET_GPR_U32(ctx, 31, 0x3B18E0u);
    ctx->pc = 0x3B18DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B18D8u;
    // 0x3b18dc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3B18D8u, 0x3B18E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B18E0u;
label_3b18e0:
    // 0x3b18e0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3b18e4:
    if (ctx->pc == 0x3B18E4u) {
        ctx->pc = 0x3B18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18E0u;
        // 0x3b18e4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B18E8u;
        goto label_3b18e8;
    }
    ctx->pc = 0x3B18E0u;
    {
        const bool branch_taken_0x3b18e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b18e0) {
            ctx->pc = 0x3B18E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B18E0u;
            // 0x3b18e4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1900u;
            goto label_3b1900;
        }
    }
    ctx->pc = 0x3B18E8u;
label_3b18e8:
    // 0x3b18e8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3b18e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3b18ec:
    // 0x3b18ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b18ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b18f0:
    // 0x3b18f0: 0xc0e947e  jal         func_3A51F8
label_3b18f4:
    if (ctx->pc == 0x3B18F4u) {
        ctx->pc = 0x3B18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18F0u;
        // 0x3b18f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B18F8u;
        goto label_3b18f8;
    }
    ctx->pc = 0x3B18F0u;
    SET_GPR_U32(ctx, 31, 0x3B18F8u);
    ctx->pc = 0x3B18F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B18F0u;
    // 0x3b18f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3B18F0u, 0x3B18F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B18F8u;
label_3b18f8:
    // 0x3b18f8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3b18fc:
    if (ctx->pc == 0x3B18FCu) {
        ctx->pc = 0x3B18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18F8u;
        // 0x3b18fc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1900u;
        goto label_3b1900;
    }
    ctx->pc = 0x3B18F8u;
    {
        const bool branch_taken_0x3b18f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b18f8) {
            ctx->pc = 0x3B18FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B18F8u;
            // 0x3b18fc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1900u;
            goto label_3b1900;
        }
    }
    ctx->pc = 0x3B1900u;
label_3b1900:
    // 0x3b1900: 0x56c0003c  bnel        $s6, $zero, . + 4 + (0x3C << 2)
label_3b1904:
    if (ctx->pc == 0x3B1904u) {
        ctx->pc = 0x3B1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1900u;
        // 0x3b1904: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1908u;
        goto label_3b1908;
    }
    ctx->pc = 0x3B1900u;
    {
        const bool branch_taken_0x3b1900 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1900) {
            ctx->pc = 0x3B1904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1900u;
            // 0x3b1904: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B19F4u;
            goto label_3b19f4;
        }
    }
    ctx->pc = 0x3B1908u;
label_3b1908:
    // 0x3b1908: 0x1620001c  bnez        $s1, . + 4 + (0x1C << 2)
label_3b190c:
    if (ctx->pc == 0x3B190Cu) {
        ctx->pc = 0x3B1910u;
        goto label_3b1910;
    }
    ctx->pc = 0x3B1908u;
    {
        const bool branch_taken_0x3b1908 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1908) {
            ctx->pc = 0x3B197Cu;
            goto label_3b197c;
        }
    }
    ctx->pc = 0x3B1910u;
label_3b1910:
    // 0x3b1910: 0xc0e9694  jal         func_3A5A50
label_3b1914:
    if (ctx->pc == 0x3B1914u) {
        ctx->pc = 0x3B1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1910u;
        // 0x3b1914: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1918u;
        goto label_3b1918;
    }
    ctx->pc = 0x3B1910u;
    SET_GPR_U32(ctx, 31, 0x3B1918u);
    ctx->pc = 0x3B1914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1910u;
    // 0x3b1914: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3B1910u, 0x3B1918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1918u;
label_3b1918:
    // 0x3b1918: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_3b191c:
    if (ctx->pc == 0x3B191Cu) {
        ctx->pc = 0x3B191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1918u;
        // 0x3b191c: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1920u;
        goto label_3b1920;
    }
    ctx->pc = 0x3B1918u;
    {
        const bool branch_taken_0x3b1918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1918u;
        // 0x3b191c: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1918) {
            ctx->pc = 0x3B19F0u;
            goto label_3b19f0;
        }
    }
    ctx->pc = 0x3B1920u;
label_3b1920:
    // 0x3b1920: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x3b1920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3b1924:
    // 0x3b1924: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3b1924u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b1928:
    // 0x3b1928: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b1928u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b192c:
    // 0x3b192c: 0x26102028  addiu       $s0, $s0, 0x2028
    ctx->pc = 0x3b192cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8232));
label_3b1930:
    // 0x3b1930: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b1930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b1934:
    // 0x3b1934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b1934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1938:
    // 0x3b1938: 0xafb20040  sw          $s2, 0x40($sp)
    ctx->pc = 0x3b1938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 18));
label_3b193c:
    // 0x3b193c: 0xafb40460  sw          $s4, 0x460($sp)
    ctx->pc = 0x3b193cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 20));
label_3b1940:
    // 0x3b1940: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3b1940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3b1944:
    // 0x3b1944: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3b1944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3b1948:
    // 0x3b1948: 0x27a70460  addiu       $a3, $sp, 0x460
    ctx->pc = 0x3b1948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3b194c:
    // 0x3b194c: 0x7fa30480  sq          $v1, 0x480($sp)
    ctx->pc = 0x3b194cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 3));
label_3b1950:
    // 0x3b1950: 0x27a80470  addiu       $t0, $sp, 0x470
    ctx->pc = 0x3b1950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3b1954:
    // 0x3b1954: 0xafb50490  sw          $s5, 0x490($sp)
    ctx->pc = 0x3b1954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 21));
label_3b1958:
    // 0x3b1958: 0x27a90480  addiu       $t1, $sp, 0x480
    ctx->pc = 0x3b1958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3b195c:
    // 0x3b195c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3b195cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3b1960:
    // 0x3b1960: 0xc0ea040  jal         func_3A8100
label_3b1964:
    if (ctx->pc == 0x3B1964u) {
        ctx->pc = 0x3B1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1960u;
        // 0x3b1964: 0x27aa0490  addiu       $t2, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1968u;
        goto label_3b1968;
    }
    ctx->pc = 0x3B1960u;
    SET_GPR_U32(ctx, 31, 0x3B1968u);
    ctx->pc = 0x3B1964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1960u;
    // 0x3b1964: 0x27aa0490  addiu       $t2, $sp, 0x490 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3B1960u, 0x3B1968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1968u;
label_3b1968:
    // 0x3b1968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b196c:
    // 0x3b196c: 0xc0f15bc  jal         func_3C56F0
label_3b1970:
    if (ctx->pc == 0x3B1970u) {
        ctx->pc = 0x3B1970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B196Cu;
        // 0x3b1970: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1974u;
        goto label_3b1974;
    }
    ctx->pc = 0x3B196Cu;
    SET_GPR_U32(ctx, 31, 0x3B1974u);
    ctx->pc = 0x3B1970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B196Cu;
    // 0x3b1970: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B196Cu, 0x3B1974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1974u;
label_3b1974:
    // 0x3b1974: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3b1978:
    if (ctx->pc == 0x3B1978u) {
        ctx->pc = 0x3B1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1974u;
        // 0x3b1978: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B197Cu;
        goto label_3b197c;
    }
    ctx->pc = 0x3B1974u;
    {
        const bool branch_taken_0x3b1974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1974u;
        // 0x3b1978: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1974) {
            ctx->pc = 0x3B19F4u;
            goto label_3b19f4;
        }
    }
    ctx->pc = 0x3B197Cu;
label_3b197c:
    // 0x3b197c: 0xc0e9694  jal         func_3A5A50
label_3b1980:
    if (ctx->pc == 0x3B1980u) {
        ctx->pc = 0x3B1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B197Cu;
        // 0x3b1980: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1984u;
        goto label_3b1984;
    }
    ctx->pc = 0x3B197Cu;
    SET_GPR_U32(ctx, 31, 0x3B1984u);
    ctx->pc = 0x3B1980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B197Cu;
    // 0x3b1980: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3B197Cu, 0x3B1984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1984u;
label_3b1984:
    // 0x3b1984: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3b1988:
    if (ctx->pc == 0x3B1988u) {
        ctx->pc = 0x3B1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1984u;
        // 0x3b1988: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B198Cu;
        goto label_3b198c;
    }
    ctx->pc = 0x3B1984u;
    {
        const bool branch_taken_0x3b1984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1984u;
        // 0x3b1988: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1984) {
            ctx->pc = 0x3B19F0u;
            goto label_3b19f0;
        }
    }
    ctx->pc = 0x3B198Cu;
label_3b198c:
    // 0x3b198c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3b198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3b1990:
    // 0x3b1990: 0x84640454  lh          $a0, 0x454($v1)
    ctx->pc = 0x3b1990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1108)));
label_3b1994:
    // 0x3b1994: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
label_3b1998:
    if (ctx->pc == 0x3B1998u) {
        ctx->pc = 0x3B1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1994u;
        // 0x3b1998: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B199Cu;
        goto label_3b199c;
    }
    ctx->pc = 0x3B1994u;
    {
        const bool branch_taken_0x3b1994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1994u;
        // 0x3b1998: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1994) {
            ctx->pc = 0x3B19F4u;
            goto label_3b19f4;
        }
    }
    ctx->pc = 0x3B199Cu;
label_3b199c:
    // 0x3b199c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3b199cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b19a0:
    // 0x3b19a0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b19a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b19a4:
    // 0x3b19a4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3b19a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b19a8:
    // 0x3b19a8: 0x26102010  addiu       $s0, $s0, 0x2010
    ctx->pc = 0x3b19a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8208));
label_3b19ac:
    // 0x3b19ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b19acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b19b0:
    // 0x3b19b0: 0x27a50440  addiu       $a1, $sp, 0x440
    ctx->pc = 0x3b19b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3b19b4:
    // 0x3b19b4: 0xafb20450  sw          $s2, 0x450($sp)
    ctx->pc = 0x3b19b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 18));
label_3b19b8:
    // 0x3b19b8: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3b19b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3b19bc:
    // 0x3b19bc: 0xafb40460  sw          $s4, 0x460($sp)
    ctx->pc = 0x3b19bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 20));
label_3b19c0:
    // 0x3b19c0: 0x27a70460  addiu       $a3, $sp, 0x460
    ctx->pc = 0x3b19c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3b19c4:
    // 0x3b19c4: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3b19c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3b19c8:
    // 0x3b19c8: 0x27a80470  addiu       $t0, $sp, 0x470
    ctx->pc = 0x3b19c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3b19cc:
    // 0x3b19cc: 0x7fa30480  sq          $v1, 0x480($sp)
    ctx->pc = 0x3b19ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 3));
label_3b19d0:
    // 0x3b19d0: 0x27a90480  addiu       $t1, $sp, 0x480
    ctx->pc = 0x3b19d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3b19d4:
    // 0x3b19d4: 0xafb50490  sw          $s5, 0x490($sp)
    ctx->pc = 0x3b19d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 21));
label_3b19d8:
    // 0x3b19d8: 0x27aa0490  addiu       $t2, $sp, 0x490
    ctx->pc = 0x3b19d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3b19dc:
    // 0x3b19dc: 0xc0ea040  jal         func_3A8100
label_3b19e0:
    if (ctx->pc == 0x3B19E0u) {
        ctx->pc = 0x3B19E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19DCu;
        // 0x3b19e0: 0xafa00440  sw          $zero, 0x440($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19E4u;
        goto label_3b19e4;
    }
    ctx->pc = 0x3B19DCu;
    SET_GPR_U32(ctx, 31, 0x3B19E4u);
    ctx->pc = 0x3B19E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B19DCu;
    // 0x3b19e0: 0xafa00440  sw          $zero, 0x440($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3B19DCu, 0x3B19E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B19E4u;
label_3b19e4:
    // 0x3b19e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b19e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b19e8:
    // 0x3b19e8: 0xc0f15bc  jal         func_3C56F0
label_3b19ec:
    if (ctx->pc == 0x3B19ECu) {
        ctx->pc = 0x3B19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19E8u;
        // 0x3b19ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19F0u;
        goto label_3b19f0;
    }
    ctx->pc = 0x3B19E8u;
    SET_GPR_U32(ctx, 31, 0x3B19F0u);
    ctx->pc = 0x3B19ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B19E8u;
    // 0x3b19ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B19E8u, 0x3B19F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B19F0u;
label_3b19f0:
    // 0x3b19f0: 0x7bb00510  lq          $s0, 0x510($sp)
    ctx->pc = 0x3b19f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3b19f4:
    // 0x3b19f4: 0x7bb10500  lq          $s1, 0x500($sp)
    ctx->pc = 0x3b19f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3b19f8:
    // 0x3b19f8: 0x7bb204f0  lq          $s2, 0x4F0($sp)
    ctx->pc = 0x3b19f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3b19fc:
    // 0x3b19fc: 0x7bb304e0  lq          $s3, 0x4E0($sp)
    ctx->pc = 0x3b19fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3b1a00:
    // 0x3b1a00: 0x7bb404d0  lq          $s4, 0x4D0($sp)
    ctx->pc = 0x3b1a00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3b1a04:
    // 0x3b1a04: 0x7bb504c0  lq          $s5, 0x4C0($sp)
    ctx->pc = 0x3b1a04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3b1a08:
    // 0x3b1a08: 0x7bb604b0  lq          $s6, 0x4B0($sp)
    ctx->pc = 0x3b1a08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3b1a0c:
    // 0x3b1a0c: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x3b1a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
label_3b1a10:
    // 0x3b1a10: 0x3e00008  jr          $ra
label_3b1a14:
    if (ctx->pc == 0x3B1A14u) {
        ctx->pc = 0x3B1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A10u;
        // 0x3b1a14: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A18u;
        goto label_fallthrough_0x3b1a10;
    }
    ctx->pc = 0x3B1A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A10u;
        // 0x3b1a14: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b1a10:
    ctx->pc = 0x3B1A18u;
}
