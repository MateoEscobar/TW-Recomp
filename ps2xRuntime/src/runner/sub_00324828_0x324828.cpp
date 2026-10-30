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

// Function: sub_00324828
// Address: 0x324828 - 0x324890
void sub_00324828_0x324828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324828_0x324828");
#endif

    switch (ctx->pc) {
        case 0x324850u: goto label_324850;
        case 0x324860u: goto label_324860;
        case 0x324870u: goto label_324870;
        default: break;
    }

    ctx->pc = 0x324828u;

    // 0x324828: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x324828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32482c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x32482cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x324830: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x324830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x324834: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x324834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324838: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x324838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32483c: 0x18c0000e  blez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x32483Cu;
    {
        const bool branch_taken_0x32483c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x324840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32483Cu;
        // 0x324840: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32483c) {
            ctx->pc = 0x324878u;
            goto label_324878;
        }
    }
    ctx->pc = 0x324844u;
    // 0x324844: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x324844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324848: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x324848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32484c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x32484cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_324850:
    // 0x324850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x324850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x324854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324858: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x324858u;
    SET_GPR_U32(ctx, 31, 0x324860u);
    ctx->pc = 0x32485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324858u;
    // 0x32485c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x324858u, 0x324860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324860u;
label_324860:
    // 0x324860: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x324860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x324864: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x324864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324868: 0xc0c8f98  jal         func_323E60
    ctx->pc = 0x324868u;
    SET_GPR_U32(ctx, 31, 0x324870u);
    ctx->pc = 0x32486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324868u;
    // 0x32486c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E60u, 0x324868u, 0x324870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324870u;
label_324870:
    // 0x324870: 0x5620fff7  bnel        $s1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x324870u;
    {
        const bool branch_taken_0x324870 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x324870) {
            ctx->pc = 0x324874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324870u;
            // 0x324874: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324850;
        }
    }
    ctx->pc = 0x324878u;
label_324878:
    // 0x324878: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x324878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32487c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32487cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324880: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x324880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324888: 0x3e00008  jr          $ra
    ctx->pc = 0x324888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324888u;
        // 0x32488c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324890u;
}
