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

// Function: sub_0023F238
// Address: 0x23f238 - 0x23f5e0
void sub_0023F238_0x23f238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F238_0x23f238");
#endif

    switch (ctx->pc) {
        case 0x23f270u: goto label_23f270;
        case 0x23f284u: goto label_23f284;
        case 0x23f34cu: goto label_23f34c;
        case 0x23f418u: goto label_23f418;
        case 0x23f4b0u: goto label_23f4b0;
        case 0x23f4bcu: goto label_23f4bc;
        case 0x23f510u: goto label_23f510;
        default: break;
    }

    ctx->pc = 0x23f238u;

    // 0x23f238: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x23f238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x23f23c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x23f23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x23f240: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x23f240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x23f244: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23f244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f248: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x23f248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x23f24c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x23f24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x23f250: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23f250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f254: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x23f254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x23f258: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23f258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f25c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x23f25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x23f260: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x23f260u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f264: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x23f264u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x23f268: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x23F268u;
    SET_GPR_U32(ctx, 31, 0x23F270u);
    ctx->pc = 0x23F26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F268u;
    // 0x23f26c: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x23F268u, 0x23F270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F270u;
label_23f270:
    // 0x23f270: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23f270u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f274: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x23f274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23f278: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x23f278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x23f27c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x23F27Cu;
    SET_GPR_U32(ctx, 31, 0x23F284u);
    ctx->pc = 0x23F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F27Cu;
    // 0x23f280: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23F27Cu, 0x23F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F284u;
label_23f284:
    // 0x23f284: 0x544000cd  bnel        $v0, $zero, . + 4 + (0xCD << 2)
    ctx->pc = 0x23F284u;
    {
        const bool branch_taken_0x23f284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f284) {
            ctx->pc = 0x23F288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F284u;
            // 0x23f288: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F5BCu;
            goto label_23f5bc;
        }
    }
    ctx->pc = 0x23F28Cu;
    // 0x23f28c: 0x92620461  lbu         $v0, 0x461($s3)
    ctx->pc = 0x23f28cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1121)));
    // 0x23f290: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x23F290u;
    {
        const bool branch_taken_0x23f290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F290u;
        // 0x23f294: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f290) {
            ctx->pc = 0x23F37Cu;
            goto label_23f37c;
        }
    }
    ctx->pc = 0x23F298u;
    // 0x23f298: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x23f298u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x23f29c: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x23f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x23f2a0: 0x7a050000  lq          $a1, 0x0($s0)
    ctx->pc = 0x23f2a0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f2a4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x23f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x23f2a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23f2ac: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x23f2acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x23f2b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23f2b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23f2b4: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x23f2b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x23f2b8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x23f2b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f2bc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x23f2bcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23f2c0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x23f2c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23f2c4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x23f2c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f2c8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x23f2c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x23f2cc: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x23f2ccu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x23f2d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x23f2d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f2d4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x23f2d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23f2d8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x23f2d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x23f2dc: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x23f2dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x23f2e0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x23f2e0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23f2e4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x23f2e4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f2e8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x23f2e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x23f2ec: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x23f2ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x23f2f0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x23f2f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x23f2f4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23f2f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23f2f8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x23f2f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f2fc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x23f2fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f300: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x23f300u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f304: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x23f304u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x23f308: 0x4a0003bf  vwaitq
    ctx->pc = 0x23f308u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x23f30c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x23f30cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f310: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x23f310u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x23f314: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x23f314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x23f318: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23f318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f31c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23f31cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f320: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x23f320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x23f324: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x23f324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f328: 0x0  nop
    ctx->pc = 0x23f328u;
    // NOP
    // 0x23f32c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x23F32Cu;
    {
        const bool branch_taken_0x23f32c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F32Cu;
        // 0x23f330: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f32c) {
            ctx->pc = 0x23F358u;
            goto label_23f358;
        }
    }
    ctx->pc = 0x23F334u;
    // 0x23f334: 0x0  nop
    ctx->pc = 0x23f334u;
    // NOP
    // 0x23f338: 0x0  nop
    ctx->pc = 0x23f338u;
    // NOP
    // 0x23f33c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x23f33cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x23f340: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23f340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23f344: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x23F344u;
    SET_GPR_U32(ctx, 31, 0x23F34Cu);
    ctx->pc = 0x23F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F344u;
    // 0x23f348: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x23F344u, 0x23F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F34Cu;
