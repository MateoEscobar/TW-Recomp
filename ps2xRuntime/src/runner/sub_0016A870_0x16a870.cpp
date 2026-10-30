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

// Function: sub_0016A870
// Address: 0x16a870 - 0x16a910
void sub_0016A870_0x16a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A870_0x16a870");
#endif

    switch (ctx->pc) {
        case 0x16a870u: goto label_16a870;
        case 0x16a874u: goto label_16a874;
        case 0x16a878u: goto label_16a878;
        case 0x16a87cu: goto label_16a87c;
        case 0x16a880u: goto label_16a880;
        case 0x16a884u: goto label_16a884;
        case 0x16a888u: goto label_16a888;
        case 0x16a88cu: goto label_16a88c;
        case 0x16a890u: goto label_16a890;
        case 0x16a894u: goto label_16a894;
        case 0x16a898u: goto label_16a898;
        case 0x16a89cu: goto label_16a89c;
        case 0x16a8a0u: goto label_16a8a0;
        case 0x16a8a4u: goto label_16a8a4;
        case 0x16a8a8u: goto label_16a8a8;
        case 0x16a8acu: goto label_16a8ac;
        case 0x16a8b0u: goto label_16a8b0;
        case 0x16a8b4u: goto label_16a8b4;
        case 0x16a8b8u: goto label_16a8b8;
        case 0x16a8bcu: goto label_16a8bc;
        case 0x16a8c0u: goto label_16a8c0;
        case 0x16a8c4u: goto label_16a8c4;
        case 0x16a8c8u: goto label_16a8c8;
        case 0x16a8ccu: goto label_16a8cc;
        case 0x16a8d0u: goto label_16a8d0;
        case 0x16a8d4u: goto label_16a8d4;
        case 0x16a8d8u: goto label_16a8d8;
        case 0x16a8dcu: goto label_16a8dc;
        case 0x16a8e0u: goto label_16a8e0;
        case 0x16a8e4u: goto label_16a8e4;
        case 0x16a8e8u: goto label_16a8e8;
        case 0x16a8ecu: goto label_16a8ec;
        case 0x16a8f0u: goto label_16a8f0;
        case 0x16a8f4u: goto label_16a8f4;
        case 0x16a8f8u: goto label_16a8f8;
        case 0x16a8fcu: goto label_16a8fc;
        case 0x16a900u: goto label_16a900;
        case 0x16a904u: goto label_16a904;
        case 0x16a908u: goto label_16a908;
        case 0x16a90cu: goto label_16a90c;
        default: break;
    }

    ctx->pc = 0x16a870u;

label_16a870:
    // 0x16a870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16a870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16a874:
    // 0x16a874: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16a874u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_16a878:
    // 0x16a878: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16a878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_16a87c:
    // 0x16a87c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16a87cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_16a880:
    // 0x16a880: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16a880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_16a884:
    // 0x16a884: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a888:
    // 0x16a888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16a88c:
    // 0x16a88c: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
label_16a890:
    if (ctx->pc == 0x16A890u) {
        ctx->pc = 0x16A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A88Cu;
        // 0x16a890: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A894u;
        goto label_16a894;
    }
    ctx->pc = 0x16A88Cu;
    {
        const bool branch_taken_0x16a88c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A88Cu;
        // 0x16a890: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a88c) {
            ctx->pc = 0x16A8FCu;
            goto label_16a8fc;
        }
    }
    ctx->pc = 0x16A894u;
label_16a894:
    // 0x16a894: 0xc05b0e2  jal         func_16C388
label_16a898:
    if (ctx->pc == 0x16A898u) {
        ctx->pc = 0x16A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A894u;
        // 0x16a898: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A89Cu;
        goto label_16a89c;
    }
    ctx->pc = 0x16A894u;
    SET_GPR_U32(ctx, 31, 0x16A89Cu);
    ctx->pc = 0x16A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A894u;
    // 0x16a898: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16A894u, 0x16A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A89Cu;
label_16a89c:
    // 0x16a89c: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x16a89cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_16a8a0:
    // 0x16a8a0: 0xc0e409a  jal         func_390268
label_16a8a4:
    if (ctx->pc == 0x16A8A4u) {
        ctx->pc = 0x16A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8A0u;
        // 0x16a8a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A8A8u;
        goto label_16a8a8;
    }
    ctx->pc = 0x16A8A0u;
    SET_GPR_U32(ctx, 31, 0x16A8A8u);
    ctx->pc = 0x16A8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8A0u;
    // 0x16a8a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16A8A0u, 0x16A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8A8u;
