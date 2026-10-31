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

// Function: sub_00349A60
// Address: 0x349a60 - 0x34a2d0
void sub_00349A60_0x349a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349A60_0x349a60");
#endif

    switch (ctx->pc) {
        case 0x349af4u: goto label_349af4;
        case 0x349f9cu: goto label_349f9c;
        default: break;
    }

    ctx->pc = 0x349a60u;

    // 0x349a60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x349a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x349a64: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x349a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x349a68: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x349a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x349a6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x349a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349a70: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x349a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x349a74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x349a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349a78: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x349a78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x349a7c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x349a7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349a80: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x349a80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x349a84: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x349a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x349a88: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x349a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x349a8c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x349a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x349a90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x349a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x349a94: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x349a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x349a98: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x349a98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x349a9c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x349a9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x349aa0: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x349aa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349aa4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x349aa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349aa8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x349aa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349aac: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x349aacu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x349ab0: 0x4a0003bf  vwaitq
    ctx->pc = 0x349ab0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x349ab4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x349ab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349ab8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x349ab8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x349abc: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x349abcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x349ac0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x349ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x349ac4: 0x0  nop
    ctx->pc = 0x349ac4u;
    // NOP
    // 0x349ac8: 0x0  nop
    ctx->pc = 0x349ac8u;
    // NOP
    // 0x349acc: 0x4614a803  div.s       $f0, $f21, $f20
    ctx->pc = 0x349accu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
    // 0x349ad0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x349ad0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x349ad4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x349ad4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x349ad8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x349ad8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x349adc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x349adcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x349ae0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x349ae0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349ae4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x349ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349ae8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x349ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x349aec: 0xc0d2460  jal         func_349180
    ctx->pc = 0x349AECu;
    SET_GPR_U32(ctx, 31, 0x349AF4u);
    ctx->pc = 0x349AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349AECu;
    // 0x349af0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349180u, 0x349AECu, 0x349AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349AF4u;
label_349af4:
    // 0x349af4: 0x7a070010  lq          $a3, 0x10($s0)
    ctx->pc = 0x349af4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x349af8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x349af8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349afc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x349afcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x349b00: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x349b00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x349b04: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x349b04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349b08: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x349b08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349b0c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x349b0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349b10: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x349b10u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x349b14: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x349b14u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349b18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x349b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x349b1c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x349b1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x349b20: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x349b20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x349b24: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x349b24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349b28: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x349b28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349b2c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x349b2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349b30: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x349b30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x349b34: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x349b34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349b38: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x349b38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x349b3c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x349b3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x349b40: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x349b40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349b44: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x349b44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349b48: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x349b48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349b4c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x349b4cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x349b50: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x349b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x349b54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x349b54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349b58: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x349b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x349b5c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x349b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x349b60: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x349b60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x349b64: 0xe7b5003c  swc1        $f21, 0x3C($sp)
    ctx->pc = 0x349b64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x349b68: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x349b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x349b6c: 0x3421ffef  ori         $at, $at, 0xFFEF
    ctx->pc = 0x349b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65519);
    // 0x349b70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x349b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x349b74: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x349b74u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349b78: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x349b78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x349b7c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x349b7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349b80: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x349b80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349b84: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x349b84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349b88: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x349b88u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x349b8c: 0x4a0003bf  vwaitq
    ctx->pc = 0x349b8cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x349b90: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x349b90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349b94: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x349b94u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x349b98: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x349b98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x349b9c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x349b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x349ba0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x349ba0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x349ba4: 0x0  nop
    ctx->pc = 0x349ba4u;
    // NOP
    // 0x349ba8: 0x0  nop
    ctx->pc = 0x349ba8u;
    // NOP
    // 0x349bac: 0x4603aa83  div.s       $f10, $f21, $f3
    ctx->pc = 0x349bacu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = FPU_DIV_S(ctx->f[21], ctx->f[3]); }
    // 0x349bb0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x349bb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x349bb4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x349bb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x349bb8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x349bb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x349bbc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x349bbcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x349bc0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x349bc0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x349bc4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x349bc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349bc8: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x349bc8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349bcc: 0x44045000  mfc1        $a0, $f10
    ctx->pc = 0x349bccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[10], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x349bd0: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x349bd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x349bd4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x349bd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x349bd8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x349bd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x349bdc: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x349bdcu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349be0: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x349be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x349be4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x349be4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x349be8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x349be8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x349bec: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x349becu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349bf0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x349bf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349bf4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x349bf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349bf8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x349bf8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x349bfc: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x349bfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x349c00: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x349c00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x349c04: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x349c04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349c08: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x349c08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349c0c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x349c0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349c10: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x349c10u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x349c14: 0xc7a90038  lwc1        $f9, 0x38($sp)
    ctx->pc = 0x349c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x349c18: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x349c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349c1c: 0x46004845  abs.s       $f1, $f9
    ctx->pc = 0x349c1cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[9]);
    // 0x349c20: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x349c20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349c24: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x349c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x349c28: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x349c28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x349c2c: 0x46000182  mul.s       $f6, $f0, $f0
    ctx->pc = 0x349c2cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x349c30: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x349c30u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349c34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x349c34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349c38: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x349c38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x349c3c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x349c3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x349c40: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x349c40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349c44: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x349c44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349c48: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x349c48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349c4c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x349c4cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x349c50: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x349c50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x349c54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x349c54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x349c58: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x349c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x349c5c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x349c5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x349c60: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x349c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x349c64: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x349c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x349c68: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x349c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x349c6c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x349c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x349c70: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x349C70u;
    {
        const bool branch_taken_0x349c70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x349C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C70u;
        // 0x349c74: 0xe7b5005c  swc1        $f21, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c70) {
            ctx->pc = 0x349C98u;
            goto label_349c98;
        }
    }
    ctx->pc = 0x349C78u;
    // 0x349c78: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x349c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x349c7c: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x349c7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x349c80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x349c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349c84: 0x0  nop
    ctx->pc = 0x349c84u;
    // NOP
    // 0x349c88: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x349c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349c8c: 0x0  nop
    ctx->pc = 0x349c8cu;
    // NOP
    // 0x349c90: 0x45000066  bc1f        . + 4 + (0x66 << 2)
    ctx->pc = 0x349C90u;
    {
        const bool branch_taken_0x349c90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x349C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C90u;
        // 0x349c94: 0xc7a30050  lwc1        $f3, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c90) {
            ctx->pc = 0x349E2Cu;
            goto label_349e2c;
        }
    }
    ctx->pc = 0x349C98u;
