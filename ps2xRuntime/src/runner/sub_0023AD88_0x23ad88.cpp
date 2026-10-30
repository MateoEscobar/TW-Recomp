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

// Function: sub_0023AD88
// Address: 0x23ad88 - 0x23adc8
void sub_0023AD88_0x23ad88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AD88_0x23ad88");
#endif

    switch (ctx->pc) {
        case 0x23ada4u: goto label_23ada4;
        case 0x23adacu: goto label_23adac;
        default: break;
    }

    ctx->pc = 0x23ad88u;

    // 0x23ad88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ad88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ad8c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23ad90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23ad90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23ad94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23ad94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ad98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ad98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23ad9c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23AD9Cu;
    SET_GPR_U32(ctx, 31, 0x23ADA4u);
    ctx->pc = 0x23ADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD9Cu;
    // 0x23ada0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23AD9Cu, 0x23ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ADA4u;
label_23ada4:
    // 0x23ada4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23ADA4u;
    SET_GPR_U32(ctx, 31, 0x23ADACu);
    ctx->pc = 0x23ADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ADA4u;
    // 0x23ada8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23ADA4u, 0x23ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ADACu;
label_23adac:
    // 0x23adac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23ADACu;
    {
        const bool branch_taken_0x23adac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23adac) {
            ctx->pc = 0x23ADB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ADACu;
            // 0x23adb0: 0xac5003b0  sw          $s0, 0x3B0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 944), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ADB4u;
            goto label_23adb4;
        }
    }
    ctx->pc = 0x23ADB4u;
label_23adb4:
    // 0x23adb4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23adb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23adb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23adb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23adbc: 0x3e00008  jr          $ra
    ctx->pc = 0x23ADBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADBCu;
        // 0x23adc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ADBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ADC4u;
    // 0x23adc4: 0x0  nop
    ctx->pc = 0x23adc4u;
    // NOP
    ctx->pc = 0x23adc8u;
}
