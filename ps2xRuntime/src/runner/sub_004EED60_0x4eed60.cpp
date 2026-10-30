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

// Function: sub_004EED60
// Address: 0x4eed60 - 0x4eed78
void sub_004EED60_0x4eed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EED60_0x4eed60");
#endif

    ctx->pc = 0x4eed60u;

    // 0x4eed60: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4eed60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4eed64: 0x3e00008  jr          $ra
    ctx->pc = 0x4EED64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EED64u;
        // 0x4eed68: 0x24426f30  addiu       $v0, $v0, 0x6F30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EED64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EED6Cu;
    // 0x4eed6c: 0x0  nop
    ctx->pc = 0x4eed6cu;
    // NOP
    // 0x4eed70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4eed70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4eed74: 0x0  nop
    ctx->pc = 0x4eed74u;
    // NOP
    ctx->pc = 0x4eed78u;
}
