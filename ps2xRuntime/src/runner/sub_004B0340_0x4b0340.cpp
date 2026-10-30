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

// Function: sub_004B0340
// Address: 0x4b0340 - 0x4b0360
void sub_004B0340_0x4b0340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0340_0x4b0340");
#endif

    ctx->pc = 0x4b0340u;

    // 0x4b0340: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b0340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b0344: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4b0344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4b0348: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B0348u;
    {
        const bool branch_taken_0x4b0348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0348) {
            ctx->pc = 0x4B0358u;
            goto label_4b0358;
        }
    }
    ctx->pc = 0x4B0350u;
    // 0x4b0350: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0350u;
        // 0x4b0354: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0358u;
label_4b0358:
    // 0x4b0358: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0358u;
        // 0x4b035c: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0360u;
}
