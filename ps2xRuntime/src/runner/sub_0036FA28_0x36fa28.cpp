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

// Function: sub_0036FA28
// Address: 0x36fa28 - 0x36fb38
void sub_0036FA28_0x36fa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FA28_0x36fa28");
#endif

    switch (ctx->pc) {
        case 0x36fa58u: goto label_36fa58;
        case 0x36fa6cu: goto label_36fa6c;
        case 0x36fa74u: goto label_36fa74;
        case 0x36fa8cu: goto label_36fa8c;
        case 0x36fa94u: goto label_36fa94;
        case 0x36faa0u: goto label_36faa0;
        case 0x36fab8u: goto label_36fab8;
        case 0x36fadcu: goto label_36fadc;
        case 0x36fae8u: goto label_36fae8;
        case 0x36fb04u: goto label_36fb04;
        default: break;
    }

    ctx->pc = 0x36fa28u;

    // 0x36fa28: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x36fa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x36fa2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36fa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36fa30: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x36fa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x36fa34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36fa34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa38: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x36fa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x36fa3c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x36fa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x36fa40: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x36fa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x36fa44: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36fa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x36fa48: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x36fa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x36fa4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36fa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36fa50: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36FA50u;
    SET_GPR_U32(ctx, 31, 0x36FA58u);
    ctx->pc = 0x36FA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FA50u;
    // 0x36fa54: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36FA50u, 0x36FA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FA58u;
label_36fa58:
    // 0x36fa58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36fa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36fa5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36fa5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36fa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa64: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36FA64u;
    SET_GPR_U32(ctx, 31, 0x36FA6Cu);
    ctx->pc = 0x36FA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FA64u;
    // 0x36fa68: 0x2a82b  sltu        $s5, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36FA64u, 0x36FA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FA6Cu;
label_36fa6c:
    // 0x36fa6c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36FA6Cu;
    SET_GPR_U32(ctx, 31, 0x36FA74u);
    ctx->pc = 0x36FA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FA6Cu;
    // 0x36fa70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36FA6Cu, 0x36FA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FA74u;
label_36fa74:
    // 0x36fa74: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x36fa74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x36fa78: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x36fa78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x36fa7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36fa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa80: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36fa80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36fa84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36FA84u;
    SET_GPR_U32(ctx, 31, 0x36FA8Cu);
    ctx->pc = 0x36FA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FA84u;
    // 0x36fa88: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36FA84u, 0x36FA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FA8Cu;
label_36fa8c:
    // 0x36fa8c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36FA8Cu;
    SET_GPR_U32(ctx, 31, 0x36FA94u);
    ctx->pc = 0x36FA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FA8Cu;
    // 0x36fa90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36FA8Cu, 0x36FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FA94u;
label_36fa94:
    // 0x36fa94: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x36fa94u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36fa98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36fa98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa9c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36fa9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36faa0:
    // 0x36faa0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36faa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36faa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36faa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36faa8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36faa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36faac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36faacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fab0: 0xc10250e  jal         func_409438
    ctx->pc = 0x36FAB0u;
    SET_GPR_U32(ctx, 31, 0x36FAB8u);
    ctx->pc = 0x36FAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FAB0u;
    // 0x36fab4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409438u, 0x36FAB0u, 0x36FAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FAB8u;
label_36fab8:
    // 0x36fab8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36fabc: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x36fabcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x36fac0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x36FAC0u;
    {
        const bool branch_taken_0x36fac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FAC0u;
        // 0x36fac4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fac0) {
            ctx->pc = 0x36FAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36faa0;
        }
    }
    ctx->pc = 0x36FAC8u;
    // 0x36fac8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x36fac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36facc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x36faccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fad0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x36fad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fad4: 0xc06d564  jal         func_1B5590
    ctx->pc = 0x36FAD4u;
    SET_GPR_U32(ctx, 31, 0x36FADCu);
    ctx->pc = 0x36FAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FAD4u;
    // 0x36fad8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5590u, 0x36FAD4u, 0x36FADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FADCu;
label_36fadc:
    // 0x36fadc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36fadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fae0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x36fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36fae4: 0x0  nop
    ctx->pc = 0x36fae4u;
    // NOP
label_36fae8:
    // 0x36fae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36fae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36faec: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x36faecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x36faf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36faf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36faf4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x36faf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36faf8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36faf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36fafc: 0xc102592  jal         func_409648
    ctx->pc = 0x36FAFCu;
    SET_GPR_U32(ctx, 31, 0x36FB04u);
    ctx->pc = 0x36FB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FAFCu;
    // 0x36fb00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409648u, 0x36FAFCu, 0x36FB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB04u;
label_36fb04:
    // 0x36fb04: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x36fb04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x36fb08: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x36FB08u;
    {
        const bool branch_taken_0x36fb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB08u;
        // 0x36fb0c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fb08) {
            ctx->pc = 0x36FAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36fae8;
        }
    }
    ctx->pc = 0x36FB10u;
    // 0x36fb10: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x36fb10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36fb14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36fb14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fb18: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x36fb18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36fb1c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x36fb1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36fb20: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x36fb20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36fb24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36fb24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36fb28: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x36fb28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36fb2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36fb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36fb30: 0x3e00008  jr          $ra
    ctx->pc = 0x36FB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB30u;
        // 0x36fb34: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FB38u;
}
