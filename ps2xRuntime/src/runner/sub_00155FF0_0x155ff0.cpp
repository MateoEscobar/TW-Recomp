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

// Function: sub_00155FF0
// Address: 0x155ff0 - 0x156078
void sub_00155FF0_0x155ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155FF0_0x155ff0");
#endif

    switch (ctx->pc) {
        case 0x155ff0u: goto label_155ff0;
        case 0x155ff4u: goto label_155ff4;
        case 0x155ff8u: goto label_155ff8;
        case 0x155ffcu: goto label_155ffc;
        case 0x156000u: goto label_156000;
        case 0x156004u: goto label_156004;
        case 0x156008u: goto label_156008;
        case 0x15600cu: goto label_15600c;
        case 0x156010u: goto label_156010;
        case 0x156014u: goto label_156014;
        case 0x156018u: goto label_156018;
        case 0x15601cu: goto label_15601c;
        case 0x156020u: goto label_156020;
        case 0x156024u: goto label_156024;
        case 0x156028u: goto label_156028;
        case 0x15602cu: goto label_15602c;
        case 0x156030u: goto label_156030;
        case 0x156034u: goto label_156034;
        case 0x156038u: goto label_156038;
        case 0x15603cu: goto label_15603c;
        case 0x156040u: goto label_156040;
        case 0x156044u: goto label_156044;
        case 0x156048u: goto label_156048;
        case 0x15604cu: goto label_15604c;
        case 0x156050u: goto label_156050;
        case 0x156054u: goto label_156054;
        case 0x156058u: goto label_156058;
        case 0x15605cu: goto label_15605c;
        case 0x156060u: goto label_156060;
        case 0x156064u: goto label_156064;
        case 0x156068u: goto label_156068;
        case 0x15606cu: goto label_15606c;
        case 0x156070u: goto label_156070;
        case 0x156074u: goto label_156074;
        default: break;
    }

    ctx->pc = 0x155ff0u;

label_155ff0:
    // 0x155ff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x155ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_155ff4:
    // 0x155ff4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x155ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_155ff8:
    // 0x155ff8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x155ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_155ffc:
    // 0x155ffc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x155ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_156000:
    // 0x156000: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x156000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_156004:
    // 0x156004: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x156004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_156008:
    // 0x156008: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x156008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_15600c:
    // 0x15600c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15600cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_156010:
    // 0x156010: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x156010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156014:
    // 0x156014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_156018:
    // 0x156018: 0x2452deb8  addiu       $s2, $v0, -0x2148
    ctx->pc = 0x156018u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_15601c:
    // 0x15601c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x15601cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_156020:
    // 0x156020: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x156020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_156024:
    // 0x156024: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x156024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_156028:
    // 0x156028: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x156028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_15602c:
    // 0x15602c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15602cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_156030:
    // 0x156030: 0xc063262  jal         func_18C988
label_156034:
    if (ctx->pc == 0x156034u) {
        ctx->pc = 0x156034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156030u;
        // 0x156034: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156038u;
        goto label_156038;
    }
    ctx->pc = 0x156030u;
    SET_GPR_U32(ctx, 31, 0x156038u);
    ctx->pc = 0x156034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156030u;
    // 0x156034: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C988u, 0x156030u, 0x156038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156038u;
label_156038:
    // 0x156038: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x156038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_15603c:
    // 0x15603c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_156040:
    if (ctx->pc == 0x156040u) {
        ctx->pc = 0x156040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15603Cu;
        // 0x156040: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156044u;
        goto label_156044;
    }
    ctx->pc = 0x15603Cu;
    {
        const bool branch_taken_0x15603c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15603c) {
            ctx->pc = 0x156040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15603Cu;
            // 0x156040: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156020;
        }
    }
    ctx->pc = 0x156044u;
label_156044:
    // 0x156044: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x156044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_156048:
    // 0x156048: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x156048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_15604c:
    // 0x15604c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x15604cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_156050:
    // 0x156050: 0x60f809  jalr        $v1
label_156054:
    if (ctx->pc == 0x156054u) {
        ctx->pc = 0x156054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156050u;
        // 0x156054: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156058u;
        goto label_156058;
    }
    ctx->pc = 0x156050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x156058u);
        ctx->pc = 0x156054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156050u;
        // 0x156054: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156050u, 0x156058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156058u;
label_156058:
    // 0x156058: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x156058u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_15605c:
    // 0x15605c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15605cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_156060:
    // 0x156060: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x156060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_156064:
    // 0x156064: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x156064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_156068:
    // 0x156068: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x156068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15606c:
    // 0x15606c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15606cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_156070:
    // 0x156070: 0x3e00008  jr          $ra
label_156074:
    if (ctx->pc == 0x156074u) {
        ctx->pc = 0x156074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156070u;
        // 0x156074: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156078u;
        goto label_fallthrough_0x156070;
    }
    ctx->pc = 0x156070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156070u;
        // 0x156074: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x156070:
    ctx->pc = 0x156078u;
}
