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

// Function: sub_0034AB28
// Address: 0x34ab28 - 0x34ac08
void sub_0034AB28_0x34ab28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034AB28_0x34ab28");
#endif

    ctx->pc = 0x34ab28u;

    // 0x34ab28: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x34ab28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34ab2c: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x34ab2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34ab30: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34ab30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34ab34: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34ab34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34ab38: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34ab38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ab3c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34ab3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ab40: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34ab40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ab44: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34ab44u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34ab48: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x34ab48u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34ab4c: 0x0  nop
    ctx->pc = 0x34ab4cu;
    // NOP
    // 0x34ab50: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x34ab50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x34ab54: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x34ab54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x34ab58: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x34ab58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34ab5c: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x34ab5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34ab60: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34ab60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34ab64: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34ab64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34ab68: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34ab68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ab6c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34ab6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ab70: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34ab70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ab74: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34ab74u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34ab78: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x34ab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ab7c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x34ab7cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34ab80: 0x0  nop
    ctx->pc = 0x34ab80u;
    // NOP
    // 0x34ab84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34ab84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ab88: 0x0  nop
    ctx->pc = 0x34ab88u;
    // NOP
    // 0x34ab8c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x34AB8Cu;
    {
        const bool branch_taken_0x34ab8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ab8c) {
            ctx->pc = 0x34AB9Cu;
            goto label_34ab9c;
        }
    }
    ctx->pc = 0x34AB94u;
    // 0x34ab94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34AB94u;
    {
        const bool branch_taken_0x34ab94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB94u;
        // 0x34ab98: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ab94) {
            ctx->pc = 0x34ABACu;
            goto label_34abac;
        }
    }
    ctx->pc = 0x34AB9Cu;
label_34ab9c:
    // 0x34ab9c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x34ab9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34aba0: 0x0  nop
    ctx->pc = 0x34aba0u;
    // NOP
    // 0x34aba4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x34ABA4u;
    {
        const bool branch_taken_0x34aba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34aba4) {
            ctx->pc = 0x34ABA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34ABA4u;
            // 0x34aba8: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34ABACu;
            goto label_34abac;
        }
    }
    ctx->pc = 0x34ABACu;
label_34abac:
    // 0x34abac: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x34abacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34abb0: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x34abb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34abb4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34abb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34abb8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34abb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34abbc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34abbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34abc0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34abc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34abc4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34abc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34abc8: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34abc8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34abcc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x34abccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34abd0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x34abd0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34abd4: 0x0  nop
    ctx->pc = 0x34abd4u;
    // NOP
    // 0x34abd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34abd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34abdc: 0x0  nop
    ctx->pc = 0x34abdcu;
    // NOP
    // 0x34abe0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x34ABE0u;
    {
        const bool branch_taken_0x34abe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34abe0) {
            ctx->pc = 0x34ABE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34ABE0u;
            // 0x34abe4: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34ABF0u;
            goto label_34abf0;
        }
    }
    ctx->pc = 0x34ABE8u;
    // 0x34abe8: 0x3e00008  jr          $ra
    ctx->pc = 0x34ABE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ABE8u;
        // 0x34abec: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34ABE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34ABF0u;
label_34abf0:
    // 0x34abf0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34abf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34abf4: 0x0  nop
    ctx->pc = 0x34abf4u;
    // NOP
    // 0x34abf8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x34ABF8u;
    {
        const bool branch_taken_0x34abf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34abf8) {
            ctx->pc = 0x34ABFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34ABF8u;
            // 0x34abfc: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34AC00u;
            goto label_34ac00;
        }
    }
    ctx->pc = 0x34AC00u;
label_34ac00:
    // 0x34ac00: 0x3e00008  jr          $ra
    ctx->pc = 0x34AC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AC08u;
}