label_349c98:
    // 0x349c98: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x349c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349c9c: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x349c9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x349ca0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x349ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x349ca4: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x349ca4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x349ca8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x349ca8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x349cac: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x349cacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349cb0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x349cb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349cb4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x349cb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349cb8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x349cb8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x349cbc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x349cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349cc0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x349cc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x349cc4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x349cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x349cc8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x349cc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x349ccc: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x349cccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x349cd0: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x349cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349cd4: 0x0  nop
    ctx->pc = 0x349cd4u;
    // NOP
    // 0x349cd8: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x349CD8u;
    {
        const bool branch_taken_0x349cd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x349CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349CD8u;
        // 0x349cdc: 0x46010141  sub.s       $f5, $f0, $f1 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x349cd8) {
            ctx->pc = 0x349D78u;
            goto label_349d78;
        }
    }
    ctx->pc = 0x349CE0u;
    // 0x349ce0: 0x46051836  c.le.s      $f3, $f5
    ctx->pc = 0x349ce0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349ce4: 0x0  nop
    ctx->pc = 0x349ce4u;
    // NOP
    // 0x349ce8: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x349CE8u;
    {
        const bool branch_taken_0x349ce8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x349CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349CE8u;
        // 0x349cec: 0xc7a00058  lwc1        $f0, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ce8) {
            ctx->pc = 0x349D78u;
            goto label_349d78;
        }
    }
    ctx->pc = 0x349CF0u;
    // 0x349cf0: 0x0  nop
    ctx->pc = 0x349cf0u;
    // NOP
    // 0x349cf4: 0x0  nop
    ctx->pc = 0x349cf4u;
    // NOP
    // 0x349cf8: 0x46050204  c1          0x50204
    ctx->pc = 0x349cf8u;
    ctx->f[8] = FPU_SQRT_S(ctx->f[0]);
    // 0x349cfc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x349cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349d00: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x349d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x349d04: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x349d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x349d08: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x349d08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x349d0c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x349d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x349d10: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x349d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x349d14: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x349d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x349d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x349d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349d1c: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x349d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x349d20: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x349d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x349d24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x349d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349d28: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x349d28u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x349d2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x349d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x349d30: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x349d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x349d34: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x349d34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x349d38: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x349d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349d3c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x349d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349d40: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x349d40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x349d44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x349d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x349d48: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x349d48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x349d4c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x349d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x349d50: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x349d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x349d54: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x349d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x349d58: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x349d58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x349d5c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x349d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x349d60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x349d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349d64: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x349d64u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x349d68: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x349d68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x349d6c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x349d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x349d70: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x349D70u;
    {
        const bool branch_taken_0x349d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349D70u;
        // 0x349d74: 0x7c850010  sq          $a1, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349d70) {
            ctx->pc = 0x34A008u;
            goto label_34a008;
        }
    }
    ctx->pc = 0x349D78u;
