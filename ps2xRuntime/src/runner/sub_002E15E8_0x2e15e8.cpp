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

// Function: sub_002E15E8
// Address: 0x2e15e8 - 0x2e1760
void sub_002E15E8_0x2e15e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E15E8_0x2e15e8");
#endif

    switch (ctx->pc) {
        case 0x2e15e8u: goto label_2e15e8;
        case 0x2e15ecu: goto label_2e15ec;
        case 0x2e15f0u: goto label_2e15f0;
        case 0x2e15f4u: goto label_2e15f4;
        case 0x2e15f8u: goto label_2e15f8;
        case 0x2e15fcu: goto label_2e15fc;
        case 0x2e1600u: goto label_2e1600;
        case 0x2e1604u: goto label_2e1604;
        case 0x2e1608u: goto label_2e1608;
        case 0x2e160cu: goto label_2e160c;
        case 0x2e1610u: goto label_2e1610;
        case 0x2e1614u: goto label_2e1614;
        case 0x2e1618u: goto label_2e1618;
        case 0x2e161cu: goto label_2e161c;
        case 0x2e1620u: goto label_2e1620;
        case 0x2e1624u: goto label_2e1624;
        case 0x2e1628u: goto label_2e1628;
        case 0x2e162cu: goto label_2e162c;
        case 0x2e1630u: goto label_2e1630;
        case 0x2e1634u: goto label_2e1634;
        case 0x2e1638u: goto label_2e1638;
        case 0x2e163cu: goto label_2e163c;
        case 0x2e1640u: goto label_2e1640;
        case 0x2e1644u: goto label_2e1644;
        case 0x2e1648u: goto label_2e1648;
        case 0x2e164cu: goto label_2e164c;
        case 0x2e1650u: goto label_2e1650;
        case 0x2e1654u: goto label_2e1654;
        case 0x2e1658u: goto label_2e1658;
        case 0x2e165cu: goto label_2e165c;
        case 0x2e1660u: goto label_2e1660;
        case 0x2e1664u: goto label_2e1664;
        case 0x2e1668u: goto label_2e1668;
        case 0x2e166cu: goto label_2e166c;
        case 0x2e1670u: goto label_2e1670;
        case 0x2e1674u: goto label_2e1674;
        case 0x2e1678u: goto label_2e1678;
        case 0x2e167cu: goto label_2e167c;
        case 0x2e1680u: goto label_2e1680;
        case 0x2e1684u: goto label_2e1684;
        case 0x2e1688u: goto label_2e1688;
        case 0x2e168cu: goto label_2e168c;
        case 0x2e1690u: goto label_2e1690;
        case 0x2e1694u: goto label_2e1694;
        case 0x2e1698u: goto label_2e1698;
        case 0x2e169cu: goto label_2e169c;
        case 0x2e16a0u: goto label_2e16a0;
        case 0x2e16a4u: goto label_2e16a4;
        case 0x2e16a8u: goto label_2e16a8;
        case 0x2e16acu: goto label_2e16ac;
        case 0x2e16b0u: goto label_2e16b0;
        case 0x2e16b4u: goto label_2e16b4;
        case 0x2e16b8u: goto label_2e16b8;
        case 0x2e16bcu: goto label_2e16bc;
        case 0x2e16c0u: goto label_2e16c0;
        case 0x2e16c4u: goto label_2e16c4;
        case 0x2e16c8u: goto label_2e16c8;
        case 0x2e16ccu: goto label_2e16cc;
        case 0x2e16d0u: goto label_2e16d0;
        case 0x2e16d4u: goto label_2e16d4;
        case 0x2e16d8u: goto label_2e16d8;
        case 0x2e16dcu: goto label_2e16dc;
        case 0x2e16e0u: goto label_2e16e0;
        case 0x2e16e4u: goto label_2e16e4;
        case 0x2e16e8u: goto label_2e16e8;
        case 0x2e16ecu: goto label_2e16ec;
        case 0x2e16f0u: goto label_2e16f0;
        case 0x2e16f4u: goto label_2e16f4;
        case 0x2e16f8u: goto label_2e16f8;
        case 0x2e16fcu: goto label_2e16fc;
        case 0x2e1700u: goto label_2e1700;
        case 0x2e1704u: goto label_2e1704;
        case 0x2e1708u: goto label_2e1708;
        case 0x2e170cu: goto label_2e170c;
        case 0x2e1710u: goto label_2e1710;
        case 0x2e1714u: goto label_2e1714;
        case 0x2e1718u: goto label_2e1718;
        case 0x2e171cu: goto label_2e171c;
        case 0x2e1720u: goto label_2e1720;
        case 0x2e1724u: goto label_2e1724;
        case 0x2e1728u: goto label_2e1728;
        case 0x2e172cu: goto label_2e172c;
        case 0x2e1730u: goto label_2e1730;
        case 0x2e1734u: goto label_2e1734;
        case 0x2e1738u: goto label_2e1738;
        case 0x2e173cu: goto label_2e173c;
        case 0x2e1740u: goto label_2e1740;
        case 0x2e1744u: goto label_2e1744;
        case 0x2e1748u: goto label_2e1748;
        case 0x2e174cu: goto label_2e174c;
        case 0x2e1750u: goto label_2e1750;
        case 0x2e1754u: goto label_2e1754;
        case 0x2e1758u: goto label_2e1758;
        case 0x2e175cu: goto label_2e175c;
        default: break;
    }

    ctx->pc = 0x2e15e8u;

