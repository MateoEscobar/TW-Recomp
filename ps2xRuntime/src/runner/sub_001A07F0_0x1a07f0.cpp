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

// Function: sub_001A07F0
// Address: 0x1a07f0 - 0x1a08c8
void sub_001A07F0_0x1a07f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A07F0_0x1a07f0");
#endif

    switch (ctx->pc) {
        case 0x1a07f0u: goto label_1a07f0;
        case 0x1a07f4u: goto label_1a07f4;
        case 0x1a07f8u: goto label_1a07f8;
        case 0x1a07fcu: goto label_1a07fc;
        case 0x1a0800u: goto label_1a0800;
        case 0x1a0804u: goto label_1a0804;
        case 0x1a0808u: goto label_1a0808;
        case 0x1a080cu: goto label_1a080c;
        case 0x1a0810u: goto label_1a0810;
        case 0x1a0814u: goto label_1a0814;
        case 0x1a0818u: goto label_1a0818;
        case 0x1a081cu: goto label_1a081c;
        case 0x1a0820u: goto label_1a0820;
        case 0x1a0824u: goto label_1a0824;
        case 0x1a0828u: goto label_1a0828;
        case 0x1a082cu: goto label_1a082c;
        case 0x1a0830u: goto label_1a0830;
        case 0x1a0834u: goto label_1a0834;
        case 0x1a0838u: goto label_1a0838;
        case 0x1a083cu: goto label_1a083c;
        case 0x1a0840u: goto label_1a0840;
        case 0x1a0844u: goto label_1a0844;
        case 0x1a0848u: goto label_1a0848;
        case 0x1a084cu: goto label_1a084c;
        case 0x1a0850u: goto label_1a0850;
        case 0x1a0854u: goto label_1a0854;
        case 0x1a0858u: goto label_1a0858;
        case 0x1a085cu: goto label_1a085c;
        case 0x1a0860u: goto label_1a0860;
        case 0x1a0864u: goto label_1a0864;
        case 0x1a0868u: goto label_1a0868;
        case 0x1a086cu: goto label_1a086c;
        case 0x1a0870u: goto label_1a0870;
        case 0x1a0874u: goto label_1a0874;
        case 0x1a0878u: goto label_1a0878;
        case 0x1a087cu: goto label_1a087c;
        case 0x1a0880u: goto label_1a0880;
        case 0x1a0884u: goto label_1a0884;
        case 0x1a0888u: goto label_1a0888;
        case 0x1a088cu: goto label_1a088c;
        case 0x1a0890u: goto label_1a0890;
        case 0x1a0894u: goto label_1a0894;
        case 0x1a0898u: goto label_1a0898;
        case 0x1a089cu: goto label_1a089c;
        case 0x1a08a0u: goto label_1a08a0;
        case 0x1a08a4u: goto label_1a08a4;
        case 0x1a08a8u: goto label_1a08a8;
        case 0x1a08acu: goto label_1a08ac;
        case 0x1a08b0u: goto label_1a08b0;
        case 0x1a08b4u: goto label_1a08b4;
        case 0x1a08b8u: goto label_1a08b8;
        case 0x1a08bcu: goto label_1a08bc;
        case 0x1a08c0u: goto label_1a08c0;
        case 0x1a08c4u: goto label_1a08c4;
        default: break;
    }

    ctx->pc = 0x1a07f0u;

label_1a07f0:
    // 0x1a07f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a07f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a07f4:
    // 0x1a07f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a07f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a07f8:
    // 0x1a07f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a07f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1a07fc:
    // 0x1a07fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a07fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a0800:
    // 0x1a0800: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0804:
    // 0x1a0804: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a0804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1a0808:
    // 0x1a0808: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x1a0808u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_1a080c:
    // 0x1a080c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a080cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1a0810:
    // 0x1a0810: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x1a0810u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_1a0814:
    // 0x1a0814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a0818:
    // 0x1a0818: 0x26300044  addiu       $s0, $s1, 0x44
    ctx->pc = 0x1a0818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
label_1a081c:
    // 0x1a081c: 0x26260070  addiu       $a2, $s1, 0x70
    ctx->pc = 0x1a081cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1a0820:
    // 0x1a0820: 0x8cc20240  lw          $v0, 0x240($a2)
    ctx->pc = 0x1a0820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 576)));
label_1a0824:
    // 0x1a0824: 0x1445001c  bne         $v0, $a1, . + 4 + (0x1C << 2)
label_1a0828:
    if (ctx->pc == 0x1A0828u) {
        ctx->pc = 0x1A0828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0824u;
        // 0x1a0828: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A082Cu;
        goto label_1a082c;
    }
    ctx->pc = 0x1A0824u;
    {
        const bool branch_taken_0x1a0824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A0828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0824u;
        // 0x1a0828: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0824) {
            ctx->pc = 0x1A0898u;
            goto label_1a0898;
        }
    }
    ctx->pc = 0x1A082Cu;
label_1a082c:
    // 0x1a082c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a082cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a0830:
    // 0x1a0830: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x1a0830u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a0834:
    // 0x1a0834: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1a0834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1a0838:
    // 0x1a0838: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1a0838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1a083c:
    // 0x1a083c: 0x60f809  jalr        $v1
