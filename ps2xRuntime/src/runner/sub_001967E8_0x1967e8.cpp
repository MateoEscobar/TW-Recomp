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

// Function: sub_001967E8
// Address: 0x1967e8 - 0x196800
void sub_001967E8_0x1967e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001967E8_0x1967e8");
#endif

    ctx->pc = 0x1967e8u;

    // 0x1967e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1967e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1967ec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1967ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1967f0: 0xac45ce98  sw          $a1, -0x3168($v0)
    ctx->pc = 0x1967f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x50CE98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50CE98u, _value); } while (0);
    // 0x1967f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1967F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1967F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967F4u;
        // 0x1967f8: 0xac60ce9c  sw          $zero, -0x3164($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1967F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1967FCu;
    // 0x1967fc: 0x0  nop
    ctx->pc = 0x1967fcu;
    // NOP
    ctx->pc = 0x196800u;
}
