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

// Function: sub_0047A6D4
// Address: 0x47a6d4 - 0x47a6e8
void sub_0047A6D4_0x47a6d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047A6D4_0x47a6d4");
#endif

    switch (ctx->pc) {
        case 0x47a6e0u: goto label_47a6e0;
        default: break;
    }

    ctx->pc = 0x47a6d4u;

    // 0x47a6d4: 0xad060010  sw          $a2, 0x10($t0)
    ctx->pc = 0x47a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    // 0x47a6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x47A6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A6D8u;
        // 0x47a6dc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47A6E0u;
label_47a6e0:
    // 0x47a6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x47A6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A6E0u;
        // 0x47a6e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47A6E8u;
}
