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

// Function: sub_004DA528
// Address: 0x4da528 - 0x4da548
void sub_004DA528_0x4da528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA528_0x4da528");
#endif

    ctx->pc = 0x4da528u;

    // 0x4da528: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4da528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4da52c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x4da52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4da530: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4da530u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4da534: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4da534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4da538: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4da538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4da53c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA53Cu;
        // 0x4da540: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA544u;
    // 0x4da544: 0x0  nop
    ctx->pc = 0x4da544u;
    // NOP
    ctx->pc = 0x4da548u;
}
