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

// Function: sub_00294828
// Address: 0x294828 - 0x294840
void sub_00294828_0x294828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294828_0x294828");
#endif

    ctx->pc = 0x294828u;

    // 0x294828: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x294828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29482c: 0x24430ad8  addiu       $v1, $v0, 0xAD8
    ctx->pc = 0x29482cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2776));
    // 0x294830: 0xa0440ad8  sb          $a0, 0xAD8($v0)
    ctx->pc = 0x294830u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x510AD8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x510AD8u, _value); } while (0);
    // 0x294834: 0x3e00008  jr          $ra
    ctx->pc = 0x294834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294834u;
        // 0x294838: 0xa0650001  sb          $a1, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29483Cu;
    // 0x29483c: 0x0  nop
    ctx->pc = 0x29483cu;
    // NOP
    ctx->pc = 0x294840u;
}
