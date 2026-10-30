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

// Function: sub_00157588
// Address: 0x157588 - 0x1575b8
void sub_00157588_0x157588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157588_0x157588");
#endif

    ctx->pc = 0x157588u;

    // 0x157588: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x157588u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15758c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15758cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x157590: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x157590u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x157594: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x157594u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x157598: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x157598u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x15759c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x15759cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1575a0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1575a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1575a4: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x1575a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x1575a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1575a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1575ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1575ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1575B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575ACu;
        // 0x1575b0: 0xa4880100  sh          $t0, 0x100($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1575ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1575B4u;
    // 0x1575b4: 0x0  nop
    ctx->pc = 0x1575b4u;
    // NOP
    ctx->pc = 0x1575b8u;
}
