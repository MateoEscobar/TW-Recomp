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

// Function: sub_001B26A8
// Address: 0x1b26a8 - 0x1b2790
void sub_001B26A8_0x1b26a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B26A8_0x1b26a8");
#endif

    switch (ctx->pc) {
        case 0x1b26f0u: goto label_1b26f0;
        case 0x1b2704u: goto label_1b2704;
        case 0x1b2714u: goto label_1b2714;
        case 0x1b273cu: goto label_1b273c;
        case 0x1b2754u: goto label_1b2754;
        case 0x1b2770u: goto label_1b2770;
        default: break;
    }

    ctx->pc = 0x1b26a8u;

    // 0x1b26a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b26a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b26ac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b26acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b26b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b26b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b26b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b26b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b26b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b26b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b26bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b26bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b26c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b26c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b26c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b26c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b26c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b26cc: 0x8c4377a0  lw          $v1, 0x77A0($v0)
    ctx->pc = 0x1b26ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30624)));
    // 0x1b26d0: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B26D0u;
    {
        const bool branch_taken_0x1b26d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26D0u;
        // 0x1b26d4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26d0) {
            ctx->pc = 0x1B2770u;
            goto label_1b2770;
        }
    }
    ctx->pc = 0x1B26D8u;
    // 0x1b26d8: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1b26d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x1b26dc: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1b26dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1b26e0: 0x8e62489c  lw          $v0, 0x489C($s3)
    ctx->pc = 0x1b26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x1b26e4: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x1b26e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x1b26e8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1B26E8u;
    SET_GPR_U32(ctx, 31, 0x1B26F0u);
    ctx->pc = 0x1B26ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B26E8u;
    // 0x1b26ec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1B26E8u, 0x1B26F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B26F0u;
label_1b26f0:
    // 0x1b26f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b26f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b26f4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B26F4u;
    {
        const bool branch_taken_0x1b26f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B26F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26F4u;
        // 0x1b26f8: 0x8e63489c  lw          $v1, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26f4) {
            ctx->pc = 0x1B2720u;
            goto label_1b2720;
        }
    }
    ctx->pc = 0x1B26FCu;
    // 0x1b26fc: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x1B26FCu;
    SET_GPR_U32(ctx, 31, 0x1B2704u);
    ctx->pc = 0x1B2700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B26FCu;
    // 0x1b2700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x1B26FCu, 0x1B2704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2704u;
label_1b2704:
    // 0x1b2704: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B2704u;
    {
        const bool branch_taken_0x1b2704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2704) {
            ctx->pc = 0x1B2708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2704u;
            // 0x1b2708: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2774u;
            goto label_1b2774;
        }
    }
    ctx->pc = 0x1B270Cu;
    // 0x1b270c: 0xc088edc  jal         func_223B70
    ctx->pc = 0x1B270Cu;
    SET_GPR_U32(ctx, 31, 0x1B2714u);
    ctx->pc = 0x1B2710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B270Cu;
    // 0x1b2710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x1B270Cu, 0x1B2714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2714u;
label_1b2714:
    // 0x1b2714: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B2714u;
    {
        const bool branch_taken_0x1b2714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2714) {
            ctx->pc = 0x1B2718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2714u;
            // 0x1b2718: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2774u;
            goto label_1b2774;
        }
    }
    ctx->pc = 0x1B271Cu;
    // 0x1b271c: 0x8e63489c  lw          $v1, 0x489C($s3)
    ctx->pc = 0x1b271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_1b2720:
    // 0x1b2720: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1b2720u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x1b2724: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1b2724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b2728: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b2728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1b272c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B272Cu;
    {
        const bool branch_taken_0x1b272c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B272Cu;
        // 0x1b2730: 0x24042940  addiu       $a0, $zero, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b272c) {
            ctx->pc = 0x1B275Cu;
            goto label_1b275c;
        }
    }
    ctx->pc = 0x1B2734u;
    // 0x1b2734: 0xc047ab8  jal         func_11EAE0
    ctx->pc = 0x1B2734u;
    SET_GPR_U32(ctx, 31, 0x1B273Cu);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x1B2734u, 0x1B273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B273Cu;
label_1b273c:
    // 0x1b273c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b273cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2740: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2740u;
    {
        const bool branch_taken_0x1b2740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B2744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2740u;
        // 0x1b2744: 0x24042940  addiu       $a0, $zero, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2740) {
            ctx->pc = 0x1B275Cu;
            goto label_1b275c;
        }
    }
    ctx->pc = 0x1B2748u;
    // 0x1b2748: 0x262415d0  addiu       $a0, $s1, 0x15D0
    ctx->pc = 0x1b2748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5584));
    // 0x1b274c: 0xc071140  jal         func_1C4500
    ctx->pc = 0x1B274Cu;
    SET_GPR_U32(ctx, 31, 0x1B2754u);
    ctx->pc = 0x1B2750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B274Cu;
    // 0x1b2750: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4500u, 0x1B274Cu, 0x1B2754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2754u;
label_1b2754:
    // 0x1b2754: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2754u;
    {
        const bool branch_taken_0x1b2754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2754u;
        // 0x1b2758: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2754) {
            ctx->pc = 0x1B2774u;
            goto label_1b2774;
        }
    }
    ctx->pc = 0x1B275Cu;
label_1b275c:
    // 0x1b275c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b275cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2760: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1b2760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b2764: 0x248415d0  addiu       $a0, $a0, 0x15D0
    ctx->pc = 0x1b2764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5584));
    // 0x1b2768: 0xc071140  jal         func_1C4500
    ctx->pc = 0x1B2768u;
    SET_GPR_U32(ctx, 31, 0x1B2770u);
    ctx->pc = 0x1B276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2768u;
    // 0x1b276c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4500u, 0x1B2768u, 0x1B2770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2770u;
label_1b2770:
    // 0x1b2770: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b2770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b2774:
    // 0x1b2774: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b2774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2778: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b2778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b277c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b277cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2784: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2784u;
        // 0x1b2788: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B278Cu;
    // 0x1b278c: 0x0  nop
    ctx->pc = 0x1b278cu;
    // NOP
    ctx->pc = 0x1b2790u;
}
