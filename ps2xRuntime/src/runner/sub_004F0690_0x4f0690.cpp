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

// Function: sub_004F0690
// Address: 0x4f0690 - 0x4f06a8
void sub_004F0690_0x4f0690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0690_0x4f0690");
#endif

    ctx->pc = 0x4f0690u;

    // 0x4f0690: 0x3e00008  jr          $ra
    ctx->pc = 0x4F0690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0690u;
        // 0x4f0694: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0698u;
    // 0x4f0698: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4f0698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4f069c: 0x0  nop
    ctx->pc = 0x4f069cu;
    // NOP
    // 0x4f06a0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4f06a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4f06a4: 0x0  nop
    ctx->pc = 0x4f06a4u;
    // NOP
    ctx->pc = 0x4f06a8u;
}
