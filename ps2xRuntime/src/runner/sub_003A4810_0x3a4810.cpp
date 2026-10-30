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

// Function: sub_003A4810
// Address: 0x3a4810 - 0x3a49e8
void sub_003A4810_0x3a4810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4810_0x3a4810");
#endif

    switch (ctx->pc) {
        case 0x3a4810u: goto label_3a4810;
        case 0x3a4814u: goto label_3a4814;
        case 0x3a4818u: goto label_3a4818;
        case 0x3a481cu: goto label_3a481c;
        case 0x3a4820u: goto label_3a4820;
        case 0x3a4824u: goto label_3a4824;
        case 0x3a4828u: goto label_3a4828;
        case 0x3a482cu: goto label_3a482c;
        case 0x3a4830u: goto label_3a4830;
        case 0x3a4834u: goto label_3a4834;
        case 0x3a4838u: goto label_3a4838;
        case 0x3a483cu: goto label_3a483c;
        case 0x3a4840u: goto label_3a4840;
        case 0x3a4844u: goto label_3a4844;
        case 0x3a4848u: goto label_3a4848;
        case 0x3a484cu: goto label_3a484c;
        case 0x3a4850u: goto label_3a4850;
        case 0x3a4854u: goto label_3a4854;
        case 0x3a4858u: goto label_3a4858;
        case 0x3a485cu: goto label_3a485c;
        case 0x3a4860u: goto label_3a4860;
        case 0x3a4864u: goto label_3a4864;
        case 0x3a4868u: goto label_3a4868;
        case 0x3a486cu: goto label_3a486c;
        case 0x3a4870u: goto label_3a4870;
        case 0x3a4874u: goto label_3a4874;
        case 0x3a4878u: goto label_3a4878;
        case 0x3a487cu: goto label_3a487c;
        case 0x3a4880u: goto label_3a4880;
        case 0x3a4884u: goto label_3a4884;
        case 0x3a4888u: goto label_3a4888;
        case 0x3a488cu: goto label_3a488c;
        case 0x3a4890u: goto label_3a4890;
        case 0x3a4894u: goto label_3a4894;
        case 0x3a4898u: goto label_3a4898;
        case 0x3a489cu: goto label_3a489c;
        case 0x3a48a0u: goto label_3a48a0;
        case 0x3a48a4u: goto label_3a48a4;
        case 0x3a48a8u: goto label_3a48a8;
        case 0x3a48acu: goto label_3a48ac;
        case 0x3a48b0u: goto label_3a48b0;
        case 0x3a48b4u: goto label_3a48b4;
        case 0x3a48b8u: goto label_3a48b8;
        case 0x3a48bcu: goto label_3a48bc;
        case 0x3a48c0u: goto label_3a48c0;
        case 0x3a48c4u: goto label_3a48c4;
        case 0x3a48c8u: goto label_3a48c8;
        case 0x3a48ccu: goto label_3a48cc;
        case 0x3a48d0u: goto label_3a48d0;
        case 0x3a48d4u: goto label_3a48d4;
        case 0x3a48d8u: goto label_3a48d8;
        case 0x3a48dcu: goto label_3a48dc;
        case 0x3a48e0u: goto label_3a48e0;
        case 0x3a48e4u: goto label_3a48e4;
        case 0x3a48e8u: goto label_3a48e8;
        case 0x3a48ecu: goto label_3a48ec;
        case 0x3a48f0u: goto label_3a48f0;
        case 0x3a48f4u: goto label_3a48f4;
        case 0x3a48f8u: goto label_3a48f8;
        case 0x3a48fcu: goto label_3a48fc;
        case 0x3a4900u: goto label_3a4900;
        case 0x3a4904u: goto label_3a4904;
        case 0x3a4908u: goto label_3a4908;
        case 0x3a490cu: goto label_3a490c;
        case 0x3a4910u: goto label_3a4910;
        case 0x3a4914u: goto label_3a4914;
        case 0x3a4918u: goto label_3a4918;
        case 0x3a491cu: goto label_3a491c;
        case 0x3a4920u: goto label_3a4920;
        case 0x3a4924u: goto label_3a4924;
        case 0x3a4928u: goto label_3a4928;
        case 0x3a492cu: goto label_3a492c;
        case 0x3a4930u: goto label_3a4930;
        case 0x3a4934u: goto label_3a4934;
        case 0x3a4938u: goto label_3a4938;
        case 0x3a493cu: goto label_3a493c;
        case 0x3a4940u: goto label_3a4940;
        case 0x3a4944u: goto label_3a4944;
        case 0x3a4948u: goto label_3a4948;
        case 0x3a494cu: goto label_3a494c;
        case 0x3a4950u: goto label_3a4950;
        case 0x3a4954u: goto label_3a4954;
        case 0x3a4958u: goto label_3a4958;
        case 0x3a495cu: goto label_3a495c;
        case 0x3a4960u: goto label_3a4960;
        case 0x3a4964u: goto label_3a4964;
        case 0x3a4968u: goto label_3a4968;
        case 0x3a496cu: goto label_3a496c;
        case 0x3a4970u: goto label_3a4970;
        case 0x3a4974u: goto label_3a4974;
        case 0x3a4978u: goto label_3a4978;
        case 0x3a497cu: goto label_3a497c;
        case 0x3a4980u: goto label_3a4980;
        case 0x3a4984u: goto label_3a4984;
        case 0x3a4988u: goto label_3a4988;
        case 0x3a498cu: goto label_3a498c;
        case 0x3a4990u: goto label_3a4990;
        case 0x3a4994u: goto label_3a4994;
        case 0x3a4998u: goto label_3a4998;
        case 0x3a499cu: goto label_3a499c;
        case 0x3a49a0u: goto label_3a49a0;
        case 0x3a49a4u: goto label_3a49a4;
        case 0x3a49a8u: goto label_3a49a8;
        case 0x3a49acu: goto label_3a49ac;
        case 0x3a49b0u: goto label_3a49b0;
        case 0x3a49b4u: goto label_3a49b4;
        case 0x3a49b8u: goto label_3a49b8;
        case 0x3a49bcu: goto label_3a49bc;
        case 0x3a49c0u: goto label_3a49c0;
        case 0x3a49c4u: goto label_3a49c4;
        case 0x3a49c8u: goto label_3a49c8;
        case 0x3a49ccu: goto label_3a49cc;
        case 0x3a49d0u: goto label_3a49d0;
        case 0x3a49d4u: goto label_3a49d4;
        case 0x3a49d8u: goto label_3a49d8;
        case 0x3a49dcu: goto label_3a49dc;
        case 0x3a49e0u: goto label_3a49e0;
        case 0x3a49e4u: goto label_3a49e4;
        default: break;
    }

    ctx->pc = 0x3a4810u;

