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

// Function: sub_002D4F00
// Address: 0x2d4f00 - 0x2d4f40
void sub_002D4F00_0x2d4f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4F00_0x2d4f00");
#endif

    switch (ctx->pc) {
        case 0x2d4f18u: goto label_2d4f18;
        default: break;
    }

    ctx->pc = 0x2d4f00u;

    // 0x2d4f00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d4f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4f04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d4f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4f08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d4f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4f10: 0x24440468  addiu       $a0, $v0, 0x468
    ctx->pc = 0x2d4f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1128));
    // 0x2d4f14: 0x0  nop
    ctx->pc = 0x2d4f14u;
    // NOP
label_2d4f18:
    // 0x2d4f18: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2d4f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2d4f1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d4f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d4f20: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x2d4f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2d4f24: 0x2ca30003  sltiu       $v1, $a1, 0x3
    ctx->pc = 0x2d4f24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d4f28: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d4f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d4f2c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D4F2Cu;
    {
        const bool branch_taken_0x2d4f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F2Cu;
        // 0x2d4f30: 0xc23024  and         $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4f2c) {
            ctx->pc = 0x2D4F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4f18;
        }
    }
    ctx->pc = 0x2D4F34u;
    // 0x2d4f34: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F34u;
        // 0x2d4f38: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4F3Cu;
    // 0x2d4f3c: 0x0  nop
    ctx->pc = 0x2d4f3cu;
    // NOP
    ctx->pc = 0x2d4f40u;
}
