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

// Function: sub_004F5B10
// Address: 0x4f5b10 - 0x4f5b28
void sub_004F5B10_0x4f5b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5B10_0x4f5b10");
#endif

    ctx->pc = 0x4f5b10u;

    // 0x4f5b10: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5B10u;
        // 0x4f5b14: 0xa0850068  sb          $a1, 0x68($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 104), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F5B18u;
    // 0x4f5b18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4f5b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4f5b1c: 0x0  nop
    ctx->pc = 0x4f5b1cu;
    // NOP
    // 0x4f5b20: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4f5b20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4f5b24: 0x0  nop
    ctx->pc = 0x4f5b24u;
    // NOP
    ctx->pc = 0x4f5b28u;
}
