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

// Function: sub_00175C58
// Address: 0x175c58 - 0x176290
void sub_00175C58_0x175c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175C58_0x175c58");
#endif

    switch (ctx->pc) {
        case 0x175d00u: goto label_175d00;
        case 0x175d0cu: goto label_175d0c;
        case 0x175de4u: goto label_175de4;
        case 0x175df0u: goto label_175df0;
        case 0x175f84u: goto label_175f84;
        case 0x175f90u: goto label_175f90;
        case 0x175fe4u: goto label_175fe4;
        case 0x175ff0u: goto label_175ff0;
        case 0x1760f4u: goto label_1760f4;
        case 0x176100u: goto label_176100;
        case 0x17615cu: goto label_17615c;
        case 0x176168u: goto label_176168;
        default: break;
    }

    ctx->pc = 0x175c58u;

    // 0x175c58: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x175c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x175c5c: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x175c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
    // 0x175c60: 0x342104f3  ori         $at, $at, 0x4F3
    ctx->pc = 0x175c60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1267);
    // 0x175c64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x175c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175c68: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x175c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x175c6c: 0x3c01bf35  lui         $at, 0xBF35
    ctx->pc = 0x175c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48949 << 16));
    // 0x175c70: 0x342104f3  ori         $at, $at, 0x4F3
    ctx->pc = 0x175c70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1267);
    // 0x175c74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x175c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175c78: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x175c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175c7c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x175c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x175c80: 0xe7b900d8  swc1        $f25, 0xD8($sp)
    ctx->pc = 0x175c80u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x175c84: 0x46016832  c.eq.s      $f13, $f1
    ctx->pc = 0x175c84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175c88: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x175c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x175c8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x175c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c90: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x175c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x175c94: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x175c94u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
    // 0x175c98: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x175c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x175c9c: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x175c9cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x175ca0: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x175ca0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x175ca4: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x175ca4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x175ca8: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x175ca8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x175cac: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x175cacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x175cb0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x175cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x175cb4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x175cb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x175cb8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x175cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x175cbc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x175cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x175cc0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x175cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x175cc4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x175cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x175cc8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x175cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x175ccc: 0xe65902a0  swc1        $f25, 0x2A0($s2)
    ctx->pc = 0x175cccu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 672), bits); }
    // 0x175cd0: 0x45000076  bc1f        . + 4 + (0x76 << 2)
    ctx->pc = 0x175CD0u;
    {
        const bool branch_taken_0x175cd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x175CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CD0u;
        // 0x175cd4: 0xe64d02a4  swc1        $f13, 0x2A4($s2) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 676), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x175cd0) {
            ctx->pc = 0x175EACu;
            goto label_175eac;
        }
    }
    ctx->pc = 0x175CD8u;
    // 0x175cd8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x175cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x175cdc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x175cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x175ce0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x175ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x175ce4: 0x26311720  addiu       $s1, $s1, 0x1720
    ctx->pc = 0x175ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5920));
    // 0x175ce8: 0x26500050  addiu       $s0, $s2, 0x50
    ctx->pc = 0x175ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x175cec: 0x4616cd02  mul.s       $f20, $f25, $f22
    ctx->pc = 0x175cecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[25], ctx->f[22]);
    // 0x175cf0: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x175cf0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511720u));
    // 0x175cf4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x175cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x175cf8: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x175CF8u;
    SET_GPR_U32(ctx, 31, 0x175D00u);
    ctx->pc = 0x175CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175CF8u;
    // 0x175cfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x175CF8u, 0x175D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D00u;
label_175d00:
    // 0x175d00: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x175d00u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x175d04: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x175D04u;
    SET_GPR_U32(ctx, 31, 0x175D0Cu);
    ctx->pc = 0x175D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D04u;
    // 0x175d08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x175D04u, 0x175D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D0Cu;
