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

// Function: sub_00473EA0
// Address: 0x473ea0 - 0x473ed0
void sub_00473EA0_0x473ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473EA0_0x473ea0");
#endif

    ctx->pc = 0x473ea0u;

    // 0x473ea0: 0x8f858a88  lw          $a1, -0x7578($gp)
    ctx->pc = 0x473ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x473ea4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x473EA4u;
    {
        const bool branch_taken_0x473ea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x473EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473EA4u;
        // 0x473ea8: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473ea4) {
            ctx->pc = 0x473EB8u;
            goto label_473eb8;
        }
    }
    ctx->pc = 0x473EACu;
    // 0x473eac: 0x2462ad18  addiu       $v0, $v1, -0x52E8
    ctx->pc = 0x473eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x473eb0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x473eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x473eb4: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x473eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_473eb8:
    // 0x473eb8: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x473eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x473ebc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x473ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473ec0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x473ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x473ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x473EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473EC4u;
        // 0x473ec8: 0xac64003c  sw          $a0, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473ECCu;
    // 0x473ecc: 0x0  nop
    ctx->pc = 0x473eccu;
    // NOP
    ctx->pc = 0x473ed0u;
}
