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

// Function: sub_00338D08
// Address: 0x338d08 - 0x338d30
void sub_00338D08_0x338d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338D08_0x338d08");
#endif

    ctx->pc = 0x338d08u;

    // 0x338d08: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x338d08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x338d0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338d10: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x338d10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x338d14: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x338d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x338d18: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x338d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x338d1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x338d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x338d20: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x338d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x338d24: 0x3e00008  jr          $ra
    ctx->pc = 0x338D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338D24u;
        // 0x338d28: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338D2Cu;
    // 0x338d2c: 0x0  nop
    ctx->pc = 0x338d2cu;
    // NOP
    ctx->pc = 0x338d30u;
}
