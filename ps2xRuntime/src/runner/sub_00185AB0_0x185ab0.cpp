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

// Function: sub_00185AB0
// Address: 0x185ab0 - 0x185ae0
void sub_00185AB0_0x185ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185AB0_0x185ab0");
#endif

    ctx->pc = 0x185ab0u;

    // 0x185ab0: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x185ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x185ab4: 0xa61818  mult        $v1, $a1, $a2
    ctx->pc = 0x185ab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x185ab8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x185ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x185abc: 0x904318dc  lbu         $v1, 0x18DC($v0)
    ctx->pc = 0x185abcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6364)));
    // 0x185ac0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x185AC0u;
    {
        const bool branch_taken_0x185ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x185AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AC0u;
        // 0x185ac4: 0xa61018  mult        $v0, $a1, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ac0) {
            ctx->pc = 0x185AD0u;
            goto label_185ad0;
        }
    }
    ctx->pc = 0x185AC8u;
    // 0x185ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x185AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AC8u;
        // 0x185acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185AD0u;
label_185ad0:
    // 0x185ad0: 0x2442189c  addiu       $v0, $v0, 0x189C
    ctx->pc = 0x185ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6300));
    // 0x185ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x185AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AD4u;
        // 0x185ad8: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185ADCu;
    // 0x185adc: 0x0  nop
    ctx->pc = 0x185adcu;
    // NOP
    ctx->pc = 0x185ae0u;
}
