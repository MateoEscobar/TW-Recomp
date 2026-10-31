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

// Function: sub_0010F5C8
// Address: 0x10f5c8 - 0x10f5f0
void sub_0010F5C8_0x10f5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F5C8_0x10f5c8");
#endif

    ctx->pc = 0x10f5c8u;

    // 0x10f5c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x10f5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10f5cc: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F5CCu;
    {
        const bool branch_taken_0x10f5cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x10f5cc) {
            ctx->pc = 0x10F5E8u;
            goto label_10f5e8;
        }
    }
    ctx->pc = 0x10F5D4u;
    // 0x10f5d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F5D4u;
    {
        const bool branch_taken_0x10f5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5D4u;
        // 0x10f5d8: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f5d4) {
            ctx->pc = 0x10F5E8u;
            goto label_10f5e8;
        }
    }
    ctx->pc = 0x10F5DCu;
    // 0x10f5dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10f5e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10f5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10f5e4: 0xac628690  sw          $v0, -0x7970($v1)
    ctx->pc = 0x10f5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936208), GPR_U32(ctx, 2));
label_10f5e8:
    // 0x10f5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F5F0u;
}
