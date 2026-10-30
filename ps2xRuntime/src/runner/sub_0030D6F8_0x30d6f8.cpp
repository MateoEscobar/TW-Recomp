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

// Function: sub_0030D6F8
// Address: 0x30d6f8 - 0x30d7a0
void sub_0030D6F8_0x30d6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D6F8_0x30d6f8");
#endif

    switch (ctx->pc) {
        case 0x30d734u: goto label_30d734;
        case 0x30d74cu: goto label_30d74c;
        case 0x30d774u: goto label_30d774;
        case 0x30d780u: goto label_30d780;
        default: break;
    }

    ctx->pc = 0x30d6f8u;

    // 0x30d6f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30d6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30d6fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30d700: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30d700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30d704: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30d704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x30d708: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x30d708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d70c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x30d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x30d710: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x30d710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d714: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30d714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30d718: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x30d718u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d71c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30d71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30d720: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x30D720u;
    {
        const bool branch_taken_0x30d720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D720u;
        // 0x30d724: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d720) {
            ctx->pc = 0x30D780u;
            goto label_30d780;
        }
    }
    ctx->pc = 0x30D728u;
    // 0x30d728: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x30d728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x30d72c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x30D72Cu;
    SET_GPR_U32(ctx, 31, 0x30D734u);
    ctx->pc = 0x30D730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D72Cu;
    // 0x30d730: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x30D72Cu, 0x30D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D734u;
label_30d734:
    // 0x30d734: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30d734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d738: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x30d738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x30d73c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30D73Cu;
    {
        const bool branch_taken_0x30d73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D73Cu;
        // 0x30d740: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d73c) {
            ctx->pc = 0x30D784u;
            goto label_30d784;
        }
    }
    ctx->pc = 0x30D744u;
    // 0x30d744: 0xc0c1956  jal         func_306558
    ctx->pc = 0x30D744u;
    SET_GPR_U32(ctx, 31, 0x30D74Cu);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x30D744u, 0x30D74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D74Cu;
label_30d74c:
    // 0x30d74c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30d74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d750: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30D750u;
    {
        const bool branch_taken_0x30d750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D750u;
        // 0x30d754: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d750) {
            ctx->pc = 0x30D774u;
            goto label_30d774;
        }
    }
    ctx->pc = 0x30D758u;
    // 0x30d758: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x30d758u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x30d75c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x30d75cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d760: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x30d760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d768: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30d768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d76c: 0xc0c35e8  jal         func_30D7A0
    ctx->pc = 0x30D76Cu;
    SET_GPR_U32(ctx, 31, 0x30D774u);
    ctx->pc = 0x30D770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D76Cu;
    // 0x30d770: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D7A0u, 0x30D76Cu, 0x30D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D774u;
label_30d774:
    // 0x30d774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d778: 0xc059590  jal         func_165640
    ctx->pc = 0x30D778u;
    SET_GPR_U32(ctx, 31, 0x30D780u);
    ctx->pc = 0x30D77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D778u;
    // 0x30d77c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x30D778u, 0x30D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D780u;
label_30d780:
    // 0x30d780: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30d780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30d784:
    // 0x30d784: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30d784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30d788: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30d788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d78c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30d78cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d790: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x30d790u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30d794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d798: 0x3e00008  jr          $ra
    ctx->pc = 0x30D798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D798u;
        // 0x30d79c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D7A0u;
}
