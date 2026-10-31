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

// Function: sub_00165640
// Address: 0x165640 - 0x165678
void sub_00165640_0x165640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165640_0x165640");
#endif

    switch (ctx->pc) {
        case 0x16565cu: goto label_16565c;
        default: break;
    }

    ctx->pc = 0x165640u;

    // 0x165640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165644: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x165644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x165648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16564c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16564cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165654: 0xc059578  jal         func_1655E0
    ctx->pc = 0x165654u;
    SET_GPR_U32(ctx, 31, 0x16565Cu);
    ctx->pc = 0x165658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165654u;
    // 0x165658: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1655E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1655E0u, 0x165654u, 0x16565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16565Cu;
label_16565c:
    // 0x16565c: 0xae110040  sw          $s1, 0x40($s0)
    ctx->pc = 0x16565cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 17));
    // 0x165660: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x165660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16566c: 0x3e00008  jr          $ra
    ctx->pc = 0x16566Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16566Cu;
        // 0x165670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16566Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165674u;
    // 0x165674: 0x0  nop
    ctx->pc = 0x165674u;
    // NOP
    ctx->pc = 0x165678u;
}
