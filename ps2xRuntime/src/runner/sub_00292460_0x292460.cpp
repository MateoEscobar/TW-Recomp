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

// Function: sub_00292460
// Address: 0x292460 - 0x2924a8
void sub_00292460_0x292460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292460_0x292460");
#endif

    switch (ctx->pc) {
        case 0x29247cu: goto label_29247c;
        case 0x292484u: goto label_292484;
        case 0x292494u: goto label_292494;
        default: break;
    }

    ctx->pc = 0x292460u;

    // 0x292460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x292464: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292468: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x292468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x29246c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29246cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292470: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292474: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292474u;
    SET_GPR_U32(ctx, 31, 0x29247Cu);
    ctx->pc = 0x292478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292474u;
    // 0x292478: 0x30b0ffff  andi        $s0, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292474u, 0x29247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29247Cu;
label_29247c:
    // 0x29247c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x29247Cu;
    SET_GPR_U32(ctx, 31, 0x292484u);
    ctx->pc = 0x292480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29247Cu;
    // 0x292480: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x29247Cu, 0x292484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292484u;
label_292484:
    // 0x292484: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x292484u;
    {
        const bool branch_taken_0x292484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292484) {
            ctx->pc = 0x292488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292484u;
            // 0x292488: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29249Cu;
            goto label_29249c;
        }
    }
    ctx->pc = 0x29248Cu;
    // 0x29248c: 0xc087502  jal         func_21D408
    ctx->pc = 0x29248Cu;
    SET_GPR_U32(ctx, 31, 0x292494u);
    ctx->pc = 0x292490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29248Cu;
    // 0x292490: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29248Cu, 0x292494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292494u;
label_292494:
    // 0x292494: 0xac50026c  sw          $s0, 0x26C($v0)
    ctx->pc = 0x292494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 620), GPR_U32(ctx, 16));
    // 0x292498: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x292498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29249c:
    // 0x29249c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29249cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2924a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2924A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2924A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2924A0u;
        // 0x2924a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2924A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2924A8u;
}
