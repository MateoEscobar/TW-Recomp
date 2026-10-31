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

// Function: sub_00365D38
// Address: 0x365d38 - 0x365f28
void sub_00365D38_0x365d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365D38_0x365d38");
#endif

    switch (ctx->pc) {
        case 0x365d7cu: goto label_365d7c;
        case 0x365d90u: goto label_365d90;
        case 0x365d98u: goto label_365d98;
        case 0x365dacu: goto label_365dac;
        case 0x365db4u: goto label_365db4;
        case 0x365dc8u: goto label_365dc8;
        case 0x365dd0u: goto label_365dd0;
        case 0x365de4u: goto label_365de4;
        case 0x365decu: goto label_365dec;
        case 0x365e00u: goto label_365e00;
        case 0x365e08u: goto label_365e08;
        case 0x365e1cu: goto label_365e1c;
        case 0x365e24u: goto label_365e24;
        case 0x365e30u: goto label_365e30;
        case 0x365e48u: goto label_365e48;
        case 0x365e50u: goto label_365e50;
        case 0x365e84u: goto label_365e84;
        case 0x365e90u: goto label_365e90;
        case 0x365ea8u: goto label_365ea8;
        case 0x365eb4u: goto label_365eb4;
        case 0x365ec0u: goto label_365ec0;
        case 0x365ed0u: goto label_365ed0;
        case 0x365ee4u: goto label_365ee4;
        default: break;
    }

    ctx->pc = 0x365d38u;

    // 0x365d38: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x365d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x365d3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365d40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x365d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x365d44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x365d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365d48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x365d48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365d4c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x365d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x365d50: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x365d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x365d54: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x365d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x365d58: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x365d58u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x365d5c: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x365d5cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x365d60: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x365d60u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x365d64: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x365d64u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x365d68: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x365d68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x365d6c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x365d6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x365d70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x365d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x365d74: 0xc102488  jal         func_409220
    ctx->pc = 0x365D74u;
    SET_GPR_U32(ctx, 31, 0x365D7Cu);
    ctx->pc = 0x365D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D74u;
    // 0x365d78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x365D74u, 0x365D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D7Cu;
label_365d7c:
    // 0x365d7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365d80: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x365d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x365d84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x365d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365d88: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365D88u;
    SET_GPR_U32(ctx, 31, 0x365D90u);
    ctx->pc = 0x365D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D88u;
    // 0x365d8c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365D88u, 0x365D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D90u;
label_365d90:
    // 0x365d90: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365D90u;
    SET_GPR_U32(ctx, 31, 0x365D98u);
    ctx->pc = 0x365D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D90u;
    // 0x365d94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365D90u, 0x365D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D98u;
label_365d98:
    // 0x365d98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365d9c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x365d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x365da0: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x365da0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x365da4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365DA4u;
    SET_GPR_U32(ctx, 31, 0x365DACu);
    ctx->pc = 0x365DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365DA4u;
    // 0x365da8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365DA4u, 0x365DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365DACu;
label_365dac:
    // 0x365dac: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365DACu;
    SET_GPR_U32(ctx, 31, 0x365DB4u);
    ctx->pc = 0x365DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365DACu;
    // 0x365db0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365DACu, 0x365DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365DB4u;
label_365db4:
    // 0x365db4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365db8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x365db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x365dbc: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x365dbcu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x365dc0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365DC0u;
    SET_GPR_U32(ctx, 31, 0x365DC8u);
    ctx->pc = 0x365DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365DC0u;
    // 0x365dc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365DC0u, 0x365DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365DC8u;
label_365dc8:
    // 0x365dc8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365DC8u;
    SET_GPR_U32(ctx, 31, 0x365DD0u);
    ctx->pc = 0x365DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365DC8u;
    // 0x365dcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365DC8u, 0x365DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365DD0u;
label_365dd0:
    // 0x365dd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365dd4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x365dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x365dd8: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x365dd8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x365ddc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365DDCu;
    SET_GPR_U32(ctx, 31, 0x365DE4u);
    ctx->pc = 0x365DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365DDCu;
    // 0x365de0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365DDCu, 0x365DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365DE4u;
label_365de4:
    // 0x365de4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365DE4u;
    SET_GPR_U32(ctx, 31, 0x365DECu);
    ctx->pc = 0x365DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365DE4u;
    // 0x365de8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365DE4u, 0x365DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365DECu;
label_365dec:
    // 0x365dec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365df0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x365df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x365df4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x365df4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x365df8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365DF8u;
    SET_GPR_U32(ctx, 31, 0x365E00u);
    ctx->pc = 0x365DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365DF8u;
    // 0x365dfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365DF8u, 0x365E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E00u;
label_365e00:
    // 0x365e00: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365E00u;
    SET_GPR_U32(ctx, 31, 0x365E08u);
    ctx->pc = 0x365E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E00u;
    // 0x365e04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365E00u, 0x365E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E08u;
