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

// Function: sub_00467710
// Address: 0x467710 - 0x467760
void sub_00467710_0x467710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467710_0x467710");
#endif

    switch (ctx->pc) {
        case 0x467748u: goto label_467748;
        default: break;
    }

    ctx->pc = 0x467710u;

    // 0x467710: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x467710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x467714: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x467714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x467718: 0x8c43e688  lw          $v1, -0x1978($v0)
    ctx->pc = 0x467718u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x52E688u));
    // 0x46771c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46771cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x467720: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x467720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x467724: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x467724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x467728: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x467728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x46772c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x46772cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x467730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x467730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467734: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x467734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x467738: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x467738u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x46773c: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x46773cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x467740: 0xc119eba  jal         func_467AE8
    ctx->pc = 0x467740u;
    SET_GPR_U32(ctx, 31, 0x467748u);
    ctx->pc = 0x467744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467740u;
    // 0x467744: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467AE8u, 0x467740u, 0x467748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467748u;
label_467748:
    // 0x467748: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x467748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x46774c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x46774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x467750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x467750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x467754: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x467754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467758: 0x3e00008  jr          $ra
    ctx->pc = 0x467758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467758u;
        // 0x46775c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467760u;
}
