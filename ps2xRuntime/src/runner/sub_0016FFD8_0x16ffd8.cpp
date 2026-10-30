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

// Function: sub_0016FFD8
// Address: 0x16ffd8 - 0x170300
void sub_0016FFD8_0x16ffd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FFD8_0x16ffd8");
#endif

    switch (ctx->pc) {
        case 0x170004u: goto label_170004;
        case 0x1700e4u: goto label_1700e4;
        case 0x1701c4u: goto label_1701c4;
        case 0x1701f0u: goto label_1701f0;
        case 0x1702b8u: goto label_1702b8;
        default: break;
    }

    ctx->pc = 0x16ffd8u;

    // 0x16ffd8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x16ffd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x16ffdc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x16ffdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x16ffe0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x16ffe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x16ffe4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16ffe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ffe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16ffe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ffec: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x16ffecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x16fff0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16fff4: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x16fff4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x16fff8: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x16fff8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x16fffc: 0xc0cd940  jal         func_336500
    ctx->pc = 0x16FFFCu;
    SET_GPR_U32(ctx, 31, 0x170004u);
    ctx->pc = 0x170000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FFFCu;
    // 0x170000: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x16FFFCu, 0x170004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170004u;
label_170004:
    // 0x170004: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x170004u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x170008: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x170008u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17000c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17000cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x170010: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x170010u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x170014: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x170014u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170018: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x170018u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17001c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x17001cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170020: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x170020u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x170024: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x170024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x170028: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x170028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17002c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x17002cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170030: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x170030u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x170034: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x170034u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x170038: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x170038u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x17003c: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x17003cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x170040: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x170040u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x170044: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x170044u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x170048: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x170048u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x17004c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x17004cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x170050: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x170050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x170054: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x170054u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x170058: 0x4a0003bf  vwaitq
    ctx->pc = 0x170058u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17005c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x17005cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x170060: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x170060u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x170064: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x170064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x170068: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x170068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17006c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x17006cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x170070: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x170070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x170074: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x170074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
    // 0x170078: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x170078u;
    {
        const bool branch_taken_0x170078 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170078u;
        // 0x17007c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170078) {
            ctx->pc = 0x17008Cu;
            goto label_17008c;
        }
    }
    ctx->pc = 0x170080u;
    // 0x170080: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x170080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x170084: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x170084u;
    {
        const bool branch_taken_0x170084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170084u;
        // 0x170088: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170084) {
            ctx->pc = 0x1700FCu;
            goto label_1700fc;
        }
    }
    ctx->pc = 0x17008Cu;
label_17008c:
    // 0x17008c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x17008cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x170090: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x170090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170094: 0x0  nop
    ctx->pc = 0x170094u;
    // NOP
    // 0x170098: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x170098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17009c: 0x0  nop
    ctx->pc = 0x17009cu;
    // NOP
    // 0x1700a0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1700A0u;
    {
        const bool branch_taken_0x1700a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1700A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1700A0u;
        // 0x1700a4: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1700a0) {
            ctx->pc = 0x1700BCu;
            goto label_1700bc;
        }
    }
    ctx->pc = 0x1700A8u;
    // 0x1700a8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1700a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1700ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1700acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1700b0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1700b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1700b4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1700B4u;
    {
        const bool branch_taken_0x1700b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1700b4) {
            ctx->pc = 0x1700FCu;
            goto label_1700fc;
        }
    }
    ctx->pc = 0x1700BCu;
