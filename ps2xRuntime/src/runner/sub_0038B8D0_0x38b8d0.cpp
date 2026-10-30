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

// Function: sub_0038B8D0
// Address: 0x38b8d0 - 0x38bb48
void sub_0038B8D0_0x38b8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B8D0_0x38b8d0");
#endif

    switch (ctx->pc) {
        case 0x38b950u: goto label_38b950;
        case 0x38b958u: goto label_38b958;
        case 0x38ba0cu: goto label_38ba0c;
        case 0x38ba30u: goto label_38ba30;
        case 0x38bac8u: goto label_38bac8;
        case 0x38baecu: goto label_38baec;
        default: break;
    }

    ctx->pc = 0x38b8d0u;

    // 0x38b8d0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x38b8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x38b8d4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x38b8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x38b8d8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x38b8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x38b8dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38b8dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b8e0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x38b8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x38b8e4: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x38b8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x38b8e8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x38b8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x38b8ec: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x38b8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x38b8f0: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x38b8f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x38b8f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38b8f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b8f8: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x38b8f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x38b8fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x38b8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38b900: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x38b900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x38b904: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x38b904u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b908: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x38b908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x38b90c: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x38b90cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x38b910: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x38b910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x38b914: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x38b914u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x38b918: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x38b918u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x38b91c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x38b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x38b920: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x38b920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x38b924: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x38b924u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38b928: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x38b928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x38b92c: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x38b92cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x38b930: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38b930u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38b934: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x38b934u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38b938: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x38b938u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x38b93c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x38b93cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x38b940: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x38b940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x38b944: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x38b944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x38b948: 0xc0cd940  jal         func_336500
    ctx->pc = 0x38B948u;
    SET_GPR_U32(ctx, 31, 0x38B950u);
    ctx->pc = 0x38B94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B948u;
    // 0x38b94c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x38B948u, 0x38B950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B950u;
label_38b950:
    // 0x38b950: 0xc0e3400  jal         func_38D000
    ctx->pc = 0x38B950u;
    SET_GPR_U32(ctx, 31, 0x38B958u);
    ctx->pc = 0x38B954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B950u;
    // 0x38b954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D000u, 0x38B950u, 0x38B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B958u;
label_38b958:
    // 0x38b958: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x38b958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x38b95c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38b95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38b960: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x38b960u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38b964: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x38b964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x38b968: 0x820501b0  lb          $a1, 0x1B0($s0)
    ctx->pc = 0x38b968u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x38b96c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38b96cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38b970: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38b970u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38b974: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x38b974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x38b978: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x38b978u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x38b97c: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x38b97cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38b980: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x38b980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x38b984: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x38b984u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x38b988: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x38b988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38b98c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x38b98cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x38b990: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38b990u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38b994: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x38b994u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38b998: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38b998u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38b99c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x38b99cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x38b9a0: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x38b9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x38b9a4: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x38b9a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x38b9a8: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x38b9a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38b9ac: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x38b9acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x38b9b0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38b9b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38b9b4: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x38b9b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38b9b8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38b9b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38b9bc: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x38b9bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x38b9c0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x38b9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x38b9c4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x38B9C4u;
    {
        const bool branch_taken_0x38b9c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9C4u;
        // 0x38b9c8: 0x7fa60070  sq          $a2, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b9c4) {
            ctx->pc = 0x38B9E4u;
            goto label_38b9e4;
        }
    }
    ctx->pc = 0x38B9CCu;
    // 0x38b9cc: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x38b9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38b9d0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x38b9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38b9d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38b9d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38b9d8: 0x0  nop
    ctx->pc = 0x38b9d8u;
    // NOP
    // 0x38b9dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x38B9DCu;
    {
        const bool branch_taken_0x38b9dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38b9dc) {
            ctx->pc = 0x38B9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B9DCu;
            // 0x38b9e0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B9E4u;
            goto label_38b9e4;
        }
    }
    ctx->pc = 0x38B9E4u;
label_38b9e4:
    // 0x38b9e4: 0x8e6511e0  lw          $a1, 0x11E0($s3)
    ctx->pc = 0x38b9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4576)));
    // 0x38b9e8: 0x241105f0  addiu       $s1, $zero, 0x5F0
    ctx->pc = 0x38b9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
    // 0x38b9ec: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x38b9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x38b9f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38b9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b9f4: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x38b9f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x38b9f8: 0x2610e514  addiu       $s0, $s0, -0x1AEC
    ctx->pc = 0x38b9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960404));
    // 0x38b9fc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x38b9fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x38ba00: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x38ba00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38ba04: 0xc0e27ea  jal         func_389FA8
    ctx->pc = 0x38BA04u;
    SET_GPR_U32(ctx, 31, 0x38BA0Cu);
    ctx->pc = 0x38BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BA04u;
    // 0x38ba08: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389FA8u, 0x38BA04u, 0x38BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BA0Cu;
label_38ba0c:
    // 0x38ba0c: 0x8e6511e0  lw          $a1, 0x11E0($s3)
    ctx->pc = 0x38ba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4576)));
    // 0x38ba10: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x38ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x38ba14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x38ba14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ba18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38ba18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ba1c: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x38ba1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x38ba20: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x38ba20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38ba24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38ba24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x38ba28: 0xc0e27d0  jal         func_389F40
    ctx->pc = 0x38BA28u;
    SET_GPR_U32(ctx, 31, 0x38BA30u);
    ctx->pc = 0x38BA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BA28u;
    // 0x38ba2c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389F40u, 0x38BA28u, 0x38BA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BA30u;
