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

// Function: sub_00306630
// Address: 0x306630 - 0x306690
void sub_00306630_0x306630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306630_0x306630");
#endif

    switch (ctx->pc) {
        case 0x306650u: goto label_306650;
        case 0x306668u: goto label_306668;
        default: break;
    }

    ctx->pc = 0x306630u;

    // 0x306630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x306630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x306634: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x306634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x306638: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x306638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30663c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30663cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x306640: 0x2450b290  addiu       $s0, $v0, -0x4D70
    ctx->pc = 0x306640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947472));
    // 0x306644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306648: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x306648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30664c: 0x0  nop
    ctx->pc = 0x30664cu;
    // NOP
label_306650:
    // 0x306650: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x306650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x306654: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x306654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x306658: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x306658u;
    {
        const bool branch_taken_0x306658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306658u;
        // 0x30665c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306658) {
            ctx->pc = 0x30666Cu;
            goto label_30666c;
        }
    }
    ctx->pc = 0x306660u;
    // 0x306660: 0xc0c196c  jal         func_3065B0
    ctx->pc = 0x306660u;
    SET_GPR_U32(ctx, 31, 0x306668u);
    ctx->pc = 0x3065B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3065B0u, 0x306660u, 0x306668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306668u;
label_306668:
    // 0x306668: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x306668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_30666c:
    // 0x30666c: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x30666cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x306670: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x306670u;
    {
        const bool branch_taken_0x306670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306670u;
        // 0x306674: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306670) {
            ctx->pc = 0x306650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306650;
        }
    }
    ctx->pc = 0x306678u;
    // 0x306678: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x306678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30667c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30667cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306684: 0x3e00008  jr          $ra
    ctx->pc = 0x306684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306684u;
        // 0x306688: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30668Cu;
    // 0x30668c: 0x0  nop
    ctx->pc = 0x30668cu;
    // NOP
    ctx->pc = 0x306690u;
}
