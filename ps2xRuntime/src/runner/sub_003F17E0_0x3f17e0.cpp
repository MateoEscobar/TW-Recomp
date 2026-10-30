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

// Function: sub_003F17E0
// Address: 0x3f17e0 - 0x3f1950
void sub_003F17E0_0x3f17e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F17E0_0x3f17e0");
#endif

    switch (ctx->pc) {
        case 0x3f17e0u: goto label_3f17e0;
        case 0x3f17e4u: goto label_3f17e4;
        case 0x3f17e8u: goto label_3f17e8;
        case 0x3f17ecu: goto label_3f17ec;
        case 0x3f17f0u: goto label_3f17f0;
        case 0x3f17f4u: goto label_3f17f4;
        case 0x3f17f8u: goto label_3f17f8;
        case 0x3f17fcu: goto label_3f17fc;
        case 0x3f1800u: goto label_3f1800;
        case 0x3f1804u: goto label_3f1804;
        case 0x3f1808u: goto label_3f1808;
        case 0x3f180cu: goto label_3f180c;
        case 0x3f1810u: goto label_3f1810;
        case 0x3f1814u: goto label_3f1814;
        case 0x3f1818u: goto label_3f1818;
        case 0x3f181cu: goto label_3f181c;
        case 0x3f1820u: goto label_3f1820;
        case 0x3f1824u: goto label_3f1824;
        case 0x3f1828u: goto label_3f1828;
        case 0x3f182cu: goto label_3f182c;
        case 0x3f1830u: goto label_3f1830;
        case 0x3f1834u: goto label_3f1834;
        case 0x3f1838u: goto label_3f1838;
        case 0x3f183cu: goto label_3f183c;
        case 0x3f1840u: goto label_3f1840;
        case 0x3f1844u: goto label_3f1844;
        case 0x3f1848u: goto label_3f1848;
        case 0x3f184cu: goto label_3f184c;
        case 0x3f1850u: goto label_3f1850;
        case 0x3f1854u: goto label_3f1854;
        case 0x3f1858u: goto label_3f1858;
        case 0x3f185cu: goto label_3f185c;
        case 0x3f1860u: goto label_3f1860;
        case 0x3f1864u: goto label_3f1864;
        case 0x3f1868u: goto label_3f1868;
        case 0x3f186cu: goto label_3f186c;
        case 0x3f1870u: goto label_3f1870;
        case 0x3f1874u: goto label_3f1874;
        case 0x3f1878u: goto label_3f1878;
        case 0x3f187cu: goto label_3f187c;
        case 0x3f1880u: goto label_3f1880;
        case 0x3f1884u: goto label_3f1884;
        case 0x3f1888u: goto label_3f1888;
        case 0x3f188cu: goto label_3f188c;
        case 0x3f1890u: goto label_3f1890;
        case 0x3f1894u: goto label_3f1894;
        case 0x3f1898u: goto label_3f1898;
        case 0x3f189cu: goto label_3f189c;
        case 0x3f18a0u: goto label_3f18a0;
        case 0x3f18a4u: goto label_3f18a4;
        case 0x3f18a8u: goto label_3f18a8;
        case 0x3f18acu: goto label_3f18ac;
        case 0x3f18b0u: goto label_3f18b0;
        case 0x3f18b4u: goto label_3f18b4;
        case 0x3f18b8u: goto label_3f18b8;
        case 0x3f18bcu: goto label_3f18bc;
        case 0x3f18c0u: goto label_3f18c0;
        case 0x3f18c4u: goto label_3f18c4;
        case 0x3f18c8u: goto label_3f18c8;
        case 0x3f18ccu: goto label_3f18cc;
        case 0x3f18d0u: goto label_3f18d0;
        case 0x3f18d4u: goto label_3f18d4;
        case 0x3f18d8u: goto label_3f18d8;
        case 0x3f18dcu: goto label_3f18dc;
        case 0x3f18e0u: goto label_3f18e0;
        case 0x3f18e4u: goto label_3f18e4;
        case 0x3f18e8u: goto label_3f18e8;
        case 0x3f18ecu: goto label_3f18ec;
        case 0x3f18f0u: goto label_3f18f0;
        case 0x3f18f4u: goto label_3f18f4;
        case 0x3f18f8u: goto label_3f18f8;
        case 0x3f18fcu: goto label_3f18fc;
        case 0x3f1900u: goto label_3f1900;
        case 0x3f1904u: goto label_3f1904;
        case 0x3f1908u: goto label_3f1908;
        case 0x3f190cu: goto label_3f190c;
        case 0x3f1910u: goto label_3f1910;
        case 0x3f1914u: goto label_3f1914;
        case 0x3f1918u: goto label_3f1918;
        case 0x3f191cu: goto label_3f191c;
        case 0x3f1920u: goto label_3f1920;
        case 0x3f1924u: goto label_3f1924;
        case 0x3f1928u: goto label_3f1928;
        case 0x3f192cu: goto label_3f192c;
        case 0x3f1930u: goto label_3f1930;
        case 0x3f1934u: goto label_3f1934;
        case 0x3f1938u: goto label_3f1938;
        case 0x3f193cu: goto label_3f193c;
        case 0x3f1940u: goto label_3f1940;
        case 0x3f1944u: goto label_3f1944;
        case 0x3f1948u: goto label_3f1948;
        case 0x3f194cu: goto label_3f194c;
        default: break;
    }

    ctx->pc = 0x3f17e0u;

