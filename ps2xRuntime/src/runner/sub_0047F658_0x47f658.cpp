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

// Function: sub_0047F658
// Address: 0x47f658 - 0x47f690
void sub_0047F658_0x47f658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F658_0x47f658");
#endif

    switch (ctx->pc) {
        case 0x47f660u: goto label_47f660;
        default: break;
    }

    ctx->pc = 0x47f658u;

    // 0x47f658: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x47f658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x47f65c: 0x0  nop
    ctx->pc = 0x47f65cu;
    // NOP
label_47f660:
    // 0x47f660: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x47F660u;
    {
        const bool branch_taken_0x47f660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f660) {
            ctx->pc = 0x47F67Cu;
            goto label_47f67c;
        }
    }
    ctx->pc = 0x47F668u;
    // 0x47f668: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x47f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x47f66c: 0x5445fffc  bnel        $v0, $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x47F66Cu;
    {
        const bool branch_taken_0x47f66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x47f66c) {
            ctx->pc = 0x47F670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F66Cu;
            // 0x47f670: 0x8c630030  lw          $v1, 0x30($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47f660;
        }
    }
    ctx->pc = 0x47F674u;
    // 0x47f674: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x47F674u;
    {
        const bool branch_taken_0x47f674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f674) {
            ctx->pc = 0x47F678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F674u;
            // 0x47f678: 0xac660018  sw          $a2, 0x18($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F684u;
            goto label_47f684;
        }
    }
    ctx->pc = 0x47F67Cu;
label_47f67c:
    // 0x47f67c: 0x3e00008  jr          $ra
    ctx->pc = 0x47F67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F67Cu;
        // 0x47f680: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47F684u;
label_47f684:
    // 0x47f684: 0x3e00008  jr          $ra
    ctx->pc = 0x47F684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F684u;
        // 0x47f688: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47F68Cu;
    // 0x47f68c: 0x0  nop
    ctx->pc = 0x47f68cu;
    // NOP
    ctx->pc = 0x47f690u;
}
