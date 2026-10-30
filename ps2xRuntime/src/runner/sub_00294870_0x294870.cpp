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

// Function: sub_00294870
// Address: 0x294870 - 0x294888
void sub_00294870_0x294870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294870_0x294870");
#endif

    ctx->pc = 0x294870u;

    // 0x294870: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x294870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x294874: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x294874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x294878: 0xa0440ade  sb          $a0, 0xADE($v0)
    ctx->pc = 0x294878u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x510ADEu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x510ADEu, _value); } while (0);
    // 0x29487c: 0x3e00008  jr          $ra
    ctx->pc = 0x29487Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29487Cu;
        // 0x294880: 0xa0650add  sb          $a1, 0xADD($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2781), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29487Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294884u;
    // 0x294884: 0x0  nop
    ctx->pc = 0x294884u;
    // NOP
    ctx->pc = 0x294888u;
}
