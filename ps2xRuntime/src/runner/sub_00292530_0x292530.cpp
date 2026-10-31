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

// Function: sub_00292530
// Address: 0x292530 - 0x292590
void sub_00292530_0x292530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292530_0x292530");
#endif

    switch (ctx->pc) {
        case 0x292548u: goto label_292548;
        case 0x292550u: goto label_292550;
        case 0x292564u: goto label_292564;
        case 0x29256cu: goto label_29256c;
        case 0x292574u: goto label_292574;
        case 0x29257cu: goto label_29257c;
        default: break;
    }

    ctx->pc = 0x292530u;

    // 0x292530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x292534: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292538: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x292538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x29253c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29253cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292540: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292540u;
    SET_GPR_U32(ctx, 31, 0x292548u);
    ctx->pc = 0x292544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292540u;
    // 0x292544: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292540u, 0x292548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292548u;
label_292548:
    // 0x292548: 0xc08a61a  jal         func_229868
    ctx->pc = 0x292548u;
    SET_GPR_U32(ctx, 31, 0x292550u);
    ctx->pc = 0x29254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292548u;
    // 0x29254c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x292548u, 0x292550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292550u;
label_292550:
    // 0x292550: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x292550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292554: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x292554u;
    {
        const bool branch_taken_0x292554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x292554) {
            ctx->pc = 0x292558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292554u;
            // 0x292558: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292580u;
            goto label_292580;
        }
    }
    ctx->pc = 0x29255Cu;
    // 0x29255c: 0xc087502  jal         func_21D408
    ctx->pc = 0x29255Cu;
    SET_GPR_U32(ctx, 31, 0x292564u);
    ctx->pc = 0x292560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29255Cu;
    // 0x292560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29255Cu, 0x292564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292564u;
label_292564:
    // 0x292564: 0xc0a3644  jal         func_28D910
    ctx->pc = 0x292564u;
    SET_GPR_U32(ctx, 31, 0x29256Cu);
    ctx->pc = 0x292568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292564u;
    // 0x292568: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D910u, 0x292564u, 0x29256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29256Cu;
label_29256c:
    // 0x29256c: 0xc087502  jal         func_21D408
    ctx->pc = 0x29256Cu;
    SET_GPR_U32(ctx, 31, 0x292574u);
    ctx->pc = 0x292570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29256Cu;
    // 0x292570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29256Cu, 0x292574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292574u;
label_292574:
    // 0x292574: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x292574u;
    SET_GPR_U32(ctx, 31, 0x29257Cu);
    ctx->pc = 0x292578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292574u;
    // 0x292578: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x292574u, 0x29257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29257Cu;
label_29257c:
    // 0x29257c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29257cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_292580:
    // 0x292580: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292584: 0x3e00008  jr          $ra
    ctx->pc = 0x292584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292584u;
        // 0x292588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29258Cu;
    // 0x29258c: 0x0  nop
    ctx->pc = 0x29258cu;
    // NOP
    ctx->pc = 0x292590u;
}
