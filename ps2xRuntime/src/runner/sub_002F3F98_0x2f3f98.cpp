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

// Function: sub_002F3F98
// Address: 0x2f3f98 - 0x2f42c0
void sub_002F3F98_0x2f3f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3F98_0x2f3f98");
#endif

    switch (ctx->pc) {
        case 0x2f4058u: goto label_2f4058;
        case 0x2f4074u: goto label_2f4074;
        case 0x2f40f4u: goto label_2f40f4;
        case 0x2f4100u: goto label_2f4100;
        case 0x2f419cu: goto label_2f419c;
        case 0x2f41a8u: goto label_2f41a8;
        default: break;
    }

    ctx->pc = 0x2f3f98u;

    // 0x2f3f98: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2f3f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2f3f9c: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2f3f9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f3fa0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2f3fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2f3fa4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2f3fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2f3fa8: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x2f3fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x2f3fac: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2f3facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2f3fb0: 0x2610b880  addiu       $s0, $s0, -0x4780
    ctx->pc = 0x2f3fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948992));
    // 0x2f3fb4: 0xe7b900d8  swc1        $f25, 0xD8($sp)
    ctx->pc = 0x2f3fb4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2f3fb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f3fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3fbc: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x2f3fbcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2f3fc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f3fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3fc4: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x2f3fc4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2f3fc8: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x2f3fc8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x2f3fcc: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x2f3fccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2f3fd0: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x2f3fd0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x2f3fd4: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2f3fd4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2f3fd8: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2f3fd8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2f3fdc: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2f3fdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2f3fe0: 0x46007e46  mov.s       $f25, $f15
    ctx->pc = 0x2f3fe0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[15]);
    // 0x2f3fe4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f3fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f3fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f3fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3fec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f3fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f3ff0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f3ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f3ff4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2f3ff4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f3ff8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f3ff8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f3ffc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f3ffcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f4000: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f4000u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f4004: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f4004u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f4008: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2f4008u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2f400c: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x2f400cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2f4010: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f4010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2f4014: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f4014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2f4018: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f4018u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f401c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2f401cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f4020: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f4020u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f4024: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f4024u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f4028: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f4028u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2f402c: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f402cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2f4030: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2f4030u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f4034: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2f4034u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f4038: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2f4038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2f403c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2f403cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2f4040: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2f4040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2f4044: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2f4044u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2f4048: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2f4048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2f404c: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x2f404cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x2f4050: 0xc0cd508  jal         func_335420
    ctx->pc = 0x2F4050u;
    SET_GPR_U32(ctx, 31, 0x2F4058u);
    ctx->pc = 0x2F4054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4050u;
    // 0x2f4054: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2F4050u, 0x2F4058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4058u;
label_2f4058:
    // 0x2f4058: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x2f4058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f405c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2f405cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2f4060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4064: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2f4064u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2f4068: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f4068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f406c: 0xc0cd508  jal         func_335420
    ctx->pc = 0x2F406Cu;
    SET_GPR_U32(ctx, 31, 0x2F4074u);
    ctx->pc = 0x2F4070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F406Cu;
    // 0x2f4070: 0x46160502  mul.s       $f20, $f0, $f22 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2F406Cu, 0x2F4074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4074u;
label_2f4074:
    // 0x2f4074: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x2f4074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f4078: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2f4078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f407c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f407cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f4080: 0x46181034  c.lt.s      $f2, $f24
    ctx->pc = 0x2f4080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f4084: 0x0  nop
    ctx->pc = 0x2f4084u;
    // NOP
    // 0x2f4088: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2F4088u;
    {
        const bool branch_taken_0x2f4088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4088u;
        // 0x2f408c: 0x461705c2  mul.s       $f23, $f0, $f23 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4088) {
            ctx->pc = 0x2F40A4u;
            goto label_2f40a4;
        }
    }
    ctx->pc = 0x2F4090u;
    // 0x2f4090: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x2f4090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f4094: 0x0  nop
    ctx->pc = 0x2f4094u;
    // NOP
    // 0x2f4098: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F4098u;
    {
        const bool branch_taken_0x2f4098 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f4098) {
            ctx->pc = 0x2F409Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4098u;
            // 0x2f409c: 0x4600c607  neg.s       $f24, $f24 (Delay Slot)
            ctx->f[24] = FPU_NEG_S(ctx->f[24]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F40A0u;
            goto label_2f40a0;
        }
    }
    ctx->pc = 0x2F40A0u;
label_2f40a0:
    // 0x2f40a0: 0x4618a500  add.s       $f20, $f20, $f24
    ctx->pc = 0x2f40a0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
label_2f40a4:
    // 0x2f40a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f40a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f40a8: 0x0  nop
    ctx->pc = 0x2f40a8u;
    // NOP
    // 0x2f40ac: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x2f40acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f40b0: 0x0  nop
    ctx->pc = 0x2f40b0u;
    // NOP
    // 0x2f40b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2F40B4u;
    {
        const bool branch_taken_0x2f40b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f40b4) {
            ctx->pc = 0x2F40D0u;
            goto label_2f40d0;
        }
    }
    ctx->pc = 0x2F40BCu;
    // 0x2f40bc: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x2f40bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f40c0: 0x0  nop
    ctx->pc = 0x2f40c0u;
    // NOP
    // 0x2f40c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F40C4u;
    {
        const bool branch_taken_0x2f40c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f40c4) {
            ctx->pc = 0x2F40C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F40C4u;
            // 0x2f40c8: 0x4600ce47  neg.s       $f25, $f25 (Delay Slot)
            ctx->f[25] = FPU_NEG_S(ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F40CCu;
            goto label_2f40cc;
        }
    }
    ctx->pc = 0x2F40CCu;
