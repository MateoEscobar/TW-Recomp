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

// Function: sub_002D7C68
// Address: 0x2d7c68 - 0x2d7ca8
void sub_002D7C68_0x2d7c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7C68_0x2d7c68");
#endif

    switch (ctx->pc) {
        case 0x2d7c80u: goto label_2d7c80;
        default: break;
    }

    ctx->pc = 0x2d7c68u;

    // 0x2d7c68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d7c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d7c6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d7c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7c70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d7c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7c78: 0x24440468  addiu       $a0, $v0, 0x468
    ctx->pc = 0x2d7c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1128));
    // 0x2d7c7c: 0x0  nop
    ctx->pc = 0x2d7c7cu;
    // NOP
label_2d7c80:
    // 0x2d7c80: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2d7c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2d7c84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d7c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d7c88: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x2d7c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2d7c8c: 0x2ca30003  sltiu       $v1, $a1, 0x3
    ctx->pc = 0x2d7c8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d7c90: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d7c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d7c94: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D7C94u;
    {
        const bool branch_taken_0x2d7c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C94u;
        // 0x2d7c98: 0xc23024  and         $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c94) {
            ctx->pc = 0x2D7C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7c80;
        }
    }
    ctx->pc = 0x2D7C9Cu;
    // 0x2d7c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C9Cu;
        // 0x2d7ca0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7CA4u;
    // 0x2d7ca4: 0x0  nop
    ctx->pc = 0x2d7ca4u;
    // NOP
    ctx->pc = 0x2d7ca8u;
}
