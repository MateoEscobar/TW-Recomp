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

// Function: sub_004DA488
// Address: 0x4da488 - 0x4da4a8
void sub_004DA488_0x4da488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA488_0x4da488");
#endif

    ctx->pc = 0x4da488u;

    // 0x4da488: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4da488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4da48c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x4da48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4da490: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4da490u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4da494: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4da494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4da498: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4da498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4da49c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA49Cu;
        // 0x4da4a0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA4A4u;
    // 0x4da4a4: 0x0  nop
    ctx->pc = 0x4da4a4u;
    // NOP
    ctx->pc = 0x4da4a8u;
}
