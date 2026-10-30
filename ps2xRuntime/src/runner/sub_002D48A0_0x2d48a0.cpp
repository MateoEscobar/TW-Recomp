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

// Function: sub_002D48A0
// Address: 0x2d48a0 - 0x2d4920
void sub_002D48A0_0x2d48a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D48A0_0x2d48a0");
#endif

    switch (ctx->pc) {
        case 0x2d48c4u: goto label_2d48c4;
        case 0x2d48ccu: goto label_2d48cc;
        case 0x2d48dcu: goto label_2d48dc;
        case 0x2d48e4u: goto label_2d48e4;
        case 0x2d48fcu: goto label_2d48fc;
        case 0x2d4908u: goto label_2d4908;
        default: break;
    }

    ctx->pc = 0x2d48a0u;

    // 0x2d48a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d48a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d48a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d48a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d48a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d48a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d48ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d48acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d48b0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d48b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d48b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d48b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d48b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d48b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d48bc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2D48BCu;
    SET_GPR_U32(ctx, 31, 0x2D48C4u);
    ctx->pc = 0x2D48C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D48BCu;
    // 0x2d48c0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D48BCu, 0x2D48C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48C4u;
label_2d48c4:
    // 0x2d48c4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2D48C4u;
    SET_GPR_U32(ctx, 31, 0x2D48CCu);
    ctx->pc = 0x2D48C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D48C4u;
    // 0x2d48c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2D48C4u, 0x2D48CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48CCu;
label_2d48cc:
    // 0x2d48cc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D48CCu;
    {
        const bool branch_taken_0x2d48cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D48D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D48CCu;
        // 0x2d48d0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d48cc) {
            ctx->pc = 0x2D490Cu;
            goto label_2d490c;
        }
    }
    ctx->pc = 0x2D48D4u;
    // 0x2d48d4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D48D4u;
    SET_GPR_U32(ctx, 31, 0x2D48DCu);
    ctx->pc = 0x2D48D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D48D4u;
    // 0x2d48d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D48D4u, 0x2D48DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48DCu;
label_2d48dc:
    // 0x2d48dc: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2D48DCu;
    SET_GPR_U32(ctx, 31, 0x2D48E4u);
    ctx->pc = 0x2D48E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D48DCu;
    // 0x2d48e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2D48DCu, 0x2D48E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48E4u;
label_2d48e4:
    // 0x2d48e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d48e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d48e8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D48E8u;
    {
        const bool branch_taken_0x2d48e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D48ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D48E8u;
        // 0x2d48ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d48e8) {
            ctx->pc = 0x2D48FCu;
            goto label_2d48fc;
        }
    }
    ctx->pc = 0x2D48F0u;
    // 0x2d48f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d48f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d48f4: 0xc0b5248  jal         func_2D4920
    ctx->pc = 0x2D48F4u;
    SET_GPR_U32(ctx, 31, 0x2D48FCu);
    ctx->pc = 0x2D48F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D48F4u;
    // 0x2d48f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4920u, 0x2D48F4u, 0x2D48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48FCu;
label_2d48fc:
    // 0x2d48fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d48fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4900: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2D4900u;
    SET_GPR_U32(ctx, 31, 0x2D4908u);
    ctx->pc = 0x2D4904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4900u;
    // 0x2d4904: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2D4900u, 0x2D4908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4908u;
label_2d4908:
    // 0x2d4908: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d4908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d490c:
    // 0x2d490c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d490cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4910: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d4910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d4914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4918: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4918u;
        // 0x2d491c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4920u;
}
