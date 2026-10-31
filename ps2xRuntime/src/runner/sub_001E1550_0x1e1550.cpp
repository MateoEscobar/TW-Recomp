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

// Function: sub_001E1550
// Address: 0x1e1550 - 0x1e16f0
void sub_001E1550_0x1e1550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1550_0x1e1550");
#endif

    switch (ctx->pc) {
        case 0x1e1550u: goto label_1e1550;
        case 0x1e1554u: goto label_1e1554;
        case 0x1e1558u: goto label_1e1558;
        case 0x1e155cu: goto label_1e155c;
        case 0x1e1560u: goto label_1e1560;
        case 0x1e1564u: goto label_1e1564;
        case 0x1e1568u: goto label_1e1568;
        case 0x1e156cu: goto label_1e156c;
        case 0x1e1570u: goto label_1e1570;
        case 0x1e1574u: goto label_1e1574;
        case 0x1e1578u: goto label_1e1578;
        case 0x1e157cu: goto label_1e157c;
        case 0x1e1580u: goto label_1e1580;
        case 0x1e1584u: goto label_1e1584;
        case 0x1e1588u: goto label_1e1588;
        case 0x1e158cu: goto label_1e158c;
        case 0x1e1590u: goto label_1e1590;
        case 0x1e1594u: goto label_1e1594;
        case 0x1e1598u: goto label_1e1598;
        case 0x1e159cu: goto label_1e159c;
        case 0x1e15a0u: goto label_1e15a0;
        case 0x1e15a4u: goto label_1e15a4;
        case 0x1e15a8u: goto label_1e15a8;
        case 0x1e15acu: goto label_1e15ac;
        case 0x1e15b0u: goto label_1e15b0;
        case 0x1e15b4u: goto label_1e15b4;
        case 0x1e15b8u: goto label_1e15b8;
        case 0x1e15bcu: goto label_1e15bc;
        case 0x1e15c0u: goto label_1e15c0;
        case 0x1e15c4u: goto label_1e15c4;
        case 0x1e15c8u: goto label_1e15c8;
        case 0x1e15ccu: goto label_1e15cc;
        case 0x1e15d0u: goto label_1e15d0;
        case 0x1e15d4u: goto label_1e15d4;
        case 0x1e15d8u: goto label_1e15d8;
        case 0x1e15dcu: goto label_1e15dc;
        case 0x1e15e0u: goto label_1e15e0;
        case 0x1e15e4u: goto label_1e15e4;
        case 0x1e15e8u: goto label_1e15e8;
        case 0x1e15ecu: goto label_1e15ec;
        case 0x1e15f0u: goto label_1e15f0;
        case 0x1e15f4u: goto label_1e15f4;
        case 0x1e15f8u: goto label_1e15f8;
        case 0x1e15fcu: goto label_1e15fc;
        case 0x1e1600u: goto label_1e1600;
        case 0x1e1604u: goto label_1e1604;
        case 0x1e1608u: goto label_1e1608;
        case 0x1e160cu: goto label_1e160c;
        case 0x1e1610u: goto label_1e1610;
        case 0x1e1614u: goto label_1e1614;
        case 0x1e1618u: goto label_1e1618;
        case 0x1e161cu: goto label_1e161c;
        case 0x1e1620u: goto label_1e1620;
        case 0x1e1624u: goto label_1e1624;
        case 0x1e1628u: goto label_1e1628;
        case 0x1e162cu: goto label_1e162c;
        case 0x1e1630u: goto label_1e1630;
        case 0x1e1634u: goto label_1e1634;
        case 0x1e1638u: goto label_1e1638;
        case 0x1e163cu: goto label_1e163c;
        case 0x1e1640u: goto label_1e1640;
        case 0x1e1644u: goto label_1e1644;
        case 0x1e1648u: goto label_1e1648;
        case 0x1e164cu: goto label_1e164c;
        case 0x1e1650u: goto label_1e1650;
        case 0x1e1654u: goto label_1e1654;
        case 0x1e1658u: goto label_1e1658;
        case 0x1e165cu: goto label_1e165c;
        case 0x1e1660u: goto label_1e1660;
        case 0x1e1664u: goto label_1e1664;
        case 0x1e1668u: goto label_1e1668;
        case 0x1e166cu: goto label_1e166c;
        case 0x1e1670u: goto label_1e1670;
        case 0x1e1674u: goto label_1e1674;
        case 0x1e1678u: goto label_1e1678;
        case 0x1e167cu: goto label_1e167c;
        case 0x1e1680u: goto label_1e1680;
        case 0x1e1684u: goto label_1e1684;
        case 0x1e1688u: goto label_1e1688;
        case 0x1e168cu: goto label_1e168c;
        case 0x1e1690u: goto label_1e1690;
        case 0x1e1694u: goto label_1e1694;
        case 0x1e1698u: goto label_1e1698;
        case 0x1e169cu: goto label_1e169c;
        case 0x1e16a0u: goto label_1e16a0;
        case 0x1e16a4u: goto label_1e16a4;
        case 0x1e16a8u: goto label_1e16a8;
        case 0x1e16acu: goto label_1e16ac;
        case 0x1e16b0u: goto label_1e16b0;
        case 0x1e16b4u: goto label_1e16b4;
        case 0x1e16b8u: goto label_1e16b8;
        case 0x1e16bcu: goto label_1e16bc;
        case 0x1e16c0u: goto label_1e16c0;
        case 0x1e16c4u: goto label_1e16c4;
        case 0x1e16c8u: goto label_1e16c8;
        case 0x1e16ccu: goto label_1e16cc;
        case 0x1e16d0u: goto label_1e16d0;
        case 0x1e16d4u: goto label_1e16d4;
        case 0x1e16d8u: goto label_1e16d8;
        case 0x1e16dcu: goto label_1e16dc;
        case 0x1e16e0u: goto label_1e16e0;
        case 0x1e16e4u: goto label_1e16e4;
        case 0x1e16e8u: goto label_1e16e8;
        case 0x1e16ecu: goto label_1e16ec;
        default: break;
    }

    ctx->pc = 0x1e1550u;

