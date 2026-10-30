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

// Function: sub_004AFD78
// Address: 0x4afd78 - 0x4afda0
void sub_004AFD78_0x4afd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFD78_0x4afd78");
#endif

    ctx->pc = 0x4afd78u;

    // 0x4afd78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4afd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4afd7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AFD7Cu;
    {
        const bool branch_taken_0x4afd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFD7Cu;
        // 0x4afd80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afd7c) {
            ctx->pc = 0x4AFD94u;
            goto label_4afd94;
        }
    }
    ctx->pc = 0x4AFD84u;
    // 0x4afd84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4afd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4afd88: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x4afd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x4afd8c: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x4afd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x4afd90: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x4afd90u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4afd94:
    // 0x4afd94: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFD94u;
        // 0x4afd98: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFD9Cu;
    // 0x4afd9c: 0x0  nop
    ctx->pc = 0x4afd9cu;
    // NOP
    ctx->pc = 0x4afda0u;
}
