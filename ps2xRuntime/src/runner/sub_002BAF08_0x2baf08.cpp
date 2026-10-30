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

// Function: sub_002BAF08
// Address: 0x2baf08 - 0x2baf20
void sub_002BAF08_0x2baf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAF08_0x2baf08");
#endif

    ctx->pc = 0x2baf08u;

    // 0x2baf08: 0x9082001c  lbu         $v0, 0x1C($a0)
    ctx->pc = 0x2baf08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2baf0c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BAF0Cu;
    {
        const bool branch_taken_0x2baf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF0Cu;
        // 0x2baf10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf0c) {
            ctx->pc = 0x2BAF18u;
            goto label_2baf18;
        }
    }
    ctx->pc = 0x2BAF14u;
    // 0x2baf14: 0xa082001d  sb          $v0, 0x1D($a0)
    ctx->pc = 0x2baf14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 2));
label_2baf18:
    // 0x2baf18: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAF20u;
}
