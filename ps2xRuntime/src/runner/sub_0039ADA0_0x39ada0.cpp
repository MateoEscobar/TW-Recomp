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

// Function: sub_0039ADA0
// Address: 0x39ada0 - 0x39ae48
void sub_0039ADA0_0x39ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039ADA0_0x39ada0");
#endif

    switch (ctx->pc) {
        case 0x39ada0u: goto label_39ada0;
        case 0x39ada4u: goto label_39ada4;
        case 0x39ada8u: goto label_39ada8;
        case 0x39adacu: goto label_39adac;
        case 0x39adb0u: goto label_39adb0;
        case 0x39adb4u: goto label_39adb4;
        case 0x39adb8u: goto label_39adb8;
        case 0x39adbcu: goto label_39adbc;
        case 0x39adc0u: goto label_39adc0;
        case 0x39adc4u: goto label_39adc4;
        case 0x39adc8u: goto label_39adc8;
        case 0x39adccu: goto label_39adcc;
        case 0x39add0u: goto label_39add0;
        case 0x39add4u: goto label_39add4;
        case 0x39add8u: goto label_39add8;
        case 0x39addcu: goto label_39addc;
        case 0x39ade0u: goto label_39ade0;
        case 0x39ade4u: goto label_39ade4;
        case 0x39ade8u: goto label_39ade8;
        case 0x39adecu: goto label_39adec;
        case 0x39adf0u: goto label_39adf0;
        case 0x39adf4u: goto label_39adf4;
        case 0x39adf8u: goto label_39adf8;
        case 0x39adfcu: goto label_39adfc;
        case 0x39ae00u: goto label_39ae00;
        case 0x39ae04u: goto label_39ae04;
        case 0x39ae08u: goto label_39ae08;
        case 0x39ae0cu: goto label_39ae0c;
        case 0x39ae10u: goto label_39ae10;
        case 0x39ae14u: goto label_39ae14;
        case 0x39ae18u: goto label_39ae18;
        case 0x39ae1cu: goto label_39ae1c;
        case 0x39ae20u: goto label_39ae20;
        case 0x39ae24u: goto label_39ae24;
        case 0x39ae28u: goto label_39ae28;
        case 0x39ae2cu: goto label_39ae2c;
        case 0x39ae30u: goto label_39ae30;
        case 0x39ae34u: goto label_39ae34;
        case 0x39ae38u: goto label_39ae38;
        case 0x39ae3cu: goto label_39ae3c;
        case 0x39ae40u: goto label_39ae40;
        case 0x39ae44u: goto label_39ae44;
        default: break;
    }

    ctx->pc = 0x39ada0u;

label_39ada0:
    // 0x39ada0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39ada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39ada4:
    // 0x39ada4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39ada4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_39ada8:
    // 0x39ada8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39ada8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_39adac:
    // 0x39adac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39adacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39adb0:
    // 0x39adb0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x39adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39adb4:
    // 0x39adb4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x39adb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_39adb8:
    // 0x39adb8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x39adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_39adbc:
    // 0x39adbc: 0x40f809  jalr        $v0
label_39adc0:
    if (ctx->pc == 0x39ADC0u) {
        ctx->pc = 0x39ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADBCu;
        // 0x39adc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ADC4u;
        goto label_39adc4;
    }
    ctx->pc = 0x39ADBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39ADC4u);
        ctx->pc = 0x39ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADBCu;
        // 0x39adc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39ADBCu, 0x39ADC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39ADC4u;
label_39adc4:
    // 0x39adc4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39adc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_39adc8:
    // 0x39adc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39adc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39adcc:
    // 0x39adcc: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x39adccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_39add0:
    // 0x39add0: 0x96030018  lhu         $v1, 0x18($s0)
    ctx->pc = 0x39add0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_39add4:
    // 0x39add4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_39add8:
    if (ctx->pc == 0x39ADD8u) {
        ctx->pc = 0x39ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADD4u;
        // 0x39add8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ADDCu;
        goto label_39addc;
    }
    ctx->pc = 0x39ADD4u;
    {
        const bool branch_taken_0x39add4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADD4u;
        // 0x39add8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39add4) {
            ctx->pc = 0x39AE34u;
            goto label_39ae34;
        }
    }
    ctx->pc = 0x39ADDCu;
label_39addc:
    // 0x39addc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x39addcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39ade0:
    // 0x39ade0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39ade0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ade4:
    // 0x39ade4: 0x0  nop
    ctx->pc = 0x39ade4u;
    // NOP
