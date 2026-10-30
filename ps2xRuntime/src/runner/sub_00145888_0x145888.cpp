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

// Function: sub_00145888
// Address: 0x145888 - 0x1458b0
void sub_00145888_0x145888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145888_0x145888");
#endif

    ctx->pc = 0x145888u;

    // 0x145888: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x145888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14588c: 0xac850090  sw          $a1, 0x90($a0)
    ctx->pc = 0x14588cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 5));
    // 0x145890: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x145890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x145894: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x145894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x145898: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x145898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14589c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14589cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1458a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1458A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1458A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1458A0u;
        // 0x1458a4: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1458A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1458A8u;
    // 0x1458a8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1458a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1458ac: 0x0  nop
    ctx->pc = 0x1458acu;
    // NOP
    ctx->pc = 0x1458b0u;
}
