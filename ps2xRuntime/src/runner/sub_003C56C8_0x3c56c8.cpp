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

// Function: sub_003C56C8
// Address: 0x3c56c8 - 0x3c56f0
void sub_003C56C8_0x3c56c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C56C8_0x3c56c8");
#endif

    ctx->pc = 0x3c56c8u;

    // 0x3c56c8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C56C8u;
    {
        const bool branch_taken_0x3c56c8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3C56CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C56C8u;
        // 0x3c56cc: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c56c8) {
            ctx->pc = 0x3C56D8u;
            goto label_3c56d8;
        }
    }
    ctx->pc = 0x3C56D0u;
    // 0x3c56d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C56D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C56D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C56D0u;
        // 0x3c56d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C56D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C56D8u;
label_3c56d8:
    // 0x3c56d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3c56d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3c56dc: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3c56dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3c56e0: 0x24422f28  addiu       $v0, $v0, 0x2F28
    ctx->pc = 0x3c56e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12072));
    // 0x3c56e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C56E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C56E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C56E4u;
        // 0x3c56e8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C56E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C56ECu;
    // 0x3c56ec: 0x0  nop
    ctx->pc = 0x3c56ecu;
    // NOP
    ctx->pc = 0x3c56f0u;
}