label_175d0c:
    // 0x175d0c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x175d0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175d10: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x175d10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x175d14: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x175d14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x175d18: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x175d18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x175d1c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x175d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x175d20: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x175d20u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x175d24: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x175d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x175d28: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x175d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x175d2c: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x175d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x175d30: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x175d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x175d34: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x175d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175d38: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x175d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x175d3c: 0xe6420050  swc1        $f2, 0x50($s2)
    ctx->pc = 0x175d3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x175d40: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x175d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x175d44: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x175d44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x175d48: 0x7a420050  lq          $v0, 0x50($s2)
    ctx->pc = 0x175d48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x175d4c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x175d4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175d50: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x175d50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x175d54: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x175d54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x175d58: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x175d58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x175d5c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x175d5cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x175d60: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x175d60u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x175d64: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x175d64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x175d68: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x175d68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x175d6c: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x175d6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x175d70: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x175d70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x175d74: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x175d74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x175d78: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x175d78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x175d7c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x175d7cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x175d80: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x175d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x175d84: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x175d84u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
    // 0x175d88: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x175d88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175d8c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x175d8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x175d90: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x175d90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x175d94: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x175d94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x175d98: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x175d98u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x175d9c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x175d9cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x175da0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x175da0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x175da4: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x175da4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x175da8: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x175da8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x175dac: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x175dacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x175db0: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x175db0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x175db4: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x175db4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x175db8: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x175db8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x175dbc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x175dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x175dc0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x175dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x175dc4: 0x26500060  addiu       $s0, $s2, 0x60
    ctx->pc = 0x175dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x175dc8: 0x7e430050  sq          $v1, 0x50($s2)
    ctx->pc = 0x175dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 3));
    // 0x175dcc: 0x4614cd02  mul.s       $f20, $f25, $f20
    ctx->pc = 0x175dccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[25], ctx->f[20]);
    // 0x175dd0: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x175dd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175dd4: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x175dd4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x175dd8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x175dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x175ddc: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x175DDCu;
    SET_GPR_U32(ctx, 31, 0x175DE4u);
    ctx->pc = 0x175DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175DDCu;
    // 0x175de0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x175DDCu, 0x175DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175DE4u;
label_175de4:
    // 0x175de4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x175de4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x175de8: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x175DE8u;
    SET_GPR_U32(ctx, 31, 0x175DF0u);
    ctx->pc = 0x175DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175DE8u;
    // 0x175dec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x175DE8u, 0x175DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175DF0u;
label_175df0:
    // 0x175df0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x175df0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175df4: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x175df4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x175df8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x175df8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x175dfc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x175dfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x175e00: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x175e00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x175e04: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x175e04u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x175e08: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x175e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x175e0c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x175e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x175e10: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x175e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x175e14: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x175e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x175e18: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x175e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175e1c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x175e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x175e20: 0xe6420060  swc1        $f2, 0x60($s2)
    ctx->pc = 0x175e20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x175e24: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x175e24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x175e28: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x175e28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x175e2c: 0x7a430060  lq          $v1, 0x60($s2)
    ctx->pc = 0x175e2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x175e30: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x175e30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175e34: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x175e34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x175e38: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x175e38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x175e3c: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x175e3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x175e40: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x175e40u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x175e44: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x175e44u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x175e48: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x175e48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x175e4c: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x175e4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x175e50: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x175e50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x175e54: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x175e54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x175e58: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x175e58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x175e5c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x175e5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x175e60: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x175e60u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x175e64: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x175e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x175e68: 0x7e430060  sq          $v1, 0x60($s2)
    ctx->pc = 0x175e68u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 3));
    // 0x175e6c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x175e6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175e70: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x175e70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x175e74: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x175e74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x175e78: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x175e78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x175e7c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x175e7cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x175e80: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x175e80u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x175e84: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x175e84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x175e88: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x175e88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x175e8c: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x175e8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x175e90: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x175e90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x175e94: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x175e94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x175e98: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x175e98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x175e9c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x175e9cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x175ea0: 0x7e420060  sq          $v0, 0x60($s2)
    ctx->pc = 0x175ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 2));
    // 0x175ea4: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x175EA4u;
    {
        const bool branch_taken_0x175ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EA4u;
        // 0x175ea8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ea4) {
            ctx->pc = 0x17625Cu;
            goto label_17625c;
        }
    }
    ctx->pc = 0x175EACu;
