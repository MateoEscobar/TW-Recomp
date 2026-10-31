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

// Function: sub_003E9828
// Address: 0x3e9828 - 0x3e98e8
void sub_003E9828_0x3e9828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9828_0x3e9828");
#endif

    switch (ctx->pc) {
        case 0x3e9828u: goto label_3e9828;
        case 0x3e982cu: goto label_3e982c;
        case 0x3e9830u: goto label_3e9830;
        case 0x3e9834u: goto label_3e9834;
        case 0x3e9838u: goto label_3e9838;
        case 0x3e983cu: goto label_3e983c;
        case 0x3e9840u: goto label_3e9840;
        case 0x3e9844u: goto label_3e9844;
        case 0x3e9848u: goto label_3e9848;
        case 0x3e984cu: goto label_3e984c;
        case 0x3e9850u: goto label_3e9850;
        case 0x3e9854u: goto label_3e9854;
        case 0x3e9858u: goto label_3e9858;
        case 0x3e985cu: goto label_3e985c;
        case 0x3e9860u: goto label_3e9860;
        case 0x3e9864u: goto label_3e9864;
        case 0x3e9868u: goto label_3e9868;
        case 0x3e986cu: goto label_3e986c;
        case 0x3e9870u: goto label_3e9870;
        case 0x3e9874u: goto label_3e9874;
        case 0x3e9878u: goto label_3e9878;
        case 0x3e987cu: goto label_3e987c;
        case 0x3e9880u: goto label_3e9880;
        case 0x3e9884u: goto label_3e9884;
        case 0x3e9888u: goto label_3e9888;
        case 0x3e988cu: goto label_3e988c;
        case 0x3e9890u: goto label_3e9890;
        case 0x3e9894u: goto label_3e9894;
        case 0x3e9898u: goto label_3e9898;
        case 0x3e989cu: goto label_3e989c;
        case 0x3e98a0u: goto label_3e98a0;
        case 0x3e98a4u: goto label_3e98a4;
        case 0x3e98a8u: goto label_3e98a8;
        case 0x3e98acu: goto label_3e98ac;
        case 0x3e98b0u: goto label_3e98b0;
        case 0x3e98b4u: goto label_3e98b4;
        case 0x3e98b8u: goto label_3e98b8;
        case 0x3e98bcu: goto label_3e98bc;
        case 0x3e98c0u: goto label_3e98c0;
        case 0x3e98c4u: goto label_3e98c4;
        case 0x3e98c8u: goto label_3e98c8;
        case 0x3e98ccu: goto label_3e98cc;
        case 0x3e98d0u: goto label_3e98d0;
        case 0x3e98d4u: goto label_3e98d4;
        case 0x3e98d8u: goto label_3e98d8;
        case 0x3e98dcu: goto label_3e98dc;
        case 0x3e98e0u: goto label_3e98e0;
        case 0x3e98e4u: goto label_3e98e4;
        default: break;
    }

    ctx->pc = 0x3e9828u;

label_3e9828:
    // 0x3e9828: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e9828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3e982c:
    // 0x3e982c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3e982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3e9830:
    // 0x3e9830: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e9830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e9834:
    // 0x3e9834: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3e9834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e9838:
    // 0x3e9838: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3e9838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3e983c:
    // 0x3e983c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e983cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9840:
    // 0x3e9840: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3e9840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3e9844:
    // 0x3e9844: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e9844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e9848:
    // 0x3e9848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e9848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e984c:
    // 0x3e984c: 0xc0ea146  jal         func_3A8518
label_3e9850:
    if (ctx->pc == 0x3E9850u) {
        ctx->pc = 0x3E9850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E984Cu;
        // 0x3e9850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9854u;
        goto label_3e9854;
    }
    ctx->pc = 0x3E984Cu;
    SET_GPR_U32(ctx, 31, 0x3E9854u);
    ctx->pc = 0x3E9850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E984Cu;
    // 0x3e9850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E984Cu, 0x3E9854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9854u;
