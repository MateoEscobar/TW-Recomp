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

// Function: sub_0010ADA8
// Address: 0x10ada8 - 0x10adf8
void sub_0010ADA8_0x10ada8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ADA8_0x10ada8");
#endif

    switch (ctx->pc) {
        case 0x10ada8u: goto label_10ada8;
        case 0x10adacu: goto label_10adac;
        case 0x10adb0u: goto label_10adb0;
        case 0x10adb4u: goto label_10adb4;
        case 0x10adb8u: goto label_10adb8;
        case 0x10adbcu: goto label_10adbc;
        case 0x10adc0u: goto label_10adc0;
        case 0x10adc4u: goto label_10adc4;
        case 0x10adc8u: goto label_10adc8;
        case 0x10adccu: goto label_10adcc;
        case 0x10add0u: goto label_10add0;
        case 0x10add4u: goto label_10add4;
        case 0x10add8u: goto label_10add8;
        case 0x10addcu: goto label_10addc;
        case 0x10ade0u: goto label_10ade0;
        case 0x10ade4u: goto label_10ade4;
        case 0x10ade8u: goto label_10ade8;
        case 0x10adecu: goto label_10adec;
        case 0x10adf0u: goto label_10adf0;
        case 0x10adf4u: goto label_10adf4;
        default: break;
    }

    ctx->pc = 0x10ada8u;

label_10ada8:
    // 0x10ada8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ada8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10adac:
    // 0x10adac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10adacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_10adb0:
    // 0x10adb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10adb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10adb4:
    // 0x10adb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10adb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10adb8:
    // 0x10adb8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10adb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_10adbc:
    // 0x10adbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10adbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10adc0:
    // 0x10adc0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10adc0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_10adc4:
    // 0x10adc4: 0xc05d4e0  jal         func_175380
label_10adc8:
    if (ctx->pc == 0x10ADC8u) {
        ctx->pc = 0x10ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADC4u;
        // 0x10adc8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ADCCu;
        goto label_10adcc;
    }
    ctx->pc = 0x10ADC4u;
    SET_GPR_U32(ctx, 31, 0x10ADCCu);
    ctx->pc = 0x10ADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ADC4u;
    // 0x10adc8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175380u, 0x10ADC4u, 0x10ADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ADCCu;
label_10adcc:
    // 0x10adcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10adccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10add0:
    // 0x10add0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10add0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10add4:
    // 0x10add4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x10add4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_10add8:
    // 0x10add8: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x10add8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_10addc:
    // 0x10addc: 0x60f809  jalr        $v1
label_10ade0:
    if (ctx->pc == 0x10ADE0u) {
        ctx->pc = 0x10ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADDCu;
        // 0x10ade0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ADE4u;
        goto label_10ade4;
    }
    ctx->pc = 0x10ADDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10ADE4u);
        ctx->pc = 0x10ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADDCu;
        // 0x10ade0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ADDCu, 0x10ADE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10ADE4u;
label_10ade4:
    // 0x10ade4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10ade4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10ade8:
    // 0x10ade8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ade8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10adec:
    // 0x10adec: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10adecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10adf0:
    // 0x10adf0: 0x3e00008  jr          $ra
label_10adf4:
    if (ctx->pc == 0x10ADF4u) {
        ctx->pc = 0x10ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADF0u;
        // 0x10adf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ADF8u;
        goto label_fallthrough_0x10adf0;
    }
    ctx->pc = 0x10ADF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADF0u;
        // 0x10adf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ADF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10adf0:
    ctx->pc = 0x10ADF8u;
}