label_349d78:
    // 0x349d78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x349d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349d7c: 0x0  nop
    ctx->pc = 0x349d7cu;
    // NOP
    // 0x349d80: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x349d80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349d84: 0x0  nop
    ctx->pc = 0x349d84u;
    // NOP
    // 0x349d88: 0x45000149  bc1f        . + 4 + (0x149 << 2)
    ctx->pc = 0x349D88u;
    {
        const bool branch_taken_0x349d88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x349D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349D88u;
        // 0x349d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349d88) {
            ctx->pc = 0x34A2B0u;
            goto label_34a2b0;
        }
    }
    ctx->pc = 0x349D90u;
    // 0x349d90: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x349d90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349d94: 0x0  nop
    ctx->pc = 0x349d94u;
    // NOP
    // 0x349d98: 0x45000145  bc1f        . + 4 + (0x145 << 2)
    ctx->pc = 0x349D98u;
    {
        const bool branch_taken_0x349d98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x349D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349D98u;
        // 0x349d9c: 0xc7a00058  lwc1        $f0, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349d98) {
            ctx->pc = 0x34A2B0u;
            goto label_34a2b0;
        }
    }
    ctx->pc = 0x349DA0u;
    // 0x349da0: 0x0  nop
    ctx->pc = 0x349da0u;
    // NOP
    // 0x349da4: 0x0  nop
    ctx->pc = 0x349da4u;
    // NOP
    // 0x349da8: 0x46050204  c1          0x50204
    ctx->pc = 0x349da8u;
    ctx->f[8] = FPU_SQRT_S(ctx->f[0]);
    // 0x349dac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x349dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349db0: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x349db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x349db4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x349db4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x349db8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x349db8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x349dbc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x349dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x349dc0: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x349dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x349dc4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x349dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x349dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x349dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349dcc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x349dccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x349dd0: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x349dd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x349dd4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x349dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x349dd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x349dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349ddc: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x349ddcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x349de0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x349de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x349de4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x349de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x349de8: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x349de8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x349dec: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x349decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349df0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x349df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349df4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x349df4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x349df8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x349df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x349dfc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x349dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x349e00: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x349e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x349e04: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x349e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x349e08: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x349e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x349e0c: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x349e0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x349e10: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x349e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x349e14: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x349e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349e18: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x349e18u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x349e1c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x349e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x349e20: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x349e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x349e24: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x349E24u;
    {
        const bool branch_taken_0x349e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E24u;
        // 0x349e28: 0x7c850010  sq          $a1, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349e24) {
            ctx->pc = 0x34A008u;
            goto label_34a008;
        }
    }
    ctx->pc = 0x349E2Cu;
