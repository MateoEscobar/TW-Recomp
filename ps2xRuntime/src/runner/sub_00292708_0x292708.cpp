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

// Function: sub_00292708
// Address: 0x292708 - 0x292758
void sub_00292708_0x292708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292708_0x292708");
#endif

    switch (ctx->pc) {
        case 0x292728u: goto label_292728;
        case 0x292730u: goto label_292730;
        case 0x292740u: goto label_292740;
        default: break;
    }

    ctx->pc = 0x292708u;

    // 0x292708: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29270c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x29270cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x292710: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292714: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x292714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x292718: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x292718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29271c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29271cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292720: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292720u;
    SET_GPR_U32(ctx, 31, 0x292728u);
    ctx->pc = 0x292724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292720u;
    // 0x292724: 0x58403  sra         $s0, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292720u, 0x292728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292728u;
label_292728:
    // 0x292728: 0xc08a61a  jal         func_229868
    ctx->pc = 0x292728u;
    SET_GPR_U32(ctx, 31, 0x292730u);
    ctx->pc = 0x29272Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292728u;
    // 0x29272c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x292728u, 0x292730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292730u;
label_292730:
    // 0x292730: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x292730u;
    {
        const bool branch_taken_0x292730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292730) {
            ctx->pc = 0x292734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292730u;
            // 0x292734: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292748u;
            goto label_292748;
        }
    }
    ctx->pc = 0x292738u;
    // 0x292738: 0xc087502  jal         func_21D408
    ctx->pc = 0x292738u;
    SET_GPR_U32(ctx, 31, 0x292740u);
    ctx->pc = 0x29273Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292738u;
    // 0x29273c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x292738u, 0x292740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292740u;
label_292740:
    // 0x292740: 0xac50021c  sw          $s0, 0x21C($v0)
    ctx->pc = 0x292740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 16));
    // 0x292744: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x292744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_292748:
    // 0x292748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29274c: 0x3e00008  jr          $ra
    ctx->pc = 0x29274Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29274Cu;
        // 0x292750: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29274Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292754u;
    // 0x292754: 0x0  nop
    ctx->pc = 0x292754u;
    // NOP
    ctx->pc = 0x292758u;
}
