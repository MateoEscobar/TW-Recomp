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

// Function: sub_003587B0
// Address: 0x3587b0 - 0x358810
void sub_003587B0_0x3587b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003587B0_0x3587b0");
#endif

    switch (ctx->pc) {
        case 0x3587d0u: goto label_3587d0;
        case 0x3587d8u: goto label_3587d8;
        case 0x3587ecu: goto label_3587ec;
        case 0x3587f8u: goto label_3587f8;
        default: break;
    }

    ctx->pc = 0x3587b0u;

    // 0x3587b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3587b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3587b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3587b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3587b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3587b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3587bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3587bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3587c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3587c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3587c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3587c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3587c8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3587C8u;
    SET_GPR_U32(ctx, 31, 0x3587D0u);
    ctx->pc = 0x3587CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3587C8u;
    // 0x3587cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3587C8u, 0x3587D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3587D0u;
label_3587d0:
    // 0x3587d0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3587D0u;
    SET_GPR_U32(ctx, 31, 0x3587D8u);
    ctx->pc = 0x3587D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3587D0u;
    // 0x3587d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3587D0u, 0x3587D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3587D8u;
label_3587d8:
    // 0x3587d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3587d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3587dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3587dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3587e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3587e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3587e4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3587E4u;
    SET_GPR_U32(ctx, 31, 0x3587ECu);
    ctx->pc = 0x3587E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3587E4u;
    // 0x3587e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3587E4u, 0x3587ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3587ECu;
label_3587ec:
    // 0x3587ec: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x3587ecu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3587f0: 0xc08d02a  jal         func_2340A8
    ctx->pc = 0x3587F0u;
    SET_GPR_U32(ctx, 31, 0x3587F8u);
    ctx->pc = 0x3587F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3587F0u;
    // 0x3587f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2340A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2340A8u, 0x3587F0u, 0x3587F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3587F8u;
label_3587f8:
    // 0x3587f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3587f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3587fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3587fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x358800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358808: 0x3e00008  jr          $ra
    ctx->pc = 0x358808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358808u;
        // 0x35880c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358810u;
}