label_3f17e0:
    // 0x3f17e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f17e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3f17e4:
    // 0x3f17e4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3f17e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3f17e8:
    // 0x3f17e8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3f17e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3f17ec:
    // 0x3f17ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f17ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f17f0:
    // 0x3f17f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3f17f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3f17f4:
    // 0x3f17f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f17f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f17f8:
    // 0x3f17f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f17f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f17fc:
    // 0x3f17fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f17fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f1800:
    // 0x3f1800: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f1800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f1804:
    // 0x3f1804: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f1804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f1808:
    // 0x3f1808: 0x40f809  jalr        $v0
label_3f180c:
    if (ctx->pc == 0x3F180Cu) {
        ctx->pc = 0x3F180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1808u;
        // 0x3f180c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1810u;
        goto label_3f1810;
    }
    ctx->pc = 0x3F1808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F1810u);
        ctx->pc = 0x3F180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1808u;
        // 0x3f180c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1808u, 0x3F1810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F1810u;
label_3f1810:
    // 0x3f1810: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f1810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f1814:
    // 0x3f1814: 0xc0ea14c  jal         func_3A8530
label_3f1818:
    if (ctx->pc == 0x3F1818u) {
        ctx->pc = 0x3F1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1814u;
        // 0x3f1818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F181Cu;
        goto label_3f181c;
    }
    ctx->pc = 0x3F1814u;
    SET_GPR_U32(ctx, 31, 0x3F181Cu);
    ctx->pc = 0x3F1818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1814u;
    // 0x3f1818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F1814u, 0x3F181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F181Cu;
label_3f181c:
    // 0x3f181c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f181cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f1820:
    // 0x3f1820: 0xc0ea12a  jal         func_3A84A8
label_3f1824:
    if (ctx->pc == 0x3F1824u) {
        ctx->pc = 0x3F1824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1820u;
        // 0x3f1824: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1828u;
        goto label_3f1828;
    }
    ctx->pc = 0x3F1820u;
    SET_GPR_U32(ctx, 31, 0x3F1828u);
    ctx->pc = 0x3F1824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1820u;
    // 0x3f1824: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F1820u, 0x3F1828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1828u;
label_3f1828:
    // 0x3f1828: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f1828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f182c:
    // 0x3f182c: 0xc0ea12a  jal         func_3A84A8
label_3f1830:
    if (ctx->pc == 0x3F1830u) {
        ctx->pc = 0x3F1830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F182Cu;
        // 0x3f1830: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1834u;
        goto label_3f1834;
    }
    ctx->pc = 0x3F182Cu;
    SET_GPR_U32(ctx, 31, 0x3F1834u);
    ctx->pc = 0x3F1830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F182Cu;
    // 0x3f1830: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F182Cu, 0x3F1834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1834u;
label_3f1834:
    // 0x3f1834: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3f1834u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f1838:
    // 0x3f1838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f1838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f183c:
    // 0x3f183c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3f183cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3f1840:
    // 0x3f1840: 0xc0e858c  jal         func_3A1630
label_3f1844:
    if (ctx->pc == 0x3F1844u) {
        ctx->pc = 0x3F1844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1840u;
        // 0x3f1844: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1848u;
        goto label_3f1848;
    }
    ctx->pc = 0x3F1840u;
    SET_GPR_U32(ctx, 31, 0x3F1848u);
    ctx->pc = 0x3F1844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1840u;
    // 0x3f1844: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F1840u, 0x3F1848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1848u;
label_3f1848:
    // 0x3f1848: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3f1848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3f184c:
    // 0x3f184c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x3f184cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_3f1850:
    // 0x3f1850: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3f1850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_3f1854:
    // 0x3f1854: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x3f1854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
label_3f1858:
    // 0x3f1858: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x3f1858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_3f185c:
    // 0x3f185c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3f185cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3f1860:
    // 0x3f1860: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3f1860u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_3f1864:
    // 0x3f1864: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3f1864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3f1868:
    // 0x3f1868: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3f1868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3f186c:
    // 0x3f186c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f186cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f1870:
    // 0x3f1870: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3f1870u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f1874:
    // 0x3f1874: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x3f1874u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_3f1878:
    // 0x3f1878: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3f1878u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3f187c:
    // 0x3f187c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f187cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f1880:
    // 0x3f1880: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3f1880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3f1884:
    // 0x3f1884: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3f1884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3f1888:
    // 0x3f1888: 0x40f809  jalr        $v0