label_2f40cc:
    // 0x2f40cc: 0x4619bdc0  add.s       $f23, $f23, $f25
    ctx->pc = 0x2f40ccu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
label_2f40d0:
    // 0x2f40d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f40d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2f40d4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2f40d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2f40d8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2f40d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2f40dc: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x2f40dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
    // 0x2f40e0: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x2f40e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x2f40e4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2f40e4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511740u));
    // 0x2f40e8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f40e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2f40ec: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x2F40ECu;
    SET_GPR_U32(ctx, 31, 0x2F40F4u);
    ctx->pc = 0x2F40F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F40ECu;
    // 0x2f40f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2F40ECu, 0x2F40F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F40F4u;
label_2f40f4:
    // 0x2f40f4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2f40f4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2f40f8: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x2F40F8u;
    SET_GPR_U32(ctx, 31, 0x2F4100u);
    ctx->pc = 0x2F40FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F40F8u;
    // 0x2f40fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2F40F8u, 0x2F4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4100u;
label_2f4100:
    // 0x2f4100: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2f4100u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f4104: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x2f4104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f4108: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f4108u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f410c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f410cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f4110: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f4110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f4114: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2f4114u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f4118: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2f4118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2f411c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f411cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2f4120: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2f4120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2f4124: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2f4124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4128: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2f4128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f412c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2f412cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f4130: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2f4130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2f4134: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2f4134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2f4138: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2f4138u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2f413c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2f413cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4140: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2f4140u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4144: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f4144u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f4148: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f4148u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f414c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2f414cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f4150: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2f4150u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2f4154: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2f4154u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f4158: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2f4158u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f415c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2f415cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2f4160: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2f4160u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f4164: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2f4164u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f4168: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f4168u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f416c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2f416cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f4170: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2f4170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2f4174: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2f4174u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2f4178: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2f4178u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f417c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2f417cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2f4180: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2f4180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2f4184: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x2f4184u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2f4188: 0x4616bd82  mul.s       $f22, $f23, $f22
    ctx->pc = 0x2f4188u;
    ctx->f[22] = FPU_MUL_S(ctx->f[23], ctx->f[22]);
    // 0x2f418c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f418cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2f4190: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2f4190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2f4194: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x2F4194u;
    SET_GPR_U32(ctx, 31, 0x2F419Cu);
    ctx->pc = 0x2F4198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4194u;
    // 0x2f4198: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2F4194u, 0x2F419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F419Cu;
label_2f419c:
    // 0x2f419c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f419cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2f41a0: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x2F41A0u;
    SET_GPR_U32(ctx, 31, 0x2F41A8u);
    ctx->pc = 0x2F41A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F41A0u;
    // 0x2f41a4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2F41A0u, 0x2F41A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F41A8u;
label_2f41a8:
    // 0x2f41a8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2f41a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f41ac: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2f41acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f41b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f41b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f41b4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f41b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f41b8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f41b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f41bc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2f41bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f41c0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2f41c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2f41c4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f41c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2f41c8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2f41c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2f41cc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2f41ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f41d0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2f41d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f41d4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2f41d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f41d8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2f41d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2f41dc: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2f41dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2f41e0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2f41e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2f41e4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2f41e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f41e8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2f41e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f41ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f41ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f41f0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f41f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f41f4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2f41f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f41f8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2f41f8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2f41fc: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2f41fcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f4200: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2f4200u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f4204: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2f4204u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2f4208: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2f4208u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f420c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2f420cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f4210: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f4210u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f4214: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2f4214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f4218: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2f4218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2f421c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2f421cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2f4220: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2f4220u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f4224: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2f4224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2f4228: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2f4228u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2f422c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x2f422cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2f4230: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f4230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2f4234: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2f4234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2f4238: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2f4238u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f423c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f423cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f4240: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f4240u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f4244: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2f4244u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f4248: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2f4248u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2f424c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2f424cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f4250: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2f4250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f4254: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2f4254u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2f4258: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2f4258u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f425c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2f425cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f4260: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f4260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f4264: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2f4264u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f4268: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2f4268u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2f426c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2f426cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2f4270: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2f4270u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f4274: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2f4274u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2f4278: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2f4278u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2f427c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x2f427cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2f4280: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x2f4280u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    // 0x2f4284: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2f4284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4288: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2f4288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f428c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2f428cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f4290: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2f4290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f4294: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f4294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f4298: 0xc7b900d8  lwc1        $f25, 0xD8($sp)
    ctx->pc = 0x2f4298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2f429c: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x2f429cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2f42a0: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x2f42a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2f42a4: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x2f42a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2f42a8: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2f42a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f42ac: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2f42acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f42b0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2f42b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2f42b4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2f42b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2f42b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F42B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F42BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42B8u;
        // 0x2f42bc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F42B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F42C0u;
}
