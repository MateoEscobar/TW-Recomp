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

// Function: sub_0044EBF8
// Address: 0x44ebf8 - 0x44ec20
void sub_0044EBF8_0x44ebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044EBF8_0x44ebf8");
#endif

    ctx->pc = 0x44ebf8u;

    // 0x44ebf8: 0x8f858418  lw          $a1, -0x7BE8($gp)
    ctx->pc = 0x44ebf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x44ebfc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x44ebfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ec00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x44ec00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x44ec04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44ec08: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x44ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x44ec0c: 0x8c65003c  lw          $a1, 0x3C($v1)
    ctx->pc = 0x44ec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x44ec10: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x44ec10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x44ec14: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x44ec14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x44ec18: 0x3e00008  jr          $ra
    ctx->pc = 0x44EC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EC18u;
        // 0x44ec1c: 0xac640040  sw          $a0, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EC20u;
}
