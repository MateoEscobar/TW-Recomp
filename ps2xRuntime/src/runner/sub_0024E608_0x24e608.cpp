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

// Function: sub_0024E608
// Address: 0x24e608 - 0x24e938
void sub_0024E608_0x24e608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E608_0x24e608");
#endif

    switch (ctx->pc) {
        case 0x24e648u: goto label_24e648;
        case 0x24e654u: goto label_24e654;
        case 0x24e740u: goto label_24e740;
        case 0x24e7b0u: goto label_24e7b0;
        case 0x24e8a8u: goto label_24e8a8;
        case 0x24e8e0u: goto label_24e8e0;
        case 0x24e924u: goto label_24e924;
        default: break;
    }

    ctx->pc = 0x24e608u;

    // 0x24e608: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x24e608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x24e60c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x24e60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x24e610: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x24e610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x24e614: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24e614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e618: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x24e618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x24e61c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24e61cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e620: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x24e620u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x24e624: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x24e624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e628: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x24e628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x24e62c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24e62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24e630: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x24e630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24e634: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x24e634u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24e638: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x24e638u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24e63c: 0x1a20001d  blez        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x24E63Cu;
    {
        const bool branch_taken_0x24e63c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x24E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E63Cu;
        // 0x24e640: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e63c) {
            ctx->pc = 0x24E6B4u;
            goto label_24e6b4;
        }
    }
    ctx->pc = 0x24E644u;
    // 0x24e644: 0x0  nop
    ctx->pc = 0x24e644u;
    // NOP
label_24e648:
    // 0x24e648: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24e648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e64c: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x24E64Cu;
    SET_GPR_U32(ctx, 31, 0x24E654u);
    ctx->pc = 0x24E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E64Cu;
    // 0x24e650: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x24E64Cu, 0x24E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E654u;
label_24e654:
    // 0x24e654: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24e654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24e658: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24e658u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e65c: 0x211202a  slt         $a0, $s0, $s1
    ctx->pc = 0x24e65cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x24e660: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x24e660u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e664: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x24e664u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x24e668: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x24e668u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x24e66c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x24e66cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24e670: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x24e670u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x24e674: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x24e674u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x24e678: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x24e678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x24e67c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x24e67cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x24e680: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x24e680u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24e684: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x24e684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24e688: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x24e688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24e68c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x24e68cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x24e690: 0x4a0003bf  vwaitq
    ctx->pc = 0x24e690u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x24e694: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x24e694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24e698: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x24e698u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x24e69c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x24e69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x24e6a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x24e6a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e6a4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x24e6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x24e6a8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x24e6a8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x24e6ac: 0x1480ffe6  bnez        $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x24E6ACu;
    {
        const bool branch_taken_0x24e6ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E6ACu;
        // 0x24e6b0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e6ac) {
            ctx->pc = 0x24E648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e648;
        }
    }
    ctx->pc = 0x24E6B4u;
label_24e6b4:
    // 0x24e6b4: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x24e6b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24e6b8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x24e6b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e6bc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x24e6bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x24e6c0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x24e6c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x24e6c4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x24e6c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24e6c8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x24e6c8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x24e6cc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x24e6ccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x24e6d0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x24e6d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24e6d4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x24e6d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x24e6d8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x24e6d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24e6dc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x24e6dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24e6e0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x24e6e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24e6e4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x24e6e4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x24e6e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x24e6e8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x24e6ec: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x24e6ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24e6f0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x24e6f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x24e6f4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x24e6f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24e6f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e6fc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x24e6fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24e700: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x24e700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x24e704: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x24e704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24e708: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24e708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24e70c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x24e70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24e710: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x24e710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x24e714: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x24e714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x24e718: 0x3e00008  jr          $ra
    ctx->pc = 0x24E718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E718u;
        // 0x24e71c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E720u;
    // 0x24e720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24e720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24e724: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x24e724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x24e728: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24e728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x24e72c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24e72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24e730: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x24e730u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x24e734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24e734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24e738: 0xc051048  jal         func_144120
    ctx->pc = 0x24E738u;
    SET_GPR_U32(ctx, 31, 0x24E740u);
    ctx->pc = 0x24E73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E738u;
    // 0x24e73c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x24E738u, 0x24E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E740u;
