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

// Function: sub_00473E70
// Address: 0x473e70 - 0x473ea0
void sub_00473E70_0x473e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473E70_0x473e70");
#endif

    ctx->pc = 0x473e70u;

    // 0x473e70: 0x8f858a88  lw          $a1, -0x7578($gp)
    ctx->pc = 0x473e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x473e74: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x473E74u;
    {
        const bool branch_taken_0x473e74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x473E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473E74u;
        // 0x473e78: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473e74) {
            ctx->pc = 0x473E88u;
            goto label_473e88;
        }
    }
    ctx->pc = 0x473E7Cu;
    // 0x473e7c: 0x2462ad18  addiu       $v0, $v1, -0x52E8
    ctx->pc = 0x473e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x473e80: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x473e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x473e84: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x473e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_473e88:
    // 0x473e88: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x473e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x473e8c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x473e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473e90: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x473e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x473e94: 0x3e00008  jr          $ra
    ctx->pc = 0x473E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473E94u;
        // 0x473e98: 0xac640040  sw          $a0, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473E9Cu;
    // 0x473e9c: 0x0  nop
    ctx->pc = 0x473e9cu;
    // NOP
    ctx->pc = 0x473ea0u;
}