label_2e15e8:
    // 0x2e15e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e15e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2e15ec:
    // 0x2e15ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e15ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e15f0:
    // 0x2e15f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e15f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2e15f4:
    // 0x2e15f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e15f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e15f8:
    // 0x2e15f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e15f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2e15fc:
    // 0x2e15fc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2e15fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2e1600:
    // 0x2e1600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e1604:
    // 0x2e1604: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2e1604u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2e1608:
    // 0x2e1608: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2e1608u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2e160c:
    // 0x2e160c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2e160cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e1610:
    // 0x2e1610: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2e1610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2e1614:
    // 0x2e1614: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2e1614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2e1618:
    // 0x2e1618: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2e161c:
    if (ctx->pc == 0x2E161Cu) {
        ctx->pc = 0x2E161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1618u;
        // 0x2e161c: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1620u;
        goto label_2e1620;
    }
    ctx->pc = 0x2E1618u;
    {
        const bool branch_taken_0x2e1618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1618) {
            ctx->pc = 0x2E161Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1618u;
            // 0x2e161c: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E162Cu;
            goto label_2e162c;
        }
    }
    ctx->pc = 0x2E1620u;
label_2e1620:
    // 0x2e1620: 0xc0b84f0  jal         func_2E13C0
label_2e1624:
    if (ctx->pc == 0x2E1624u) {
        ctx->pc = 0x2E1628u;
        goto label_2e1628;
    }
    ctx->pc = 0x2E1620u;
    SET_GPR_U32(ctx, 31, 0x2E1628u);
    ctx->pc = 0x2E13C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E13C0u, 0x2E1620u, 0x2E1628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1628u;
label_2e1628:
    // 0x2e1628: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x2e1628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2e162c:
    // 0x2e162c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_2e1630:
    if (ctx->pc == 0x2E1630u) {
        ctx->pc = 0x2E1634u;
        goto label_2e1634;
    }
    ctx->pc = 0x2E162Cu;
    {
        const bool branch_taken_0x2e162c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e162c) {
            ctx->pc = 0x2E1678u;
            goto label_2e1678;
        }
    }
    ctx->pc = 0x2E1634u;
label_2e1634:
    // 0x2e1634: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2e1634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2e1638:
    // 0x2e1638: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2e1638u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2e163c:
    // 0x2e163c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2e163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2e1640:
    // 0x2e1640: 0x40f809  jalr        $v0
label_2e1644:
    if (ctx->pc == 0x2E1644u) {
        ctx->pc = 0x2E1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1640u;
        // 0x2e1644: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1648u;
        goto label_2e1648;
    }
    ctx->pc = 0x2E1640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E1648u);
        ctx->pc = 0x2E1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1640u;
        // 0x2e1644: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1640u, 0x2E1648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1648u;
label_2e1648:
    // 0x2e1648: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e1648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e164c:
    // 0x2e164c: 0x1443003b  bne         $v0, $v1, . + 4 + (0x3B << 2)
label_2e1650:
    if (ctx->pc == 0x2E1650u) {
        ctx->pc = 0x2E1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E164Cu;
        // 0x2e1650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1654u;
        goto label_2e1654;
    }
    ctx->pc = 0x2E164Cu;
    {
        const bool branch_taken_0x2e164c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E164Cu;
        // 0x2e1650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e164c) {
            ctx->pc = 0x2E173Cu;
            goto label_2e173c;
        }
    }
    ctx->pc = 0x2E1654u;
label_2e1654:
    // 0x2e1654: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x2e1654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2e1658:
    // 0x2e1658: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2e1658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2e165c:
    // 0x2e165c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x2e165cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_2e1660:
    // 0x2e1660: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2e1660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2e1664:
    // 0x2e1664: 0x60f809  jalr        $v1