label_175eac:
    // 0x175eac: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x175eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x175eb0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x175eb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x175eb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x175eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x175eb8: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x175eb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x175ebc: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x175ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x175ec0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x175ec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x175ec4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x175ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175ec8: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x175ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175ecc: 0x0  nop
    ctx->pc = 0x175eccu;
    // NOP
    // 0x175ed0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x175ED0u;
    {
        const bool branch_taken_0x175ed0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x175ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175ED0u;
        // 0x175ed4: 0x4600a602  mul.s       $f24, $f20, $f0 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ed0) {
            ctx->pc = 0x175F08u;
            goto label_175f08;
        }
    }
    ctx->pc = 0x175ED8u;
    // 0x175ed8: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x175ed8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x175edc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x175edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x175ee0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x175ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x175ee4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x175ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175ee8: 0x46146841  sub.s       $f1, $f13, $f20
    ctx->pc = 0x175ee8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[20]);
    // 0x175eec: 0x3c013d71  lui         $at, 0x3D71
    ctx->pc = 0x175eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15729 << 16));
    // 0x175ef0: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x175ef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
    // 0x175ef4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x175ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175ef8: 0x46000e02  mul.s       $f24, $f1, $f0
    ctx->pc = 0x175ef8u;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x175efc: 0x4602c628  max.s       $f24, $f24, $f2
    ctx->pc = 0x175efcu;
    ctx->f[24] = std::max(ctx->f[24], ctx->f[2]);
    // 0x175f00: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x175F00u;
    {
        const bool branch_taken_0x175f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175f00) {
            ctx->pc = 0x175F5Cu;
            goto label_175f5c;
        }
    }
    ctx->pc = 0x175F08u;
label_175f08:
    // 0x175f08: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x175f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
    // 0x175f0c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x175f0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x175f10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x175f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175f14: 0x0  nop
    ctx->pc = 0x175f14u;
    // NOP
    // 0x175f18: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x175f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175f1c: 0x0  nop
    ctx->pc = 0x175f1cu;
    // NOP
    // 0x175f20: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x175F20u;
    {
        const bool branch_taken_0x175f20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175f20) {
            ctx->pc = 0x175F5Cu;
            goto label_175f5c;
        }
    }
    ctx->pc = 0x175F28u;
    // 0x175f28: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x175f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x175f2c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x175f2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x175f30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x175f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175f34: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x175f34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x175f38: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x175f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x175f3c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x175f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x175f40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x175f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175f44: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x175f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x175f48: 0x3c013d71  lui         $at, 0x3D71
    ctx->pc = 0x175f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15729 << 16));
    // 0x175f4c: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x175f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
    // 0x175f50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x175f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x175f54: 0x46020602  mul.s       $f24, $f0, $f2
    ctx->pc = 0x175f54u;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x175f58: 0x4601c629  min.s       $f24, $f24, $f1
    ctx->pc = 0x175f58u;
    ctx->f[24] = std::min(ctx->f[24], ctx->f[1]);
label_175f5c:
    // 0x175f5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x175f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x175f60: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x175f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x175f64: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x175f64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x175f68: 0x26101740  addiu       $s0, $s0, 0x1740
    ctx->pc = 0x175f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x175f6c: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x175f6cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x175f70: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x175f70u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511740u));
    // 0x175f74: 0x4616cdc2  mul.s       $f23, $f25, $f22
    ctx->pc = 0x175f74u;
    ctx->f[23] = FPU_MUL_S(ctx->f[25], ctx->f[22]);
    // 0x175f78: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x175f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x175f7c: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x175F7Cu;
    SET_GPR_U32(ctx, 31, 0x175F84u);
    ctx->pc = 0x175F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175F7Cu;
    // 0x175f80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x175F7Cu, 0x175F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175F84u;
