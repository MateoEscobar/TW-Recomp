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

// Function: sub_004DA5C8
// Address: 0x4da5c8 - 0x4da5e0
void sub_004DA5C8_0x4da5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA5C8_0x4da5c8");
#endif

    ctx->pc = 0x4da5c8u;

    // 0x4da5c8: 0x24020184  addiu       $v0, $zero, 0x184
    ctx->pc = 0x4da5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x4da5cc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4da5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4da5d0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x4da5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x4da5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA5D4u;
        // 0x4da5d8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA5DCu;
    // 0x4da5dc: 0x0  nop
    ctx->pc = 0x4da5dcu;
    // NOP
    ctx->pc = 0x4da5e0u;
}
