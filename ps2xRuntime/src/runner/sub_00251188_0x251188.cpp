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

// Function: sub_00251188
// Address: 0x251188 - 0x2511b8
void sub_00251188_0x251188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251188_0x251188");
#endif

    switch (ctx->pc) {
        case 0x251198u: goto label_251198;
        default: break;
    }

    ctx->pc = 0x251188u;

    // 0x251188: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x251188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x25118c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x25118cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x251190: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x251190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x251194: 0x244220f0  addiu       $v0, $v0, 0x20F0
    ctx->pc = 0x251194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8432));
label_251198:
    // 0x251198: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x251198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25119c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25119cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2511a0: 0x0  nop
    ctx->pc = 0x2511a0u;
    // NOP
    // 0x2511a4: 0x0  nop
    ctx->pc = 0x2511a4u;
    // NOP
    // 0x2511a8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2511A8u;
    {
        const bool branch_taken_0x2511a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2511ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511A8u;
        // 0x2511ac: 0x2442fef0  addiu       $v0, $v0, -0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2511a8) {
            ctx->pc = 0x251198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251198;
        }
    }
    ctx->pc = 0x2511B0u;
    // 0x2511b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2511B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2511B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2511B8u;
}
