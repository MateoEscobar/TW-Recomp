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

// Function: sub_003065F8
// Address: 0x3065f8 - 0x306630
void sub_003065F8_0x3065f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003065F8_0x3065f8");
#endif

    switch (ctx->pc) {
        case 0x306608u: goto label_306608;
        default: break;
    }

    ctx->pc = 0x3065f8u;

    // 0x3065f8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3065F8u;
    {
        const bool branch_taken_0x3065f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3065FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065F8u;
        // 0x3065fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3065f8) {
            ctx->pc = 0x306628u;
            goto label_306628;
        }
    }
    ctx->pc = 0x306600u;
    // 0x306600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306604: 0x2443b290  addiu       $v1, $v0, -0x4D70
    ctx->pc = 0x306604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947472));
label_306608:
    // 0x306608: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x306608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30660c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30660Cu;
    {
        const bool branch_taken_0x30660c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30660Cu;
        // 0x306610: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30660c) {
            ctx->pc = 0x30661Cu;
            goto label_30661c;
        }
    }
    ctx->pc = 0x306614u;
    // 0x306614: 0x3e00008  jr          $ra
    ctx->pc = 0x306614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306614u;
        // 0x306618: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30661Cu;
label_30661c:
    // 0x30661c: 0x2ca20020  sltiu       $v0, $a1, 0x20
    ctx->pc = 0x30661cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x306620: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x306620u;
    {
        const bool branch_taken_0x306620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306620u;
        // 0x306624: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306620) {
            ctx->pc = 0x306608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306608;
        }
    }
    ctx->pc = 0x306628u;
label_306628:
    // 0x306628: 0x3e00008  jr          $ra
    ctx->pc = 0x306628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306630u;
}
