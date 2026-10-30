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

// Function: sub_0032D508
// Address: 0x32d508 - 0x32d528
void sub_0032D508_0x32d508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D508_0x32d508");
#endif

    ctx->pc = 0x32d508u;

    // 0x32d508: 0x8483001c  lh          $v1, 0x1C($a0)
    ctx->pc = 0x32d508u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x32d50c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32d510: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x32d510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x32d514: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x32d514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x32d518: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x32d518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x32d51c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32d51cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x32d520: 0x3e00008  jr          $ra
    ctx->pc = 0x32D520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D520u;
        // 0x32d524: 0xac850028  sw          $a1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D528u;
}
