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

// Function: sub_001B3F58
// Address: 0x1b3f58 - 0x1b3f78
void sub_001B3F58_0x1b3f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3F58_0x1b3f58");
#endif

    ctx->pc = 0x1b3f58u;

    // 0x1b3f58: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b3f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b3f5c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1b3f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b3f60: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1b3f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x1b3f64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b3f68: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b3f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b3f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3F6Cu;
        // 0x1b3f70: 0xac654114  sw          $a1, 0x4114($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16660), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3F74u;
    // 0x1b3f74: 0x0  nop
    ctx->pc = 0x1b3f74u;
    // NOP
    ctx->pc = 0x1b3f78u;
}
