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

// Function: sub_0034D938
// Address: 0x34d938 - 0x34dff8
void sub_0034D938_0x34d938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D938_0x34d938");
#endif

    switch (ctx->pc) {
        case 0x34d9e4u: goto label_34d9e4;
        default: break;
    }

    ctx->pc = 0x34d938u;

    // 0x34d938: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x34d938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x34d93c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x34d93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x34d940: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x34d940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x34d944: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34d944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d948: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x34d948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x34d94c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34d94cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d950: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x34d950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x34d954: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34d954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d958: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x34d958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x34d95c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x34d95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34d960: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x34d960u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x34d964: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x34d964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d968: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x34d968u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x34d96c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x34d96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34d970: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x34d970u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x34d974: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x34d974u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d978: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x34d978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x34d97c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x34d97cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x34d980: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34d980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34d984: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x34d984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x34d988: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x34d988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x34d98c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34d98cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34d990: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x34d990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d994: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d994u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d998: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d998u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d99c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x34d99cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x34d9a0: 0x4a0003bf  vwaitq
    ctx->pc = 0x34d9a0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x34d9a4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x34d9a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d9a8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34d9a8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d9ac: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x34d9acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x34d9b0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x34d9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x34d9b4: 0x0  nop
    ctx->pc = 0x34d9b4u;
    // NOP
    // 0x34d9b8: 0x0  nop
    ctx->pc = 0x34d9b8u;
    // NOP
    // 0x34d9bc: 0x4615b003  div.s       $f0, $f22, $f21
    ctx->pc = 0x34d9bcu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[21]); }
    // 0x34d9c0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x34d9c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x34d9c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34d9c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34d9c8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34d9c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34d9cc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34d9ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34d9d0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x34d9d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d9d4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x34d9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x34d9d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34d9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d9dc: 0xc0d2460  jal         func_349180
    ctx->pc = 0x34D9DCu;
    SET_GPR_U32(ctx, 31, 0x34D9E4u);
    ctx->pc = 0x34D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D9DCu;
    // 0x34d9e0: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349180u, 0x34D9DCu, 0x34D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D9E4u;
label_34d9e4:
    // 0x34d9e4: 0x7a070000  lq          $a3, 0x0($s0)
    ctx->pc = 0x34d9e4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34d9e8: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x34d9e8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x34d9ec: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x34d9ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d9f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34d9f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34d9f4: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x34d9f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x34d9f8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d9f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d9fc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d9fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34da00: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34da00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34da04: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x34da04u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34da08: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x34da08u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34da0c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x34da0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34da10: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34da10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34da14: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x34da14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x34da18: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34da18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34da1c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34da1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34da20: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34da20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34da24: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34da24u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34da28: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34da28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34da2c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x34da2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x34da30: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34da30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34da34: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34da34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34da38: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34da38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34da3c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34da3cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34da40: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x34da40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34da44: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x34da44u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34da48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34da48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34da4c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x34da4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34da50: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x34da50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34da54: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x34da54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34da58: 0xe7b6003c  swc1        $f22, 0x3C($sp)
    ctx->pc = 0x34da58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x34da5c: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x34da5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x34da60: 0x3421ffef  ori         $at, $at, 0xFFEF
    ctx->pc = 0x34da60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65519);
    // 0x34da64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34da64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34da68: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x34da68u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34da6c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34da6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34da70: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x34da70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34da74: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34da74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34da78: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34da78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34da7c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x34da7cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x34da80: 0x4a0003bf  vwaitq
    ctx->pc = 0x34da80u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x34da84: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x34da84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34da88: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34da88u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34da8c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x34da8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34da90: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x34da90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34da94: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x34da94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34da98: 0x0  nop
    ctx->pc = 0x34da98u;
    // NOP
    // 0x34da9c: 0x0  nop
    ctx->pc = 0x34da9cu;
    // NOP
    // 0x34daa0: 0x4603b243  div.s       $f9, $f22, $f3
    ctx->pc = 0x34daa0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = FPU_DIV_S(ctx->f[22], ctx->f[3]); }
    // 0x34daa4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34daa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34daa8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34daa8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34daac: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34daacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34dab0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34dab0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34dab4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34dab4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34dab8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x34dab8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34dabc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34dabcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34dac0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34dac0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34dac4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34dac4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34dac8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34dac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34dacc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34daccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34dad0: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34dad0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34dad4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x34dad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x34dad8: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x34dad8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34dadc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x34dadcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34dae0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34dae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34dae4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34dae4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34dae8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34dae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34daec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34daecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34daf0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34daf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34daf4: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34daf4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34daf8: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x34daf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x34dafc: 0x44054800  mfc1        $a1, $f9
    ctx->pc = 0x34dafcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[9], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x34db00: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34db00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34db04: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34db04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34db08: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34db08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34db0c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x34db0cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34db10: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x34db10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x34db14: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x34db14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x34db18: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x34db18u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34db1c: 0xc7aa0038  lwc1        $f10, 0x38($sp)
    ctx->pc = 0x34db1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x34db20: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x34db20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34db24: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34db24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34db28: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34db28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34db2c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34db2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34db30: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34db30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34db34: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34db34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34db38: 0x46005005  abs.s       $f0, $f10
    ctx->pc = 0x34db38u;
    ctx->f[0] = FPU_ABS_S(ctx->f[10]);
    // 0x34db3c: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x34db3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x34db40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34db40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34db44: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x34db44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x34db48: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x34db48u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34db4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34db4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34db50: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x34db50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x34db54: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x34db54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x34db58: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x34DB58u;
    {
        const bool branch_taken_0x34db58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DB58u;
        // 0x34db5c: 0xe7b6005c  swc1        $f22, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34db58) {
            ctx->pc = 0x34DB80u;
            goto label_34db80;
        }
    }
    ctx->pc = 0x34DB60u;
    // 0x34db60: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x34db60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x34db64: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x34db64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x34db68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34db68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34db6c: 0x0  nop
    ctx->pc = 0x34db6cu;
    // NOP
    // 0x34db70: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x34db70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34db74: 0x0  nop
    ctx->pc = 0x34db74u;
    // NOP
    // 0x34db78: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x34DB78u;
    {
        const bool branch_taken_0x34db78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DB78u;
        // 0x34db7c: 0xc7a30050  lwc1        $f3, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34db78) {
            ctx->pc = 0x34DC68u;
            goto label_34dc68;
        }
    }
    ctx->pc = 0x34DB80u;
