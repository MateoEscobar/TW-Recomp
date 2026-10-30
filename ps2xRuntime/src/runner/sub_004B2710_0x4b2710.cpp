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

// Function: sub_004B2710
// Address: 0x4b2710 - 0x4b2818
void sub_004B2710_0x4b2710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2710_0x4b2710");
#endif

    switch (ctx->pc) {
        case 0x4b2740u: goto label_4b2740;
        case 0x4b2770u: goto label_4b2770;
        case 0x4b2774u: goto label_4b2774;
        case 0x4b2780u: goto label_4b2780;
        case 0x4b27e8u: goto label_4b27e8;
        default: break;
    }

    ctx->pc = 0x4b2710u;

    // 0x4b2710: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x4b2710u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b2714: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x4b2714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x4b2718: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B2718u;
    {
        const bool branch_taken_0x4b2718 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2718u;
        // 0x4b271c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2718) {
            ctx->pc = 0x4B2730u;
            goto label_4b2730;
        }
    }
    ctx->pc = 0x4B2720u;
    // 0x4b2720: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x4b2720u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b2724: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4b2724u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b2728: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B2728u;
    {
        const bool branch_taken_0x4b2728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2728u;
        // 0x4b272c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2728) {
            ctx->pc = 0x4B2734u;
            goto label_4b2734;
        }
    }
    ctx->pc = 0x4B2730u;
label_4b2730:
    // 0x4b2730: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b2730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b2734:
    // 0x4b2734: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x4b2734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4b2738: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x4b2738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x4b273c: 0x0  nop
    ctx->pc = 0x4b273cu;
    // NOP
label_4b2740:
    // 0x4b2740: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x4b2740u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x4b2744: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4b2744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4b2748: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b2748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b274c: 0x0  nop
    ctx->pc = 0x4b274cu;
    // NOP
    // 0x4b2750: 0x0  nop
    ctx->pc = 0x4b2750u;
    // NOP
    // 0x4b2754: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B2754u;
    {
        const bool branch_taken_0x4b2754 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x4b2754) {
            ctx->pc = 0x4B2740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b2740;
        }
    }
    ctx->pc = 0x4B275Cu;
    // 0x4b275c: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B275Cu;
    {
        const bool branch_taken_0x4b275c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B275Cu;
        // 0x4b2760: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b275c) {
            ctx->pc = 0x4B276Cu;
            goto label_4b276c;
        }
    }
    ctx->pc = 0x4B2764u;
    // 0x4b2764: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2764u;
        // 0x4b2768: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B276Cu;
label_4b276c:
    // 0x4b276c: 0x494823  subu        $t1, $v0, $t1
    ctx->pc = 0x4b276cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_4b2770:
    // 0x4b2770: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x4b2770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_4b2774:
    // 0x4b2774: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x4b2774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4b2778: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x4b2778u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x4b277c: 0x90a80000  lbu         $t0, 0x0($a1)
    ctx->pc = 0x4b277cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4b2780:
    // 0x4b2780: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x4b2780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x4b2784: 0x1102000e  beq         $t0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4B2784u;
    {
        const bool branch_taken_0x4b2784 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2784u;
        // 0x4b2788: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2784) {
            ctx->pc = 0x4B27C0u;
            goto label_4b27c0;
        }
    }
    ctx->pc = 0x4B278Cu;
    // 0x4b278c: 0x2902002e  slti        $v0, $t0, 0x2E
    ctx->pc = 0x4b278cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x4b2790: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B2790u;
    {
        const bool branch_taken_0x4b2790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2790u;
        // 0x4b2794: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2790) {
            ctx->pc = 0x4B27A8u;
            goto label_4b27a8;
        }
    }
    ctx->pc = 0x4B2798u;
    // 0x4b2798: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B2798u;
    {
        const bool branch_taken_0x4b2798 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2798u;
        // 0x4b279c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2798) {
            ctx->pc = 0x4B27B8u;
            goto label_4b27b8;
        }
    }
    ctx->pc = 0x4B27A0u;
    // 0x4b27a0: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x4B27A0u;
    {
        const bool branch_taken_0x4b27a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B27A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B27A0u;
        // 0x4b27a4: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b27a0) {
            ctx->pc = 0x4B2774u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b2774;
        }
    }
    ctx->pc = 0x4B27A8u;
label_4b27a8:
    // 0x4b27a8: 0x11020018  beq         $t0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4B27A8u;
    {
        const bool branch_taken_0x4b27a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B27A8u;
        // 0x4b27ac: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b27a8) {
            ctx->pc = 0x4B280Cu;
            goto label_4b280c;
        }
    }
    ctx->pc = 0x4B27B0u;
    // 0x4b27b0: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x4B27B0u;
    {
        const bool branch_taken_0x4b27b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B27B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B27B0u;
        // 0x4b27b4: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b27b0) {
            ctx->pc = 0x4B2774u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b2774;
        }
    }
    ctx->pc = 0x4B27B8u;
label_4b27b8:
    // 0x4b27b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B27B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B27BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B27B8u;
        // 0x4b27bc: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B27B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B27C0u;
label_4b27c0:
    // 0x4b27c0: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x4b27c0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b27c4: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x4b27c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x4b27c8: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B27C8u;
    {
        const bool branch_taken_0x4b27c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B27CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B27C8u;
        // 0x4b27cc: 0x107102a  slt         $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b27c8) {
            ctx->pc = 0x4B27D8u;
            goto label_4b27d8;
        }
    }
    ctx->pc = 0x4B27D0u;
    // 0x4b27d0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B27D0u;
    {
        const bool branch_taken_0x4b27d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b27d0) {
            ctx->pc = 0x4B27D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B27D0u;
            // 0x4b27d4: 0x24c50001  addiu       $a1, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B27E0u;
            goto label_4b27e0;
        }
    }
    ctx->pc = 0x4B27D8u;
label_4b27d8:
    // 0x4b27d8: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x4B27D8u;
    {
        const bool branch_taken_0x4b27d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B27D8u;
        // 0x4b27dc: 0x2407002d  addiu       $a3, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b27d8) {
            ctx->pc = 0x4B2770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b2770;
        }
    }
    ctx->pc = 0x4B27E0u;
label_4b27e0:
    // 0x4b27e0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x4b27e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x4b27e4: 0x0  nop
    ctx->pc = 0x4b27e4u;
    // NOP
label_4b27e8:
    // 0x4b27e8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4b27e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4b27ec: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x4b27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4b27f0: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x4b27f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x4b27f4: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x4b27f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x4b27f8: 0x0  nop
    ctx->pc = 0x4b27f8u;
    // NOP
    // 0x4b27fc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B27FCu;
    {
        const bool branch_taken_0x4b27fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b27fc) {
            ctx->pc = 0x4B27E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b27e8;
        }
    }
    ctx->pc = 0x4B2804u;
    // 0x4b2804: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x4B2804u;
    {
        const bool branch_taken_0x4b2804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2804u;
        // 0x4b2808: 0x90a80000  lbu         $t0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2804) {
            ctx->pc = 0x4B2780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b2780;
        }
    }
    ctx->pc = 0x4B280Cu;
label_4b280c:
    // 0x4b280c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B280Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B280Cu;
        // 0x4b2810: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B280Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B2814u;
    // 0x4b2814: 0x0  nop
    ctx->pc = 0x4b2814u;
    // NOP
    ctx->pc = 0x4b2818u;
}
