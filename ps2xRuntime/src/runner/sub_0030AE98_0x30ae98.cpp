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

// Function: sub_0030AE98
// Address: 0x30ae98 - 0x30af30
void sub_0030AE98_0x30ae98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AE98_0x30ae98");
#endif

    switch (ctx->pc) {
        case 0x30aeccu: goto label_30aecc;
        case 0x30aee4u: goto label_30aee4;
        case 0x30af08u: goto label_30af08;
        case 0x30af14u: goto label_30af14;
        default: break;
    }

    ctx->pc = 0x30ae98u;

    // 0x30ae98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30ae98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30ae9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30aea0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30aea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30aea4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x30aea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x30aea8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x30aea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aeac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30aeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x30aeb0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x30aeb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aeb4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30aeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x30aeb8: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x30AEB8u;
    {
        const bool branch_taken_0x30aeb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AEB8u;
        // 0x30aebc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aeb8) {
            ctx->pc = 0x30AF14u;
            goto label_30af14;
        }
    }
    ctx->pc = 0x30AEC0u;
    // 0x30aec0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x30aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x30aec4: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x30AEC4u;
    SET_GPR_U32(ctx, 31, 0x30AECCu);
    ctx->pc = 0x30AEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AEC4u;
    // 0x30aec8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x30AEC4u, 0x30AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AECCu;
label_30aecc:
    // 0x30aecc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30aeccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aed0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x30aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x30aed4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30AED4u;
    {
        const bool branch_taken_0x30aed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AED4u;
        // 0x30aed8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aed4) {
            ctx->pc = 0x30AF18u;
            goto label_30af18;
        }
    }
    ctx->pc = 0x30AEDCu;
    // 0x30aedc: 0xc0c1956  jal         func_306558
    ctx->pc = 0x30AEDCu;
    SET_GPR_U32(ctx, 31, 0x30AEE4u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x30AEDCu, 0x30AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AEE4u;
label_30aee4:
    // 0x30aee4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30aee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aee8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30AEE8u;
    {
        const bool branch_taken_0x30aee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AEE8u;
        // 0x30aeec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aee8) {
            ctx->pc = 0x30AF08u;
            goto label_30af08;
        }
    }
    ctx->pc = 0x30AEF0u;
    // 0x30aef0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x30aef0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x30aef4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x30aef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30aef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aefc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30aefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30af00: 0xc0c2bcc  jal         func_30AF30
    ctx->pc = 0x30AF00u;
    SET_GPR_U32(ctx, 31, 0x30AF08u);
    ctx->pc = 0x30AF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AF00u;
    // 0x30af04: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AF30u, 0x30AF00u, 0x30AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF08u;
label_30af08:
    // 0x30af08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30af08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30af0c: 0xc059590  jal         func_165640
    ctx->pc = 0x30AF0Cu;
    SET_GPR_U32(ctx, 31, 0x30AF14u);
    ctx->pc = 0x30AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AF0Cu;
    // 0x30af10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x30AF0Cu, 0x30AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF14u;
label_30af14:
    // 0x30af14: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30af14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30af18:
    // 0x30af18: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30af18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30af1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30af1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30af20: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x30af20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30af24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30af24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30af28: 0x3e00008  jr          $ra
    ctx->pc = 0x30AF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AF28u;
        // 0x30af2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AF30u;
}
