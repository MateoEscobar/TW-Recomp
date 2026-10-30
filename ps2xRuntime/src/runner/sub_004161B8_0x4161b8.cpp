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

// Function: sub_004161B8
// Address: 0x4161b8 - 0x4161d8
void sub_004161B8_0x4161b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004161B8_0x4161b8");
#endif

    ctx->pc = 0x4161b8u;

    // 0x4161b8: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x4161b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x4161bc: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4161BCu;
    {
        const bool branch_taken_0x4161bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x4161C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4161BCu;
        // 0x4161c0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4161bc) {
            ctx->pc = 0x4161CCu;
            goto label_4161cc;
        }
    }
    ctx->pc = 0x4161C4u;
    // 0x4161c4: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x4161c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x4161c8: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x4161c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
label_4161cc:
    // 0x4161cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4161CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4161CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4161D4u;
    // 0x4161d4: 0x0  nop
    ctx->pc = 0x4161d4u;
    // NOP
    ctx->pc = 0x4161d8u;
}
