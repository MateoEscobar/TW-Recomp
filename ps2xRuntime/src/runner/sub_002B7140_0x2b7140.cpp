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

// Function: sub_002B7140
// Address: 0x2b7140 - 0x2b7178
void sub_002B7140_0x2b7140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7140_0x2b7140");
#endif

    ctx->pc = 0x2b7140u;

    // 0x2b7140: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2b7140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2b7144: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b7144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b7148: 0x2442fdf0  addiu       $v0, $v0, -0x210
    ctx->pc = 0x2b7148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966768));
    // 0x2b714c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2b714cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2b7150: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2b7150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2b7154: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2b7154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2b7158: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2b7158u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b715c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b715cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7160: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2b7160u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7164: 0x8ca3bd30  lw          $v1, -0x42D0($a1)
    ctx->pc = 0x2b7164u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2b7168: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2b7168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2b716c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2b716cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2b7170: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7170u;
        // 0x2b7174: 0xa0800018  sb          $zero, 0x18($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7178u;
}