label_2e1668:
    if (ctx->pc == 0x2E1668u) {
        ctx->pc = 0x2E1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1664u;
        // 0x2e1668: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E166Cu;
        goto label_2e166c;
    }
    ctx->pc = 0x2E1664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E166Cu);
        ctx->pc = 0x2E1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1664u;
        // 0x2e1668: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1664u, 0x2E166Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E166Cu;
label_2e166c:
    // 0x2e166c: 0xc0a4e6c  jal         func_2939B0
label_2e1670:
    if (ctx->pc == 0x2E1670u) {
        ctx->pc = 0x2E1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E166Cu;
        // 0x2e1670: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1674u;
        goto label_2e1674;
    }
    ctx->pc = 0x2E166Cu;
    SET_GPR_U32(ctx, 31, 0x2E1674u);
    ctx->pc = 0x2E1670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E166Cu;
    // 0x2e1670: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2939B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2939B0u, 0x2E166Cu, 0x2E1674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1674u;
label_2e1674:
    // 0x2e1674: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x2e1674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_2e1678:
    // 0x2e1678: 0xc0b81f4  jal         func_2E07D0
label_2e167c:
    if (ctx->pc == 0x2E167Cu) {
        ctx->pc = 0x2E167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1678u;
        // 0x2e167c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1680u;
        goto label_2e1680;
    }
    ctx->pc = 0x2E1678u;
    SET_GPR_U32(ctx, 31, 0x2E1680u);
    ctx->pc = 0x2E167Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1678u;
    // 0x2e167c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E07D0u, 0x2E1678u, 0x2E1680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1680u;
label_2e1680:
    // 0x2e1680: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_2e1684:
    if (ctx->pc == 0x2E1684u) {
        ctx->pc = 0x2E1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1680u;
        // 0x2e1684: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1688u;
        goto label_2e1688;
    }
    ctx->pc = 0x2E1680u;
    {
        const bool branch_taken_0x2e1680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1680u;
        // 0x2e1684: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1680) {
            ctx->pc = 0x2E173Cu;
            goto label_2e173c;
        }
    }
    ctx->pc = 0x2E1688u;
label_2e1688:
    // 0x2e1688: 0xc0a4e54  jal         func_293950
label_2e168c:
    if (ctx->pc == 0x2E168Cu) {
        ctx->pc = 0x2E1690u;
        goto label_2e1690;
    }
    ctx->pc = 0x2E1688u;
    SET_GPR_U32(ctx, 31, 0x2E1690u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E1688u, 0x2E1690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1690u;
label_2e1690:
    // 0x2e1690: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e1690u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e1694:
    // 0x2e1694: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
label_2e1698:
    if (ctx->pc == 0x2E1698u) {
        ctx->pc = 0x2E1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1694u;
        // 0x2e1698: 0xae530014  sw          $s3, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E169Cu;
        goto label_2e169c;
    }
    ctx->pc = 0x2E1694u;
    {
        const bool branch_taken_0x2e1694 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1694u;
        // 0x2e1698: 0xae530014  sw          $s3, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1694) {
            ctx->pc = 0x2E1700u;
            goto label_2e1700;
        }
    }
    ctx->pc = 0x2E169Cu;
label_2e169c:
    // 0x2e169c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2e169cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2e16a0:
    // 0x2e16a0: 0xc0b8254  jal         func_2E0950
label_2e16a4:
    if (ctx->pc == 0x2E16A4u) {
        ctx->pc = 0x2E16A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16A0u;
        // 0x2e16a4: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E16A8u;
        goto label_2e16a8;
    }
    ctx->pc = 0x2E16A0u;
    SET_GPR_U32(ctx, 31, 0x2E16A8u);
    ctx->pc = 0x2E16A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E16A0u;
    // 0x2e16a4: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0950u, 0x2E16A0u, 0x2E16A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E16A8u;
label_2e16a8:
    // 0x2e16a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e16a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e16ac:
    // 0x2e16ac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e16acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e16b0:
    // 0x2e16b0: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x2e16b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e16b4:
    // 0x2e16b4: 0xa0f809  jalr        $a1
label_2e16b8:
    if (ctx->pc == 0x2E16B8u) {
        ctx->pc = 0x2E16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16B4u;
        // 0x2e16b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E16BCu;
        goto label_2e16bc;
    }
    ctx->pc = 0x2E16B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2E16BCu);
        ctx->pc = 0x2E16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16B4u;
        // 0x2e16b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E16B4u, 0x2E16BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E16BCu;
