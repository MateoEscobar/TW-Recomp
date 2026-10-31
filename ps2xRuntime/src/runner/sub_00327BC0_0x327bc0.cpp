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

// Function: sub_00327BC0
// Address: 0x327bc0 - 0x327bf8
void sub_00327BC0_0x327bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327BC0_0x327bc0");
#endif

    ctx->pc = 0x327bc0u;

    // 0x327bc0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x327bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x327bc4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x327bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x327bc8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x327BC8u;
    {
        const bool branch_taken_0x327bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x327BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327BC8u;
        // 0x327bcc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327bc8) {
            ctx->pc = 0x327BE0u;
            goto label_327be0;
        }
    }
    ctx->pc = 0x327BD0u;
    // 0x327bd0: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x327BD0u;
    {
        const bool branch_taken_0x327bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x327bd0) {
            ctx->pc = 0x327BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327BD0u;
            // 0x327bd4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327BECu;
            goto label_327bec;
        }
    }
    ctx->pc = 0x327BD8u;
    // 0x327bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x327BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327BD8u;
        // 0x327bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327BE0u;
label_327be0:
    // 0x327be0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x327be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x327be4: 0x3e00008  jr          $ra
    ctx->pc = 0x327BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327BE4u;
        // 0x327be8: 0x8462000e  lh          $v0, 0xE($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327BECu;
label_327bec:
    // 0x327bec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x327becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x327BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327BF0u;
        // 0x327bf4: 0x8462000e  lh          $v0, 0xE($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327BF8u;
}
