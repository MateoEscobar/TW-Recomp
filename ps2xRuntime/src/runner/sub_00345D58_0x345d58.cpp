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

// Function: sub_00345D58
// Address: 0x345d58 - 0x345dd8
void sub_00345D58_0x345d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345D58_0x345d58");
#endif

    ctx->pc = 0x345d58u;

    // 0x345d58: 0xc4c10040  lwc1        $f1, 0x40($a2)
    ctx->pc = 0x345d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345d5c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345d5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x345d60: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x345d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345d64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x345d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345d68: 0x78a30050  lq          $v1, 0x50($a1)
    ctx->pc = 0x345d68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x345d6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x345d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x345d70: 0x78c20050  lq          $v0, 0x50($a2)
    ctx->pc = 0x345d70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x345d74: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x345d74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x345d78: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x345d78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x345d7c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x345d7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x345d80: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x345d80u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x345d84: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x345d84u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x345d88: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x345d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x345d8c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x345d8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x345d90: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x345d90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x345d94: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x345d94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x345d98: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x345d98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x345d9c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x345d9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x345da0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x345da0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x345da4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x345da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x345da8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x345da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x345dac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x345dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345db0: 0x0  nop
    ctx->pc = 0x345db0u;
    // NOP
    // 0x345db4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x345db4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345db8: 0x0  nop
    ctx->pc = 0x345db8u;
    // NOP
    // 0x345dbc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x345DBCu;
    {
        const bool branch_taken_0x345dbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x345DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345DBCu;
        // 0x345dc0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345dbc) {
            ctx->pc = 0x345DC8u;
            goto label_345dc8;
        }
    }
    ctx->pc = 0x345DC4u;
    // 0x345dc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x345dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345dc8:
    // 0x345dc8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x345dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x345DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345DCCu;
        // 0x345dd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345DD4u;
    // 0x345dd4: 0x0  nop
    ctx->pc = 0x345dd4u;
    // NOP
    ctx->pc = 0x345dd8u;
}
