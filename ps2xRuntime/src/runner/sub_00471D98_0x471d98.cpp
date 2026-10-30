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

// Function: sub_00471D98
// Address: 0x471d98 - 0x471db8
void sub_00471D98_0x471d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471D98_0x471d98");
#endif

    ctx->pc = 0x471d98u;

    // 0x471d98: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x471D98u;
    {
        const bool branch_taken_0x471d98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x471d98) {
            ctx->pc = 0x471D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471D98u;
            // 0x471d9c: 0xac850068  sw          $a1, 0x68($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471DACu;
            goto label_471dac;
        }
    }
    ctx->pc = 0x471DA0u;
    // 0x471da0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x471da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x471da4: 0x244518e0  addiu       $a1, $v0, 0x18E0
    ctx->pc = 0x471da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6368));
    // 0x471da8: 0xac850068  sw          $a1, 0x68($a0)
    ctx->pc = 0x471da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
label_471dac:
    // 0x471dac: 0x3e00008  jr          $ra
    ctx->pc = 0x471DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471DACu;
        // 0x471db0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x471DB4u;
    // 0x471db4: 0x0  nop
    ctx->pc = 0x471db4u;
    // NOP
    ctx->pc = 0x471db8u;
}
