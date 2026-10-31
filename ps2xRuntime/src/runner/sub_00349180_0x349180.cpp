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

// Function: sub_00349180
// Address: 0x349180 - 0x349268
void sub_00349180_0x349180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349180_0x349180");
#endif

    ctx->pc = 0x349180u;

    // 0x349180: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x349180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x349184: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x349184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x349188: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x349188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34918c: 0x46001845  abs.s       $f1, $f3
    ctx->pc = 0x34918cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[3]);
    // 0x349190: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x349190u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x349194: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x349194u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349198: 0x0  nop
    ctx->pc = 0x349198u;
    // NOP
    // 0x34919c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x34919Cu;
    {
        const bool branch_taken_0x34919c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3491A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34919Cu;
        // 0x3491a0: 0xc4c10008  lwc1        $f1, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34919c) {
            ctx->pc = 0x3491E8u;
            goto label_3491e8;
        }
    }
    ctx->pc = 0x3491A4u;
    // 0x3491a4: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x3491a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x3491a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3491a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3491ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3491acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3491b0: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x3491b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3491b4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3491b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3491b8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3491b8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3491bc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3491bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3491c0: 0x0  nop
    ctx->pc = 0x3491c0u;
    // NOP
    // 0x3491c4: 0x0  nop
    ctx->pc = 0x3491c4u;
    // NOP
    // 0x3491c8: 0x46000004  c1          0x4
    ctx->pc = 0x3491c8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x3491cc: 0x0  nop
    ctx->pc = 0x3491ccu;
    // NOP
    // 0x3491d0: 0x0  nop
    ctx->pc = 0x3491d0u;
    // NOP
    // 0x3491d4: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x3491d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x3491d8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3491d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3491dc: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x3491dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3491e0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3491E0u;
    {
        const bool branch_taken_0x3491e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3491E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3491E0u;
        // 0x3491e4: 0xc4c00000  lwc1        $f0, 0x0($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3491e0) {
            ctx->pc = 0x34922Cu;
            goto label_34922c;
        }
    }
    ctx->pc = 0x3491E8u;
label_3491e8:
    // 0x3491e8: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x3491e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3491ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3491ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3491f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3491f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3491f4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3491f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3491f8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3491f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3491fc: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x3491fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349200: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x349200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x349204: 0x0  nop
    ctx->pc = 0x349204u;
    // NOP
    // 0x349208: 0x0  nop
    ctx->pc = 0x349208u;
    // NOP
    // 0x34920c: 0x46000004  c1          0x4
    ctx->pc = 0x34920cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x349210: 0x0  nop
    ctx->pc = 0x349210u;
    // NOP
    // 0x349214: 0x0  nop
    ctx->pc = 0x349214u;
    // NOP
    // 0x349218: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x349218u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x34921c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x34921cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x349220: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x349220u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x349224: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x349224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349228: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x349228u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_34922c:
    // 0x34922c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x34922cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x349230: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x349230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x349234: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x349234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x349238: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x349238u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34923c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34923cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x349240: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x349240u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x349244: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x349244u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x349248: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x349248u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34924c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x34924cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x349250: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x349250u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x349254: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x349254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x349258: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x349258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x34925c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x34925cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x349260: 0x3e00008  jr          $ra
    ctx->pc = 0x349260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349260u;
        // 0x349264: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349268u;
}
