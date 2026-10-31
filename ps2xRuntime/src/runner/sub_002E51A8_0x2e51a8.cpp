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

// Function: sub_002E51A8
// Address: 0x2e51a8 - 0x2e52a0
void sub_002E51A8_0x2e51a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E51A8_0x2e51a8");
#endif

    switch (ctx->pc) {
        case 0x2e51d4u: goto label_2e51d4;
        case 0x2e51e8u: goto label_2e51e8;
        case 0x2e51f0u: goto label_2e51f0;
        case 0x2e5220u: goto label_2e5220;
        case 0x2e522cu: goto label_2e522c;
        case 0x2e525cu: goto label_2e525c;
        case 0x2e5270u: goto label_2e5270;
        case 0x2e5288u: goto label_2e5288;
        default: break;
    }

    ctx->pc = 0x2e51a8u;

    // 0x2e51a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e51a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e51ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e51acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e51b0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2e51b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2e51b4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2e51b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2e51b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e51b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e51bc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2e51bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2e51c0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e51c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e51c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e51c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e51c8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2e51c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e51cc: 0xc0a22c6  jal         func_288B18
    ctx->pc = 0x2E51CCu;
    SET_GPR_U32(ctx, 31, 0x2E51D4u);
    ctx->pc = 0x2E51D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E51CCu;
    // 0x2e51d0: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2E51CCu, 0x2E51D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E51D4u;
label_2e51d4:
    // 0x2e51d4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2e51d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2e51d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e51d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e51dc: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x2e51dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2e51e0: 0xc0d50de  jal         func_354378
    ctx->pc = 0x2E51E0u;
    SET_GPR_U32(ctx, 31, 0x2E51E8u);
    ctx->pc = 0x2E51E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E51E0u;
    // 0x2e51e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354378u, 0x2E51E0u, 0x2E51E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E51E8u;
label_2e51e8:
    // 0x2e51e8: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2E51E8u;
    SET_GPR_U32(ctx, 31, 0x2E51F0u);
    ctx->pc = 0x2E51ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E51E8u;
    // 0x2e51ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E51E8u, 0x2E51F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E51F0u;
label_2e51f0:
    // 0x2e51f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e51f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e51f4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E51F4u;
    {
        const bool branch_taken_0x2e51f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E51F4u;
        // 0x2e51f8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e51f4) {
            ctx->pc = 0x2E5220u;
            goto label_2e5220;
        }
    }
    ctx->pc = 0x2E51FCu;
    // 0x2e51fc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e51fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e5200: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2e5200u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2e5204: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e5204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5208: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x2e5208u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2e520c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e520cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5210: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e5210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e5214: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2e5214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e5218: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2E5218u;
    SET_GPR_U32(ctx, 31, 0x2E5220u);
    ctx->pc = 0x2E521Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5218u;
    // 0x2e521c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2E5218u, 0x2E5220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5220u;
label_2e5220:
    // 0x2e5220: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e5220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e5224: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2E5224u;
    SET_GPR_U32(ctx, 31, 0x2E522Cu);
    ctx->pc = 0x2E5228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5224u;
    // 0x2e5228: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2E5224u, 0x2E522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E522Cu;
label_2e522c:
    // 0x2e522c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2e522cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5230: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2e5230u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5234: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e5234u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e5238: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2e5238u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2e523c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e523cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e5240: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e5240u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2e5244: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2e5244u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2e5248: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e5248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e524c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2e524cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2e5250: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2e5250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2e5254: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2E5254u;
    SET_GPR_U32(ctx, 31, 0x2E525Cu);
    ctx->pc = 0x2E5258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5254u;
    // 0x2e5258: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E5254u, 0x2E525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E525Cu;
label_2e525c:
    // 0x2e525c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e525cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5260: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5260u;
    {
        const bool branch_taken_0x2e5260 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5260u;
        // 0x2e5264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5260) {
            ctx->pc = 0x2E5288u;
            goto label_2e5288;
        }
    }
    ctx->pc = 0x2E5268u;
    // 0x2e5268: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2E5268u;
    SET_GPR_U32(ctx, 31, 0x2E5270u);
    ctx->pc = 0x2E526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5268u;
    // 0x2e526c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2E5268u, 0x2E5270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5270u;
label_2e5270:
    // 0x2e5270: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e5270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e5274: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e5274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5278: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e5278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e527c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e527cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e5280: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2E5280u;
    SET_GPR_U32(ctx, 31, 0x2E5288u);
    ctx->pc = 0x2E5284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5280u;
    // 0x2e5284: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2E5280u, 0x2E5288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5288u;
label_2e5288:
    // 0x2e5288: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2e5288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e528c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2e528cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e5290: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2e5290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5294: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e5294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e5298: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5298u;
        // 0x2e529c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E52A0u;
}