label_34db80:
    // 0x34db80: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x34db80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34db84: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x34db84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x34db88: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x34db88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x34db8c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x34db8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x34db90: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34db90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34db94: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34db94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34db98: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34db98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34db9c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34db9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34dba0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34dba0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34dba4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x34dba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34dba8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x34dba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34dbac: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x34dbacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34dbb0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x34dbb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x34dbb4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x34dbb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x34dbb8: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x34dbb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34dbbc: 0x0  nop
    ctx->pc = 0x34dbbcu;
    // NOP
    // 0x34dbc0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x34DBC0u;
    {
        const bool branch_taken_0x34dbc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DBC0u;
        // 0x34dbc4: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dbc0) {
            ctx->pc = 0x34DC0Cu;
            goto label_34dc0c;
        }
    }
    ctx->pc = 0x34DBC8u;
    // 0x34dbc8: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x34dbc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34dbcc: 0x0  nop
    ctx->pc = 0x34dbccu;
    // NOP
    // 0x34dbd0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x34DBD0u;
    {
        const bool branch_taken_0x34dbd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DBD0u;
        // 0x34dbd4: 0xc7a10058  lwc1        $f1, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dbd0) {
            ctx->pc = 0x34DC0Cu;
            goto label_34dc0c;
        }
    }
    ctx->pc = 0x34DBD8u;
    // 0x34dbd8: 0x0  nop
    ctx->pc = 0x34dbd8u;
    // NOP
    // 0x34dbdc: 0x0  nop
    ctx->pc = 0x34dbdcu;
    // NOP
    // 0x34dbe0: 0x46000144  c1          0x144
    ctx->pc = 0x34dbe0u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x34dbe4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34dbe8: 0x4601a801  sub.s       $f0, $f21, $f1
    ctx->pc = 0x34dbe8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x34dbec: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x34dbecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x34dbf0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x34dbf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x34dbf4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x34dbf4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x34dbf8: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x34dbf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x34dbfc: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x34dbfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x34dc00: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x34dc00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x34dc04: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x34DC04u;
    {
        const bool branch_taken_0x34dc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DC04u;
        // 0x34dc08: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dc04) {
            ctx->pc = 0x34DFCCu;
            goto label_34dfcc;
        }
    }
    ctx->pc = 0x34DC0Cu;
