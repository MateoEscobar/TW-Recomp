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

// Function: sub_004DA8C0
// Address: 0x4da8c0 - 0x4da8e0
void sub_004DA8C0_0x4da8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA8C0_0x4da8c0");
#endif

    ctx->pc = 0x4da8c0u;

    // 0x4da8c0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4da8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4da8c4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x4da8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4da8c8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4da8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4da8cc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4da8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4da8d0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4da8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4da8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA8D4u;
        // 0x4da8d8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA8DCu;
    // 0x4da8dc: 0x0  nop
    ctx->pc = 0x4da8dcu;
    // NOP
    ctx->pc = 0x4da8e0u;
}
