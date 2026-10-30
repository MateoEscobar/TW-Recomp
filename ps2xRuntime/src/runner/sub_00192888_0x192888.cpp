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

// Function: sub_00192888
// Address: 0x192888 - 0x1928a8
void sub_00192888_0x192888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192888_0x192888");
#endif

    ctx->pc = 0x192888u;

    // 0x192888: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x192888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x19288c: 0x8c43cd98  lw          $v1, -0x3268($v0)
    ctx->pc = 0x19288cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CD98u));
    // 0x192890: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x192890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192894: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x192894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x192898: 0x3e00008  jr          $ra
    ctx->pc = 0x192898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192898u;
        // 0x19289c: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1928A0u;
    // 0x1928a0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1928a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1928a4: 0x0  nop
    ctx->pc = 0x1928a4u;
    // NOP
    ctx->pc = 0x1928a8u;
}
