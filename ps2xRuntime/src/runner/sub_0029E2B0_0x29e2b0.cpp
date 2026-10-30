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

// Function: sub_0029E2B0
// Address: 0x29e2b0 - 0x29e2e8
void sub_0029E2B0_0x29e2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E2B0_0x29e2b0");
#endif

    switch (ctx->pc) {
        case 0x29e2c8u: goto label_29e2c8;
        default: break;
    }

    ctx->pc = 0x29e2b0u;

    // 0x29e2b0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x29e2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x29e2b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29e2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e2b8: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x29e2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x29e2bc: 0x2482003e  addiu       $v0, $a0, 0x3E
    ctx->pc = 0x29e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 62));
    // 0x29e2c0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x29e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29e2c4: 0x0  nop
    ctx->pc = 0x29e2c4u;
    // NOP
label_29e2c8:
    // 0x29e2c8: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x29e2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x29e2cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29e2d0: 0x0  nop
    ctx->pc = 0x29e2d0u;
    // NOP
    // 0x29e2d4: 0x0  nop
    ctx->pc = 0x29e2d4u;
    // NOP
    // 0x29e2d8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29E2D8u;
    {
        const bool branch_taken_0x29e2d8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x29E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2D8u;
        // 0x29e2dc: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e2d8) {
            ctx->pc = 0x29E2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e2c8;
        }
    }
    ctx->pc = 0x29E2E0u;
    // 0x29e2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x29E2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E2E8u;
}