label_3a4810:
    // 0x3a4810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a4810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a4814:
    // 0x3a4814: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a4814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a4818:
    // 0x3a4818: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a4818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3a481c:
    // 0x3a481c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a481cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a4820:
    // 0x3a4820: 0xc0e57ce  jal         func_395F38
label_3a4824:
    if (ctx->pc == 0x3A4824u) {
        ctx->pc = 0x3A4824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4820u;
        // 0x3a4824: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4828u;
        goto label_3a4828;
    }
    ctx->pc = 0x3A4820u;
    SET_GPR_U32(ctx, 31, 0x3A4828u);
    ctx->pc = 0x3A4824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4820u;
    // 0x3a4824: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3A4820u, 0x3A4828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4828u;
label_3a4828:
    // 0x3a4828: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a4828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a482c:
    // 0x3a482c: 0x52000069  beql        $s0, $zero, . + 4 + (0x69 << 2)
label_3a4830:
    if (ctx->pc == 0x3A4830u) {
        ctx->pc = 0x3A4830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A482Cu;
        // 0x3a4830: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4834u;
        goto label_3a4834;
    }
    ctx->pc = 0x3A482Cu;
    {
        const bool branch_taken_0x3a482c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a482c) {
            ctx->pc = 0x3A4830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A482Cu;
            // 0x3a4830: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A49D4u;
            goto label_3a49d4;
        }
    }
    ctx->pc = 0x3A4834u;
label_3a4834:
    // 0x3a4834: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a4834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a4838:
    // 0x3a4838: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3a4838u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3a483c:
    // 0x3a483c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3a483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3a4840:
    // 0x3a4840: 0x40f809  jalr        $v0
label_3a4844:
    if (ctx->pc == 0x3A4844u) {
        ctx->pc = 0x3A4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4840u;
        // 0x3a4844: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4848u;
        goto label_3a4848;
    }
    ctx->pc = 0x3A4840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A4848u);
        ctx->pc = 0x3A4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4840u;
        // 0x3a4844: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4840u, 0x3A4848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A4848u;
label_3a4848:
    // 0x3a4848: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
