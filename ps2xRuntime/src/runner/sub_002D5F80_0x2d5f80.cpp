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

// Function: sub_002D5F80
// Address: 0x2d5f80 - 0x2d5f98
void sub_002D5F80_0x2d5f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5F80_0x2d5f80");
#endif

    ctx->pc = 0x2d5f80u;

    // 0x2d5f80: 0x90820030  lbu         $v0, 0x30($a0)
    ctx->pc = 0x2d5f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2d5f84: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5F84u;
    {
        const bool branch_taken_0x2d5f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F84u;
        // 0x2d5f88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5f84) {
            ctx->pc = 0x2D5F90u;
            goto label_2d5f90;
        }
    }
    ctx->pc = 0x2D5F8Cu;
    // 0x2d5f8c: 0xa0820030  sb          $v0, 0x30($a0)
    ctx->pc = 0x2d5f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 2));
label_2d5f90:
    // 0x2d5f90: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5F98u;
}
