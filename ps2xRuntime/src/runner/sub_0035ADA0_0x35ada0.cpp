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

// Function: sub_0035ADA0
// Address: 0x35ada0 - 0x35ae00
void sub_0035ADA0_0x35ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035ADA0_0x35ada0");
#endif

    switch (ctx->pc) {
        case 0x35adc0u: goto label_35adc0;
        case 0x35adc8u: goto label_35adc8;
        case 0x35addcu: goto label_35addc;
        case 0x35ade8u: goto label_35ade8;
        default: break;
    }

    ctx->pc = 0x35ada0u;

    // 0x35ada0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35ada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35ada4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ada4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ada8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35ada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35adac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35adacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35adb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35adb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35adb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35adb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35adb8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35ADB8u;
    SET_GPR_U32(ctx, 31, 0x35ADC0u);
    ctx->pc = 0x35ADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ADB8u;
    // 0x35adbc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35ADB8u, 0x35ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ADC0u;
label_35adc0:
    // 0x35adc0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35ADC0u;
    SET_GPR_U32(ctx, 31, 0x35ADC8u);
    ctx->pc = 0x35ADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ADC0u;
    // 0x35adc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35ADC0u, 0x35ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ADC8u;
label_35adc8:
    // 0x35adc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35adc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35adcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35adccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35add0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35add0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35add4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35ADD4u;
    SET_GPR_U32(ctx, 31, 0x35ADDCu);
    ctx->pc = 0x35ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ADD4u;
    // 0x35add8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35ADD4u, 0x35ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ADDCu;
label_35addc:
    // 0x35addc: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35addcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35ade0: 0xc08da5e  jal         func_236978
    ctx->pc = 0x35ADE0u;
    SET_GPR_U32(ctx, 31, 0x35ADE8u);
    ctx->pc = 0x35ADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ADE0u;
    // 0x35ade4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236978u, 0x35ADE0u, 0x35ADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ADE8u;
label_35ade8:
    // 0x35ade8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35ade8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35adec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35adecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35adf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35adf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35adf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35adf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35adf8: 0x3e00008  jr          $ra
    ctx->pc = 0x35ADF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ADF8u;
        // 0x35adfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ADF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AE00u;
}
