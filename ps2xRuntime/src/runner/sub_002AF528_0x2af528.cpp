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

// Function: sub_002AF528
// Address: 0x2af528 - 0x2af5b0
void sub_002AF528_0x2af528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF528_0x2af528");
#endif

    switch (ctx->pc) {
        case 0x2af54cu: goto label_2af54c;
        case 0x2af554u: goto label_2af554;
        case 0x2af564u: goto label_2af564;
        case 0x2af56cu: goto label_2af56c;
        case 0x2af588u: goto label_2af588;
        case 0x2af594u: goto label_2af594;
        default: break;
    }

    ctx->pc = 0x2af528u;

    // 0x2af528: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2af528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2af52c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2af52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2af530: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2af530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2af534: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2af534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af538: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2af538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2af53c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2af53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2af540: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2af540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2af544: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2AF544u;
    SET_GPR_U32(ctx, 31, 0x2AF54Cu);
    ctx->pc = 0x2AF548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF544u;
    // 0x2af548: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2AF544u, 0x2AF54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF54Cu;
label_2af54c:
    // 0x2af54c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2AF54Cu;
    SET_GPR_U32(ctx, 31, 0x2AF554u);
    ctx->pc = 0x2AF550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF54Cu;
    // 0x2af550: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2AF54Cu, 0x2AF554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF554u;
label_2af554:
    // 0x2af554: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AF554u;
    {
        const bool branch_taken_0x2af554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF554u;
        // 0x2af558: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af554) {
            ctx->pc = 0x2AF598u;
            goto label_2af598;
        }
    }
    ctx->pc = 0x2AF55Cu;
    // 0x2af55c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2AF55Cu;
    SET_GPR_U32(ctx, 31, 0x2AF564u);
    ctx->pc = 0x2AF560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF55Cu;
    // 0x2af560: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AF55Cu, 0x2AF564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF564u;
label_2af564:
    // 0x2af564: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2AF564u;
    SET_GPR_U32(ctx, 31, 0x2AF56Cu);
    ctx->pc = 0x2AF568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF564u;
    // 0x2af568: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2AF564u, 0x2AF56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF56Cu;
label_2af56c:
    // 0x2af56c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2af56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af570: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF570u;
    {
        const bool branch_taken_0x2af570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF570u;
        // 0x2af574: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af570) {
            ctx->pc = 0x2AF588u;
            goto label_2af588;
        }
    }
    ctx->pc = 0x2AF578u;
    // 0x2af578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af57c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2af57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af580: 0xc0abd6c  jal         func_2AF5B0
    ctx->pc = 0x2AF580u;
    SET_GPR_U32(ctx, 31, 0x2AF588u);
    ctx->pc = 0x2AF584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF580u;
    // 0x2af584: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x2AF580u, 0x2AF588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF588u;
label_2af588:
    // 0x2af588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2af588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af58c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2AF58Cu;
    SET_GPR_U32(ctx, 31, 0x2AF594u);
    ctx->pc = 0x2AF590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF58Cu;
    // 0x2af590: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2AF58Cu, 0x2AF594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF594u;
label_2af594:
    // 0x2af594: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2af594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2af598:
    // 0x2af598: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2af598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2af59c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2af59cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af5a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2af5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF5A4u;
        // 0x2af5a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF5ACu;
    // 0x2af5ac: 0x0  nop
    ctx->pc = 0x2af5acu;
    // NOP
    ctx->pc = 0x2af5b0u;
}