label_23f34c:
    // 0x23f34c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x23f34cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f350: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x23f350u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x23f354: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x23f354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_23f358:
    // 0x23f358: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x23f358u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23f35c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x23f35cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f360: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23f360u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23f364: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23f364u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23f368: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x23f368u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x23f36c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x23f36cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x23f370: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x23f370u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x23f374: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x23f374u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x23f378: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x23f378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_23f37c:
    // 0x23f37c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23f380: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x23f380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23f384: 0x24421780  addiu       $v0, $v0, 0x1780
    ctx->pc = 0x23f384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6016));
    // 0x23f388: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x23f388u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511780u));
    // 0x23f38c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x23f38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x23f390: 0x92620462  lbu         $v0, 0x462($s3)
    ctx->pc = 0x23f390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1122)));
    // 0x23f394: 0x50400089  beql        $v0, $zero, . + 4 + (0x89 << 2)
    ctx->pc = 0x23F394u;
    {
        const bool branch_taken_0x23f394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f394) {
            ctx->pc = 0x23F398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F394u;
            // 0x23f398: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F5BCu;
            goto label_23f5bc;
        }
    }
    ctx->pc = 0x23F39Cu;
    // 0x23f39c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x23f39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f3a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23f3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23f3a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23f3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23f3a8: 0x0  nop
    ctx->pc = 0x23f3a8u;
    // NOP
    // 0x23f3ac: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x23f3acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f3b0: 0x0  nop
    ctx->pc = 0x23f3b0u;
    // NOP
    // 0x23f3b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x23F3B4u;
    {
        const bool branch_taken_0x23f3b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f3b4) {
            ctx->pc = 0x23F3C4u;
            goto label_23f3c4;
        }
    }
    ctx->pc = 0x23F3BCu;
    // 0x23f3bc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x23F3BCu;
    {
        const bool branch_taken_0x23f3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3BCu;
        // 0x23f3c0: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3bc) {
            ctx->pc = 0x23F42Cu;
            goto label_23f42c;
        }
    }
    ctx->pc = 0x23F3C4u;
label_23f3c4:
    // 0x23f3c4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x23f3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x23f3c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23f3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f3cc: 0x0  nop
    ctx->pc = 0x23f3ccu;
    // NOP
    // 0x23f3d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23f3d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f3d4: 0x0  nop
    ctx->pc = 0x23f3d4u;
    // NOP
    // 0x23f3d8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x23F3D8u;
    {
        const bool branch_taken_0x23f3d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f3d8) {
            ctx->pc = 0x23F3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F3D8u;
            // 0x23f3dc: 0x46010b02  mul.s       $f12, $f1, $f1 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F3F4u;
            goto label_23f3f4;
        }
    }
    ctx->pc = 0x23F3E0u;
    // 0x23f3e0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x23f3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x23f3e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23f3e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23f3e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23f3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23f3ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23F3ECu;
    {
        const bool branch_taken_0x23f3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3ECu;
        // 0x23f3f0: 0x46010d00  add.s       $f20, $f1, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3ec) {
            ctx->pc = 0x23F430u;
            goto label_23f430;
        }
    }
    ctx->pc = 0x23F3F4u;
