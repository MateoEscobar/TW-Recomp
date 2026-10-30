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

// Function: sub_002D97C0
// Address: 0x2d97c0 - 0x2d9848
void sub_002D97C0_0x2d97c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D97C0_0x2d97c0");
#endif

    switch (ctx->pc) {
        case 0x2d97e4u: goto label_2d97e4;
        case 0x2d97ecu: goto label_2d97ec;
        case 0x2d97fcu: goto label_2d97fc;
        case 0x2d9804u: goto label_2d9804;
        case 0x2d9824u: goto label_2d9824;
        case 0x2d9830u: goto label_2d9830;
        default: break;
    }

    ctx->pc = 0x2d97c0u;

    // 0x2d97c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d97c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d97c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d97c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d97c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d97c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d97cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d97ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d97d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d97d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d97d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d97d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d97d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d97d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d97dc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2D97DCu;
    SET_GPR_U32(ctx, 31, 0x2D97E4u);
    ctx->pc = 0x2D97E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D97DCu;
    // 0x2d97e0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D97DCu, 0x2D97E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D97E4u;
label_2d97e4:
    // 0x2d97e4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2D97E4u;
    SET_GPR_U32(ctx, 31, 0x2D97ECu);
    ctx->pc = 0x2D97E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D97E4u;
    // 0x2d97e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2D97E4u, 0x2D97ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D97ECu;
label_2d97ec:
    // 0x2d97ec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D97ECu;
    {
        const bool branch_taken_0x2d97ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D97F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97ECu;
        // 0x2d97f0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d97ec) {
            ctx->pc = 0x2D9834u;
            goto label_2d9834;
        }
    }
    ctx->pc = 0x2D97F4u;
    // 0x2d97f4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D97F4u;
    SET_GPR_U32(ctx, 31, 0x2D97FCu);
    ctx->pc = 0x2D97F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D97F4u;
    // 0x2d97f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D97F4u, 0x2D97FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D97FCu;
label_2d97fc:
    // 0x2d97fc: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2D97FCu;
    SET_GPR_U32(ctx, 31, 0x2D9804u);
    ctx->pc = 0x2D9800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D97FCu;
    // 0x2d9800: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2D97FCu, 0x2D9804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9804u;
label_2d9804:
    // 0x2d9804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9808: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D9808u;
    {
        const bool branch_taken_0x2d9808 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9808u;
        // 0x2d980c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9808) {
            ctx->pc = 0x2D9824u;
            goto label_2d9824;
        }
    }
    ctx->pc = 0x2D9810u;
    // 0x2d9810: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2d9810u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2d9814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9818: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d9818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d981c: 0xc0b6612  jal         func_2D9848
    ctx->pc = 0x2D981Cu;
    SET_GPR_U32(ctx, 31, 0x2D9824u);
    ctx->pc = 0x2D9820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D981Cu;
    // 0x2d9820: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9848u, 0x2D981Cu, 0x2D9824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9824u;
label_2d9824:
    // 0x2d9824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9828: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2D9828u;
    SET_GPR_U32(ctx, 31, 0x2D9830u);
    ctx->pc = 0x2D982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9828u;
    // 0x2d982c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2D9828u, 0x2D9830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9830u;
label_2d9830:
    // 0x2d9830: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d9830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d9834:
    // 0x2d9834: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d9834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9838: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d9838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d983c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d983cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9840: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9840u;
        // 0x2d9844: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9848u;
}
