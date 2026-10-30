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

// Function: sub_001D16E8
// Address: 0x1d16e8 - 0x1d1848
void sub_001D16E8_0x1d16e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D16E8_0x1d16e8");
#endif

    switch (ctx->pc) {
        case 0x1d16e8u: goto label_1d16e8;
        case 0x1d16ecu: goto label_1d16ec;
        case 0x1d16f0u: goto label_1d16f0;
        case 0x1d16f4u: goto label_1d16f4;
        case 0x1d16f8u: goto label_1d16f8;
        case 0x1d16fcu: goto label_1d16fc;
        case 0x1d1700u: goto label_1d1700;
        case 0x1d1704u: goto label_1d1704;
        case 0x1d1708u: goto label_1d1708;
        case 0x1d170cu: goto label_1d170c;
        case 0x1d1710u: goto label_1d1710;
        case 0x1d1714u: goto label_1d1714;
        case 0x1d1718u: goto label_1d1718;
        case 0x1d171cu: goto label_1d171c;
        case 0x1d1720u: goto label_1d1720;
        case 0x1d1724u: goto label_1d1724;
        case 0x1d1728u: goto label_1d1728;
        case 0x1d172cu: goto label_1d172c;
        case 0x1d1730u: goto label_1d1730;
        case 0x1d1734u: goto label_1d1734;
        case 0x1d1738u: goto label_1d1738;
        case 0x1d173cu: goto label_1d173c;
        case 0x1d1740u: goto label_1d1740;
        case 0x1d1744u: goto label_1d1744;
        case 0x1d1748u: goto label_1d1748;
        case 0x1d174cu: goto label_1d174c;
        case 0x1d1750u: goto label_1d1750;
        case 0x1d1754u: goto label_1d1754;
        case 0x1d1758u: goto label_1d1758;
        case 0x1d175cu: goto label_1d175c;
        case 0x1d1760u: goto label_1d1760;
        case 0x1d1764u: goto label_1d1764;
        case 0x1d1768u: goto label_1d1768;
        case 0x1d176cu: goto label_1d176c;
        case 0x1d1770u: goto label_1d1770;
        case 0x1d1774u: goto label_1d1774;
        case 0x1d1778u: goto label_1d1778;
        case 0x1d177cu: goto label_1d177c;
        case 0x1d1780u: goto label_1d1780;
        case 0x1d1784u: goto label_1d1784;
        case 0x1d1788u: goto label_1d1788;
        case 0x1d178cu: goto label_1d178c;
        case 0x1d1790u: goto label_1d1790;
        case 0x1d1794u: goto label_1d1794;
        case 0x1d1798u: goto label_1d1798;
        case 0x1d179cu: goto label_1d179c;
        case 0x1d17a0u: goto label_1d17a0;
        case 0x1d17a4u: goto label_1d17a4;
        case 0x1d17a8u: goto label_1d17a8;
        case 0x1d17acu: goto label_1d17ac;
        case 0x1d17b0u: goto label_1d17b0;
        case 0x1d17b4u: goto label_1d17b4;
        case 0x1d17b8u: goto label_1d17b8;
        case 0x1d17bcu: goto label_1d17bc;
        case 0x1d17c0u: goto label_1d17c0;
        case 0x1d17c4u: goto label_1d17c4;
        case 0x1d17c8u: goto label_1d17c8;
        case 0x1d17ccu: goto label_1d17cc;
        case 0x1d17d0u: goto label_1d17d0;
        case 0x1d17d4u: goto label_1d17d4;
        case 0x1d17d8u: goto label_1d17d8;
        case 0x1d17dcu: goto label_1d17dc;
        case 0x1d17e0u: goto label_1d17e0;
        case 0x1d17e4u: goto label_1d17e4;
        case 0x1d17e8u: goto label_1d17e8;
        case 0x1d17ecu: goto label_1d17ec;
        case 0x1d17f0u: goto label_1d17f0;
        case 0x1d17f4u: goto label_1d17f4;
        case 0x1d17f8u: goto label_1d17f8;
        case 0x1d17fcu: goto label_1d17fc;
        case 0x1d1800u: goto label_1d1800;
        case 0x1d1804u: goto label_1d1804;
        case 0x1d1808u: goto label_1d1808;
        case 0x1d180cu: goto label_1d180c;
        case 0x1d1810u: goto label_1d1810;
        case 0x1d1814u: goto label_1d1814;
        case 0x1d1818u: goto label_1d1818;
        case 0x1d181cu: goto label_1d181c;
        case 0x1d1820u: goto label_1d1820;
        case 0x1d1824u: goto label_1d1824;
        case 0x1d1828u: goto label_1d1828;
        case 0x1d182cu: goto label_1d182c;
        case 0x1d1830u: goto label_1d1830;
        case 0x1d1834u: goto label_1d1834;
        case 0x1d1838u: goto label_1d1838;
        case 0x1d183cu: goto label_1d183c;
        case 0x1d1840u: goto label_1d1840;
        case 0x1d1844u: goto label_1d1844;
        default: break;
    }

    ctx->pc = 0x1d16e8u;

