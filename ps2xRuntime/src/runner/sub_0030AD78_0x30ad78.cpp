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

// Function: sub_0030AD78
// Address: 0x30ad78 - 0x30ae10
void sub_0030AD78_0x30ad78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AD78_0x30ad78");
#endif

    switch (ctx->pc) {
        case 0x30ad78u: goto label_30ad78;
        case 0x30ad7cu: goto label_30ad7c;
        case 0x30ad80u: goto label_30ad80;
        case 0x30ad84u: goto label_30ad84;
        case 0x30ad88u: goto label_30ad88;
        case 0x30ad8cu: goto label_30ad8c;
        case 0x30ad90u: goto label_30ad90;
        case 0x30ad94u: goto label_30ad94;
        case 0x30ad98u: goto label_30ad98;
        case 0x30ad9cu: goto label_30ad9c;
        case 0x30ada0u: goto label_30ada0;
        case 0x30ada4u: goto label_30ada4;
        case 0x30ada8u: goto label_30ada8;
        case 0x30adacu: goto label_30adac;
        case 0x30adb0u: goto label_30adb0;
        case 0x30adb4u: goto label_30adb4;
        case 0x30adb8u: goto label_30adb8;
        case 0x30adbcu: goto label_30adbc;
        case 0x30adc0u: goto label_30adc0;
        case 0x30adc4u: goto label_30adc4;
        case 0x30adc8u: goto label_30adc8;
        case 0x30adccu: goto label_30adcc;
        case 0x30add0u: goto label_30add0;
        case 0x30add4u: goto label_30add4;
        case 0x30add8u: goto label_30add8;
        case 0x30addcu: goto label_30addc;
        case 0x30ade0u: goto label_30ade0;
        case 0x30ade4u: goto label_30ade4;
        case 0x30ade8u: goto label_30ade8;
        case 0x30adecu: goto label_30adec;
        case 0x30adf0u: goto label_30adf0;
        case 0x30adf4u: goto label_30adf4;
        case 0x30adf8u: goto label_30adf8;
        case 0x30adfcu: goto label_30adfc;
        case 0x30ae00u: goto label_30ae00;
        case 0x30ae04u: goto label_30ae04;
        case 0x30ae08u: goto label_30ae08;
        case 0x30ae0cu: goto label_30ae0c;
        default: break;
    }

    ctx->pc = 0x30ad78u;

label_30ad78:
    // 0x30ad78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30ad78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_30ad7c:
    // 0x30ad7c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x30ad7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_30ad80:
    // 0x30ad80: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x30ad80u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_30ad84:
    // 0x30ad84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30ad84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_30ad88:
    // 0x30ad88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30ad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_30ad8c:
    // 0x30ad8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30ad8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30ad90:
    // 0x30ad90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30ad90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30ad94:
    // 0x30ad94: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x30ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_30ad98:
    // 0x30ad98: 0x90620411  lbu         $v0, 0x411($v1)
    ctx->pc = 0x30ad98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1041)));
label_30ad9c:
    // 0x30ad9c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_30ada0:
    if (ctx->pc == 0x30ADA0u) {
        ctx->pc = 0x30ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AD9Cu;
        // 0x30ada0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30ADA4u;
        goto label_30ada4;
    }
    ctx->pc = 0x30AD9Cu;
    {
        const bool branch_taken_0x30ad9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AD9Cu;
        // 0x30ada0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ad9c) {
            ctx->pc = 0x30ADE4u;
            goto label_30ade4;
        }
    }
    ctx->pc = 0x30ADA4u;
label_30ada4:
    // 0x30ada4: 0xc047e6c  jal         func_11F9B0
label_30ada8:
    if (ctx->pc == 0x30ADA8u) {
        ctx->pc = 0x30ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ADA4u;
        // 0x30ada8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30ADACu;
        goto label_30adac;
    }
    ctx->pc = 0x30ADA4u;
    SET_GPR_U32(ctx, 31, 0x30ADACu);
    ctx->pc = 0x30ADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ADA4u;
    // 0x30ada8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x30ADA4u, 0x30ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADACu;
