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

// Function: sub_00392510
// Address: 0x392510 - 0x392520
void sub_00392510_0x392510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392510_0x392510");
#endif

    ctx->pc = 0x392510u;

    // 0x392510: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x392510u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x392514: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x392514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x392518: 0x3e00008  jr          $ra
    ctx->pc = 0x392518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392518u;
        // 0x39251c: 0xa0850109  sb          $a1, 0x109($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 265), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392520u;
}