label_1e1550:
    // 0x1e1550: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e1550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1e1554:
    // 0x1e1554: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e1554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e1558:
    // 0x1e1558: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1e1558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1e155c:
    // 0x1e155c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e155cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1560:
    // 0x1e1560: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1e1560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1e1564:
    // 0x1e1564: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1e1564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1e1568:
    // 0x1e1568: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e1568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1e156c:
    // 0x1e156c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1e156cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1e1570:
    // 0x1e1570: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1e1570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1e1574:
    // 0x1e1574: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1e1574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_1e1578:
    // 0x1e1578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e157c:
    // 0x1e157c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1e157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1e1580:
    // 0x1e1580: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_1e1584:
    if (ctx->pc == 0x1E1584u) {
        ctx->pc = 0x1E1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1580u;
        // 0x1e1584: 0x26900084  addiu       $s0, $s4, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1588u;
        goto label_1e1588;
    }
    ctx->pc = 0x1E1580u;
    {
        const bool branch_taken_0x1e1580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1580u;
        // 0x1e1584: 0x26900084  addiu       $s0, $s4, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1580) {
            ctx->pc = 0x1E16C0u;
            goto label_1e16c0;
        }
    }
    ctx->pc = 0x1E1588u;
label_1e1588:
    // 0x1e1588: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x1e1588u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_1e158c:
    // 0x1e158c: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x1e158cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_1e1590:
    // 0x1e1590: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e1590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e1594:
    // 0x1e1594: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e1598:
    if (ctx->pc == 0x1E1598u) {
        ctx->pc = 0x1E1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1594u;
        // 0x1e1598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E159Cu;
        goto label_1e159c;
    }
    ctx->pc = 0x1E1594u;
    {
        const bool branch_taken_0x1e1594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1594u;
        // 0x1e1598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1594) {
            ctx->pc = 0x1E15C4u;
            goto label_1e15c4;
        }
    }
    ctx->pc = 0x1E159Cu;
label_1e159c:
    // 0x1e159c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e15a0:
    // 0x1e15a0: 0xc13a1ce  jal         func_4E8738
