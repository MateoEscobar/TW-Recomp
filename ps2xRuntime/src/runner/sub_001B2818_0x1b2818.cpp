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

// Function: sub_001B2818
// Address: 0x1b2818 - 0x1b28a0
void sub_001B2818_0x1b2818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2818_0x1b2818");
#endif

    switch (ctx->pc) {
        case 0x1b2818u: goto label_1b2818;
        case 0x1b281cu: goto label_1b281c;
        case 0x1b2820u: goto label_1b2820;
        case 0x1b2824u: goto label_1b2824;
        case 0x1b2828u: goto label_1b2828;
        case 0x1b282cu: goto label_1b282c;
        case 0x1b2830u: goto label_1b2830;
        case 0x1b2834u: goto label_1b2834;
        case 0x1b2838u: goto label_1b2838;
        case 0x1b283cu: goto label_1b283c;
        case 0x1b2840u: goto label_1b2840;
        case 0x1b2844u: goto label_1b2844;
        case 0x1b2848u: goto label_1b2848;
        case 0x1b284cu: goto label_1b284c;
        case 0x1b2850u: goto label_1b2850;
        case 0x1b2854u: goto label_1b2854;
        case 0x1b2858u: goto label_1b2858;
        case 0x1b285cu: goto label_1b285c;
        case 0x1b2860u: goto label_1b2860;
        case 0x1b2864u: goto label_1b2864;
        case 0x1b2868u: goto label_1b2868;
        case 0x1b286cu: goto label_1b286c;
        case 0x1b2870u: goto label_1b2870;
        case 0x1b2874u: goto label_1b2874;
        case 0x1b2878u: goto label_1b2878;
        case 0x1b287cu: goto label_1b287c;
        case 0x1b2880u: goto label_1b2880;
        case 0x1b2884u: goto label_1b2884;
        case 0x1b2888u: goto label_1b2888;
        case 0x1b288cu: goto label_1b288c;
        case 0x1b2890u: goto label_1b2890;
        case 0x1b2894u: goto label_1b2894;
        case 0x1b2898u: goto label_1b2898;
        case 0x1b289cu: goto label_1b289c;
        default: break;
    }

    ctx->pc = 0x1b2818u;

label_1b2818:
    // 0x1b2818: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b2818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b281c:
    // 0x1b281c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1b281cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1b2820:
    // 0x1b2820: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b2820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1b2824:
    // 0x1b2824: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b2824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1b2828:
    // 0x1b2828: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b2828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1b282c:
    // 0x1b282c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b282cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b2830:
    // 0x1b2830: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b2830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1b2834:
    // 0x1b2834: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b2834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1b2838:
    // 0x1b2838: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b2838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b283c:
    // 0x1b283c: 0x344235e0  ori         $v0, $v0, 0x35E0
    ctx->pc = 0x1b283cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13792);
label_1b2840:
    // 0x1b2840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b2844:
    // 0x1b2844: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1b2844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b2848:
    // 0x1b2848: 0xac7377b4  sw          $s3, 0x77B4($v1)
    ctx->pc = 0x1b2848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 30644), GPR_U32(ctx, 19));
label_1b284c:
    // 0x1b284c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b284cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2850:
    // 0x1b2850: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1b2850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2854:
    // 0x1b2854: 0x0  nop
    ctx->pc = 0x1b2854u;
    // NOP
label_1b2858:
    // 0x1b2858: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b2858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b285c:
    // 0x1b285c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b285cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b2860:
    // 0x1b2860: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b2860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b2864:
    // 0x1b2864: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1b2864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1b2868:
    // 0x1b2868: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1b2868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1b286c:
    // 0x1b286c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1b286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1b2870:
    // 0x1b2870: 0x40f809  jalr        $v0
label_1b2874:
    if (ctx->pc == 0x1B2874u) {
        ctx->pc = 0x1B2874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2870u;
        // 0x1b2874: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2878u;
        goto label_1b2878;
    }
    ctx->pc = 0x1B2870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B2878u);
        ctx->pc = 0x1B2874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2870u;
        // 0x1b2874: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2870u, 0x1B2878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B2878u;
label_1b2878:
    // 0x1b2878: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1b2878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b287c:
    // 0x1b287c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1b2880:
    if (ctx->pc == 0x1B2880u) {
        ctx->pc = 0x1B2880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B287Cu;
        // 0x1b2880: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2884u;
        goto label_1b2884;
    }
    ctx->pc = 0x1B287Cu;
    {
        const bool branch_taken_0x1b287c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B287Cu;
        // 0x1b2880: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b287c) {
            ctx->pc = 0x1B2858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2858;
        }
    }
    ctx->pc = 0x1B2884u;
label_1b2884:
    // 0x1b2884: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b2884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b2888:
    // 0x1b2888: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b2888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b288c:
    // 0x1b288c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b288cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b2890:
    // 0x1b2890: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b2890u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2894:
    // 0x1b2894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2898:
    // 0x1b2898: 0x3e00008  jr          $ra
label_1b289c:
    if (ctx->pc == 0x1B289Cu) {
        ctx->pc = 0x1B289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2898u;
        // 0x1b289c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B28A0u;
        goto label_fallthrough_0x1b2898;
    }
    ctx->pc = 0x1B2898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2898u;
        // 0x1b289c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b2898:
    ctx->pc = 0x1B28A0u;
}