label_24e740:
    // 0x24e740: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24e740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e744: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x24e744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x24e748: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x24e748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e74c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x24e750: 0xac45058c  sw          $a1, 0x58C($v0)
    ctx->pc = 0x24e750u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x51058Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x51058Cu, _value); } while (0);
    // 0x24e754: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x24e754u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e758: 0x84c3000a  lh          $v1, 0xA($a2)
    ctx->pc = 0x24e758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x24e75c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x24e75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x24e760: 0xac850584  sw          $a1, 0x584($a0)
    ctx->pc = 0x24e760u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x510584u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510584u, _value); } while (0);
    // 0x24e764: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x24e764u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e768: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x24e768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x24e76c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x24e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x24e770: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x24e770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x24e774: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x24e774u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e778: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24e778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24e77c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x24e77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24e780: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x24e780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x24e784: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x24e784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e788: 0x3c0d006d  lui         $t5, 0x6D
    ctx->pc = 0x24e788u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)109 << 16));
    // 0x24e78c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24e78cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e790: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x24e790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24e794: 0x18800030  blez        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x24E794u;
    {
        const bool branch_taken_0x24e794 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x24E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E794u;
        // 0x24e798: 0xae06a218  sw          $a2, -0x5DE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294943256), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e794) {
            ctx->pc = 0x24E858u;
            goto label_24e858;
        }
    }
    ctx->pc = 0x24E79Cu;
    // 0x24e79c: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x24e79cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
    // 0x24e7a0: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x24e7a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e7a4: 0x8deb0588  lw          $t3, 0x588($t7)
    ctx->pc = 0x24e7a4u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x510588u));
    // 0x24e7a8: 0x240effef  addiu       $t6, $zero, -0x11
    ctx->pc = 0x24e7a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x24e7ac: 0x0  nop
    ctx->pc = 0x24e7acu;
    // NOP
label_24e7b0:
    // 0x24e7b0: 0x94a20048  lhu         $v0, 0x48($a1)
    ctx->pc = 0x24e7b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x24e7b4: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x24e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x24e7b8: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x24e7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x24e7bc: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E7BCu;
    {
        const bool branch_taken_0x24e7bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E7BCu;
        // 0x24e7c0: 0xa4a20048  sh          $v0, 0x48($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 72), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e7bc) {
            ctx->pc = 0x24E7CCu;
            goto label_24e7cc;
        }
    }
    ctx->pc = 0x24E7C4u;
    // 0x24e7c4: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x24e7c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e7c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24e7c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24e7cc:
    // 0x24e7cc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x24e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x24e7d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24e7d4: 0x54e20005  bnel        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E7D4u;
    {
        const bool branch_taken_0x24e7d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x24e7d4) {
            ctx->pc = 0x24E7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E7D4u;
            // 0x24e7d8: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E7ECu;
            goto label_24e7ec;
        }
    }
    ctx->pc = 0x24E7DCu;
    // 0x24e7dc: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x24e7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x24e7e0: 0x24a60050  addiu       $a2, $a1, 0x50
    ctx->pc = 0x24e7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x24e7e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24E7E4u;
    {
        const bool branch_taken_0x24e7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E7E4u;
        // 0x24e7e8: 0xaca00024  sw          $zero, 0x24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e7e4) {
            ctx->pc = 0x24E81Cu;
            goto label_24e81c;
        }
    }
    ctx->pc = 0x24E7ECu;
label_24e7ec:
    // 0x24e7ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24E7ECu;
    {
        const bool branch_taken_0x24e7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E7ECu;
        // 0x24e7f0: 0x24a20050  addiu       $v0, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e7ec) {
            ctx->pc = 0x24E810u;
            goto label_24e810;
        }
    }
    ctx->pc = 0x24E7F4u;
    // 0x24e7f4: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x24e7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x24e7f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24e7f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e7fc: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x24e7fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x24e800: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x24e800u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x24e804: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24e804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24e808: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24E808u;
    {
        const bool branch_taken_0x24e808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E808u;
        // 0x24e80c: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e808) {
            ctx->pc = 0x24E81Cu;
            goto label_24e81c;
        }
    }
    ctx->pc = 0x24E810u;
label_24e810:
    // 0x24e810: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x24e810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x24e814: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24e814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e818: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24e818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24e81c:
    // 0x24e81c: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x24e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x24e820: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24E820u;
    {
        const bool branch_taken_0x24e820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e820) {
            ctx->pc = 0x24E824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E820u;
            // 0x24e824: 0xaca80004  sw          $t0, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E834u;
            goto label_24e834;
        }
    }
    ctx->pc = 0x24E828u;
    // 0x24e828: 0xaca9004c  sw          $t1, 0x4C($a1)
    ctx->pc = 0x24e828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 9));
    // 0x24e82c: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x24e82cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x24e830: 0xaca80004  sw          $t0, 0x4($a1)
    ctx->pc = 0x24e830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
