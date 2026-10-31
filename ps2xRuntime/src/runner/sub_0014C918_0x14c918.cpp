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

// Function: sub_0014C918
// Address: 0x14c918 - 0x14c968
void sub_0014C918_0x14c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C918_0x14c918");
#endif

    switch (ctx->pc) {
        case 0x14c938u: goto label_14c938;
        case 0x14c954u: goto label_14c954;
        default: break;
    }

    ctx->pc = 0x14c918u;

    // 0x14c918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14c918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14c91c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14c91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14c920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c924: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14c924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14c928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14c92c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x14c92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14c930: 0xc043cbc  jal         func_10F2F0
    ctx->pc = 0x14C930u;
    SET_GPR_U32(ctx, 31, 0x14C938u);
    ctx->pc = 0x14C934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C930u;
    // 0x14c934: 0x8e110040  lw          $s1, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x14C930u, 0x14C938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C938u;
label_14c938:
    // 0x14c938: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C938u;
    {
        const bool branch_taken_0x14c938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c938) {
            ctx->pc = 0x14C93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C938u;
            // 0x14c93c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C958u;
            goto label_14c958;
        }
    }
    ctx->pc = 0x14C940u;
    // 0x14c940: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x14c940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x14c944: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C944u;
    {
        const bool branch_taken_0x14c944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C944u;
        // 0x14c948: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c944) {
            ctx->pc = 0x14C958u;
            goto label_14c958;
        }
    }
    ctx->pc = 0x14C94Cu;
    // 0x14c94c: 0xc0541f4  jal         func_1507D0
    ctx->pc = 0x14C94Cu;
    SET_GPR_U32(ctx, 31, 0x14C954u);
    ctx->pc = 0x14C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C94Cu;
    // 0x14c950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1507D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507D0u, 0x14C94Cu, 0x14C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C954u;
label_14c954:
    // 0x14c954: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14c954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14c958:
    // 0x14c958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14c958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c960: 0x3e00008  jr          $ra
    ctx->pc = 0x14C960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C960u;
        // 0x14c964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C968u;
}
