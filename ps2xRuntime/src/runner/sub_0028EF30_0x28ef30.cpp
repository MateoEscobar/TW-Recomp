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

// Function: sub_0028EF30
// Address: 0x28ef30 - 0x28ef48
void sub_0028EF30_0x28ef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EF30_0x28ef30");
#endif

    ctx->pc = 0x28ef30u;

    // 0x28ef30: 0x90820152  lbu         $v0, 0x152($a0)
    ctx->pc = 0x28ef30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 338)));
    // 0x28ef34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28EF34u;
    {
        const bool branch_taken_0x28ef34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF34u;
        // 0x28ef38: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef34) {
            ctx->pc = 0x28EF40u;
            goto label_28ef40;
        }
    }
    ctx->pc = 0x28EF3Cu;
    // 0x28ef3c: 0xa0820152  sb          $v0, 0x152($a0)
    ctx->pc = 0x28ef3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 338), (uint8_t)GPR_U32(ctx, 2));
label_28ef40:
    // 0x28ef40: 0x3e00008  jr          $ra
    ctx->pc = 0x28EF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EF48u;
}