label_1d16e8:
    // 0x1d16e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1d16e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1d16ec:
    // 0x1d16ec: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1d16ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1d16f0:
    // 0x1d16f0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1d16f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1d16f4:
    // 0x1d16f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d16f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d16f8:
    // 0x1d16f8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1d16f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1d16fc:
    // 0x1d16fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d16fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1d1700:
    // 0x1d1700: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1d1700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1d1704:
    // 0x1d1704: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1d1704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_1d1708:
    // 0x1d1708: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1d1708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_1d170c:
    // 0x1d170c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d170cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d1710:
    // 0x1d1710: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d1710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d1714:
    // 0x1d1714: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1d1714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1d1718:
    // 0x1d1718: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1d1718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1d171c:
    // 0x1d171c: 0x40f809  jalr        $v0
label_1d1720:
    if (ctx->pc == 0x1D1720u) {
        ctx->pc = 0x1D1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D171Cu;
        // 0x1d1720: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1724u;
        goto label_1d1724;
    }
    ctx->pc = 0x1D171Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1724u);
        ctx->pc = 0x1D1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D171Cu;
        // 0x1d1720: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D171Cu, 0x1D1724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1724u;
label_1d1724:
    // 0x1d1724: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_1d1728:
    if (ctx->pc == 0x1D1728u) {
        ctx->pc = 0x1D1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1724u;
        // 0x1d1728: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D172Cu;
        goto label_1d172c;
    }
    ctx->pc = 0x1D1724u;
    {
        const bool branch_taken_0x1d1724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1724u;
        // 0x1d1728: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1724) {
            ctx->pc = 0x1D1824u;
            goto label_1d1824;
        }
    }
    ctx->pc = 0x1D172Cu;
label_1d172c:
    // 0x1d172c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d172cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d1730:
    // 0x1d1730: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1d1730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1d1734:
    // 0x1d1734: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1d1734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1d1738:
    // 0x1d1738: 0x40f809  jalr        $v0
label_1d173c:
    if (ctx->pc == 0x1D173Cu) {
        ctx->pc = 0x1D173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1738u;
        // 0x1d173c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1740u;
        goto label_1d1740;
    }
    ctx->pc = 0x1D1738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1740u);
        ctx->pc = 0x1D173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1738u;
        // 0x1d173c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1738u, 0x1D1740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1740u;
label_1d1740:
    // 0x1d1740: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_1d1744:
    if (ctx->pc == 0x1D1744u) {
        ctx->pc = 0x1D1744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1740u;
        // 0x1d1744: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1748u;
        goto label_1d1748;
    }
    ctx->pc = 0x1D1740u;
    {
        const bool branch_taken_0x1d1740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1740u;
        // 0x1d1744: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1740) {
            ctx->pc = 0x1D1824u;
            goto label_1d1824;
        }
    }
    ctx->pc = 0x1D1748u;
label_1d1748:
    // 0x1d1748: 0x26440140  addiu       $a0, $s2, 0x140
    ctx->pc = 0x1d1748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
label_1d174c:
    // 0x1d174c: 0xc068998  jal         func_1A2660
label_1d1750:
    if (ctx->pc == 0x1D1750u) {
        ctx->pc = 0x1D1750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D174Cu;
        // 0x1d1750: 0x26510134  addiu       $s1, $s2, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 308));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1754u;
        goto label_1d1754;
    }
    ctx->pc = 0x1D174Cu;
    SET_GPR_U32(ctx, 31, 0x1D1754u);
    ctx->pc = 0x1D1750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D174Cu;
    // 0x1d1750: 0x26510134  addiu       $s1, $s2, 0x134 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1D174Cu, 0x1D1754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1754u;
