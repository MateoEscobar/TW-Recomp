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

// Function: sub_004236F0
// Address: 0x4236f0 - 0x423718
void sub_004236F0_0x4236f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004236F0_0x4236f0");
#endif

    ctx->pc = 0x4236f0u;

    // 0x4236f0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x4236f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x4236f4: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x4236f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6FE998u));
    // 0x4236f8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4236F8u;
    {
        const bool branch_taken_0x4236f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4236FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4236F8u;
        // 0x4236fc: 0x2465e998  addiu       $a1, $v1, -0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4236f8) {
            ctx->pc = 0x423704u;
            goto label_423704;
        }
    }
    ctx->pc = 0x423700u;
    // 0x423700: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x423700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_423704:
    // 0x423704: 0x3e00008  jr          $ra
    ctx->pc = 0x423704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42370Cu;
    // 0x42370c: 0x0  nop
    ctx->pc = 0x42370cu;
    // NOP
    // 0x423710: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x423710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x423714: 0x0  nop
    ctx->pc = 0x423714u;
    // NOP
    ctx->pc = 0x423718u;
}
