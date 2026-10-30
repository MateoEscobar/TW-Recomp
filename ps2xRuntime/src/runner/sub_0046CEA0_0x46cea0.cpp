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

// Function: sub_0046CEA0
// Address: 0x46cea0 - 0x46cec8
void sub_0046CEA0_0x46cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CEA0_0x46cea0");
#endif

    ctx->pc = 0x46cea0u;

    // 0x46cea0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x46cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x46cea4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x46CEA4u;
    {
        const bool branch_taken_0x46cea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cea4) {
            ctx->pc = 0x46CEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46CEA4u;
            // 0x46cea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46CEBCu;
            goto label_46cebc;
        }
    }
    ctx->pc = 0x46CEACu;
    // 0x46ceac: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x46ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x46ceb0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x46CEB0u;
    {
        const bool branch_taken_0x46ceb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CEB0u;
        // 0x46ceb4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ceb0) {
            ctx->pc = 0x46CEBCu;
            goto label_46cebc;
        }
    }
    ctx->pc = 0x46CEB8u;
    // 0x46ceb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46ceb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46cebc:
    // 0x46cebc: 0x3e00008  jr          $ra
    ctx->pc = 0x46CEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46CEC4u;
    // 0x46cec4: 0x0  nop
    ctx->pc = 0x46cec4u;
    // NOP
    ctx->pc = 0x46cec8u;
}
