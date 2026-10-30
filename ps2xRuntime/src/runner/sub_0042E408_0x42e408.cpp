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

// Function: sub_0042E408
// Address: 0x42e408 - 0x42e490
void sub_0042E408_0x42e408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042E408_0x42e408");
#endif

    switch (ctx->pc) {
        case 0x42e420u: goto label_42e420;
        default: break;
    }

    ctx->pc = 0x42e408u;

    // 0x42e408: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x42e408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e40c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x42e40cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e410: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x42e410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x42e414: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x42e414u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x42e418: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x42E418u;
    {
        const bool branch_taken_0x42e418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E418u;
        // 0x42e41c: 0x8cea0000  lw          $t2, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e418) {
            ctx->pc = 0x42E484u;
            goto label_42e484;
        }
    }
    ctx->pc = 0x42E420u;
label_42e420:
    // 0x42e420: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x42e420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x42e424: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x42E424u;
    {
        const bool branch_taken_0x42e424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e424) {
            ctx->pc = 0x42E428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42E424u;
            // 0x42e428: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42E474u;
            goto label_42e474;
        }
    }
    ctx->pc = 0x42E42Cu;
    // 0x42e42c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x42e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x42e430: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x42E430u;
    {
        const bool branch_taken_0x42e430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e430) {
            ctx->pc = 0x42E434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42E430u;
            // 0x42e434: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42E474u;
            goto label_42e474;
        }
    }
    ctx->pc = 0x42E438u;
    // 0x42e438: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x42e438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x42e43c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x42e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x42e440: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x42e440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x42e444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42e448: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x42e448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x42e44c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x42e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x42e450: 0xad640004  sw          $a0, 0x4($t3)
    ctx->pc = 0x42e450u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 4));
    // 0x42e454: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x42e454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x42e458: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x42e458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x42e45c: 0x69282b  sltu        $a1, $v1, $t1
    ctx->pc = 0x42e45cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x42e460: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x42e460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x42e464: 0x65480b  movn        $t1, $v1, $a1
    ctx->pc = 0x42e464u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x42e468: 0x144102b  sltu        $v0, $t2, $a0
    ctx->pc = 0x42e468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x42e46c: 0x82500b  movn        $t2, $a0, $v0
    ctx->pc = 0x42e46cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 4));
    // 0x42e470: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x42e470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_42e474:
    // 0x42e474: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x42e474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x42e478: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x42e478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x42e47c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x42E47Cu;
    {
        const bool branch_taken_0x42e47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E47Cu;
        // 0x42e480: 0x24480004  addiu       $t0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e47c) {
            ctx->pc = 0x42E420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42e420;
        }
    }
    ctx->pc = 0x42E484u;
label_42e484:
    // 0x42e484: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x42e484u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x42e488: 0x3e00008  jr          $ra
    ctx->pc = 0x42E488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E488u;
        // 0x42e48c: 0xacea0000  sw          $t2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42E488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42E490u;
}
