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

// Function: sub_003498C0
// Address: 0x3498c0 - 0x349a60
void sub_003498C0_0x3498c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003498C0_0x3498c0");
#endif

    ctx->pc = 0x3498c0u;

    // 0x3498c0: 0x78ca0000  lq          $t2, 0x0($a2)
    ctx->pc = 0x3498c0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3498c4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3498c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3498c8: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x3498c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3498cc: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x3498ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x3498d0: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x3498d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x3498d4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3498d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3498d8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3498d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3498dc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3498dcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3498e0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3498e0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3498e4: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x3498e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3498e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3498e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3498ec: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3498ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3498f0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3498f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3498f4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3498f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3498f8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3498f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3498fc: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x3498fcu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x349900: 0x7faa0000  sq          $t2, 0x0($sp)
    ctx->pc = 0x349900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 10));
    // 0x349904: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x349904u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x349908: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x349908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x34990c: 0x460010c6  mov.s       $f3, $f2
    ctx->pc = 0x34990cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[2]);
    // 0x349910: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x349910u;
    {
        const bool branch_taken_0x349910 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x349914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349910u;
        // 0x349914: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349910) {
            ctx->pc = 0x349930u;
            goto label_349930;
        }
    }
    ctx->pc = 0x349918u;
    // 0x349918: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x349918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34991c: 0x0  nop
    ctx->pc = 0x34991cu;
    // NOP
    // 0x349920: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x349920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349924: 0x0  nop
    ctx->pc = 0x349924u;
    // NOP
    // 0x349928: 0x4501004b  bc1t        . + 4 + (0x4B << 2)
    ctx->pc = 0x349928u;
    {
        const bool branch_taken_0x349928 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349928u;
        // 0x34992c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349928) {
            ctx->pc = 0x349A58u;
            goto label_349a58;
        }
    }
    ctx->pc = 0x349930u;
label_349930:
    // 0x349930: 0x460d6000  add.s       $f0, $f12, $f13
    ctx->pc = 0x349930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x349934: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x349934u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349938: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x349938u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34993c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34993cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x349940: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x349940u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349944: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x349944u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349948: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x349948u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34994c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34994cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x349950: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x349950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x349954: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x349954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x349958: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x349958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x34995c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34995cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x349960: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x349960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349964: 0x0  nop
    ctx->pc = 0x349964u;
    // NOP
    // 0x349968: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x349968u;
    {
        const bool branch_taken_0x349968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349968u;
        // 0x34996c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349968) {
            ctx->pc = 0x349980u;
            goto label_349980;
        }
    }
    ctx->pc = 0x349970u;
    // 0x349970: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x349970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x349974: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x349974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349978: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x349978u;
    {
        const bool branch_taken_0x349978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349978u;
        // 0x34997c: 0xe4840000  swc1        $f4, 0x0($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349978) {
            ctx->pc = 0x349A54u;
            goto label_349a54;
        }
    }
    ctx->pc = 0x349980u;
label_349980:
    // 0x349980: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x349980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x349984: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x349984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349988: 0x46031880  add.s       $f2, $f3, $f3
    ctx->pc = 0x349988u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x34998c: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x34998cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x349990: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x349990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x349994: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x349994u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x349998: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x349998u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34999c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34999cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3499a0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3499a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3499a4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3499a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3499a8: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x3499a8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3499ac: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x3499acu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3499b0: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x3499b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3499b4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3499b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3499b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3499b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3499bc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x3499bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3499c0: 0x0  nop
    ctx->pc = 0x3499c0u;
    // NOP
    // 0x3499c4: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x3499C4u;
    {
        const bool branch_taken_0x3499c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3499c4) {
            ctx->pc = 0x349A28u;
            goto label_349a28;
        }
    }
    ctx->pc = 0x3499CCu;
    // 0x3499cc: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x3499ccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x3499d0: 0x0  nop
    ctx->pc = 0x3499d0u;
    // NOP
    // 0x3499d4: 0x0  nop
    ctx->pc = 0x3499d4u;
    // NOP
    // 0x3499d8: 0x46000084  c1          0x84
    ctx->pc = 0x3499d8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x3499dc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3499dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x3499e0: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x3499e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3499e4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3499e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3499e8: 0x0  nop
    ctx->pc = 0x3499e8u;
    // NOP
    // 0x3499ec: 0x0  nop
    ctx->pc = 0x3499ecu;
    // NOP
    // 0x3499f0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x3499f0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x3499f4: 0x0  nop
    ctx->pc = 0x3499f4u;
    // NOP
    // 0x3499f8: 0x0  nop
    ctx->pc = 0x3499f8u;
    // NOP
    // 0x3499fc: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x3499fcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x349a00: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x349a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x349a04: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x349a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x349a08: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x349a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349a0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x349a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349a10: 0x0  nop
    ctx->pc = 0x349a10u;
    // NOP
    // 0x349a14: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x349A14u;
    {
        const bool branch_taken_0x349a14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x349A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A14u;
        // 0x349a18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349a14) {
            ctx->pc = 0x349A58u;
            goto label_349a58;
        }
    }
    ctx->pc = 0x349A1Cu;
    // 0x349a1c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x349a1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x349a20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x349A20u;
    {
        const bool branch_taken_0x349a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A20u;
        // 0x349a24: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349a20) {
            ctx->pc = 0x349A58u;
            goto label_349a58;
        }
    }
    ctx->pc = 0x349A28u;
label_349a28:
    // 0x349a28: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x349a28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349a2c: 0x0  nop
    ctx->pc = 0x349a2cu;
    // NOP
    // 0x349a30: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x349A30u;
    {
        const bool branch_taken_0x349a30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x349a30) {
            ctx->pc = 0x349A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349A30u;
            // 0x349a34: 0x46001007  neg.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x349A40u;
            goto label_349a40;
        }
    }
    ctx->pc = 0x349A38u;
    // 0x349a38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x349A38u;
    {
        const bool branch_taken_0x349a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A38u;
        // 0x349a3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349a38) {
            ctx->pc = 0x349A58u;
            goto label_349a58;
        }
    }
    ctx->pc = 0x349A40u;
label_349a40:
    // 0x349a40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x349a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349a44: 0x46031840  add.s       $f1, $f3, $f3
    ctx->pc = 0x349a44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x349a48: 0x0  nop
    ctx->pc = 0x349a48u;
    // NOP
    // 0x349a4c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x349a4cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x349a50: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x349a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_349a54:
    // 0x349a54: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x349a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_349a58:
    // 0x349a58: 0x3e00008  jr          $ra
    ctx->pc = 0x349A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A58u;
        // 0x349a5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349A60u;
}