label_23f3f4:
    // 0x23f3f4: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x23f3f4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x23f3f8: 0x0  nop
    ctx->pc = 0x23f3f8u;
    // NOP
    // 0x23f3fc: 0x0  nop
    ctx->pc = 0x23f3fcu;
    // NOP
    // 0x23f400: 0x460c0304  c1          0xC0304
    ctx->pc = 0x23f400u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x23f404: 0x0  nop
    ctx->pc = 0x23f404u;
    // NOP
    // 0x23f408: 0x0  nop
    ctx->pc = 0x23f408u;
    // NOP
    // 0x23f40c: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x23f40cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
    // 0x23f410: 0xc0cd5a8  jal         func_3356A0
    ctx->pc = 0x23F410u;
    SET_GPR_U32(ctx, 31, 0x23F418u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x23F410u, 0x23F418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F418u;
label_23f418:
    // 0x23f418: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x23f418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x23f41c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23f41cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23f420: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23f420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23f424: 0x0  nop
    ctx->pc = 0x23f424u;
    // NOP
    // 0x23f428: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x23f428u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23f42c:
    // 0x23f42c: 0x46010d00  add.s       $f20, $f1, $f1
    ctx->pc = 0x23f42cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_23f430:
    // 0x23f430: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x23f430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23f434: 0x0  nop
    ctx->pc = 0x23f434u;
    // NOP
    // 0x23f438: 0x4603a032  c.eq.s      $f20, $f3
    ctx->pc = 0x23f438u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f43c: 0x0  nop
    ctx->pc = 0x23f43cu;
    // NOP
    // 0x23f440: 0x4503005e  bc1tl       . + 4 + (0x5E << 2)
    ctx->pc = 0x23F440u;
    {
        const bool branch_taken_0x23f440 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f440) {
            ctx->pc = 0x23F444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F440u;
            // 0x23f444: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F5BCu;
            goto label_23f5bc;
        }
    }
    ctx->pc = 0x23F448u;
    // 0x23f448: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x23f448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    // 0x23f44c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23f44cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23f450: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x23F450u;
    {
        const bool branch_taken_0x23f450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f450) {
            ctx->pc = 0x23F454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F450u;
            // 0x23f454: 0x7a020010  lq          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F4FCu;
            goto label_23f4fc;
        }
    }
    ctx->pc = 0x23F458u;
    // 0x23f458: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23f458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23f45c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x23f45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x23f460: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23f460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23f464: 0xc44002cc  lwc1        $f0, 0x2CC($v0)
    ctx->pc = 0x23f464u;
    { uint32_t bits = FAST_READ32(0x5102CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f468: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x23f468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f46c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x23f46cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23f470: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x23f470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f474: 0x0  nop
    ctx->pc = 0x23f474u;
    // NOP
    // 0x23f478: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x23F478u;
    {
        const bool branch_taken_0x23f478 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F478u;
        // 0x23f47c: 0x4600a042  mul.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f478) {
            ctx->pc = 0x23F48Cu;
            goto label_23f48c;
        }
    }
    ctx->pc = 0x23F480u;
    // 0x23f480: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23f480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23f484: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23F484u;
    {
        const bool branch_taken_0x23f484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F484u;
        // 0x23f488: 0x24421770  addiu       $v0, $v0, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f484) {
            ctx->pc = 0x23F494u;
            goto label_23f494;
        }
    }
    ctx->pc = 0x23F48Cu;
label_23f48c:
    // 0x23f48c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23f490: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x23f490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_23f494:
    // 0x23f494: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x23f494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x23f498: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23f498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23f49c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x23f49cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f4a0: 0x46140d02  mul.s       $f20, $f1, $f20
    ctx->pc = 0x23f4a0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x23f4a4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x23f4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x23f4a8: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x23F4A8u;
    SET_GPR_U32(ctx, 31, 0x23F4B0u);
    ctx->pc = 0x23F4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4A8u;
    // 0x23f4ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x23F4A8u, 0x23F4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4B0u;
