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

// Function: sub_0047F618
// Address: 0x47f618 - 0x47f658
void sub_0047F618_0x47f618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F618_0x47f618");
#endif

    switch (ctx->pc) {
        case 0x47f620u: goto label_47f620;
        default: break;
    }

    ctx->pc = 0x47f618u;

    // 0x47f618: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x47f618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x47f61c: 0x0  nop
    ctx->pc = 0x47f61cu;
    // NOP
label_47f620:
    // 0x47f620: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x47F620u;
    {
        const bool branch_taken_0x47f620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f620) {
            ctx->pc = 0x47F63Cu;
            goto label_47f63c;
        }
    }
    ctx->pc = 0x47F628u;
    // 0x47f628: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x47f628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x47f62c: 0x5445fffc  bnel        $v0, $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x47F62Cu;
    {
        const bool branch_taken_0x47f62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x47f62c) {
            ctx->pc = 0x47F630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F62Cu;
            // 0x47f630: 0x8c630030  lw          $v1, 0x30($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47f620;
        }
    }
    ctx->pc = 0x47F634u;
    // 0x47f634: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x47F634u;
    {
        const bool branch_taken_0x47f634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f634) {
            ctx->pc = 0x47F638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F634u;
            // 0x47f638: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F644u;
            goto label_47f644;
        }
    }
    ctx->pc = 0x47F63Cu;
label_47f63c:
    // 0x47f63c: 0x3e00008  jr          $ra
    ctx->pc = 0x47F63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F63Cu;
        // 0x47f640: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47F644u;
label_47f644:
    // 0x47f644: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x47f644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x47f648: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x47f648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
    // 0x47f64c: 0x3e00008  jr          $ra
    ctx->pc = 0x47F64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F64Cu;
        // 0x47f650: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47F654u;
    // 0x47f654: 0x0  nop
    ctx->pc = 0x47f654u;
    // NOP
    ctx->pc = 0x47f658u;
}
