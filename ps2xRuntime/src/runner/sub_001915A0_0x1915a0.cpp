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

// Function: sub_001915A0
// Address: 0x1915a0 - 0x191728
void sub_001915A0_0x1915a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001915A0_0x1915a0");
#endif

    switch (ctx->pc) {
        case 0x191660u: goto label_191660;
        case 0x1916bcu: goto label_1916bc;
        case 0x191700u: goto label_191700;
        case 0x191714u: goto label_191714;
        default: break;
    }

    ctx->pc = 0x1915a0u;

    // 0x1915a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1915a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1915a4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1915a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1915a8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1915a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1915ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1915acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915b0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1915b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1915b4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1915b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1915b8: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1915b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1915bc: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1915bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x1915c0: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x1915c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1915c4: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x1915C4u;
    {
        const bool branch_taken_0x1915c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1915C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915C4u;
        // 0x1915c8: 0x7e220020  sq          $v0, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1915c4) {
            ctx->pc = 0x191714u;
            goto label_191714;
        }
    }
    ctx->pc = 0x1915CCu;
    // 0x1915cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1915ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1915d0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1915d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1915d4: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1915d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1915d8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1915d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1915dc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1915dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1915e0: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x1915e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1915e4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1915e4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1915e8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1915e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1915ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1915ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1915f0: 0x0  nop
    ctx->pc = 0x1915f0u;
    // NOP
    // 0x1915f4: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x1915f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1915f8: 0x0  nop
    ctx->pc = 0x1915f8u;
    // NOP
    // 0x1915fc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1915FCu;
    {
        const bool branch_taken_0x1915fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x191600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915FCu;
        // 0x191600: 0x26230020  addiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1915fc) {
            ctx->pc = 0x191624u;
            goto label_191624;
        }
    }
    ctx->pc = 0x191604u;
    // 0x191604: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x191604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x191608: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x191608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19160c: 0x0  nop
    ctx->pc = 0x19160cu;
    // NOP
    // 0x191610: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x191610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x191614: 0xe6220020  swc1        $f2, 0x20($s1)
    ctx->pc = 0x191614u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x191618: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x191618u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x19161c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19161Cu;
    {
        const bool branch_taken_0x19161c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19161Cu;
        // 0x191620: 0xe4620004  swc1        $f2, 0x4($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19161c) {
            ctx->pc = 0x191654u;
            goto label_191654;
        }
    }
    ctx->pc = 0x191624u;
label_191624:
    // 0x191624: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x191624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x191628: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x191628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19162c: 0x0  nop
    ctx->pc = 0x19162cu;
    // NOP
    // 0x191630: 0x0  nop
    ctx->pc = 0x191630u;
    // NOP
    // 0x191634: 0x46010016  rsqrt.s     $f0, $f0, $f1
    ctx->pc = 0x191634u;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[0], ctx->f[1]);
    // 0x191638: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x191638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x19163c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x19163cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x191640: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x191640u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x191644: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x191644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x191648: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x191648u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19164c: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x19164cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x191650: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x191650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_191654:
    // 0x191654: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x191654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191658: 0xc0cda02  jal         func_336808
    ctx->pc = 0x191658u;
    SET_GPR_U32(ctx, 31, 0x191660u);
    ctx->pc = 0x19165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191658u;
    // 0x19165c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336808u, 0x191658u, 0x191660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191660u;
