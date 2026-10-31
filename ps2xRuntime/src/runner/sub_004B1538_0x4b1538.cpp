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

// Function: sub_004B1538
// Address: 0x4b1538 - 0x4b15b8
void sub_004B1538_0x4b1538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1538_0x4b1538");
#endif

    switch (ctx->pc) {
        case 0x4b1538u: goto label_4b1538;
        case 0x4b153cu: goto label_4b153c;
        case 0x4b1540u: goto label_4b1540;
        case 0x4b1544u: goto label_4b1544;
        case 0x4b1548u: goto label_4b1548;
        case 0x4b154cu: goto label_4b154c;
        case 0x4b1550u: goto label_4b1550;
        case 0x4b1554u: goto label_4b1554;
        case 0x4b1558u: goto label_4b1558;
        case 0x4b155cu: goto label_4b155c;
        case 0x4b1560u: goto label_4b1560;
        case 0x4b1564u: goto label_4b1564;
        case 0x4b1568u: goto label_4b1568;
        case 0x4b156cu: goto label_4b156c;
        case 0x4b1570u: goto label_4b1570;
        case 0x4b1574u: goto label_4b1574;
        case 0x4b1578u: goto label_4b1578;
        case 0x4b157cu: goto label_4b157c;
        case 0x4b1580u: goto label_4b1580;
        case 0x4b1584u: goto label_4b1584;
        case 0x4b1588u: goto label_4b1588;
        case 0x4b158cu: goto label_4b158c;
        case 0x4b1590u: goto label_4b1590;
        case 0x4b1594u: goto label_4b1594;
        case 0x4b1598u: goto label_4b1598;
        case 0x4b159cu: goto label_4b159c;
        case 0x4b15a0u: goto label_4b15a0;
        case 0x4b15a4u: goto label_4b15a4;
        case 0x4b15a8u: goto label_4b15a8;
        case 0x4b15acu: goto label_4b15ac;
        case 0x4b15b0u: goto label_4b15b0;
        case 0x4b15b4u: goto label_4b15b4;
        default: break;
    }

    ctx->pc = 0x4b1538u;

label_4b1538:
    // 0x4b1538: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b1538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4b153c:
    // 0x4b153c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4b153cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4b1540:
    // 0x4b1540: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b1540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b1544:
    // 0x4b1544: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b1544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_4b1548:
    // 0x4b1548: 0x8c502288  lw          $s0, 0x2288($v0)
    ctx->pc = 0x4b1548u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8840)));
label_4b154c:
    // 0x4b154c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b154cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b1550:
    // 0x4b1550: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b1550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4b1554:
    // 0x4b1554: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4b1558:
    if (ctx->pc == 0x4B1558u) {
        ctx->pc = 0x4B1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1554u;
        // 0x4b1558: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B155Cu;
        goto label_4b155c;
    }
    ctx->pc = 0x4B1554u;
    {
        const bool branch_taken_0x4b1554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1554u;
        // 0x4b1558: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1554) {
            ctx->pc = 0x4B159Cu;
            goto label_4b159c;
        }
    }
    ctx->pc = 0x4B155Cu;
label_4b155c:
    // 0x4b155c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x4b155cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b1560:
    // 0x4b1560: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4b1560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4b1564:
    // 0x4b1564: 0x0  nop
    ctx->pc = 0x4b1564u;
    // NOP
label_4b1568:
    // 0x4b1568: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4b1568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4b156c:
    // 0x4b156c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4b156cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4b1570:
    // 0x4b1570: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4b1574:
    if (ctx->pc == 0x4B1574u) {
        ctx->pc = 0x4B1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1570u;
        // 0x4b1574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1578u;
        goto label_4b1578;
    }
    ctx->pc = 0x4B1570u;
    {
        const bool branch_taken_0x4b1570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1570u;
        // 0x4b1574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1570) {
            ctx->pc = 0x4B1590u;
            goto label_4b1590;
        }
    }
    ctx->pc = 0x4B1578u;
label_4b1578:
    // 0x4b1578: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b1578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b157c:
    // 0x4b157c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x4b157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4b1580:
    // 0x4b1580: 0x40f809  jalr        $v0
label_4b1584:
    if (ctx->pc == 0x4B1584u) {
        ctx->pc = 0x4B1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1580u;
        // 0x4b1584: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1588u;
        goto label_4b1588;
    }
    ctx->pc = 0x4B1580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B1588u);
        ctx->pc = 0x4B1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1580u;
        // 0x4b1584: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1580u, 0x4B1588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B1588u;
label_4b1588:
    // 0x4b1588: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x4b1588u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_4b158c:
    // 0x4b158c: 0x242880a  movz        $s1, $s2, $v0
    ctx->pc = 0x4b158cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
label_4b1590:
    // 0x4b1590: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x4b1590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_4b1594:
    // 0x4b1594: 0x5600fff4  bnel        $s0, $zero, . + 4 + (-0xC << 2)
label_4b1598:
    if (ctx->pc == 0x4B1598u) {
        ctx->pc = 0x4B1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1594u;
        // 0x4b1598: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B159Cu;
        goto label_4b159c;
    }
    ctx->pc = 0x4B1594u;
    {
        const bool branch_taken_0x4b1594 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1594) {
            ctx->pc = 0x4B1598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1594u;
            // 0x4b1598: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1568;
        }
    }
    ctx->pc = 0x4B159Cu;
label_4b159c:
    // 0x4b159c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b159cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b15a0:
    // 0x4b15a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b15a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4b15a4:
    // 0x4b15a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b15a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b15a8:
    // 0x4b15a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b15a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b15ac:
    // 0x4b15ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b15acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b15b0:
    // 0x4b15b0: 0x3e00008  jr          $ra
label_4b15b4:
    if (ctx->pc == 0x4B15B4u) {
        ctx->pc = 0x4B15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B15B0u;
        // 0x4b15b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B15B8u;
        goto label_fallthrough_0x4b15b0;
    }
    ctx->pc = 0x4B15B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B15B0u;
        // 0x4b15b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B15B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4b15b0:
    ctx->pc = 0x4B15B8u;
}
