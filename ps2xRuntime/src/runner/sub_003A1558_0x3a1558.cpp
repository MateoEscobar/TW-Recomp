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

// Function: sub_003A1558
// Address: 0x3a1558 - 0x3a1570
void sub_003A1558_0x3a1558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1558_0x3a1558");
#endif

    ctx->pc = 0x3a1558u;

    // 0x3a1558: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a1558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a155c: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3a155cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3a1560: 0x8c650850  lw          $a1, 0x850($v1)
    ctx->pc = 0x3a1560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2128)));
    // 0x3a1564: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1564u;
        // 0x3a1568: 0xaca40014  sw          $a0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A156Cu;
    // 0x3a156c: 0x0  nop
    ctx->pc = 0x3a156cu;
    // NOP
    ctx->pc = 0x3a1570u;
}
