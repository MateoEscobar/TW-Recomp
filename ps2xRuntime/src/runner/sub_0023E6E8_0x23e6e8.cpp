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

// Function: sub_0023E6E8
// Address: 0x23e6e8 - 0x23e7e0
void sub_0023E6E8_0x23e6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E6E8_0x23e6e8");
#endif

    switch (ctx->pc) {
        case 0x23e6e8u: goto label_23e6e8;
        case 0x23e6ecu: goto label_23e6ec;
        case 0x23e6f0u: goto label_23e6f0;
        case 0x23e6f4u: goto label_23e6f4;
        case 0x23e6f8u: goto label_23e6f8;
        case 0x23e6fcu: goto label_23e6fc;
        case 0x23e700u: goto label_23e700;
        case 0x23e704u: goto label_23e704;
        case 0x23e708u: goto label_23e708;
        case 0x23e70cu: goto label_23e70c;
        case 0x23e710u: goto label_23e710;
        case 0x23e714u: goto label_23e714;
        case 0x23e718u: goto label_23e718;
        case 0x23e71cu: goto label_23e71c;
        case 0x23e720u: goto label_23e720;
        case 0x23e724u: goto label_23e724;
        case 0x23e728u: goto label_23e728;
        case 0x23e72cu: goto label_23e72c;
        case 0x23e730u: goto label_23e730;
        case 0x23e734u: goto label_23e734;
        case 0x23e738u: goto label_23e738;
        case 0x23e73cu: goto label_23e73c;
        case 0x23e740u: goto label_23e740;
        case 0x23e744u: goto label_23e744;
        case 0x23e748u: goto label_23e748;
        case 0x23e74cu: goto label_23e74c;
        case 0x23e750u: goto label_23e750;
        case 0x23e754u: goto label_23e754;
        case 0x23e758u: goto label_23e758;
        case 0x23e75cu: goto label_23e75c;
        case 0x23e760u: goto label_23e760;
        case 0x23e764u: goto label_23e764;
        case 0x23e768u: goto label_23e768;
        case 0x23e76cu: goto label_23e76c;
        case 0x23e770u: goto label_23e770;
        case 0x23e774u: goto label_23e774;
        case 0x23e778u: goto label_23e778;
        case 0x23e77cu: goto label_23e77c;
        case 0x23e780u: goto label_23e780;
        case 0x23e784u: goto label_23e784;
        case 0x23e788u: goto label_23e788;
        case 0x23e78cu: goto label_23e78c;
        case 0x23e790u: goto label_23e790;
        case 0x23e794u: goto label_23e794;
        case 0x23e798u: goto label_23e798;
        case 0x23e79cu: goto label_23e79c;
        case 0x23e7a0u: goto label_23e7a0;
        case 0x23e7a4u: goto label_23e7a4;
        case 0x23e7a8u: goto label_23e7a8;
        case 0x23e7acu: goto label_23e7ac;
        case 0x23e7b0u: goto label_23e7b0;
        case 0x23e7b4u: goto label_23e7b4;
        case 0x23e7b8u: goto label_23e7b8;
        case 0x23e7bcu: goto label_23e7bc;
        case 0x23e7c0u: goto label_23e7c0;
        case 0x23e7c4u: goto label_23e7c4;
        case 0x23e7c8u: goto label_23e7c8;
        case 0x23e7ccu: goto label_23e7cc;
        case 0x23e7d0u: goto label_23e7d0;
        case 0x23e7d4u: goto label_23e7d4;
        case 0x23e7d8u: goto label_23e7d8;
        case 0x23e7dcu: goto label_23e7dc;
        default: break;
    }

    ctx->pc = 0x23e6e8u;

label_23e6e8:
    // 0x23e6e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23e6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23e6ec:
    // 0x23e6ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x23e6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_23e6f0:
    // 0x23e6f0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x23e6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_23e6f4:
    // 0x23e6f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23e6f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e6f8:
    // 0x23e6f8: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x23e6f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_23e6fc:
    // 0x23e6fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x23e6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_23e700:
    // 0x23e700: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x23e700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_23e704:
    // 0x23e704: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23e704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23e708:
    // 0x23e708: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x23e708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_23e70c:
    // 0x23e70c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x23e70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_23e710:
    // 0x23e710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23e714:
    // 0x23e714: 0xc0e409a  jal         func_390268
