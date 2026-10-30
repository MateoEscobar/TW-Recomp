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

// Function: sub_003265C0
// Address: 0x3265c0 - 0x3265f0
void sub_003265C0_0x3265c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003265C0_0x3265c0");
#endif

    ctx->pc = 0x3265c0u;

    // 0x3265c0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3265c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3265c4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3265c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3265c8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3265c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3265cc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3265CCu;
    {
        const bool branch_taken_0x3265cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3265cc) {
            ctx->pc = 0x3265D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3265CCu;
            // 0x3265d0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3265DCu;
            goto label_3265dc;
        }
    }
    ctx->pc = 0x3265D4u;
    // 0x3265d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3265D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3265D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265D4u;
        // 0x3265d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3265D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3265DCu;
label_3265dc:
    // 0x3265dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3265dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3265e0: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x3265e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3265e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3265e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3265e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3265E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3265ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265E8u;
        // 0x3265ec: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3265E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3265F0u;
}
