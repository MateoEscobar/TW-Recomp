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

// Function: sub_00290698
// Address: 0x290698 - 0x2906b8
void sub_00290698_0x290698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290698_0x290698");
#endif

    ctx->pc = 0x290698u;

    // 0x290698: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x290698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29069c: 0x8c8501e8  lw          $a1, 0x1E8($a0)
    ctx->pc = 0x29069cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x2906a0: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2906a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2906a4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2906a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2906a8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2906a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2906ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2906ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2906B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906ACu;
        // 0x2906b0: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2906ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2906B4u;
    // 0x2906b4: 0x0  nop
    ctx->pc = 0x2906b4u;
    // NOP
    ctx->pc = 0x2906b8u;
}
