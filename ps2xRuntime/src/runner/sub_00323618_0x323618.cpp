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

// Function: sub_00323618
// Address: 0x323618 - 0x323688
void sub_00323618_0x323618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323618_0x323618");
#endif

    switch (ctx->pc) {
        case 0x323638u: goto label_323638;
        case 0x323648u: goto label_323648;
        case 0x323670u: goto label_323670;
        default: break;
    }

    ctx->pc = 0x323618u;

    // 0x323618: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x323618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32361c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32361cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x323620: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323624: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x323624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x323628: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x323628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32362c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32362cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323630: 0xc0c8cb0  jal         func_3232C0
    ctx->pc = 0x323630u;
    SET_GPR_U32(ctx, 31, 0x323638u);
    ctx->pc = 0x323634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323630u;
    // 0x323634: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3232C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3232C0u, 0x323630u, 0x323638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323638u;
label_323638:
    // 0x323638: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x323638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32363c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32363cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323640: 0xc0c8cb0  jal         func_3232C0
    ctx->pc = 0x323640u;
    SET_GPR_U32(ctx, 31, 0x323648u);
    ctx->pc = 0x323644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323640u;
    // 0x323644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3232C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3232C0u, 0x323640u, 0x323648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323648u;
label_323648:
    // 0x323648: 0x52400009  beql        $s2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x323648u;
    {
        const bool branch_taken_0x323648 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x323648) {
            ctx->pc = 0x32364Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323648u;
            // 0x32364c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323670u;
            goto label_323670;
        }
    }
    ctx->pc = 0x323650u;
    // 0x323650: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x323650u;
    {
        const bool branch_taken_0x323650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323650u;
        // 0x323654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323650) {
            ctx->pc = 0x323660u;
            goto label_323660;
        }
    }
    ctx->pc = 0x323658u;
    // 0x323658: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x323658u;
    {
        const bool branch_taken_0x323658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323658u;
        // 0x32365c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323658) {
            ctx->pc = 0x323670u;
            goto label_323670;
        }
    }
    ctx->pc = 0x323660u;
label_323660:
    // 0x323660: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x323660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323664: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x323664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x323668: 0xc0ccffa  jal         func_333FE8
    ctx->pc = 0x323668u;
    SET_GPR_U32(ctx, 31, 0x323670u);
    ctx->pc = 0x32366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323668u;
    // 0x32366c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333FE8u, 0x323668u, 0x323670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323670u;
label_323670:
    // 0x323670: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x323670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323674: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x323674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323678: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x323678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32367c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32367cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323680: 0x3e00008  jr          $ra
    ctx->pc = 0x323680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323680u;
        // 0x323684: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323688u;
}
