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

// Function: sub_00329820
// Address: 0x329820 - 0x3298d0
void sub_00329820_0x329820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329820_0x329820");
#endif

    switch (ctx->pc) {
        case 0x329850u: goto label_329850;
        case 0x329868u: goto label_329868;
        case 0x329890u: goto label_329890;
        default: break;
    }

    ctx->pc = 0x329820u;

    // 0x329820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x329820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x329824: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x329824u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329828: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x329828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x32982c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x32982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x329830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x329830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329834: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x329834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x329838: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x329838u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32983c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32983cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x329840: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x329840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x329844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329848: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x329848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x32984c: 0x0  nop
    ctx->pc = 0x32984cu;
    // NOP
label_329850:
    // 0x329850: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x329850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329854: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x329854u;
    {
        const bool branch_taken_0x329854 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x329858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329854u;
        // 0x329858: 0x24730001  addiu       $s3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329854) {
            ctx->pc = 0x3298A0u;
            goto label_3298a0;
        }
    }
    ctx->pc = 0x32985Cu;
    // 0x32985c: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x32985cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x329860: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x329860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x329864: 0x0  nop
    ctx->pc = 0x329864u;
    // NOP
label_329868:
    // 0x329868: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x329868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x32986c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32986cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x329870: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x329870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329874: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x329874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x329878: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x329878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x32987c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x329880: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x329880u;
    {
        const bool branch_taken_0x329880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329880u;
        // 0x329884: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329880) {
            ctx->pc = 0x329890u;
            goto label_329890;
        }
    }
    ctx->pc = 0x329888u;
    // 0x329888: 0xc0ca5f4  jal         func_3297D0
    ctx->pc = 0x329888u;
    SET_GPR_U32(ctx, 31, 0x329890u);
    ctx->pc = 0x3297D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3297D0u, 0x329888u, 0x329890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329890u;
label_329890:
    // 0x329890: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x329890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x329894: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x329894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x329898: 0x5040fff3  beql        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x329898u;
    {
        const bool branch_taken_0x329898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329898) {
            ctx->pc = 0x32989Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329898u;
            // 0x32989c: 0x8e220048  lw          $v0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329868;
        }
    }
    ctx->pc = 0x3298A0u;
label_3298a0:
    // 0x3298a0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x3298a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3298a4: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x3298a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x3298a8: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3298A8u;
    {
        const bool branch_taken_0x3298a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3298a8) {
            ctx->pc = 0x3298ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3298A8u;
            // 0x3298ac: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329850;
        }
    }
    ctx->pc = 0x3298B0u;
    // 0x3298b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3298b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3298b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3298b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3298b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3298b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3298bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3298bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3298c0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3298c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3298c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3298c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3298c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3298C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3298CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298C8u;
        // 0x3298cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3298C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3298D0u;
}
