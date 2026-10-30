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

// Function: sub_00420C68
// Address: 0x420c68 - 0x420c80
void sub_00420C68_0x420c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420C68_0x420c68");
#endif

    switch (ctx->pc) {
        case 0x420c74u: goto label_420c74;
        default: break;
    }

    ctx->pc = 0x420c68u;

    // 0x420c68: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x420c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x420c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x420C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420C6Cu;
        // 0x420c70: 0x24425830  addiu       $v0, $v0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420C74u;
label_420c74:
    // 0x420c74: 0x3e00008  jr          $ra
    ctx->pc = 0x420C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420C74u;
        // 0x420c78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420C7Cu;
    // 0x420c7c: 0x0  nop
    ctx->pc = 0x420c7cu;
    // NOP
    ctx->pc = 0x420c80u;
}
