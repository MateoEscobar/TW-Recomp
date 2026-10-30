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

// Function: sub_001DF4B0
// Address: 0x1df4b0 - 0x1df4c8
void sub_001DF4B0_0x1df4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF4B0_0x1df4b0");
#endif

    ctx->pc = 0x1df4b0u;

    // 0x1df4b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df4b4: 0xac821b9c  sw          $v0, 0x1B9C($a0)
    ctx->pc = 0x1df4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7068), GPR_U32(ctx, 2));
    // 0x1df4b8: 0xac821b70  sw          $v0, 0x1B70($a0)
    ctx->pc = 0x1df4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7024), GPR_U32(ctx, 2));
    // 0x1df4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF4BCu;
        // 0x1df4c0: 0xac821b80  sw          $v0, 0x1B80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 7040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF4C4u;
    // 0x1df4c4: 0x0  nop
    ctx->pc = 0x1df4c4u;
    // NOP
    ctx->pc = 0x1df4c8u;
}