label_1d1754:
    // 0x1d1754: 0x26500060  addiu       $s0, $s2, 0x60
    ctx->pc = 0x1d1754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_1d1758:
    // 0x1d1758: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d1758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d175c:
    // 0x1d175c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1d175cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1760:
    // 0x1d1760: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d1760u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1764:
    // 0x1d1764: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x1d1764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_1d1768:
    // 0x1d1768: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1d1768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1d176c:
    // 0x1d176c: 0x40f809  jalr        $v0
label_1d1770:
    if (ctx->pc == 0x1D1770u) {
        ctx->pc = 0x1D1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D176Cu;
        // 0x1d1770: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1774u;
        goto label_1d1774;
    }
    ctx->pc = 0x1D176Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1774u);
        ctx->pc = 0x1D1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D176Cu;
        // 0x1d1770: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D176Cu, 0x1D1774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1774u;
label_1d1774:
    // 0x1d1774: 0x26450130  addiu       $a1, $s2, 0x130
    ctx->pc = 0x1d1774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
label_1d1778:
    // 0x1d1778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d177c:
    // 0x1d177c: 0xc073472  jal         func_1CD1C8
label_1d1780:
    if (ctx->pc == 0x1D1780u) {
        ctx->pc = 0x1D1780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D177Cu;
        // 0x1d1780: 0x222280b  movn        $a1, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1784u;
        goto label_1d1784;
    }
    ctx->pc = 0x1D177Cu;
    SET_GPR_U32(ctx, 31, 0x1D1784u);
    ctx->pc = 0x1D1780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D177Cu;
    // 0x1d1780: 0x222280b  movn        $a1, $s1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x1D177Cu, 0x1D1784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1784u;
label_1d1784:
    // 0x1d1784: 0xc0734a2  jal         func_1CD288
label_1d1788:
    if (ctx->pc == 0x1D1788u) {
        ctx->pc = 0x1D1788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1784u;
        // 0x1d1788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D178Cu;
        goto label_1d178c;
    }
    ctx->pc = 0x1D1784u;
    SET_GPR_U32(ctx, 31, 0x1D178Cu);
    ctx->pc = 0x1D1788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1784u;
    // 0x1d1788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1D1784u, 0x1D178Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D178Cu;
label_1d178c:
    // 0x1d178c: 0x8e4205f8  lw          $v0, 0x5F8($s2)
    ctx->pc = 0x1d178cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1528)));
label_1d1790:
    // 0x1d1790: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1d1794:
    if (ctx->pc == 0x1D1794u) {
        ctx->pc = 0x1D1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1790u;
        // 0x1d1794: 0x26510250  addiu       $s1, $s2, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1798u;
        goto label_1d1798;
    }
    ctx->pc = 0x1D1790u;
    {
        const bool branch_taken_0x1d1790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1790u;
        // 0x1d1794: 0x26510250  addiu       $s1, $s2, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1790) {
            ctx->pc = 0x1D1820u;
            goto label_1d1820;
        }
    }
    ctx->pc = 0x1D1798u;
label_1d1798:
    // 0x1d1798: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x1d1798u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_1d179c:
    // 0x1d179c: 0x26500450  addiu       $s0, $s2, 0x450
    ctx->pc = 0x1d179cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1104));
label_1d17a0:
    // 0x1d17a0: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1d17a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d17a4:
    // 0x1d17a4: 0x0  nop
    ctx->pc = 0x1d17a4u;
    // NOP
label_1d17a8:
    // 0x1d17a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d17a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d17ac:
    // 0x1d17ac: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1d17acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1d17b0:
    // 0x1d17b0: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1d17b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1d17b4:
    // 0x1d17b4: 0xa0f809  jalr        $a1
label_1d17b8:
    if (ctx->pc == 0x1D17B8u) {
        ctx->pc = 0x1D17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17B4u;
        // 0x1d17b8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D17BCu;
        goto label_1d17bc;
    }
    ctx->pc = 0x1D17B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1D17BCu);
        ctx->pc = 0x1D17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17B4u;
        // 0x1d17b8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D17B4u, 0x1D17BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D17BCu;
label_1d17bc:
    // 0x1d17bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d17bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d17c0:
    // 0x1d17c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1d17c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1d17c4:
    // 0x1d17c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1d17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1d17c8:
    // 0x1d17c8: 0x40f809  jalr        $v0
