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

// Function: sub_0035D5B0
// Address: 0x35d5b0 - 0x35d610
void sub_0035D5B0_0x35d5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D5B0_0x35d5b0");
#endif

    switch (ctx->pc) {
        case 0x35d5d0u: goto label_35d5d0;
        case 0x35d5d8u: goto label_35d5d8;
        case 0x35d5ecu: goto label_35d5ec;
        case 0x35d5f8u: goto label_35d5f8;
        default: break;
    }

    ctx->pc = 0x35d5b0u;

    // 0x35d5b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35d5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35d5b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d5b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35d5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35d5bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d5c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35d5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35d5c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d5c8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D5C8u;
    SET_GPR_U32(ctx, 31, 0x35D5D0u);
    ctx->pc = 0x35D5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D5C8u;
    // 0x35d5cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D5C8u, 0x35D5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D5D0u;
label_35d5d0:
    // 0x35d5d0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D5D0u;
    SET_GPR_U32(ctx, 31, 0x35D5D8u);
    ctx->pc = 0x35D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D5D0u;
    // 0x35d5d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D5D0u, 0x35D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D5D8u;
label_35d5d8:
    // 0x35d5d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35d5d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d5e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d5e4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35D5E4u;
    SET_GPR_U32(ctx, 31, 0x35D5ECu);
    ctx->pc = 0x35D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D5E4u;
    // 0x35d5e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35D5E4u, 0x35D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D5ECu;
label_35d5ec:
    // 0x35d5ec: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35d5ecu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35d5f0: 0xc08e78c  jal         func_239E30
    ctx->pc = 0x35D5F0u;
    SET_GPR_U32(ctx, 31, 0x35D5F8u);
    ctx->pc = 0x35D5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D5F0u;
    // 0x35d5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E30u, 0x35D5F0u, 0x35D5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D5F8u;
label_35d5f8:
    // 0x35d5f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35d5f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d5fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d5fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35d600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d608: 0x3e00008  jr          $ra
    ctx->pc = 0x35D608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D608u;
        // 0x35d60c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D610u;
}
