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

// Function: sub_002994B8
// Address: 0x2994b8 - 0x299510
void sub_002994B8_0x2994b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002994B8_0x2994b8");
#endif

    switch (ctx->pc) {
        case 0x2994d0u: goto label_2994d0;
        case 0x2994d8u: goto label_2994d8;
        case 0x2994ecu: goto label_2994ec;
        case 0x2994fcu: goto label_2994fc;
        default: break;
    }

    ctx->pc = 0x2994b8u;

    // 0x2994b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2994b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2994bc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2994bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2994c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2994c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2994c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2994c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2994c8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2994C8u;
    SET_GPR_U32(ctx, 31, 0x2994D0u);
    ctx->pc = 0x2994CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2994C8u;
    // 0x2994cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2994C8u, 0x2994D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2994D0u;
label_2994d0:
    // 0x2994d0: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2994D0u;
    SET_GPR_U32(ctx, 31, 0x2994D8u);
    ctx->pc = 0x2994D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2994D0u;
    // 0x2994d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2994D0u, 0x2994D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2994D8u;
label_2994d8:
    // 0x2994d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2994d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2994dc: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2994DCu;
    {
        const bool branch_taken_0x2994dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2994dc) {
            ctx->pc = 0x2994E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2994DCu;
            // 0x2994e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299500u;
            goto label_299500;
        }
    }
    ctx->pc = 0x2994E4u;
    // 0x2994e4: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x2994E4u;
    SET_GPR_U32(ctx, 31, 0x2994ECu);
    ctx->pc = 0x2994E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2994E4u;
    // 0x2994e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x2994E4u, 0x2994ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2994ECu;
label_2994ec:
    // 0x2994ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2994ECu;
    {
        const bool branch_taken_0x2994ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2994ec) {
            ctx->pc = 0x2994F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2994ECu;
            // 0x2994f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299500u;
            goto label_299500;
        }
    }
    ctx->pc = 0x2994F4u;
    // 0x2994f4: 0xc095fce  jal         func_257F38
    ctx->pc = 0x2994F4u;
    SET_GPR_U32(ctx, 31, 0x2994FCu);
    ctx->pc = 0x2994F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2994F4u;
    // 0x2994f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2994F4u, 0x2994FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2994FCu;
label_2994fc:
    // 0x2994fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2994fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_299500:
    // 0x299500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299504: 0x3e00008  jr          $ra
    ctx->pc = 0x299504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299504u;
        // 0x299508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29950Cu;
    // 0x29950c: 0x0  nop
    ctx->pc = 0x29950cu;
    // NOP
    ctx->pc = 0x299510u;
}