label_1700bc:
    // 0x1700bc: 0x46010b02  mul.s       $f12, $f1, $f1
    ctx->pc = 0x1700bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1700c0: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x1700c0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x1700c4: 0x0  nop
    ctx->pc = 0x1700c4u;
    // NOP
    // 0x1700c8: 0x0  nop
    ctx->pc = 0x1700c8u;
    // NOP
    // 0x1700cc: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1700ccu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1700d0: 0x0  nop
    ctx->pc = 0x1700d0u;
    // NOP
    // 0x1700d4: 0x0  nop
    ctx->pc = 0x1700d4u;
    // NOP
    // 0x1700d8: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x1700d8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
    // 0x1700dc: 0xc0cd5a8  jal         func_3356A0
    ctx->pc = 0x1700DCu;
    SET_GPR_U32(ctx, 31, 0x1700E4u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x1700DCu, 0x1700E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1700E4u;
label_1700e4:
    // 0x1700e4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1700e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1700e8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1700e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1700ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1700ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1700f0: 0x0  nop
    ctx->pc = 0x1700f0u;
    // NOP
    // 0x1700f4: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x1700f4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1700f8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1700f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1700fc:
    // 0x1700fc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1700fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x170100: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x170100u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x170104: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x170104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170108: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x170108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17010c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x17010cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170110: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x170110u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x170114: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x170114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x170118: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x170118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x17011c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17011cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x170120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170124: 0x0  nop
    ctx->pc = 0x170124u;
    // NOP
    // 0x170128: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x170128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17012c: 0x0  nop
    ctx->pc = 0x17012cu;
    // NOP
    // 0x170130: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x170130u;
    {
        const bool branch_taken_0x170130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x170134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170130u;
        // 0x170134: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170130) {
            ctx->pc = 0x170140u;
            goto label_170140;
        }
    }
    ctx->pc = 0x170138u;
    // 0x170138: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x170138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x17013c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x17013cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_170140:
    // 0x170140: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x170140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x170144: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x170144u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x170148: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x170148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17014c: 0x0  nop
    ctx->pc = 0x17014cu;
    // NOP
    // 0x170150: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x170150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170154: 0x0  nop
    ctx->pc = 0x170154u;
    // NOP
    // 0x170158: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x170158u;
    {
        const bool branch_taken_0x170158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x170158) {
            ctx->pc = 0x170174u;
            goto label_170174;
        }
    }
    ctx->pc = 0x170160u;
    // 0x170160: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x170160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x170164: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x170164u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x170168: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x170168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17016c: 0x0  nop
    ctx->pc = 0x17016cu;
    // NOP
    // 0x170170: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x170170u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_170174:
    // 0x170174: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x170174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x170178: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x170178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x17017c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17017cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170180: 0x0  nop
    ctx->pc = 0x170180u;
    // NOP
    // 0x170184: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x170184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170188: 0x0  nop
    ctx->pc = 0x170188u;
    // NOP
    // 0x17018c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x17018Cu;
    {
        const bool branch_taken_0x17018c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17018c) {
            ctx->pc = 0x170190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17018Cu;
            // 0x170190: 0x4600ad07  neg.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1701ACu;
            goto label_1701ac;
        }
    }
    ctx->pc = 0x170194u;
    // 0x170194: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x170194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x170198: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x170198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x17019c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17019cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1701a0: 0x0  nop
    ctx->pc = 0x1701a0u;
    // NOP
    // 0x1701a4: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x1701a4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1701a8: 0x4600ad07  neg.s       $f20, $f21
    ctx->pc = 0x1701a8u;
    ctx->f[20] = FPU_NEG_S(ctx->f[21]);
label_1701ac:
    // 0x1701ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1701acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1701b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1701b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1701b4: 0x0  nop
    ctx->pc = 0x1701b4u;
    // NOP
    // 0x1701b8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1701b8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1701bc: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x1701BCu;
    SET_GPR_U32(ctx, 31, 0x1701C4u);
    ctx->pc = 0x1701C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1701BCu;
    // 0x1701c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1701BCu, 0x1701C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1701C4u;
