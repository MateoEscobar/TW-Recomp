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

// Function: sub_0046E038
// Address: 0x46e038 - 0x46e0c8
void sub_0046E038_0x46e038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046E038_0x46e038");
#endif

    switch (ctx->pc) {
        case 0x46e038u: goto label_46e038;
        case 0x46e03cu: goto label_46e03c;
        case 0x46e040u: goto label_46e040;
        case 0x46e044u: goto label_46e044;
        case 0x46e048u: goto label_46e048;
        case 0x46e04cu: goto label_46e04c;
        case 0x46e050u: goto label_46e050;
        case 0x46e054u: goto label_46e054;
        case 0x46e058u: goto label_46e058;
        case 0x46e05cu: goto label_46e05c;
        case 0x46e060u: goto label_46e060;
        case 0x46e064u: goto label_46e064;
        case 0x46e068u: goto label_46e068;
        case 0x46e06cu: goto label_46e06c;
        case 0x46e070u: goto label_46e070;
        case 0x46e074u: goto label_46e074;
        case 0x46e078u: goto label_46e078;
        case 0x46e07cu: goto label_46e07c;
        case 0x46e080u: goto label_46e080;
        case 0x46e084u: goto label_46e084;
        case 0x46e088u: goto label_46e088;
        case 0x46e08cu: goto label_46e08c;
        case 0x46e090u: goto label_46e090;
        case 0x46e094u: goto label_46e094;
        case 0x46e098u: goto label_46e098;
        case 0x46e09cu: goto label_46e09c;
        case 0x46e0a0u: goto label_46e0a0;
        case 0x46e0a4u: goto label_46e0a4;
        case 0x46e0a8u: goto label_46e0a8;
        case 0x46e0acu: goto label_46e0ac;
        case 0x46e0b0u: goto label_46e0b0;
        case 0x46e0b4u: goto label_46e0b4;
        case 0x46e0b8u: goto label_46e0b8;
        case 0x46e0bcu: goto label_46e0bc;
        case 0x46e0c0u: goto label_46e0c0;
        case 0x46e0c4u: goto label_46e0c4;
        default: break;
    }

    ctx->pc = 0x46e038u;

label_46e038:
    // 0x46e038: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x46e038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_46e03c:
    // 0x46e03c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x46e03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_46e040:
    // 0x46e040: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x46e040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_46e044:
    // 0x46e044: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x46e044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46e048:
    // 0x46e048: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x46e048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_46e04c:
    // 0x46e04c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x46e04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_46e050:
    // 0x46e050: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x46e050u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_46e054:
    // 0x46e054: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x46e054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_46e058:
    // 0x46e058: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x46e058u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46e05c:
    // 0x46e05c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46e05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46e060:
    // 0x46e060: 0x96300004  lhu         $s0, 0x4($s1)
    ctx->pc = 0x46e060u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_46e064:
    // 0x46e064: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x46e064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_46e068:
    // 0x46e068: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x46e068u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46e06c:
    // 0x46e06c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x46e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_46e070:
    // 0x46e070: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x46e070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_46e074:
    // 0x46e074: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_46e078:
    if (ctx->pc == 0x46E078u) {
        ctx->pc = 0x46E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E074u;
        // 0x46e078: 0x2229021  addu        $s2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E07Cu;
        goto label_46e07c;
    }
    ctx->pc = 0x46E074u;
    {
        const bool branch_taken_0x46e074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E074u;
        // 0x46e078: 0x2229021  addu        $s2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e074) {
            ctx->pc = 0x46E0A4u;
            goto label_46e0a4;
        }
    }
    ctx->pc = 0x46E07Cu;
label_46e07c:
    // 0x46e07c: 0x0  nop
    ctx->pc = 0x46e07cu;
    // NOP
label_46e080:
    // 0x46e080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46e080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46e084:
    // 0x46e084: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46e084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46e088:
    // 0x46e088: 0x280f809  jalr        $s4
label_46e08c:
    if (ctx->pc == 0x46E08Cu) {
        ctx->pc = 0x46E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E088u;
        // 0x46e08c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E090u;
        goto label_46e090;
    }
    ctx->pc = 0x46E088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x46E090u);
        ctx->pc = 0x46E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E088u;
        // 0x46e08c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E088u, 0x46E090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46E090u;
label_46e090:
    // 0x46e090: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46e094:
    if (ctx->pc == 0x46E094u) {
        ctx->pc = 0x46E094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E090u;
        // 0x46e094: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E098u;
        goto label_46e098;
    }
    ctx->pc = 0x46E090u;
    {
        const bool branch_taken_0x46e090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E090u;
        // 0x46e094: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e090) {
            ctx->pc = 0x46E0A4u;
            goto label_46e0a4;
        }
    }
    ctx->pc = 0x46E098u;
label_46e098:
    // 0x46e098: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x46e098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_46e09c:
    // 0x46e09c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_46e0a0:
    if (ctx->pc == 0x46E0A0u) {
        ctx->pc = 0x46E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E09Cu;
        // 0x46e0a0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E0A4u;
        goto label_46e0a4;
    }
    ctx->pc = 0x46E09Cu;
    {
        const bool branch_taken_0x46e09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E09Cu;
        // 0x46e0a0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e09c) {
            ctx->pc = 0x46E080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46e080;
        }
    }
    ctx->pc = 0x46E0A4u;
label_46e0a4:
    // 0x46e0a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46e0a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46e0a8:
    // 0x46e0a8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x46e0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46e0ac:
    // 0x46e0ac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x46e0acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46e0b0:
    // 0x46e0b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x46e0b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46e0b4:
    // 0x46e0b4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x46e0b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46e0b8:
    // 0x46e0b8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x46e0b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46e0bc:
    // 0x46e0bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46e0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46e0c0:
    // 0x46e0c0: 0x3e00008  jr          $ra
label_46e0c4:
    if (ctx->pc == 0x46E0C4u) {
        ctx->pc = 0x46E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E0C0u;
        // 0x46e0c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E0C8u;
        goto label_fallthrough_0x46e0c0;
    }
    ctx->pc = 0x46E0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E0C0u;
        // 0x46e0c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46e0c0:
    ctx->pc = 0x46E0C8u;
}
