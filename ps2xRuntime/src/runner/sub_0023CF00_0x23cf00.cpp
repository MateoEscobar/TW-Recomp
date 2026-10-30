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

// Function: sub_0023CF00
// Address: 0x23cf00 - 0x23cf70
void sub_0023CF00_0x23cf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CF00_0x23cf00");
#endif

    switch (ctx->pc) {
        case 0x23cf50u: goto label_23cf50;
        default: break;
    }

    ctx->pc = 0x23cf00u;

    // 0x23cf00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23cf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23cf04: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x23cf04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23cf08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23cf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23cf0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23cf0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23cf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23cf14: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x23cf14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    // 0x23cf18: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x23cf18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23cf1c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23cf1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23cf20: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x23cf20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23cf24: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x23cf24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23cf28: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x23cf28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23cf2c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x23cf2cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x23cf30: 0x4a0003bf  vwaitq
    ctx->pc = 0x23cf30u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x23cf34: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x23cf34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23cf38: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x23cf38u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x23cf3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cf3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cf40: 0x0  nop
    ctx->pc = 0x23cf40u;
    // NOP
    // 0x23cf44: 0xe60001ac  swc1        $f0, 0x1AC($s0)
    ctx->pc = 0x23cf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
    // 0x23cf48: 0xc08abac  jal         func_22AEB0
    ctx->pc = 0x23CF48u;
    SET_GPR_U32(ctx, 31, 0x23CF50u);
    ctx->pc = 0x23CF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CF48u;
    // 0x23cf4c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AEB0u, 0x23CF48u, 0x23CF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF50u;
label_23cf50:
    // 0x23cf50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cf54: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x23cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x23cf58: 0xa2030255  sb          $v1, 0x255($s0)
    ctx->pc = 0x23cf58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 597), (uint8_t)GPR_U32(ctx, 3));
    // 0x23cf5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23cf5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cf60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23cf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cf64: 0x3e00008  jr          $ra
    ctx->pc = 0x23CF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF64u;
        // 0x23cf68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CF6Cu;
    // 0x23cf6c: 0x0  nop
    ctx->pc = 0x23cf6cu;
    // NOP
    ctx->pc = 0x23cf70u;
}
