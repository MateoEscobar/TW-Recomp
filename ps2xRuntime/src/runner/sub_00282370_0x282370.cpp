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

// Function: sub_00282370
// Address: 0x282370 - 0x2826f0
void sub_00282370_0x282370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282370_0x282370");
#endif

    switch (ctx->pc) {
        case 0x2823d0u: goto label_2823d0;
        case 0x2824fcu: goto label_2824fc;
        case 0x2825d8u: goto label_2825d8;
        case 0x2825f0u: goto label_2825f0;
        case 0x282600u: goto label_282600;
        case 0x282678u: goto label_282678;
        case 0x2826acu: goto label_2826ac;
        default: break;
    }

    ctx->pc = 0x282370u;

    // 0x282370: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x282370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x282374: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x282374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
    // 0x282378: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x282378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
    // 0x28237c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28237cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282380: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x282380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
    // 0x282384: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x282384u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282388: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x282388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
    // 0x28238c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28238cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282390: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x282390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
    // 0x282394: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x282394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282398: 0xe7b601b0  swc1        $f22, 0x1B0($sp)
    ctx->pc = 0x282398u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x28239c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x28239cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2823a0: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x2823a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x2823a4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2823a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2823a8: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x2823a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x2823ac: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x2823acu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2823b0: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x2823b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
    // 0x2823b4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2823b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2823b8: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x2823b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
    // 0x2823bc: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x2823bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x2823c0: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x2823c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
    // 0x2823c4: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2823c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2823c8: 0xc08748a  jal         func_21D228
    ctx->pc = 0x2823C8u;
    SET_GPR_U32(ctx, 31, 0x2823D0u);
    ctx->pc = 0x2823CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2823C8u;
    // 0x2823cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D228u, 0x2823C8u, 0x2823D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2823D0u;
label_2823d0:
    // 0x2823d0: 0x7aa40000  lq          $a0, 0x0($s5)
    ctx->pc = 0x2823d0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2823d4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2823d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2823d8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2823d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2823dc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2823dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2823e0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2823e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2823e4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2823e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2823e8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2823e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2823ec: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2823ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2823f0: 0x3c01bf33  lui         $at, 0xBF33
    ctx->pc = 0x2823f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48947 << 16));
    // 0x2823f4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2823f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2823f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2823f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2823fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2823fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282400: 0x0  nop
    ctx->pc = 0x282400u;
    // NOP
    // 0x282404: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x282404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282408: 0x0  nop
    ctx->pc = 0x282408u;
    // NOP
    // 0x28240c: 0x450000a9  bc1f        . + 4 + (0xA9 << 2)
    ctx->pc = 0x28240Cu;
    {
        const bool branch_taken_0x28240c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28240Cu;
        // 0x282410: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28240c) {
            ctx->pc = 0x2826B4u;
            goto label_2826b4;
        }
    }
    ctx->pc = 0x282414u;
    // 0x282414: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x282414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282418: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x282418u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x28241c: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x28241cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
    // 0x282420: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x282420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
    // 0x282424: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x282424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x282428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28242c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x28242cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x282430: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x282430u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x282434: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x282434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x282438: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x282438u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x28243c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x28243cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x282440: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x282440u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x282444: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x282444u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x282448: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x282448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28244c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28244cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282450: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x282450u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x282454: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x282454u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282458: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x282458u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x28245c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x28245cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x282460: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x282460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x282464: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x282464u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x282468: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x282468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x28246c: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x28246cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x282470: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x282470u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x282474: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x282474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x282478: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x282478u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x28247c: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x28247cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x282480: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x282480u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x282484: 0x7fa80000  sq          $t0, 0x0($sp)
    ctx->pc = 0x282484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 8));
    // 0x282488: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x282488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28248c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x28248cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x282490: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x282490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x282494: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x282494u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282498: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x282498u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28249c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28249cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824a0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2824a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2824a4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x2824a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x2824a8: 0x7fa90090  sq          $t1, 0x90($sp)
    ctx->pc = 0x2824a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 9));
    // 0x2824ac: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2824acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2824b0: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x2824b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2824b4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2824b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2824b8: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x2824b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x2824bc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2824bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2824c0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2824c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2824c4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2824c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2824c8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2824c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2824cc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2824ccu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2824d0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2824d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2824d4: 0x7fa80090  sq          $t0, 0x90($sp)
    ctx->pc = 0x2824d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 8));
    // 0x2824d8: 0x8e0447c4  lw          $a0, 0x47C4($s0)
    ctx->pc = 0x2824d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18372)));
    // 0x2824dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2824dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824e0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2824e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2824e4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2824e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2824e8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2824e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2824ec: 0x7fa90080  sq          $t1, 0x80($sp)
    ctx->pc = 0x2824ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 9));
    // 0x2824f0: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x2824f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x2824f4: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2824F4u;
    SET_GPR_U32(ctx, 31, 0x2824FCu);
    ctx->pc = 0x2824F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2824F4u;
    // 0x2824f8: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2824F4u, 0x2824FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2824FCu;
