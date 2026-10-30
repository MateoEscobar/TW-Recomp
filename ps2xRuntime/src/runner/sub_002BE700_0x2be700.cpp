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

// Function: sub_002BE700
// Address: 0x2be700 - 0x2be818
void sub_002BE700_0x2be700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE700_0x2be700");
#endif

    switch (ctx->pc) {
        case 0x2be758u: goto label_2be758;
        case 0x2be778u: goto label_2be778;
        case 0x2be784u: goto label_2be784;
        case 0x2be790u: goto label_2be790;
        case 0x2be7b8u: goto label_2be7b8;
        case 0x2be7d4u: goto label_2be7d4;
        case 0x2be7ecu: goto label_2be7ec;
        default: break;
    }

    ctx->pc = 0x2be700u;

    // 0x2be700: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2be700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2be704: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2be704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2be708: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2be708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2be70c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2be70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2be710: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2be710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2be714: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2be714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be718: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2be718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2be71c: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x2be71cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2be720: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2be720u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2be724: 0x24b40090  addiu       $s4, $a1, 0x90
    ctx->pc = 0x2be724u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x2be728: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2be728u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2be72c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2be72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2be730: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2be730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2be734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be738: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2be738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2be73c: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x2be73cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2be740: 0x26b00090  addiu       $s0, $s5, 0x90
    ctx->pc = 0x2be740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x2be744: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2be744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2be748: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2be748u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2be74c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2be74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2be750: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2BE750u;
    SET_GPR_U32(ctx, 31, 0x2BE758u);
    ctx->pc = 0x2BE754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE750u;
    // 0x2be754: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2BE750u, 0x2BE758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE758u;
label_2be758:
    // 0x2be758: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2be758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2be75c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2be75cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2be760: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x2be760u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2be764: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2be764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2be768: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2be768u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2be76c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2be76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2be770: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x2BE770u;
    SET_GPR_U32(ctx, 31, 0x2BE778u);
    ctx->pc = 0x2BE774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE770u;
    // 0x2be774: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2BE770u, 0x2BE778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE778u;
label_2be778:
    // 0x2be778: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2be778u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2be77c: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2BE77Cu;
    SET_GPR_U32(ctx, 31, 0x2BE784u);
    ctx->pc = 0x2BE780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE77Cu;
    // 0x2be780: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2BE77Cu, 0x2BE784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE784u;
label_2be784:
    // 0x2be784: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2be784u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2be788: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x2BE788u;
    SET_GPR_U32(ctx, 31, 0x2BE790u);
    ctx->pc = 0x2BE78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE788u;
    // 0x2be78c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2BE788u, 0x2BE790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE790u;
label_2be790:
    // 0x2be790: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2be790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2be794: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2be794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2be798: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2be798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be79c: 0x0  nop
    ctx->pc = 0x2be79cu;
    // NOP
    // 0x2be7a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2be7a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be7a4: 0x0  nop
    ctx->pc = 0x2be7a4u;
    // NOP
    // 0x2be7a8: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x2BE7A8u;
    {
        const bool branch_taken_0x2be7a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2be7a8) {
            ctx->pc = 0x2BE7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE7A8u;
            // 0x2be7ac: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE7F0u;
            goto label_2be7f0;
        }
    }
    ctx->pc = 0x2BE7B0u;
    // 0x2be7b0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2BE7B0u;
    SET_GPR_U32(ctx, 31, 0x2BE7B8u);
    ctx->pc = 0x2BE7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE7B0u;
    // 0x2be7b4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BE7B0u, 0x2BE7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE7B8u;
label_2be7b8:
    // 0x2be7b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2be7b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be7bc: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2BE7BCu;
    {
        const bool branch_taken_0x2be7bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7BCu;
        // 0x2be7c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be7bc) {
            ctx->pc = 0x2BE7ECu;
            goto label_2be7ec;
        }
    }
    ctx->pc = 0x2BE7C4u;
    // 0x2be7c4: 0x86900002  lh          $s0, 0x2($s4)
    ctx->pc = 0x2be7c4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2be7c8: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2be7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2be7cc: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2BE7CCu;
    SET_GPR_U32(ctx, 31, 0x2BE7D4u);
    ctx->pc = 0x2BE7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE7CCu;
    // 0x2be7d0: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2BE7CCu, 0x2BE7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE7D4u;
label_2be7d4:
    // 0x2be7d4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2be7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2be7d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be7dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2be7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be7e0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2be7e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2be7e4: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2BE7E4u;
    SET_GPR_U32(ctx, 31, 0x2BE7ECu);
    ctx->pc = 0x2BE7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE7E4u;
    // 0x2be7e8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2BE7E4u, 0x2BE7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE7ECu;
label_2be7ec:
    // 0x2be7ec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2be7ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2be7f0:
    // 0x2be7f0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2be7f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2be7f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2be7f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2be7f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2be7f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be7fc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2be7fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be800: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2be800u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be808: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2be808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2be80c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2be80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2be810: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE810u;
        // 0x2be814: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE818u;
}
