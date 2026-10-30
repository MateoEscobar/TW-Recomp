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

// Function: sub_0010B9A8
// Address: 0x10b9a8 - 0x10b9d0
void sub_0010B9A8_0x10b9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B9A8_0x10b9a8");
#endif

    ctx->pc = 0x10b9a8u;

    // 0x10b9a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x10b9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10b9ac: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B9ACu;
    {
        const bool branch_taken_0x10b9ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x10b9ac) {
            ctx->pc = 0x10B9C4u;
            goto label_10b9c4;
        }
    }
    ctx->pc = 0x10B9B4u;
    // 0x10b9b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B9B4u;
    {
        const bool branch_taken_0x10b9b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B9B4u;
        // 0x10b9b8: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b9b4) {
            ctx->pc = 0x10B9C4u;
            goto label_10b9c4;
        }
    }
    ctx->pc = 0x10B9BCu;
    // 0x10b9bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b9c0: 0xac627210  sw          $v0, 0x7210($v1)
    ctx->pc = 0x10b9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29200), GPR_U32(ctx, 2));
label_10b9c4:
    // 0x10b9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x10B9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B9CCu;
    // 0x10b9cc: 0x0  nop
    ctx->pc = 0x10b9ccu;
    // NOP
    ctx->pc = 0x10b9d0u;
}
