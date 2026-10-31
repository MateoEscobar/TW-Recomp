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

// Function: sub_00374D90
// Address: 0x374d90 - 0x374f00
void sub_00374D90_0x374d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374D90_0x374d90");
#endif

    switch (ctx->pc) {
        case 0x374dc8u: goto label_374dc8;
        case 0x374dd0u: goto label_374dd0;
        case 0x374de8u: goto label_374de8;
        case 0x374df0u: goto label_374df0;
        case 0x374e08u: goto label_374e08;
        case 0x374e10u: goto label_374e10;
        case 0x374e28u: goto label_374e28;
        case 0x374e30u: goto label_374e30;
        case 0x374e48u: goto label_374e48;
        case 0x374e50u: goto label_374e50;
        case 0x374e68u: goto label_374e68;
        case 0x374e70u: goto label_374e70;
        case 0x374e84u: goto label_374e84;
        case 0x374ea4u: goto label_374ea4;
        case 0x374eacu: goto label_374eac;
        case 0x374ed0u: goto label_374ed0;
        default: break;
    }

    ctx->pc = 0x374d90u;

    // 0x374d90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x374d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x374d94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x374d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374d98: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x374d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x374d9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374da0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x374da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374da4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x374da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x374da8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x374da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x374dac: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x374dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x374db0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x374db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x374db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374db8: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x374db8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x374dbc: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x374dbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x374dc0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374DC0u;
    SET_GPR_U32(ctx, 31, 0x374DC8u);
    ctx->pc = 0x374DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374DC0u;
    // 0x374dc4: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374DC0u, 0x374DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374DC8u;
label_374dc8:
    // 0x374dc8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x374DC8u;
    SET_GPR_U32(ctx, 31, 0x374DD0u);
    ctx->pc = 0x374DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374DC8u;
    // 0x374dcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x374DC8u, 0x374DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374DD0u;
label_374dd0:
    // 0x374dd0: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x374dd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x374dd4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x374dd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x374dd8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x374dd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374ddc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x374ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x374de0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374DE0u;
    SET_GPR_U32(ctx, 31, 0x374DE8u);
    ctx->pc = 0x374DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374DE0u;
    // 0x374de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374DE0u, 0x374DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374DE8u;
label_374de8:
    // 0x374de8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x374DE8u;
    SET_GPR_U32(ctx, 31, 0x374DF0u);
    ctx->pc = 0x374DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374DE8u;
    // 0x374dec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x374DE8u, 0x374DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374DF0u;
label_374df0:
    // 0x374df0: 0x34068028  ori         $a2, $zero, 0x8028
    ctx->pc = 0x374df0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x374df4: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x374df4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x374df8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x374df8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374dfc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x374dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x374e00: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374E00u;
    SET_GPR_U32(ctx, 31, 0x374E08u);
    ctx->pc = 0x374E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374E00u;
    // 0x374e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374E00u, 0x374E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E08u;
label_374e08:
    // 0x374e08: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x374E08u;
    SET_GPR_U32(ctx, 31, 0x374E10u);
    ctx->pc = 0x374E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374E08u;
    // 0x374e0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x374E08u, 0x374E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E10u;
label_374e10:
    // 0x374e10: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x374e10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x374e14: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x374e14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x374e18: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x374e18u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x374e1c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x374e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x374e20: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374E20u;
    SET_GPR_U32(ctx, 31, 0x374E28u);
    ctx->pc = 0x374E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374E20u;
    // 0x374e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374E20u, 0x374E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E28u;
label_374e28:
    // 0x374e28: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x374E28u;
    SET_GPR_U32(ctx, 31, 0x374E30u);
    ctx->pc = 0x374E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374E28u;
    // 0x374e2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x374E28u, 0x374E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E30u;
label_374e30:
    // 0x374e30: 0x340680ad  ori         $a2, $zero, 0x80AD
    ctx->pc = 0x374e30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32941);
    // 0x374e34: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x374e34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x374e38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x374e38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e3c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x374e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x374e40: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374E40u;
    SET_GPR_U32(ctx, 31, 0x374E48u);
    ctx->pc = 0x374E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374E40u;
    // 0x374e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374E40u, 0x374E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E48u;
label_374e48:
    // 0x374e48: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x374E48u;
    SET_GPR_U32(ctx, 31, 0x374E50u);
    ctx->pc = 0x374E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374E48u;
    // 0x374e4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x374E48u, 0x374E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E50u;
label_374e50:
    // 0x374e50: 0x3406808d  ori         $a2, $zero, 0x808D
    ctx->pc = 0x374e50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32909);
    // 0x374e54: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x374e54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x374e58: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x374e58u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x374e5c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x374e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x374e60: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374E60u;
    SET_GPR_U32(ctx, 31, 0x374E68u);
    ctx->pc = 0x374E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374E60u;
    // 0x374e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374E60u, 0x374E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E68u;
label_374e68:
    // 0x374e68: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x374E68u;
    SET_GPR_U32(ctx, 31, 0x374E70u);
    ctx->pc = 0x374E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374E68u;
    // 0x374e6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x374E68u, 0x374E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E70u;
label_374e70:
    // 0x374e70: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x374e70u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x374e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x374e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e78: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x374e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x374e7c: 0xc102488  jal         func_409220
    ctx->pc = 0x374E7Cu;
    SET_GPR_U32(ctx, 31, 0x374E84u);
    ctx->pc = 0x374E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374E7Cu;
    // 0x374e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x374E7Cu, 0x374E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E84u;
label_374e84:
    // 0x374e84: 0x340681ba  ori         $a2, $zero, 0x81BA
    ctx->pc = 0x374e84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33210);
    // 0x374e88: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x374e88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x374e8c: 0x34c69800  ori         $a2, $a2, 0x9800
    ctx->pc = 0x374e8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)38912);
    // 0x374e90: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x374e90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x374e94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x374e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x374e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e9c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374E9Cu;
    SET_GPR_U32(ctx, 31, 0x374EA4u);
    ctx->pc = 0x374EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374E9Cu;
    // 0x374ea0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374E9Cu, 0x374EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374EA4u;
label_374ea4:
    // 0x374ea4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x374EA4u;
    SET_GPR_U32(ctx, 31, 0x374EACu);
    ctx->pc = 0x374EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374EA4u;
    // 0x374ea8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x374EA4u, 0x374EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374EACu;
label_374eac:
    // 0x374eac: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x374eacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374eb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x374eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374eb4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x374eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374eb8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x374eb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x374ebc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x374ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374ec0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x374ec0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x374ec4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x374ec4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x374ec8: 0xc0c57ba  jal         func_315EE8
    ctx->pc = 0x374EC8u;
    SET_GPR_U32(ctx, 31, 0x374ED0u);
    ctx->pc = 0x374ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374EC8u;
    // 0x374ecc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315EE8u, 0x374EC8u, 0x374ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374ED0u;
label_374ed0:
    // 0x374ed0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x374ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x374ed4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x374ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374ed8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x374ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x374edc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x374edcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374ee0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x374ee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374ee4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x374ee4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374eec: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x374eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x374ef0: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x374ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x374ef4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x374ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x374ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x374EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374EF8u;
        // 0x374efc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374F00u;
}
