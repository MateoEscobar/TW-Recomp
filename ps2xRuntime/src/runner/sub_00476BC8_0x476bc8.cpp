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

// Function: sub_00476BC8
// Address: 0x476bc8 - 0x476c00
void sub_00476BC8_0x476bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00476BC8_0x476bc8");
#endif

    ctx->pc = 0x476bc8u;

    // 0x476bc8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x476bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476bcc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x476BCCu;
    {
        const bool branch_taken_0x476bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x476bcc) {
            ctx->pc = 0x476BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x476BCCu;
            // 0x476bd0: 0x8c430014  lw          $v1, 0x14($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x476BDCu;
            goto label_476bdc;
        }
    }
    ctx->pc = 0x476BD4u;
    // 0x476bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x476BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476BD4u;
        // 0x476bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476BDCu;
label_476bdc:
    // 0x476bdc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x476BDCu;
    {
        const bool branch_taken_0x476bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x476bdc) {
            ctx->pc = 0x476BECu;
            goto label_476bec;
        }
    }
    ctx->pc = 0x476BE4u;
    // 0x476be4: 0x3e00008  jr          $ra
    ctx->pc = 0x476BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476BE4u;
        // 0x476be8: 0xac650018  sw          $a1, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476BECu;
label_476bec:
    // 0x476bec: 0x3e00008  jr          $ra
    ctx->pc = 0x476BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476BECu;
        // 0x476bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476BF4u;
    // 0x476bf4: 0x0  nop
    ctx->pc = 0x476bf4u;
    // NOP
    // 0x476bf8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x476bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x476bfc: 0x0  nop
    ctx->pc = 0x476bfcu;
    // NOP
    ctx->pc = 0x476c00u;
}