label_30adac:
    // 0x30adac: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_30adb0:
    if (ctx->pc == 0x30ADB0u) {
        ctx->pc = 0x30ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ADACu;
        // 0x30adb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30ADB4u;
        goto label_30adb4;
    }
    ctx->pc = 0x30ADACu;
    {
        const bool branch_taken_0x30adac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30adac) {
            ctx->pc = 0x30ADB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30ADACu;
            // 0x30adb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30ADE8u;
            goto label_30ade8;
        }
    }
    ctx->pc = 0x30ADB4u;
label_30adb4:
    // 0x30adb4: 0xc047e6c  jal         func_11F9B0
label_30adb8:
    if (ctx->pc == 0x30ADB8u) {
        ctx->pc = 0x30ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ADB4u;
        // 0x30adb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30ADBCu;
        goto label_30adbc;
    }
    ctx->pc = 0x30ADB4u;
    SET_GPR_U32(ctx, 31, 0x30ADBCu);
    ctx->pc = 0x30ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ADB4u;
    // 0x30adb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x30ADB4u, 0x30ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADBCu;
label_30adbc:
    // 0x30adbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30adc0:
    // 0x30adc0: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x30adc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_30adc4:
    // 0x30adc4: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x30adc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_30adc8:
    // 0x30adc8: 0xa0f809  jalr        $a1
label_30adcc:
    if (ctx->pc == 0x30ADCCu) {
        ctx->pc = 0x30ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ADC8u;
        // 0x30adcc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30ADD0u;
        goto label_30add0;
    }
    ctx->pc = 0x30ADC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x30ADD0u);
        ctx->pc = 0x30ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ADC8u;
        // 0x30adcc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30ADC8u, 0x30ADD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30ADD0u;
label_30add0:
    // 0x30add0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x30add0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_30add4:
    // 0x30add4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_30add8:
    if (ctx->pc == 0x30ADD8u) {
        ctx->pc = 0x30ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ADD4u;
        // 0x30add8: 0x8e42489c  lw          $v0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30ADDCu;
        goto label_30addc;
    }
    ctx->pc = 0x30ADD4u;
    {
        const bool branch_taken_0x30add4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x30ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ADD4u;
        // 0x30add8: 0x8e42489c  lw          $v0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30add4) {
            ctx->pc = 0x30ADE4u;
            goto label_30ade4;
        }
    }
    ctx->pc = 0x30ADDCu;
label_30addc:
    // 0x30addc: 0x90430410  lbu         $v1, 0x410($v0)
    ctx->pc = 0x30addcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1040)));
label_30ade0:
    // 0x30ade0: 0x2c710001  sltiu       $s1, $v1, 0x1
    ctx->pc = 0x30ade0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_30ade4:
    // 0x30ade4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30ade4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30ade8:
    // 0x30ade8: 0xc0c2b04  jal         func_30AC10
label_30adec:
    if (ctx->pc == 0x30ADECu) {
        ctx->pc = 0x30ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ADE8u;
        // 0x30adec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30ADF0u;
        goto label_30adf0;
    }
    ctx->pc = 0x30ADE8u;
    SET_GPR_U32(ctx, 31, 0x30ADF0u);
    ctx->pc = 0x30ADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ADE8u;
    // 0x30adec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AC10u, 0x30ADE8u, 0x30ADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADF0u;
label_30adf0:
    // 0x30adf0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30adf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30adf4:
    // 0x30adf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30adf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30adf8:
    // 0x30adf8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30adf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30adfc:
    // 0x30adfc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x30adfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30ae00:
    // 0x30ae00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30ae00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30ae04:
    // 0x30ae04: 0x3e00008  jr          $ra
label_30ae08:
    if (ctx->pc == 0x30AE08u) {
        ctx->pc = 0x30AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE04u;
        // 0x30ae08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30AE0Cu;
        goto label_30ae0c;
    }
    ctx->pc = 0x30AE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE04u;
        // 0x30ae08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AE0Cu;
label_30ae0c:
    // 0x30ae0c: 0x0  nop
    ctx->pc = 0x30ae0cu;
    // NOP
    ctx->pc = 0x30ae10u;
}
