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

// Function: sub_00315D98
// Address: 0x315d98 - 0x315e48
void sub_00315D98_0x315d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315D98_0x315d98");
#endif

    switch (ctx->pc) {
        case 0x315dc8u: goto label_315dc8;
        case 0x315ddcu: goto label_315ddc;
        case 0x315de4u: goto label_315de4;
        case 0x315df4u: goto label_315df4;
        case 0x315e1cu: goto label_315e1c;
        case 0x315e28u: goto label_315e28;
        default: break;
    }

    ctx->pc = 0x315d98u;

    // 0x315d98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x315d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x315d9c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x315d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x315da0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x315da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x315da4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x315da4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x315da8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x315da8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x315dac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x315dacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315db0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x315db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x315db4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x315db4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x315db8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x315db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x315dbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x315dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x315dc0: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x315DC0u;
    SET_GPR_U32(ctx, 31, 0x315DC8u);
    ctx->pc = 0x315DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315DC0u;
    // 0x315dc4: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x315DC0u, 0x315DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315DC8u;
label_315dc8:
    // 0x315dc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x315dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315dcc: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x315DCCu;
    {
        const bool branch_taken_0x315dcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x315DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DCCu;
        // 0x315dd0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315dcc) {
            ctx->pc = 0x315E2Cu;
            goto label_315e2c;
        }
    }
    ctx->pc = 0x315DD4u;
    // 0x315dd4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x315DD4u;
    SET_GPR_U32(ctx, 31, 0x315DDCu);
    ctx->pc = 0x315DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315DD4u;
    // 0x315dd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x315DD4u, 0x315DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315DDCu;
label_315ddc:
    // 0x315ddc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x315DDCu;
    SET_GPR_U32(ctx, 31, 0x315DE4u);
    ctx->pc = 0x315DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315DDCu;
    // 0x315de0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x315DDCu, 0x315DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315DE4u;
label_315de4:
    // 0x315de4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x315DE4u;
    {
        const bool branch_taken_0x315de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DE4u;
        // 0x315de8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315de4) {
            ctx->pc = 0x315E2Cu;
            goto label_315e2c;
        }
    }
    ctx->pc = 0x315DECu;
    // 0x315dec: 0xc0c1956  jal         func_306558
    ctx->pc = 0x315DECu;
    SET_GPR_U32(ctx, 31, 0x315DF4u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x315DECu, 0x315DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315DF4u;
label_315df4:
    // 0x315df4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315df8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315DF8u;
    {
        const bool branch_taken_0x315df8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DF8u;
        // 0x315dfc: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315df8) {
            ctx->pc = 0x315E1Cu;
            goto label_315e1c;
        }
    }
    ctx->pc = 0x315E00u;
    // 0x315e00: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x315e00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x315e04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x315e04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x315e08: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x315e08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x315e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315e10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x315e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315e14: 0xc0c4076  jal         func_3101D8
    ctx->pc = 0x315E14u;
    SET_GPR_U32(ctx, 31, 0x315E1Cu);
    ctx->pc = 0x315E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315E14u;
    // 0x315e18: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3101D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3101D8u, 0x315E14u, 0x315E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315E1Cu;
label_315e1c:
    // 0x315e1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315e20: 0xc059590  jal         func_165640
    ctx->pc = 0x315E20u;
    SET_GPR_U32(ctx, 31, 0x315E28u);
    ctx->pc = 0x315E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315E20u;
    // 0x315e24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x315E20u, 0x315E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315E28u;
label_315e28:
    // 0x315e28: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x315e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_315e2c:
    // 0x315e2c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x315e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x315e30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x315e30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x315e34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x315e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315e38: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x315e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x315e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x315E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E3Cu;
        // 0x315e40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315E44u;
    // 0x315e44: 0x0  nop
    ctx->pc = 0x315e44u;
    // NOP
    ctx->pc = 0x315e48u;
}