label_349e2c:
    // 0x349e2c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x349e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349e30: 0x46031902  mul.s       $f4, $f3, $f3
    ctx->pc = 0x349e30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x349e34: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x349e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349e38: 0x46010942  mul.s       $f5, $f1, $f1
    ctx->pc = 0x349e38u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x349e3c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x349e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349e40: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x349e40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x349e44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x349e44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x349e48: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x349e48u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x349e4c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x349e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x349e50: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x349e50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x349e54: 0x460119c0  add.s       $f7, $f3, $f1
    ctx->pc = 0x349e54u;
    ctx->f[7] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x349e58: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x349e58u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x349e5c: 0x460010c0  add.s       $f3, $f2, $f0
    ctx->pc = 0x349e5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x349e60: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x349e60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x349e64: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x349e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x349e68: 0x46041802  mul.s       $f0, $f3, $f4
    ctx->pc = 0x349e68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x349e6c: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x349e6cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x349e70: 0x46062834  c.lt.s      $f5, $f6
    ctx->pc = 0x349e70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349e74: 0x0  nop
    ctx->pc = 0x349e74u;
    // NOP
    // 0x349e78: 0x4501010d  bc1t        . + 4 + (0x10D << 2)
    ctx->pc = 0x349E78u;
    {
        const bool branch_taken_0x349e78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x349E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E78u;
        // 0x349e7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349e78) {
            ctx->pc = 0x34A2B0u;
            goto label_34a2b0;
        }
    }
    ctx->pc = 0x349E80u;
    // 0x349e80: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x349e80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349e84: 0x0  nop
    ctx->pc = 0x349e84u;
    // NOP
    // 0x349e88: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x349E88u;
    {
        const bool branch_taken_0x349e88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x349E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E88u;
        // 0x349e8c: 0x46003807  neg.s       $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x349e88) {
            ctx->pc = 0x349FA4u;
            goto label_349fa4;
        }
    }
    ctx->pc = 0x349E90u;
    // 0x349e90: 0x0  nop
    ctx->pc = 0x349e90u;
    // NOP
    // 0x349e94: 0x0  nop
    ctx->pc = 0x349e94u;
    // NOP
    // 0x349e98: 0x46050204  c1          0x50204
    ctx->pc = 0x349e98u;
    ctx->f[8] = FPU_SQRT_S(ctx->f[0]);
    // 0x349e9c: 0x0  nop
    ctx->pc = 0x349e9cu;
    // NOP
    // 0x349ea0: 0x0  nop
    ctx->pc = 0x349ea0u;
    // NOP
    // 0x349ea4: 0x4603aac3  div.s       $f11, $f21, $f3
    ctx->pc = 0x349ea4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[11] = FPU_DIV_S(ctx->f[21], ctx->f[3]); }
    // 0x349ea8: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x349ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349eac: 0x46080041  sub.s       $f1, $f0, $f8
    ctx->pc = 0x349eacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x349eb0: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x349eb0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x349eb4: 0x460b0942  mul.s       $f5, $f1, $f11
    ctx->pc = 0x349eb4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x349eb8: 0x46092802  mul.s       $f0, $f5, $f9
    ctx->pc = 0x349eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x349ebc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x349ebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x349ec0: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x349ec0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349ec4: 0x0  nop
    ctx->pc = 0x349ec4u;
    // NOP
    // 0x349ec8: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x349EC8u;
    {
        const bool branch_taken_0x349ec8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x349ec8) {
            ctx->pc = 0x349ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349EC8u;
            // 0x349ecc: 0x46081840  add.s       $f1, $f3, $f8 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x349F1Cu;
            goto label_349f1c;
        }
    }
    ctx->pc = 0x349ED0u;
    // 0x349ed0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x349ed0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349ed4: 0x0  nop
    ctx->pc = 0x349ed4u;
    // NOP
    // 0x349ed8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x349ED8u;
    {
        const bool branch_taken_0x349ed8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x349EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349ED8u;
        // 0x349edc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ed8) {
            ctx->pc = 0x349F18u;
            goto label_349f18;
        }
    }
    ctx->pc = 0x349EE0u;
    // 0x349ee0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x349ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349ee4: 0x460a2802  mul.s       $f0, $f5, $f10
    ctx->pc = 0x349ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x349ee8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x349ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x349eec: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x349eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x349ef0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x349ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x349ef4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x349ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x349ef8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x349ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349efc: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x349efcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x349f00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x349f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x349f04: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x349f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x349f08: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x349f08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x349f0c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x349f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349f10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x349f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x349f14: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x349f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_349f18:
    // 0x349f18: 0x46081840  add.s       $f1, $f3, $f8
    ctx->pc = 0x349f18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
