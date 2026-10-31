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

// Function: sub_003430E8
// Address: 0x3430e8 - 0x3434a8
void sub_003430E8_0x3430e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003430E8_0x3430e8");
#endif

    switch (ctx->pc) {
        case 0x343100u: goto label_343100;
        case 0x3433e8u: goto label_3433e8;
        case 0x343448u: goto label_343448;
        default: break;
    }

    ctx->pc = 0x3430e8u;

    // 0x3430e8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3430e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3430ec: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3430ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3430f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3430f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3430f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3430f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3430f8: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x3430f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3430fc: 0x0  nop
    ctx->pc = 0x3430fcu;
    // NOP
label_343100:
    // 0x343100: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x343100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x343104: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x343104u;
    {
        const bool branch_taken_0x343104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343104u;
        // 0x343108: 0xc5200040  lwc1        $f0, 0x40($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x343104) {
            ctx->pc = 0x343144u;
            goto label_343144;
        }
    }
    ctx->pc = 0x34310Cu;
    // 0x34310c: 0x79220050  lq          $v0, 0x50($t1)
    ctx->pc = 0x34310cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x343110: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x343110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x343114: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x343114u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343118: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x343118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34311c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34311cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x343120: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x343120u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x343124: 0x79230080  lq          $v1, 0x80($t1)
    ctx->pc = 0x343124u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 128)));
    // 0x343128: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x343128u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34312c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34312cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343130: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x343130u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x343134: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x343134u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x343138: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x343138u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34313c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x34313Cu;
    {
        const bool branch_taken_0x34313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34313Cu;
        // 0x343140: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34313c) {
            ctx->pc = 0x343178u;
            goto label_343178;
        }
    }
    ctx->pc = 0x343144u;
