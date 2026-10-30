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

// Function: sub_0041FC08
// Address: 0x41fc08 - 0x41fc28
void sub_0041FC08_0x41fc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041FC08_0x41fc08");
#endif

    ctx->pc = 0x41fc08u;

    // 0x41fc08: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x41fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x41fc0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41FC0Cu;
    {
        const bool branch_taken_0x41fc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41fc0c) {
            ctx->pc = 0x41FC1Cu;
            goto label_41fc1c;
        }
    }
    ctx->pc = 0x41FC14u;
    // 0x41fc14: 0x3e00008  jr          $ra
    ctx->pc = 0x41FC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FC14u;
        // 0x41fc18: 0x8c820158  lw          $v0, 0x158($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41FC1Cu;
label_41fc1c:
    // 0x41fc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x41FC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FC1Cu;
        // 0x41fc20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41FC24u;
    // 0x41fc24: 0x0  nop
    ctx->pc = 0x41fc24u;
    // NOP
    ctx->pc = 0x41fc28u;
}
