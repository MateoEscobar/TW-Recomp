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

// Function: sub_00336308
// Address: 0x336308 - 0x3363b0
void sub_00336308_0x336308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336308_0x336308");
#endif

    ctx->pc = 0x336308u;

    // 0x336308: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x336308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33630c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33630cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x336310: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x336310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x336314: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x336314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336318: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x336318u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33631c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x33631cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x336320: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x336320u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x336324: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x336324u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x336328: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x336328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33632c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x33632cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x336330: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x336330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x336334: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x336334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x336338: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x336338u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x33633c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33633cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x336340: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x336340u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x336344: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x336344u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x336348: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x336348u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33634c: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x33634cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x336350: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x336350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x336354: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x336354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x336358: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x336358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33635c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x33635cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x336360: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x336360u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x336364: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x336364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x336368: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x336368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33636c: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x33636cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x336370: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x336370u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x336374: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x336374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x336378: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x336378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33637c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x33637cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x336380: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x336380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x336384: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x336384u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x336388: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x336388u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33638c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x33638cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x336390: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x336390u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x336394: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x336394u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x336398: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x336398u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x33639c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x33639cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3363a0: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3363a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3363a4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3363a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3363a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3363A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3363ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3363A8u;
        // 0x3363ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3363A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3363B0u;
}