label_1a0840:
    if (ctx->pc == 0x1A0840u) {
        ctx->pc = 0x1A0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A083Cu;
        // 0x1a0840: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0844u;
        goto label_1a0844;
    }
    ctx->pc = 0x1A083Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A0844u);
        ctx->pc = 0x1A0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A083Cu;
        // 0x1a0840: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A083Cu, 0x1A0844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0844u;
label_1a0844:
    // 0x1a0844: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1a0844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_1a0848:
    // 0x1a0848: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1a0848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1a084c:
    // 0x1a084c: 0x26240044  addiu       $a0, $s1, 0x44
    ctx->pc = 0x1a084cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
label_1a0850:
    // 0x1a0850: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0854:
    // 0x1a0854: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1a0854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1a0858:
    // 0x1a0858: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1a0858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_1a085c:
    // 0x1a085c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a0860:
    // 0x1a0860: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1a0860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_1a0864:
    // 0x1a0864: 0x0  nop
    ctx->pc = 0x1a0864u;
    // NOP
label_1a0868:
    // 0x1a0868: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a0868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a086c:
    // 0x1a086c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
label_1a0870:
    if (ctx->pc == 0x1A0870u) {
        ctx->pc = 0x1A0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A086Cu;
        // 0x1a0870: 0x263102b  sltu        $v0, $s3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0874u;
        goto label_1a0874;
    }
    ctx->pc = 0x1A086Cu;
    {
        const bool branch_taken_0x1a086c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A086Cu;
        // 0x1a0870: 0x263102b  sltu        $v0, $s3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a086c) {
            ctx->pc = 0x1A0880u;
            goto label_1a0880;
        }
    }
    ctx->pc = 0x1A0874u;
label_1a0874:
    // 0x1a0874: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1a0878:
    if (ctx->pc == 0x1A0878u) {
        ctx->pc = 0x1A0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0874u;
        // 0x1a0878: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A087Cu;
        goto label_1a087c;
    }
    ctx->pc = 0x1A0874u;
    {
        const bool branch_taken_0x1a0874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0874u;
        // 0x1a0878: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0874) {
            ctx->pc = 0x1A0880u;
            goto label_1a0880;
        }
    }
    ctx->pc = 0x1A087Cu;
label_1a087c:
    // 0x1a087c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a087cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1a0880:
    // 0x1a0880: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a0880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a0884:
    // 0x1a0884: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x1a0884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1a0888:
    // 0x1a0888: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1a088c:
    if (ctx->pc == 0x1A088Cu) {
        ctx->pc = 0x1A088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0888u;
        // 0x1a088c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0890u;
        goto label_1a0890;
    }
    ctx->pc = 0x1A0888u;
    {
        const bool branch_taken_0x1a0888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0888u;
        // 0x1a088c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0888) {
            ctx->pc = 0x1A0868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0868;
        }
    }
    ctx->pc = 0x1A0890u;
label_1a0890:
    // 0x1a0890: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a0894:
    if (ctx->pc == 0x1A0894u) {
        ctx->pc = 0x1A0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0890u;
        // 0x1a0894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0898u;
        goto label_1a0898;
    }
    ctx->pc = 0x1A0890u;
    {
        const bool branch_taken_0x1a0890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0890u;
        // 0x1a0894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0890) {
            ctx->pc = 0x1A08ACu;
            goto label_1a08ac;
        }
    }
    ctx->pc = 0x1A0898u;
label_1a0898:
    // 0x1a0898: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1a0898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1a089c:
    // 0x1a089c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1a089cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1a08a0:
    // 0x1a08a0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_1a08a4:
    if (ctx->pc == 0x1A08A4u) {
        ctx->pc = 0x1A08A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08A0u;
        // 0x1a08a4: 0x24c60250  addiu       $a2, $a2, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A08A8u;
        goto label_1a08a8;
    }
    ctx->pc = 0x1A08A0u;
    {
        const bool branch_taken_0x1a08a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A08A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08A0u;
        // 0x1a08a4: 0x24c60250  addiu       $a2, $a2, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a08a0) {
            ctx->pc = 0x1A0820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0820;
        }
    }
    ctx->pc = 0x1A08A8u;
label_1a08a8:
    // 0x1a08a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a08a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a08ac:
    // 0x1a08ac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a08acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a08b0:
    // 0x1a08b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a08b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a08b4:
    // 0x1a08b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a08b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a08b8:
    // 0x1a08b8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a08b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a08bc:
    // 0x1a08bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a08bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a08c0:
    // 0x1a08c0: 0x3e00008  jr          $ra
label_1a08c4:
    if (ctx->pc == 0x1A08C4u) {
        ctx->pc = 0x1A08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08C0u;
        // 0x1a08c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A08C8u;
        goto label_fallthrough_0x1a08c0;
    }
    ctx->pc = 0x1A08C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08C0u;
        // 0x1a08c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A08C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a08c0:
    ctx->pc = 0x1A08C8u;
}
