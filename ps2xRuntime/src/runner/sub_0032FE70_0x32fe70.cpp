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

// Function: sub_0032FE70
// Address: 0x32fe70 - 0x32fe90
void sub_0032FE70_0x32fe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FE70_0x32fe70");
#endif

    ctx->pc = 0x32fe70u;

    // 0x32fe70: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32fe70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fe74: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32FE74u;
    {
        const bool branch_taken_0x32fe74 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x32fe74) {
            ctx->pc = 0x32FE84u;
            goto label_32fe84;
        }
    }
    ctx->pc = 0x32FE7Cu;
    // 0x32fe7c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x32fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x32fe80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32fe84:
    // 0x32fe84: 0x3e00008  jr          $ra
    ctx->pc = 0x32FE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FE8Cu;
    // 0x32fe8c: 0x0  nop
    ctx->pc = 0x32fe8cu;
    // NOP
    ctx->pc = 0x32fe90u;
}
