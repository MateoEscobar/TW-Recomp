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

// Function: sub_001E4820
// Address: 0x1e4820 - 0x1e4908
void sub_001E4820_0x1e4820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4820_0x1e4820");
#endif

    switch (ctx->pc) {
        case 0x1e4820u: goto label_1e4820;
        case 0x1e4824u: goto label_1e4824;
        case 0x1e4828u: goto label_1e4828;
        case 0x1e482cu: goto label_1e482c;
        case 0x1e4830u: goto label_1e4830;
        case 0x1e4834u: goto label_1e4834;
        case 0x1e4838u: goto label_1e4838;
        case 0x1e483cu: goto label_1e483c;
        case 0x1e4840u: goto label_1e4840;
        case 0x1e4844u: goto label_1e4844;
        case 0x1e4848u: goto label_1e4848;
        case 0x1e484cu: goto label_1e484c;
        case 0x1e4850u: goto label_1e4850;
        case 0x1e4854u: goto label_1e4854;
        case 0x1e4858u: goto label_1e4858;
        case 0x1e485cu: goto label_1e485c;
        case 0x1e4860u: goto label_1e4860;
        case 0x1e4864u: goto label_1e4864;
        case 0x1e4868u: goto label_1e4868;
        case 0x1e486cu: goto label_1e486c;
        case 0x1e4870u: goto label_1e4870;
        case 0x1e4874u: goto label_1e4874;
        case 0x1e4878u: goto label_1e4878;
        case 0x1e487cu: goto label_1e487c;
        case 0x1e4880u: goto label_1e4880;
        case 0x1e4884u: goto label_1e4884;
        case 0x1e4888u: goto label_1e4888;
        case 0x1e488cu: goto label_1e488c;
        case 0x1e4890u: goto label_1e4890;
        case 0x1e4894u: goto label_1e4894;
        case 0x1e4898u: goto label_1e4898;
        case 0x1e489cu: goto label_1e489c;
        case 0x1e48a0u: goto label_1e48a0;
        case 0x1e48a4u: goto label_1e48a4;
        case 0x1e48a8u: goto label_1e48a8;
        case 0x1e48acu: goto label_1e48ac;
        case 0x1e48b0u: goto label_1e48b0;
        case 0x1e48b4u: goto label_1e48b4;
        case 0x1e48b8u: goto label_1e48b8;
        case 0x1e48bcu: goto label_1e48bc;
        case 0x1e48c0u: goto label_1e48c0;
        case 0x1e48c4u: goto label_1e48c4;
        case 0x1e48c8u: goto label_1e48c8;
        case 0x1e48ccu: goto label_1e48cc;
        case 0x1e48d0u: goto label_1e48d0;
        case 0x1e48d4u: goto label_1e48d4;
        case 0x1e48d8u: goto label_1e48d8;
        case 0x1e48dcu: goto label_1e48dc;
        case 0x1e48e0u: goto label_1e48e0;
        case 0x1e48e4u: goto label_1e48e4;
        case 0x1e48e8u: goto label_1e48e8;
        case 0x1e48ecu: goto label_1e48ec;
        case 0x1e48f0u: goto label_1e48f0;
        case 0x1e48f4u: goto label_1e48f4;
        case 0x1e48f8u: goto label_1e48f8;
        case 0x1e48fcu: goto label_1e48fc;
        case 0x1e4900u: goto label_1e4900;
        case 0x1e4904u: goto label_1e4904;
        default: break;
    }

    ctx->pc = 0x1e4820u;

label_1e4820:
    // 0x1e4820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e4820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e4824:
    // 0x1e4824: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e4824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1e4828:
    // 0x1e4828: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e4828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e482c:
    // 0x1e482c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e482cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e4830:
    // 0x1e4830: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e4830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1e4834:
    // 0x1e4834: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e4834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4838:
    // 0x1e4838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e483c:
    // 0x1e483c: 0x26501c60  addiu       $s0, $s2, 0x1C60
    ctx->pc = 0x1e483cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 7264));
