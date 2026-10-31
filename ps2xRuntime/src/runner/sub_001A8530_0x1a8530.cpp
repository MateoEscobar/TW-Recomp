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

// Function: sub_001A8530
// Address: 0x1a8530 - 0x1a8568
void sub_001A8530_0x1a8530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8530_0x1a8530");
#endif

    ctx->pc = 0x1a8530u;

    // 0x1a8530: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x1a8530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1a8534: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A8534u;
    {
        const bool branch_taken_0x1a8534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8534u;
        // 0x1a8538: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8534) {
            ctx->pc = 0x1A8584u;
            return;
        }
    }
    ctx->pc = 0x1A853Cu;
    // 0x1a853c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1a853cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1a8540: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a8540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a8544: 0x24423fe0  addiu       $v0, $v0, 0x3FE0
    ctx->pc = 0x1a8544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16352));
    // 0x1a8548: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a8548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a854c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a854cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a8550: 0x800008  jr          $a0
    ctx->pc = 0x1A8550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8558u: goto label_1a8558;
            case 0x1A8560u: goto label_1a8560;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8550u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A8558u;
label_1a8558:
    // 0x1a8558: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A8558u;
    {
        const bool branch_taken_0x1a8558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8558u;
        // 0x1a855c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8558) {
            ctx->pc = 0x1A8584u;
            return;
        }
    }
    ctx->pc = 0x1A8560u;
label_1a8560:
    // 0x1a8560: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8560u;
    {
        const bool branch_taken_0x1a8560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8560u;
        // 0x1a8564: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8560) {
            ctx->pc = 0x1A8584u;
            return;
        }
    }
    ctx->pc = 0x1A8568u;
}
