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

// Function: sub_004EEF70
// Address: 0x4eef70 - 0x4eef90
void sub_004EEF70_0x4eef70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEF70_0x4eef70");
#endif

    ctx->pc = 0x4eef70u;

    // 0x4eef70: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4eef70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4eef74: 0x3e00008  jr          $ra
    ctx->pc = 0x4EEF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EEF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEF74u;
        // 0x4eef78: 0x24428448  addiu       $v0, $v0, -0x7BB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EEF7Cu;
    // 0x4eef7c: 0x0  nop
    ctx->pc = 0x4eef7cu;
    // NOP
    // 0x4eef80: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x4eef80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x4eef84: 0x0  nop
    ctx->pc = 0x4eef84u;
    // NOP
    // 0x4eef88: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x4eef88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4eef8c: 0x0  nop
    ctx->pc = 0x4eef8cu;
    // NOP
    ctx->pc = 0x4eef90u;
}
