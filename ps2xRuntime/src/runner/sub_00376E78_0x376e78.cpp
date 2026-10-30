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

// Function: sub_00376E78
// Address: 0x376e78 - 0x3770a0
void sub_00376E78_0x376e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376E78_0x376e78");
#endif

    switch (ctx->pc) {
        case 0x376ec0u: goto label_376ec0;
        case 0x376ed0u: goto label_376ed0;
        case 0x376ee8u: goto label_376ee8;
        case 0x376ef0u: goto label_376ef0;
        case 0x376f04u: goto label_376f04;
        case 0x376f0cu: goto label_376f0c;
        case 0x376f24u: goto label_376f24;
        case 0x376f2cu: goto label_376f2c;
        case 0x376f44u: goto label_376f44;
        case 0x376f4cu: goto label_376f4c;
        case 0x376f6cu: goto label_376f6c;
        case 0x376f74u: goto label_376f74;
        case 0x376f8cu: goto label_376f8c;
        case 0x376f94u: goto label_376f94;
        case 0x376facu: goto label_376fac;
        case 0x376fb4u: goto label_376fb4;
        case 0x376fccu: goto label_376fcc;
        case 0x376fd4u: goto label_376fd4;
        case 0x376fecu: goto label_376fec;
        case 0x376ff4u: goto label_376ff4;
        case 0x377008u: goto label_377008;
        case 0x377020u: goto label_377020;
        case 0x377028u: goto label_377028;
        case 0x37705cu: goto label_37705c;
        default: break;
    }

    ctx->pc = 0x376e78u;

    // 0x376e78: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x376e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x376e7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x376e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376e80: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x376e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x376e84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x376e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376e88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x376e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376e8c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x376e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x376e90: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x376e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x376e94: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x376e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x376e98: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x376e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x376e9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x376e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x376ea0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x376ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x376ea4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x376ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x376ea8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x376ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x376eac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x376eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x376eb0: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x376eb0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x376eb4: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x376eb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x376eb8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376EB8u;
    SET_GPR_U32(ctx, 31, 0x376EC0u);
    ctx->pc = 0x376EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376EB8u;
    // 0x376ebc: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376EB8u, 0x376EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376EC0u;
label_376ec0:
    // 0x376ec0: 0x34128028  ori         $s2, $zero, 0x8028
    ctx->pc = 0x376ec0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x376ec4: 0x1293fc  dsll32      $s2, $s2, 15
    ctx->pc = 0x376ec4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 15));
    // 0x376ec8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x376EC8u;
    SET_GPR_U32(ctx, 31, 0x376ED0u);
    ctx->pc = 0x376ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376EC8u;
    // 0x376ecc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x376EC8u, 0x376ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376ED0u;
label_376ed0:
    // 0x376ed0: 0x34068030  ori         $a2, $zero, 0x8030
    ctx->pc = 0x376ed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x376ed4: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x376ed4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x376ed8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x376ed8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376edc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x376edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376ee0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376EE0u;
    SET_GPR_U32(ctx, 31, 0x376EE8u);
    ctx->pc = 0x376EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376EE0u;
    // 0x376ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376EE0u, 0x376EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376EE8u;
label_376ee8:
    // 0x376ee8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x376EE8u;
    SET_GPR_U32(ctx, 31, 0x376EF0u);
    ctx->pc = 0x376EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376EE8u;
    // 0x376eec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x376EE8u, 0x376EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376EF0u;
label_376ef0:
    // 0x376ef0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x376ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376ef4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x376ef4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376ef8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x376ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x376efc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376EFCu;
    SET_GPR_U32(ctx, 31, 0x376F04u);
    ctx->pc = 0x376F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376EFCu;
    // 0x376f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376EFCu, 0x376F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F04u;
label_376f04:
    // 0x376f04: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x376F04u;
    SET_GPR_U32(ctx, 31, 0x376F0Cu);
    ctx->pc = 0x376F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F04u;
    // 0x376f08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x376F04u, 0x376F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F0Cu;
label_376f0c:
    // 0x376f0c: 0x34068068  ori         $a2, $zero, 0x8068
    ctx->pc = 0x376f0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32872);
    // 0x376f10: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x376f10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x376f14: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x376f14u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x376f18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x376f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x376f1c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376F1Cu;
    SET_GPR_U32(ctx, 31, 0x376F24u);
    ctx->pc = 0x376F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F1Cu;
    // 0x376f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376F1Cu, 0x376F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F24u;
label_376f24:
    // 0x376f24: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x376F24u;
    SET_GPR_U32(ctx, 31, 0x376F2Cu);
    ctx->pc = 0x376F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F24u;
    // 0x376f28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x376F24u, 0x376F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F2Cu;
label_376f2c:
    // 0x376f2c: 0x34068048  ori         $a2, $zero, 0x8048
    ctx->pc = 0x376f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x376f30: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x376f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x376f34: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x376f34u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x376f38: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x376f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x376f3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376F3Cu;
    SET_GPR_U32(ctx, 31, 0x376F44u);
    ctx->pc = 0x376F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F3Cu;
    // 0x376f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376F3Cu, 0x376F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F44u;
label_376f44:
    // 0x376f44: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x376F44u;
    SET_GPR_U32(ctx, 31, 0x376F4Cu);
    ctx->pc = 0x376F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F44u;
    // 0x376f48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x376F44u, 0x376F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F4Cu;