label_34dc0c:
    // 0x34dc0c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x34dc0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34dc10: 0x0  nop
    ctx->pc = 0x34dc10u;
    // NOP
    // 0x34dc14: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x34dc14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34dc18: 0x0  nop
    ctx->pc = 0x34dc18u;
    // NOP
    // 0x34dc1c: 0x450000eb  bc1f        . + 4 + (0xEB << 2)
    ctx->pc = 0x34DC1Cu;
    {
        const bool branch_taken_0x34dc1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DC1Cu;
        // 0x34dc20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dc1c) {
            ctx->pc = 0x34DFCCu;
            goto label_34dfcc;
        }
    }
    ctx->pc = 0x34DC24u;
    // 0x34dc24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34dc24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34dc28: 0x0  nop
    ctx->pc = 0x34dc28u;
    // NOP
    // 0x34dc2c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x34DC2Cu;
    {
        const bool branch_taken_0x34dc2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DC2Cu;
        // 0x34dc30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dc2c) {
            ctx->pc = 0x34DCBCu;
            goto label_34dcbc;
        }
    }
    ctx->pc = 0x34DC34u;
    // 0x34dc34: 0x0  nop
    ctx->pc = 0x34dc34u;
    // NOP
    // 0x34dc38: 0x0  nop
    ctx->pc = 0x34dc38u;
    // NOP
    // 0x34dc3c: 0x46000144  c1          0x144
    ctx->pc = 0x34dc3cu;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x34dc40: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x34dc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dc44: 0x4600a841  sub.s       $f1, $f21, $f0
    ctx->pc = 0x34dc44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x34dc48: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x34dc48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x34dc4c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x34dc4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x34dc50: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x34dc50u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x34dc54: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x34dc54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x34dc58: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x34dc58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x34dc5c: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x34dc5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x34dc60: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x34DC60u;
    {
        const bool branch_taken_0x34dc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DC60u;
        // 0x34dc64: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dc60) {
            ctx->pc = 0x34DFCCu;
            goto label_34dfcc;
        }
    }
    ctx->pc = 0x34DC68u;
label_34dc68:
    // 0x34dc68: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x34dc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34dc6c: 0x46031902  mul.s       $f4, $f3, $f3
    ctx->pc = 0x34dc6cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x34dc70: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x34dc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34dc74: 0x46010942  mul.s       $f5, $f1, $f1
    ctx->pc = 0x34dc74u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x34dc78: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x34dc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dc7c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x34dc7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x34dc80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34dc80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34dc84: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x34dc84u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x34dc88: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x34dc88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x34dc8c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x34dc8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x34dc90: 0x46142101  sub.s       $f4, $f4, $f20
    ctx->pc = 0x34dc90u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[20]);
    // 0x34dc94: 0x46011980  add.s       $f6, $f3, $f1
    ctx->pc = 0x34dc94u;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x34dc98: 0x46001500  add.s       $f20, $f2, $f0
    ctx->pc = 0x34dc98u;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34dc9c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x34dc9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34dca0: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x34dca0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x34dca4: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x34dca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x34dca8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34dca8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34dcac: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x34dcacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34dcb0: 0x0  nop
    ctx->pc = 0x34dcb0u;
    // NOP
    // 0x34dcb4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x34DCB4u;
    {
        const bool branch_taken_0x34dcb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34dcb4) {
            ctx->pc = 0x34DCC4u;
            goto label_34dcc4;
        }
    }
    ctx->pc = 0x34DCBCu;
label_34dcbc:
    // 0x34dcbc: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x34DCBCu;
    {
        const bool branch_taken_0x34dcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DCBCu;
        // 0x34dcc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dcbc) {
            ctx->pc = 0x34DFCCu;
            goto label_34dfcc;
        }
    }
    ctx->pc = 0x34DCC4u;
