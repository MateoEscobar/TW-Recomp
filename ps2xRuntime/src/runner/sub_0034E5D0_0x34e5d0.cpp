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

// Function: sub_0034E5D0
// Address: 0x34e5d0 - 0x34e840
void sub_0034E5D0_0x34e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E5D0_0x34e5d0");
#endif

    switch (ctx->pc) {
        case 0x34e828u: goto label_34e828;
        default: break;
    }

    ctx->pc = 0x34e5d0u;

    // 0x34e5d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x34e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x34e5d4: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x34e5d4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5d8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x34e5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x34e5dc: 0xe1100  sll         $v0, $t6, 4
    ctx->pc = 0x34e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x34e5e0: 0x457821  addu        $t7, $v0, $a1
    ctx->pc = 0x34e5e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34e5e4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x34e5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5e8: 0x79ed0000  lq          $t5, 0x0($t7)
    ctx->pc = 0x34e5e8u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x34e5ec: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x34e5ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x34e5f0: 0x78cc0000  lq          $t4, 0x0($a2)
    ctx->pc = 0x34e5f0u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34e5f4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x34e5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5f8: 0x48ad0800  qmtc2.ni    $t5, $vf1
    ctx->pc = 0x34e5f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 13));
    // 0x34e5fc: 0x48ac1000  qmtc2.ni    $t4, $vf2
    ctx->pc = 0x34e5fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
    // 0x34e600: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34e600u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34e604: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34e604u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34e608: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34e608u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34e60c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34e60cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e610: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34e610u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e614: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e618: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e61c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e61cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e620: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x34e620u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e624: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x34e624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x34e628: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34e628u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e62c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x34e62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x34e630: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34e630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e634: 0x0  nop
    ctx->pc = 0x34e634u;
    // NOP
    // 0x34e638: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x34E638u;
    {
        const bool branch_taken_0x34e638 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E638u;
        // 0x34e63c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e638) {
            ctx->pc = 0x34E64Cu;
            goto label_34e64c;
        }
    }
    ctx->pc = 0x34E640u;
    // 0x34e640: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x34e640u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x34e644: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x34E644u;
    {
        const bool branch_taken_0x34e644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E644u;
        // 0x34e648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e644) {
            ctx->pc = 0x34E828u;
            goto label_34e828;
        }
    }
    ctx->pc = 0x34E64Cu;
label_34e64c:
    // 0x34e64c: 0x79470000  lq          $a3, 0x0($t2)
    ctx->pc = 0x34e64cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34e650: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x34e650u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x34e654: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34e654u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e658: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e658u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e65c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e65cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e660: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e664: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x34e664u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e668: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x34e668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34e66c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34e66cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e670: 0x0  nop
    ctx->pc = 0x34e670u;
    // NOP
    // 0x34e674: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34e674u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e678: 0x0  nop
    ctx->pc = 0x34e678u;
    // NOP
    // 0x34e67c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x34E67Cu;
    {
        const bool branch_taken_0x34e67c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E67Cu;
        // 0x34e680: 0x7fa70010  sq          $a3, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e67c) {
            ctx->pc = 0x34E68Cu;
            goto label_34e68c;
        }
    }
    ctx->pc = 0x34E684u;
    // 0x34e684: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x34E684u;
    {
        const bool branch_taken_0x34e684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E684u;
        // 0x34e688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e684) {
            ctx->pc = 0x34E828u;
            goto label_34e828;
        }
    }
    ctx->pc = 0x34E68Cu;
