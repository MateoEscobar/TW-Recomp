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

// Function: sub_002E8840
// Address: 0x2e8840 - 0x2e8858
void sub_002E8840_0x2e8840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8840_0x2e8840");
#endif

    ctx->pc = 0x2e8840u;

    // 0x2e8840: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x2e8840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e8844: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E8844u;
    {
        const bool branch_taken_0x2e8844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8844) {
            ctx->pc = 0x2E8848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8844u;
            // 0x2e8848: 0xa085003f  sb          $a1, 0x3F($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 63), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E884Cu;
            goto label_2e884c;
        }
    }
    ctx->pc = 0x2E884Cu;
label_2e884c:
    // 0x2e884c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E884Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E884Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8854u;
    // 0x2e8854: 0x0  nop
    ctx->pc = 0x2e8854u;
    // NOP
    ctx->pc = 0x2e8858u;
}
