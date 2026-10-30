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

// Function: sub_003363B0
// Address: 0x3363b0 - 0x336458
void sub_003363B0_0x3363b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003363B0_0x3363b0");
#endif

    ctx->pc = 0x3363b0u;

    // 0x3363b0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3363b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3363b4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3363b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3363b8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3363b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3363bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3363bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3363c0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3363c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3363c4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x3363c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3363c8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3363c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3363cc: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x3363ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3363d0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x3363d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3363d4: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x3363d4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3363d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3363d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3363dc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3363dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3363e0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3363e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3363e4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3363e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3363e8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x3363e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3363ec: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x3363ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3363f0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3363f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3363f4: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x3363f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x3363f8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3363f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3363fc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x3363fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x336400: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x336400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x336404: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x336404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x336408: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x336408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33640c: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x33640cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x336410: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x336410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x336414: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x336414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x336418: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x336418u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x33641c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x33641cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x336420: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x336420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x336424: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x336424u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x336428: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x336428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x33642c: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x33642cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x336430: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x336430u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x336434: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x336434u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x336438: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x336438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33643c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x33643cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x336440: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x336440u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x336444: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x336444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x336448: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x336448u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33644c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x33644cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x336450: 0x3e00008  jr          $ra
    ctx->pc = 0x336450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336450u;
        // 0x336454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336458u;
}
