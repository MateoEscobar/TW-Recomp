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

// Function: sub_0030B6F8
// Address: 0x30b6f8 - 0x30b790
void sub_0030B6F8_0x30b6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B6F8_0x30b6f8");
#endif

    switch (ctx->pc) {
        case 0x30b72cu: goto label_30b72c;
        case 0x30b744u: goto label_30b744;
        case 0x30b768u: goto label_30b768;
        case 0x30b774u: goto label_30b774;
        default: break;
    }

    ctx->pc = 0x30b6f8u;

    // 0x30b6f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30b6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30b6fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30b700: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30b700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30b704: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x30b704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x30b708: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x30b708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b70c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30b70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x30b710: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x30b710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b714: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30b714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x30b718: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x30B718u;
    {
        const bool branch_taken_0x30b718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B718u;
        // 0x30b71c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b718) {
            ctx->pc = 0x30B774u;
            goto label_30b774;
        }
    }
    ctx->pc = 0x30B720u;
    // 0x30b720: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x30b720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x30b724: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x30B724u;
    SET_GPR_U32(ctx, 31, 0x30B72Cu);
    ctx->pc = 0x30B728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B724u;
    // 0x30b728: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x30B724u, 0x30B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B72Cu;
label_30b72c:
    // 0x30b72c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30b72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b730: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x30b730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x30b734: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30B734u;
    {
        const bool branch_taken_0x30b734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B734u;
        // 0x30b738: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b734) {
            ctx->pc = 0x30B778u;
            goto label_30b778;
        }
    }
    ctx->pc = 0x30B73Cu;
    // 0x30b73c: 0xc0c1956  jal         func_306558
    ctx->pc = 0x30B73Cu;
    SET_GPR_U32(ctx, 31, 0x30B744u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x30B73Cu, 0x30B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B744u;
label_30b744:
    // 0x30b744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30b744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b748: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30B748u;
    {
        const bool branch_taken_0x30b748 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B748u;
        // 0x30b74c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b748) {
            ctx->pc = 0x30B768u;
            goto label_30b768;
        }
    }
    ctx->pc = 0x30B750u;
    // 0x30b750: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x30b750u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x30b754: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x30b754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b75c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30b75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b760: 0xc0c2de4  jal         func_30B790
    ctx->pc = 0x30B760u;
    SET_GPR_U32(ctx, 31, 0x30B768u);
    ctx->pc = 0x30B764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B760u;
    // 0x30b764: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B790u, 0x30B760u, 0x30B768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B768u;
label_30b768:
    // 0x30b768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b76c: 0xc059590  jal         func_165640
    ctx->pc = 0x30B76Cu;
    SET_GPR_U32(ctx, 31, 0x30B774u);
    ctx->pc = 0x30B770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B76Cu;
    // 0x30b770: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x30B76Cu, 0x30B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B774u;
label_30b774:
    // 0x30b774: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30b774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30b778:
    // 0x30b778: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30b778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30b77c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30b77cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b780: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x30b780u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b788: 0x3e00008  jr          $ra
    ctx->pc = 0x30B788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B788u;
        // 0x30b78c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B790u;
}