label_1701c4:
    // 0x1701c4: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1701c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1701c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1701c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1701cc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1701ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1701d0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1701d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1701d4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1701d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1701d8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1701d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1701dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1701dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1701e0: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x1701e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1701e4: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1701e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1701e8: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x1701E8u;
    SET_GPR_U32(ctx, 31, 0x1701F0u);
    ctx->pc = 0x1701ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1701E8u;
    // 0x1701ec: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1701E8u, 0x1701F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1701F0u;
label_1701f0:
    // 0x1701f0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1701f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1701f4: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x1701f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1701f8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1701f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1701fc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1701fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x170200: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x170200u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x170204: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x170204u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170208: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x170208u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x17020c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x17020cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x170210: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x170210u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170214: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x170214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x170218: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x170218u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17021c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x17021cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170220: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x170220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x170224: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x170224u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x170228: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x170228u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x17022c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17022cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x170230: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x170230u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x170234: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x170234u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170238: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x170238u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17023c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x17023cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170240: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x170240u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170244: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x170244u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x170248: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x170248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17024c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17024cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170250: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x170250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x170254: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x170254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170258: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x170258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x17025c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x17025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x170260: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x170260u;
    {
        const bool branch_taken_0x170260 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x170264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170260u;
        // 0x170264: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170260) {
            ctx->pc = 0x170290u;
            goto label_170290;
        }
    }
    ctx->pc = 0x170268u;
    // 0x170268: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x170268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x17026c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17026cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170270: 0x0  nop
    ctx->pc = 0x170270u;
    // NOP
    // 0x170274: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x170274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x170278: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x170278u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17027c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17027cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x170280: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x170280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x170284: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x170284u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x170288: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x170288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x17028c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x17028cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_170290:
    // 0x170290: 0x3c0140a2  lui         $at, 0x40A2
    ctx->pc = 0x170290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16546 << 16));
    // 0x170294: 0x3421f983  ori         $at, $at, 0xF983
    ctx->pc = 0x170294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63875);
    // 0x170298: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x170298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17029c: 0x4600ab05  abs.s       $f12, $f21
    ctx->pc = 0x17029cu;
    ctx->f[12] = FPU_ABS_S(ctx->f[21]);
    // 0x1702a0: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x1702a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1702a4: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1702a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1702a8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1702a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1702ac: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x1702acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x1702b0: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x1702B0u;
    SET_GPR_U32(ctx, 31, 0x1702B8u);
    ctx->pc = 0x1702B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1702B0u;
    // 0x1702b4: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x1702B0u, 0x1702B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702B8u;
label_1702b8:
    // 0x1702b8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1702b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1702bc: 0xa6220060  sh          $v0, 0x60($s1)
    ctx->pc = 0x1702bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x1702c0: 0x2c630009  sltiu       $v1, $v1, 0x9
    ctx->pc = 0x1702c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1702c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1702C4u;
    {
        const bool branch_taken_0x1702c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1702C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702C4u;
        // 0x1702c8: 0xa6220062  sh          $v0, 0x62($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 98), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702c4) {
            ctx->pc = 0x1702D4u;
            goto label_1702d4;
        }
    }
    ctx->pc = 0x1702CCu;
    // 0x1702cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1702ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1702d0: 0xa6220060  sh          $v0, 0x60($s1)
    ctx->pc = 0x1702d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 2));
label_1702d4:
    // 0x1702d4: 0x9222006d  lbu         $v0, 0x6D($s1)
    ctx->pc = 0x1702d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 109)));
    // 0x1702d8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1702d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1702dc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1702dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1702e0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1702e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1702e4: 0xa222006d  sb          $v0, 0x6D($s1)
    ctx->pc = 0x1702e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 109), (uint8_t)GPR_U32(ctx, 2));
    // 0x1702e8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1702e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1702ec: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1702ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1702f0: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1702f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1702f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1702F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1702F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702F4u;
        // 0x1702f8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1702F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1702FCu;
    // 0x1702fc: 0x0  nop
    ctx->pc = 0x1702fcu;
    // NOP
    ctx->pc = 0x170300u;
}
