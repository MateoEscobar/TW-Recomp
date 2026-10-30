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

// Function: sub_001879A0
// Address: 0x1879a0 - 0x1879b8
void sub_001879A0_0x1879a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001879A0_0x1879a0");
#endif

    switch (ctx->pc) {
        case 0x1879a8u: goto label_1879a8;
        case 0x1879b0u: goto label_1879b0;
        default: break;
    }

    ctx->pc = 0x1879a0u;

    // 0x1879a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1879A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1879A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1879A0u;
        // 0x1879a4: 0x24c22000  addiu       $v0, $a2, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1879A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1879A8u;
label_1879a8:
    // 0x1879a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1879a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1879ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1879acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1879b0:
    // 0x1879b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1879B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1879B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1879B8u;
}
