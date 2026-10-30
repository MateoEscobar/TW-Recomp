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

// Function: sub_004B15B8
// Address: 0x4b15b8 - 0x4b1680
void sub_004B15B8_0x4b15b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B15B8_0x4b15b8");
#endif

    switch (ctx->pc) {
        case 0x4b15b8u: goto label_4b15b8;
        case 0x4b15bcu: goto label_4b15bc;
        case 0x4b15c0u: goto label_4b15c0;
        case 0x4b15c4u: goto label_4b15c4;
        case 0x4b15c8u: goto label_4b15c8;
        case 0x4b15ccu: goto label_4b15cc;
        case 0x4b15d0u: goto label_4b15d0;
        case 0x4b15d4u: goto label_4b15d4;
        case 0x4b15d8u: goto label_4b15d8;
        case 0x4b15dcu: goto label_4b15dc;
        case 0x4b15e0u: goto label_4b15e0;
        case 0x4b15e4u: goto label_4b15e4;
        case 0x4b15e8u: goto label_4b15e8;
        case 0x4b15ecu: goto label_4b15ec;
        case 0x4b15f0u: goto label_4b15f0;
        case 0x4b15f4u: goto label_4b15f4;
        case 0x4b15f8u: goto label_4b15f8;
        case 0x4b15fcu: goto label_4b15fc;
        case 0x4b1600u: goto label_4b1600;
        case 0x4b1604u: goto label_4b1604;
        case 0x4b1608u: goto label_4b1608;
        case 0x4b160cu: goto label_4b160c;
        case 0x4b1610u: goto label_4b1610;
        case 0x4b1614u: goto label_4b1614;
        case 0x4b1618u: goto label_4b1618;
        case 0x4b161cu: goto label_4b161c;
        case 0x4b1620u: goto label_4b1620;
        case 0x4b1624u: goto label_4b1624;
        case 0x4b1628u: goto label_4b1628;
        case 0x4b162cu: goto label_4b162c;
        case 0x4b1630u: goto label_4b1630;
        case 0x4b1634u: goto label_4b1634;
        case 0x4b1638u: goto label_4b1638;
        case 0x4b163cu: goto label_4b163c;
        case 0x4b1640u: goto label_4b1640;
        case 0x4b1644u: goto label_4b1644;
        case 0x4b1648u: goto label_4b1648;
        case 0x4b164cu: goto label_4b164c;
        case 0x4b1650u: goto label_4b1650;
        case 0x4b1654u: goto label_4b1654;
        case 0x4b1658u: goto label_4b1658;
        case 0x4b165cu: goto label_4b165c;
        case 0x4b1660u: goto label_4b1660;
        case 0x4b1664u: goto label_4b1664;
        case 0x4b1668u: goto label_4b1668;
        case 0x4b166cu: goto label_4b166c;
        case 0x4b1670u: goto label_4b1670;
        case 0x4b1674u: goto label_4b1674;
        case 0x4b1678u: goto label_4b1678;
        case 0x4b167cu: goto label_4b167c;
        default: break;
    }

    ctx->pc = 0x4b15b8u;

label_4b15b8:
    // 0x4b15b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b15b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b15bc:
    // 0x4b15bc: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4b15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4b15c0:
    // 0x4b15c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b15c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b15c4:
    // 0x4b15c4: 0x8c502288  lw          $s0, 0x2288($v0)
    ctx->pc = 0x4b15c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8840)));
label_4b15c8:
    // 0x4b15c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b15c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b15cc:
    // 0x4b15cc: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_4b15d0:
    if (ctx->pc == 0x4B15D0u) {
        ctx->pc = 0x4B15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B15CCu;
        // 0x4b15d0: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B15D4u;
        goto label_4b15d4;
    }
    ctx->pc = 0x4B15CCu;
    {
        const bool branch_taken_0x4b15cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B15CCu;
        // 0x4b15d0: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b15cc) {
            ctx->pc = 0x4B160Cu;
            goto label_4b160c;
        }
    }
    ctx->pc = 0x4B15D4u;
label_4b15d4:
    // 0x4b15d4: 0x24110200  addiu       $s1, $zero, 0x200
    ctx->pc = 0x4b15d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_4b15d8:
    // 0x4b15d8: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x4b15d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_4b15dc:
    // 0x4b15dc: 0x0  nop
    ctx->pc = 0x4b15dcu;
    // NOP
label_4b15e0:
    // 0x4b15e0: 0x30420208  andi        $v0, $v0, 0x208
    ctx->pc = 0x4b15e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)520);
label_4b15e4:
    // 0x4b15e4: 0x54510007  bnel        $v0, $s1, . + 4 + (0x7 << 2)
label_4b15e8:
    if (ctx->pc == 0x4B15E8u) {
        ctx->pc = 0x4B15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B15E4u;
        // 0x4b15e8: 0x8e100034  lw          $s0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B15ECu;
        goto label_4b15ec;
    }
    ctx->pc = 0x4B15E4u;
    {
        const bool branch_taken_0x4b15e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4b15e4) {
            ctx->pc = 0x4B15E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B15E4u;
            // 0x4b15e8: 0x8e100034  lw          $s0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1604u;
            goto label_4b1604;
        }
    }
    ctx->pc = 0x4B15ECu;
