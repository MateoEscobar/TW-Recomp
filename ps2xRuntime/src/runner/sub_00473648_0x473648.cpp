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

// Function: sub_00473648
// Address: 0x473648 - 0x473678
void sub_00473648_0x473648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473648_0x473648");
#endif

    ctx->pc = 0x473648u;

    // 0x473648: 0x8f838520  lw          $v1, -0x7AE0($gp)
    ctx->pc = 0x473648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935840)));
    // 0x47364c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x47364cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473650: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x473650u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x473654: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x473654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x473658: 0x24c6ad18  addiu       $a2, $a2, -0x52E8
    ctx->pc = 0x473658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946072));
    // 0x47365c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x47365cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x473660: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x473660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
    // 0x473664: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x473664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x473668: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x473668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x47366c: 0x3e00008  jr          $ra
    ctx->pc = 0x47366Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47366Cu;
        // 0x473670: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47366Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473674u;
    // 0x473674: 0x0  nop
    ctx->pc = 0x473674u;
    // NOP
    ctx->pc = 0x473678u;
}
