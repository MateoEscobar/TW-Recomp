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

// Function: sub_00423828
// Address: 0x423828 - 0x423868
void sub_00423828_0x423828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423828_0x423828");
#endif

    switch (ctx->pc) {
        case 0x42384cu: goto label_42384c;
        default: break;
    }

    ctx->pc = 0x423828u;

    // 0x423828: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x423828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x42382c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42382cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x423830: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x423830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423834: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x423834u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6FE998u));
    // 0x423838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42383c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42383Cu;
    {
        const bool branch_taken_0x42383c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x423840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42383Cu;
        // 0x423840: 0x2464e998  addiu       $a0, $v1, -0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42383c) {
            ctx->pc = 0x423854u;
            goto label_423854;
        }
    }
    ctx->pc = 0x423844u;
    // 0x423844: 0xc109026  jal         func_424098
    ctx->pc = 0x423844u;
    SET_GPR_U32(ctx, 31, 0x42384Cu);
    ctx->pc = 0x424098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424098u, 0x423844u, 0x42384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42384Cu;
label_42384c:
    // 0x42384c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x42384Cu;
    {
        const bool branch_taken_0x42384c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x423850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42384Cu;
        // 0x423850: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42384c) {
            ctx->pc = 0x42385Cu;
            goto label_42385c;
        }
    }
    ctx->pc = 0x423854u;
label_423854:
    // 0x423854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x423854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x423858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42385c:
    // 0x42385c: 0x3e00008  jr          $ra
    ctx->pc = 0x42385Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42385Cu;
        // 0x423860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42385Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423864u;
    // 0x423864: 0x0  nop
    ctx->pc = 0x423864u;
    // NOP
    ctx->pc = 0x423868u;
}
