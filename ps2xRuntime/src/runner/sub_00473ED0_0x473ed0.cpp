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

// Function: sub_00473ED0
// Address: 0x473ed0 - 0x473f00
void sub_00473ED0_0x473ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473ED0_0x473ed0");
#endif

    ctx->pc = 0x473ed0u;

    // 0x473ed0: 0x8f858a88  lw          $a1, -0x7578($gp)
    ctx->pc = 0x473ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x473ed4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x473ED4u;
    {
        const bool branch_taken_0x473ed4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x473ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473ED4u;
        // 0x473ed8: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473ed4) {
            ctx->pc = 0x473EE8u;
            goto label_473ee8;
        }
    }
    ctx->pc = 0x473EDCu;
    // 0x473edc: 0x2462ad18  addiu       $v0, $v1, -0x52E8
    ctx->pc = 0x473edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x473ee0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x473ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x473ee4: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x473ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_473ee8:
    // 0x473ee8: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x473ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x473eec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x473eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473ef0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x473ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x473ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x473EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473EF4u;
        // 0x473ef8: 0xac640044  sw          $a0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473EFCu;
    // 0x473efc: 0x0  nop
    ctx->pc = 0x473efcu;
    // NOP
    ctx->pc = 0x473f00u;
}
