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

// Function: sub_001B2030
// Address: 0x1b2030 - 0x1b2088
void sub_001B2030_0x1b2030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2030_0x1b2030");
#endif

    switch (ctx->pc) {
        case 0x1b2050u: goto label_1b2050;
        case 0x1b205cu: goto label_1b205c;
        case 0x1b2068u: goto label_1b2068;
        default: break;
    }

    ctx->pc = 0x1b2030u;

    // 0x1b2030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2034: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b2034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b2038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b2038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b203c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1b203cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1b2040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2044: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b2044u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2048: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b2048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b204c: 0x0  nop
    ctx->pc = 0x1b204cu;
    // NOP
label_1b2050:
    // 0x1b2050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2054: 0xc0837f8  jal         func_20DFE0
    ctx->pc = 0x1B2054u;
    SET_GPR_U32(ctx, 31, 0x1B205Cu);
    ctx->pc = 0x1B2058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2054u;
    // 0x1b2058: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DFE0u, 0x1B2054u, 0x1B205Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B205Cu;
label_1b205c:
    // 0x1b205c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b205cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2060: 0xc0837fa  jal         func_20DFE8
    ctx->pc = 0x1B2060u;
    SET_GPR_U32(ctx, 31, 0x1B2068u);
    ctx->pc = 0x1B2064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2060u;
    // 0x1b2064: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DFE8u, 0x1B2060u, 0x1B2068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2068u;
label_1b2068:
    // 0x1b2068: 0x623fff9  bgezl       $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B2068u;
    {
        const bool branch_taken_0x1b2068 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1b2068) {
            ctx->pc = 0x1B206Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2068u;
            // 0x1b206c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2050;
        }
    }
    ctx->pc = 0x1B2070u;
    // 0x1b2070: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b2070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2074: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b2074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b207c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B207Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B207Cu;
        // 0x1b2080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B207Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2084u;
    // 0x1b2084: 0x0  nop
    ctx->pc = 0x1b2084u;
    // NOP
    ctx->pc = 0x1b2088u;
}
