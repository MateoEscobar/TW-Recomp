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

// Function: sub_0048B500
// Address: 0x48b500 - 0x48b578
void sub_0048B500_0x48b500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B500_0x48b500");
#endif

    switch (ctx->pc) {
        case 0x48b530u: goto label_48b530;
        case 0x48b544u: goto label_48b544;
        default: break;
    }

    ctx->pc = 0x48b500u;

label_48b500:
    // 0x48b500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x48b500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x48b504: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48b504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48b508: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x48b508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x48b50c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x48b50cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b510: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x48b510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x48b514: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x48b514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x48b518: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x48B518u;
    {
        const bool branch_taken_0x48b518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B518u;
        // 0x48b51c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b518) {
            ctx->pc = 0x48B558u;
            goto label_48b558;
        }
    }
    ctx->pc = 0x48B520u;
    // 0x48b520: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x48B520u;
    {
        const bool branch_taken_0x48b520 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x48B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B520u;
        // 0x48b524: 0x24b3ffff  addiu       $s3, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b520) {
            ctx->pc = 0x48B554u;
            goto label_48b554;
        }
    }
    ctx->pc = 0x48B528u;
    // 0x48b528: 0x2490001c  addiu       $s0, $a0, 0x1C
    ctx->pc = 0x48b528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x48b52c: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x48b52cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_48b530:
    // 0x48b530: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x48b530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48b534: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x48b534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b538: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x48b538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x48b53c: 0xc122d40  jal         func_48B500
    ctx->pc = 0x48B53Cu;
    SET_GPR_U32(ctx, 31, 0x48B544u);
    ctx->pc = 0x48B540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B53Cu;
    // 0x48b540: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B500u;
    goto label_48b500;
    ctx->pc = 0x48B544u;
label_48b544:
    // 0x48b544: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x48B544u;
    {
        const bool branch_taken_0x48b544 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x48B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B544u;
        // 0x48b548: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b544) {
            ctx->pc = 0x48B530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48b530;
        }
    }
    ctx->pc = 0x48B54Cu;
    // 0x48b54c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48B54Cu;
    {
        const bool branch_taken_0x48b54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B54Cu;
        // 0x48b550: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b54c) {
            ctx->pc = 0x48B55Cu;
            goto label_48b55c;
        }
    }
    ctx->pc = 0x48B554u;
label_48b554:
    // 0x48b554: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x48b554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48b558:
    // 0x48b558: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x48b558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_48b55c:
    // 0x48b55c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x48b55cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48b560: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x48b560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48b564: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48b564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48b568: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x48b568u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48b56c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b570: 0x3e00008  jr          $ra
    ctx->pc = 0x48B570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B570u;
        // 0x48b574: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B578u;
}
