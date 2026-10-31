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

// Function: sub_001C6A0C
// Address: 0x1c6a0c - 0x1c6a20
void sub_001C6A0C_0x1c6a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6A0C_0x1c6a0c");
#endif

    ctx->pc = 0x1c6a0cu;

    // 0x1c6a0c: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1c6a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1c6a10: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1c6a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c6a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A14u;
        // 0x1c6a18: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6A1Cu;
    // 0x1c6a1c: 0x0  nop
    ctx->pc = 0x1c6a1cu;
    // NOP
    ctx->pc = 0x1c6a20u;
}