label_23e718:
    if (ctx->pc == 0x23E718u) {
        ctx->pc = 0x23E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E714u;
        // 0x23e718: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E71Cu;
        goto label_23e71c;
    }
    ctx->pc = 0x23E714u;
    SET_GPR_U32(ctx, 31, 0x23E71Cu);
    ctx->pc = 0x23E718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E714u;
    // 0x23e718: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23E714u, 0x23E71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E71Cu;
label_23e71c:
    // 0x23e71c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23e71cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e720:
    // 0x23e720: 0xc087502  jal         func_21D408
label_23e724:
    if (ctx->pc == 0x23E724u) {
        ctx->pc = 0x23E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E720u;
        // 0x23e724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E728u;
        goto label_23e728;
    }
    ctx->pc = 0x23E720u;
    SET_GPR_U32(ctx, 31, 0x23E728u);
    ctx->pc = 0x23E724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E720u;
    // 0x23e724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23E720u, 0x23E728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E728u;
label_23e728:
    // 0x23e728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23e728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23e72c:
    // 0x23e72c: 0xc087502  jal         func_21D408
label_23e730:
    if (ctx->pc == 0x23E730u) {
        ctx->pc = 0x23E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E72Cu;
        // 0x23e730: 0x8c53020c  lw          $s3, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E734u;
        goto label_23e734;
    }
    ctx->pc = 0x23E72Cu;
    SET_GPR_U32(ctx, 31, 0x23E734u);
    ctx->pc = 0x23E730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E72Cu;
    // 0x23e730: 0x8c53020c  lw          $s3, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23E72Cu, 0x23E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E734u;
label_23e734:
    // 0x23e734: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23e734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e738:
    // 0x23e738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e73c:
    // 0x23e73c: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_23e740:
    if (ctx->pc == 0x23E740u) {
        ctx->pc = 0x23E744u;
        goto label_23e744;
    }
    ctx->pc = 0x23E73Cu;
    {
        const bool branch_taken_0x23e73c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x23e73c) {
            ctx->pc = 0x23E754u;
            goto label_23e754;
        }
    }
    ctx->pc = 0x23E744u;
label_23e744:
    // 0x23e744: 0xc0a3ba2  jal         func_28EE88
label_23e748:
    if (ctx->pc == 0x23E748u) {
        ctx->pc = 0x23E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E744u;
        // 0x23e748: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E74Cu;
        goto label_23e74c;
    }
    ctx->pc = 0x23E744u;
    SET_GPR_U32(ctx, 31, 0x23E74Cu);
    ctx->pc = 0x23E748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E744u;
    // 0x23e748: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EE88u, 0x23E744u, 0x23E74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E74Cu;
label_23e74c:
    // 0x23e74c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_23e750:
    if (ctx->pc == 0x23E750u) {
        ctx->pc = 0x23E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E74Cu;
        // 0x23e750: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E754u;
        goto label_23e754;
    }
    ctx->pc = 0x23E74Cu;
    {
        const bool branch_taken_0x23e74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E74Cu;
        // 0x23e750: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e74c) {
            ctx->pc = 0x23E7C0u;
            goto label_23e7c0;
        }
    }
    ctx->pc = 0x23E754u;
label_23e754:
    // 0x23e754: 0xc0a3ba2  jal         func_28EE88
label_23e758:
    if (ctx->pc == 0x23E758u) {
        ctx->pc = 0x23E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E754u;
        // 0x23e758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E75Cu;
        goto label_23e75c;
    }
    ctx->pc = 0x23E754u;
    SET_GPR_U32(ctx, 31, 0x23E75Cu);
    ctx->pc = 0x23E758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E754u;
    // 0x23e758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EE88u, 0x23E754u, 0x23E75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E75Cu;
label_23e75c:
    // 0x23e75c: 0x16320018  bne         $s1, $s2, . + 4 + (0x18 << 2)
label_23e760:
    if (ctx->pc == 0x23E760u) {
        ctx->pc = 0x23E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E75Cu;
        // 0x23e760: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E764u;
        goto label_23e764;
    }
    ctx->pc = 0x23E75Cu;
    {
        const bool branch_taken_0x23e75c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x23E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E75Cu;
        // 0x23e760: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e75c) {
            ctx->pc = 0x23E7C0u;
            goto label_23e7c0;
        }
    }
    ctx->pc = 0x23E764u;
