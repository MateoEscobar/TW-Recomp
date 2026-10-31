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

// Function: sub_0046BE78
// Address: 0x46be78 - 0x46be90
void sub_0046BE78_0x46be78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BE78_0x46be78");
#endif

    ctx->pc = 0x46be78u;

    // 0x46be78: 0x8f8388cc  lw          $v1, -0x7734($gp)
    ctx->pc = 0x46be78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936780)));
    // 0x46be7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x46be7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x46be80: 0xaf8388cc  sw          $v1, -0x7734($gp)
    ctx->pc = 0x46be80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936780), GPR_U32(ctx, 3));
    // 0x46be84: 0x3e00008  jr          $ra
    ctx->pc = 0x46BE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BE84u;
        // 0x46be88: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BE8Cu;
    // 0x46be8c: 0x0  nop
    ctx->pc = 0x46be8cu;
    // NOP
    ctx->pc = 0x46be90u;
}
