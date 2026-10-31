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

// Function: sub_001FE130
// Address: 0x1fe130 - 0x1fe140
void sub_001FE130_0x1fe130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE130_0x1fe130");
#endif

    ctx->pc = 0x1fe130u;

    // 0x1fe130: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1fe130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1fe134: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE134u;
        // 0x1fe138: 0x2442ef30  addiu       $v0, $v0, -0x10D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962992));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE13Cu;
    // 0x1fe13c: 0x0  nop
    ctx->pc = 0x1fe13cu;
    // NOP
    ctx->pc = 0x1fe140u;
}
