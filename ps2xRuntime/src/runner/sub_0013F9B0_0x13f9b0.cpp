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

// Function: sub_0013F9B0
// Address: 0x13f9b0 - 0x13fac8
void sub_0013F9B0_0x13f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F9B0_0x13f9b0");
#endif

    switch (ctx->pc) {
        case 0x13fa80u: goto label_13fa80;
        default: break;
    }

    ctx->pc = 0x13f9b0u;

    // 0x13f9b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13f9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13f9b4: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x13f9b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13f9b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13f9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13f9bc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13f9bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x13f9c0: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x13f9c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13f9c4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13f9c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13f9c8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13f9c8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x13f9cc: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x13f9ccu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x13f9d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x13f9d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13f9d4: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x13f9d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13f9d8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13f9d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13f9dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13f9dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f9e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13f9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13f9e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13f9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13f9e8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13f9e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x13f9ec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x13f9ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13f9f0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x13f9f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13f9f4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13f9f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13f9f8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13f9f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13f9fc: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x13f9fcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13fa00: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13fa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x13fa04: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x13fa04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13fa08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13fa08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fa0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13fa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13fa10: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x13fa10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13fa14: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13fa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x13fa18: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13FA18u;
    {
        const bool branch_taken_0x13fa18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA18u;
        // 0x13fa1c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa18) {
            ctx->pc = 0x13FA2Cu;
            goto label_13fa2c;
        }
    }
    ctx->pc = 0x13FA20u;
    // 0x13fa20: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x13fa20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13fa24: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x13FA24u;
    {
        const bool branch_taken_0x13fa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA24u;
        // 0x13fa28: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa24) {
            ctx->pc = 0x13FA98u;
            goto label_13fa98;
        }
    }
    ctx->pc = 0x13FA2Cu;
label_13fa2c:
    // 0x13fa2c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x13fa2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x13fa30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fa30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fa34: 0x0  nop
    ctx->pc = 0x13fa34u;
    // NOP
    // 0x13fa38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13fa38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13fa3c: 0x0  nop
    ctx->pc = 0x13fa3cu;
    // NOP
    // 0x13fa40: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x13FA40u;
    {
        const bool branch_taken_0x13fa40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13fa40) {
            ctx->pc = 0x13FA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FA40u;
            // 0x13fa44: 0x46010b02  mul.s       $f12, $f1, $f1 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FA5Cu;
            goto label_13fa5c;
        }
    }
    ctx->pc = 0x13FA48u;
    // 0x13fa48: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x13fa48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x13fa4c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x13fa4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x13fa50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13fa50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13fa54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13FA54u;
    {
        const bool branch_taken_0x13fa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA54u;
        // 0x13fa58: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa54) {
            ctx->pc = 0x13FA98u;
            goto label_13fa98;
        }
    }
    ctx->pc = 0x13FA5Cu;
label_13fa5c:
    // 0x13fa5c: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x13fa5cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x13fa60: 0x0  nop
    ctx->pc = 0x13fa60u;
    // NOP
    // 0x13fa64: 0x0  nop
    ctx->pc = 0x13fa64u;
    // NOP
    // 0x13fa68: 0x460c0304  c1          0xC0304
    ctx->pc = 0x13fa68u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x13fa6c: 0x0  nop
    ctx->pc = 0x13fa6cu;
    // NOP
    // 0x13fa70: 0x0  nop
    ctx->pc = 0x13fa70u;
    // NOP
    // 0x13fa74: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x13fa74u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
    // 0x13fa78: 0xc0cd5a8  jal         func_3356A0
    ctx->pc = 0x13FA78u;
    SET_GPR_U32(ctx, 31, 0x13FA80u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x13FA78u, 0x13FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA80u;
label_13fa80:
    // 0x13fa80: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x13fa80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x13fa84: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x13fa84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x13fa88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13fa88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13fa8c: 0x0  nop
    ctx->pc = 0x13fa8cu;
    // NOP
    // 0x13fa90: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x13fa90u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13fa94: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x13fa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13fa98:
    // 0x13fa98: 0xc62002f8  lwc1        $f0, 0x2F8($s1)
    ctx->pc = 0x13fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13fa9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13fa9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13faa0: 0x0  nop
    ctx->pc = 0x13faa0u;
    // NOP
    // 0x13faa4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13FAA4u;
    {
        const bool branch_taken_0x13faa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13faa4) {
            ctx->pc = 0x13FAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FAA4u;
            // 0x13faa8: 0x46001087  neg.s       $f2, $f2 (Delay Slot)
            ctx->f[2] = FPU_NEG_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FAACu;
            goto label_13faac;
        }
    }
    ctx->pc = 0x13FAACu;
label_13faac:
    // 0x13faac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13faacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13fab0: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x13fab0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x13fab4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13fab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fab8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13fab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fabc: 0x3e00008  jr          $ra
    ctx->pc = 0x13FABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FABCu;
        // 0x13fac0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FAC4u;
    // 0x13fac4: 0x0  nop
    ctx->pc = 0x13fac4u;
    // NOP
    ctx->pc = 0x13fac8u;
}
