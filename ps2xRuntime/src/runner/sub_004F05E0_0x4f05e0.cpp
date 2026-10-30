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

// Function: sub_004F05E0
// Address: 0x4f05e0 - 0x4f05f0
void sub_004F05E0_0x4f05e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F05E0_0x4f05e0");
#endif

    ctx->pc = 0x4f05e0u;

    // 0x4f05e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4F05E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F05E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F05E0u;
        // 0x4f05e4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F05E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F05E8u;
    // 0x4f05e8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4f05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4f05ec: 0x0  nop
    ctx->pc = 0x4f05ecu;
    // NOP
    ctx->pc = 0x4f05f0u;
}
