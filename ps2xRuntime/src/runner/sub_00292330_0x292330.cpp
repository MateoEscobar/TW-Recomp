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

// Function: sub_00292330
// Address: 0x292330 - 0x2923a0
void sub_00292330_0x292330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292330_0x292330");
#endif

    switch (ctx->pc) {
        case 0x292350u: goto label_292350;
        case 0x292358u: goto label_292358;
        case 0x29236cu: goto label_29236c;
        case 0x292374u: goto label_292374;
        case 0x29237cu: goto label_29237c;
        case 0x292388u: goto label_292388;
        default: break;
    }

    ctx->pc = 0x292330u;

    // 0x292330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x292330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x292334: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x292334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x292338: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x29233c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29233cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292340: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x292340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x292344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292348: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292348u;
    SET_GPR_U32(ctx, 31, 0x292350u);
    ctx->pc = 0x29234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292348u;
    // 0x29234c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292348u, 0x292350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292350u;
label_292350:
    // 0x292350: 0xc08a61a  jal         func_229868
    ctx->pc = 0x292350u;
    SET_GPR_U32(ctx, 31, 0x292358u);
    ctx->pc = 0x292354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292350u;
    // 0x292354: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x292350u, 0x292358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292358u;
label_292358:
    // 0x292358: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x292358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29235c: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x29235Cu;
    {
        const bool branch_taken_0x29235c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29235c) {
            ctx->pc = 0x292360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29235Cu;
            // 0x292360: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29238Cu;
            goto label_29238c;
        }
    }
    ctx->pc = 0x292364u;
    // 0x292364: 0xc087502  jal         func_21D408
    ctx->pc = 0x292364u;
    SET_GPR_U32(ctx, 31, 0x29236Cu);
    ctx->pc = 0x292368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292364u;
    // 0x292368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x292364u, 0x29236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29236Cu;
label_29236c:
    // 0x29236c: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x29236Cu;
    SET_GPR_U32(ctx, 31, 0x292374u);
    ctx->pc = 0x292370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29236Cu;
    // 0x292370: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x29236Cu, 0x292374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292374u;
label_292374:
    // 0x292374: 0xc087502  jal         func_21D408
    ctx->pc = 0x292374u;
    SET_GPR_U32(ctx, 31, 0x29237Cu);
    ctx->pc = 0x292378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292374u;
    // 0x292378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x292374u, 0x29237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29237Cu;
label_29237c:
    // 0x29237c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29237cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292380: 0xc0a33b6  jal         func_28CED8
    ctx->pc = 0x292380u;
    SET_GPR_U32(ctx, 31, 0x292388u);
    ctx->pc = 0x292384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292380u;
    // 0x292384: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CED8u, 0x292380u, 0x292388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292388u;
label_292388:
    // 0x292388: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x292388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29238c:
    // 0x29238c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29238cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292394: 0x3e00008  jr          $ra
    ctx->pc = 0x292394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292394u;
        // 0x292398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29239Cu;
    // 0x29239c: 0x0  nop
    ctx->pc = 0x29239cu;
    // NOP
    ctx->pc = 0x2923a0u;
}
