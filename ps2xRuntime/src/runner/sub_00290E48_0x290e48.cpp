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

// Function: sub_00290E48
// Address: 0x290e48 - 0x290e78
void sub_00290E48_0x290e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290E48_0x290e48");
#endif

    ctx->pc = 0x290e48u;

    // 0x290e48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x290e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x290e4c: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x290e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x290e50: 0x8c8201e8  lw          $v0, 0x1E8($a0)
    ctx->pc = 0x290e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x290e54: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x290e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x290e58: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x290e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x290e5c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x290E5Cu;
    {
        const bool branch_taken_0x290e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290e5c) {
            ctx->pc = 0x290E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290E5Cu;
            // 0x290e60: 0xac8301e8  sw          $v1, 0x1E8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 488), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290E64u;
            goto label_290e64;
        }
    }
    ctx->pc = 0x290E64u;
label_290e64:
    // 0x290e64: 0x8c8201e8  lw          $v0, 0x1E8($a0)
    ctx->pc = 0x290e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x290e68: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x290e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x290e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x290E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E6Cu;
        // 0x290e70: 0xac8201e8  sw          $v0, 0x1E8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290E74u;
    // 0x290e74: 0x0  nop
    ctx->pc = 0x290e74u;
    // NOP
    ctx->pc = 0x290e78u;
}
