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

// Function: sub_0030E028
// Address: 0x30e028 - 0x30e0c0
void sub_0030E028_0x30e028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E028_0x30e028");
#endif

    switch (ctx->pc) {
        case 0x30e05cu: goto label_30e05c;
        case 0x30e074u: goto label_30e074;
        case 0x30e098u: goto label_30e098;
        case 0x30e0a4u: goto label_30e0a4;
        default: break;
    }

    ctx->pc = 0x30e028u;

    // 0x30e028: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30e028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30e02c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30e030: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30e030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30e034: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x30e034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x30e038: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x30e038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e03c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30e03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x30e040: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x30e040u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e044: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30e044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x30e048: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x30E048u;
    {
        const bool branch_taken_0x30e048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E048u;
        // 0x30e04c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e048) {
            ctx->pc = 0x30E0A4u;
            goto label_30e0a4;
        }
    }
    ctx->pc = 0x30E050u;
    // 0x30e050: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x30e050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x30e054: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x30E054u;
    SET_GPR_U32(ctx, 31, 0x30E05Cu);
    ctx->pc = 0x30E058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E054u;
    // 0x30e058: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x30E054u, 0x30E05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E05Cu;
label_30e05c:
    // 0x30e05c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30e05cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e060: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x30e060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x30e064: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30E064u;
    {
        const bool branch_taken_0x30e064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E064u;
        // 0x30e068: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e064) {
            ctx->pc = 0x30E0A8u;
            goto label_30e0a8;
        }
    }
    ctx->pc = 0x30E06Cu;
    // 0x30e06c: 0xc0c1956  jal         func_306558
    ctx->pc = 0x30E06Cu;
    SET_GPR_U32(ctx, 31, 0x30E074u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x30E06Cu, 0x30E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E074u;
label_30e074:
    // 0x30e074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30e074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e078: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30E078u;
    {
        const bool branch_taken_0x30e078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E078u;
        // 0x30e07c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e078) {
            ctx->pc = 0x30E098u;
            goto label_30e098;
        }
    }
    ctx->pc = 0x30E080u;
    // 0x30e080: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x30e080u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x30e084: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x30e084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30e088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e08c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30e08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e090: 0xc0c3830  jal         func_30E0C0
    ctx->pc = 0x30E090u;
    SET_GPR_U32(ctx, 31, 0x30E098u);
    ctx->pc = 0x30E094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E090u;
    // 0x30e094: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E0C0u, 0x30E090u, 0x30E098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E098u;
label_30e098:
    // 0x30e098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30e098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e09c: 0xc059590  jal         func_165640
    ctx->pc = 0x30E09Cu;
    SET_GPR_U32(ctx, 31, 0x30E0A4u);
    ctx->pc = 0x30E0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E09Cu;
    // 0x30e0a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x30E09Cu, 0x30E0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E0A4u;
label_30e0a4:
    // 0x30e0a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30e0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30e0a8:
    // 0x30e0a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30e0a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30e0ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30e0acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e0b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x30e0b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e0b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30e0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x30E0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E0B8u;
        // 0x30e0bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E0C0u;
}
