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

// Function: sub_00114528
// Address: 0x114528 - 0x114628
void sub_00114528_0x114528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114528_0x114528");
#endif

    switch (ctx->pc) {
        case 0x114550u: goto label_114550;
        case 0x114598u: goto label_114598;
        case 0x1145d8u: goto label_1145d8;
        case 0x11460cu: goto label_11460c;
        case 0x114614u: goto label_114614;
        default: break;
    }

    ctx->pc = 0x114528u;

    // 0x114528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11452c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11452cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x114530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114534: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114538: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x114538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x11453c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x11453cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x114540: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x114540u;
    {
        const bool branch_taken_0x114540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114540u;
        // 0x114544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114540) {
            ctx->pc = 0x114578u;
            goto label_114578;
        }
    }
    ctx->pc = 0x114548u;
    // 0x114548: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x114548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11454c: 0x0  nop
    ctx->pc = 0x11454cu;
    // NOP
label_114550:
    // 0x114550: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x114550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x114554: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x114554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x114558: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11455c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x11455cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x114560: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x114560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x114564: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x114564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x114568: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x114568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11456c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x11456cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x114570: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x114570u;
    {
        const bool branch_taken_0x114570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114570) {
            ctx->pc = 0x114574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114570u;
            // 0x114574: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114550;
        }
    }
    ctx->pc = 0x114578u;
label_114578:
    // 0x114578: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x114578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x11457c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11457cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114580: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x114580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x114584: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x114584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x114588: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x114588u;
    {
        const bool branch_taken_0x114588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114588u;
        // 0x11458c: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114588) {
            ctx->pc = 0x1145C4u;
            goto label_1145c4;
        }
    }
    ctx->pc = 0x114590u;
    // 0x114590: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x114590u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114594: 0x0  nop
    ctx->pc = 0x114594u;
    // NOP
label_114598:
    // 0x114598: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x114598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x11459c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11459cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1145a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1145a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1145a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1145a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1145a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1145a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1145ac: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1145acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1145b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1145b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1145b4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1145b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1145b8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1145b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1145bc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1145BCu;
    {
        const bool branch_taken_0x1145bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1145C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145BCu;
        // 0x1145c0: 0x2508001c  addiu       $t0, $t0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145bc) {
            ctx->pc = 0x114598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114598;
        }
    }
    ctx->pc = 0x1145C4u;
label_1145c4:
    // 0x1145c4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1145c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1145c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1145c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1145cc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1145CCu;
    {
        const bool branch_taken_0x1145cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1145D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145CCu;
        // 0x1145d0: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145cc) {
            ctx->pc = 0x114604u;
            goto label_114604;
        }
    }
    ctx->pc = 0x1145D4u;
    // 0x1145d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1145d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1145d8:
    // 0x1145d8: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1145d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1145dc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1145dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1145e0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1145e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1145e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1145e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1145e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1145e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1145ec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1145ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1145f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1145f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1145f4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1145f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1145f8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1145f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1145fc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1145FCu;
    {
        const bool branch_taken_0x1145fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145FCu;
        // 0x114600: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145fc) {
            ctx->pc = 0x1145D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1145d8;
        }
    }
    ctx->pc = 0x114604u;
label_114604:
    // 0x114604: 0xc04570c  jal         func_115C30
    ctx->pc = 0x114604u;
    SET_GPR_U32(ctx, 31, 0x11460Cu);
    ctx->pc = 0x114608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114604u;
    // 0x114608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C30u, 0x114604u, 0x11460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11460Cu;
label_11460c:
    // 0x11460c: 0xc045720  jal         func_115C80
    ctx->pc = 0x11460Cu;
    SET_GPR_U32(ctx, 31, 0x114614u);
    ctx->pc = 0x114610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11460Cu;
    // 0x114610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C80u, 0x11460Cu, 0x114614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114614u;
label_114614:
    // 0x114614: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x114614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11461c: 0x3e00008  jr          $ra
    ctx->pc = 0x11461Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11461Cu;
        // 0x114620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11461Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114624u;
    // 0x114624: 0x0  nop
    ctx->pc = 0x114624u;
    // NOP
    ctx->pc = 0x114628u;
}
