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

// Function: sub_004C8CC0
// Address: 0x4c8cc0 - 0x4c8cd8
void sub_004C8CC0_0x4c8cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C8CC0_0x4c8cc0");
#endif

    ctx->pc = 0x4c8cc0u;

    // 0x4c8cc0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4c8cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4c8cc4: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4c8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4c8cc8: 0xac442834  sw          $a0, 0x2834($v0)
    ctx->pc = 0x4c8cc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x532834u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532834u, _value); } while (0);
    // 0x4c8ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x4C8CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C8CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8CCCu;
        // 0x4c8cd0: 0xac652838  sw          $a1, 0x2838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10296), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C8CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C8CD4u;
    // 0x4c8cd4: 0x0  nop
    ctx->pc = 0x4c8cd4u;
    // NOP
    ctx->pc = 0x4c8cd8u;
}