label_2824fc:
    // 0x2824fc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2824fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282500: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x282500u;
    {
        const bool branch_taken_0x282500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282500u;
        // 0x282504: 0xc7a00054  lwc1        $f0, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282500) {
            ctx->pc = 0x282564u;
            goto label_282564;
        }
    }
    ctx->pc = 0x282508u;
    // 0x282508: 0x4615a041  sub.s       $f1, $f20, $f21
    ctx->pc = 0x282508u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x28250c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28250cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282510: 0x0  nop
    ctx->pc = 0x282510u;
    // NOP
    // 0x282514: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x282514u;
    {
        const bool branch_taken_0x282514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282514u;
        // 0x282518: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282514) {
            ctx->pc = 0x28253Cu;
            goto label_28253c;
        }
    }
    ctx->pc = 0x28251Cu;
    // 0x28251c: 0x4616a001  sub.s       $f0, $f20, $f22
    ctx->pc = 0x28251cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x282520: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x282520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282524: 0x0  nop
    ctx->pc = 0x282524u;
    // NOP
    // 0x282528: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x282528u;
    {
        const bool branch_taken_0x282528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x282528) {
            ctx->pc = 0x28253Cu;
            goto label_28253c;
        }
    }
    ctx->pc = 0x282530u;
    // 0x282530: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x282530u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x282534: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x282534u;
    {
        const bool branch_taken_0x282534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282534u;
        // 0x282538: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282534) {
            ctx->pc = 0x2825E4u;
            goto label_2825e4;
        }
    }
    ctx->pc = 0x28253Cu;
label_28253c:
    // 0x28253c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28253Cu;
    {
        const bool branch_taken_0x28253c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28253c) {
            ctx->pc = 0x282564u;
            goto label_282564;
        }
    }
    ctx->pc = 0x282544u;
    // 0x282544: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x282544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x282548: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28254c: 0x0  nop
    ctx->pc = 0x28254cu;
    // NOP
    // 0x282550: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x282550u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x282554: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x282554u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282558: 0x0  nop
    ctx->pc = 0x282558u;
    // NOP
    // 0x28255c: 0x45010056  bc1t        . + 4 + (0x56 << 2)
    ctx->pc = 0x28255Cu;
    {
        const bool branch_taken_0x28255c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x282560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28255Cu;
        // 0x282560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28255c) {
            ctx->pc = 0x2826B8u;
            goto label_2826b8;
        }
    }
    ctx->pc = 0x282564u;
label_282564:
    // 0x282564: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x282564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x282568: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28256c: 0x0  nop
    ctx->pc = 0x28256cu;
    // NOP
    // 0x282570: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x282570u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282574: 0x0  nop
    ctx->pc = 0x282574u;
    // NOP
    // 0x282578: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x282578u;
    {
        const bool branch_taken_0x282578 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282578u;
        // 0x28257c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282578) {
            ctx->pc = 0x2825E4u;
            goto label_2825e4;
        }
    }
    ctx->pc = 0x282580u;
    // 0x282580: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x282580u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x282584: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x282584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x282588: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x282588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28258c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28258cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282590: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x282590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x282594: 0x7a440000  lq          $a0, 0x0($s2)
    ctx->pc = 0x282594u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x282598: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x282598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28259c: 0x7a480010  lq          $t0, 0x10($s2)
    ctx->pc = 0x28259cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2825a0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2825a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2825a4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2825a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2825a8: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x2825a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2825ac: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2825acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2825b0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2825b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2825b4: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x2825b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x2825b8: 0x7fa800b0  sq          $t0, 0xB0($sp)
    ctx->pc = 0x2825b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 8));
    // 0x2825bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2825bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825c0: 0x8e0447c4  lw          $a0, 0x47C4($s0)
    ctx->pc = 0x2825c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18372)));
    // 0x2825c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2825c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2825c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2825cc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2825ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2825d0: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2825D0u;
    SET_GPR_U32(ctx, 31, 0x2825D8u);
    ctx->pc = 0x2825D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2825D0u;
    // 0x2825d4: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2825D0u, 0x2825D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2825D8u;
label_2825d8:
    // 0x2825d8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2825d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2825dc: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2825DCu;
    {
        const bool branch_taken_0x2825dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2825E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825DCu;
        // 0x2825e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2825dc) {
            ctx->pc = 0x2826B8u;
            goto label_2826b8;
        }
    }
    ctx->pc = 0x2825E4u;