label_34dcc4:
    // 0x34dcc4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x34dcc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34dcc8: 0x0  nop
    ctx->pc = 0x34dcc8u;
    // NOP
    // 0x34dccc: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x34DCCCu;
    {
        const bool branch_taken_0x34dccc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DCCCu;
        // 0x34dcd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dccc) {
            ctx->pc = 0x34DD90u;
            goto label_34dd90;
        }
    }
    ctx->pc = 0x34DCD4u;
    // 0x34dcd4: 0x0  nop
    ctx->pc = 0x34dcd4u;
    // NOP
    // 0x34dcd8: 0x0  nop
    ctx->pc = 0x34dcd8u;
    // NOP
    // 0x34dcdc: 0x46000144  c1          0x144
    ctx->pc = 0x34dcdcu;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x34dce0: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x34dce0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x34dce4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x34dce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dce8: 0x0  nop
    ctx->pc = 0x34dce8u;
    // NOP
    // 0x34dcec: 0x0  nop
    ctx->pc = 0x34dcecu;
    // NOP
    // 0x34dcf0: 0x4614b203  div.s       $f8, $f22, $f20
    ctx->pc = 0x34dcf0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[22], ctx->f[20]); }
    // 0x34dcf4: 0x460009c6  mov.s       $f7, $f1
    ctx->pc = 0x34dcf4u;
    ctx->f[7] = FPU_MOV_S(ctx->f[1]);
    // 0x34dcf8: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x34dcf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x34dcfc: 0x46080d02  mul.s       $f20, $f1, $f8
    ctx->pc = 0x34dcfcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x34dd00: 0x460aa082  mul.s       $f2, $f20, $f10
    ctx->pc = 0x34dd00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[10]);
    // 0x34dd04: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x34dd04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x34dd08: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x34dd08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34dd0c: 0x0  nop
    ctx->pc = 0x34dd0cu;
    // NOP
    // 0x34dd10: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x34DD10u;
    {
        const bool branch_taken_0x34dd10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DD10u;
        // 0x34dd14: 0x46053840  add.s       $f1, $f7, $f5 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dd10) {
            ctx->pc = 0x34DD34u;
            goto label_34dd34;
        }
    }
    ctx->pc = 0x34DD18u;
    // 0x34dd18: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x34dd18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34dd1c: 0x0  nop
    ctx->pc = 0x34dd1cu;
    // NOP
    // 0x34dd20: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x34DD20u;
    {
        const bool branch_taken_0x34dd20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34dd20) {
            ctx->pc = 0x34DD34u;
            goto label_34dd34;
        }
    }
    ctx->pc = 0x34DD28u;
    // 0x34dd28: 0x4609a002  mul.s       $f0, $f20, $f9
    ctx->pc = 0x34dd28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[9]);
    // 0x34dd2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34dd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34dd30: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x34dd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_34dd34:
    // 0x34dd34: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x34dd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dd38: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x34dd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34dd3c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x34dd3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34dd40: 0x46080d02  mul.s       $f20, $f1, $f8
    ctx->pc = 0x34dd40u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x34dd44: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x34dd44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x34dd48: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x34dd48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34dd4c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x34dd4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34dd50: 0x0  nop
    ctx->pc = 0x34dd50u;
    // NOP
    // 0x34dd54: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x34DD54u;
    {
        const bool branch_taken_0x34dd54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DD54u;
        // 0x34dd58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dd54) {
            ctx->pc = 0x34DD80u;
            goto label_34dd80;
        }
    }
    ctx->pc = 0x34DD5Cu;
    // 0x34dd5c: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x34dd5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34dd60: 0x0  nop
    ctx->pc = 0x34dd60u;
    // NOP
    // 0x34dd64: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x34DD64u;
    {
        const bool branch_taken_0x34dd64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DD64u;
        // 0x34dd68: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dd64) {
            ctx->pc = 0x34DD7Cu;
            goto label_34dd7c;
        }
    }
    ctx->pc = 0x34DD6Cu;
    // 0x34dd6c: 0x4609a002  mul.s       $f0, $f20, $f9
    ctx->pc = 0x34dd6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[9]);
    // 0x34dd70: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x34dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x34dd74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34dd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x34dd78: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x34dd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_34dd7c:
    // 0x34dd7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34dd80:
    // 0x34dd80: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x34DD80u;
    {
        const bool branch_taken_0x34dd80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x34DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DD80u;
        // 0x34dd84: 0xc7a20058  lwc1        $f2, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dd80) {
            ctx->pc = 0x34DDD8u;
            goto label_34ddd8;
        }
    }
    ctx->pc = 0x34DD88u;
    // 0x34dd88: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x34DD88u;
    {
        const bool branch_taken_0x34dd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DD88u;
        // 0x34dd8c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dd88) {
            ctx->pc = 0x34DFD0u;
            goto label_34dfd0;
        }
    }
    ctx->pc = 0x34DD90u;
