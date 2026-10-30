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

// Function: sub_0032E6D0
// Address: 0x32e6d0 - 0x32e7e0
void sub_0032E6D0_0x32e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E6D0_0x32e6d0");
#endif

    switch (ctx->pc) {
        case 0x32e708u: goto label_32e708;
        case 0x32e720u: goto label_32e720;
        case 0x32e72cu: goto label_32e72c;
        case 0x32e748u: goto label_32e748;
        case 0x32e758u: goto label_32e758;
        case 0x32e76cu: goto label_32e76c;
        case 0x32e774u: goto label_32e774;
        case 0x32e784u: goto label_32e784;
        case 0x32e79cu: goto label_32e79c;
        case 0x32e7c0u: goto label_32e7c0;
        default: break;
    }

    ctx->pc = 0x32e6d0u;

label_32e6d0:
    // 0x32e6d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32e6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32e6d4: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x32e6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
    // 0x32e6d8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x32e6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x32e6dc: 0x24e75dd0  addiu       $a3, $a3, 0x5DD0
    ctx->pc = 0x32e6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24016));
    // 0x32e6e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x32e6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x32e6e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32e6e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e6e8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x32e6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x32e6ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x32e6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e6f0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x32e6f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e6f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32e6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x32e6f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32e6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32e6fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32e6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e700: 0xc0ca88a  jal         func_32A228
    ctx->pc = 0x32E700u;
    SET_GPR_U32(ctx, 31, 0x32E708u);
    ctx->pc = 0x32E704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E700u;
    // 0x32e704: 0x240600fe  addiu       $a2, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A228u, 0x32E700u, 0x32E708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E708u;
label_32e708:
    // 0x32e708: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32e708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32e70c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x32e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x32e710: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x32E710u;
    {
        const bool branch_taken_0x32e710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E710u;
        // 0x32e714: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e710) {
            ctx->pc = 0x32E760u;
            goto label_32e760;
        }
    }
    ctx->pc = 0x32E718u;
    // 0x32e718: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32E718u;
    SET_GPR_U32(ctx, 31, 0x32E720u);
    ctx->pc = 0x32E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E718u;
    // 0x32e71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32E718u, 0x32E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E720u;
label_32e720:
    // 0x32e720: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32e720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e724: 0xc0cb708  jal         func_32DC20
    ctx->pc = 0x32E724u;
    SET_GPR_U32(ctx, 31, 0x32E72Cu);
    ctx->pc = 0x32E728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E724u;
    // 0x32e728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC20u, 0x32E724u, 0x32E72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E72Cu;
label_32e72c:
    // 0x32e72c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x32e72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e730: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x32e730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x32e734: 0x24c65df8  addiu       $a2, $a2, 0x5DF8
    ctx->pc = 0x32e734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24056));
    // 0x32e738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e73c: 0x38a50003  xori        $a1, $a1, 0x3
    ctx->pc = 0x32e73cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x32e740: 0xc0cb344  jal         func_32CD10
    ctx->pc = 0x32E740u;
    SET_GPR_U32(ctx, 31, 0x32E748u);
    ctx->pc = 0x32E744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E740u;
    // 0x32e744: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD10u, 0x32E740u, 0x32E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E748u;
label_32e748:
    // 0x32e748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e74c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32e74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e750: 0xc0cb9b4  jal         func_32E6D0
    ctx->pc = 0x32E750u;
    SET_GPR_U32(ctx, 31, 0x32E758u);
    ctx->pc = 0x32E754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E750u;
    // 0x32e754: 0x26260001  addiu       $a2, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E6D0u;
    goto label_32e6d0;
    ctx->pc = 0x32E758u;
label_32e758:
    // 0x32e758: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x32E758u;
    {
        const bool branch_taken_0x32e758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E758u;
        // 0x32e75c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e758) {
            ctx->pc = 0x32E784u;
            goto label_32e784;
        }
    }
    ctx->pc = 0x32E760u;
label_32e760:
    // 0x32e760: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x32e760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x32e764: 0xc0cb334  jal         func_32CCD0
    ctx->pc = 0x32E764u;
    SET_GPR_U32(ctx, 31, 0x32E76Cu);
    ctx->pc = 0x32E768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E764u;
    // 0x32e768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CCD0u, 0x32E764u, 0x32E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E76Cu;
label_32e76c:
    // 0x32e76c: 0xc0cb62e  jal         func_32D8B8
    ctx->pc = 0x32E76Cu;
    SET_GPR_U32(ctx, 31, 0x32E774u);
    ctx->pc = 0x32E770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E76Cu;
    // 0x32e770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8B8u, 0x32E76Cu, 0x32E774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E774u;
label_32e774:
    // 0x32e774: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32e774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e77c: 0xc0cb500  jal         func_32D400
    ctx->pc = 0x32E77Cu;
    SET_GPR_U32(ctx, 31, 0x32E784u);
    ctx->pc = 0x32E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E77Cu;
    // 0x32e780: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D400u, 0x32E77Cu, 0x32E784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E784u;
label_32e784:
    // 0x32e784: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x32e784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32e788: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32e788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32e78c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32E78Cu;
    {
        const bool branch_taken_0x32e78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E78Cu;
        // 0x32e790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e78c) {
            ctx->pc = 0x32E7A4u;
            goto label_32e7a4;
        }
    }
    ctx->pc = 0x32E794u;
    // 0x32e794: 0xc0c9aec  jal         func_326BB0
    ctx->pc = 0x32E794u;
    SET_GPR_U32(ctx, 31, 0x32E79Cu);
    ctx->pc = 0x32E798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E794u;
    // 0x32e798: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326BB0u, 0x32E794u, 0x32E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E79Cu;
label_32e79c:
    // 0x32e79c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32E79Cu;
    {
        const bool branch_taken_0x32e79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E79Cu;
        // 0x32e7a0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e79c) {
            ctx->pc = 0x32E7C4u;
            goto label_32e7c4;
        }
    }
    ctx->pc = 0x32E7A4u;
label_32e7a4:
    // 0x32e7a4: 0x2513021  addu        $a2, $s2, $s1
    ctx->pc = 0x32e7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x32e7a8: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x32e7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x32e7ac: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x32e7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x32e7b0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x32e7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32e7b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32e7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32e7b8: 0xc0c9d74  jal         func_3275D0
    ctx->pc = 0x32E7B8u;
    SET_GPR_U32(ctx, 31, 0x32E7C0u);
    ctx->pc = 0x32E7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E7B8u;
    // 0x32e7bc: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275D0u, 0x32E7B8u, 0x32E7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E7C0u;
label_32e7c0:
    // 0x32e7c0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x32e7c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32e7c4:
    // 0x32e7c4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x32e7c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32e7c8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x32e7c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32e7cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32e7ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e7d0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x32e7d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e7d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32e7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x32E7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E7D8u;
        // 0x32e7dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E7E0u;
}