label_3a484c:
    if (ctx->pc == 0x3A484Cu) {
        ctx->pc = 0x3A484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4848u;
        // 0x3a484c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4850u;
        goto label_3a4850;
    }
    ctx->pc = 0x3A4848u;
    {
        const bool branch_taken_0x3a4848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4848u;
        // 0x3a484c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4848) {
            ctx->pc = 0x3A49D0u;
            goto label_3a49d0;
        }
    }
    ctx->pc = 0x3A4850u;
label_3a4850:
    // 0x3a4850: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3a4854:
    if (ctx->pc == 0x3A4854u) {
        ctx->pc = 0x3A4854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4850u;
        // 0x3a4854: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4858u;
        goto label_3a4858;
    }
    ctx->pc = 0x3A4850u;
    {
        const bool branch_taken_0x3a4850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4850u;
        // 0x3a4854: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4850) {
            ctx->pc = 0x3A4880u;
            goto label_3a4880;
        }
    }
    ctx->pc = 0x3A4858u;
label_3a4858:
    // 0x3a4858: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a4858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a485c:
    // 0x3a485c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3a485cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3a4860:
    // 0x3a4860: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3a4860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3a4864:
    // 0x3a4864: 0x40f809  jalr        $v0
label_3a4868:
    if (ctx->pc == 0x3A4868u) {
        ctx->pc = 0x3A4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4864u;
        // 0x3a4868: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A486Cu;
        goto label_3a486c;
    }
    ctx->pc = 0x3A4864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A486Cu);
        ctx->pc = 0x3A4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4864u;
        // 0x3a4868: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4864u, 0x3A486Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A486Cu;
label_3a486c:
    // 0x3a486c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3a486cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3a4870:
    // 0x3a4870: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x3a4870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3a4874:
    // 0x3a4874: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3a4874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3a4878:
    // 0x3a4878: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x3a4878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_3a487c:
    // 0x3a487c: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x3a487cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_3a4880:
    // 0x3a4880: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3a4884:
    if (ctx->pc == 0x3A4884u) {
        ctx->pc = 0x3A4884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4880u;
        // 0x3a4884: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4888u;
        goto label_3a4888;
    }
    ctx->pc = 0x3A4880u;
    {
        const bool branch_taken_0x3a4880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4880u;
        // 0x3a4884: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4880) {
            ctx->pc = 0x3A48B0u;
            goto label_3a48b0;
        }
    }
    ctx->pc = 0x3A4888u;
label_3a4888:
    // 0x3a4888: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a4888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a488c:
    // 0x3a488c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3a488cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3a4890:
    // 0x3a4890: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3a4890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3a4894:
    // 0x3a4894: 0x40f809  jalr        $v0
label_3a4898:
    if (ctx->pc == 0x3A4898u) {
        ctx->pc = 0x3A4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4894u;
        // 0x3a4898: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A489Cu;
        goto label_3a489c;
    }
    ctx->pc = 0x3A4894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A489Cu);
        ctx->pc = 0x3A4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4894u;
        // 0x3a4898: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4894u, 0x3A489Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A489Cu;
label_3a489c:
    // 0x3a489c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3a489cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3a48a0:
    // 0x3a48a0: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x3a48a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3a48a4:
    // 0x3a48a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3a48a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3a48a8:
    // 0x3a48a8: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x3a48a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_3a48ac:
    // 0x3a48ac: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x3a48acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_3a48b0:
    // 0x3a48b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3a48b4:
    if (ctx->pc == 0x3A48B4u) {
        ctx->pc = 0x3A48B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A48B0u;
        // 0x3a48b4: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A48B8u;
        goto label_3a48b8;
    }
    ctx->pc = 0x3A48B0u;
    {
        const bool branch_taken_0x3a48b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A48B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A48B0u;
        // 0x3a48b4: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a48b0) {
            ctx->pc = 0x3A48E0u;
            goto label_3a48e0;
        }
    }
    ctx->pc = 0x3A48B8u;
label_3a48b8:
    // 0x3a48b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a48bc:
    // 0x3a48bc: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3a48bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3a48c0:
    // 0x3a48c0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3a48c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3a48c4:
    // 0x3a48c4: 0x40f809  jalr        $v0
label_3a48c8:
    if (ctx->pc == 0x3A48C8u) {
        ctx->pc = 0x3A48C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A48C4u;
        // 0x3a48c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A48CCu;
        goto label_3a48cc;
    }
    ctx->pc = 0x3A48C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A48CCu);
        ctx->pc = 0x3A48C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A48C4u;
        // 0x3a48c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A48C4u, 0x3A48CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A48CCu;
