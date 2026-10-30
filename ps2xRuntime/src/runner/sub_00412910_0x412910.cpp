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

// Function: sub_00412910
// Address: 0x412910 - 0x4129c0
void sub_00412910_0x412910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412910_0x412910");
#endif

    switch (ctx->pc) {
        case 0x412938u: goto label_412938;
        case 0x412984u: goto label_412984;
        case 0x41299cu: goto label_41299c;
        default: break;
    }

    ctx->pc = 0x412910u;

    // 0x412910: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x412910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x412914: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x412914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x412918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x412918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41291c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x41291cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x412920: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x412920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x412924: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x412924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x412928: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x412928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x41292c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x41292cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412930: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x412930u;
    SET_GPR_U32(ctx, 31, 0x412938u);
    ctx->pc = 0x412934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412930u;
    // 0x412934: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x412930u, 0x412938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412938u;
label_412938:
    // 0x412938: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x412938u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41293c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x41293cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x412940: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x412940u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x412944: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x412944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x412948: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x412948u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x41294c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x41294cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x412950: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x412950u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x412954: 0x4a0003bf  vwaitq
    ctx->pc = 0x412954u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x412958: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x412958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x41295c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x41295cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x412960: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x412960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x412964: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x412964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x412968: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x412968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41296c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x41296cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412970: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x412970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x412974: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x412974u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x412978: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x412978u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x41297c: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x41297Cu;
    SET_GPR_U32(ctx, 31, 0x412984u);
    ctx->pc = 0x412980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41297Cu;
    // 0x412980: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x41297Cu, 0x412984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412984u;
label_412984:
    // 0x412984: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x412984u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x412988: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x412988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41298c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x41298cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x412990: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x412990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x412994: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x412994u;
    SET_GPR_U32(ctx, 31, 0x41299Cu);
    ctx->pc = 0x412998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412994u;
    // 0x412998: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x412994u, 0x41299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41299Cu;
label_41299c:
    // 0x41299c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x41299cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4129a0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4129a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4129a4: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x4129a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x4129a8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4129a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4129ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4129acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4129b0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x4129b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x4129b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4129B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4129B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4129B4u;
        // 0x4129b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4129B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4129BCu;
    // 0x4129bc: 0x0  nop
    ctx->pc = 0x4129bcu;
    // NOP
    ctx->pc = 0x4129c0u;
}
