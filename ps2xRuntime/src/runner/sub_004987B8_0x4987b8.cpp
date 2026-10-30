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

// Function: sub_004987B8
// Address: 0x4987b8 - 0x4987d8
void sub_004987B8_0x4987b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004987B8_0x4987b8");
#endif

    ctx->pc = 0x4987b8u;

    // 0x4987b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4987B8u;
    {
        const bool branch_taken_0x4987b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4987BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4987B8u;
        // 0x4987bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4987b8) {
            ctx->pc = 0x4987CCu;
            goto label_4987cc;
        }
    }
    ctx->pc = 0x4987C0u;
    // 0x4987c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4987c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4987c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4987c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4987c8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x4987c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_4987cc:
    // 0x4987cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4987CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4987D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4987CCu;
        // 0x4987d0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4987CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4987D4u;
    // 0x4987d4: 0x0  nop
    ctx->pc = 0x4987d4u;
    // NOP
    ctx->pc = 0x4987d8u;
}
