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

// Function: sub_004C17D8
// Address: 0x4c17d8 - 0x4c18a0
void sub_004C17D8_0x4c17d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C17D8_0x4c17d8");
#endif

    switch (ctx->pc) {
        case 0x4c17d8u: goto label_4c17d8;
        case 0x4c17dcu: goto label_4c17dc;
        case 0x4c17e0u: goto label_4c17e0;
        case 0x4c17e4u: goto label_4c17e4;
        case 0x4c17e8u: goto label_4c17e8;
        case 0x4c17ecu: goto label_4c17ec;
        case 0x4c17f0u: goto label_4c17f0;
        case 0x4c17f4u: goto label_4c17f4;
        case 0x4c17f8u: goto label_4c17f8;
        case 0x4c17fcu: goto label_4c17fc;
        case 0x4c1800u: goto label_4c1800;
        case 0x4c1804u: goto label_4c1804;
        case 0x4c1808u: goto label_4c1808;
        case 0x4c180cu: goto label_4c180c;
        case 0x4c1810u: goto label_4c1810;
        case 0x4c1814u: goto label_4c1814;
        case 0x4c1818u: goto label_4c1818;
        case 0x4c181cu: goto label_4c181c;
        case 0x4c1820u: goto label_4c1820;
        case 0x4c1824u: goto label_4c1824;
        case 0x4c1828u: goto label_4c1828;
        case 0x4c182cu: goto label_4c182c;
        case 0x4c1830u: goto label_4c1830;
        case 0x4c1834u: goto label_4c1834;
        case 0x4c1838u: goto label_4c1838;
        case 0x4c183cu: goto label_4c183c;
        case 0x4c1840u: goto label_4c1840;
        case 0x4c1844u: goto label_4c1844;
        case 0x4c1848u: goto label_4c1848;
        case 0x4c184cu: goto label_4c184c;
        case 0x4c1850u: goto label_4c1850;
        case 0x4c1854u: goto label_4c1854;
        case 0x4c1858u: goto label_4c1858;
        case 0x4c185cu: goto label_4c185c;
        case 0x4c1860u: goto label_4c1860;
        case 0x4c1864u: goto label_4c1864;
        case 0x4c1868u: goto label_4c1868;
        case 0x4c186cu: goto label_4c186c;
        case 0x4c1870u: goto label_4c1870;
        case 0x4c1874u: goto label_4c1874;
        case 0x4c1878u: goto label_4c1878;
        case 0x4c187cu: goto label_4c187c;
        case 0x4c1880u: goto label_4c1880;
        case 0x4c1884u: goto label_4c1884;
        case 0x4c1888u: goto label_4c1888;
        case 0x4c188cu: goto label_4c188c;
        case 0x4c1890u: goto label_4c1890;
        case 0x4c1894u: goto label_4c1894;
        case 0x4c1898u: goto label_4c1898;
        case 0x4c189cu: goto label_4c189c;
        default: break;
    }

    ctx->pc = 0x4c17d8u;

label_4c17d8:
    // 0x4c17d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c17d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c17dc:
    // 0x4c17dc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4c17dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c17e0:
    // 0x4c17e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c17e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c17e4:
    // 0x4c17e4: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x4c17e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4c17e8:
    // 0x4c17e8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x4c17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4c17ec:
    // 0x4c17ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4c17f0:
    if (ctx->pc == 0x4C17F0u) {
        ctx->pc = 0x4C17F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C17ECu;
        // 0x4c17f0: 0x24650028  addiu       $a1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C17F4u;
        goto label_4c17f4;
    }
    ctx->pc = 0x4C17ECu;
    {
        const bool branch_taken_0x4c17ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C17F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C17ECu;
        // 0x4c17f0: 0x24650028  addiu       $a1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c17ec) {
            ctx->pc = 0x4C1804u;
            goto label_4c1804;
        }
    }
    ctx->pc = 0x4C17F4u;
label_4c17f4:
    // 0x4c17f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4c17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c17f8:
    // 0x4c17f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4c17f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c17fc:
    // 0x4c17fc: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x4c17fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_4c1800:
    // 0x4c1800: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x4c1800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
