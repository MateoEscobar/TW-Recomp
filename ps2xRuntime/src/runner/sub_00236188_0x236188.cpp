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

// Function: sub_00236188
// Address: 0x236188 - 0x2361e8
void sub_00236188_0x236188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236188_0x236188");
#endif

    switch (ctx->pc) {
        case 0x2361a4u: goto label_2361a4;
        case 0x2361acu: goto label_2361ac;
        case 0x2361c8u: goto label_2361c8;
        case 0x2361d8u: goto label_2361d8;
        default: break;
    }

    ctx->pc = 0x236188u;

    // 0x236188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23618c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23618cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x236190: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x236190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x236194: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x236194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236198: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23619c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23619Cu;
    SET_GPR_U32(ctx, 31, 0x2361A4u);
    ctx->pc = 0x2361A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23619Cu;
    // 0x2361a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23619Cu, 0x2361A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2361A4u;
label_2361a4:
    // 0x2361a4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2361A4u;
    SET_GPR_U32(ctx, 31, 0x2361ACu);
    ctx->pc = 0x2361A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2361A4u;
    // 0x2361a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2361A4u, 0x2361ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2361ACu;
label_2361ac:
    // 0x2361ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2361acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2361b0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2361B0u;
    {
        const bool branch_taken_0x2361b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2361B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361B0u;
        // 0x2361b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2361b0) {
            ctx->pc = 0x2361D8u;
            goto label_2361d8;
        }
    }
    ctx->pc = 0x2361B8u;
    // 0x2361b8: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2361B8u;
    {
        const bool branch_taken_0x2361b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2361b8) {
            ctx->pc = 0x2361D0u;
            goto label_2361d0;
        }
    }
    ctx->pc = 0x2361C0u;
    // 0x2361c0: 0xc0933bc  jal         func_24CEF0
    ctx->pc = 0x2361C0u;
    SET_GPR_U32(ctx, 31, 0x2361C8u);
    ctx->pc = 0x24CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CEF0u, 0x2361C0u, 0x2361C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2361C8u;
label_2361c8:
    // 0x2361c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2361C8u;
    {
        const bool branch_taken_0x2361c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2361CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361C8u;
        // 0x2361cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2361c8) {
            ctx->pc = 0x2361DCu;
            goto label_2361dc;
        }
    }
    ctx->pc = 0x2361D0u;
label_2361d0:
    // 0x2361d0: 0xc0934d0  jal         func_24D340
    ctx->pc = 0x2361D0u;
    SET_GPR_U32(ctx, 31, 0x2361D8u);
    ctx->pc = 0x24D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D340u, 0x2361D0u, 0x2361D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2361D8u;
label_2361d8:
    // 0x2361d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2361d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2361dc:
    // 0x2361dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2361dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2361e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2361E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2361E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361E0u;
        // 0x2361e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2361E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2361E8u;
}
