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

// Function: sub_002DD630
// Address: 0x2dd630 - 0x2dd6b8
void sub_002DD630_0x2dd630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD630_0x2dd630");
#endif

    switch (ctx->pc) {
        case 0x2dd654u: goto label_2dd654;
        case 0x2dd65cu: goto label_2dd65c;
        case 0x2dd66cu: goto label_2dd66c;
        case 0x2dd674u: goto label_2dd674;
        case 0x2dd690u: goto label_2dd690;
        case 0x2dd69cu: goto label_2dd69c;
        default: break;
    }

    ctx->pc = 0x2dd630u;

    // 0x2dd630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dd630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dd634: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2dd634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2dd638: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dd638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dd63c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dd63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd640: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2dd640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2dd644: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2dd644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2dd648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dd648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dd64c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DD64Cu;
    SET_GPR_U32(ctx, 31, 0x2DD654u);
    ctx->pc = 0x2DD650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD64Cu;
    // 0x2dd650: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DD64Cu, 0x2DD654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD654u;
label_2dd654:
    // 0x2dd654: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2DD654u;
    SET_GPR_U32(ctx, 31, 0x2DD65Cu);
    ctx->pc = 0x2DD658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD654u;
    // 0x2dd658: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2DD654u, 0x2DD65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD65Cu;
label_2dd65c:
    // 0x2dd65c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DD65Cu;
    {
        const bool branch_taken_0x2dd65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD65Cu;
        // 0x2dd660: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd65c) {
            ctx->pc = 0x2DD6A0u;
            goto label_2dd6a0;
        }
    }
    ctx->pc = 0x2DD664u;
    // 0x2dd664: 0xc087502  jal         func_21D408
    ctx->pc = 0x2DD664u;
    SET_GPR_U32(ctx, 31, 0x2DD66Cu);
    ctx->pc = 0x2DD668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD664u;
    // 0x2dd668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DD664u, 0x2DD66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD66Cu;
label_2dd66c:
    // 0x2dd66c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2DD66Cu;
    SET_GPR_U32(ctx, 31, 0x2DD674u);
    ctx->pc = 0x2DD670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD66Cu;
    // 0x2dd670: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2DD66Cu, 0x2DD674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD674u;
label_2dd674:
    // 0x2dd674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd678: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DD678u;
    {
        const bool branch_taken_0x2dd678 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD678u;
        // 0x2dd67c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd678) {
            ctx->pc = 0x2DD690u;
            goto label_2dd690;
        }
    }
    ctx->pc = 0x2DD680u;
    // 0x2dd680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd684: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dd684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd688: 0xc0b75ae  jal         func_2DD6B8
    ctx->pc = 0x2DD688u;
    SET_GPR_U32(ctx, 31, 0x2DD690u);
    ctx->pc = 0x2DD68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD688u;
    // 0x2dd68c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD6B8u, 0x2DD688u, 0x2DD690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD690u;
label_2dd690:
    // 0x2dd690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd694: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2DD694u;
    SET_GPR_U32(ctx, 31, 0x2DD69Cu);
    ctx->pc = 0x2DD698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD694u;
    // 0x2dd698: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2DD694u, 0x2DD69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD69Cu;
label_2dd69c:
    // 0x2dd69c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2dd69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2dd6a0:
    // 0x2dd6a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2dd6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd6a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dd6a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd6a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dd6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD6ACu;
        // 0x2dd6b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD6B4u;
    // 0x2dd6b4: 0x0  nop
    ctx->pc = 0x2dd6b4u;
    // NOP
    ctx->pc = 0x2dd6b8u;
}