label_3f188c:
    if (ctx->pc == 0x3F188Cu) {
        ctx->pc = 0x3F188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1888u;
        // 0x3f188c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1890u;
        goto label_3f1890;
    }
    ctx->pc = 0x3F1888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F1890u);
        ctx->pc = 0x3F188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1888u;
        // 0x3f188c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1888u, 0x3F1890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F1890u;
label_3f1890:
    // 0x3f1890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f1890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f1894:
    // 0x3f1894: 0xc0e9132  jal         func_3A44C8
label_3f1898:
    if (ctx->pc == 0x3F1898u) {
        ctx->pc = 0x3F1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1894u;
        // 0x3f1898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F189Cu;
        goto label_3f189c;
    }
    ctx->pc = 0x3F1894u;
    SET_GPR_U32(ctx, 31, 0x3F189Cu);
    ctx->pc = 0x3F1898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1894u;
    // 0x3f1898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3F1894u, 0x3F189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F189Cu;
label_3f189c:
    // 0x3f189c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f189cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f18a0:
    // 0x3f18a0: 0x3c022fd6  lui         $v0, 0x2FD6
    ctx->pc = 0x3f18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12246 << 16));
label_3f18a4:
    // 0x3f18a4: 0x344290d6  ori         $v0, $v0, 0x90D6
    ctx->pc = 0x3f18a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37078);
label_3f18a8:
    // 0x3f18a8: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_3f18ac:
    if (ctx->pc == 0x3F18ACu) {
        ctx->pc = 0x3F18ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F18A8u;
        // 0x3f18ac: 0xae2400c4  sw          $a0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F18B0u;
        goto label_3f18b0;
    }
    ctx->pc = 0x3F18A8u;
    {
        const bool branch_taken_0x3f18a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F18ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F18A8u;
        // 0x3f18ac: 0xae2400c4  sw          $a0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f18a8) {
            ctx->pc = 0x3F18C4u;
            goto label_3f18c4;
        }
    }
    ctx->pc = 0x3F18B0u;
label_3f18b0:
    // 0x3f18b0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3f18b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3f18b4:
    // 0x3f18b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f18b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3f18b8:
    // 0x3f18b8: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x3f18b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_3f18bc:
    // 0x3f18bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3f18bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3f18c0:
    // 0x3f18c0: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3f18c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3f18c4:
    // 0x3f18c4: 0x3c028733  lui         $v0, 0x8733
    ctx->pc = 0x3f18c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34611 << 16));
label_3f18c8:
    // 0x3f18c8: 0x3442e003  ori         $v0, $v0, 0xE003
    ctx->pc = 0x3f18c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57347);
label_3f18cc:
    // 0x3f18cc: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
label_3f18d0:
    if (ctx->pc == 0x3F18D0u) {
        ctx->pc = 0x3F18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F18CCu;
        // 0x3f18d0: 0x3c021e3a  lui         $v0, 0x1E3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7738 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F18D4u;
        goto label_3f18d4;
    }
    ctx->pc = 0x3F18CCu;
    {
        const bool branch_taken_0x3f18cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F18CCu;
        // 0x3f18d0: 0x3c021e3a  lui         $v0, 0x1E3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7738 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f18cc) {
            ctx->pc = 0x3F1928u;
            goto label_3f1928;
        }
    }
    ctx->pc = 0x3F18D4u;
label_3f18d4:
    // 0x3f18d4: 0x3442b1b9  ori         $v0, $v0, 0xB1B9
    ctx->pc = 0x3f18d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45497);
label_3f18d8:
    // 0x3f18d8: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
label_3f18dc:
    if (ctx->pc == 0x3F18DCu) {
        ctx->pc = 0x3F18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F18D8u;
        // 0x3f18dc: 0x3c02693d  lui         $v0, 0x693D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26941 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F18E0u;
        goto label_3f18e0;
    }
    ctx->pc = 0x3F18D8u;
    {
        const bool branch_taken_0x3f18d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F18D8u;
        // 0x3f18dc: 0x3c02693d  lui         $v0, 0x693D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26941 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f18d8) {
            ctx->pc = 0x3F1928u;
            goto label_3f1928;
        }
    }
    ctx->pc = 0x3F18E0u;
label_3f18e0:
    // 0x3f18e0: 0x3442812f  ori         $v0, $v0, 0x812F
    ctx->pc = 0x3f18e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33071);
label_3f18e4:
    // 0x3f18e4: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