label_349f1c:
    // 0x349f1c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x349f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349f20: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x349f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349f24: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x349f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x349f28: 0x460b0942  mul.s       $f5, $f1, $f11
    ctx->pc = 0x349f28u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x349f2c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x349f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x349f30: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x349f30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x349f34: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x349f34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349f38: 0x0  nop
    ctx->pc = 0x349f38u;
    // NOP
    // 0x349f3c: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x349F3Cu;
    {
        const bool branch_taken_0x349f3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x349f3c) {
            ctx->pc = 0x349F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349F3Cu;
            // 0x349f40: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349F90u;
            goto label_349f90;
        }
    }
    ctx->pc = 0x349F44u;
    // 0x349f44: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x349f44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349f48: 0x0  nop
    ctx->pc = 0x349f48u;
    // NOP
    // 0x349f4c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x349F4Cu;
    {
        const bool branch_taken_0x349f4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x349F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F4Cu;
        // 0x349f50: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349f4c) {
            ctx->pc = 0x349F8Cu;
            goto label_349f8c;
        }
    }
    ctx->pc = 0x349F54u;
    // 0x349f54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x349f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349f58: 0x460a2802  mul.s       $f0, $f5, $f10
    ctx->pc = 0x349f58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x349f5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x349f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x349f60: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x349f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x349f64: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x349f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x349f68: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x349f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x349f6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x349f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349f70: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x349f70u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x349f74: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x349f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x349f78: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x349f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x349f7c: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x349f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x349f80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x349f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349f84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x349f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x349f88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x349f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_349f8c:
    // 0x349f8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x349f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_349f90:
    // 0x349f90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x349f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x349f94: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x349F94u;
    {
        const bool branch_taken_0x349f94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x349F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F94u;
        // 0x349f98: 0xc7a20058  lwc1        $f2, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349f94) {
            ctx->pc = 0x34A018u;
            goto label_34a018;
        }
    }
    ctx->pc = 0x349F9Cu;
label_349f9c:
    // 0x349f9c: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x349F9Cu;
    {
        const bool branch_taken_0x349f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F9Cu;
        // 0x349fa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349f9c) {
            ctx->pc = 0x34A2B0u;
            goto label_34a2b0;
        }
    }
    ctx->pc = 0x349FA4u;
label_349fa4:
    // 0x349fa4: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x349fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349fa8: 0x0  nop
    ctx->pc = 0x349fa8u;
    // NOP
    // 0x349fac: 0x0  nop
    ctx->pc = 0x349facu;
    // NOP
    // 0x349fb0: 0x46030143  div.s       $f5, $f0, $f3
    ctx->pc = 0x349fb0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x349fb4: 0x46092842  mul.s       $f1, $f5, $f9
    ctx->pc = 0x349fb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x349fb8: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x349fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x349fbc: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x349fbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349fc0: 0x0  nop
    ctx->pc = 0x349fc0u;
    // NOP
    // 0x349fc4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x349FC4u;
    {
        const bool branch_taken_0x349fc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x349FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349FC4u;
        // 0x349fc8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349fc4) {
            ctx->pc = 0x34A018u;
            goto label_34a018;
        }
    }
    ctx->pc = 0x349FCCu;
    // 0x349fcc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x349fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349fd0: 0x0  nop
    ctx->pc = 0x349fd0u;
    // NOP
    // 0x349fd4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x349FD4u;
    {
        const bool branch_taken_0x349fd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x349FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349FD4u;
        // 0x349fd8: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349fd4) {
            ctx->pc = 0x34A018u;
            goto label_34a018;
        }
    }
    ctx->pc = 0x349FDCu;
    // 0x349fdc: 0x460a2802  mul.s       $f0, $f5, $f10
    ctx->pc = 0x349fdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x349fe0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x349fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x349fe4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x349fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x349fe8: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x349fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x349fec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x349fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349ff0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x349ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x349ff4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x349ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349ff8: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x349ff8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x349ffc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x349ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x34a000: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x34a000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x34a004: 0x7c860010  sq          $a2, 0x10($a0)
    ctx->pc = 0x34a004u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 6));
label_34a008:
    // 0x34a008: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x34a008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34a00c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34a010: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x34A010u;
    {
        const bool branch_taken_0x34a010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A010u;
        // 0x34a014: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a010) {
            ctx->pc = 0x34A2B0u;
            goto label_34a2b0;
        }
    }
    ctx->pc = 0x34A018u;