label_23e764:
    // 0x23e764: 0x8e650040  lw          $a1, 0x40($s3)
    ctx->pc = 0x23e764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_23e768:
    // 0x23e768: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_23e76c:
    if (ctx->pc == 0x23E76Cu) {
        ctx->pc = 0x23E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E768u;
        // 0x23e76c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E770u;
        goto label_23e770;
    }
    ctx->pc = 0x23E768u;
    {
        const bool branch_taken_0x23e768 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E768u;
        // 0x23e76c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e768) {
            ctx->pc = 0x23E7B0u;
            goto label_23e7b0;
        }
    }
    ctx->pc = 0x23E770u;
label_23e770:
    // 0x23e770: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x23e770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_23e774:
    // 0x23e774: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x23e774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_23e778:
    // 0x23e778: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x23e778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_23e77c:
    // 0x23e77c: 0x40f809  jalr        $v0
label_23e780:
    if (ctx->pc == 0x23E780u) {
        ctx->pc = 0x23E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E77Cu;
        // 0x23e780: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E784u;
        goto label_23e784;
    }
    ctx->pc = 0x23E77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23E784u);
        ctx->pc = 0x23E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E77Cu;
        // 0x23e780: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E77Cu, 0x23E784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E784u;
label_23e784:
    // 0x23e784: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x23e784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_23e788:
    // 0x23e788: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_23e78c:
    if (ctx->pc == 0x23E78Cu) {
        ctx->pc = 0x23E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E788u;
        // 0x23e78c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E790u;
        goto label_23e790;
    }
    ctx->pc = 0x23E788u;
    {
        const bool branch_taken_0x23e788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E788u;
        // 0x23e78c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e788) {
            ctx->pc = 0x23E7B4u;
            goto label_23e7b4;
        }
    }
    ctx->pc = 0x23E790u;
label_23e790:
    // 0x23e790: 0x8206480c  lb          $a2, 0x480C($s0)
    ctx->pc = 0x23e790u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 18444)));
label_23e794:
    // 0x23e794: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
label_23e798:
    if (ctx->pc == 0x23E798u) {
        ctx->pc = 0x23E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E794u;
        // 0x23e798: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E79Cu;
        goto label_23e79c;
    }
    ctx->pc = 0x23E794u;
    {
        const bool branch_taken_0x23e794 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x23E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E794u;
        // 0x23e798: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e794) {
            ctx->pc = 0x23E7B4u;
            goto label_23e7b4;
        }
    }
    ctx->pc = 0x23E79Cu;
label_23e79c:
    // 0x23e79c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23e79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23e7a0:
    // 0x23e7a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23e7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e7a4:
    // 0x23e7a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23e7a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e7a8:
    // 0x23e7a8: 0xc107138  jal         func_41C4E0
label_23e7ac:
    if (ctx->pc == 0x23E7ACu) {
        ctx->pc = 0x23E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7A8u;
        // 0x23e7ac: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E7B0u;
        goto label_23e7b0;
    }
    ctx->pc = 0x23E7A8u;
    SET_GPR_U32(ctx, 31, 0x23E7B0u);
    ctx->pc = 0x23E7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E7A8u;
    // 0x23e7ac: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4E0u, 0x23E7A8u, 0x23E7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E7B0u;
label_23e7b0:
    // 0x23e7b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23e7b4:
    // 0x23e7b4: 0xa202480c  sb          $v0, 0x480C($s0)
    ctx->pc = 0x23e7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18444), (uint8_t)GPR_U32(ctx, 2));
label_23e7b8:
    // 0x23e7b8: 0xae200658  sw          $zero, 0x658($s1)
    ctx->pc = 0x23e7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1624), GPR_U32(ctx, 0));
label_23e7bc:
    // 0x23e7bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x23e7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23e7c0:
    // 0x23e7c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x23e7c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23e7c4:
    // 0x23e7c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x23e7c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23e7c8:
    // 0x23e7c8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x23e7c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23e7cc:
    // 0x23e7cc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x23e7ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23e7d0:
    // 0x23e7d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23e7d4:
    // 0x23e7d4: 0x3e00008  jr          $ra
label_23e7d8:
    if (ctx->pc == 0x23E7D8u) {
        ctx->pc = 0x23E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7D4u;
        // 0x23e7d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E7DCu;
        goto label_23e7dc;
    }
    ctx->pc = 0x23E7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7D4u;
        // 0x23e7d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E7DCu;
label_23e7dc:
    // 0x23e7dc: 0x0  nop
    ctx->pc = 0x23e7dcu;
    // NOP
    ctx->pc = 0x23e7e0u;
}