label_34dd90:
    // 0x34dd90: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x34dd90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x34dd94: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x34dd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34dd98: 0x0  nop
    ctx->pc = 0x34dd98u;
    // NOP
    // 0x34dd9c: 0x0  nop
    ctx->pc = 0x34dd9cu;
    // NOP
    // 0x34dda0: 0x46140503  div.s       $f20, $f0, $f20
    ctx->pc = 0x34dda0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x34dda4: 0x460aa042  mul.s       $f1, $f20, $f10
    ctx->pc = 0x34dda4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[10]);
    // 0x34dda8: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x34dda8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34ddac: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x34ddacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ddb0: 0x0  nop
    ctx->pc = 0x34ddb0u;
    // NOP
    // 0x34ddb4: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x34DDB4u;
    {
        const bool branch_taken_0x34ddb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ddb4) {
            ctx->pc = 0x34DDB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34DDB4u;
            // 0x34ddb8: 0xc7a30038  lwc1        $f3, 0x38($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34DDDCu;
            goto label_34dddc;
        }
    }
    ctx->pc = 0x34DDBCu;
    // 0x34ddbc: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x34ddbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ddc0: 0x0  nop
    ctx->pc = 0x34ddc0u;
    // NOP
    // 0x34ddc4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x34DDC4u;
    {
        const bool branch_taken_0x34ddc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DDC4u;
        // 0x34ddc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ddc4) {
            ctx->pc = 0x34DDD8u;
            goto label_34ddd8;
        }
    }
    ctx->pc = 0x34DDCCu;
    // 0x34ddcc: 0x4609a002  mul.s       $f0, $f20, $f9
    ctx->pc = 0x34ddccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[9]);
    // 0x34ddd0: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x34DDD0u;
    {
        const bool branch_taken_0x34ddd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DDD0u;
        // 0x34ddd4: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ddd0) {
            ctx->pc = 0x34DFCCu;
            goto label_34dfcc;
        }
    }
    ctx->pc = 0x34DDD8u;
label_34ddd8:
    // 0x34ddd8: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x34ddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_34dddc:
    // 0x34dddc: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x34dddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x34dde0: 0x46031042  mul.s       $f1, $f2, $f3
    ctx->pc = 0x34dde0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x34dde4: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x34dde4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x34dde8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x34dde8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x34ddec: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x34ddecu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x34ddf0: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x34ddf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x34ddf4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x34ddf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x34ddf8: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x34ddf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ddfc: 0x0  nop
    ctx->pc = 0x34ddfcu;
    // NOP
    // 0x34de00: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x34DE00u;
    {
        const bool branch_taken_0x34de00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34de00) {
            ctx->pc = 0x34DE74u;
            goto label_34de74;
        }
    }
    ctx->pc = 0x34DE08u;
    // 0x34de08: 0x0  nop
    ctx->pc = 0x34de08u;
    // NOP
    // 0x34de0c: 0x0  nop
    ctx->pc = 0x34de0cu;
    // NOP
    // 0x34de10: 0x46000144  c1          0x144
    ctx->pc = 0x34de10u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x34de14: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x34de14u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x34de18: 0x46050d01  sub.s       $f20, $f1, $f5
    ctx->pc = 0x34de18u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x34de1c: 0x4603a002  mul.s       $f0, $f20, $f3
    ctx->pc = 0x34de1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x34de20: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x34de20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34de24: 0x46080036  c.le.s      $f0, $f8
    ctx->pc = 0x34de24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34de28: 0x0  nop
    ctx->pc = 0x34de28u;
    // NOP
    // 0x34de2c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x34DE2Cu;
    {
        const bool branch_taken_0x34de2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DE2Cu;
        // 0x34de30: 0x460009c6  mov.s       $f7, $f1 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34de2c) {
            ctx->pc = 0x34DE50u;
            goto label_34de50;
        }
    }
    ctx->pc = 0x34DE34u;
    // 0x34de34: 0x4609a002  mul.s       $f0, $f20, $f9
    ctx->pc = 0x34de34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[9]);
    // 0x34de38: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x34de38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x34de3c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x34de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x34de40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34de40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x34de44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34de44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34de48: 0x10a3004b  beq         $a1, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x34DE48u;
    {
        const bool branch_taken_0x34de48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DE48u;
        // 0x34de4c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34de48) {
            ctx->pc = 0x34DF78u;
            goto label_34df78;
        }
    }
    ctx->pc = 0x34DE50u;
