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

// Function: sub_001A7000
// Address: 0x1a7000 - 0x1a7020
void sub_001A7000_0x1a7000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7000_0x1a7000");
#endif

    ctx->pc = 0x1a7000u;

    // 0x1a7000: 0x8c821574  lw          $v0, 0x1574($a0)
    ctx->pc = 0x1a7000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5492)));
    // 0x1a7004: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a7004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1a7008: 0x2463b1b0  addiu       $v1, $v1, -0x4E50
    ctx->pc = 0x1a7008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947248));
    // 0x1a700c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a700cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7010: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7018: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7018u;
        // 0x1a701c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7020u;
}
