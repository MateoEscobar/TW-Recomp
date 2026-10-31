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

// Function: sub_0046AA08
// Address: 0x46aa08 - 0x46aa28
void sub_0046AA08_0x46aa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046AA08_0x46aa08");
#endif

    ctx->pc = 0x46aa08u;

    // 0x46aa08: 0x8f8384c0  lw          $v1, -0x7B40($gp)
    ctx->pc = 0x46aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935744)));
    // 0x46aa0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x46aa0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46aa10: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x46aa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x46aa14: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x46aa14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x46aa18: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x46aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x46aa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x46AA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AA1Cu;
        // 0x46aa20: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46AA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46AA24u;
    // 0x46aa24: 0x0  nop
    ctx->pc = 0x46aa24u;
    // NOP
    ctx->pc = 0x46aa28u;
}
