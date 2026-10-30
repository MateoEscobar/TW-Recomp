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

// Function: sub_002266A8
// Address: 0x2266a8 - 0x2266b8
void sub_002266A8_0x2266a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002266A8_0x2266a8");
#endif

    ctx->pc = 0x2266a8u;

    // 0x2266a8: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x2266a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2266ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2266ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2266B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266ACu;
        // 0x2266b0: 0xac450014  sw          $a1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2266ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2266B4u;
    // 0x2266b4: 0x0  nop
    ctx->pc = 0x2266b4u;
    // NOP
    ctx->pc = 0x2266b8u;
}