label_34a018:
    // 0x34a018: 0xc7a60038  lwc1        $f6, 0x38($sp)
    ctx->pc = 0x34a018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x34a01c: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x34a01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x34a020: 0x46061042  mul.s       $f1, $f2, $f6
    ctx->pc = 0x34a020u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x34a024: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x34a024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x34a028: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x34a028u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x34a02c: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x34a02cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x34a030: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x34a030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x34a034: 0x46040141  sub.s       $f5, $f0, $f4
    ctx->pc = 0x34a034u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x34a038: 0x46054834  c.lt.s      $f9, $f5
    ctx->pc = 0x34a038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a03c: 0x0  nop
    ctx->pc = 0x34a03cu;
    // NOP
    // 0x34a040: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x34A040u;
    {
        const bool branch_taken_0x34a040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a040) {
            ctx->pc = 0x34A110u;
            goto label_34a110;
        }
    }
    ctx->pc = 0x34A048u;
    // 0x34a048: 0x46003847  neg.s       $f1, $f7
    ctx->pc = 0x34a048u;
    ctx->f[1] = FPU_NEG_S(ctx->f[7]);
    // 0x34a04c: 0x0  nop
    ctx->pc = 0x34a04cu;
    // NOP
    // 0x34a050: 0x0  nop
    ctx->pc = 0x34a050u;
    // NOP
    // 0x34a054: 0x46050204  c1          0x50204
    ctx->pc = 0x34a054u;
    ctx->f[8] = FPU_SQRT_S(ctx->f[0]);
    // 0x34a058: 0x46080941  sub.s       $f5, $f1, $f8
    ctx->pc = 0x34a058u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x34a05c: 0x46062802  mul.s       $f0, $f5, $f6
    ctx->pc = 0x34a05cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x34a060: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x34a060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34a064: 0x46090036  c.le.s      $f0, $f9
    ctx->pc = 0x34a064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a068: 0x0  nop
    ctx->pc = 0x34a068u;
    // NOP
    // 0x34a06c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x34A06Cu;
    {
        const bool branch_taken_0x34a06c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A06Cu;
        // 0x34a070: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a06c) {
            ctx->pc = 0x34A0B4u;
            goto label_34a0b4;
        }
    }
    ctx->pc = 0x34A074u;
    // 0x34a074: 0x460a2802  mul.s       $f0, $f5, $f10
    ctx->pc = 0x34a074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x34a078: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34a078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34a07c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x34a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x34a080: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x34a080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x34a084: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x34a084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x34a088: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34a088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34a08c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x34a08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x34a090: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x34a090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34a094: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x34a094u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x5116C0u));
    // 0x34a098: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x34a098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x34a09c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x34a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x34a0a0: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x34a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x34a0a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x34a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34a0a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34a0ac: 0x1046ffbb  beq         $v0, $a2, . + 4 + (-0x45 << 2)
    ctx->pc = 0x34A0ACu;
    {
        const bool branch_taken_0x34a0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x34A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A0ACu;
        // 0x34a0b0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a0ac) {
            ctx->pc = 0x349F9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349f9c;
        }
    }
    ctx->pc = 0x34A0B4u;
label_34a0b4:
    // 0x34a0b4: 0x46081940  add.s       $f5, $f3, $f8
    ctx->pc = 0x34a0b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x34a0b8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x34a0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a0bc: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x34a0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a0c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x34a0c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34a0c4: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x34a0c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x34a0c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34a0c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34a0cc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x34a0ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a0d0: 0x0  nop
    ctx->pc = 0x34a0d0u;
    // NOP
    // 0x34a0d4: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x34A0D4u;
    {
        const bool branch_taken_0x34a0d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A0D4u;
        // 0x34a0d8: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a0d4) {
            ctx->pc = 0x34A178u;
            goto label_34a178;
        }
    }
    ctx->pc = 0x34A0DCu;
    // 0x34a0dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x34a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34a0e0: 0x460a2802  mul.s       $f0, $f5, $f10
    ctx->pc = 0x34a0e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x34a0e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34a0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34a0e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34a0ec: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x34a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x34a0f0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x34a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x34a0f4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x34a0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x34a0f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x34a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34a0fc: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x34a0fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34a100: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x34a100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x34a104: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x34a104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x34a108: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x34A108u;
    {
        const bool branch_taken_0x34a108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A108u;
        // 0x34a10c: 0x7c640010  sq          $a0, 0x10($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a108) {
            ctx->pc = 0x34A168u;
            goto label_34a168;
        }
    }
    ctx->pc = 0x34A110u;
