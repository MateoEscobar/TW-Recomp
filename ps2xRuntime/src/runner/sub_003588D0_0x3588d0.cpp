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

// Function: sub_003588D0
// Address: 0x3588d0 - 0x358930
void sub_003588D0_0x3588d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003588D0_0x3588d0");
#endif

    switch (ctx->pc) {
        case 0x3588f0u: goto label_3588f0;
        case 0x3588f8u: goto label_3588f8;
        case 0x35890cu: goto label_35890c;
        case 0x358918u: goto label_358918;
        default: break;
    }

    ctx->pc = 0x3588d0u;

    // 0x3588d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3588d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3588d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3588d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3588d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3588d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3588dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3588dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3588e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3588e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3588e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3588e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3588e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3588E8u;
    SET_GPR_U32(ctx, 31, 0x3588F0u);
    ctx->pc = 0x3588ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3588E8u;
    // 0x3588ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3588E8u, 0x3588F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3588F0u;
label_3588f0:
    // 0x3588f0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3588F0u;
    SET_GPR_U32(ctx, 31, 0x3588F8u);
    ctx->pc = 0x3588F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3588F0u;
    // 0x3588f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3588F0u, 0x3588F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3588F8u;
label_3588f8:
    // 0x3588f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3588f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3588fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3588fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358900: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358904: 0xc1024c6  jal         func_409318
    ctx->pc = 0x358904u;
    SET_GPR_U32(ctx, 31, 0x35890Cu);
    ctx->pc = 0x358908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358904u;
    // 0x358908: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x358904u, 0x35890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35890Cu;
label_35890c:
    // 0x35890c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35890cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x358910: 0xc08d062  jal         func_234188
    ctx->pc = 0x358910u;
    SET_GPR_U32(ctx, 31, 0x358918u);
    ctx->pc = 0x358914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358910u;
    // 0x358914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234188u, 0x358910u, 0x358918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358918u;
label_358918:
    // 0x358918: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35891c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35891cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x358920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358928: 0x3e00008  jr          $ra
    ctx->pc = 0x358928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358928u;
        // 0x35892c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358930u;
}
