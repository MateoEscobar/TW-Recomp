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

// Function: sub_00363E50
// Address: 0x363e50 - 0x363ff8
void sub_00363E50_0x363e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363E50_0x363e50");
#endif

    switch (ctx->pc) {
        case 0x363e90u: goto label_363e90;
        case 0x363ea0u: goto label_363ea0;
        case 0x363eb8u: goto label_363eb8;
        case 0x363ec0u: goto label_363ec0;
        case 0x363ed4u: goto label_363ed4;
        case 0x363edcu: goto label_363edc;
        case 0x363ef0u: goto label_363ef0;
        case 0x363ef8u: goto label_363ef8;
        case 0x363f10u: goto label_363f10;
        case 0x363f18u: goto label_363f18;
        case 0x363f38u: goto label_363f38;
        case 0x363f40u: goto label_363f40;
        case 0x363f58u: goto label_363f58;
        case 0x363f6cu: goto label_363f6c;
        case 0x363f80u: goto label_363f80;
        case 0x363f94u: goto label_363f94;
        case 0x363fc0u: goto label_363fc0;
        default: break;
    }

    ctx->pc = 0x363e50u;

    // 0x363e50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x363e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x363e54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x363e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363e58: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x363e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x363e5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x363e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363e60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363e64: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x363e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x363e68: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x363e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x363e6c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x363e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x363e70: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x363e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x363e74: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x363e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x363e78: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x363e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x363e7c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x363e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x363e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363e84: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x363e84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x363e88: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363E88u;
    SET_GPR_U32(ctx, 31, 0x363E90u);
    ctx->pc = 0x363E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363E88u;
    // 0x363e8c: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363E88u, 0x363E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363E90u;
label_363e90:
    // 0x363e90: 0x34118048  ori         $s1, $zero, 0x8048
    ctx->pc = 0x363e90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x363e94: 0x118bfc  dsll32      $s1, $s1, 15
    ctx->pc = 0x363e94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 15));
    // 0x363e98: 0xc10b108  jal         func_42C420
    ctx->pc = 0x363E98u;
    SET_GPR_U32(ctx, 31, 0x363EA0u);
    ctx->pc = 0x363E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363E98u;
    // 0x363e9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x363E98u, 0x363EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363EA0u;
label_363ea0:
    // 0x363ea0: 0x34068030  ori         $a2, $zero, 0x8030
    ctx->pc = 0x363ea0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x363ea4: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x363ea4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x363ea8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x363ea8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363eac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x363eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363eb0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363EB0u;
    SET_GPR_U32(ctx, 31, 0x363EB8u);
    ctx->pc = 0x363EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363EB0u;
    // 0x363eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363EB0u, 0x363EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363EB8u;
label_363eb8:
    // 0x363eb8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x363EB8u;
    SET_GPR_U32(ctx, 31, 0x363EC0u);
    ctx->pc = 0x363EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363EB8u;
    // 0x363ebc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x363EB8u, 0x363EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363EC0u;
label_363ec0:
    // 0x363ec0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x363ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363ec4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x363ec4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363ec8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x363ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363ecc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363ECCu;
    SET_GPR_U32(ctx, 31, 0x363ED4u);
    ctx->pc = 0x363ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363ECCu;
    // 0x363ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363ECCu, 0x363ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363ED4u;
label_363ed4:
    // 0x363ed4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x363ED4u;
    SET_GPR_U32(ctx, 31, 0x363EDCu);
    ctx->pc = 0x363ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363ED4u;
    // 0x363ed8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x363ED4u, 0x363EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363EDCu;
label_363edc:
    // 0x363edc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x363edcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x363ee0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x363ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363ee4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x363ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x363ee8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363EE8u;
    SET_GPR_U32(ctx, 31, 0x363EF0u);
    ctx->pc = 0x363EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363EE8u;
    // 0x363eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363EE8u, 0x363EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363EF0u;
label_363ef0:
    // 0x363ef0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x363EF0u;
    SET_GPR_U32(ctx, 31, 0x363EF8u);
    ctx->pc = 0x363EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363EF0u;
    // 0x363ef4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x363EF0u, 0x363EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363EF8u;
