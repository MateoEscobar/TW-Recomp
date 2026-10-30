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

// Function: sub_004DAA00
// Address: 0x4daa00 - 0x4daa20
void sub_004DAA00_0x4daa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAA00_0x4daa00");
#endif

    ctx->pc = 0x4daa00u;

    // 0x4daa00: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4daa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4daa04: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x4daa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4daa08: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4daa08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4daa0c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4daa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4daa10: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4daa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4daa14: 0x3e00008  jr          $ra
    ctx->pc = 0x4DAA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAA14u;
        // 0x4daa18: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAA1Cu;
    // 0x4daa1c: 0x0  nop
    ctx->pc = 0x4daa1cu;
    // NOP
    ctx->pc = 0x4daa20u;
}