label_1e15a4:
    if (ctx->pc == 0x1E15A4u) {
        ctx->pc = 0x1E15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15A0u;
        // 0x1e15a4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15A8u;
        goto label_1e15a8;
    }
    ctx->pc = 0x1E15A0u;
    SET_GPR_U32(ctx, 31, 0x1E15A8u);
    ctx->pc = 0x1E15A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E15A0u;
    // 0x1e15a4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8738u, 0x1E15A0u, 0x1E15A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15A8u;
label_1e15a8:
    // 0x1e15a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e15ac:
    // 0x1e15ac: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1e15acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1e15b0:
    // 0x1e15b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e15b4:
    // 0x1e15b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1e15b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1e15b8:
    // 0x1e15b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e15b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e15bc:
    // 0x1e15bc: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1e15bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_1e15c0:
    // 0x1e15c0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e15c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1e15c4:
    // 0x1e15c4: 0x26820094  addiu       $v0, $s4, 0x94
    ctx->pc = 0x1e15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 148));
label_1e15c8:
    // 0x1e15c8: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x1e15c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e15cc:
    // 0x1e15cc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1e15ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1e15d0:
    // 0x1e15d0: 0x12630031  beq         $s3, $v1, . + 4 + (0x31 << 2)
label_1e15d4:
    if (ctx->pc == 0x1E15D4u) {
        ctx->pc = 0x1E15D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15D0u;
        // 0x1e15d4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15D8u;
        goto label_1e15d8;
    }
    ctx->pc = 0x1E15D0u;
    {
        const bool branch_taken_0x1e15d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E15D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15D0u;
        // 0x1e15d4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15d0) {
            ctx->pc = 0x1E1698u;
            goto label_1e1698;
        }
    }
    ctx->pc = 0x1E15D8u;
label_1e15d8:
    // 0x1e15d8: 0x3c170055  lui         $s7, 0x55
    ctx->pc = 0x1e15d8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)85 << 16));
label_1e15dc:
    // 0x1e15dc: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x1e15dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e15e0:
    // 0x1e15e0: 0x5240002a  beql        $s2, $zero, . + 4 + (0x2A << 2)
label_1e15e4:
    if (ctx->pc == 0x1E15E4u) {
        ctx->pc = 0x1E15E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15E0u;
        // 0x1e15e4: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15E8u;
        goto label_1e15e8;
    }
    ctx->pc = 0x1E15E0u;
    {
        const bool branch_taken_0x1e15e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e15e0) {
            ctx->pc = 0x1E15E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E15E0u;
            // 0x1e15e4: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E168Cu;
            goto label_1e168c;
        }
    }
    ctx->pc = 0x1E15E8u;
label_1e15e8:
    // 0x1e15e8: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x1e15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_1e15ec:
    // 0x1e15ec: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1e15f0:
    if (ctx->pc == 0x1E15F0u) {
        ctx->pc = 0x1E15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15ECu;
        // 0x1e15f0: 0x3c160055  lui         $s6, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15F4u;
        goto label_1e15f4;
    }
    ctx->pc = 0x1E15ECu;
    {
        const bool branch_taken_0x1e15ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15ECu;
        // 0x1e15f0: 0x3c160055  lui         $s6, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15ec) {
            ctx->pc = 0x1E1678u;
            goto label_1e1678;
        }
    }
    ctx->pc = 0x1E15F4u;
label_1e15f4:
    // 0x1e15f4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e15f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e15f8:
    // 0x1e15f8: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x1e15f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1e15fc:
    // 0x1e15fc: 0x8c6200fc  lw          $v0, 0xFC($v1)
    ctx->pc = 0x1e15fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1e1600:
    // 0x1e1600: 0x40f809  jalr        $v0
label_1e1604:
    if (ctx->pc == 0x1E1604u) {
        ctx->pc = 0x1E1604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1600u;
        // 0x1e1604: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1608u;
        goto label_1e1608;
    }
    ctx->pc = 0x1E1600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1608u);
        ctx->pc = 0x1E1604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1600u;
        // 0x1e1604: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1600u, 0x1E1608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1608u;
label_1e1608:
    // 0x1e1608: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e1608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e160c:
    // 0x1e160c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e160cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1610:
    // 0x1e1610: 0x84640110  lh          $a0, 0x110($v1)
    ctx->pc = 0x1e1610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_1e1614:
    // 0x1e1614: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x1e1614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_1e1618:
    // 0x1e1618: 0x40f809  jalr        $v0
