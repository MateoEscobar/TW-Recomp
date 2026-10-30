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

// Function: sub_0041DD78
// Address: 0x41dd78 - 0x41dd90
void sub_0041DD78_0x41dd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DD78_0x41dd78");
#endif

    ctx->pc = 0x41dd78u;

    // 0x41dd78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41dd7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x41dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41dd80: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41dd84: 0x3e00008  jr          $ra
    ctx->pc = 0x41DD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DD84u;
        // 0x41dd88: 0xac64011c  sw          $a0, 0x11C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 284), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41DD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41DD8Cu;
    // 0x41dd8c: 0x0  nop
    ctx->pc = 0x41dd8cu;
    // NOP
    ctx->pc = 0x41dd90u;
}
