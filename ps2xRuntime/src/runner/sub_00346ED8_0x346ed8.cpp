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

// Function: sub_00346ED8
// Address: 0x346ed8 - 0x346f90
void sub_00346ED8_0x346ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346ED8_0x346ed8");
#endif

    switch (ctx->pc) {
        case 0x346f14u: goto label_346f14;
        default: break;
    }

    ctx->pc = 0x346ed8u;

    // 0x346ed8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x346ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x346edc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x346edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x346ee0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x346ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346ee4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x346ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x346ee8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x346ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346eec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x346eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x346ef0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x346ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346ef4: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x346ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x346ef8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x346ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x346efc: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x346efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346f00: 0x26270050  addiu       $a3, $s1, 0x50
    ctx->pc = 0x346f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x346f04: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x346f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x346f08: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x346f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x346f0c: 0xc0d2b32  jal         func_34ACC8
    ctx->pc = 0x346F0Cu;
    SET_GPR_U32(ctx, 31, 0x346F14u);
    ctx->pc = 0x346F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346F0Cu;
    // 0x346f10: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34ACC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34ACC8u, 0x346F0Cu, 0x346F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346F14u;
label_346f14:
    // 0x346f14: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x346f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x346f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346f1c: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x346f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346f20: 0x7a240050  lq          $a0, 0x50($s1)
    ctx->pc = 0x346f20u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x346f24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x346f24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x346f28: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x346f28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346f2c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x346f2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x346f30: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x346f30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x346f34: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x346f34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x346f38: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x346f38u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x346f3c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x346f3cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x346f40: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x346f40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x346f44: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x346f44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x346f48: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x346f48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x346f4c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x346f4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x346f50: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x346f50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x346f54: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x346f54u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x346f58: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x346f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x346f5c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x346f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x346f60: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x346f60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x346f64: 0x0  nop
    ctx->pc = 0x346f64u;
    // NOP
    // 0x346f68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x346f68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346f6c: 0x0  nop
    ctx->pc = 0x346f6cu;
    // NOP
    // 0x346f70: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x346F70u;
    {
        const bool branch_taken_0x346f70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x346F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F70u;
        // 0x346f74: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346f70) {
            ctx->pc = 0x346F7Cu;
            goto label_346f7c;
        }
    }
    ctx->pc = 0x346F78u;
    // 0x346f78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x346f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346f7c:
    // 0x346f7c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x346f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x346f80: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x346f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x346f84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x346f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x346f88: 0x3e00008  jr          $ra
    ctx->pc = 0x346F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F88u;
        // 0x346f8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346F90u;
}
