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

// Function: sub_001B2088
// Address: 0x1b2088 - 0x1b20e0
void sub_001B2088_0x1b2088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2088_0x1b2088");
#endif

    switch (ctx->pc) {
        case 0x1b20a8u: goto label_1b20a8;
        case 0x1b20b4u: goto label_1b20b4;
        case 0x1b20c0u: goto label_1b20c0;
        default: break;
    }

    ctx->pc = 0x1b2088u;

    // 0x1b2088: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b208c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b208cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b2090: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b2090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b2094: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1b2094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1b2098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b209c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b209cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b20a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b20a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b20a4: 0x0  nop
    ctx->pc = 0x1b20a4u;
    // NOP
label_1b20a8:
    // 0x1b20a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b20a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b20ac: 0xc0837f8  jal         func_20DFE0
    ctx->pc = 0x1B20ACu;
    SET_GPR_U32(ctx, 31, 0x1B20B4u);
    ctx->pc = 0x1B20B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B20ACu;
    // 0x1b20b0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DFE0u, 0x1B20ACu, 0x1B20B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B20B4u;
label_1b20b4:
    // 0x1b20b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b20b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b20b8: 0xc083802  jal         func_20E008
    ctx->pc = 0x1B20B8u;
    SET_GPR_U32(ctx, 31, 0x1B20C0u);
    ctx->pc = 0x1B20BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B20B8u;
    // 0x1b20bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E008u, 0x1B20B8u, 0x1B20C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B20C0u;
label_1b20c0:
    // 0x1b20c0: 0x623fff9  bgezl       $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B20C0u;
    {
        const bool branch_taken_0x1b20c0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1b20c0) {
            ctx->pc = 0x1B20C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B20C0u;
            // 0x1b20c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B20A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b20a8;
        }
    }
    ctx->pc = 0x1B20C8u;
    // 0x1b20c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b20c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b20cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b20ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b20d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b20d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b20d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B20D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B20D4u;
        // 0x1b20d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B20D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B20DCu;
    // 0x1b20dc: 0x0  nop
    ctx->pc = 0x1b20dcu;
    // NOP
    ctx->pc = 0x1b20e0u;
}