label_34a110:
    // 0x34a110: 0x46092832  c.eq.s      $f5, $f9
    ctx->pc = 0x34a110u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a114: 0x0  nop
    ctx->pc = 0x34a114u;
    // NOP
    // 0x34a118: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x34A118u;
    {
        const bool branch_taken_0x34a118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a118) {
            ctx->pc = 0x34A11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A118u;
            // 0x34a11c: 0xc7a20058  lwc1        $f2, 0x58($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A17Cu;
            goto label_34a17c;
        }
    }
    ctx->pc = 0x34A120u;
    // 0x34a120: 0x46003947  neg.s       $f5, $f7
    ctx->pc = 0x34a120u;
    ctx->f[5] = FPU_NEG_S(ctx->f[7]);
    // 0x34a124: 0x46062802  mul.s       $f0, $f5, $f6
    ctx->pc = 0x34a124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x34a128: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x34a128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34a12c: 0x46090036  c.le.s      $f0, $f9
    ctx->pc = 0x34a12cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a130: 0x0  nop
    ctx->pc = 0x34a130u;
    // NOP
    // 0x34a134: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x34A134u;
    {
        const bool branch_taken_0x34a134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A134u;
        // 0x34a138: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a134) {
            ctx->pc = 0x34A178u;
            goto label_34a178;
        }
    }
    ctx->pc = 0x34A13Cu;
    // 0x34a13c: 0x460a2802  mul.s       $f0, $f5, $f10
    ctx->pc = 0x34a13cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x34a140: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x34a140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x34a144: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x34a144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x34a148: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x34a148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x34a14c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34a14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34a150: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x34a150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x34a154: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x34a154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34a158: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x34a158u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x5116C0u));
    // 0x34a15c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x34a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x34a160: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x34a160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x34a164: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x34a164u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
label_34a168:
    // 0x34a168: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x34a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34a16c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34a170: 0x1046ff8a  beq         $v0, $a2, . + 4 + (-0x76 << 2)
    ctx->pc = 0x34A170u;
    {
        const bool branch_taken_0x34a170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x34A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A170u;
        // 0x34a174: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a170) {
            ctx->pc = 0x349F9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349f9c;
        }
    }
    ctx->pc = 0x34A178u;
label_34a178:
    // 0x34a178: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x34a178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34a17c:
    // 0x34a17c: 0xc7a60038  lwc1        $f6, 0x38($sp)
    ctx->pc = 0x34a17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x34a180: 0x46021000  add.s       $f0, $f2, $f2
    ctx->pc = 0x34a180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x34a184: 0x46143042  mul.s       $f1, $f6, $f20
    ctx->pc = 0x34a184u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x34a188: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x34a188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34a18c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x34a18cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x34a190: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x34a190u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x34a194: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x34a194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x34a198: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x34a198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x34a19c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x34a19cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x34a1a0: 0x46040941  sub.s       $f5, $f1, $f4
    ctx->pc = 0x34a1a0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x34a1a4: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x34a1a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a1a8: 0x0  nop
    ctx->pc = 0x34a1a8u;
    // NOP
    // 0x34a1ac: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x34A1ACu;
    {
        const bool branch_taken_0x34a1ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a1ac) {
            ctx->pc = 0x34A23Cu;
            goto label_34a23c;
        }
    }
    ctx->pc = 0x34A1B4u;
    // 0x34a1b4: 0x46003847  neg.s       $f1, $f7
    ctx->pc = 0x34a1b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[7]);
    // 0x34a1b8: 0x0  nop
    ctx->pc = 0x34a1b8u;
    // NOP
    // 0x34a1bc: 0x0  nop
    ctx->pc = 0x34a1bcu;
    // NOP
    // 0x34a1c0: 0x46050204  c1          0x50204
    ctx->pc = 0x34a1c0u;
    ctx->f[8] = FPU_SQRT_S(ctx->f[0]);
    // 0x34a1c4: 0x46080941  sub.s       $f5, $f1, $f8
    ctx->pc = 0x34a1c4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x34a1c8: 0x46062802  mul.s       $f0, $f5, $f6
    ctx->pc = 0x34a1c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x34a1cc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x34a1ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34a1d0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x34a1d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a1d4: 0x0  nop
    ctx->pc = 0x34a1d4u;
    // NOP
    // 0x34a1d8: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x34A1D8u;
    {
        const bool branch_taken_0x34a1d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A1D8u;
        // 0x34a1dc: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a1d8) {
            ctx->pc = 0x34A224u;
            goto label_34a224;
        }
    }
    ctx->pc = 0x34A1E0u;
    // 0x34a1e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x34a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34a1e4: 0x460a2802  mul.s       $f0, $f5, $f10
    ctx->pc = 0x34a1e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x34a1e8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x34a1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x34a1ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34a1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34a1f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34a1f4: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x34a1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x34a1f8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x34a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x34a1fc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x34a1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x34a200: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x34a200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34a204: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x34a204u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34a208: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x34a208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x34a20c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x34a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x34a210: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x34a210u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x34a214: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x34a214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34a218: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34a218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34a21c: 0x1046ff5f  beq         $v0, $a2, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x34A21Cu;
    {
        const bool branch_taken_0x34a21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x34A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A21Cu;
        // 0x34a220: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a21c) {
            ctx->pc = 0x349F9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349f9c;
        }
    }
    ctx->pc = 0x34A224u;
