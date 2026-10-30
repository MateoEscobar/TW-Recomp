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

// Function: sub_00191798
// Address: 0x191798 - 0x191908
void sub_00191798_0x191798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191798_0x191798");
#endif

    switch (ctx->pc) {
        case 0x1917b8u: goto label_1917b8;
        case 0x191854u: goto label_191854;
        case 0x1918b8u: goto label_1918b8;
        default: break;
    }

    ctx->pc = 0x191798u;

    // 0x191798: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x191798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19179c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19179cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1917a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1917a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917a4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1917a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1917a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1917a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917ac: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1917acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1917b0: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x1917B0u;
    SET_GPR_U32(ctx, 31, 0x1917B8u);
    ctx->pc = 0x1917B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917B0u;
    // 0x1917b4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1917B0u, 0x1917B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917B8u;
label_1917b8:
    // 0x1917b8: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x1917b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1917bc: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1917bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1917c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1917c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1917c4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1917c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1917c8: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1917c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1917cc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1917ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1917d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1917d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1917d4: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x1917d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1917d8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x1917d8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1917dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1917dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1917e0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1917e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1917e4: 0x0  nop
    ctx->pc = 0x1917e4u;
    // NOP
    // 0x1917e8: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x1917e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1917ec: 0x0  nop
    ctx->pc = 0x1917ecu;
    // NOP
    // 0x1917f0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1917F0u;
    {
        const bool branch_taken_0x1917f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1917f0) {
            ctx->pc = 0x191818u;
            goto label_191818;
        }
    }
    ctx->pc = 0x1917F8u;
    // 0x1917f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1917f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1917fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1917fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191800: 0x0  nop
    ctx->pc = 0x191800u;
    // NOP
    // 0x191804: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x191804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x191808: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x191808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x19180c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x19180cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x191810: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x191810u;
    {
        const bool branch_taken_0x191810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191810u;
        // 0x191814: 0xe4610004  swc1        $f1, 0x4($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x191810) {
            ctx->pc = 0x191848u;
            goto label_191848;
        }
    }
    ctx->pc = 0x191818u;
label_191818:
    // 0x191818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x191818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19181c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19181cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191820: 0x0  nop
    ctx->pc = 0x191820u;
    // NOP
    // 0x191824: 0x0  nop
    ctx->pc = 0x191824u;
    // NOP
    // 0x191828: 0x46020016  rsqrt.s     $f0, $f0, $f2
    ctx->pc = 0x191828u;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[0], ctx->f[2]);
    // 0x19182c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19182cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x191830: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x191830u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x191834: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x191834u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x191838: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x191838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19183c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x19183cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x191840: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x191840u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x191844: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x191844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_191848:
    // 0x191848: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x191848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19184c: 0xc0cda02  jal         func_336808
    ctx->pc = 0x19184Cu;
    SET_GPR_U32(ctx, 31, 0x191854u);
    ctx->pc = 0x191850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19184Cu;
    // 0x191850: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336808u, 0x19184Cu, 0x191854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191854u;
label_191854:
    // 0x191854: 0xc6030040  lwc1        $f3, 0x40($s0)
    ctx->pc = 0x191854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191858: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x191858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19185c: 0xc6070044  lwc1        $f7, 0x44($s0)
    ctx->pc = 0x19185cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x191860: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x191860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x191864: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x191864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x191868: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19186c: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x19186cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x191870: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191870u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191874: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x191874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x191878: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x191878u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x19187c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x19187cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191880: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x191880u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x191884: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x191884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191888: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x191888u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x19188c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x19188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191890: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x191890u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x191894: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x191894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x191898: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x191898u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19189c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x19189cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1918a0: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x1918a0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1918a4: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x1918a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1918a8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1918a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1918ac: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1918acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1918b0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1918b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1918b4: 0x0  nop
    ctx->pc = 0x1918b4u;
    // NOP
label_1918b8:
    // 0x1918b8: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1918b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1918bc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1918bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1918c0: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x1918c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1918c4: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x1918c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1918c8: 0xd8c40030  lqc2        $vf4, 0x30($a2)
    ctx->pc = 0x1918c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1918cc: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x1918ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1918d0: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x1918d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1918d4: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x1918d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1918d8: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x1918d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1918dc: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1918dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1918e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1918e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1918e4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1918e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1918e8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1918e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1918ec: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1918ECu;
    {
        const bool branch_taken_0x1918ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1918F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918ECu;
        // 0x1918f0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918ec) {
            ctx->pc = 0x1918B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1918b8;
        }
    }
    ctx->pc = 0x1918F4u;
    // 0x1918f4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1918f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1918f8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1918f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1918fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1918fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x191900: 0x3e00008  jr          $ra
    ctx->pc = 0x191900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191900u;
        // 0x191904: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191908u;
}
