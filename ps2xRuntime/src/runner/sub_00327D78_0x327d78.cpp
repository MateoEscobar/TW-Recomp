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

// Function: sub_00327D78
// Address: 0x327d78 - 0x327da0
void sub_00327D78_0x327d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327D78_0x327d78");
#endif

    ctx->pc = 0x327d78u;

    // 0x327d78: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x327d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x327d7c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x327d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x327d80: 0x24635100  addiu       $v1, $v1, 0x5100
    ctx->pc = 0x327d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20736));
    // 0x327d84: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x327d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x327d88: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x327d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x327d8c: 0x8ca60038  lw          $a2, 0x38($a1)
    ctx->pc = 0x327d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x327d90: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x327d90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x327d94: 0x3e00008  jr          $ra
    ctx->pc = 0x327D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D94u;
        // 0x327d98: 0xac860014  sw          $a2, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327D9Cu;
    // 0x327d9c: 0x0  nop
    ctx->pc = 0x327d9cu;
    // NOP
    ctx->pc = 0x327da0u;
}
