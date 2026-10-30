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

// Function: sub_00111658
// Address: 0x111658 - 0x111688
void sub_00111658_0x111658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111658_0x111658");
#endif

    switch (ctx->pc) {
        case 0x11166cu: goto label_11166c;
        case 0x11167cu: goto label_11167c;
        default: break;
    }

    ctx->pc = 0x111658u;

    // 0x111658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11165c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11165cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x111660: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x111660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111664: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x111664u;
    SET_GPR_U32(ctx, 31, 0x11166Cu);
    ctx->pc = 0x111668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111664u;
    // 0x111668: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x111664u, 0x11166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11166Cu;
label_11166c:
    // 0x11166c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11166Cu;
    {
        const bool branch_taken_0x11166c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11166Cu;
        // 0x111670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11166c) {
            ctx->pc = 0x11167Cu;
            goto label_11167c;
        }
    }
    ctx->pc = 0x111674u;
    // 0x111674: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x111674u;
    SET_GPR_U32(ctx, 31, 0x11167Cu);
    ctx->pc = 0x111678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111674u;
    // 0x111678: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x111674u, 0x11167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11167Cu;
label_11167c:
    // 0x11167c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11167cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111680: 0x3e00008  jr          $ra
    ctx->pc = 0x111680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111680u;
        // 0x111684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111688u;
}