label_2e16bc:
    // 0x2e16bc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2e16bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2e16c0:
    // 0x2e16c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e16c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e16c4:
    // 0x2e16c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2e16c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e16c8:
    // 0x2e16c8: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x2e16c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2e16cc:
    // 0x2e16cc: 0xc0b8246  jal         func_2E0918
label_2e16d0:
    if (ctx->pc == 0x2E16D0u) {
        ctx->pc = 0x2E16D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16CCu;
        // 0x2e16d0: 0xc4740020  lwc1        $f20, 0x20($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E16D4u;
        goto label_2e16d4;
    }
    ctx->pc = 0x2E16CCu;
    SET_GPR_U32(ctx, 31, 0x2E16D4u);
    ctx->pc = 0x2E16D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E16CCu;
    // 0x2e16d0: 0xc4740020  lwc1        $f20, 0x20($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0918u, 0x2E16CCu, 0x2E16D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E16D4u;
label_2e16d4:
    // 0x2e16d4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2e16d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2e16d8:
    // 0x2e16d8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e16d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e16dc:
    // 0x2e16dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e16dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e16e0:
    // 0x2e16e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e16e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e16e4:
    // 0x2e16e4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e16e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e16e8:
    // 0x2e16e8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2e16e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_2e16ec:
    // 0x2e16ec: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2e16ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e16f0:
    // 0x2e16f0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2e16f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2e16f4:
    // 0x2e16f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e16f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e16f8:
    // 0x2e16f8: 0xc0b68ec  jal         func_2DA3B0
label_2e16fc:
    if (ctx->pc == 0x2E16FCu) {
        ctx->pc = 0x2E16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16F8u;
        // 0x2e16fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1700u;
        goto label_2e1700;
    }
    ctx->pc = 0x2E16F8u;
    SET_GPR_U32(ctx, 31, 0x2E1700u);
    ctx->pc = 0x2E16FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E16F8u;
    // 0x2e16fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA3B0u, 0x2E16F8u, 0x2E1700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1700u;
label_2e1700:
    // 0x2e1700: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x2e1700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2e1704:
    // 0x2e1704: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2e1704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2e1708:
    // 0x2e1708: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2e1708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2e170c:
    // 0x2e170c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2e170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2e1710:
    // 0x2e1710: 0x60f809  jalr        $v1
label_2e1714:
    if (ctx->pc == 0x2E1714u) {
        ctx->pc = 0x2E1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1710u;
        // 0x2e1714: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1718u;
        goto label_2e1718;
    }
    ctx->pc = 0x2E1710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E1718u);
        ctx->pc = 0x2E1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1710u;
        // 0x2e1714: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1710u, 0x2E1718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1718u;
label_2e1718:
    // 0x2e1718: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x2e1718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2e171c:
    // 0x2e171c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2e171cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2e1720:
    // 0x2e1720: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2e1720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2e1724:
    // 0x2e1724: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2e1724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2e1728:
    // 0x2e1728: 0x40f809  jalr        $v0
label_2e172c:
    if (ctx->pc == 0x2E172Cu) {
        ctx->pc = 0x2E172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1728u;
        // 0x2e172c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1730u;
        goto label_2e1730;
    }
    ctx->pc = 0x2E1728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E1730u);
        ctx->pc = 0x2E172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1728u;
        // 0x2e172c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1728u, 0x2E1730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1730u;
label_2e1730:
    // 0x2e1730: 0xc0b84f0  jal         func_2E13C0
label_2e1734:
    if (ctx->pc == 0x2E1734u) {
        ctx->pc = 0x2E1734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1730u;
        // 0x2e1734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1738u;
        goto label_2e1738;
    }
    ctx->pc = 0x2E1730u;
    SET_GPR_U32(ctx, 31, 0x2E1738u);
    ctx->pc = 0x2E1734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1730u;
    // 0x2e1734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E13C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E13C0u, 0x2E1730u, 0x2E1738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1738u;
label_2e1738:
    // 0x2e1738: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e173c:
    // 0x2e173c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e173cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e1740:
    // 0x2e1740: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e1740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e1744:
    // 0x2e1744: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e1744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e1748:
    // 0x2e1748: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2e1748u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e174c:
    // 0x2e174c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e174cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1750:
    // 0x2e1750: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2e1750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2e1754:
    // 0x2e1754: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2e1754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e1758:
    // 0x2e1758: 0x3e00008  jr          $ra
label_2e175c:
    if (ctx->pc == 0x2E175Cu) {
        ctx->pc = 0x2E175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1758u;
        // 0x2e175c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1760u;
        goto label_fallthrough_0x2e1758;
    }
    ctx->pc = 0x2E1758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1758u;
        // 0x2e175c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e1758:
    ctx->pc = 0x2E1760u;
}
