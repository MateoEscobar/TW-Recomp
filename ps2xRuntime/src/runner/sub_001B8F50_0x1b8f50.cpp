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

// Function: sub_001B8F50
// Address: 0x1b8f50 - 0x1b8f78
void sub_001B8F50_0x1b8f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8F50_0x1b8f50");
#endif

    ctx->pc = 0x1b8f50u;

    // 0x1b8f50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b8f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b8f54: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8F54u;
    {
        const bool branch_taken_0x1b8f54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8f54) {
            ctx->pc = 0x1B8F70u;
            goto label_1b8f70;
        }
    }
    ctx->pc = 0x1B8F5Cu;
    // 0x1b8f5c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8F5Cu;
    {
        const bool branch_taken_0x1b8f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F5Cu;
        // 0x1b8f60: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f5c) {
            ctx->pc = 0x1B8F70u;
            goto label_1b8f70;
        }
    }
    ctx->pc = 0x1B8F64u;
    // 0x1b8f64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1b8f68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b8f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b8f6c: 0xac622e48  sw          $v0, 0x2E48($v1)
    ctx->pc = 0x1b8f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11848), GPR_U32(ctx, 2));
label_1b8f70:
    // 0x1b8f70: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8F78u;
}