label_34de50:
    // 0x34de50: 0x46053d00  add.s       $f20, $f7, $f5
    ctx->pc = 0x34de50u;
    ctx->f[20] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x34de54: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x34de54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34de58: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x34de58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34de5c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x34de5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34de60: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x34de60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x34de64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34de64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34de68: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x34de68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34de6c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34DE6Cu;
    {
        const bool branch_taken_0x34de6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34de6c) {
            ctx->pc = 0x34DE94u;
            goto label_34de94;
        }
    }
    ctx->pc = 0x34DE74u;
label_34de74:
    // 0x34de74: 0x46080032  c.eq.s      $f0, $f8
    ctx->pc = 0x34de74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34de78: 0x0  nop
    ctx->pc = 0x34de78u;
    // NOP
    // 0x34de7c: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x34DE7Cu;
    {
        const bool branch_taken_0x34de7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34de7c) {
            ctx->pc = 0x34DE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34DE7Cu;
            // 0x34de80: 0xc7a20058  lwc1        $f2, 0x58($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34DEBCu;
            goto label_34debc;
        }
    }
    ctx->pc = 0x34DE84u;
    // 0x34de84: 0x46003507  neg.s       $f20, $f6
    ctx->pc = 0x34de84u;
    ctx->f[20] = FPU_NEG_S(ctx->f[6]);
    // 0x34de88: 0x4603a002  mul.s       $f0, $f20, $f3
    ctx->pc = 0x34de88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x34de8c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x34de8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34de90: 0x46080036  c.le.s      $f0, $f8
    ctx->pc = 0x34de90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34de94:
    // 0x34de94: 0x0  nop
    ctx->pc = 0x34de94u;
    // NOP
    // 0x34de98: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x34DE98u;
    {
        const bool branch_taken_0x34de98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DE98u;
        // 0x34de9c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34de98) {
            ctx->pc = 0x34DEB8u;
            goto label_34deb8;
        }
    }
    ctx->pc = 0x34DEA0u;
    // 0x34dea0: 0x4609a002  mul.s       $f0, $f20, $f9
    ctx->pc = 0x34dea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[9]);
    // 0x34dea4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x34dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x34dea8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x34dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x34deac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34deacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x34deb0: 0x10a30031  beq         $a1, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x34DEB0u;
    {
        const bool branch_taken_0x34deb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DEB0u;
        // 0x34deb4: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34deb0) {
            ctx->pc = 0x34DF78u;
            goto label_34df78;
        }
    }
    ctx->pc = 0x34DEB8u;
label_34deb8:
    // 0x34deb8: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x34deb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34debc:
    // 0x34debc: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x34debcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34dec0: 0x46021000  add.s       $f0, $f2, $f2
    ctx->pc = 0x34dec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x34dec4: 0x46151842  mul.s       $f1, $f3, $f21
    ctx->pc = 0x34dec4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x34dec8: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x34dec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x34decc: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x34deccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x34ded0: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x34ded0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x34ded4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x34ded4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x34ded8: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x34ded8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x34dedc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x34dedcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x34dee0: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x34dee0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x34dee4: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x34dee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34dee8: 0x0  nop
    ctx->pc = 0x34dee8u;
    // NOP
    // 0x34deec: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x34DEECu;
    {
        const bool branch_taken_0x34deec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34deec) {
            ctx->pc = 0x34DF80u;
            goto label_34df80;
        }
    }
    ctx->pc = 0x34DEF4u;
    // 0x34def4: 0x0  nop
    ctx->pc = 0x34def4u;
    // NOP
    // 0x34def8: 0x0  nop
    ctx->pc = 0x34def8u;
    // NOP
    // 0x34defc: 0x46000144  c1          0x144
    ctx->pc = 0x34defcu;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x34df00: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x34df00u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x34df04: 0x46050d01  sub.s       $f20, $f1, $f5
    ctx->pc = 0x34df04u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x34df08: 0x4603a002  mul.s       $f0, $f20, $f3
    ctx->pc = 0x34df08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x34df0c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x34df0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34df10: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x34df10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34df14: 0x0  nop
    ctx->pc = 0x34df14u;
    // NOP
    // 0x34df18: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x34DF18u;
    {
        const bool branch_taken_0x34df18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DF18u;
        // 0x34df1c: 0x460009c6  mov.s       $f7, $f1 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34df18) {
            ctx->pc = 0x34DF3Cu;
            goto label_34df3c;
        }
    }
    ctx->pc = 0x34DF20u;
    // 0x34df20: 0x4609a002  mul.s       $f0, $f20, $f9
    ctx->pc = 0x34df20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[9]);
    // 0x34df24: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x34df24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x34df28: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x34df28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x34df2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34df2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x34df30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34df30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34df34: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x34DF34u;
    {
        const bool branch_taken_0x34df34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DF34u;
        // 0x34df38: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34df34) {
            ctx->pc = 0x34DF78u;
            goto label_34df78;
        }
    }
    ctx->pc = 0x34DF3Cu;
