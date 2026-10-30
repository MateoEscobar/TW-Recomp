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

// Function: sub_00288F40
// Address: 0x288f40 - 0x289010
void sub_00288F40_0x288f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288F40_0x288f40");
#endif

    switch (ctx->pc) {
        case 0x288fc8u: goto label_288fc8;
        case 0x288fe8u: goto label_288fe8;
        default: break;
    }

    ctx->pc = 0x288f40u;

    // 0x288f40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x288f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x288f44: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x288f44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x288f48: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x288f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x288f4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x288f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f50: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x288f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x288f54: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x288f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x288f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x288f5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x288f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f60: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x288f60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x288f64: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x288f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x288f68: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x288f68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x288f6c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x288f6cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x288f70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x288f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x288f74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x288f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288f78: 0x7a020090  lq          $v0, 0x90($s0)
    ctx->pc = 0x288f78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x288f7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x288f7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x288f80: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x288f80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x288f84: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x288f84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x288f88: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x288f88u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x288f8c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x288f8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x288f90: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x288f90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x288f94: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x288f94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x288f98: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x288f98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x288f9c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x288f9cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x288fa0: 0x4a0003bf  vwaitq
    ctx->pc = 0x288fa0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x288fa4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x288fa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x288fa8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x288fa8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x288fac: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x288facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x288fb0: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x288fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x288fb4: 0x0  nop
    ctx->pc = 0x288fb4u;
    // NOP
    // 0x288fb8: 0x0  nop
    ctx->pc = 0x288fb8u;
    // NOP
    // 0x288fbc: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x288fbcu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[20]); }
    // 0x288fc0: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x288FC0u;
    SET_GPR_U32(ctx, 31, 0x288FC8u);
    ctx->pc = 0x288FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288FC0u;
    // 0x288fc4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x288FC0u, 0x288FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288FC8u;
label_288fc8:
    // 0x288fc8: 0xc60c0114  lwc1        $f12, 0x114($s0)
    ctx->pc = 0x288fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x288fcc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x288fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x288fd0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x288fd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288fd4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x288fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x288fd8: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x288fd8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x288fdc: 0x46146329  min.s       $f12, $f12, $f20
    ctx->pc = 0x288fdcu;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[20]);
    // 0x288fe0: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x288FE0u;
    SET_GPR_U32(ctx, 31, 0x288FE8u);
    ctx->pc = 0x288FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288FE0u;
    // 0x288fe4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x288FE0u, 0x288FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288FE8u;
label_288fe8:
    // 0x288fe8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x288fe8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288fec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x288fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ff0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x288ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288ff4: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x288ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x288ff8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x288ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288ffc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x288ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289000: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x289000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x289004: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x289004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x289008: 0x3e00008  jr          $ra
    ctx->pc = 0x289008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289008u;
        // 0x28900c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289010u;
}
