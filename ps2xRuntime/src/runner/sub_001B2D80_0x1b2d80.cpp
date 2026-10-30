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

// Function: sub_001B2D80
// Address: 0x1b2d80 - 0x1b2e10
void sub_001B2D80_0x1b2d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2D80_0x1b2d80");
#endif

    switch (ctx->pc) {
        case 0x1b2db0u: goto label_1b2db0;
        case 0x1b2dc4u: goto label_1b2dc4;
        case 0x1b2de0u: goto label_1b2de0;
        case 0x1b2df4u: goto label_1b2df4;
        default: break;
    }

    ctx->pc = 0x1b2d80u;

    // 0x1b2d80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b2d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b2d84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b2d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b2d88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b2d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b2d8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d90: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b2d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b2d94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b2d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2d9c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1B2D9Cu;
    {
        const bool branch_taken_0x1b2d9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D9Cu;
        // 0x1b2da0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d9c) {
            ctx->pc = 0x1B2DCCu;
            goto label_1b2dcc;
        }
    }
    ctx->pc = 0x1B2DA4u;
    // 0x1b2da4: 0x260415d0  addiu       $a0, $s0, 0x15D0
    ctx->pc = 0x1b2da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
    // 0x1b2da8: 0xc07114a  jal         func_1C4528
    ctx->pc = 0x1B2DA8u;
    SET_GPR_U32(ctx, 31, 0x1B2DB0u);
    ctx->pc = 0x1B2DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2DA8u;
    // 0x1b2dac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4528u, 0x1B2DA8u, 0x1B2DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2DB0u;
label_1b2db0:
    // 0x1b2db0: 0x26043f10  addiu       $a0, $s0, 0x3F10
    ctx->pc = 0x1b2db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16144));
    // 0x1b2db4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2db8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b2db8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2dbc: 0xc07114a  jal         func_1C4528
    ctx->pc = 0x1B2DBCu;
    SET_GPR_U32(ctx, 31, 0x1B2DC4u);
    ctx->pc = 0x1B2DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2DBCu;
    // 0x1b2dc0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4528u, 0x1B2DBCu, 0x1B2DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2DC4u;
label_1b2dc4:
    // 0x1b2dc4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B2DC4u;
    {
        const bool branch_taken_0x1b2dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2DC4u;
        // 0x1b2dc8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2dc4) {
            ctx->pc = 0x1B2DF8u;
            goto label_1b2df8;
        }
    }
    ctx->pc = 0x1B2DCCu;
label_1b2dcc:
    // 0x1b2dcc: 0x260415d0  addiu       $a0, $s0, 0x15D0
    ctx->pc = 0x1b2dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
    // 0x1b2dd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2dd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2dd8: 0xc07114a  jal         func_1C4528
    ctx->pc = 0x1B2DD8u;
    SET_GPR_U32(ctx, 31, 0x1B2DE0u);
    ctx->pc = 0x1B2DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2DD8u;
    // 0x1b2ddc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4528u, 0x1B2DD8u, 0x1B2DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2DE0u;
label_1b2de0:
    // 0x1b2de0: 0x26043f10  addiu       $a0, $s0, 0x3F10
    ctx->pc = 0x1b2de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16144));
    // 0x1b2de4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2de8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b2de8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2dec: 0xc07114a  jal         func_1C4528
    ctx->pc = 0x1B2DECu;
    SET_GPR_U32(ctx, 31, 0x1B2DF4u);
    ctx->pc = 0x1B2DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2DECu;
    // 0x1b2df0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4528u, 0x1B2DECu, 0x1B2DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2DF4u;
label_1b2df4:
    // 0x1b2df4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b2df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b2df8:
    // 0x1b2df8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b2df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2dfc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b2dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2e04: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E04u;
        // 0x1b2e08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2E0Cu;
    // 0x1b2e0c: 0x0  nop
    ctx->pc = 0x1b2e0cu;
    // NOP
    ctx->pc = 0x1b2e10u;
}