label_365e08:
    // 0x365e08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e0c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x365e0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x365e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x365e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e14: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365E14u;
    SET_GPR_U32(ctx, 31, 0x365E1Cu);
    ctx->pc = 0x365E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E14u;
    // 0x365e18: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365E14u, 0x365E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E1Cu;
label_365e1c:
    // 0x365e1c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365E1Cu;
    SET_GPR_U32(ctx, 31, 0x365E24u);
    ctx->pc = 0x365E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E1Cu;
    // 0x365e20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365E1Cu, 0x365E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E24u;
label_365e24:
    // 0x365e24: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x365e24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x365e28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x365e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e2c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x365e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_365e30:
    // 0x365e30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x365e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x365e34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x365e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x365e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365e3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e40: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x365E40u;
    SET_GPR_U32(ctx, 31, 0x365E48u);
    ctx->pc = 0x365E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E40u;
    // 0x365e44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x365E40u, 0x365E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E48u;
label_365e48:
    // 0x365e48: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365E48u;
    SET_GPR_U32(ctx, 31, 0x365E50u);
    ctx->pc = 0x365E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E48u;
    // 0x365e4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365E48u, 0x365E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E50u;
label_365e50:
    // 0x365e50: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x365e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x365e54: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x365e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x365e58: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x365E58u;
    {
        const bool branch_taken_0x365e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x365E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365E58u;
        // 0x365e5c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365e58) {
            ctx->pc = 0x365E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365e30;
        }
    }
    ctx->pc = 0x365E60u;
    // 0x365e60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x365e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e64: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x365e64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x365e68: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x365e68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x365e6c: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x365e6cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x365e70: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x365e70u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x365e74: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x365e74u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x365e78: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x365e78u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x365e7c: 0xc046f12  jal         func_11BC48
    ctx->pc = 0x365E7Cu;
    SET_GPR_U32(ctx, 31, 0x365E84u);
    ctx->pc = 0x365E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E7Cu;
    // 0x365e80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BC48u, 0x365E7Cu, 0x365E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E84u;
label_365e84:
    // 0x365e84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x365e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e88: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x365E88u;
    SET_GPR_U32(ctx, 31, 0x365E90u);
    ctx->pc = 0x365E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E88u;
    // 0x365e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x365E88u, 0x365E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E90u;
label_365e90:
    // 0x365e90: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x365E90u;
    {
        const bool branch_taken_0x365e90 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x365E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365E90u;
        // 0x365e94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365e90) {
            ctx->pc = 0x365EACu;
            goto label_365eac;
        }
    }
    ctx->pc = 0x365E98u;
    // 0x365e98: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x365e98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x365e9c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x365e9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x365ea0: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x365EA0u;
    SET_GPR_U32(ctx, 31, 0x365EA8u);
    ctx->pc = 0x365EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365EA0u;
    // 0x365ea4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x365EA0u, 0x365EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365EA8u;
label_365ea8:
    // 0x365ea8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x365ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_365eac:
    // 0x365eac: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x365EACu;
    SET_GPR_U32(ctx, 31, 0x365EB4u);
    ctx->pc = 0x365EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365EACu;
    // 0x365eb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x365EACu, 0x365EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365EB4u;
label_365eb4:
    // 0x365eb4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x365eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365eb8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x365eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x365ebc: 0x0  nop
    ctx->pc = 0x365ebcu;
    // NOP
label_365ec0:
    // 0x365ec0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x365ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x365ec4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x365ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x365ec8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x365EC8u;
    SET_GPR_U32(ctx, 31, 0x365ED0u);
    ctx->pc = 0x365ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365EC8u;
    // 0x365ecc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x365EC8u, 0x365ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365ED0u;
label_365ed0:
    // 0x365ed0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x365ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365ed4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x365ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365ed8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x365ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365edc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x365EDCu;
    SET_GPR_U32(ctx, 31, 0x365EE4u);
    ctx->pc = 0x365EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365EDCu;
    // 0x365ee0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x365EDCu, 0x365EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365EE4u;
label_365ee4:
    // 0x365ee4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x365ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x365ee8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x365EE8u;
    {
        const bool branch_taken_0x365ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x365EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365EE8u;
        // 0x365eec: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365ee8) {
            ctx->pc = 0x365EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365ec0;
        }
    }
    ctx->pc = 0x365EF0u;
    // 0x365ef0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x365ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x365ef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x365ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365ef8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x365ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x365efc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x365efcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x365f00: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x365f00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365f04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x365f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365f08: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x365f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x365f0c: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x365f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x365f10: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x365f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x365f14: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x365f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x365f18: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x365f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x365f1c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x365f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x365f20: 0x3e00008  jr          $ra
    ctx->pc = 0x365F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365F20u;
        // 0x365f24: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365F28u;
}