label_343144:
    // 0x343144: 0x79220050  lq          $v0, 0x50($t1)
    ctx->pc = 0x343144u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x343148: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x343148u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x34314c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34314cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343150: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x343150u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x343154: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x343154u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x343158: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x343158u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34315c: 0x79230080  lq          $v1, 0x80($t1)
    ctx->pc = 0x34315cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 128)));
    // 0x343160: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x343160u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x343164: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x343164u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343168: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x343168u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34316c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34316cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x343170: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x343170u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x343174: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x343174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_343178:
    // 0x343178: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x343178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x34317c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x34317cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x343180: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x343180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x343184: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x343184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x343188: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x343188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x34318c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x34318cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x343190: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x343190u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x343194: 0x29620008  slti        $v0, $t3, 0x8
    ctx->pc = 0x343194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x343198: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x343198u;
    {
        const bool branch_taken_0x343198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343198u;
        // 0x34319c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343198) {
            ctx->pc = 0x343100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343100;
        }
    }
    ctx->pc = 0x3431A0u;
    // 0x3431a0: 0xc5200044  lwc1        $f0, 0x44($t1)
    ctx->pc = 0x3431a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3431a4: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x3431a4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3431a8: 0x79260060  lq          $a2, 0x60($t1)
    ctx->pc = 0x3431a8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x3431ac: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x3431acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3431b0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3431b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3431b4: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x3431b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3431b8: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3431b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3431bc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3431bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3431c0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3431c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3431c4: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x3431c4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3431c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3431c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3431cc: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x3431ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3431d0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3431d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3431d4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3431d4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3431d8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3431d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3431dc: 0x79440010  lq          $a0, 0x10($t2)
    ctx->pc = 0x3431dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x3431e0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3431e0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3431e4: 0x79480040  lq          $t0, 0x40($t2)
    ctx->pc = 0x3431e4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 10), 64)));
    // 0x3431e8: 0xc5200044  lwc1        $f0, 0x44($t1)
    ctx->pc = 0x3431e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3431ec: 0x79250060  lq          $a1, 0x60($t1)
    ctx->pc = 0x3431ecu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x3431f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3431f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3431f4: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x3431f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x3431f8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x3431f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x3431fc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3431fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x343200: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x343200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x343204: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x343204u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x343208: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x343208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x34320c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34320cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x343210: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x343210u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x343214: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x343214u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x343218: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x343218u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34321c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x34321cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x343220: 0x7d440010  sq          $a0, 0x10($t2)
    ctx->pc = 0x343220u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 4));
    // 0x343224: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x343224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x343228: 0xc5200044  lwc1        $f0, 0x44($t1)
    ctx->pc = 0x343228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34322c: 0x79230060  lq          $v1, 0x60($t1)
    ctx->pc = 0x34322cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x343230: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x343230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x343234: 0x79470050  lq          $a3, 0x50($t2)
    ctx->pc = 0x343234u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 10), 80)));
    // 0x343238: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x343238u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34323c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34323cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343240: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x343240u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x343244: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x343244u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x343248: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x343248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x34324c: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x34324cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x343250: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x343250u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x343254: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x343254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x343258: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x343258u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34325c: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x34325cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x343260: 0x7d480040  sq          $t0, 0x40($t2)
    ctx->pc = 0x343260u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 64), GPR_VEC(ctx, 8));
    // 0x343264: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x343264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x343268: 0xc5200044  lwc1        $f0, 0x44($t1)
    ctx->pc = 0x343268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34326c: 0x79220060  lq          $v0, 0x60($t1)
    ctx->pc = 0x34326cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x343270: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x343270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x343274: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x343274u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343278: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x343278u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34327c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34327cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x343280: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x343280u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x343284: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x343284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x343288: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x343288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x34328c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x34328cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x343290: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x343290u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343294: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x343294u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x343298: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x343298u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34329c: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x34329cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3432a0: 0x7d470050  sq          $a3, 0x50($t2)
    ctx->pc = 0x3432a0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 80), GPR_VEC(ctx, 7));
    // 0x3432a4: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x3432a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x3432a8: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x3432a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x3432ac: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x3432acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x3432b0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3432b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x3432b4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3432b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3432b8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3432b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x3432bc: 0xc5200044  lwc1        $f0, 0x44($t1)
    ctx->pc = 0x3432bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3432c0: 0x79260060  lq          $a2, 0x60($t1)
    ctx->pc = 0x3432c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x3432c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3432c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3432c8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3432c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x3432cc: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3432ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3432d0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3432d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3432d4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3432d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3432d8: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x3432d8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3432dc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3432dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3432e0: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x3432e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
    // 0x3432e4: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x3432e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x3432e8: 0x79420020  lq          $v0, 0x20($t2)
    ctx->pc = 0x3432e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x3432ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3432ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3432f0: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x3432f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3432f4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3432f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3432f8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3432f8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3432fc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3432fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x343300: 0x79430030  lq          $v1, 0x30($t2)
    ctx->pc = 0x343300u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x343304: 0x7d420020  sq          $v0, 0x20($t2)
    ctx->pc = 0x343304u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 2));
    // 0x343308: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x343308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x34330c: 0xc5200044  lwc1        $f0, 0x44($t1)
    ctx->pc = 0x34330cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x343310: 0x79250060  lq          $a1, 0x60($t1)
    ctx->pc = 0x343310u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x343314: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x343314u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x343318: 0x79470060  lq          $a3, 0x60($t2)
    ctx->pc = 0x343318u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 10), 96)));
    // 0x34331c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x34331cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x343320: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x343320u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x343324: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x343324u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x343328: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x343328u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34332c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x34332cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x343330: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x343330u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x343334: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x343334u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x343338: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x343338u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34333c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34333cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x343340: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x343340u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x343344: 0x7d430030  sq          $v1, 0x30($t2)
    ctx->pc = 0x343344u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 48), GPR_VEC(ctx, 3));
    // 0x343348: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x343348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x34334c: 0xc5200044  lwc1        $f0, 0x44($t1)
    ctx->pc = 0x34334cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x343350: 0x79240060  lq          $a0, 0x60($t1)
    ctx->pc = 0x343350u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x343354: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x343354u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x343358: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x343358u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34335c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34335cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343360: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x343360u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x343364: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x343364u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x343368: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x343368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x34336c: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x34336cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x343370: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x343370u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x343374: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x343374u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x343378: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x343378u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34337c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34337cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x343380: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x343380u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x343384: 0x7d470060  sq          $a3, 0x60($t2)
    ctx->pc = 0x343384u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 96), GPR_VEC(ctx, 7));
    // 0x343388: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x343388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x34338c: 0xc5200044  lwc1        $f0, 0x44($t1)
    ctx->pc = 0x34338cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x343390: 0x79230060  lq          $v1, 0x60($t1)
    ctx->pc = 0x343390u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x343394: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x343394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x343398: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x343398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x34339c: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x34339cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
    // 0x3433a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3433a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3433a4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3433a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3433a8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3433a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3433ac: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3433acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3433b0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3433b0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3433b4: 0x79420070  lq          $v0, 0x70($t2)
    ctx->pc = 0x3433b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 112)));
    // 0x3433b8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3433b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3433bc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3433bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3433c0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3433c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3433c4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3433c4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3433c8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3433c8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3433cc: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x3433ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x3433d0: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x3433d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x3433d4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3433d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x3433d8: 0x7d420070  sq          $v0, 0x70($t2)
    ctx->pc = 0x3433d8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 112), GPR_VEC(ctx, 2));
    // 0x3433dc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3433dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x3433e0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3433e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3433e4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3433e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3433e8:
    // 0x3433e8: 0xc5200048  lwc1        $f0, 0x48($t1)
    ctx->pc = 0x3433e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3433ec: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3433ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3433f0: 0x79220070  lq          $v0, 0x70($t1)
    ctx->pc = 0x3433f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 112)));
    // 0x3433f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3433f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3433f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3433f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3433fc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3433fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x343400: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x343400u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x343404: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x343404u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x343408: 0x79830000  lq          $v1, 0x0($t4)
    ctx->pc = 0x343408u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x34340c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34340cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x343410: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x343410u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343414: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x343414u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x343418: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x343418u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34341c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34341cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x343420: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x343420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x343424: 0x7d830000  sq          $v1, 0x0($t4)
    ctx->pc = 0x343424u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 3));
    // 0x343428: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x343428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x34342c: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x34342cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x343430: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x343430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x343434: 0x561ffec  bgez        $t3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x343434u;
    {
        const bool branch_taken_0x343434 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x343438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343434u;
        // 0x343438: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343434) {
            ctx->pc = 0x3433E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3433e8;
        }
    }
    ctx->pc = 0x34343Cu;
    // 0x34343c: 0x25450040  addiu       $a1, $t2, 0x40
    ctx->pc = 0x34343cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
    // 0x343440: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x343440u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x343444: 0x0  nop
    ctx->pc = 0x343444u;
    // NOP