label_3e9854:
    // 0x3e9854: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e9854u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e9858:
    // 0x3e9858: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3e9858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3e985c:
    // 0x3e985c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3e9860:
    if (ctx->pc == 0x3E9860u) {
        ctx->pc = 0x3E9864u;
        goto label_3e9864;
    }
    ctx->pc = 0x3E985Cu;
    {
        const bool branch_taken_0x3e985c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e985c) {
            ctx->pc = 0x3E9890u;
            goto label_3e9890;
        }
    }
    ctx->pc = 0x3E9864u;
label_3e9864:
    // 0x3e9864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e9864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e9868:
    // 0x3e9868: 0xc0ea16a  jal         func_3A85A8
label_3e986c:
    if (ctx->pc == 0x3E986Cu) {
        ctx->pc = 0x3E986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9868u;
        // 0x3e986c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9870u;
        goto label_3e9870;
    }
    ctx->pc = 0x3E9868u;
    SET_GPR_U32(ctx, 31, 0x3E9870u);
    ctx->pc = 0x3E986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9868u;
    // 0x3e986c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3E9868u, 0x3E9870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9870u;
label_3e9870:
    // 0x3e9870: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x3e9870u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3e9874:
    // 0x3e9874: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e9874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e9878:
    // 0x3e9878: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3e9878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e987c:
    // 0x3e987c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3e987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3e9880:
    // 0x3e9880: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3e9880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3e9884:
    // 0x3e9884: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3e9884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3e9888:
    // 0x3e9888: 0x60f809  jalr        $v1
label_3e988c:
    if (ctx->pc == 0x3E988Cu) {
        ctx->pc = 0x3E988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9888u;
        // 0x3e988c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9890u;
        goto label_3e9890;
    }
    ctx->pc = 0x3E9888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E9890u);
        ctx->pc = 0x3E988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9888u;
        // 0x3e988c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9888u, 0x3E9890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9890u;
label_3e9890:
    // 0x3e9890: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
label_3e9894:
    if (ctx->pc == 0x3E9894u) {
        ctx->pc = 0x3E9894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9890u;
        // 0x3e9894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9898u;
        goto label_3e9898;
    }
    ctx->pc = 0x3E9890u;
    {
        const bool branch_taken_0x3e9890 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9890u;
        // 0x3e9894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9890) {
            ctx->pc = 0x3E98B4u;
            goto label_3e98b4;
        }
    }
    ctx->pc = 0x3E9898u;
label_3e9898:
    // 0x3e9898: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3e9898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3e989c:
    // 0x3e989c: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x3e989cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
label_3e98a0:
    // 0x3e98a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3e98a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3e98a4:
    // 0x3e98a4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3e98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3e98a8:
    // 0x3e98a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e98a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e98ac:
    // 0x3e98ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_3e98b0:
    if (ctx->pc == 0x3E98B0u) {
        ctx->pc = 0x3E98B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E98ACu;
        // 0x3e98b0: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E98B4u;
        goto label_3e98b4;
    }
    ctx->pc = 0x3E98ACu;
    {
        const bool branch_taken_0x3e98ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E98B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E98ACu;
        // 0x3e98b0: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e98ac) {
            ctx->pc = 0x3E98C8u;
            goto label_3e98c8;
        }
    }
    ctx->pc = 0x3E98B4u;
label_3e98b4:
    // 0x3e98b4: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x3e98b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
label_3e98b8:
    // 0x3e98b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3e98b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3e98bc:
    // 0x3e98bc: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3e98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3e98c0:
    // 0x3e98c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3e98c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3e98c4:
    // 0x3e98c4: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3e98c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_3e98c8:
    // 0x3e98c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3e98c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e98cc:
    // 0x3e98cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3e98ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e98d0:
    // 0x3e98d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e98d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e98d4:
    // 0x3e98d4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3e98d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e98d8:
    // 0x3e98d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e98d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e98dc:
    // 0x3e98dc: 0x3e00008  jr          $ra
label_3e98e0:
    if (ctx->pc == 0x3E98E0u) {
        ctx->pc = 0x3E98E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E98DCu;
        // 0x3e98e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E98E4u;
        goto label_3e98e4;
    }
    ctx->pc = 0x3E98DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E98E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E98DCu;
        // 0x3e98e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E98DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E98E4u;
label_3e98e4:
    // 0x3e98e4: 0x0  nop
    ctx->pc = 0x3e98e4u;
    // NOP
    ctx->pc = 0x3e98e8u;
}
