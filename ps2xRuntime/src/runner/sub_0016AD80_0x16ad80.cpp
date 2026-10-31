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

// Function: sub_0016AD80
// Address: 0x16ad80 - 0x16ae10
void sub_0016AD80_0x16ad80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AD80_0x16ad80");
#endif

    switch (ctx->pc) {
        case 0x16adb4u: goto label_16adb4;
        case 0x16adc8u: goto label_16adc8;
        case 0x16add4u: goto label_16add4;
        case 0x16addcu: goto label_16addc;
        case 0x16ade8u: goto label_16ade8;
        case 0x16adf4u: goto label_16adf4;
        default: break;
    }

    ctx->pc = 0x16ad80u;

    // 0x16ad80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16ad80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16ad84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ad88: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16ad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16ad8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16ad8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16ad90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16ad90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad94: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16ad94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16ad98: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16AD98u;
    {
        const bool branch_taken_0x16ad98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD98u;
        // 0x16ad9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad98) {
            ctx->pc = 0x16ADF4u;
            goto label_16adf4;
        }
    }
    ctx->pc = 0x16ADA0u;
    // 0x16ada0: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16ADA0u;
    {
        const bool branch_taken_0x16ada0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x16ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADA0u;
        // 0x16ada4: 0x48c00  sll         $s1, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ada0) {
            ctx->pc = 0x16ADF4u;
            goto label_16adf4;
        }
    }
    ctx->pc = 0x16ADA8u;
    // 0x16ada8: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x16ada8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x16adac: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16ADACu;
    SET_GPR_U32(ctx, 31, 0x16ADB4u);
    ctx->pc = 0x16ADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ADACu;
    // 0x16adb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16ADACu, 0x16ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ADB4u;
label_16adb4:
    // 0x16adb4: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x16adb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x16adb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16adb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16adbc: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x16adbcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x16adc0: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16ADC0u;
    SET_GPR_U32(ctx, 31, 0x16ADC8u);
    ctx->pc = 0x16ADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ADC0u;
    // 0x16adc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16ADC0u, 0x16ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ADC8u;
label_16adc8:
    // 0x16adc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16adc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16adcc: 0xc05a418  jal         func_169060
    ctx->pc = 0x16ADCCu;
    SET_GPR_U32(ctx, 31, 0x16ADD4u);
    ctx->pc = 0x16ADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ADCCu;
    // 0x16add0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169060u, 0x16ADCCu, 0x16ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ADD4u;
label_16add4:
    // 0x16add4: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16ADD4u;
    SET_GPR_U32(ctx, 31, 0x16ADDCu);
    ctx->pc = 0x16ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ADD4u;
    // 0x16add8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16ADD4u, 0x16ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ADDCu;
label_16addc:
    // 0x16addc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16addcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ade0: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16ADE0u;
    SET_GPR_U32(ctx, 31, 0x16ADE8u);
    ctx->pc = 0x16ADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ADE0u;
    // 0x16ade4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16ADE0u, 0x16ADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ADE8u;
label_16ade8:
    // 0x16ade8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ade8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16adec: 0xc05a418  jal         func_169060
    ctx->pc = 0x16ADECu;
    SET_GPR_U32(ctx, 31, 0x16ADF4u);
    ctx->pc = 0x16ADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ADECu;
    // 0x16adf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169060u, 0x16ADECu, 0x16ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ADF4u;
label_16adf4:
    // 0x16adf4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16adf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16adf8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16adf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16adfc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16adfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ae00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ae00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ae04: 0x3e00008  jr          $ra
    ctx->pc = 0x16AE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE04u;
        // 0x16ae08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AE0Cu;
    // 0x16ae0c: 0x0  nop
    ctx->pc = 0x16ae0cu;
    // NOP
    ctx->pc = 0x16ae10u;
}