label_4c1804:
    // 0x4c1804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c1804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c1808:
    // 0x4c1808: 0x50c2000c  beql        $a2, $v0, . + 4 + (0xC << 2)
label_4c180c:
    if (ctx->pc == 0x4C180Cu) {
        ctx->pc = 0x4C180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1808u;
        // 0x4c180c: 0x8ca20010  lw          $v0, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1810u;
        goto label_4c1810;
    }
    ctx->pc = 0x4C1808u;
    {
        const bool branch_taken_0x4c1808 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c1808) {
            ctx->pc = 0x4C180Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C1808u;
            // 0x4c180c: 0x8ca20010  lw          $v0, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C183Cu;
            goto label_4c183c;
        }
    }
    ctx->pc = 0x4C1810u;
label_4c1810:
    // 0x4c1810: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x4c1810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_4c1814:
    // 0x4c1814: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4c1818:
    if (ctx->pc == 0x4C1818u) {
        ctx->pc = 0x4C1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1814u;
        // 0x4c1818: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C181Cu;
        goto label_4c181c;
    }
    ctx->pc = 0x4C1814u;
    {
        const bool branch_taken_0x4c1814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1814) {
            ctx->pc = 0x4C1818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C1814u;
            // 0x4c1818: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C182Cu;
            goto label_4c182c;
        }
    }
    ctx->pc = 0x4C181Cu;
label_4c181c:
    // 0x4c181c: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_4c1820:
    if (ctx->pc == 0x4C1820u) {
        ctx->pc = 0x4C1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C181Cu;
        // 0x4c1820: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1824u;
        goto label_4c1824;
    }
    ctx->pc = 0x4C181Cu;
    {
        const bool branch_taken_0x4c181c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C181Cu;
        // 0x4c1820: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c181c) {
            ctx->pc = 0x4C1864u;
            goto label_4c1864;
        }
    }
    ctx->pc = 0x4C1824u;
label_4c1824:
    // 0x4c1824: 0x1000001b  b           . + 4 + (0x1B << 2)
label_4c1828:
    if (ctx->pc == 0x4C1828u) {
        ctx->pc = 0x4C1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1824u;
        // 0x4c1828: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C182Cu;
        goto label_4c182c;
    }
    ctx->pc = 0x4C1824u;
    {
        const bool branch_taken_0x4c1824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1824u;
        // 0x4c1828: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1824) {
            ctx->pc = 0x4C1894u;
            goto label_4c1894;
        }
    }
    ctx->pc = 0x4C182Cu;
label_4c182c:
    // 0x4c182c: 0x50c20008  beql        $a2, $v0, . + 4 + (0x8 << 2)
label_4c1830:
    if (ctx->pc == 0x4C1830u) {
        ctx->pc = 0x4C1830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C182Cu;
        // 0x4c1830: 0x8ca20010  lw          $v0, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1834u;
        goto label_4c1834;
    }
    ctx->pc = 0x4C182Cu;
    {
        const bool branch_taken_0x4c182c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c182c) {
            ctx->pc = 0x4C1830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C182Cu;
            // 0x4c1830: 0x8ca20010  lw          $v0, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C1850u;
            goto label_4c1850;
        }
    }
    ctx->pc = 0x4C1834u;
label_4c1834:
    // 0x4c1834: 0x10000014  b           . + 4 + (0x14 << 2)
label_4c1838:
    if (ctx->pc == 0x4C1838u) {
        ctx->pc = 0x4C1838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1834u;
        // 0x4c1838: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C183Cu;
        goto label_4c183c;
    }
    ctx->pc = 0x4C1834u;
    {
        const bool branch_taken_0x4c1834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1834u;
        // 0x4c1838: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1834) {
            ctx->pc = 0x4C1888u;
            goto label_4c1888;
        }
    }
    ctx->pc = 0x4C183Cu;
label_4c183c:
    // 0x4c183c: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x4c183cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
