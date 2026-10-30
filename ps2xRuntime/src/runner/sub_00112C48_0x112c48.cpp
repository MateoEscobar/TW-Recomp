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

// Function: sub_00112C48
// Address: 0x112c48 - 0x112c60
void sub_00112C48_0x112c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112C48_0x112c48");
#endif

    ctx->pc = 0x112c48u;

    // 0x112c48: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x112C48u;
    {
        const bool branch_taken_0x112c48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C48u;
        // 0x112c4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c48) {
            ctx->pc = 0x112C58u;
            goto label_112c58;
        }
    }
    ctx->pc = 0x112C50u;
    // 0x112c50: 0xac8201dc  sw          $v0, 0x1DC($a0)
    ctx->pc = 0x112c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 476), GPR_U32(ctx, 2));
    // 0x112c54: 0xac8201d8  sw          $v0, 0x1D8($a0)
    ctx->pc = 0x112c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 472), GPR_U32(ctx, 2));
label_112c58:
    // 0x112c58: 0x3e00008  jr          $ra
    ctx->pc = 0x112C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112C60u;
}
