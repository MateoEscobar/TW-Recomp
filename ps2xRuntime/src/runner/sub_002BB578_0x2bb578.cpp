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

// Function: sub_002BB578
// Address: 0x2bb578 - 0x2bb588
void sub_002BB578_0x2bb578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB578_0x2bb578");
#endif

    ctx->pc = 0x2bb578u;

    // 0x2bb578: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2bb578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb57c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB57Cu;
        // 0x2bb580: 0xa0400120  sb          $zero, 0x120($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 288), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB584u;
    // 0x2bb584: 0x0  nop
    ctx->pc = 0x2bb584u;
    // NOP
    ctx->pc = 0x2bb588u;
}
