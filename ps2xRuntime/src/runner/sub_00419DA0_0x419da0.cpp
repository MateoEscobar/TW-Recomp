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

// Function: sub_00419DA0
// Address: 0x419da0 - 0x419e10
void sub_00419DA0_0x419da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419DA0_0x419da0");
#endif

    switch (ctx->pc) {
        case 0x419dd0u: goto label_419dd0;
        case 0x419de0u: goto label_419de0;
        default: break;
    }

    ctx->pc = 0x419da0u;

    // 0x419da0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x419da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x419da4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x419da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x419da8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x419da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x419dac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x419dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x419db0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x419db0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419db4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x419db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x419db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419dbc: 0x86420224  lh          $v0, 0x224($s2)
    ctx->pc = 0x419dbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x419dc0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x419DC0u;
    {
        const bool branch_taken_0x419dc0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x419DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419DC0u;
        // 0x419dc4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419dc0) {
            ctx->pc = 0x419DF0u;
            goto label_419df0;
        }
    }
    ctx->pc = 0x419DC8u;
    // 0x419dc8: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x419dc8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x419dcc: 0x24115740  addiu       $s1, $zero, 0x5740
    ctx->pc = 0x419dccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 22336));
label_419dd0:
    // 0x419dd0: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x419dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x419dd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x419dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x419dd8: 0xc064162  jal         func_190588
    ctx->pc = 0x419DD8u;
    SET_GPR_U32(ctx, 31, 0x419DE0u);
    ctx->pc = 0x419DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419DD8u;
    // 0x419ddc: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190588u, 0x419DD8u, 0x419DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419DE0u;
label_419de0:
    // 0x419de0: 0x86420224  lh          $v0, 0x224($s2)
    ctx->pc = 0x419de0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x419de4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x419de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x419de8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x419DE8u;
    {
        const bool branch_taken_0x419de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x419DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419DE8u;
        // 0x419dec: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419de8) {
            ctx->pc = 0x419DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_419dd0;
        }
    }
    ctx->pc = 0x419DF0u;
label_419df0:
    // 0x419df0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x419df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x419df4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x419df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x419df8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x419df8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x419dfc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x419dfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419e04: 0x3e00008  jr          $ra
    ctx->pc = 0x419E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419E04u;
        // 0x419e08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419E0Cu;
    // 0x419e0c: 0x0  nop
    ctx->pc = 0x419e0cu;
    // NOP
    ctx->pc = 0x419e10u;
}