label_1e4840:
    // 0x1e4840: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e4840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4844:
    // 0x1e4844: 0x92420130  lbu         $v0, 0x130($s2)
    ctx->pc = 0x1e4844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 304)));
label_1e4848:
    // 0x1e4848: 0x26510140  addiu       $s1, $s2, 0x140
    ctx->pc = 0x1e4848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
label_1e484c:
    // 0x1e484c: 0xc078d9c  jal         func_1E3670
label_1e4850:
    if (ctx->pc == 0x1E4850u) {
        ctx->pc = 0x1E4850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E484Cu;
        // 0x1e4850: 0xa2420130  sb          $v0, 0x130($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 304), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4854u;
        goto label_1e4854;
    }
    ctx->pc = 0x1E484Cu;
    SET_GPR_U32(ctx, 31, 0x1E4854u);
    ctx->pc = 0x1E4850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E484Cu;
    // 0x1e4850: 0xa2420130  sb          $v0, 0x130($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 304), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3670u, 0x1E484Cu, 0x1E4854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4854u;
label_1e4854:
    // 0x1e4854: 0x92450130  lbu         $a1, 0x130($s2)
    ctx->pc = 0x1e4854u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 304)));
label_1e4858:
    // 0x1e4858: 0xc06898e  jal         func_1A2638
label_1e485c:
    if (ctx->pc == 0x1E485Cu) {
        ctx->pc = 0x1E485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4858u;
        // 0x1e485c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4860u;
        goto label_1e4860;
    }
    ctx->pc = 0x1E4858u;
    SET_GPR_U32(ctx, 31, 0x1E4860u);
    ctx->pc = 0x1E485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4858u;
    // 0x1e485c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x1E4858u, 0x1E4860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4860u;
label_1e4860:
    // 0x1e4860: 0xc068998  jal         func_1A2660
label_1e4864:
    if (ctx->pc == 0x1E4864u) {
        ctx->pc = 0x1E4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4860u;
        // 0x1e4864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4868u;
        goto label_1e4868;
    }
    ctx->pc = 0x1E4860u;
    SET_GPR_U32(ctx, 31, 0x1E4868u);
    ctx->pc = 0x1E4864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4860u;
    // 0x1e4864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1E4860u, 0x1E4868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4868u;
label_1e4868:
    // 0x1e4868: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e4868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e486c:
    // 0x1e486c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e486cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e4870:
    // 0x1e4870: 0x92450130  lbu         $a1, 0x130($s2)
    ctx->pc = 0x1e4870u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 304)));
label_1e4874:
    // 0x1e4874: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1e4874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1e4878:
    // 0x1e4878: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1e4878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1e487c:
    // 0x1e487c: 0x60f809  jalr        $v1
label_1e4880:
    if (ctx->pc == 0x1E4880u) {
        ctx->pc = 0x1E4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E487Cu;
        // 0x1e4880: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4884u;
        goto label_1e4884;
    }
    ctx->pc = 0x1E487Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E4884u);
        ctx->pc = 0x1E4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E487Cu;
        // 0x1e4880: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E487Cu, 0x1E4884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4884u;
label_1e4884:
    // 0x1e4884: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e4884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4888:
    // 0x1e4888: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1e4888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1e488c:
    // 0x1e488c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1e488cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1e4890:
    // 0x1e4890: 0x60f809  jalr        $v1
label_1e4894:
    if (ctx->pc == 0x1E4894u) {
        ctx->pc = 0x1E4894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4890u;
        // 0x1e4894: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4898u;
        goto label_1e4898;
    }
    ctx->pc = 0x1E4890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E4898u);
        ctx->pc = 0x1E4894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4890u;
        // 0x1e4894: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4890u, 0x1E4898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4898u;