label_175f84:
    // 0x175f84: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x175f84u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x175f88: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x175F88u;
    SET_GPR_U32(ctx, 31, 0x175F90u);
    ctx->pc = 0x175F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175F88u;
    // 0x175f8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x175F88u, 0x175F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175F90u;
label_175f90:
    // 0x175f90: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x175f90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175f94: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x175f94u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x175f98: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x175f98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x175f9c: 0x26311720  addiu       $s1, $s1, 0x1720
    ctx->pc = 0x175f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5920));
    // 0x175fa0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x175fa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x175fa4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x175fa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x175fa8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x175fa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x175fac: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x175facu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x175fb0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x175fb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x175fb4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x175fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x175fb8: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x175fb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175fbc: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x175fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175fc0: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x175fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x175fc4: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x175fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x175fc8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x175fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x175fcc: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x175fccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x175fd0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x175fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x175fd4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x175fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x175fd8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x175fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x175fdc: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x175FDCu;
    SET_GPR_U32(ctx, 31, 0x175FE4u);
    ctx->pc = 0x175FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175FDCu;
    // 0x175fe0: 0xe7a30038  swc1        $f3, 0x38($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x175FDCu, 0x175FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175FE4u;
label_175fe4:
    // 0x175fe4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x175fe4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x175fe8: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x175FE8u;
    SET_GPR_U32(ctx, 31, 0x175FF0u);
    ctx->pc = 0x175FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175FE8u;
    // 0x175fec: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x175FE8u, 0x175FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175FF0u;
label_175ff0:
    // 0x175ff0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x175ff0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175ff4: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x175ff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x175ff8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x175ff8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x175ffc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x175ffcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x176000: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x176000u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x176004: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x176004u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x176008: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x176008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x17600c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x17600cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x176010: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x176010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x176014: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x176014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176018: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x176018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17601c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x17601cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x176020: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x176020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x176024: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x176024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x176028: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x176028u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17602c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x17602cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176030: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x176030u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176034: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x176034u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x176038: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x176038u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17603c: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x17603cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176040: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x176040u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x176044: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x176044u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x176048: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x176048u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17604c: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x17604cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x176050: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x176050u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176054: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x176054u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176058: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x176058u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17605c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x17605cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176060: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x176060u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x176064: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x176064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x176068: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x176068u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
    // 0x17606c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x17606cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176070: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x176070u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x176074: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x176074u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x176078: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x176078u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17607c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x17607cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x176080: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x176080u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x176084: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x176084u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176088: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x176088u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x17608c: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x17608cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176090: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x176090u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176094: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x176094u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176098: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x176098u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17609c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x17609cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1760a0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1760a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x1760a4: 0x7e430050  sq          $v1, 0x50($s2)
    ctx->pc = 0x1760a4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 3));
    // 0x1760a8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1760a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1760ac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1760acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1760b0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1760b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1760b4: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1760b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1760b8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1760b8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1760bc: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x1760bcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1760c0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1760c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1760c4: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x1760c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1760c8: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x1760c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1760cc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1760ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1760d0: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x1760d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1760d4: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x1760d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1760d8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1760d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1760dc: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x1760dcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
    // 0x1760e0: 0x4616c502  mul.s       $f20, $f24, $f22
    ctx->pc = 0x1760e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[24], ctx->f[22]);
    // 0x1760e4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1760e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1760e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1760e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1760ec: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x1760ECu;
    SET_GPR_U32(ctx, 31, 0x1760F4u);
    ctx->pc = 0x1760F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760ECu;
    // 0x1760f0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1760ECu, 0x1760F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760F4u;
