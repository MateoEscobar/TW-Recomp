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

// Function: sub_00292758
// Address: 0x292758 - 0x2927a8
void sub_00292758_0x292758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292758_0x292758");
#endif

    switch (ctx->pc) {
        case 0x292778u: goto label_292778;
        case 0x292780u: goto label_292780;
        case 0x292790u: goto label_292790;
        default: break;
    }

    ctx->pc = 0x292758u;

    // 0x292758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29275c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x29275cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x292760: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292764: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x292764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x292768: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x292768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29276c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29276cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292770: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292770u;
    SET_GPR_U32(ctx, 31, 0x292778u);
    ctx->pc = 0x292774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292770u;
    // 0x292774: 0x58403  sra         $s0, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292770u, 0x292778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292778u;
label_292778:
    // 0x292778: 0xc08a61a  jal         func_229868
    ctx->pc = 0x292778u;
    SET_GPR_U32(ctx, 31, 0x292780u);
    ctx->pc = 0x29277Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292778u;
    // 0x29277c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x292778u, 0x292780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292780u;
label_292780:
    // 0x292780: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x292780u;
    {
        const bool branch_taken_0x292780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292780) {
            ctx->pc = 0x292784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292780u;
            // 0x292784: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292798u;
            goto label_292798;
        }
    }
    ctx->pc = 0x292788u;
    // 0x292788: 0xc087502  jal         func_21D408
    ctx->pc = 0x292788u;
    SET_GPR_U32(ctx, 31, 0x292790u);
    ctx->pc = 0x29278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292788u;
    // 0x29278c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x292788u, 0x292790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292790u;
label_292790:
    // 0x292790: 0xac500220  sw          $s0, 0x220($v0)
    ctx->pc = 0x292790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 16));
    // 0x292794: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x292794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_292798:
    // 0x292798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29279c: 0x3e00008  jr          $ra
    ctx->pc = 0x29279Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2927A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29279Cu;
        // 0x2927a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29279Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2927A4u;
    // 0x2927a4: 0x0  nop
    ctx->pc = 0x2927a4u;
    // NOP
    ctx->pc = 0x2927a8u;
}
