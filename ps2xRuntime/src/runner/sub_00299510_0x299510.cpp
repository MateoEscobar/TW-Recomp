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

// Function: sub_00299510
// Address: 0x299510 - 0x299520
void sub_00299510_0x299510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299510_0x299510");
#endif

    ctx->pc = 0x299510u;

    // 0x299510: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x299510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x299514: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x299514u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x299518: 0x3e00008  jr          $ra
    ctx->pc = 0x299518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299518u;
        // 0x29951c: 0xa4640434  sh          $a0, 0x434($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1076), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299520u;
}
