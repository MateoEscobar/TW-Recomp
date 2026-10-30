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

// Function: sub_00235628
// Address: 0x235628 - 0x235688
void sub_00235628_0x235628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235628_0x235628");
#endif

    switch (ctx->pc) {
        case 0x235640u: goto label_235640;
        case 0x235648u: goto label_235648;
        case 0x23565cu: goto label_23565c;
        case 0x23566cu: goto label_23566c;
        default: break;
    }

    ctx->pc = 0x235628u;

    // 0x235628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23562c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23562cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235630: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x235630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x235634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235638: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235638u;
    SET_GPR_U32(ctx, 31, 0x235640u);
    ctx->pc = 0x23563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235638u;
    // 0x23563c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235638u, 0x235640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235640u;
label_235640:
    // 0x235640: 0xc08a61a  jal         func_229868
    ctx->pc = 0x235640u;
    SET_GPR_U32(ctx, 31, 0x235648u);
    ctx->pc = 0x235644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235640u;
    // 0x235644: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235640u, 0x235648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235648u;
label_235648:
    // 0x235648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23564c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23564Cu;
    {
        const bool branch_taken_0x23564c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x235650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23564Cu;
        // 0x235650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23564c) {
            ctx->pc = 0x235674u;
            goto label_235674;
        }
    }
    ctx->pc = 0x235654u;
    // 0x235654: 0xc089f98  jal         func_227E60
    ctx->pc = 0x235654u;
    SET_GPR_U32(ctx, 31, 0x23565Cu);
    ctx->pc = 0x235658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235654u;
    // 0x235658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x235654u, 0x23565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23565Cu;
label_23565c:
    // 0x23565c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23565Cu;
    {
        const bool branch_taken_0x23565c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23565Cu;
        // 0x235660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23565c) {
            ctx->pc = 0x235674u;
            goto label_235674;
        }
    }
    ctx->pc = 0x235664u;
    // 0x235664: 0xc0a7390  jal         func_29CE40
    ctx->pc = 0x235664u;
    SET_GPR_U32(ctx, 31, 0x23566Cu);
    ctx->pc = 0x235668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235664u;
    // 0x235668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE40u, 0x235664u, 0x23566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23566Cu;
label_23566c:
    // 0x23566c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23566Cu;
    {
        const bool branch_taken_0x23566c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23566Cu;
        // 0x235670: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23566c) {
            ctx->pc = 0x235678u;
            goto label_235678;
        }
    }
    ctx->pc = 0x235674u;
label_235674:
    // 0x235674: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x235674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_235678:
    // 0x235678: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23567c: 0x3e00008  jr          $ra
    ctx->pc = 0x23567Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23567Cu;
        // 0x235680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23567Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235684u;
    // 0x235684: 0x0  nop
    ctx->pc = 0x235684u;
    // NOP
    ctx->pc = 0x235688u;
}
