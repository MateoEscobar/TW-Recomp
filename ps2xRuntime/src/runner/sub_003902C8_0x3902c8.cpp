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

// Function: sub_003902C8
// Address: 0x3902c8 - 0x3902f0
void sub_003902C8_0x3902c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003902C8_0x3902c8");
#endif

    ctx->pc = 0x3902c8u;

    // 0x3902c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3902c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3902cc: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3902CCu;
    {
        const bool branch_taken_0x3902cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3902cc) {
            ctx->pc = 0x3902E8u;
            goto label_3902e8;
        }
    }
    ctx->pc = 0x3902D4u;
    // 0x3902d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3902D4u;
    {
        const bool branch_taken_0x3902d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3902D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3902D4u;
        // 0x3902d8: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3902d4) {
            ctx->pc = 0x3902E8u;
            goto label_3902e8;
        }
    }
    ctx->pc = 0x3902DCu;
    // 0x3902dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3902dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3902e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3902e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3902e4: 0xac62bd30  sw          $v0, -0x42D0($v1)
    ctx->pc = 0x3902e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950192), GPR_U32(ctx, 2));
label_3902e8:
    // 0x3902e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3902E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3902E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3902F0u;
}
