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

// Function: sub_0033C268
// Address: 0x33c268 - 0x33c288
void sub_0033C268_0x33c268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C268_0x33c268");
#endif

    ctx->pc = 0x33c268u;

    // 0x33c268: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x33c268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x33c26c: 0x3e00008  jr          $ra
    ctx->pc = 0x33C26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C26Cu;
        // 0x33c270: 0x8c6227f4  lw          $v0, 0x27F4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10228)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C274u;
    // 0x33c274: 0x0  nop
    ctx->pc = 0x33c274u;
    // NOP
    // 0x33c278: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33c278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33c27c: 0x0  nop
    ctx->pc = 0x33c27cu;
    // NOP
    // 0x33c280: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33c280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33c284: 0x0  nop
    ctx->pc = 0x33c284u;
    // NOP
    ctx->pc = 0x33c288u;
}
