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

// Function: sub_00196730
// Address: 0x196730 - 0x196748
void sub_00196730_0x196730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196730_0x196730");
#endif

    ctx->pc = 0x196730u;

    // 0x196730: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x196730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x196734: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x196734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x196738: 0xac45ce94  sw          $a1, -0x316C($v0)
    ctx->pc = 0x196738u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x50CE94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50CE94u, _value); } while (0);
    // 0x19673c: 0x3e00008  jr          $ra
    ctx->pc = 0x19673Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19673Cu;
        // 0x196740: 0xac60ce88  sw          $zero, -0x3178($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19673Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196744u;
    // 0x196744: 0x0  nop
    ctx->pc = 0x196744u;
    // NOP
    ctx->pc = 0x196748u;
}