label_3a48cc:
    // 0x3a48cc: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3a48ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3a48d0:
    // 0x3a48d0: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x3a48d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_3a48d4:
    // 0x3a48d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3a48d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3a48d8:
    // 0x3a48d8: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x3a48d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_3a48dc:
    // 0x3a48dc: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x3a48dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_3a48e0:
    // 0x3a48e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3a48e4:
    if (ctx->pc == 0x3A48E4u) {
        ctx->pc = 0x3A48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A48E0u;
        // 0x3a48e4: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A48E8u;
        goto label_3a48e8;
    }
    ctx->pc = 0x3A48E0u;
    {
        const bool branch_taken_0x3a48e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A48E0u;
        // 0x3a48e4: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a48e0) {
            ctx->pc = 0x3A4910u;
            goto label_3a4910;
        }
    }
    ctx->pc = 0x3A48E8u;
label_3a48e8:
    // 0x3a48e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a48e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a48ec:
    // 0x3a48ec: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3a48ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3a48f0:
    // 0x3a48f0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3a48f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3a48f4:
    // 0x3a48f4: 0x40f809  jalr        $v0
label_3a48f8:
    if (ctx->pc == 0x3A48F8u) {
        ctx->pc = 0x3A48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A48F4u;
        // 0x3a48f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A48FCu;
        goto label_3a48fc;
    }
    ctx->pc = 0x3A48F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A48FCu);
        ctx->pc = 0x3A48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A48F4u;
        // 0x3a48f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A48F4u, 0x3A48FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A48FCu;
label_3a48fc:
    // 0x3a48fc: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3a48fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3a4900:
    // 0x3a4900: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x3a4900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_3a4904:
    // 0x3a4904: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3a4904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3a4908:
    // 0x3a4908: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x3a4908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_3a490c:
    // 0x3a490c: 0x32220010  andi        $v0, $s1, 0x10
    ctx->pc = 0x3a490cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
label_3a4910:
    // 0x3a4910: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3a4914:
    if (ctx->pc == 0x3A4914u) {
        ctx->pc = 0x3A4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4910u;
        // 0x3a4914: 0x32220020  andi        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4918u;
        goto label_3a4918;
    }
    ctx->pc = 0x3A4910u;
    {
        const bool branch_taken_0x3a4910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4910u;
        // 0x3a4914: 0x32220020  andi        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4910) {
            ctx->pc = 0x3A4940u;
            goto label_3a4940;
        }
    }
    ctx->pc = 0x3A4918u;
label_3a4918:
    // 0x3a4918: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a4918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a491c:
    // 0x3a491c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3a491cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3a4920:
    // 0x3a4920: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3a4920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3a4924:
    // 0x3a4924: 0x40f809  jalr        $v0
label_3a4928:
    if (ctx->pc == 0x3A4928u) {
        ctx->pc = 0x3A4928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4924u;
        // 0x3a4928: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A492Cu;
        goto label_3a492c;
    }
    ctx->pc = 0x3A4924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A492Cu);
        ctx->pc = 0x3A4928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4924u;
        // 0x3a4928: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4924u, 0x3A492Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A492Cu;
label_3a492c:
    // 0x3a492c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3a492cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3a4930:
    // 0x3a4930: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x3a4930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_3a4934:
    // 0x3a4934: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3a4934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3a4938:
    // 0x3a4938: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x3a4938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_3a493c:
    // 0x3a493c: 0x32220020  andi        $v0, $s1, 0x20
    ctx->pc = 0x3a493cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
label_3a4940:
    // 0x3a4940: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3a4944:
    if (ctx->pc == 0x3A4944u) {
        ctx->pc = 0x3A4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4940u;
        // 0x3a4944: 0x32220040  andi        $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4948u;
        goto label_3a4948;
    }
    ctx->pc = 0x3A4940u;
    {
        const bool branch_taken_0x3a4940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4940u;
        // 0x3a4944: 0x32220040  andi        $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4940) {
            ctx->pc = 0x3A4970u;
            goto label_3a4970;
        }
    }
    ctx->pc = 0x3A4948u;
label_3a4948:
    // 0x3a4948: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a4948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a494c:
    // 0x3a494c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3a494cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3a4950:
    // 0x3a4950: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3a4950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3a4954:
    // 0x3a4954: 0x40f809  jalr        $v0