label_16a8a8:
    // 0x16a8a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a8ac:
    // 0x16a8ac: 0x0  nop
    ctx->pc = 0x16a8acu;
    // NOP
label_16a8b0:
    // 0x16a8b0: 0xc137866  jal         func_4DE198
label_16a8b4:
    if (ctx->pc == 0x16A8B4u) {
        ctx->pc = 0x16A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8B0u;
        // 0x16a8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A8B8u;
        goto label_16a8b8;
    }
    ctx->pc = 0x16A8B0u;
    SET_GPR_U32(ctx, 31, 0x16A8B8u);
    ctx->pc = 0x16A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8B0u;
    // 0x16a8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x16A8B0u, 0x16A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8B8u;
label_16a8b8:
    // 0x16a8b8: 0xc0e409a  jal         func_390268
label_16a8bc:
    if (ctx->pc == 0x16A8BCu) {
        ctx->pc = 0x16A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8B8u;
        // 0x16a8bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A8C0u;
        goto label_16a8c0;
    }
    ctx->pc = 0x16A8B8u;
    SET_GPR_U32(ctx, 31, 0x16A8C0u);
    ctx->pc = 0x16A8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8B8u;
    // 0x16a8bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16A8B8u, 0x16A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8C0u;
label_16a8c0:
    // 0x16a8c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a8c4:
    // 0x16a8c4: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_16a8c8:
    if (ctx->pc == 0x16A8C8u) {
        ctx->pc = 0x16A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8C4u;
        // 0x16a8c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A8CCu;
        goto label_16a8cc;
    }
    ctx->pc = 0x16A8C4u;
    {
        const bool branch_taken_0x16a8c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a8c4) {
            ctx->pc = 0x16A8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A8C4u;
            // 0x16a8c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A8F0u;
            goto label_16a8f0;
        }
    }
    ctx->pc = 0x16A8CCu;
label_16a8cc:
    // 0x16a8cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16a8d0:
    // 0x16a8d0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x16a8d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_16a8d4:
    // 0x16a8d4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_16a8d8:
    // 0x16a8d8: 0x40f809  jalr        $v0
label_16a8dc:
    if (ctx->pc == 0x16A8DCu) {
        ctx->pc = 0x16A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8D8u;
        // 0x16a8dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A8E0u;
        goto label_16a8e0;
    }
    ctx->pc = 0x16A8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16A8E0u);
        ctx->pc = 0x16A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8D8u;
        // 0x16a8dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A8D8u, 0x16A8E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A8E0u;
label_16a8e0:
    // 0x16a8e0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16a8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16a8e4:
    // 0x16a8e4: 0xc0abd4a  jal         func_2AF528
label_16a8e8:
    if (ctx->pc == 0x16A8E8u) {
        ctx->pc = 0x16A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8E4u;
        // 0x16a8e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A8ECu;
        goto label_16a8ec;
    }
    ctx->pc = 0x16A8E4u;
    SET_GPR_U32(ctx, 31, 0x16A8ECu);
    ctx->pc = 0x16A8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8E4u;
    // 0x16a8e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF528u, 0x16A8E4u, 0x16A8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8ECu;
label_16a8ec:
    // 0x16a8ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16a8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16a8f0:
    // 0x16a8f0: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16a8f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_16a8f4:
    // 0x16a8f4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_16a8f8:
    if (ctx->pc == 0x16A8F8u) {
        ctx->pc = 0x16A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8F4u;
        // 0x16a8f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A8FCu;
        goto label_16a8fc;
    }
    ctx->pc = 0x16A8F4u;
    {
        const bool branch_taken_0x16a8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8F4u;
        // 0x16a8f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a8f4) {
            ctx->pc = 0x16A8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a8b0;
        }
    }
    ctx->pc = 0x16A8FCu;
label_16a8fc:
    // 0x16a8fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16a8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16a900:
    // 0x16a900: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16a900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16a904:
    // 0x16a904: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a908:
    // 0x16a908: 0x3e00008  jr          $ra
label_16a90c:
    if (ctx->pc == 0x16A90Cu) {
        ctx->pc = 0x16A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A908u;
        // 0x16a90c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A910u;
        goto label_fallthrough_0x16a908;
    }
    ctx->pc = 0x16A908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A908u;
        // 0x16a90c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16a908:
    ctx->pc = 0x16A910u;
}