label_24e834:
    // 0x24e834: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24e834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24e838: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x24e838u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24e83c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x24e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x24e840: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x24e840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e844: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x24e844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x24e848: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x24e848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24e84c: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x24E84Cu;
    {
        const bool branch_taken_0x24e84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E84Cu;
        // 0x24e850: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e84c) {
            ctx->pc = 0x24E7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e7b0;
        }
    }
    ctx->pc = 0x24E854u;
    // 0x24e854: 0xadeb0588  sw          $t3, 0x588($t7)
    ctx->pc = 0x24e854u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 1416), GPR_U32(ctx, 11));
label_24e858:
    // 0x24e858: 0x8d88a218  lw          $t0, -0x5DE8($t4)
    ctx->pc = 0x24e858u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294943256)));
    // 0x24e85c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x24e860: 0xada5a21c  sw          $a1, -0x5DE4($t5)
    ctx->pc = 0x24e860u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294943260), GPR_U32(ctx, 5));
    // 0x24e864: 0x85020008  lh          $v0, 0x8($t0)
    ctx->pc = 0x24e864u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x24e868: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x24e868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x24e86c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x24e86cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e870: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x24e870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x24e874: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x24e874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24e878: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24e878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x24e87c: 0x8f050584  lw          $a1, 0x584($t8)
    ctx->pc = 0x24e87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 1412)));
    // 0x24e880: 0xac440594  sw          $a0, 0x594($v0)
    ctx->pc = 0x24e880u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x510594u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510594u, _value); } while (0);
    // 0x24e884: 0xac660590  sw          $a2, 0x590($v1)
    ctx->pc = 0x24e884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1424), GPR_U32(ctx, 6));
    // 0x24e888: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x24e888u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x24e88c: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x24e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x24e890: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24E890u;
    {
        const bool branch_taken_0x24e890 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E890u;
        // 0x24e894: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e890) {
            ctx->pc = 0x24E8CCu;
            goto label_24e8cc;
        }
    }
    ctx->pc = 0x24E898u;
    // 0x24e898: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x24e898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e89c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x24e89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e8a0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x24e8a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e8a4: 0x0  nop
    ctx->pc = 0x24e8a4u;
    // NOP
label_24e8a8:
    // 0x24e8a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e8ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24e8acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24e8b0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x24e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x24e8b4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x24e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24e8b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x24e8bc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x24e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x24e8c0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x24e8c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24e8c4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24E8C4u;
    {
        const bool branch_taken_0x24e8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8C4u;
        // 0x24e8c8: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e8c4) {
            ctx->pc = 0x24E8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e8a8;
        }
    }
    ctx->pc = 0x24E8CCu;
label_24e8cc:
    // 0x24e8cc: 0x8d83a218  lw          $v1, -0x5DE8($t4)
    ctx->pc = 0x24e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294943256)));
    // 0x24e8d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24e8d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e8d4: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x24e8d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24e8d8: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24E8D8u;
    {
        const bool branch_taken_0x24e8d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8D8u;
        // 0x24e8dc: 0x8da5a21c  lw          $a1, -0x5DE4($t5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294943260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e8d8) {
            ctx->pc = 0x24E90Cu;
            goto label_24e90c;
        }
    }
    ctx->pc = 0x24E8E0u;
label_24e8e0:
    // 0x24e8e0: 0xa0a0001f  sb          $zero, 0x1F($a1)
    ctx->pc = 0x24e8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x24e8e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24e8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24e8e8: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x24e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x24e8ec: 0x8d82a218  lw          $v0, -0x5DE8($t4)
    ctx->pc = 0x24e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294943256)));
    // 0x24e8f0: 0x84a30014  lh          $v1, 0x14($a1)
    ctx->pc = 0x24e8f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x24e8f4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x24e8f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24e8f8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x24e8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x24e8fc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x24e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x24e900: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x24e900u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x24e904: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x24E904u;
    {
        const bool branch_taken_0x24e904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E904u;
        // 0x24e908: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e904) {
            ctx->pc = 0x24E8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e8e0;
        }
    }
    ctx->pc = 0x24E90Cu;
label_24e90c:
    // 0x24e90c: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x24e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x24e910: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x24e910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x24e914: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x24e914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x24e918: 0xac66a220  sw          $a2, -0x5DE0($v1)
    ctx->pc = 0x24e918u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6CA220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6CA220u, _value); } while (0);
    // 0x24e91c: 0xc094462  jal         func_251188
    ctx->pc = 0x24E91Cu;
    SET_GPR_U32(ctx, 31, 0x24E924u);
    ctx->pc = 0x24E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E91Cu;
    // 0x24e920: 0xac82a224  sw          $v0, -0x5DDC($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251188u, 0x24E91Cu, 0x24E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E924u;
label_24e924:
    // 0x24e924: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24e924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24e928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24e92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e930: 0x3e00008  jr          $ra
    ctx->pc = 0x24E930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E930u;
        // 0x24e934: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E938u;
}
