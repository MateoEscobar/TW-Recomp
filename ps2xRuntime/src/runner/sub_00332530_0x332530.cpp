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

// Function: sub_00332530
// Address: 0x332530 - 0x332570
void sub_00332530_0x332530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332530_0x332530");
#endif

    switch (ctx->pc) {
        case 0x332540u: goto label_332540;
        default: break;
    }

    ctx->pc = 0x332530u;

    // 0x332530: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x332530u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x332534: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x332534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332538: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x332538u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33253c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33253cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_332540:
    // 0x332540: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x332540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x332544: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x332544u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x332548: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x332548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x33254c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x33254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x332550: 0x28c3000f  slti        $v1, $a2, 0xF
    ctx->pc = 0x332550u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x332554: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x332554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x332558: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x332558u;
    {
        const bool branch_taken_0x332558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332558u;
        // 0x33255c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332558) {
            ctx->pc = 0x332540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332540;
        }
    }
    ctx->pc = 0x332560u;
    // 0x332560: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x332560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x332564: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x332564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x332568: 0x3e00008  jr          $ra
    ctx->pc = 0x332568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332568u;
        // 0x33256c: 0xac40003c  sw          $zero, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332570u;
}
