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

// Function: sub_003A7DA8
// Address: 0x3a7da8 - 0x3a7e10
void sub_003A7DA8_0x3a7da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7DA8_0x3a7da8");
#endif

    switch (ctx->pc) {
        case 0x3a7dd0u: goto label_3a7dd0;
        case 0x3a7dfcu: goto label_3a7dfc;
        default: break;
    }

    ctx->pc = 0x3a7da8u;

    // 0x3a7da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a7da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a7dac: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x3a7dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3a7db0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a7db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a7db4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a7db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a7db8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a7db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7dbc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a7dbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a7dc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a7dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7dc4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3a7dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3a7dc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a7dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a7dcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3a7dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3a7dd0:
    // 0x3a7dd0: 0x0  nop
    ctx->pc = 0x3a7dd0u;
    // NOP
    // 0x3a7dd4: 0x0  nop
    ctx->pc = 0x3a7dd4u;
    // NOP
    // 0x3a7dd8: 0x0  nop
    ctx->pc = 0x3a7dd8u;
    // NOP
    // 0x3a7ddc: 0x0  nop
    ctx->pc = 0x3a7ddcu;
    // NOP
    // 0x3a7de0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A7DE0u;
    {
        const bool branch_taken_0x3a7de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A7DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7DE0u;
        // 0x3a7de4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7de0) {
            ctx->pc = 0x3A7DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7dd0;
        }
    }
    ctx->pc = 0x3A7DE8u;
    // 0x3a7de8: 0x2602fff0  addiu       $v0, $s0, -0x10
    ctx->pc = 0x3a7de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3a7dec: 0xae100404  sw          $s0, 0x404($s0)
    ctx->pc = 0x3a7decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 16));
    // 0x3a7df0: 0xae020400  sw          $v0, 0x400($s0)
    ctx->pc = 0x3a7df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 2));
    // 0x3a7df4: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A7DF4u;
    SET_GPR_U32(ctx, 31, 0x3A7DFCu);
    ctx->pc = 0x3A7DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7DF4u;
    // 0x3a7df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A7DF4u, 0x3A7DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7DFCu;
label_3a7dfc:
    // 0x3a7dfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a7dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a7e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7e04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a7e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a7e08: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E08u;
        // 0x3a7e0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7E10u;
}
