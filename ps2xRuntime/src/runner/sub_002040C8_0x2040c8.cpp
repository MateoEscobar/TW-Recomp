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

// Function: sub_002040C8
// Address: 0x2040c8 - 0x2040f0
void sub_002040C8_0x2040c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002040C8_0x2040c8");
#endif

    ctx->pc = 0x2040c8u;

    // 0x2040c8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2040c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2040cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2040CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2040D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040CCu;
        // 0x2040d0: 0x2442f1d8  addiu       $v0, $v0, -0xE28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2040CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2040D4u;
    // 0x2040d4: 0x0  nop
    ctx->pc = 0x2040d4u;
    // NOP
    // 0x2040d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2040d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2040dc: 0x0  nop
    ctx->pc = 0x2040dcu;
    // NOP
    // 0x2040e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2040e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2040e4: 0x0  nop
    ctx->pc = 0x2040e4u;
    // NOP
    // 0x2040e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2040e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2040ec: 0x0  nop
    ctx->pc = 0x2040ecu;
    // NOP
    ctx->pc = 0x2040f0u;
}
