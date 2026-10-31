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

// Function: sub_002C2D80
// Address: 0x2c2d80 - 0x2c2e30
void sub_002C2D80_0x2c2d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2D80_0x2c2d80");
#endif

    switch (ctx->pc) {
        case 0x2c2dbcu: goto label_2c2dbc;
        case 0x2c2dc4u: goto label_2c2dc4;
        case 0x2c2dd4u: goto label_2c2dd4;
        case 0x2c2ddcu: goto label_2c2ddc;
        case 0x2c2e00u: goto label_2c2e00;
        case 0x2c2e0cu: goto label_2c2e0c;
        default: break;
    }

    ctx->pc = 0x2c2d80u;

    // 0x2c2d80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c2d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c2d84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2c2d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2c2d88: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2c2d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2c2d8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c2d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c2d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c2d94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c2d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d98: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2c2d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2c2d9c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c2d9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2da0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2c2da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2c2da4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2c2da4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2da8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2c2da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2c2dac: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2c2dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2c2db0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c2db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c2db4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2C2DB4u;
    SET_GPR_U32(ctx, 31, 0x2C2DBCu);
    ctx->pc = 0x2C2DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2DB4u;
    // 0x2c2db8: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2C2DB4u, 0x2C2DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DBCu;
label_2c2dbc:
    // 0x2c2dbc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2C2DBCu;
    SET_GPR_U32(ctx, 31, 0x2C2DC4u);
    ctx->pc = 0x2C2DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2DBCu;
    // 0x2c2dc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2C2DBCu, 0x2C2DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DC4u;
label_2c2dc4:
    // 0x2c2dc4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C2DC4u;
    {
        const bool branch_taken_0x2c2dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2DC4u;
        // 0x2c2dc8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2dc4) {
            ctx->pc = 0x2C2E10u;
            goto label_2c2e10;
        }
    }
    ctx->pc = 0x2C2DCCu;
    // 0x2c2dcc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2C2DCCu;
    SET_GPR_U32(ctx, 31, 0x2C2DD4u);
    ctx->pc = 0x2C2DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2DCCu;
    // 0x2c2dd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C2DCCu, 0x2C2DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DD4u;
label_2c2dd4:
    // 0x2c2dd4: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2C2DD4u;
    SET_GPR_U32(ctx, 31, 0x2C2DDCu);
    ctx->pc = 0x2C2DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2DD4u;
    // 0x2c2dd8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C2DD4u, 0x2C2DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DDCu;
label_2c2ddc:
    // 0x2c2ddc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2de0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2DE0u;
    {
        const bool branch_taken_0x2c2de0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2DE0u;
        // 0x2c2de4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2de0) {
            ctx->pc = 0x2C2E00u;
            goto label_2c2e00;
        }
    }
    ctx->pc = 0x2C2DE8u;
    // 0x2c2de8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c2de8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2dec: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2c2decu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2df0: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2c2df0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2df8: 0xc0b0b8c  jal         func_2C2E30
    ctx->pc = 0x2C2DF8u;
    SET_GPR_U32(ctx, 31, 0x2C2E00u);
    ctx->pc = 0x2C2DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2DF8u;
    // 0x2c2dfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2E30u, 0x2C2DF8u, 0x2C2E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2E00u;
label_2c2e00:
    // 0x2c2e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e04: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2C2E04u;
    SET_GPR_U32(ctx, 31, 0x2C2E0Cu);
    ctx->pc = 0x2C2E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2E04u;
    // 0x2c2e08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C2E04u, 0x2C2E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2E0Cu;
label_2c2e0c:
    // 0x2c2e0c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2c2e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c2e10:
    // 0x2c2e10: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2c2e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c2e14: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2c2e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2e18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c2e18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2e1c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2c2e1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2e20: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2c2e20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2e24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c2e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2e28: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E28u;
        // 0x2c2e2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2E30u;
}