label_1e4898:
    // 0x1e4898: 0x2e620007  sltiu       $v0, $s3, 0x7
    ctx->pc = 0x1e4898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1e489c:
    // 0x1e489c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1e48a0:
    if (ctx->pc == 0x1E48A0u) {
        ctx->pc = 0x1E48A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E489Cu;
        // 0x1e48a0: 0x263101f0  addiu       $s1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E48A4u;
        goto label_1e48a4;
    }
    ctx->pc = 0x1E489Cu;
    {
        const bool branch_taken_0x1e489c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E48A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E489Cu;
        // 0x1e48a0: 0x263101f0  addiu       $s1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e489c) {
            ctx->pc = 0x1E4868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4868;
        }
    }
    ctx->pc = 0x1E48A4u;
label_1e48a4:
    // 0x1e48a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e48a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e48a8:
    // 0x1e48a8: 0x26500ed0  addiu       $s0, $s2, 0xED0
    ctx->pc = 0x1e48a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3792));
label_1e48ac:
    // 0x1e48ac: 0x0  nop
    ctx->pc = 0x1e48acu;
    // NOP
label_1e48b0:
    // 0x1e48b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e48b4:
    // 0x1e48b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e48b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e48b8:
    // 0x1e48b8: 0x92450130  lbu         $a1, 0x130($s2)
    ctx->pc = 0x1e48b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 304)));
label_1e48bc:
    // 0x1e48bc: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1e48bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1e48c0:
    // 0x1e48c0: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1e48c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1e48c4:
    // 0x1e48c4: 0x60f809  jalr        $v1
label_1e48c8:
    if (ctx->pc == 0x1E48C8u) {
        ctx->pc = 0x1E48C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48C4u;
        // 0x1e48c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E48CCu;
        goto label_1e48cc;
    }
    ctx->pc = 0x1E48C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E48CCu);
        ctx->pc = 0x1E48C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48C4u;
        // 0x1e48c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E48C4u, 0x1E48CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E48CCu;
label_1e48cc:
    // 0x1e48cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e48ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e48d0:
    // 0x1e48d0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1e48d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1e48d4:
    // 0x1e48d4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1e48d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1e48d8:
    // 0x1e48d8: 0x60f809  jalr        $v1
label_1e48dc:
    if (ctx->pc == 0x1E48DCu) {
        ctx->pc = 0x1E48DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48D8u;
        // 0x1e48dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E48E0u;
        goto label_1e48e0;
    }
    ctx->pc = 0x1E48D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E48E0u);
        ctx->pc = 0x1E48DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48D8u;
        // 0x1e48dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E48D8u, 0x1E48E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E48E0u;
label_1e48e0:
    // 0x1e48e0: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x1e48e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1e48e4:
    // 0x1e48e4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1e48e8:
    if (ctx->pc == 0x1E48E8u) {
        ctx->pc = 0x1E48E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48E4u;
        // 0x1e48e8: 0x261001f0  addiu       $s0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E48ECu;
        goto label_1e48ec;
    }
    ctx->pc = 0x1E48E4u;
    {
        const bool branch_taken_0x1e48e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E48E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48E4u;
        // 0x1e48e8: 0x261001f0  addiu       $s0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48e4) {
            ctx->pc = 0x1E48B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e48b0;
        }
    }
    ctx->pc = 0x1E48ECu;
label_1e48ec:
    // 0x1e48ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e48ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e48f0:
    // 0x1e48f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e48f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e48f4:
    // 0x1e48f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e48f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e48f8:
    // 0x1e48f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e48f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e48fc:
    // 0x1e48fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e48fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4900:
    // 0x1e4900: 0x3e00008  jr          $ra
label_1e4904:
    if (ctx->pc == 0x1E4904u) {
        ctx->pc = 0x1E4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4900u;
        // 0x1e4904: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4908u;
        goto label_fallthrough_0x1e4900;
    }
    ctx->pc = 0x1E4900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4900u;
        // 0x1e4904: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e4900:
    ctx->pc = 0x1E4908u;
}