label_4b15ec:
    // 0x4b15ec: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b15ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b15f0:
    // 0x4b15f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b15f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b15f4:
    // 0x4b15f4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x4b15f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4b15f8:
    // 0x4b15f8: 0x40f809  jalr        $v0
label_4b15fc:
    if (ctx->pc == 0x4B15FCu) {
        ctx->pc = 0x4B15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B15F8u;
        // 0x4b15fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1600u;
        goto label_4b1600;
    }
    ctx->pc = 0x4B15F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B1600u);
        ctx->pc = 0x4B15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B15F8u;
        // 0x4b15fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B15F8u, 0x4B1600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B1600u;
label_4b1600:
    // 0x4b1600: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x4b1600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_4b1604:
    // 0x4b1604: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
label_4b1608:
    if (ctx->pc == 0x4B1608u) {
        ctx->pc = 0x4B1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1604u;
        // 0x4b1608: 0xde020000  ld          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B160Cu;
        goto label_4b160c;
    }
    ctx->pc = 0x4B1604u;
    {
        const bool branch_taken_0x4b1604 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1604) {
            ctx->pc = 0x4B1608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1604u;
            // 0x4b1608: 0xde020000  ld          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B15E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b15e0;
        }
    }
    ctx->pc = 0x4B160Cu;
label_4b160c:
    // 0x4b160c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b160cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b1610:
    // 0x4b1610: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b1610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b1614:
    // 0x4b1614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b1614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b1618:
    // 0x4b1618: 0x3e00008  jr          $ra
label_4b161c:
    if (ctx->pc == 0x4B161Cu) {
        ctx->pc = 0x4B161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1618u;
        // 0x4b161c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1620u;
        goto label_4b1620;
    }
    ctx->pc = 0x4B1618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1618u;
        // 0x4b161c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1620u;
label_4b1620:
    // 0x4b1620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b1620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b1624:
    // 0x4b1624: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4b1624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4b1628:
    // 0x4b1628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b1628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b162c:
    // 0x4b162c: 0x8c502288  lw          $s0, 0x2288($v0)
    ctx->pc = 0x4b162cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8840)));
label_4b1630:
    // 0x4b1630: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_4b1634:
    if (ctx->pc == 0x4B1634u) {
        ctx->pc = 0x4B1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1630u;
        // 0x4b1634: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1638u;
        goto label_4b1638;
    }
    ctx->pc = 0x4B1630u;
    {
        const bool branch_taken_0x4b1630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1630u;
        // 0x4b1634: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1630) {
            ctx->pc = 0x4B1670u;
            goto label_4b1670;
        }
    }
    ctx->pc = 0x4B1638u;
label_4b1638:
    // 0x4b1638: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b1638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b163c:
    // 0x4b163c: 0x0  nop
    ctx->pc = 0x4b163cu;
    // NOP
label_4b1640:
    // 0x4b1640: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4b1640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_4b1644:
    // 0x4b1644: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_4b1648:
    if (ctx->pc == 0x4B1648u) {
        ctx->pc = 0x4B1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1644u;
        // 0x4b1648: 0x8e100034  lw          $s0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B164Cu;
        goto label_4b164c;
    }
    ctx->pc = 0x4B1644u;
    {
        const bool branch_taken_0x4b1644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1644) {
            ctx->pc = 0x4B1648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1644u;
            // 0x4b1648: 0x8e100034  lw          $s0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1668u;
            goto label_4b1668;
        }
    }
    ctx->pc = 0x4B164Cu;
label_4b164c:
    // 0x4b164c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b164cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b1650:
    // 0x4b1650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b1650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b1654:
    // 0x4b1654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b1654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b1658:
    // 0x4b1658: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4b1658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4b165c:
    // 0x4b165c: 0x40f809  jalr        $v0
label_4b1660:
    if (ctx->pc == 0x4B1660u) {
        ctx->pc = 0x4B1660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B165Cu;
        // 0x4b1660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1664u;
        goto label_4b1664;
    }
    ctx->pc = 0x4B165Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B1664u);
        ctx->pc = 0x4B1660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B165Cu;
        // 0x4b1660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B165Cu, 0x4B1664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B1664u;
label_4b1664:
    // 0x4b1664: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x4b1664u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_4b1668:
    // 0x4b1668: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
label_4b166c:
    if (ctx->pc == 0x4B166Cu) {
        ctx->pc = 0x4B166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1668u;
        // 0x4b166c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1670u;
        goto label_4b1670;
    }
    ctx->pc = 0x4B1668u;
    {
        const bool branch_taken_0x4b1668 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1668) {
            ctx->pc = 0x4B166Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1668u;
            // 0x4b166c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1640;
        }
    }
    ctx->pc = 0x4B1670u;
label_4b1670:
    // 0x4b1670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b1670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b1674:
    // 0x4b1674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b1674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b1678:
    // 0x4b1678: 0x3e00008  jr          $ra
label_4b167c:
    if (ctx->pc == 0x4B167Cu) {
        ctx->pc = 0x4B167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1678u;
        // 0x4b167c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1680u;
        goto label_fallthrough_0x4b1678;
    }
    ctx->pc = 0x4B1678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1678u;
        // 0x4b167c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4b1678:
    ctx->pc = 0x4B1680u;
}
