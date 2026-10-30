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

// Function: sub_00294888
// Address: 0x294888 - 0x2948a0
void sub_00294888_0x294888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294888_0x294888");
#endif

    ctx->pc = 0x294888u;

    // 0x294888: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x294888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29488c: 0x2c830065  sltiu       $v1, $a0, 0x65
    ctx->pc = 0x29488cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x294890: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x294890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x294894: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x294894u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x294898: 0x3e00008  jr          $ra
    ctx->pc = 0x294898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294898u;
        // 0x29489c: 0xa0a20adf  sb          $v0, 0xADF($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2783), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2948A0u;
}
