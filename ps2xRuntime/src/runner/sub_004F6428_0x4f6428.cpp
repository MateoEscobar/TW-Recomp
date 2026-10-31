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

// Function: sub_004F6428
// Address: 0x4f6428 - 0x4f6448
void sub_004F6428_0x4f6428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F6428_0x4f6428");
#endif

    ctx->pc = 0x4f6428u;

    // 0x4f6428: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x4f6428u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4f642c: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x4f642cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x4f6430: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x4f6430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x4f6434: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x4f6434u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x4f6438: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x4f6438u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x4f643c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F643Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F6440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F643Cu;
        // 0x4f6440: 0xa0800001  sb          $zero, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F643Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F6444u;
    // 0x4f6444: 0x0  nop
    ctx->pc = 0x4f6444u;
    // NOP
    ctx->pc = 0x4f6448u;
}
