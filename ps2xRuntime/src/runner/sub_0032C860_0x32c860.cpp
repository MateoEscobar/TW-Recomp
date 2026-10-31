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

// Function: sub_0032C860
// Address: 0x32c860 - 0x32c890
void sub_0032C860_0x32c860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C860_0x32c860");
#endif

    switch (ctx->pc) {
        case 0x32c870u: goto label_32c870;
        default: break;
    }

    ctx->pc = 0x32c860u;

    // 0x32c860: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x32c860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x32c864: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32C864u;
    {
        const bool branch_taken_0x32c864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C864u;
        // 0x32c868: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c864) {
            ctx->pc = 0x32C888u;
            goto label_32c888;
        }
    }
    ctx->pc = 0x32C86Cu;
    // 0x32c86c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x32c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_32c870:
    // 0x32c870: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x32c870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32c874: 0x0  nop
    ctx->pc = 0x32c874u;
    // NOP
    // 0x32c878: 0x0  nop
    ctx->pc = 0x32c878u;
    // NOP
    // 0x32c87c: 0x0  nop
    ctx->pc = 0x32c87cu;
    // NOP
    // 0x32c880: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x32C880u;
    {
        const bool branch_taken_0x32c880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c880) {
            ctx->pc = 0x32C884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C880u;
            // 0x32c884: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c870;
        }
    }
    ctx->pc = 0x32C888u;
label_32c888:
    // 0x32c888: 0x3e00008  jr          $ra
    ctx->pc = 0x32C888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C888u;
        // 0x32c88c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C890u;
}