label_23f4b0:
    // 0x23f4b0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x23f4b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x23f4b4: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x23F4B4u;
    SET_GPR_U32(ctx, 31, 0x23F4BCu);
    ctx->pc = 0x23F4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4B4u;
    // 0x23f4b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x23F4B4u, 0x23F4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4BCu;
label_23f4bc:
    // 0x23f4bc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x23f4bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f4c0: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x23f4c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23f4c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23f4c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23f4c8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23f4c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23f4cc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23f4ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23f4d0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x23f4d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23f4d4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x23f4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x23f4d8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x23f4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x23f4dc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x23f4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x23f4e0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x23f4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f4e4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x23f4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f4e8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x23f4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23f4ec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x23f4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23f4f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x23f4f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23f4f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23F4F4u;
    {
        const bool branch_taken_0x23f4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4F4u;
        // 0x23f4f8: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4f4) {
            ctx->pc = 0x23F500u;
            goto label_23f500;
        }
    }
    ctx->pc = 0x23F4FCu;
label_23f4fc:
    // 0x23f4fc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x23f4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_23f500:
    // 0x23f500: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x23f500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x23f504: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x23f504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x23f508: 0xc0e409a  jal         func_390268
    ctx->pc = 0x23F508u;
    SET_GPR_U32(ctx, 31, 0x23F510u);
    ctx->pc = 0x23F50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F508u;
    // 0x23f50c: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23F508u, 0x23F510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F510u;
label_23f510:
    // 0x23f510: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x23F510u;
    {
        const bool branch_taken_0x23f510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f510) {
            ctx->pc = 0x23F514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F510u;
            // 0x23f514: 0x7a2200a0  lq          $v0, 0xA0($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F55Cu;
            goto label_23f55c;
        }
    }
    ctx->pc = 0x23F518u;
    // 0x23f518: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x23f518u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23f51c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x23f51cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f520: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23f520u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23f524: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23f524u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23f528: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x23f528u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f52c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x23f52cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23f530: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x23f530u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23f534: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x23f534u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f538: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x23f538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23f53c: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x23f53cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x23f540: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x23f540u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f544: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x23f544u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x23f548: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x23f548u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x23f54c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x23f54cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x23f550: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x23f550u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x23f554: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x23F554u;
    {
        const bool branch_taken_0x23f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F554u;
        // 0x23f558: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f554) {
            ctx->pc = 0x23F5B8u;
            goto label_23f5b8;
        }
    }
    ctx->pc = 0x23F55Cu;
label_23f55c:
    // 0x23f55c: 0x7a2300b0  lq          $v1, 0xB0($s1)
    ctx->pc = 0x23f55cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x23f560: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x23f560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x23f564: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x23f564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x23f568: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x23f568u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f56c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x23f56cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23f570: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x23f570u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x23f574: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x23f574u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f578: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x23f578u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23f57c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x23f57cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23f580: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x23f580u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f584: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x23f584u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23f588: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x23f588u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x23f58c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x23f58cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f590: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x23f590u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x23f594: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x23f594u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x23f598: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x23f598u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x23f59c: 0x7e2300b0  sq          $v1, 0xB0($s1)
    ctx->pc = 0x23f59cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 176), GPR_VEC(ctx, 3));
    // 0x23f5a0: 0x7e2200a0  sq          $v0, 0xA0($s1)
    ctx->pc = 0x23f5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), GPR_VEC(ctx, 2));
    // 0x23f5a4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x23f5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x23f5a8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x23f5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x23f5ac: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x23f5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x23f5b0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x23f5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x23f5b4: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x23f5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_23f5b8:
    // 0x23f5b8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x23f5b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_23f5bc:
    // 0x23f5bc: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x23f5bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23f5c0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x23f5c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23f5c4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x23f5c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23f5c8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x23f5c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23f5cc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x23f5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f5d0: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x23f5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23f5d4: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x23f5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x23F5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5D8u;
        // 0x23f5dc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F5E0u;
}
