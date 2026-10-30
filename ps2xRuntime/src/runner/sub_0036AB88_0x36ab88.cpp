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

// Function: sub_0036AB88
// Address: 0x36ab88 - 0x36ad50
void sub_0036AB88_0x36ab88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AB88_0x36ab88");
#endif

    switch (ctx->pc) {
        case 0x36abccu: goto label_36abcc;
        case 0x36abd4u: goto label_36abd4;
        case 0x36abe8u: goto label_36abe8;
        case 0x36abf0u: goto label_36abf0;
        case 0x36ac04u: goto label_36ac04;
        case 0x36ac0cu: goto label_36ac0c;
        case 0x36ac20u: goto label_36ac20;
        case 0x36ac28u: goto label_36ac28;
        case 0x36ac3cu: goto label_36ac3c;
        case 0x36ac44u: goto label_36ac44;
        case 0x36ac58u: goto label_36ac58;
        case 0x36ac60u: goto label_36ac60;
        case 0x36ac74u: goto label_36ac74;
        case 0x36ac7cu: goto label_36ac7c;
        case 0x36ac88u: goto label_36ac88;
        case 0x36aca0u: goto label_36aca0;
        case 0x36aca8u: goto label_36aca8;
        case 0x36acdcu: goto label_36acdc;
        case 0x36ace8u: goto label_36ace8;
        case 0x36acf8u: goto label_36acf8;
        case 0x36ad0cu: goto label_36ad0c;
        default: break;
    }

    ctx->pc = 0x36ab88u;

    // 0x36ab88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x36ab88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x36ab8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ab8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ab90: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x36ab90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x36ab94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36ab94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36ab98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36ab98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36ab9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aba0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x36aba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x36aba4: 0xe7ba0080  swc1        $f26, 0x80($sp)
    ctx->pc = 0x36aba4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x36aba8: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x36aba8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x36abac: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x36abacu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x36abb0: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x36abb0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x36abb4: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x36abb4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x36abb8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x36abb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x36abbc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x36abbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x36abc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36abc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36abc4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36ABC4u;
    SET_GPR_U32(ctx, 31, 0x36ABCCu);
    ctx->pc = 0x36ABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ABC4u;
    // 0x36abc8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36ABC4u, 0x36ABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ABCCu;
label_36abcc:
    // 0x36abcc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36ABCCu;
    SET_GPR_U32(ctx, 31, 0x36ABD4u);
    ctx->pc = 0x36ABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ABCCu;
    // 0x36abd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36ABCCu, 0x36ABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ABD4u;
label_36abd4:
    // 0x36abd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36abd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36abd8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36abdc: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x36abdcu;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    // 0x36abe0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36ABE0u;
    SET_GPR_U32(ctx, 31, 0x36ABE8u);
    ctx->pc = 0x36ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ABE0u;
    // 0x36abe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36ABE0u, 0x36ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ABE8u;
label_36abe8:
    // 0x36abe8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36ABE8u;
    SET_GPR_U32(ctx, 31, 0x36ABF0u);
    ctx->pc = 0x36ABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ABE8u;
    // 0x36abec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36ABE8u, 0x36ABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ABF0u;
label_36abf0:
    // 0x36abf0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36abf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36abf4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36abf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36abf8: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x36abf8u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x36abfc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36ABFCu;
    SET_GPR_U32(ctx, 31, 0x36AC04u);
    ctx->pc = 0x36AC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ABFCu;
    // 0x36ac00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36ABFCu, 0x36AC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AC04u;
label_36ac04:
    // 0x36ac04: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36AC04u;
    SET_GPR_U32(ctx, 31, 0x36AC0Cu);
    ctx->pc = 0x36AC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AC04u;
    // 0x36ac08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36AC04u, 0x36AC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AC0Cu;
label_36ac0c:
    // 0x36ac0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36ac0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ac10: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36ac10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36ac14: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x36ac14u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x36ac18: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AC18u;
    SET_GPR_U32(ctx, 31, 0x36AC20u);
    ctx->pc = 0x36AC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AC18u;
    // 0x36ac1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AC18u, 0x36AC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AC20u;
label_36ac20:
    // 0x36ac20: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36AC20u;
    SET_GPR_U32(ctx, 31, 0x36AC28u);
    ctx->pc = 0x36AC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AC20u;
    // 0x36ac24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36AC20u, 0x36AC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AC28u;
label_36ac28:
    // 0x36ac28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36ac28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ac2c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36ac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36ac30: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x36ac30u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x36ac34: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AC34u;
    SET_GPR_U32(ctx, 31, 0x36AC3Cu);
    ctx->pc = 0x36AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AC34u;
    // 0x36ac38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AC34u, 0x36AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AC3Cu;
