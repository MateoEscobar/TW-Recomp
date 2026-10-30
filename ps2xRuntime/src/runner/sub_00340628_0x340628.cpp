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

// Function: sub_00340628
// Address: 0x340628 - 0x340668
void sub_00340628_0x340628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340628_0x340628");
#endif

    switch (ctx->pc) {
        case 0x340644u: goto label_340644;
        case 0x340654u: goto label_340654;
        default: break;
    }

    ctx->pc = 0x340628u;

    // 0x340628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x340628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34062c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x34062cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x340630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x340634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x340638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34063c: 0xc0d0176  jal         func_3405D8
    ctx->pc = 0x34063Cu;
    SET_GPR_U32(ctx, 31, 0x340644u);
    ctx->pc = 0x340640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34063Cu;
    // 0x340640: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3405D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3405D8u, 0x34063Cu, 0x340644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340644u;
label_340644:
    // 0x340644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340648: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x340648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34064c: 0xc0d012a  jal         func_3404A8
    ctx->pc = 0x34064Cu;
    SET_GPR_U32(ctx, 31, 0x340654u);
    ctx->pc = 0x340650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34064Cu;
    // 0x340650: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3404A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3404A8u, 0x34064Cu, 0x340654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340654u;
label_340654:
    // 0x340654: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x340654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340658: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x340658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34065c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34065cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340660: 0x3e00008  jr          $ra
    ctx->pc = 0x340660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340660u;
        // 0x340664: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340668u;
}