label_34e68c:
    // 0x34e68c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x34e68cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34e690: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34e690u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34e694: 0x48ad1000  qmtc2.ni    $t5, $vf2
    ctx->pc = 0x34e694u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 13));
    // 0x34e698: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e698u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e69c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e69cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e6a0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e6a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e6a4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34e6a4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e6a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34e6a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34e6ac: 0x48ac1000  qmtc2.ni    $t4, $vf2
    ctx->pc = 0x34e6acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
    // 0x34e6b0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e6b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e6b4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e6b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e6b8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e6b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e6bc: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x34e6bcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e6c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34e6c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e6c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34e6c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34e6c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34e6c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34e6cc: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x34e6ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x34e6d0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e6d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e6d4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e6d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e6d8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e6d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e6dc: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34e6dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e6e0: 0x79040000  lq          $a0, 0x0($t0)
    ctx->pc = 0x34e6e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34e6e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34e6e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34e6e8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34e6e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34e6ec: 0x48ad1000  qmtc2.ni    $t5, $vf2
    ctx->pc = 0x34e6ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 13));
    // 0x34e6f0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e6f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e6f4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e6f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e6f8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e6f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e6fc: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34e6fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e700: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x34e700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34e704: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x34e704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34e708: 0x0  nop
    ctx->pc = 0x34e708u;
    // NOP
    // 0x34e70c: 0x0  nop
    ctx->pc = 0x34e70cu;
    // NOP
    // 0x34e710: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x34e710u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x34e714: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x34e714u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x34e718: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x34e718u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x34e71c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34e71cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e720: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34e720u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34e724: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x34e724u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34e728: 0x48ac0800  qmtc2.ni    $t4, $vf1
    ctx->pc = 0x34e728u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
    // 0x34e72c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34e72cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34e730: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34e730u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34e734: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34e734u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34e738: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34e738u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34e73c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x34e73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x34e740: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34e740u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34e744: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34e744u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e748: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e748u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e74c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e74cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e750: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e754: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x34e754u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e758: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x34e758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x34e75c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x34e75cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e760: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x34e760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x34e764: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x34e764u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e768: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x34e768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x34e76c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x34e76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x34e770: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x34E770u;
    {
        const bool branch_taken_0x34e770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E770u;
        // 0x34e774: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e770) {
            ctx->pc = 0x34E7C8u;
            goto label_34e7c8;
        }
    }
    ctx->pc = 0x34E778u;
    // 0x34e778: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x34e778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34e77c: 0x25c40001  addiu       $a0, $t6, 0x1
    ctx->pc = 0x34e77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x34e780: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x34e780u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34e784: 0x7fad0030  sq          $t5, 0x30($sp)
    ctx->pc = 0x34e784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 13));
    // 0x34e788: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34E788u;
    {
        const bool branch_taken_0x34e788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e788) {
            ctx->pc = 0x34E78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E788u;
            // 0x34e78c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E790u;
            goto label_34e790;
        }
    }
    ctx->pc = 0x34E790u;
label_34e790:
    // 0x34e790: 0x1810  mfhi        $v1
    ctx->pc = 0x34e790u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x34e794: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x34e794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x34e798: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x34e798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x34e79c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x34e79cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34e7a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34e7a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34e7a4: 0x48ad1000  qmtc2.ni    $t5, $vf2
    ctx->pc = 0x34e7a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 13));
    // 0x34e7a8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34e7a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34e7ac: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34e7acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34e7b0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x34e7b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34e7b4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x34e7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x34e7b8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x34e7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x34e7bc: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x34e7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x34e7c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x34E7C0u;
    {
        const bool branch_taken_0x34e7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E7C0u;
        // 0x34e7c4: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e7c0) {
            ctx->pc = 0x34E80Cu;
            goto label_34e80c;
        }
    }
    ctx->pc = 0x34E7C8u;
label_34e7c8:
    // 0x34e7c8: 0x51c00002  beql        $t6, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x34E7C8u;
    {
        const bool branch_taken_0x34e7c8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e7c8) {
            ctx->pc = 0x34E7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E7C8u;
            // 0x34e7cc: 0x78a20020  lq          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E7D4u;
            goto label_34e7d4;
        }
    }
    ctx->pc = 0x34E7D0u;
    // 0x34e7d0: 0x79e2fff0  lq          $v0, -0x10($t7)
    ctx->pc = 0x34e7d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 15), 4294967280)));
label_34e7d4:
    // 0x34e7d4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x34e7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x34e7d8: 0xe1100  sll         $v0, $t6, 4
    ctx->pc = 0x34e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x34e7dc: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x34e7dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34e7e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34e7e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x34e7e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34e7e8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34e7e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e7ec: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34e7ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34e7f0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34e7f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34e7f4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34e7f4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34e7f8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34e7f8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34e7fc: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x34e7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x34e800: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x34e800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x34e804: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x34e804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x34e808: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x34e808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_34e80c:
    // 0x34e80c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x34e80cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e810: 0x8fa90090  lw          $t1, 0x90($sp)
    ctx->pc = 0x34e810u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x34e814: 0x8faa0098  lw          $t2, 0x98($sp)
    ctx->pc = 0x34e814u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34e818: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x34e818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e81c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x34e81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34e820: 0xc0d38ee  jal         func_34E3B8
    ctx->pc = 0x34E820u;
    SET_GPR_U32(ctx, 31, 0x34E828u);
    ctx->pc = 0x34E824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E820u;
    // 0x34e824: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E3B8u, 0x34E820u, 0x34E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E828u;
label_34e828:
    // 0x34e828: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x34e828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x34e82c: 0x3e00008  jr          $ra
    ctx->pc = 0x34E82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E82Cu;
        // 0x34e830: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E834u;
    // 0x34e834: 0x0  nop
    ctx->pc = 0x34e834u;
    // NOP
    // 0x34e838: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34e838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34e83c: 0x0  nop
    ctx->pc = 0x34e83cu;
    // NOP
    ctx->pc = 0x34e840u;
}
