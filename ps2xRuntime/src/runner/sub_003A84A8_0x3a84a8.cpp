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

// Function: sub_003A84A8
// Address: 0x3a84a8 - 0x3a84c8
void sub_003A84A8_0x3a84a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A84A8_0x3a84a8");
#endif

    ctx->pc = 0x3a84a8u;

    // 0x3a84a8: 0x8ca30400  lw          $v1, 0x400($a1)
    ctx->pc = 0x3a84a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1024)));
    // 0x3a84ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a84acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a84b0: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x3a84b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a84b4: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x3a84b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3a84b8: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x3a84b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x3a84bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A84BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A84BCu;
        // 0x3a84c0: 0xaca30400  sw          $v1, 0x400($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A84BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A84C4u;
    // 0x3a84c4: 0x0  nop
    ctx->pc = 0x3a84c4u;
    // NOP
    ctx->pc = 0x3a84c8u;
}