label_1d17cc:
    if (ctx->pc == 0x1D17CCu) {
        ctx->pc = 0x1D17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17C8u;
        // 0x1d17cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D17D0u;
        goto label_1d17d0;
    }
    ctx->pc = 0x1D17C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D17D0u);
        ctx->pc = 0x1D17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17C8u;
        // 0x1d17cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D17C8u, 0x1D17D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D17D0u;
label_1d17d0:
    // 0x1d17d0: 0x8ec3d260  lw          $v1, -0x2DA0($s6)
    ctx->pc = 0x1d17d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294955616)));
label_1d17d4:
    // 0x1d17d4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_1d17d8:
    if (ctx->pc == 0x1D17D8u) {
        ctx->pc = 0x1D17D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17D4u;
        // 0x1d17d8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D17DCu;
        goto label_1d17dc;
    }
    ctx->pc = 0x1D17D4u;
    {
        const bool branch_taken_0x1d17d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D17D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17D4u;
        // 0x1d17d8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17d4) {
            ctx->pc = 0x1D17F0u;
            goto label_1d17f0;
        }
    }
    ctx->pc = 0x1D17DCu;
label_1d17dc:
    // 0x1d17dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d17dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d17e0:
    // 0x1d17e0: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1d17e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1d17e4:
    // 0x1d17e4: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1d17e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1d17e8:
    // 0x1d17e8: 0x60f809  jalr        $v1
label_1d17ec:
    if (ctx->pc == 0x1D17ECu) {
        ctx->pc = 0x1D17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17E8u;
        // 0x1d17ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D17F0u;
        goto label_1d17f0;
    }
    ctx->pc = 0x1D17E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D17F0u);
        ctx->pc = 0x1D17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17E8u;
        // 0x1d17ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D17E8u, 0x1D17F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D17F0u;
label_1d17f0:
    // 0x1d17f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d17f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d17f4:
    // 0x1d17f4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d17f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d17f8:
    // 0x1d17f8: 0x26730100  addiu       $s3, $s3, 0x100
    ctx->pc = 0x1d17f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_1d17fc:
    // 0x1d17fc: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1d17fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1d1800:
    // 0x1d1800: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1d1800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1d1804:
    // 0x1d1804: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1d1804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1d1808:
    // 0x1d1808: 0x40f809  jalr        $v0
label_1d180c:
    if (ctx->pc == 0x1D180Cu) {
        ctx->pc = 0x1D180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1808u;
        // 0x1d180c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1810u;
        goto label_1d1810;
    }
    ctx->pc = 0x1D1808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1810u);
        ctx->pc = 0x1D180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1808u;
        // 0x1d180c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1808u, 0x1D1810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1810u;
label_1d1810:
    // 0x1d1810: 0x8e4205f8  lw          $v0, 0x5F8($s2)
    ctx->pc = 0x1d1810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1528)));
label_1d1814:
    // 0x1d1814: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1d1814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d1818:
    // 0x1d1818: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1d181c:
    if (ctx->pc == 0x1D181Cu) {
        ctx->pc = 0x1D181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1818u;
        // 0x1d181c: 0x261000d0  addiu       $s0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1820u;
        goto label_1d1820;
    }
    ctx->pc = 0x1D1818u;
    {
        const bool branch_taken_0x1d1818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1818u;
        // 0x1d181c: 0x261000d0  addiu       $s0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1818) {
            ctx->pc = 0x1D17A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d17a8;
        }
    }
    ctx->pc = 0x1D1820u;
label_1d1820:
    // 0x1d1820: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1d1820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d1824:
    // 0x1d1824: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1d1824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d1828:
    // 0x1d1828: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1d1828u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d182c:
    // 0x1d182c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d182cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d1830:
    // 0x1d1830: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1d1830u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d1834:
    // 0x1d1834: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1d1834u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1838:
    // 0x1d1838: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1d1838u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d183c:
    // 0x1d183c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d183cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1840:
    // 0x1d1840: 0x3e00008  jr          $ra
label_1d1844:
    if (ctx->pc == 0x1D1844u) {
        ctx->pc = 0x1D1844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1840u;
        // 0x1d1844: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1848u;
        goto label_fallthrough_0x1d1840;
    }
    ctx->pc = 0x1D1840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1840u;
        // 0x1d1844: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d1840:
    ctx->pc = 0x1D1848u;
}
