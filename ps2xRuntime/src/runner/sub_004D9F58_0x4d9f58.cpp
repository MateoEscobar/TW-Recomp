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

// Function: sub_004D9F58
// Address: 0x4d9f58 - 0x4d9f68
void sub_004D9F58_0x4d9f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D9F58_0x4d9f58");
#endif

    ctx->pc = 0x4d9f58u;

    // 0x4d9f58: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4d9f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4d9f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x4D9F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D9F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9F5Cu;
        // 0x4d9f60: 0x24426440  addiu       $v0, $v0, 0x6440 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25664));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D9F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D9F64u;
    // 0x4d9f64: 0x0  nop
    ctx->pc = 0x4d9f64u;
    // NOP
    ctx->pc = 0x4d9f68u;
}