label_3f18e8:
    if (ctx->pc == 0x3F18E8u) {
        ctx->pc = 0x3F18E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F18E4u;
        // 0x3f18e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F18ECu;
        goto label_3f18ec;
    }
    ctx->pc = 0x3F18E4u;
    {
        const bool branch_taken_0x3f18e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F18E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F18E4u;
        // 0x3f18e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f18e4) {
            ctx->pc = 0x3F192Cu;
            goto label_3f192c;
        }
    }
    ctx->pc = 0x3F18ECu;
label_3f18ec:
    // 0x3f18ec: 0x3c02e09f  lui         $v0, 0xE09F
    ctx->pc = 0x3f18ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57503 << 16));
label_3f18f0:
    // 0x3f18f0: 0x34426c15  ori         $v0, $v0, 0x6C15
    ctx->pc = 0x3f18f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27669);
label_3f18f4:
    // 0x3f18f4: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
label_3f18f8:
    if (ctx->pc == 0x3F18F8u) {
        ctx->pc = 0x3F18F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F18F4u;
        // 0x3f18f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F18FCu;
        goto label_3f18fc;
    }
    ctx->pc = 0x3F18F4u;
    {
        const bool branch_taken_0x3f18f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F18F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F18F4u;
        // 0x3f18f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f18f4) {
            ctx->pc = 0x3F192Cu;
            goto label_3f192c;
        }
    }
    ctx->pc = 0x3F18FCu;
label_3f18fc:
    // 0x3f18fc: 0x3c02c57a  lui         $v0, 0xC57A
    ctx->pc = 0x3f18fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50554 << 16));
label_3f1900:
    // 0x3f1900: 0x3442b00a  ori         $v0, $v0, 0xB00A
    ctx->pc = 0x3f1900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45066);
label_3f1904:
    // 0x3f1904: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_3f1908:
    if (ctx->pc == 0x3F1908u) {
        ctx->pc = 0x3F1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1904u;
        // 0x3f1908: 0x3c027056  lui         $v0, 0x7056 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28758 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F190Cu;
        goto label_3f190c;
    }
    ctx->pc = 0x3F1904u;
    {
        const bool branch_taken_0x3f1904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1904u;
        // 0x3f1908: 0x3c027056  lui         $v0, 0x7056 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28758 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1904) {
            ctx->pc = 0x3F1928u;
            goto label_3f1928;
        }
    }
    ctx->pc = 0x3F190Cu;
label_3f190c:
    // 0x3f190c: 0x3442d232  ori         $v0, $v0, 0xD232
    ctx->pc = 0x3f190cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53810);
label_3f1910:
    // 0x3f1910: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_3f1914:
    if (ctx->pc == 0x3F1914u) {
        ctx->pc = 0x3F1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1910u;
        // 0x3f1914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1918u;
        goto label_3f1918;
    }
    ctx->pc = 0x3F1910u;
    {
        const bool branch_taken_0x3f1910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1910u;
        // 0x3f1914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1910) {
            ctx->pc = 0x3F192Cu;
            goto label_3f192c;
        }
    }
    ctx->pc = 0x3F1918u;
label_3f1918:
    // 0x3f1918: 0x3c02b239  lui         $v0, 0xB239
    ctx->pc = 0x3f1918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45625 << 16));
label_3f191c:
    // 0x3f191c: 0x3442f45d  ori         $v0, $v0, 0xF45D
    ctx->pc = 0x3f191cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62557);
label_3f1920:
    // 0x3f1920: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
label_3f1924:
    if (ctx->pc == 0x3F1924u) {
        ctx->pc = 0x3F1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1920u;
        // 0x3f1924: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1928u;
        goto label_3f1928;
    }
    ctx->pc = 0x3F1920u;
    {
        const bool branch_taken_0x3f1920 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f1920) {
            ctx->pc = 0x3F1924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F1920u;
            // 0x3f1924: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F1930u;
            goto label_3f1930;
        }
    }
    ctx->pc = 0x3F1928u;
label_3f1928:
    // 0x3f1928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f1928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f192c:
    // 0x3f192c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x3f192cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_3f1930:
    // 0x3f1930: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x3f1930u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_3f1934:
    // 0x3f1934: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3f1934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f1938:
    // 0x3f1938: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3f1938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f193c:
    // 0x3f193c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3f193cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f1940:
    // 0x3f1940: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f1940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f1944:
    // 0x3f1944: 0x3e00008  jr          $ra
label_3f1948:
    if (ctx->pc == 0x3F1948u) {
        ctx->pc = 0x3F1948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1944u;
        // 0x3f1948: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F194Cu;
        goto label_3f194c;
    }
    ctx->pc = 0x3F1944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1944u;
        // 0x3f1948: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F194Cu;
label_3f194c:
    // 0x3f194c: 0x0  nop
    ctx->pc = 0x3f194cu;
    // NOP
    ctx->pc = 0x3f1950u;
}
