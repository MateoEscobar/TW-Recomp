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

// Function: sub_00365F28
// Address: 0x365f28 - 0x366140
void sub_00365F28_0x365f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365F28_0x365f28");
#endif

    switch (ctx->pc) {
        case 0x365f70u: goto label_365f70;
        case 0x365f84u: goto label_365f84;
        case 0x365f8cu: goto label_365f8c;
        case 0x365fa0u: goto label_365fa0;
        case 0x365fa8u: goto label_365fa8;
        case 0x365fbcu: goto label_365fbc;
        case 0x365fc4u: goto label_365fc4;
        case 0x365fd8u: goto label_365fd8;
        case 0x365fe0u: goto label_365fe0;
        case 0x365ff4u: goto label_365ff4;
        case 0x365ffcu: goto label_365ffc;
        case 0x366010u: goto label_366010;
        case 0x366018u: goto label_366018;
        case 0x36602cu: goto label_36602c;
        case 0x366034u: goto label_366034;
        case 0x366040u: goto label_366040;
        case 0x366058u: goto label_366058;
        case 0x366060u: goto label_366060;
        case 0x366098u: goto label_366098;
        case 0x3660a4u: goto label_3660a4;
        case 0x3660bcu: goto label_3660bc;
        case 0x3660c8u: goto label_3660c8;
        case 0x3660d0u: goto label_3660d0;
        case 0x3660e0u: goto label_3660e0;
        case 0x3660f4u: goto label_3660f4;
        default: break;
    }

    ctx->pc = 0x365f28u;

    // 0x365f28: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x365f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x365f2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365f30: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x365f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x365f34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x365f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f38: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x365f38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f3c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x365f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x365f40: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x365f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x365f44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x365f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x365f48: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x365f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x365f4c: 0xe7b90098  swc1        $f25, 0x98($sp)
    ctx->pc = 0x365f4cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x365f50: 0xe7b80090  swc1        $f24, 0x90($sp)
    ctx->pc = 0x365f50u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x365f54: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x365f54u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x365f58: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x365f58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x365f5c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x365f5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x365f60: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x365f60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x365f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x365f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x365f68: 0xc102488  jal         func_409220
    ctx->pc = 0x365F68u;
    SET_GPR_U32(ctx, 31, 0x365F70u);
    ctx->pc = 0x365F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365F68u;
    // 0x365f6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x365F68u, 0x365F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F70u;
label_365f70:
    // 0x365f70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x365f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365f78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x365f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f7c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365F7Cu;
    SET_GPR_U32(ctx, 31, 0x365F84u);
    ctx->pc = 0x365F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365F7Cu;
    // 0x365f80: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365F7Cu, 0x365F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F84u;
label_365f84:
    // 0x365f84: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365F84u;
    SET_GPR_U32(ctx, 31, 0x365F8Cu);
    ctx->pc = 0x365F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365F84u;
    // 0x365f88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365F84u, 0x365F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F8Cu;
label_365f8c:
    // 0x365f8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f90: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x365f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x365f94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x365f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f98: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365F98u;
    SET_GPR_U32(ctx, 31, 0x365FA0u);
    ctx->pc = 0x365F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365F98u;
    // 0x365f9c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365F98u, 0x365FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FA0u;
label_365fa0:
    // 0x365fa0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365FA0u;
    SET_GPR_U32(ctx, 31, 0x365FA8u);
    ctx->pc = 0x365FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FA0u;
    // 0x365fa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365FA0u, 0x365FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FA8u;
label_365fa8:
    // 0x365fa8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365fac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x365facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x365fb0: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x365fb0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x365fb4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365FB4u;
    SET_GPR_U32(ctx, 31, 0x365FBCu);
    ctx->pc = 0x365FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FB4u;
    // 0x365fb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365FB4u, 0x365FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FBCu;
label_365fbc:
    // 0x365fbc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365FBCu;
    SET_GPR_U32(ctx, 31, 0x365FC4u);
    ctx->pc = 0x365FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FBCu;
    // 0x365fc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365FBCu, 0x365FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FC4u;
label_365fc4:
    // 0x365fc4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365fc8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x365fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x365fcc: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x365fccu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x365fd0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365FD0u;
    SET_GPR_U32(ctx, 31, 0x365FD8u);
    ctx->pc = 0x365FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FD0u;
    // 0x365fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365FD0u, 0x365FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FD8u;
label_365fd8:
    // 0x365fd8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365FD8u;
    SET_GPR_U32(ctx, 31, 0x365FE0u);
    ctx->pc = 0x365FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FD8u;
    // 0x365fdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365FD8u, 0x365FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FE0u;
label_365fe0:
    // 0x365fe0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365fe4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x365fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x365fe8: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x365fe8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x365fec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365FECu;
    SET_GPR_U32(ctx, 31, 0x365FF4u);
    ctx->pc = 0x365FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FECu;
    // 0x365ff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365FECu, 0x365FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FF4u;
label_365ff4:
    // 0x365ff4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365FF4u;
    SET_GPR_U32(ctx, 31, 0x365FFCu);
    ctx->pc = 0x365FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FF4u;
    // 0x365ff8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365FF4u, 0x365FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FFCu;