label_4c1840:
    // 0x4c1840: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4c1840u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_4c1844:
    // 0x4c1844: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4c1844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c1848:
    // 0x4c1848: 0x1000000b  b           . + 4 + (0xB << 2)
label_4c184c:
    if (ctx->pc == 0x4C184Cu) {
        ctx->pc = 0x4C184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1848u;
        // 0x4c184c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1850u;
        goto label_4c1850;
    }
    ctx->pc = 0x4C1848u;
    {
        const bool branch_taken_0x4c1848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1848u;
        // 0x4c184c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1848) {
            ctx->pc = 0x4C1878u;
            goto label_4c1878;
        }
    }
    ctx->pc = 0x4C1850u;
label_4c1850:
    // 0x4c1850: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x4c1850u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
label_4c1854:
    // 0x4c1854: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4c1854u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_4c1858:
    // 0x4c1858: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4c1858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c185c:
    // 0x4c185c: 0x10000006  b           . + 4 + (0x6 << 2)
label_4c1860:
    if (ctx->pc == 0x4C1860u) {
        ctx->pc = 0x4C1860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C185Cu;
        // 0x4c1860: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1864u;
        goto label_4c1864;
    }
    ctx->pc = 0x4C185Cu;
    {
        const bool branch_taken_0x4c185c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C185Cu;
        // 0x4c1860: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c185c) {
            ctx->pc = 0x4C1878u;
            goto label_4c1878;
        }
    }
    ctx->pc = 0x4C1864u;
label_4c1864:
    // 0x4c1864: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x4c1864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_4c1868:
    // 0x4c1868: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x4c1868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
label_4c186c:
    // 0x4c186c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4c186cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_4c1870:
    // 0x4c1870: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4c1870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c1874:
    // 0x4c1874: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4c1874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c1878:
    // 0x4c1878: 0x40f809  jalr        $v0
label_4c187c:
    if (ctx->pc == 0x4C187Cu) {
        ctx->pc = 0x4C187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1878u;
        // 0x4c187c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1880u;
        goto label_4c1880;
    }
    ctx->pc = 0x4C1878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C1880u);
        ctx->pc = 0x4C187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1878u;
        // 0x4c187c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1878u, 0x4C1880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C1880u;
label_4c1880:
    // 0x4c1880: 0x10000003  b           . + 4 + (0x3 << 2)
label_4c1884:
    if (ctx->pc == 0x4C1884u) {
        ctx->pc = 0x4C1884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1880u;
        // 0x4c1884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1888u;
        goto label_4c1888;
    }
    ctx->pc = 0x4C1880u;
    {
        const bool branch_taken_0x4c1880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1880u;
        // 0x4c1884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1880) {
            ctx->pc = 0x4C1890u;
            goto label_4c1890;
        }
    }
    ctx->pc = 0x4C1888u;
label_4c1888:
    // 0x4c1888: 0x10000002  b           . + 4 + (0x2 << 2)
label_4c188c:
    if (ctx->pc == 0x4C188Cu) {
        ctx->pc = 0x4C188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1888u;
        // 0x4c188c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1890u;
        goto label_4c1890;
    }
    ctx->pc = 0x4C1888u;
    {
        const bool branch_taken_0x4c1888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1888u;
        // 0x4c188c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1888) {
            ctx->pc = 0x4C1894u;
            goto label_4c1894;
        }
    }
    ctx->pc = 0x4C1890u;
label_4c1890:
    // 0x4c1890: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c1890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c1894:
    // 0x4c1894: 0x3e00008  jr          $ra
label_4c1898:
    if (ctx->pc == 0x4C1898u) {
        ctx->pc = 0x4C1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1894u;
        // 0x4c1898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C189Cu;
        goto label_4c189c;
    }
    ctx->pc = 0x4C1894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1894u;
        // 0x4c1898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C189Cu;
label_4c189c:
    // 0x4c189c: 0x0  nop
    ctx->pc = 0x4c189cu;
    // NOP
    ctx->pc = 0x4c18a0u;
}