label_38ba30:
    // 0x38ba30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x38ba30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ba34: 0x8e6411e0  lw          $a0, 0x11E0($s3)
    ctx->pc = 0x38ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4576)));
    // 0x38ba38: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x38ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x38ba3c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x38ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x38ba40: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x38ba40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x38ba44: 0x918818  mult        $s1, $a0, $s1
    ctx->pc = 0x38ba44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x38ba48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38ba4c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x38ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x38ba50: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x38ba50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x38ba54: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x38BA54u;
    {
        const bool branch_taken_0x38ba54 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA54u;
        // 0x38ba58: 0x8e140020  lw          $s4, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ba54) {
            ctx->pc = 0x38BA70u;
            goto label_38ba70;
        }
    }
    ctx->pc = 0x38BA5Cu;
    // 0x38ba5c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x38BA5Cu;
    {
        const bool branch_taken_0x38ba5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA5Cu;
        // 0x38ba60: 0x2cc20005  sltiu       $v0, $a2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ba5c) {
            ctx->pc = 0x38BA70u;
            goto label_38ba70;
        }
    }
    ctx->pc = 0x38BA64u;
    // 0x38ba64: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x38BA64u;
    {
        const bool branch_taken_0x38ba64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA64u;
        // 0x38ba68: 0x241105f0  addiu       $s1, $zero, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ba64) {
            ctx->pc = 0x38BAA8u;
            goto label_38baa8;
        }
    }
    ctx->pc = 0x38BA6Cu;
    // 0x38ba6c: 0x8e6411e0  lw          $a0, 0x11E0($s3)
    ctx->pc = 0x38ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4576)));
label_38ba70:
    // 0x38ba70: 0x240205f0  addiu       $v0, $zero, 0x5F0
    ctx->pc = 0x38ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
    // 0x38ba74: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x38ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x38ba78: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x38ba78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x38ba7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x38ba7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x38ba80: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x38ba80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x38ba84: 0x2463e4a0  addiu       $v1, $v1, -0x1B60
    ctx->pc = 0x38ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960288));
    // 0x38ba88: 0x4600a045  abs.s       $f1, $f20
    ctx->pc = 0x38ba88u;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x38ba8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38ba90: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x38ba90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38ba94: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x38ba94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x38ba98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38ba98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38ba9c: 0x0  nop
    ctx->pc = 0x38ba9cu;
    // NOP
    // 0x38baa0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x38BAA0u;
    {
        const bool branch_taken_0x38baa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BAA0u;
        // 0x38baa4: 0x241105f0  addiu       $s1, $zero, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38baa0) {
            ctx->pc = 0x38BB10u;
            goto label_38bb10;
        }
    }
    ctx->pc = 0x38BAA8u;
label_38baa8:
    // 0x38baa8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x38baa8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x38baac: 0x912818  mult        $a1, $a0, $s1
    ctx->pc = 0x38baacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x38bab0: 0x2610e530  addiu       $s0, $s0, -0x1AD0
    ctx->pc = 0x38bab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960432));
    // 0x38bab4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x38bab4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x38bab8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38bab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38babc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38babcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38bac0: 0xc0e27ea  jal         func_389FA8
    ctx->pc = 0x38BAC0u;
    SET_GPR_U32(ctx, 31, 0x38BAC8u);
    ctx->pc = 0x38BAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BAC0u;
    // 0x38bac4: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389FA8u, 0x38BAC0u, 0x38BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BAC8u;
label_38bac8:
    // 0x38bac8: 0x8e6511e0  lw          $a1, 0x11E0($s3)
    ctx->pc = 0x38bac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4576)));
    // 0x38bacc: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x38baccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x38bad0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x38bad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bad4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38bad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bad8: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x38bad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x38badc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38badcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x38bae0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x38bae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38bae4: 0xc0e27d0  jal         func_389F40
    ctx->pc = 0x38BAE4u;
    SET_GPR_U32(ctx, 31, 0x38BAECu);
    ctx->pc = 0x38BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BAE4u;
    // 0x38bae8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389F40u, 0x38BAE4u, 0x38BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BAECu;
label_38baec:
    // 0x38baec: 0x8e6411e0  lw          $a0, 0x11E0($s3)
    ctx->pc = 0x38baecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4576)));
    // 0x38baf0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x38baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x38baf4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x38baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x38baf8: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x38baf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x38bafc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38bb00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38bb04: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x38bb04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x38bb08: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x38bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x38bb0c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x38bb0cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_38bb10:
    // 0x38bb10: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x38bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x38bb14: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x38bb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x38bb18: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x38bb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x38bb1c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x38bb1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x38bb20: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x38bb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x38bb24: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x38bb24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x38bb28: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x38bb28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x38bb2c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x38bb2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x38bb30: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x38bb30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38bb34: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x38bb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38bb38: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x38bb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x38bb3c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x38bb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x38bb40: 0x3e00008  jr          $ra
    ctx->pc = 0x38BB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB40u;
        // 0x38bb44: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BB48u;
}