label_36ac3c:
    // 0x36ac3c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36AC3Cu;
    SET_GPR_U32(ctx, 31, 0x36AC44u);
    ctx->pc = 0x36AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AC3Cu;
    // 0x36ac40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36AC3Cu, 0x36AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AC44u;
label_36ac44:
    // 0x36ac44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36ac44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ac48: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36ac48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36ac4c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x36ac4cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x36ac50: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AC50u;
    SET_GPR_U32(ctx, 31, 0x36AC58u);
    ctx->pc = 0x36AC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AC50u;
    // 0x36ac54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AC50u, 0x36AC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AC58u;
label_36ac58:
    // 0x36ac58: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36AC58u;
    SET_GPR_U32(ctx, 31, 0x36AC60u);
    ctx->pc = 0x36AC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AC58u;
    // 0x36ac5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36AC58u, 0x36AC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AC60u;
label_36ac60:
    // 0x36ac60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36ac60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ac64: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x36ac64u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x36ac68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36ac68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ac6c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AC6Cu;
    SET_GPR_U32(ctx, 31, 0x36AC74u);
    ctx->pc = 0x36AC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AC6Cu;
    // 0x36ac70: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AC6Cu, 0x36AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AC74u;
label_36ac74:
    // 0x36ac74: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36AC74u;
    SET_GPR_U32(ctx, 31, 0x36AC7Cu);
    ctx->pc = 0x36AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AC74u;
    // 0x36ac78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36AC74u, 0x36AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AC7Cu;
label_36ac7c:
    // 0x36ac7c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36ac7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36ac80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36ac80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ac84: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36ac84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36ac88:
    // 0x36ac88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ac88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36ac8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36ac8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ac90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36ac90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36ac94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36ac94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ac98: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36AC98u;
    SET_GPR_U32(ctx, 31, 0x36ACA0u);
    ctx->pc = 0x36AC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AC98u;
    // 0x36ac9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36AC98u, 0x36ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ACA0u;
label_36aca0:
    // 0x36aca0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36ACA0u;
    SET_GPR_U32(ctx, 31, 0x36ACA8u);
    ctx->pc = 0x36ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ACA0u;
    // 0x36aca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36ACA0u, 0x36ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ACA8u;
label_36aca8:
    // 0x36aca8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x36aca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36acac: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36acacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36acb0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36ACB0u;
    {
        const bool branch_taken_0x36acb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ACB0u;
        // 0x36acb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36acb0) {
            ctx->pc = 0x36AC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ac88;
        }
    }
    ctx->pc = 0x36ACB8u;
    // 0x36acb8: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x36acb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x36acbc: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x36acbcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x36acc0: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x36acc0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x36acc4: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x36acc4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x36acc8: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x36acc8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x36accc: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x36acccu;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
    // 0x36acd0: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x36acd0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x36acd4: 0xc04702e  jal         func_11C0B8
    ctx->pc = 0x36ACD4u;
    SET_GPR_U32(ctx, 31, 0x36ACDCu);
    ctx->pc = 0x36ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ACD4u;
    // 0x36acd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C0B8u, 0x36ACD4u, 0x36ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ACDCu;
label_36acdc:
    // 0x36acdc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36acdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ace0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36ace4: 0x0  nop
    ctx->pc = 0x36ace4u;
    // NOP
label_36ace8:
    // 0x36ace8: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x36ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x36acec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36acecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36acf0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x36ACF0u;
    SET_GPR_U32(ctx, 31, 0x36ACF8u);
    ctx->pc = 0x36ACF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ACF0u;
    // 0x36acf4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x36ACF0u, 0x36ACF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ACF8u;
label_36acf8:
    // 0x36acf8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36acf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36acfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36acfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ad00: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36ad00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36ad04: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36AD04u;
    SET_GPR_U32(ctx, 31, 0x36AD0Cu);
    ctx->pc = 0x36AD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AD04u;
    // 0x36ad08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36AD04u, 0x36AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AD0Cu;
label_36ad0c:
    // 0x36ad0c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36ad0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36ad10: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36AD10u;
    {
        const bool branch_taken_0x36ad10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD10u;
        // 0x36ad14: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ad10) {
            ctx->pc = 0x36ACE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ace8;
        }
    }
    ctx->pc = 0x36AD18u;
    // 0x36ad18: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x36ad18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36ad1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36ad1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ad20: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x36ad20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36ad24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36ad24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36ad28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36ad28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ad2c: 0xc7ba0080  lwc1        $f26, 0x80($sp)
    ctx->pc = 0x36ad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x36ad30: 0xc7b90078  lwc1        $f25, 0x78($sp)
    ctx->pc = 0x36ad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x36ad34: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x36ad34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x36ad38: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x36ad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x36ad3c: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x36ad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36ad40: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x36ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36ad44: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x36ad44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36ad48: 0x3e00008  jr          $ra
    ctx->pc = 0x36AD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD48u;
        // 0x36ad4c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AD50u;
}