label_363ef8:
    // 0x363ef8: 0x340680b2  ori         $a2, $zero, 0x80B2
    ctx->pc = 0x363ef8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x363efc: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x363efcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x363f00: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x363f00u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x363f04: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x363f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x363f08: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363F08u;
    SET_GPR_U32(ctx, 31, 0x363F10u);
    ctx->pc = 0x363F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363F08u;
    // 0x363f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363F08u, 0x363F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363F10u;
label_363f10:
    // 0x363f10: 0xc10b108  jal         func_42C420
    ctx->pc = 0x363F10u;
    SET_GPR_U32(ctx, 31, 0x363F18u);
    ctx->pc = 0x363F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363F10u;
    // 0x363f14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x363F10u, 0x363F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363F18u;
label_363f18:
    // 0x363f18: 0x340680fe  ori         $a2, $zero, 0x80FE
    ctx->pc = 0x363f18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33022);
    // 0x363f1c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x363f1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x363f20: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x363f20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x363f24: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x363f24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x363f28: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x363f28u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x363f2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x363f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x363f30: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363F30u;
    SET_GPR_U32(ctx, 31, 0x363F38u);
    ctx->pc = 0x363F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363F30u;
    // 0x363f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363F30u, 0x363F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363F38u;
label_363f38:
    // 0x363f38: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x363F38u;
    SET_GPR_U32(ctx, 31, 0x363F40u);
    ctx->pc = 0x363F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363F38u;
    // 0x363f3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x363F38u, 0x363F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363F40u;
label_363f40:
    // 0x363f40: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x363f40u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x363f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363f48: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x363f48u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x363f4c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x363f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x363f50: 0xc102488  jal         func_409220
    ctx->pc = 0x363F50u;
    SET_GPR_U32(ctx, 31, 0x363F58u);
    ctx->pc = 0x363F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363F50u;
    // 0x363f54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x363F50u, 0x363F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363F58u;
label_363f58:
    // 0x363f58: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x363f58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363f60: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x363f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x363f64: 0xc102488  jal         func_409220
    ctx->pc = 0x363F64u;
    SET_GPR_U32(ctx, 31, 0x363F6Cu);
    ctx->pc = 0x363F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363F64u;
    // 0x363f68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x363F64u, 0x363F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363F6Cu;
label_363f6c:
    // 0x363f6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x363f6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363f74: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x363f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x363f78: 0xc102488  jal         func_409220
    ctx->pc = 0x363F78u;
    SET_GPR_U32(ctx, 31, 0x363F80u);
    ctx->pc = 0x363F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363F78u;
    // 0x363f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x363F78u, 0x363F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363F80u;
label_363f80:
    // 0x363f80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x363f80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363f88: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x363f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x363f8c: 0xc102488  jal         func_409220
    ctx->pc = 0x363F8Cu;
    SET_GPR_U32(ctx, 31, 0x363F94u);
    ctx->pc = 0x363F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363F8Cu;
    // 0x363f90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x363F8Cu, 0x363F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363F94u;
label_363f94:
    // 0x363f94: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x363f94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363f98: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x363f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363f9c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x363f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363fa0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x363fa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x363fa4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x363fa4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x363fa8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x363fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363fac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x363facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363fb0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x363fb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363fb4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x363fb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363fb8: 0xc0bcc46  jal         func_2F3118
    ctx->pc = 0x363FB8u;
    SET_GPR_U32(ctx, 31, 0x363FC0u);
    ctx->pc = 0x363FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363FB8u;
    // 0x363fbc: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3118u, 0x363FB8u, 0x363FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363FC0u;
label_363fc0:
    // 0x363fc0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x363fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x363fc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x363fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363fc8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x363fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x363fcc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x363fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x363fd0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x363fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x363fd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x363fd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x363fd8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x363fd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x363fdc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x363fdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363fe0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x363fe0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363fe8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x363fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x363fec: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x363fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x363ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x363FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363FF0u;
        // 0x363ff4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363FF8u;
}
