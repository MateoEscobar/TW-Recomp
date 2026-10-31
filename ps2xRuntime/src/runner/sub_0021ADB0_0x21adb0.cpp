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

// Function: sub_0021ADB0
// Address: 0x21adb0 - 0x21adf8
void sub_0021ADB0_0x21adb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021ADB0_0x21adb0");
#endif

    switch (ctx->pc) {
        case 0x21addcu: goto label_21addc;
        default: break;
    }

    ctx->pc = 0x21adb0u;

    // 0x21adb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21adb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21adb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21adb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21adb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21adb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21adbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21adbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21adc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21adc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21adc4: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x21adc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21adc8: 0x8e0506c4  lw          $a1, 0x6C4($s0)
    ctx->pc = 0x21adc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1732)));
    // 0x21adcc: 0x10b10004  beq         $a1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21ADCCu;
    {
        const bool branch_taken_0x21adcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x21ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ADCCu;
        // 0x21add0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21adcc) {
            ctx->pc = 0x21ADE0u;
            goto label_21ade0;
        }
    }
    ctx->pc = 0x21ADD4u;
    // 0x21add4: 0xc0670ca  jal         func_19C328
    ctx->pc = 0x21ADD4u;
    SET_GPR_U32(ctx, 31, 0x21ADDCu);
    ctx->pc = 0x21ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ADD4u;
    // 0x21add8: 0x8c44cf14  lw          $a0, -0x30EC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C328u, 0x21ADD4u, 0x21ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADDCu;
label_21addc:
    // 0x21addc: 0xae1106c4  sw          $s1, 0x6C4($s0)
    ctx->pc = 0x21addcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1732), GPR_U32(ctx, 17));
label_21ade0:
    // 0x21ade0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21ade0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ade4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21ade4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ade8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ade8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21adec: 0x3e00008  jr          $ra
    ctx->pc = 0x21ADECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ADECu;
        // 0x21adf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ADECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21ADF4u;
    // 0x21adf4: 0x0  nop
    ctx->pc = 0x21adf4u;
    // NOP
    ctx->pc = 0x21adf8u;
}
