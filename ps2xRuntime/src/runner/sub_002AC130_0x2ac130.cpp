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

// Function: sub_002AC130
// Address: 0x2ac130 - 0x2ac180
void sub_002AC130_0x2ac130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC130_0x2ac130");
#endif

    switch (ctx->pc) {
        case 0x2ac150u: goto label_2ac150;
        case 0x2ac15cu: goto label_2ac15c;
        default: break;
    }

    ctx->pc = 0x2ac130u;

    // 0x2ac130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac134: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ac134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ac138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ac138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ac13c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac140: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ac140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac144: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ac144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ac148: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ac148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac14c: 0x245003c8  addiu       $s0, $v0, 0x3C8
    ctx->pc = 0x2ac14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 968));
label_2ac150:
    // 0x2ac150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac154: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2AC154u;
    SET_GPR_U32(ctx, 31, 0x2AC15Cu);
    ctx->pc = 0x2AC158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC154u;
    // 0x2ac158: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2AC154u, 0x2AC15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC15Cu;
label_2ac15c:
    // 0x2ac15c: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x2ac15cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ac160: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AC160u;
    {
        const bool branch_taken_0x2ac160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC160u;
        // 0x2ac164: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac160) {
            ctx->pc = 0x2AC150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac150;
        }
    }
    ctx->pc = 0x2AC168u;
    // 0x2ac168: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ac168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac16c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ac16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac174: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC174u;
        // 0x2ac178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC17Cu;
    // 0x2ac17c: 0x0  nop
    ctx->pc = 0x2ac17cu;
    // NOP
    ctx->pc = 0x2ac180u;
}