label_34df3c:
    // 0x34df3c: 0x46053d00  add.s       $f20, $f7, $f5
    ctx->pc = 0x34df3cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x34df40: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x34df40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34df44: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x34df44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34df48: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x34df48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x34df4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34df4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34df50: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x34df50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34df54: 0x0  nop
    ctx->pc = 0x34df54u;
    // NOP
    // 0x34df58: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x34DF58u;
    {
        const bool branch_taken_0x34df58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DF58u;
        // 0x34df5c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34df58) {
            ctx->pc = 0x34DFC8u;
            goto label_34dfc8;
        }
    }
    ctx->pc = 0x34DF60u;
    // 0x34df60: 0x4609a002  mul.s       $f0, $f20, $f9
    ctx->pc = 0x34df60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[9]);
    // 0x34df64: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x34df64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x34df68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34df68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x34df6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34df70: 0x14a30015  bne         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x34DF70u;
    {
        const bool branch_taken_0x34df70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x34DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DF70u;
        // 0x34df74: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34df70) {
            ctx->pc = 0x34DFC8u;
            goto label_34dfc8;
        }
    }
    ctx->pc = 0x34DF78u;
label_34df78:
    // 0x34df78: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x34DF78u;
    {
        const bool branch_taken_0x34df78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DF78u;
        // 0x34df7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34df78) {
            ctx->pc = 0x34DFCCu;
            goto label_34dfcc;
        }
    }
    ctx->pc = 0x34DF80u;
label_34df80:
    // 0x34df80: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x34df80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34df84: 0x0  nop
    ctx->pc = 0x34df84u;
    // NOP
    // 0x34df88: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x34DF88u;
    {
        const bool branch_taken_0x34df88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DF88u;
        // 0x34df8c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34df88) {
            ctx->pc = 0x34DFCCu;
            goto label_34dfcc;
        }
    }
    ctx->pc = 0x34DF90u;
    // 0x34df90: 0x46003507  neg.s       $f20, $f6
    ctx->pc = 0x34df90u;
    ctx->f[20] = FPU_NEG_S(ctx->f[6]);
    // 0x34df94: 0x4603a002  mul.s       $f0, $f20, $f3
    ctx->pc = 0x34df94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x34df98: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x34df98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34df9c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x34df9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34dfa0: 0x0  nop
    ctx->pc = 0x34dfa0u;
    // NOP
    // 0x34dfa4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x34DFA4u;
    {
        const bool branch_taken_0x34dfa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DFA4u;
        // 0x34dfa8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dfa4) {
            ctx->pc = 0x34DFCCu;
            goto label_34dfcc;
        }
    }
    ctx->pc = 0x34DFACu;
    // 0x34dfac: 0x4609a002  mul.s       $f0, $f20, $f9
    ctx->pc = 0x34dfacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[9]);
    // 0x34dfb0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x34dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x34dfb4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x34dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x34dfb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34dfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x34dfbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34dfc0: 0x10a40002  beq         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34DFC0u;
    {
        const bool branch_taken_0x34dfc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x34DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DFC0u;
        // 0x34dfc4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dfc0) {
            ctx->pc = 0x34DFCCu;
            goto label_34dfcc;
        }
    }
    ctx->pc = 0x34DFC8u;
label_34dfc8:
    // 0x34dfc8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x34dfc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34dfcc:
    // 0x34dfcc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x34dfccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_34dfd0:
    // 0x34dfd0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x34dfd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x34dfd4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x34dfd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x34dfd8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x34dfd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x34dfdc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x34dfdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x34dfe0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x34dfe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34dfe4: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x34dfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x34dfe8: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x34dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34dfec: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x34dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34dff0: 0x3e00008  jr          $ra
    ctx->pc = 0x34DFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DFF0u;
        // 0x34dff4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DFF8u;
}