label_191660:
    // 0x191660: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x191660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x191664: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x191664u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x191668: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x191668u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x19166c: 0x7ba80000  lq          $t0, 0x0($sp)
    ctx->pc = 0x19166cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191670: 0x7ba90010  lq          $t1, 0x10($sp)
    ctx->pc = 0x191670u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191674: 0x7baa0020  lq          $t2, 0x20($sp)
    ctx->pc = 0x191674u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191678: 0x7bab0030  lq          $t3, 0x30($sp)
    ctx->pc = 0x191678u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19167c: 0x1074026  xor         $t0, $t0, $a3
    ctx->pc = 0x19167cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x191680: 0x1274826  xor         $t1, $t1, $a3
    ctx->pc = 0x191680u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
    // 0x191684: 0x1475026  xor         $t2, $t2, $a3
    ctx->pc = 0x191684u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 7));
    // 0x191688: 0x1675826  xor         $t3, $t3, $a3
    ctx->pc = 0x191688u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 7));
    // 0x19168c: 0x700847a9  pexcw       $t0, $t0
    ctx->pc = 0x19168cu;
    SET_GPR_VEC(ctx, 8, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(1,0,3,2)));
    // 0x191690: 0x70094fa9  pexcw       $t1, $t1
    ctx->pc = 0x191690u;
    SET_GPR_VEC(ctx, 9, _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(1,0,3,2)));
    // 0x191694: 0x700a57a9  pexcw       $t2, $t2
    ctx->pc = 0x191694u;
    SET_GPR_VEC(ctx, 10, _mm_shuffle_epi32(GPR_VEC(ctx, 10), _MM_SHUFFLE(1,0,3,2)));
    // 0x191698: 0x700b5fa9  pexcw       $t3, $t3
    ctx->pc = 0x191698u;
    SET_GPR_VEC(ctx, 11, _mm_shuffle_epi32(GPR_VEC(ctx, 11), _MM_SHUFFLE(1,0,3,2)));
    // 0x19169c: 0x7e080000  sq          $t0, 0x0($s0)
    ctx->pc = 0x19169cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 8));
    // 0x1916a0: 0x7e090010  sq          $t1, 0x10($s0)
    ctx->pc = 0x1916a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 9));
    // 0x1916a4: 0x7e0a0020  sq          $t2, 0x20($s0)
    ctx->pc = 0x1916a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 10));
    // 0x1916a8: 0x7e0b0030  sq          $t3, 0x30($s0)
    ctx->pc = 0x1916a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 11));
    // 0x1916ac: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1916acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1916b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1916b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1916b4: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x1916B4u;
    SET_GPR_U32(ctx, 31, 0x1916BCu);
    ctx->pc = 0x1916B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1916B4u;
    // 0x1916b8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1916B4u, 0x1916BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1916BCu;
label_1916bc:
    // 0x1916bc: 0xc6220040  lwc1        $f2, 0x40($s1)
    ctx->pc = 0x1916bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1916c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1916c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1916c4: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x1916c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1916c8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1916c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1916cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1916ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1916d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1916d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1916d4: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x1916d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1916d8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1916d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1916dc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1916dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1916e0: 0x6ba80097  ldl         $t0, 0x97($sp)
    ctx->pc = 0x1916e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1916e4: 0x6fa80090  ldr         $t0, 0x90($sp)
    ctx->pc = 0x1916e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1916e8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1916e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1916ec: 0xb3a80047  sdl         $t0, 0x47($sp)
    ctx->pc = 0x1916ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1916f0: 0xb7a80040  sdr         $t0, 0x40($sp)
    ctx->pc = 0x1916f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1916f4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1916f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1916f8: 0xc11f390  jal         func_47CE40
    ctx->pc = 0x1916F8u;
    SET_GPR_U32(ctx, 31, 0x191700u);
    ctx->pc = 0x1916FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1916F8u;
    // 0x1916fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47CE40u, 0x1916F8u, 0x191700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191700u;
label_191700:
    // 0x191700: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x191700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x191704: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x191704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19170c: 0xc120efe  jal         func_483BF8
    ctx->pc = 0x19170Cu;
    SET_GPR_U32(ctx, 31, 0x191714u);
    ctx->pc = 0x191710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19170Cu;
    // 0x191710: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483BF8u, 0x19170Cu, 0x191714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191714u;
label_191714:
    // 0x191714: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x191714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x191718: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x191718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19171c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19171cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x191720: 0x3e00008  jr          $ra
    ctx->pc = 0x191720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191720u;
        // 0x191724: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191728u;
}
