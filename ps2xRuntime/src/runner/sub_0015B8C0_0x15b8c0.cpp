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

// Function: sub_0015B8C0
// Address: 0x15b8c0 - 0x15b8d8
void sub_0015B8C0_0x15b8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B8C0_0x15b8c0");
#endif

    ctx->pc = 0x15b8c0u;

    // 0x15b8c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15b8c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15b8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b8c8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x15b8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x15b8cc: 0xac43c6f4  sw          $v1, -0x390C($v0)
    ctx->pc = 0x15b8ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x50C6F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C6F4u, _value); } while (0);
    // 0x15b8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x15B8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8D0u;
        // 0x15b8d4: 0xac80c70c  sw          $zero, -0x38F4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294952716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B8D8u;
}