label_34a224:
    // 0x34a224: 0x46081940  add.s       $f5, $f3, $f8
    ctx->pc = 0x34a224u;
    ctx->f[5] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x34a228: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x34a228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a22c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x34a22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a230: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x34a230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x34a234: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34A234u;
    {
        const bool branch_taken_0x34a234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A234u;
        // 0x34a238: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a234) {
            ctx->pc = 0x34A258u;
            goto label_34a258;
        }
    }
    ctx->pc = 0x34A23Cu;
label_34a23c:
    // 0x34a23c: 0x46032832  c.eq.s      $f5, $f3
    ctx->pc = 0x34a23cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a240: 0x0  nop
    ctx->pc = 0x34a240u;
    // NOP
    // 0x34a244: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x34A244u;
    {
        const bool branch_taken_0x34a244 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a244) {
            ctx->pc = 0x34A248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A244u;
            // 0x34a248: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A2ACu;
            goto label_34a2ac;
        }
    }
    ctx->pc = 0x34A24Cu;
    // 0x34a24c: 0x46003947  neg.s       $f5, $f7
    ctx->pc = 0x34a24cu;
    ctx->f[5] = FPU_NEG_S(ctx->f[7]);
    // 0x34a250: 0x46062802  mul.s       $f0, $f5, $f6
    ctx->pc = 0x34a250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x34a254: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x34a254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_34a258:
    // 0x34a258: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x34a258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a25c: 0x0  nop
    ctx->pc = 0x34a25cu;
    // NOP
    // 0x34a260: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x34A260u;
    {
        const bool branch_taken_0x34a260 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A260u;
        // 0x34a264: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a260) {
            ctx->pc = 0x34A2A8u;
            goto label_34a2a8;
        }
    }
    ctx->pc = 0x34A268u;
    // 0x34a268: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x34a268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34a26c: 0x460a2802  mul.s       $f0, $f5, $f10
    ctx->pc = 0x34a26cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x34a270: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34a270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34a274: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34a274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34a278: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x34a278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x34a27c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x34a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x34a280: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x34a280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x34a284: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x34a284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34a288: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x34a288u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34a28c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x34a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x34a290: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x34a290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x34a294: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x34a294u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x34a298: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x34a298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34a29c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34a2a0: 0x1046ff3e  beq         $v0, $a2, . + 4 + (-0xC2 << 2)
    ctx->pc = 0x34A2A0u;
    {
        const bool branch_taken_0x34a2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x34A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A2A0u;
        // 0x34a2a4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a2a0) {
            ctx->pc = 0x349F9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349f9c;
        }
    }
    ctx->pc = 0x34A2A8u;
label_34a2a8:
    // 0x34a2a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x34a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_34a2ac:
    // 0x34a2ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x34a2acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_34a2b0:
    // 0x34a2b0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x34a2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x34a2b4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x34a2b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x34a2b8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x34a2b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x34a2bc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x34a2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x34a2c0: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x34a2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34a2c4: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x34a2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34a2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x34A2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A2C8u;
        // 0x34a2cc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A2D0u;
}
