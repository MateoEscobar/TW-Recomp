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

// Function: sub_0044EBC8
// Address: 0x44ebc8 - 0x44ebf8
void sub_0044EBC8_0x44ebc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044EBC8_0x44ebc8");
#endif

    ctx->pc = 0x44ebc8u;

    // 0x44ebc8: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x44ebc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x44ebcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44EBCCu;
    {
        const bool branch_taken_0x44ebcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ebcc) {
            ctx->pc = 0x44EBE4u;
            goto label_44ebe4;
        }
    }
    ctx->pc = 0x44EBD4u;
    // 0x44ebd4: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x44ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x44ebd8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x44ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x44ebdc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44ebe0: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x44ebe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44ebe4:
    // 0x44ebe4: 0x3e00008  jr          $ra
    ctx->pc = 0x44EBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EBECu;
    // 0x44ebec: 0x0  nop
    ctx->pc = 0x44ebecu;
    // NOP
    // 0x44ebf0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x44ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x44ebf4: 0x0  nop
    ctx->pc = 0x44ebf4u;
    // NOP
    ctx->pc = 0x44ebf8u;
}
