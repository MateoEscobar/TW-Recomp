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

// Function: sub_0034ACC8
// Address: 0x34acc8 - 0x34ad50
void sub_0034ACC8_0x34acc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034ACC8_0x34acc8");
#endif

    switch (ctx->pc) {
        case 0x34acf0u: goto label_34acf0;
        default: break;
    }

    ctx->pc = 0x34acc8u;

    // 0x34acc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34acc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34accc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x34acccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x34acd0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x34acd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x34acd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34acd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34acd8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x34acd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x34acdc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34acdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ace0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34ace0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ace4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34ace4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34ace8: 0xc0d2b02  jal         func_34AC08
    ctx->pc = 0x34ACE8u;
    SET_GPR_U32(ctx, 31, 0x34ACF0u);
    ctx->pc = 0x34ACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ACE8u;
    // 0x34acec: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AC08u, 0x34ACE8u, 0x34ACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ACF0u;
label_34acf0:
    // 0x34acf0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x34acf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34acf4: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x34acf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34acf8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x34acf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x34acfc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34acfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34ad00: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34ad00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34ad04: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34ad04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34ad08: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x34ad08u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34ad0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x34ad0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34ad10: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x34ad10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x34ad14: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x34ad14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x34ad18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34ad18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34ad1c: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x34ad1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34ad20: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34ad20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34ad24: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34ad24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34ad28: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34ad28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34ad2c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34ad2cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34ad30: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x34ad30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34ad34: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x34ad34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34ad38: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x34ad38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x34ad3c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x34ad3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34ad40: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x34ad40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x34ad44: 0x3e00008  jr          $ra
    ctx->pc = 0x34AD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD44u;
        // 0x34ad48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AD4Cu;
    // 0x34ad4c: 0x0  nop
    ctx->pc = 0x34ad4cu;
    // NOP
    ctx->pc = 0x34ad50u;
}