label_1e161c:
    if (ctx->pc == 0x1E161Cu) {
        ctx->pc = 0x1E161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1618u;
        // 0x1e161c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1620u;
        goto label_1e1620;
    }
    ctx->pc = 0x1E1618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1620u);
        ctx->pc = 0x1E161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1618u;
        // 0x1e161c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1618u, 0x1E1620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1620u;
label_1e1620:
    // 0x1e1620: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_1e1624:
    if (ctx->pc == 0x1E1624u) {
        ctx->pc = 0x1E1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1620u;
        // 0x1e1624: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1628u;
        goto label_1e1628;
    }
    ctx->pc = 0x1E1620u;
    {
        const bool branch_taken_0x1e1620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1620u;
        // 0x1e1624: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1620) {
            ctx->pc = 0x1E164Cu;
            goto label_1e164c;
        }
    }
    ctx->pc = 0x1E1628u;
label_1e1628:
    // 0x1e1628: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e162c:
    // 0x1e162c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1e162cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1e1630:
    // 0x1e1630: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1e1630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1e1634:
    // 0x1e1634: 0x60f809  jalr        $v1
label_1e1638:
    if (ctx->pc == 0x1E1638u) {
        ctx->pc = 0x1E1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1634u;
        // 0x1e1638: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E163Cu;
        goto label_1e163c;
    }
    ctx->pc = 0x1E1634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E163Cu);
        ctx->pc = 0x1E1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1634u;
        // 0x1e1638: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1634u, 0x1E163Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E163Cu;
label_1e163c:
    // 0x1e163c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e163cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1640:
    // 0x1e1640: 0x26e56628  addiu       $a1, $s7, 0x6628
    ctx->pc = 0x1e1640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 26152));
label_1e1644:
    // 0x1e1644: 0xc1391da  jal         func_4E4768
label_1e1648:
    if (ctx->pc == 0x1E1648u) {
        ctx->pc = 0x1E1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1644u;
        // 0x1e1648: 0x24060120  addiu       $a2, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E164Cu;
        goto label_1e164c;
    }
    ctx->pc = 0x1E1644u;
    SET_GPR_U32(ctx, 31, 0x1E164Cu);
    ctx->pc = 0x1E1648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1644u;
    // 0x1e1648: 0x24060120  addiu       $a2, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4768u, 0x1E1644u, 0x1E164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E164Cu;
label_1e164c:
    // 0x1e164c: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_1e1650:
    if (ctx->pc == 0x1E1650u) {
        ctx->pc = 0x1E1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E164Cu;
        // 0x1e1650: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1654u;
        goto label_1e1654;
    }
    ctx->pc = 0x1E164Cu;
    {
        const bool branch_taken_0x1e164c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e164c) {
            ctx->pc = 0x1E1650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E164Cu;
            // 0x1e1650: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E167Cu;
            goto label_1e167c;
        }
    }
    ctx->pc = 0x1E1654u;
label_1e1654:
    // 0x1e1654: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e1654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e1658:
    // 0x1e1658: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1e1658u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1e165c:
    // 0x1e165c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1e165cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1e1660:
    // 0x1e1660: 0x60f809  jalr        $v1
label_1e1664:
    if (ctx->pc == 0x1E1664u) {
        ctx->pc = 0x1E1664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1660u;
        // 0x1e1664: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1668u;
        goto label_1e1668;
    }
    ctx->pc = 0x1E1660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E1668u);
        ctx->pc = 0x1E1664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1660u;
        // 0x1e1664: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1660u, 0x1E1668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1668u;
label_1e1668:
    // 0x1e1668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e166c:
    // 0x1e166c: 0x26c56628  addiu       $a1, $s6, 0x6628
    ctx->pc = 0x1e166cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 26152));
label_1e1670:
    // 0x1e1670: 0xc1391da  jal         func_4E4768
label_1e1674:
    if (ctx->pc == 0x1E1674u) {
        ctx->pc = 0x1E1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1670u;
        // 0x1e1674: 0x24060125  addiu       $a2, $zero, 0x125 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1678u;
        goto label_1e1678;
    }
    ctx->pc = 0x1E1670u;
    SET_GPR_U32(ctx, 31, 0x1E1678u);
    ctx->pc = 0x1E1674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1670u;
    // 0x1e1674: 0x24060125  addiu       $a2, $zero, 0x125 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4768u, 0x1E1670u, 0x1E1678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1678u;
