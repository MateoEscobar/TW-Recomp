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

// Function: sub_00346DE0
// Address: 0x346de0 - 0x346eb0
void sub_00346DE0_0x346de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346DE0_0x346de0");
#endif

    switch (ctx->pc) {
        case 0x346e34u: goto label_346e34;
        default: break;
    }

    ctx->pc = 0x346de0u;

    // 0x346de0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x346de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x346de4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x346de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x346de8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x346de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346dec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x346decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x346df0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x346df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346df4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x346df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x346df8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x346df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346dfc: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x346dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x346e00: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x346e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x346e04: 0x7a030040  lq          $v1, 0x40($s0)
    ctx->pc = 0x346e04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x346e08: 0x26270050  addiu       $a3, $s1, 0x50
    ctx->pc = 0x346e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x346e0c: 0x7a020050  lq          $v0, 0x50($s0)
    ctx->pc = 0x346e0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x346e10: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x346e10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x346e14: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x346e14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x346e18: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x346e18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x346e1c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x346e1cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x346e20: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x346e20u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x346e24: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x346e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x346e28: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x346e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x346e2c: 0xc0d2b32  jal         func_34ACC8
    ctx->pc = 0x346E2Cu;
    SET_GPR_U32(ctx, 31, 0x346E34u);
    ctx->pc = 0x346E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E2Cu;
    // 0x346e30: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34ACC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34ACC8u, 0x346E2Cu, 0x346E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E34u;
label_346e34:
    // 0x346e34: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x346e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x346e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346e3c: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x346e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346e40: 0x7a240050  lq          $a0, 0x50($s1)
    ctx->pc = 0x346e40u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x346e44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x346e44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x346e48: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x346e48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346e4c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x346e4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x346e50: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x346e50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x346e54: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x346e54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x346e58: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x346e58u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x346e5c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x346e5cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x346e60: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x346e60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x346e64: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x346e64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x346e68: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x346e68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x346e6c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x346e6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x346e70: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x346e70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x346e74: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x346e74u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x346e78: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x346e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x346e7c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x346e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x346e80: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x346e80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x346e84: 0x0  nop
    ctx->pc = 0x346e84u;
    // NOP
    // 0x346e88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x346e88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346e8c: 0x0  nop
    ctx->pc = 0x346e8cu;
    // NOP
    // 0x346e90: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x346E90u;
    {
        const bool branch_taken_0x346e90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x346E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E90u;
        // 0x346e94: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e90) {
            ctx->pc = 0x346E9Cu;
            goto label_346e9c;
        }
    }
    ctx->pc = 0x346E98u;
    // 0x346e98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x346e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346e9c:
    // 0x346e9c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x346e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x346ea0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x346ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x346ea4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x346ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x346ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x346EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346EA8u;
        // 0x346eac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346EB0u;
}