label_3a4958:
    if (ctx->pc == 0x3A4958u) {
        ctx->pc = 0x3A4958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4954u;
        // 0x3a4958: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A495Cu;
        goto label_3a495c;
    }
    ctx->pc = 0x3A4954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A495Cu);
        ctx->pc = 0x3A4958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4954u;
        // 0x3a4958: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4954u, 0x3A495Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A495Cu;
label_3a495c:
    // 0x3a495c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3a495cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3a4960:
    // 0x3a4960: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x3a4960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_3a4964:
    // 0x3a4964: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3a4964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3a4968:
    // 0x3a4968: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x3a4968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_3a496c:
    // 0x3a496c: 0x32220040  andi        $v0, $s1, 0x40
    ctx->pc = 0x3a496cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
label_3a4970:
    // 0x3a4970: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3a4974:
    if (ctx->pc == 0x3A4974u) {
        ctx->pc = 0x3A4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4970u;
        // 0x3a4974: 0x32220080  andi        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4978u;
        goto label_3a4978;
    }
    ctx->pc = 0x3A4970u;
    {
        const bool branch_taken_0x3a4970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4970u;
        // 0x3a4974: 0x32220080  andi        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4970) {
            ctx->pc = 0x3A49A0u;
            goto label_3a49a0;
        }
    }
    ctx->pc = 0x3A4978u;
label_3a4978:
    // 0x3a4978: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a4978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a497c:
    // 0x3a497c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3a497cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3a4980:
    // 0x3a4980: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3a4980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3a4984:
    // 0x3a4984: 0x40f809  jalr        $v0
label_3a4988:
    if (ctx->pc == 0x3A4988u) {
        ctx->pc = 0x3A4988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4984u;
        // 0x3a4988: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A498Cu;
        goto label_3a498c;
    }
    ctx->pc = 0x3A4984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A498Cu);
        ctx->pc = 0x3A4988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4984u;
        // 0x3a4988: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4984u, 0x3A498Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A498Cu;
label_3a498c:
    // 0x3a498c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3a498cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3a4990:
    // 0x3a4990: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x3a4990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_3a4994:
    // 0x3a4994: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3a4994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3a4998:
    // 0x3a4998: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x3a4998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_3a499c:
    // 0x3a499c: 0x32220080  andi        $v0, $s1, 0x80
    ctx->pc = 0x3a499cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
label_3a49a0:
    // 0x3a49a0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_3a49a4:
    if (ctx->pc == 0x3A49A4u) {
        ctx->pc = 0x3A49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A49A0u;
        // 0x3a49a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A49A8u;
        goto label_3a49a8;
    }
    ctx->pc = 0x3A49A0u;
    {
        const bool branch_taken_0x3a49a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a49a0) {
            ctx->pc = 0x3A49A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A49A0u;
            // 0x3a49a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A49D4u;
            goto label_3a49d4;
        }
    }
    ctx->pc = 0x3A49A8u;
label_3a49a8:
    // 0x3a49a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a49a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a49ac:
    // 0x3a49ac: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3a49acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3a49b0:
    // 0x3a49b0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3a49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3a49b4:
    // 0x3a49b4: 0x40f809  jalr        $v0
label_3a49b8:
    if (ctx->pc == 0x3A49B8u) {
        ctx->pc = 0x3A49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A49B4u;
        // 0x3a49b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A49BCu;
        goto label_3a49bc;
    }
    ctx->pc = 0x3A49B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A49BCu);
        ctx->pc = 0x3A49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A49B4u;
        // 0x3a49b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A49B4u, 0x3A49BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A49BCu;
label_3a49bc:
    // 0x3a49bc: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x3a49bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3a49c0:
    // 0x3a49c0: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x3a49c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
label_3a49c4:
    // 0x3a49c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a49c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3a49c8:
    // 0x3a49c8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3a49c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3a49cc:
    // 0x3a49cc: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x3a49ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_3a49d0:
    // 0x3a49d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a49d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a49d4:
    // 0x3a49d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a49d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a49d8:
    // 0x3a49d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a49d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a49dc:
    // 0x3a49dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a49dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a49e0:
    // 0x3a49e0: 0x3e00008  jr          $ra
label_3a49e4:
    if (ctx->pc == 0x3A49E4u) {
        ctx->pc = 0x3A49E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A49E0u;
        // 0x3a49e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A49E8u;
        goto label_fallthrough_0x3a49e0;
    }
    ctx->pc = 0x3A49E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A49E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A49E0u;
        // 0x3a49e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A49E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a49e0:
    ctx->pc = 0x3A49E8u;
}
