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

// Function: sub_00235DB0
// Address: 0x235db0 - 0x235e10
void sub_00235DB0_0x235db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235DB0_0x235db0");
#endif

    switch (ctx->pc) {
        case 0x235dccu: goto label_235dcc;
        case 0x235dd4u: goto label_235dd4;
        default: break;
    }

    ctx->pc = 0x235db0u;

    // 0x235db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235db4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x235db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x235db8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235dbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x235dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235dc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235dc4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235DC4u;
    SET_GPR_U32(ctx, 31, 0x235DCCu);
    ctx->pc = 0x235DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235DC4u;
    // 0x235dc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235DC4u, 0x235DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DCCu;
label_235dcc:
    // 0x235dcc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x235DCCu;
    SET_GPR_U32(ctx, 31, 0x235DD4u);
    ctx->pc = 0x235DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235DCCu;
    // 0x235dd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235DCCu, 0x235DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DD4u;
label_235dd4:
    // 0x235dd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x235dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235dd8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x235DD8u;
    {
        const bool branch_taken_0x235dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x235DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DD8u;
        // 0x235ddc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235dd8) {
            ctx->pc = 0x235E00u;
            goto label_235e00;
        }
    }
    ctx->pc = 0x235DE0u;
    // 0x235de0: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235DE0u;
    {
        const bool branch_taken_0x235de0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x235DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DE0u;
        // 0x235de4: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235de0) {
            ctx->pc = 0x235DF4u;
            goto label_235df4;
        }
    }
    ctx->pc = 0x235DE8u;
    // 0x235de8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x235de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x235dec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x235DECu;
    {
        const bool branch_taken_0x235dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DECu;
        // 0x235df0: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235dec) {
            ctx->pc = 0x235DFCu;
            goto label_235dfc;
        }
    }
    ctx->pc = 0x235DF4u;
label_235df4:
    // 0x235df4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x235df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x235df8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x235df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_235dfc:
    // 0x235dfc: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x235dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_235e00:
    // 0x235e00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x235e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235e04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235e08: 0x3e00008  jr          $ra
    ctx->pc = 0x235E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E08u;
        // 0x235e0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235E10u;
}
