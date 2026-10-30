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

// Function: sub_00295DD8
// Address: 0x295dd8 - 0x295e00
void sub_00295DD8_0x295dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295DD8_0x295dd8");
#endif

    ctx->pc = 0x295dd8u;

    // 0x295dd8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x295dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x295ddc: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295DDCu;
    {
        const bool branch_taken_0x295ddc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x295DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295DDCu;
        // 0x295de0: 0xa0850271  sb          $a1, 0x271($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 625), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ddc) {
            ctx->pc = 0x295DECu;
            goto label_295dec;
        }
    }
    ctx->pc = 0x295DE4u;
    // 0x295de4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x295DE4u;
    {
        const bool branch_taken_0x295de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295DE4u;
        // 0x295de8: 0xa0860272  sb          $a2, 0x272($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 626), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295de4) {
            ctx->pc = 0x295DF0u;
            goto label_295df0;
        }
    }
    ctx->pc = 0x295DECu;
label_295dec:
    // 0x295dec: 0xa0850272  sb          $a1, 0x272($a0)
    ctx->pc = 0x295decu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 626), (uint8_t)GPR_U32(ctx, 5));
label_295df0:
    // 0x295df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x295df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295df4: 0x3e00008  jr          $ra
    ctx->pc = 0x295DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295DF4u;
        // 0x295df8: 0xa0820274  sb          $v0, 0x274($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 628), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295DFCu;
    // 0x295dfc: 0x0  nop
    ctx->pc = 0x295dfcu;
    // NOP
    ctx->pc = 0x295e00u;
}
