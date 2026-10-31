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

// Function: sub_00341660
// Address: 0x341660 - 0x341708
void sub_00341660_0x341660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341660_0x341660");
#endif

    ctx->pc = 0x341660u;

    // 0x341660: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x341660u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x341664: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x341664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x341668: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x341668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34166c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x34166cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x341670: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x341670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x341674: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x341674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x341678: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x341678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34167c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x34167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341680: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x341680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x341684: 0x460c2940  add.s       $f5, $f5, $f12
    ctx->pc = 0x341684u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[12]);
    // 0x341688: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x341688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34168c: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x34168cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x341690: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x341690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341694: 0x460c2101  sub.s       $f4, $f4, $f12
    ctx->pc = 0x341694u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    // 0x341698: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x341698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34169c: 0x460c1081  sub.s       $f2, $f2, $f12
    ctx->pc = 0x34169cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x3416a0: 0x460c18c0  add.s       $f3, $f3, $f12
    ctx->pc = 0x3416a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x3416a4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3416a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3416a8: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x3416a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x3416ac: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x3416acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3416b0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x3416b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3416b4: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x3416b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3416b8: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x3416b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3416bc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3416bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3416c0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3416c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3416c4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3416c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3416c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3416c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3416cc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3416ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3416d0: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3416d0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3416d4: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x3416d4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3416d8: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x3416d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
    // 0x3416dc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3416dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3416e0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3416e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3416e4: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x3416e4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3416e8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3416e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3416ec: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3416ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x3416f0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3416f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3416f4: 0xe486001c  swc1        $f6, 0x1C($a0)
    ctx->pc = 0x3416f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x3416f8: 0xe486000c  swc1        $f6, 0xC($a0)
    ctx->pc = 0x3416f8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3416fc: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x3416fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x341700: 0x3e00008  jr          $ra
    ctx->pc = 0x341700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341700u;
        // 0x341704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341708u;
}