label_365ffc:
    // 0x365ffc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366000: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x366000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x366004: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x366004u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x366008: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366008u;
    SET_GPR_U32(ctx, 31, 0x366010u);
    ctx->pc = 0x36600Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366008u;
    // 0x36600c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366008u, 0x366010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366010u;
label_366010:
    // 0x366010: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366010u;
    SET_GPR_U32(ctx, 31, 0x366018u);
    ctx->pc = 0x366014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366010u;
    // 0x366014: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366010u, 0x366018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366018u;
label_366018:
    // 0x366018: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36601c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x36601cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x366020: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366024: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366024u;
    SET_GPR_U32(ctx, 31, 0x36602Cu);
    ctx->pc = 0x366028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366024u;
    // 0x366028: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366024u, 0x36602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36602Cu;
label_36602c:
    // 0x36602c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36602Cu;
    SET_GPR_U32(ctx, 31, 0x366034u);
    ctx->pc = 0x366030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36602Cu;
    // 0x366030: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36602Cu, 0x366034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366034u;
label_366034:
    // 0x366034: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x366034u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x366038: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x366038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36603c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36603cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_366040:
    // 0x366040: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x366040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x366044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366048: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x366048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36604c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36604cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366050: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x366050u;
    SET_GPR_U32(ctx, 31, 0x366058u);
    ctx->pc = 0x366054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366050u;
    // 0x366054: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x366050u, 0x366058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366058u;
label_366058:
    // 0x366058: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366058u;
    SET_GPR_U32(ctx, 31, 0x366060u);
    ctx->pc = 0x36605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366058u;
    // 0x36605c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366058u, 0x366060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366060u;
label_366060:
    // 0x366060: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x366060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x366064: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x366064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x366068: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x366068u;
    {
        const bool branch_taken_0x366068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366068u;
        // 0x36606c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366068) {
            ctx->pc = 0x366040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366040;
        }
    }
    ctx->pc = 0x366070u;
    // 0x366070: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x366070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366074: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x366074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366078: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x366078u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x36607c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x36607cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x366080: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x366080u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x366084: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x366084u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x366088: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x366088u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x36608c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x36608cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x366090: 0xc046f86  jal         func_11BE18
    ctx->pc = 0x366090u;
    SET_GPR_U32(ctx, 31, 0x366098u);
    ctx->pc = 0x366094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366090u;
    // 0x366094: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BE18u, 0x366090u, 0x366098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366098u;
label_366098:
    // 0x366098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x366098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36609c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36609Cu;
    SET_GPR_U32(ctx, 31, 0x3660A4u);
    ctx->pc = 0x3660A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36609Cu;
    // 0x3660a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36609Cu, 0x3660A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660A4u;
label_3660a4:
    // 0x3660a4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3660A4u;
    {
        const bool branch_taken_0x3660a4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3660A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3660A4u;
        // 0x3660a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3660a4) {
            ctx->pc = 0x3660C0u;
            goto label_3660c0;
        }
    }
    ctx->pc = 0x3660ACu;
    // 0x3660ac: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3660acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3660b0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3660b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3660b4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3660B4u;
    SET_GPR_U32(ctx, 31, 0x3660BCu);
    ctx->pc = 0x3660B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3660B4u;
    // 0x3660b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3660B4u, 0x3660BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660BCu;
label_3660bc:
    // 0x3660bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3660bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3660c0:
    // 0x3660c0: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x3660C0u;
    SET_GPR_U32(ctx, 31, 0x3660C8u);
    ctx->pc = 0x3660C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3660C0u;
    // 0x3660c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x3660C0u, 0x3660C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660C8u;
label_3660c8:
    // 0x3660c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3660c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3660cc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3660ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3660d0:
    // 0x3660d0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x3660d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3660d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3660d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3660d8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3660D8u;
    SET_GPR_U32(ctx, 31, 0x3660E0u);
    ctx->pc = 0x3660DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3660D8u;
    // 0x3660dc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3660D8u, 0x3660E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660E0u;
label_3660e0:
    // 0x3660e0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3660e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3660e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3660e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3660e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3660e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3660ec: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3660ECu;
    SET_GPR_U32(ctx, 31, 0x3660F4u);
    ctx->pc = 0x3660F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3660ECu;
    // 0x3660f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3660ECu, 0x3660F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660F4u;
label_3660f4:
    // 0x3660f4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3660f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3660f8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3660F8u;
    {
        const bool branch_taken_0x3660f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3660FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3660F8u;
        // 0x3660fc: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3660f8) {
            ctx->pc = 0x3660D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3660d0;
        }
    }
    ctx->pc = 0x366100u;
    // 0x366100: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x366100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x366104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x366104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366108: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x366108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36610c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x36610cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x366110: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x366110u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x366114: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x366114u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x366118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36611c: 0xc7b90098  lwc1        $f25, 0x98($sp)
    ctx->pc = 0x36611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x366120: 0xc7b80090  lwc1        $f24, 0x90($sp)
    ctx->pc = 0x366120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x366124: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x366124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x366128: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x366128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36612c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x36612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x366130: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x366130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x366134: 0x3e00008  jr          $ra
    ctx->pc = 0x366134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366134u;
        // 0x366138: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36613Cu;
    // 0x36613c: 0x0  nop
    ctx->pc = 0x36613cu;
    // NOP
    ctx->pc = 0x366140u;
}