label_39ade8:
    // 0x39ade8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x39ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_39adec:
    // 0x39adec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x39adecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_39adf0:
    // 0x39adf0: 0x94430024  lhu         $v1, 0x24($v0)
    ctx->pc = 0x39adf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
label_39adf4:
    // 0x39adf4: 0x5466000b  bnel        $v1, $a2, . + 4 + (0xB << 2)
label_39adf8:
    if (ctx->pc == 0x39ADF8u) {
        ctx->pc = 0x39ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADF4u;
        // 0x39adf8: 0x96020018  lhu         $v0, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ADFCu;
        goto label_39adfc;
    }
    ctx->pc = 0x39ADF4u;
    {
        const bool branch_taken_0x39adf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x39adf4) {
            ctx->pc = 0x39ADF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39ADF4u;
            // 0x39adf8: 0x96020018  lhu         $v0, 0x18($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AE24u;
            goto label_39ae24;
        }
    }
    ctx->pc = 0x39ADFCu;
label_39adfc:
    // 0x39adfc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x39adfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_39ae00:
    // 0x39ae00: 0x1087000d  beq         $a0, $a3, . + 4 + (0xD << 2)
label_39ae04:
    if (ctx->pc == 0x39AE04u) {
        ctx->pc = 0x39AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE00u;
        // 0x39ae04: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AE08u;
        goto label_39ae08;
    }
    ctx->pc = 0x39AE00u;
    {
        const bool branch_taken_0x39ae00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x39AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE00u;
        // 0x39ae04: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ae00) {
            ctx->pc = 0x39AE38u;
            goto label_39ae38;
        }
    }
    ctx->pc = 0x39AE08u;
label_39ae08:
    // 0x39ae08: 0xc105774  jal         func_415DD0
label_39ae0c:
    if (ctx->pc == 0x39AE0Cu) {
        ctx->pc = 0x39AE10u;
        goto label_39ae10;
    }
    ctx->pc = 0x39AE08u;
    SET_GPR_U32(ctx, 31, 0x39AE10u);
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x39AE08u, 0x39AE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AE10u;
label_39ae10:
    // 0x39ae10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39ae10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39ae14:
    // 0x39ae14: 0xc105772  jal         func_415DC8
label_39ae18:
    if (ctx->pc == 0x39AE18u) {
        ctx->pc = 0x39AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE14u;
        // 0x39ae18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AE1Cu;
        goto label_39ae1c;
    }
    ctx->pc = 0x39AE14u;
    SET_GPR_U32(ctx, 31, 0x39AE1Cu);
    ctx->pc = 0x39AE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AE14u;
    // 0x39ae18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DC8u, 0x39AE14u, 0x39AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AE1Cu;
label_39ae1c:
    // 0x39ae1c: 0x10000006  b           . + 4 + (0x6 << 2)
label_39ae20:
    if (ctx->pc == 0x39AE20u) {
        ctx->pc = 0x39AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE1Cu;
        // 0x39ae20: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AE24u;
        goto label_39ae24;
    }
    ctx->pc = 0x39AE1Cu;
    {
        const bool branch_taken_0x39ae1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE1Cu;
        // 0x39ae20: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ae1c) {
            ctx->pc = 0x39AE38u;
            goto label_39ae38;
        }
    }
    ctx->pc = 0x39AE24u;
label_39ae24:
    // 0x39ae24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x39ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_39ae28:
    // 0x39ae28: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x39ae28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39ae2c:
    // 0x39ae2c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_39ae30:
    if (ctx->pc == 0x39AE30u) {
        ctx->pc = 0x39AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE2Cu;
        // 0x39ae30: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AE34u;
        goto label_39ae34;
    }
    ctx->pc = 0x39AE2Cu;
    {
        const bool branch_taken_0x39ae2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE2Cu;
        // 0x39ae30: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ae2c) {
            ctx->pc = 0x39ADE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39ade8;
        }
    }
    ctx->pc = 0x39AE34u;
label_39ae34:
    // 0x39ae34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39ae34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39ae38:
    // 0x39ae38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39ae38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39ae3c:
    // 0x39ae3c: 0x3e00008  jr          $ra
label_39ae40:
    if (ctx->pc == 0x39AE40u) {
        ctx->pc = 0x39AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE3Cu;
        // 0x39ae40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AE44u;
        goto label_39ae44;
    }
    ctx->pc = 0x39AE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE3Cu;
        // 0x39ae40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AE44u;
label_39ae44:
    // 0x39ae44: 0x0  nop
    ctx->pc = 0x39ae44u;
    // NOP
    ctx->pc = 0x39ae48u;
}
