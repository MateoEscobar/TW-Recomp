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

// Function: sub_0015F560
// Address: 0x15f560 - 0x15f580
void sub_0015F560_0x15f560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F560_0x15f560");
#endif

    ctx->pc = 0x15f560u;

    // 0x15f560: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15f560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15f564: 0x3e00008  jr          $ra
    ctx->pc = 0x15F564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F564u;
        // 0x15f568: 0xac40c7a4  sw          $zero, -0x385C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952868), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F56Cu;
    // 0x15f56c: 0x0  nop
    ctx->pc = 0x15f56cu;
    // NOP
    // 0x15f570: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15f570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15f574: 0x0  nop
    ctx->pc = 0x15f574u;
    // NOP
    // 0x15f578: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x15f578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x15f57c: 0x0  nop
    ctx->pc = 0x15f57cu;
    // NOP
    ctx->pc = 0x15f580u;
}
