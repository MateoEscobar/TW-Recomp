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

// Function: sub_004629E8
// Address: 0x4629e8 - 0x462a08
void sub_004629E8_0x4629e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004629E8_0x4629e8");
#endif

    ctx->pc = 0x4629e8u;

    // 0x4629e8: 0x8f828890  lw          $v0, -0x7770($gp)
    ctx->pc = 0x4629e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936720)));
    // 0x4629ec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4629ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4629f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4629F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4629F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4629F0u;
        // 0x4629f4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4629F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4629F8u;
    // 0x4629f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4629f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4629fc: 0x0  nop
    ctx->pc = 0x4629fcu;
    // NOP
    // 0x462a00: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x462a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x462a04: 0x0  nop
    ctx->pc = 0x462a04u;
    // NOP
    ctx->pc = 0x462a08u;
}
