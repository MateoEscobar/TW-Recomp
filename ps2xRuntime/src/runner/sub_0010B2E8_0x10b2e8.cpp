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

// Function: sub_0010B2E8
// Address: 0x10b2e8 - 0x10b3f8
void sub_0010B2E8_0x10b2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B2E8_0x10b2e8");
#endif

    switch (ctx->pc) {
        case 0x10b318u: goto label_10b318;
        case 0x10b328u: goto label_10b328;
        case 0x10b364u: goto label_10b364;
        case 0x10b384u: goto label_10b384;
        case 0x10b3acu: goto label_10b3ac;
        case 0x10b3bcu: goto label_10b3bc;
        case 0x10b3c8u: goto label_10b3c8;
        case 0x10b3d4u: goto label_10b3d4;
        default: break;
    }

    ctx->pc = 0x10b2e8u;

    // 0x10b2e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10b2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10b2ec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10b2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10b2f0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x10b2f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x10b2f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10b2f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10b2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10b2fc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10b2fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x10b300: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10b300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10b304: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10b304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x10b308: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x10b308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b30c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b310: 0xc0420dc  jal         func_108370
    ctx->pc = 0x10B310u;
    SET_GPR_U32(ctx, 31, 0x10B318u);
    ctx->pc = 0x10B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B310u;
    // 0x10b314: 0xe7b50058  swc1        $f21, 0x58($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x10B310u, 0x10B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B318u;
label_10b318:
    // 0x10b318: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x10b318u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x10b31c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b320: 0xc042c72  jal         func_10B1C8
    ctx->pc = 0x10B320u;
    SET_GPR_U32(ctx, 31, 0x10B328u);
    ctx->pc = 0x10B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B320u;
    // 0x10b324: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B1C8u, 0x10B320u, 0x10B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B328u;
label_10b328:
    // 0x10b328: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x10b328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10b32c: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x10b32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
    // 0x10b330: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x10b330u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x10b334: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10b334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b338: 0x0  nop
    ctx->pc = 0x10b338u;
    // NOP
    // 0x10b33c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x10b33cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10b340: 0x0  nop
    ctx->pc = 0x10b340u;
    // NOP
    // 0x10b344: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10B344u;
    {
        const bool branch_taken_0x10b344 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10b344) {
            ctx->pc = 0x10B348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B344u;
            // 0x10b348: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B34Cu;
            goto label_10b34c;
        }
    }
    ctx->pc = 0x10B34Cu;
label_10b34c:
    // 0x10b34c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x10b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x10b350: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x10b350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x10b354: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x10b354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b358: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10b358u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10b35c: 0xc041128  jal         func_1044A0
    ctx->pc = 0x10B35Cu;
    SET_GPR_U32(ctx, 31, 0x10B364u);
    ctx->pc = 0x10B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B35Cu;
    // 0x10b360: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10B35Cu, 0x10B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B364u;
label_10b364:
    // 0x10b364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b368: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x10b368u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x10b36c: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x10b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x10b370: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10b370u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10b374: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10b374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10b378: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10b378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b37c: 0xc041128  jal         func_1044A0
    ctx->pc = 0x10B37Cu;
    SET_GPR_U32(ctx, 31, 0x10B384u);
    ctx->pc = 0x10B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B37Cu;
    // 0x10b380: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10B37Cu, 0x10B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B384u;
label_10b384:
    // 0x10b384: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10b384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10b388: 0x0  nop
    ctx->pc = 0x10b388u;
    // NOP
    // 0x10b38c: 0x4601a832  c.eq.s      $f21, $f1
    ctx->pc = 0x10b38cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10b390: 0x0  nop
    ctx->pc = 0x10b390u;
    // NOP
    // 0x10b394: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x10B394u;
    {
        const bool branch_taken_0x10b394 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10b394) {
            ctx->pc = 0x10B398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B394u;
            // 0x10b398: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B3D8u;
            goto label_10b3d8;
        }
    }
    ctx->pc = 0x10B39Cu;
    // 0x10b39c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x10b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x10b3a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3a4: 0xc04115c  jal         func_104570
    ctx->pc = 0x10B3A4u;
    SET_GPR_U32(ctx, 31, 0x10B3ACu);
    ctx->pc = 0x10B3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B3A4u;
    // 0x10b3a8: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x10B3A4u, 0x10B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B3ACu;
label_10b3ac:
    // 0x10b3ac: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x10b3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10b3b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3b4: 0xc04115c  jal         func_104570
    ctx->pc = 0x10B3B4u;
    SET_GPR_U32(ctx, 31, 0x10B3BCu);
    ctx->pc = 0x10B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B3B4u;
    // 0x10b3b8: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x10B3B4u, 0x10B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B3BCu;
label_10b3bc:
    // 0x10b3bc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x10b3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x10b3c0: 0xc041128  jal         func_1044A0
    ctx->pc = 0x10B3C0u;
    SET_GPR_U32(ctx, 31, 0x10B3C8u);
    ctx->pc = 0x10B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B3C0u;
    // 0x10b3c4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10B3C0u, 0x10B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B3C8u;
label_10b3c8:
    // 0x10b3c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10b3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10b3cc: 0xc041128  jal         func_1044A0
    ctx->pc = 0x10B3CCu;
    SET_GPR_U32(ctx, 31, 0x10B3D4u);
    ctx->pc = 0x10B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B3CCu;
    // 0x10b3d0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10B3CCu, 0x10B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B3D4u;
label_10b3d4:
    // 0x10b3d4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10b3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10b3d8:
    // 0x10b3d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10b3d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b3dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10b3dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b3e0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10b3e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b3e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b3e8: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x10b3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10b3ec: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x10b3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10b3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x10B3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3F0u;
        // 0x10b3f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B3F8u;
}