label_376f4c:
    // 0x376f4c: 0x340680de  ori         $a2, $zero, 0x80DE
    ctx->pc = 0x376f4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32990);
    // 0x376f50: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x376f50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x376f54: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x376f54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x376f58: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x376f58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x376f5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x376f5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x376f60: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x376f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x376f64: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376F64u;
    SET_GPR_U32(ctx, 31, 0x376F6Cu);
    ctx->pc = 0x376F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F64u;
    // 0x376f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376F64u, 0x376F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F6Cu;
label_376f6c:
    // 0x376f6c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x376F6Cu;
    SET_GPR_U32(ctx, 31, 0x376F74u);
    ctx->pc = 0x376F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F6Cu;
    // 0x376f70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x376F6Cu, 0x376F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F74u;
label_376f74:
    // 0x376f74: 0x340680b2  ori         $a2, $zero, 0x80B2
    ctx->pc = 0x376f74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x376f78: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x376f78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x376f7c: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x376f7cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x376f80: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x376f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x376f84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376F84u;
    SET_GPR_U32(ctx, 31, 0x376F8Cu);
    ctx->pc = 0x376F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F84u;
    // 0x376f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376F84u, 0x376F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F8Cu;
label_376f8c:
    // 0x376f8c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x376F8Cu;
    SET_GPR_U32(ctx, 31, 0x376F94u);
    ctx->pc = 0x376F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F8Cu;
    // 0x376f90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x376F8Cu, 0x376F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F94u;
label_376f94:
    // 0x376f94: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x376f94u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x376f98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x376f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376f9c: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x376f9cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x376fa0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x376fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x376fa4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376FA4u;
    SET_GPR_U32(ctx, 31, 0x376FACu);
    ctx->pc = 0x376FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376FA4u;
    // 0x376fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376FA4u, 0x376FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376FACu;
label_376fac:
    // 0x376fac: 0xc10b108  jal         func_42C420
    ctx->pc = 0x376FACu;
    SET_GPR_U32(ctx, 31, 0x376FB4u);
    ctx->pc = 0x376FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376FACu;
    // 0x376fb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x376FACu, 0x376FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376FB4u;
label_376fb4:
    // 0x376fb4: 0x34068020  ori         $a2, $zero, 0x8020
    ctx->pc = 0x376fb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x376fb8: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x376fb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x376fbc: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x376fbcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x376fc0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x376fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x376fc4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376FC4u;
    SET_GPR_U32(ctx, 31, 0x376FCCu);
    ctx->pc = 0x376FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376FC4u;
    // 0x376fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376FC4u, 0x376FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376FCCu;
label_376fcc:
    // 0x376fcc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x376FCCu;
    SET_GPR_U32(ctx, 31, 0x376FD4u);
    ctx->pc = 0x376FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376FCCu;
    // 0x376fd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x376FCCu, 0x376FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376FD4u;
label_376fd4:
    // 0x376fd4: 0x34068010  ori         $a2, $zero, 0x8010
    ctx->pc = 0x376fd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x376fd8: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x376fd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x376fdc: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x376fdcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x376fe0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x376fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x376fe4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376FE4u;
    SET_GPR_U32(ctx, 31, 0x376FECu);
    ctx->pc = 0x376FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376FE4u;
    // 0x376fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376FE4u, 0x376FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376FECu;
label_376fec:
    // 0x376fec: 0xc10b108  jal         func_42C420
    ctx->pc = 0x376FECu;
    SET_GPR_U32(ctx, 31, 0x376FF4u);
    ctx->pc = 0x376FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376FECu;
    // 0x376ff0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x376FECu, 0x376FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376FF4u;
label_376ff4:
    // 0x376ff4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x376ff4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x376ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376ffc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x376ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x377000: 0xc102488  jal         func_409220
    ctx->pc = 0x377000u;
    SET_GPR_U32(ctx, 31, 0x377008u);
    ctx->pc = 0x377004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377000u;
    // 0x377004: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x377000u, 0x377008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377008u;
label_377008:
    // 0x377008: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x377008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x37700c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x37700cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x377010: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x377010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x377014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377018: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377018u;
    SET_GPR_U32(ctx, 31, 0x377020u);
    ctx->pc = 0x37701Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377018u;
    // 0x37701c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377018u, 0x377020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377020u;
label_377020:
    // 0x377020: 0xc10b108  jal         func_42C420
    ctx->pc = 0x377020u;
    SET_GPR_U32(ctx, 31, 0x377028u);
    ctx->pc = 0x377024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377020u;
    // 0x377024: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x377020u, 0x377028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377028u;
label_377028:
    // 0x377028: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x377028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x37702c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x37702cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377030: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x377030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377034: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x377034u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x377038: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x377038u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x37703c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x37703cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x377040: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x377040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377044: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x377044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377048: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x377048u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37704c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x37704cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377050: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x377050u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377054: 0xc0c2a1e  jal         func_30A878
    ctx->pc = 0x377054u;
    SET_GPR_U32(ctx, 31, 0x37705Cu);
    ctx->pc = 0x377058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377054u;
    // 0x377058: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A878u, 0x377054u, 0x37705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37705Cu;
label_37705c:
    // 0x37705c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x37705cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x377060: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x377060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377064: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x377064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x377068: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x377068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37706c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x37706cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x377070: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x377070u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x377074: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x377074u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377078: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x377078u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37707c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x37707cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377080: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x377080u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377084: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x377084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377088: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x377088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x37708c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x37708cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x377090: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x377090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x377094: 0x3e00008  jr          $ra
    ctx->pc = 0x377094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377094u;
        // 0x377098: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37709Cu;
    // 0x37709c: 0x0  nop
    ctx->pc = 0x37709cu;
    // NOP
    ctx->pc = 0x3770a0u;
}
