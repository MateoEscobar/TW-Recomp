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

// Function: sub_00150B48
// Address: 0x150b48 - 0x150b70
void sub_00150B48_0x150b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150B48_0x150b48");
#endif

    ctx->pc = 0x150b48u;

    // 0x150b48: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x150b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x150b4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x150b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x150b50: 0x8c85c510  lw          $a1, -0x3AF0($a0)
    ctx->pc = 0x150b50u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50C510u));
    // 0x150b54: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x150b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x150b58: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x150B58u;
    {
        const bool branch_taken_0x150b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x150B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B58u;
        // 0x150b5c: 0xac82c510  sw          $v0, -0x3AF0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294952208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150b58) {
            ctx->pc = 0x150B64u;
            goto label_150b64;
        }
    }
    ctx->pc = 0x150B60u;
    // 0x150b60: 0xac80c510  sw          $zero, -0x3AF0($a0)
    ctx->pc = 0x150b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952208), GPR_U32(ctx, 0));
label_150b64:
    // 0x150b64: 0x3e00008  jr          $ra
    ctx->pc = 0x150B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B64u;
        // 0x150b68: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150B6Cu;
    // 0x150b6c: 0x0  nop
    ctx->pc = 0x150b6cu;
    // NOP
    ctx->pc = 0x150b70u;
}
