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

// Function: sub_001C6FA8
// Address: 0x1c6fa8 - 0x1c6fc8
void sub_001C6FA8_0x1c6fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6FA8_0x1c6fa8");
#endif

    ctx->pc = 0x1c6fa8u;

    // 0x1c6fa8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1c6fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c6fac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6FACu;
    {
        const bool branch_taken_0x1c6fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6FACu;
        // 0x1c6fb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6fac) {
            ctx->pc = 0x1C6FBCu;
            goto label_1c6fbc;
        }
    }
    ctx->pc = 0x1C6FB4u;
    // 0x1c6fb4: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x1c6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x1c6fb8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1c6fb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c6fbc:
    // 0x1c6fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6FBCu;
        // 0x1c6fc0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6FC4u;
    // 0x1c6fc4: 0x0  nop
    ctx->pc = 0x1c6fc4u;
    // NOP
    ctx->pc = 0x1c6fc8u;
}
