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

// Function: sub_004A5130
// Address: 0x4a5130 - 0x4a5188
void sub_004A5130_0x4a5130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5130_0x4a5130");
#endif

    ctx->pc = 0x4a5130u;

    // 0x4a5130: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4a5130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5134: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A5134u;
    {
        const bool branch_taken_0x4a5134 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5134u;
        // 0x4a5138: 0x8f838a80  lw          $v1, -0x7580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5134) {
            ctx->pc = 0x4A5150u;
            goto label_4a5150;
        }
    }
    ctx->pc = 0x4A513Cu;
    // 0x4a513c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a513cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a5140: 0x2444ad18  addiu       $a0, $v0, -0x52E8
    ctx->pc = 0x4a5140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a5144: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a5144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a5148: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4A5148u;
    {
        const bool branch_taken_0x4a5148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5148u;
        // 0x4a514c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5148) {
            ctx->pc = 0x4A5170u;
            goto label_4a5170;
        }
    }
    ctx->pc = 0x4A5150u;
label_4a5150:
    // 0x4a5150: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a5150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a5154: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x4a5154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a5158: 0x2443ad18  addiu       $v1, $v0, -0x52E8
    ctx->pc = 0x4a5158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a515c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a515cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a5160: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4a5160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4a5164: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A5164u;
    {
        const bool branch_taken_0x4a5164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5164) {
            ctx->pc = 0x4A5168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5164u;
            // 0x4a5168: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5170u;
            goto label_4a5170;
        }
    }
    ctx->pc = 0x4A516Cu;
    // 0x4a516c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a516cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4a5170:
    // 0x4a5170: 0x8f838a80  lw          $v1, -0x7580($gp)
    ctx->pc = 0x4a5170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a5174: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4a5174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a5178: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a5178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a517c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A517Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A517Cu;
        // 0x4a5180: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A517Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5184u;
    // 0x4a5184: 0x0  nop
    ctx->pc = 0x4a5184u;
    // NOP
    ctx->pc = 0x4a5188u;
}
