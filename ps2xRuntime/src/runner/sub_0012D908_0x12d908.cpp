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

// Function: sub_0012D908
// Address: 0x12d908 - 0x12da20
void sub_0012D908_0x12d908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D908_0x12d908");
#endif

    switch (ctx->pc) {
        case 0x12d9d8u: goto label_12d9d8;
        default: break;
    }

    ctx->pc = 0x12d908u;

    // 0x12d908: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12d908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12d90c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x12d90cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12d910: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x12d910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x12d914: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12d914u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12d918: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x12d918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12d91c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x12d91cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12d920: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x12d920u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x12d924: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x12d924u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12d928: 0x4a0003bf  vwaitq
    ctx->pc = 0x12d928u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x12d92c: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x12d92cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12d930: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x12d930u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12d934: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12d934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d938: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12d938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12d93c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12d93cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d940: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12d940u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12d944: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12d944u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12d948: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x12d948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12d94c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12d94cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12d950: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12d950u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12d954: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x12d954u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12d958: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x12d958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x12d95c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x12d95cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12d960: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12d960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12d964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12d968: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x12d968u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d96c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12d96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x12d970: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x12D970u;
    {
        const bool branch_taken_0x12d970 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D970u;
        // 0x12d974: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d970) {
            ctx->pc = 0x12D984u;
            goto label_12d984;
        }
    }
    ctx->pc = 0x12D978u;
    // 0x12d978: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x12d978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d97c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x12D97Cu;
    {
        const bool branch_taken_0x12d97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D97Cu;
        // 0x12d980: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d97c) {
            ctx->pc = 0x12D9F0u;
            goto label_12d9f0;
        }
    }
    ctx->pc = 0x12D984u;
label_12d984:
    // 0x12d984: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12d984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x12d988: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12d988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d98c: 0x0  nop
    ctx->pc = 0x12d98cu;
    // NOP
    // 0x12d990: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12d990u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d994: 0x0  nop
    ctx->pc = 0x12d994u;
    // NOP
    // 0x12d998: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x12D998u;
    {
        const bool branch_taken_0x12d998 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d998) {
            ctx->pc = 0x12D99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D998u;
            // 0x12d99c: 0x46010b02  mul.s       $f12, $f1, $f1 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D9B4u;
            goto label_12d9b4;
        }
    }
    ctx->pc = 0x12D9A0u;
    // 0x12d9a0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12d9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x12d9a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12d9a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x12d9a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12d9a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d9ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12D9ACu;
    {
        const bool branch_taken_0x12d9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9ACu;
        // 0x12d9b0: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9ac) {
            ctx->pc = 0x12D9F0u;
            goto label_12d9f0;
        }
    }
    ctx->pc = 0x12D9B4u;
label_12d9b4:
    // 0x12d9b4: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x12d9b4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x12d9b8: 0x0  nop
    ctx->pc = 0x12d9b8u;
    // NOP
    // 0x12d9bc: 0x0  nop
    ctx->pc = 0x12d9bcu;
    // NOP
    // 0x12d9c0: 0x460c0304  c1          0xC0304
    ctx->pc = 0x12d9c0u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x12d9c4: 0x0  nop
    ctx->pc = 0x12d9c4u;
    // NOP
    // 0x12d9c8: 0x0  nop
    ctx->pc = 0x12d9c8u;
    // NOP
    // 0x12d9cc: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x12d9ccu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
    // 0x12d9d0: 0xc0cd5a8  jal         func_3356A0
    ctx->pc = 0x12D9D0u;
    SET_GPR_U32(ctx, 31, 0x12D9D8u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x12D9D0u, 0x12D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D9D8u;
label_12d9d8:
    // 0x12d9d8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12d9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x12d9dc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12d9dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x12d9e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12d9e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12d9e4: 0x0  nop
    ctx->pc = 0x12d9e4u;
    // NOP
    // 0x12d9e8: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x12d9e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12d9ec: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x12d9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12d9f0:
    // 0x12d9f0: 0xc6200188  lwc1        $f0, 0x188($s1)
    ctx->pc = 0x12d9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d9f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12d9f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d9f8: 0x0  nop
    ctx->pc = 0x12d9f8u;
    // NOP
    // 0x12d9fc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12D9FCu;
    {
        const bool branch_taken_0x12d9fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d9fc) {
            ctx->pc = 0x12DA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D9FCu;
            // 0x12da00: 0x46001087  neg.s       $f2, $f2 (Delay Slot)
            ctx->f[2] = FPU_NEG_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DA04u;
            goto label_12da04;
        }
    }
    ctx->pc = 0x12DA04u;
label_12da04:
    // 0x12da04: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x12da04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12da08: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x12da08u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x12da0c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x12da0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12da10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12da10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12da14: 0x3e00008  jr          $ra
    ctx->pc = 0x12DA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA14u;
        // 0x12da18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DA1Cu;
    // 0x12da1c: 0x0  nop
    ctx->pc = 0x12da1cu;
    // NOP
    ctx->pc = 0x12da20u;
}
