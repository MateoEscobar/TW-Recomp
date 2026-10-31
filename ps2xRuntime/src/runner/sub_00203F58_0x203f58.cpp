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

// Function: sub_00203F58
// Address: 0x203f58 - 0x203f78
void sub_00203F58_0x203f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203F58_0x203f58");
#endif

    ctx->pc = 0x203f58u;

    // 0x203f58: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x203f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x203f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x203F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F5Cu;
        // 0x203f60: 0x8c62f588  lw          $v0, -0xA78($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964616)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203F64u;
    // 0x203f64: 0x0  nop
    ctx->pc = 0x203f64u;
    // NOP
    // 0x203f68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x203f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203f6c: 0x0  nop
    ctx->pc = 0x203f6cu;
    // NOP
    // 0x203f70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x203f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203f74: 0x0  nop
    ctx->pc = 0x203f74u;
    // NOP
    ctx->pc = 0x203f78u;
}
