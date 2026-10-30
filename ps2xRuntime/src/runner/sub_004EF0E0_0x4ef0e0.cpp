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

// Function: sub_004EF0E0
// Address: 0x4ef0e0 - 0x4ef0f8
void sub_004EF0E0_0x4ef0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF0E0_0x4ef0e0");
#endif

    ctx->pc = 0x4ef0e0u;

    // 0x4ef0e0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4ef0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4ef0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4EF0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF0E4u;
        // 0x4ef0e8: 0x24428630  addiu       $v0, $v0, -0x79D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF0ECu;
    // 0x4ef0ec: 0x0  nop
    ctx->pc = 0x4ef0ecu;
    // NOP
    // 0x4ef0f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4ef0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4ef0f4: 0x0  nop
    ctx->pc = 0x4ef0f4u;
    // NOP
    ctx->pc = 0x4ef0f8u;
}