label_1760f4:
    // 0x1760f4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1760f4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1760f8: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x1760F8u;
    SET_GPR_U32(ctx, 31, 0x176100u);
    ctx->pc = 0x1760FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760F8u;
    // 0x1760fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1760F8u, 0x176100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176100u;
label_176100:
    // 0x176100: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x176100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x176104: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x176104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x176108: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x176108u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17610c: 0x4614cd02  mul.s       $f20, $f25, $f20
    ctx->pc = 0x17610cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[25], ctx->f[20]);
    // 0x176110: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x176110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x176114: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x176114u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x176118: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x176118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17611c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x17611cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x176120: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x176120u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x176124: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x176124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x176128: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x176128u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x17612c: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x17612cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x176130: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x176130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176134: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x176134u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x176138: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x176138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17613c: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x17613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x176140: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x176140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x176144: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x176144u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x176148: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x176148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x17614c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x17614cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x176150: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x176150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x176154: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x176154u;
    SET_GPR_U32(ctx, 31, 0x17615Cu);
    ctx->pc = 0x176158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176154u;
    // 0x176158: 0xe7a30038  swc1        $f3, 0x38($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x176154u, 0x17615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17615Cu;
label_17615c:
    // 0x17615c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x17615cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x176160: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x176160u;
    SET_GPR_U32(ctx, 31, 0x176168u);
    ctx->pc = 0x176164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176160u;
    // 0x176164: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x176160u, 0x176168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176168u;
label_176168:
    // 0x176168: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x176168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17616c: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x17616cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x176170: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x176170u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x176174: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x176174u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x176178: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x176178u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17617c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x17617cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x176180: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x176180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x176184: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x176184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x176188: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x176188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x17618c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x17618cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176190: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x176190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176194: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x176194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x176198: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x176198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x17619c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x17619cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1761a0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1761a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1761a4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1761a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1761a8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1761a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1761ac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1761acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1761b0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1761b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1761b4: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1761b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1761b8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1761b8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1761bc: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x1761bcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1761c0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1761c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1761c4: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x1761c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1761c8: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x1761c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1761cc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1761ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1761d0: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x1761d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1761d4: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x1761d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1761d8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1761d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1761dc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1761dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1761e0: 0x7e420060  sq          $v0, 0x60($s2)
    ctx->pc = 0x1761e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 2));
    // 0x1761e4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x1761e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1761e8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1761e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1761ec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1761ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1761f0: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1761f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1761f4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1761f4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1761f8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x1761f8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1761fc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1761fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176200: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x176200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x176204: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x176204u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176208: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x176208u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17620c: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x17620cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176210: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x176210u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176214: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x176214u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x176218: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x176218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x17621c: 0x7e430060  sq          $v1, 0x60($s2)
    ctx->pc = 0x17621cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 3));
    // 0x176220: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x176220u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176224: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x176224u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x176228: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x176228u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17622c: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x17622cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176230: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x176230u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x176234: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x176234u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x176238: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x176238u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17623c: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x17623cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x176240: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x176240u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176244: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x176244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176248: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x176248u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17624c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x17624cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176250: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x176250u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x176254: 0x7e420060  sq          $v0, 0x60($s2)
    ctx->pc = 0x176254u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 2));
    // 0x176258: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x176258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_17625c:
    // 0x17625c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x17625cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x176260: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x176260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x176264: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x176264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x176268: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x176268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17626c: 0xc7b900d8  lwc1        $f25, 0xD8($sp)
    ctx->pc = 0x17626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x176270: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x176270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x176274: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x176274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x176278: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x176278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17627c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x17627cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x176280: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x176280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x176284: 0x3e00008  jr          $ra
    ctx->pc = 0x176284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176284u;
        // 0x176288: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17628Cu;
    // 0x17628c: 0x0  nop
    ctx->pc = 0x17628cu;
    // NOP
    ctx->pc = 0x176290u;
}