label_2825e4:
    // 0x2825e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2825e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825e8: 0xc095128  jal         func_2544A0
    ctx->pc = 0x2825E8u;
    SET_GPR_U32(ctx, 31, 0x2825F0u);
    ctx->pc = 0x2825ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2825E8u;
    // 0x2825ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x2825E8u, 0x2825F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2825F0u;
label_2825f0:
    // 0x2825f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2825f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2825f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2825f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825f8: 0xc095128  jal         func_2544A0
    ctx->pc = 0x2825F8u;
    SET_GPR_U32(ctx, 31, 0x282600u);
    ctx->pc = 0x2825FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2825F8u;
    // 0x2825fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x2825F8u, 0x282600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282600u;
label_282600:
    // 0x282600: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x282600u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x282604: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x282604u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x282608: 0x46140d00  add.s       $f20, $f1, $f20
    ctx->pc = 0x282608u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x28260c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x28260cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x282610: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x282610u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x282614: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282618: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x282618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x28261c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28261cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x282620: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x282620u;
    {
        const bool branch_taken_0x282620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282620u;
        // 0x282624: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282620) {
            ctx->pc = 0x282680u;
            goto label_282680;
        }
    }
    ctx->pc = 0x282628u;
    // 0x282628: 0x8e2301a8  lw          $v1, 0x1A8($s1)
    ctx->pc = 0x282628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
    // 0x28262c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28262cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x282630: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282630u;
    {
        const bool branch_taken_0x282630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282630u;
        // 0x282634: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282630) {
            ctx->pc = 0x282640u;
            goto label_282640;
        }
    }
    ctx->pc = 0x282638u;
    // 0x282638: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x282638u;
    {
        const bool branch_taken_0x282638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282638u;
        // 0x28263c: 0x3c060028  lui         $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282638) {
            ctx->pc = 0x282684u;
            goto label_282684;
        }
    }
    ctx->pc = 0x282640u;
label_282640:
    // 0x282640: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x282640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x282644: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x282644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x282648: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x282648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28264c: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x28264cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x282650: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x282650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282654: 0x24c61450  addiu       $a2, $a2, 0x1450
    ctx->pc = 0x282654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5200));
    // 0x282658: 0x460d0b42  mul.s       $f13, $f1, $f13
    ctx->pc = 0x282658u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x28265c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28265cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282660: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x282660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282664: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x282664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282668: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x282668u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28266c: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x28266cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282670: 0xc0a0708  jal         func_281C20
    ctx->pc = 0x282670u;
    SET_GPR_U32(ctx, 31, 0x282678u);
    ctx->pc = 0x282674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282670u;
    // 0x282674: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x281C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C20u, 0x282670u, 0x282678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282678u;
label_282678:
    // 0x282678: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x282678u;
    {
        const bool branch_taken_0x282678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282678u;
        // 0x28267c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282678) {
            ctx->pc = 0x2826B8u;
            goto label_2826b8;
        }
    }
    ctx->pc = 0x282680u;
label_282680:
    // 0x282680: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x282680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_282684:
    // 0x282684: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x282688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28268c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28268cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282690: 0x24c61838  addiu       $a2, $a2, 0x1838
    ctx->pc = 0x282690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6200));
    // 0x282694: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x282694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282698: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x282698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28269c: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x28269cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826a0: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2826a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826a4: 0xc0a0708  jal         func_281C20
    ctx->pc = 0x2826A4u;
    SET_GPR_U32(ctx, 31, 0x2826ACu);
    ctx->pc = 0x2826A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2826A4u;
    // 0x2826a8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x281C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C20u, 0x2826A4u, 0x2826ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826ACu;
label_2826ac:
    // 0x2826ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2826ACu;
    {
        const bool branch_taken_0x2826ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2826B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2826ACu;
        // 0x2826b0: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2826ac) {
            ctx->pc = 0x2826BCu;
            goto label_2826bc;
        }
    }
    ctx->pc = 0x2826B4u;
label_2826b4:
    // 0x2826b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2826b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2826b8:
    // 0x2826b8: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x2826b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_2826bc:
    // 0x2826bc: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x2826bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2826c0: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x2826c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2826c4: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x2826c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2826c8: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x2826c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2826cc: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x2826ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2826d0: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x2826d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2826d4: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x2826d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2826d8: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2826d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2826dc: 0xc7b601b0  lwc1        $f22, 0x1B0($sp)
    ctx->pc = 0x2826dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2826e0: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x2826e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2826e4: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x2826e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2826e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2826E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2826ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2826E8u;
        // 0x2826ec: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2826E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2826F0u;
}
