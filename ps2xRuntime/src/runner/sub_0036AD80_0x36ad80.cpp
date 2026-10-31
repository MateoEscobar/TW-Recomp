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

// Function: sub_0036AD80
// Address: 0x36ad80 - 0x36ae60
void sub_0036AD80_0x36ad80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AD80_0x36ad80");
#endif

    switch (ctx->pc) {
        case 0x36adb4u: goto label_36adb4;
        case 0x36adbcu: goto label_36adbc;
        case 0x36add0u: goto label_36add0;
        case 0x36ade4u: goto label_36ade4;
        case 0x36adf8u: goto label_36adf8;
        case 0x36ae00u: goto label_36ae00;
        case 0x36ae14u: goto label_36ae14;
        case 0x36ae1cu: goto label_36ae1c;
        case 0x36ae34u: goto label_36ae34;
        default: break;
    }

    ctx->pc = 0x36ad80u;

    // 0x36ad80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x36ad80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x36ad84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ad84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ad88: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x36ad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x36ad8c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x36ad8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x36ad90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36ad90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ad94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36ad94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ad98: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x36ad98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x36ad9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36ad9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36ada0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x36ada0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x36ada4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x36ada4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x36ada8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ada8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36adac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36ADACu;
    SET_GPR_U32(ctx, 31, 0x36ADB4u);
    ctx->pc = 0x36ADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ADACu;
    // 0x36adb0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36ADACu, 0x36ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ADB4u;
label_36adb4:
    // 0x36adb4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36ADB4u;
    SET_GPR_U32(ctx, 31, 0x36ADBCu);
    ctx->pc = 0x36ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ADB4u;
    // 0x36adb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36ADB4u, 0x36ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ADBCu;
label_36adbc:
    // 0x36adbc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x36adbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36adc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36adc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36adc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36adc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36adc8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36ADC8u;
    SET_GPR_U32(ctx, 31, 0x36ADD0u);
    ctx->pc = 0x36ADCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ADC8u;
    // 0x36adcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36ADC8u, 0x36ADD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ADD0u;
label_36add0:
    // 0x36add0: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x36add0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36add4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36add4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36add8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36add8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36addc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36ADDCu;
    SET_GPR_U32(ctx, 31, 0x36ADE4u);
    ctx->pc = 0x36ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ADDCu;
    // 0x36ade0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36ADDCu, 0x36ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ADE4u;
label_36ade4:
    // 0x36ade4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36ade4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ade8: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x36ade8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36adec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36adecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36adf0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36ADF0u;
    SET_GPR_U32(ctx, 31, 0x36ADF8u);
    ctx->pc = 0x36ADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ADF0u;
    // 0x36adf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36ADF0u, 0x36ADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ADF8u;
label_36adf8:
    // 0x36adf8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36ADF8u;
    SET_GPR_U32(ctx, 31, 0x36AE00u);
    ctx->pc = 0x36ADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ADF8u;
    // 0x36adfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36ADF8u, 0x36AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AE00u;
label_36ae00:
    // 0x36ae00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36ae00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36ae04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ae08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae0c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AE0Cu;
    SET_GPR_U32(ctx, 31, 0x36AE14u);
    ctx->pc = 0x36AE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AE0Cu;
    // 0x36ae10: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AE0Cu, 0x36AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AE14u;
label_36ae14:
    // 0x36ae14: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36AE14u;
    SET_GPR_U32(ctx, 31, 0x36AE1Cu);
    ctx->pc = 0x36AE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AE14u;
    // 0x36ae18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36AE14u, 0x36AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AE1Cu;
label_36ae1c:
    // 0x36ae1c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x36ae1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x36ae20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x36ae24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae28: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36ae28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae2c: 0xc0e70a4  jal         func_39C290
    ctx->pc = 0x36AE2Cu;
    SET_GPR_U32(ctx, 31, 0x36AE34u);
    ctx->pc = 0x36AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AE2Cu;
    // 0x36ae30: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C290u, 0x36AE2Cu, 0x36AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AE34u;
label_36ae34:
    // 0x36ae34: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x36ae34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36ae38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36ae38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae3c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x36ae3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36ae40: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x36ae40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36ae44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36ae44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36ae48: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x36ae48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36ae4c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x36ae4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ae50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ae50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ae54: 0x3e00008  jr          $ra
    ctx->pc = 0x36AE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AE54u;
        // 0x36ae58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AE5Cu;
    // 0x36ae5c: 0x0  nop
    ctx->pc = 0x36ae5cu;
    // NOP
    ctx->pc = 0x36ae60u;
}