label_1e1678:
    // 0x1e1678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e1678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e167c:
    // 0x1e167c: 0x26c56628  addiu       $a1, $s6, 0x6628
    ctx->pc = 0x1e167cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 26152));
label_1e1680:
    // 0x1e1680: 0xc13a1f4  jal         func_4E87D0
label_1e1684:
    if (ctx->pc == 0x1E1684u) {
        ctx->pc = 0x1E1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1680u;
        // 0x1e1684: 0x24060129  addiu       $a2, $zero, 0x129 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 297));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1688u;
        goto label_1e1688;
    }
    ctx->pc = 0x1E1680u;
    SET_GPR_U32(ctx, 31, 0x1E1688u);
    ctx->pc = 0x1E1684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1680u;
    // 0x1e1684: 0x24060129  addiu       $a2, $zero, 0x129 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 297));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E87D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E87D0u, 0x1E1680u, 0x1E1688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1688u;
label_1e1688:
    // 0x1e1688: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1e1688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1e168c:
    // 0x1e168c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1e168cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1e1690:
    // 0x1e1690: 0x5662ffd3  bnel        $s3, $v0, . + 4 + (-0x2D << 2)
label_1e1694:
    if (ctx->pc == 0x1E1694u) {
        ctx->pc = 0x1E1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1690u;
        // 0x1e1694: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1698u;
        goto label_1e1698;
    }
    ctx->pc = 0x1E1690u;
    {
        const bool branch_taken_0x1e1690 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1690) {
            ctx->pc = 0x1E1694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1690u;
            // 0x1e1694: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E15E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e15e0;
        }
    }
    ctx->pc = 0x1E1698u;
label_1e1698:
    // 0x1e1698: 0x8eb10004  lw          $s1, 0x4($s5)
    ctx->pc = 0x1e1698u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1e169c:
    // 0x1e169c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e169cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e16a0:
    // 0x1e16a0: 0x8eb00008  lw          $s0, 0x8($s5)
    ctx->pc = 0x1e16a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1e16a4:
    // 0x1e16a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e16a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e16a8:
    // 0x1e16a8: 0xc10c1bb  jal         func_4306EC
label_1e16ac:
    if (ctx->pc == 0x1E16ACu) {
        ctx->pc = 0x1E16ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E16A8u;
        // 0x1e16ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E16B0u;
        goto label_1e16b0;
    }
    ctx->pc = 0x1E16A8u;
    SET_GPR_U32(ctx, 31, 0x1E16B0u);
    ctx->pc = 0x1E16ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E16A8u;
    // 0x1e16ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x1E16A8u, 0x1E16B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E16B0u;
label_1e16b0:
    // 0x1e16b0: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1e16b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1e16b4:
    // 0x1e16b4: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x1e16b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1e16b8:
    // 0x1e16b8: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1e16b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1e16bc:
    // 0x1e16bc: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x1e16bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
label_1e16c0:
    // 0x1e16c0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1e16c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e16c4:
    // 0x1e16c4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1e16c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e16c8:
    // 0x1e16c8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1e16c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e16cc:
    // 0x1e16cc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e16ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e16d0:
    // 0x1e16d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e16d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e16d4:
    // 0x1e16d4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1e16d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e16d8:
    // 0x1e16d8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1e16d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e16dc:
    // 0x1e16dc: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1e16dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e16e0:
    // 0x1e16e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e16e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e16e4:
    // 0x1e16e4: 0x3e00008  jr          $ra
label_1e16e8:
    if (ctx->pc == 0x1E16E8u) {
        ctx->pc = 0x1E16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E16E4u;
        // 0x1e16e8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E16ECu;
        goto label_1e16ec;
    }
    ctx->pc = 0x1E16E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E16E4u;
        // 0x1e16e8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E16E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E16ECu;
label_1e16ec:
    // 0x1e16ec: 0x0  nop
    ctx->pc = 0x1e16ecu;
    // NOP
    ctx->pc = 0x1e16f0u;
}
