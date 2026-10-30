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

// Function: sub_0023ADC8
// Address: 0x23adc8 - 0x23ae00
void sub_0023ADC8_0x23adc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023ADC8_0x23adc8");
#endif

    switch (ctx->pc) {
        case 0x23addcu: goto label_23addc;
        case 0x23ade4u: goto label_23ade4;
        default: break;
    }

    ctx->pc = 0x23adc8u;

    // 0x23adc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23adc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23adcc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23adccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23add0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23add0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23add4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23ADD4u;
    SET_GPR_U32(ctx, 31, 0x23ADDCu);
    ctx->pc = 0x23ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ADD4u;
    // 0x23add8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23ADD4u, 0x23ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ADDCu;
label_23addc:
    // 0x23addc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23ADDCu;
    SET_GPR_U32(ctx, 31, 0x23ADE4u);
    ctx->pc = 0x23ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ADDCu;
    // 0x23ade0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23ADDCu, 0x23ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ADE4u;
label_23ade4:
    // 0x23ade4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x23ADE4u;
    {
        const bool branch_taken_0x23ade4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ade4) {
            ctx->pc = 0x23ADE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ADE4u;
            // 0x23ade8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ADF0u;
            goto label_23adf0;
        }
    }
    ctx->pc = 0x23ADECu;
    // 0x23adec: 0x8c4203b0  lw          $v0, 0x3B0($v0)
    ctx->pc = 0x23adecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 944)));
label_23adf0:
    // 0x23adf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23adf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23adf4: 0x3e00008  jr          $ra
    ctx->pc = 0x23ADF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADF4u;
        // 0x23adf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ADF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ADFCu;
    // 0x23adfc: 0x0  nop
    ctx->pc = 0x23adfcu;
    // NOP
    ctx->pc = 0x23ae00u;
}
