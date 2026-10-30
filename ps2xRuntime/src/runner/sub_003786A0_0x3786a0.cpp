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

// Function: sub_003786A0
// Address: 0x3786a0 - 0x378700
void sub_003786A0_0x3786a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003786A0_0x3786a0");
#endif

    switch (ctx->pc) {
        case 0x3786c0u: goto label_3786c0;
        case 0x3786c8u: goto label_3786c8;
        case 0x3786dcu: goto label_3786dc;
        case 0x3786e8u: goto label_3786e8;
        default: break;
    }

    ctx->pc = 0x3786a0u;

    // 0x3786a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3786a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3786a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3786a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3786a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3786a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3786ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3786acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3786b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3786b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3786b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3786b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3786b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3786B8u;
    SET_GPR_U32(ctx, 31, 0x3786C0u);
    ctx->pc = 0x3786BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3786B8u;
    // 0x3786bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3786B8u, 0x3786C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3786C0u;
label_3786c0:
    // 0x3786c0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3786C0u;
    SET_GPR_U32(ctx, 31, 0x3786C8u);
    ctx->pc = 0x3786C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3786C0u;
    // 0x3786c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3786C0u, 0x3786C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3786C8u;
label_3786c8:
    // 0x3786c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3786c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3786cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3786ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3786d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3786d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3786d4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3786D4u;
    SET_GPR_U32(ctx, 31, 0x3786DCu);
    ctx->pc = 0x3786D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3786D4u;
    // 0x3786d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3786D4u, 0x3786DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3786DCu;
label_3786dc:
    // 0x3786dc: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x3786dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3786e0: 0xc0e37e8  jal         func_38DFA0
    ctx->pc = 0x3786E0u;
    SET_GPR_U32(ctx, 31, 0x3786E8u);
    ctx->pc = 0x3786E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3786E0u;
    // 0x3786e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DFA0u, 0x3786E0u, 0x3786E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3786E8u;
label_3786e8:
    // 0x3786e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3786e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3786ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3786ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3786f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3786f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3786f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3786f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3786f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3786F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3786FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786F8u;
        // 0x3786fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3786F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378700u;
}
