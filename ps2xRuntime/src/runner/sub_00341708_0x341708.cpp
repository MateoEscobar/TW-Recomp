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

// Function: sub_00341708
// Address: 0x341708 - 0x3417c0
void sub_00341708_0x341708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341708_0x341708");
#endif

    ctx->pc = 0x341708u;

    // 0x341708: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x341708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34170c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34170cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x341710: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x341710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x341714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x341714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341718: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x341718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x34171c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x34171cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x341720: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x341720u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x341724: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x341724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x341728: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x341728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34172c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x34172cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x341730: 0x460d2940  add.s       $f5, $f5, $f13
    ctx->pc = 0x341730u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[13]);
    // 0x341734: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x341734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341738: 0x460d0841  sub.s       $f1, $f1, $f13
    ctx->pc = 0x341738u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x34173c: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x34173cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341740: 0x460d2101  sub.s       $f4, $f4, $f13
    ctx->pc = 0x341740u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[13]);
    // 0x341744: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x341744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341748: 0x460c1081  sub.s       $f2, $f2, $f12
    ctx->pc = 0x341748u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x34174c: 0x460d18c0  add.s       $f3, $f3, $f13
    ctx->pc = 0x34174cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
    // 0x341750: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x341750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x341754: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x341754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x341758: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x341758u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34175c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x34175cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x341760: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x341760u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x341764: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x341764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x341768: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x341768u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x34176c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x34176cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341770: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x341770u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341774: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x341774u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x341778: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x341778u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34177c: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34177cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x341780: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x341780u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x341784: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x341784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x341788: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x341788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34178c: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x34178cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
    // 0x341790: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x341790u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x341794: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x341794u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x341798: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x341798u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34179c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x34179cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3417a0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3417a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x3417a4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3417a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3417a8: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x3417a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x3417ac: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3417acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3417b0: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x3417b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x3417b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3417B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3417B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417B4u;
        // 0x3417b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3417B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3417BCu;
    // 0x3417bc: 0x0  nop
    ctx->pc = 0x3417bcu;
    // NOP
    ctx->pc = 0x3417c0u;
}
