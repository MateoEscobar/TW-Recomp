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

// Function: sub_00363D70
// Address: 0x363d70 - 0x363e50
void sub_00363D70_0x363d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363D70_0x363d70");
#endif

    switch (ctx->pc) {
        case 0x363da0u: goto label_363da0;
        case 0x363da8u: goto label_363da8;
        case 0x363dbcu: goto label_363dbc;
        case 0x363dc4u: goto label_363dc4;
        case 0x363dd8u: goto label_363dd8;
        case 0x363de0u: goto label_363de0;
        case 0x363df8u: goto label_363df8;
        case 0x363e00u: goto label_363e00;
        case 0x363e14u: goto label_363e14;
        case 0x363e2cu: goto label_363e2c;
        default: break;
    }

    ctx->pc = 0x363d70u;

    // 0x363d70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x363d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x363d74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x363d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363d78: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x363d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x363d7c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x363d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x363d80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x363d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363d84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x363d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363d88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x363d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x363d8c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x363d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x363d90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x363d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363d98: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363D98u;
    SET_GPR_U32(ctx, 31, 0x363DA0u);
    ctx->pc = 0x363D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363D98u;
    // 0x363d9c: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363D98u, 0x363DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363DA0u;
label_363da0:
    // 0x363da0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x363DA0u;
    SET_GPR_U32(ctx, 31, 0x363DA8u);
    ctx->pc = 0x363DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363DA0u;
    // 0x363da4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x363DA0u, 0x363DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363DA8u;
label_363da8:
    // 0x363da8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x363da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363dac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x363dacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363db0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x363db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363db4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363DB4u;
    SET_GPR_U32(ctx, 31, 0x363DBCu);
    ctx->pc = 0x363DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363DB4u;
    // 0x363db8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363DB4u, 0x363DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363DBCu;
label_363dbc:
    // 0x363dbc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x363DBCu;
    SET_GPR_U32(ctx, 31, 0x363DC4u);
    ctx->pc = 0x363DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363DBCu;
    // 0x363dc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x363DBCu, 0x363DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363DC4u;
label_363dc4:
    // 0x363dc4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x363dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363dc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x363dc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363dcc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x363dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363dd0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363DD0u;
    SET_GPR_U32(ctx, 31, 0x363DD8u);
    ctx->pc = 0x363DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363DD0u;
    // 0x363dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363DD0u, 0x363DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363DD8u;
label_363dd8:
    // 0x363dd8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x363DD8u;
    SET_GPR_U32(ctx, 31, 0x363DE0u);
    ctx->pc = 0x363DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363DD8u;
    // 0x363ddc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x363DD8u, 0x363DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363DE0u;
label_363de0:
    // 0x363de0: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x363de0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x363de4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x363de4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x363de8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x363de8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x363dec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x363decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x363df0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363DF0u;
    SET_GPR_U32(ctx, 31, 0x363DF8u);
    ctx->pc = 0x363DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363DF0u;
    // 0x363df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363DF0u, 0x363DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363DF8u;
label_363df8:
    // 0x363df8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x363DF8u;
    SET_GPR_U32(ctx, 31, 0x363E00u);
    ctx->pc = 0x363DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363DF8u;
    // 0x363dfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x363DF8u, 0x363E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363E00u;
label_363e00:
    // 0x363e00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x363e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363e04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x363e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363e08: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x363e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x363e0c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x363E0Cu;
    SET_GPR_U32(ctx, 31, 0x363E14u);
    ctx->pc = 0x363E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363E0Cu;
    // 0x363e10: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x363E0Cu, 0x363E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363E14u;
label_363e14:
    // 0x363e14: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x363e14u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x363e18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x363e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363e1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x363e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363e20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x363e20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x363e24: 0xc0b648e  jal         func_2D9238
    ctx->pc = 0x363E24u;
    SET_GPR_U32(ctx, 31, 0x363E2Cu);
    ctx->pc = 0x363E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363E24u;
    // 0x363e28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9238u, 0x363E24u, 0x363E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363E2Cu;
label_363e2c:
    // 0x363e2c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x363e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x363e30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x363e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363e34: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x363e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x363e38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x363e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363e3c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x363e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363e44: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x363e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x363e48: 0x3e00008  jr          $ra
    ctx->pc = 0x363E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363E48u;
        // 0x363e4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363E50u;
}