label_343448:
    // 0x343448: 0xc5200048  lwc1        $f0, 0x48($t1)
    ctx->pc = 0x343448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34344c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x34344cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x343450: 0x79230070  lq          $v1, 0x70($t1)
    ctx->pc = 0x343450u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 112)));
    // 0x343454: 0x29640008  slti        $a0, $t3, 0x8
    ctx->pc = 0x343454u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x343458: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x343458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x34345c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34345cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x343460: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x343460u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343464: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x343464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x343468: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x343468u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34346c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x34346cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x343470: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x343470u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343474: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x343474u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x343478: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x343478u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34347c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34347cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x343480: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x343480u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x343484: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x343484u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x343488: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x343488u;
    {
        const bool branch_taken_0x343488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x34348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343488u;
        // 0x34348c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343488) {
            ctx->pc = 0x343448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343448;
        }
    }
    ctx->pc = 0x343490u;
    // 0x343490: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x343490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x343494: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x343494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x343498: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x343498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x34349c: 0x3e00008  jr          $ra
    ctx->pc = 0x34349Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3434A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34349Cu;
        // 0x3434a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34349Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3434A4u;
    // 0x3434a4: 0x0  nop
    ctx->pc = 0x3434a4u;
    // NOP
    ctx->pc = 0x3434a8u;
}
