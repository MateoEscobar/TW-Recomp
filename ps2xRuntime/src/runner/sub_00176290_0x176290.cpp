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

// Function: sub_00176290
// Address: 0x176290 - 0x1768e8
void sub_00176290_0x176290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176290_0x176290");
#endif

    switch (ctx->pc) {
        case 0x1762e0u: goto label_1762e0;
        case 0x1762f0u: goto label_1762f0;
        case 0x17654cu: goto label_17654c;
        case 0x176558u: goto label_176558;
        case 0x1765acu: goto label_1765ac;
        case 0x1765b8u: goto label_1765b8;
        case 0x1766f8u: goto label_1766f8;
        case 0x176704u: goto label_176704;
        case 0x176760u: goto label_176760;
        case 0x17676cu: goto label_17676c;
        default: break;
    }

    ctx->pc = 0x176290u;

    // 0x176290: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x176290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x176294: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x176294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x176298: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x176298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x17629c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17629cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762a0: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1762a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1762a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1762a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762a8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1762a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1762ac: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1762acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1762b0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1762b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1762b4: 0xe7b900e8  swc1        $f25, 0xE8($sp)
    ctx->pc = 0x1762b4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1762b8: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x1762b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1762bc: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x1762bcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1762c0: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x1762c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1762c4: 0x7a420080  lq          $v0, 0x80($s2)
    ctx->pc = 0x1762c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1762c8: 0xc60002a0  lwc1        $f0, 0x2A0($s0)
    ctx->pc = 0x1762c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1762cc: 0xc60102a4  lwc1        $f1, 0x2A4($s0)
    ctx->pc = 0x1762ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1762d0: 0x46000545  abs.s       $f21, $f0
    ctx->pc = 0x1762d0u;
    ctx->f[21] = FPU_ABS_S(ctx->f[0]);
    // 0x1762d4: 0x46000d05  abs.s       $f20, $f1
    ctx->pc = 0x1762d4u;
    ctx->f[20] = FPU_ABS_S(ctx->f[1]);
    // 0x1762d8: 0xc05d6de  jal         func_175B78
    ctx->pc = 0x1762D8u;
    SET_GPR_U32(ctx, 31, 0x1762E0u);
    ctx->pc = 0x1762DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1762D8u;
    // 0x1762dc: 0x7e020040  sq          $v0, 0x40($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175B78u, 0x1762D8u, 0x1762E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762E0u;
label_1762e0:
    // 0x1762e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1762E0u;
    {
        const bool branch_taken_0x1762e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1762e0) {
            ctx->pc = 0x1762F8u;
            goto label_1762f8;
        }
    }
    ctx->pc = 0x1762E8u;
    // 0x1762e8: 0xc0920b8  jal         func_2482E0
    ctx->pc = 0x1762E8u;
    SET_GPR_U32(ctx, 31, 0x1762F0u);
    ctx->pc = 0x1762ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1762E8u;
    // 0x1762ec: 0x8e0402b8  lw          $a0, 0x2B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2482E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2482E0u, 0x1762E8u, 0x1762F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762F0u;
label_1762f0:
    // 0x1762f0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1762F0u;
    {
        const bool branch_taken_0x1762f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1762f0) {
            ctx->pc = 0x1762F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1762F0u;
            // 0x1762f4: 0x8e0202b8  lw          $v0, 0x2B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17630Cu;
            goto label_17630c;
        }
    }
    ctx->pc = 0x1762F8u;
label_1762f8:
    // 0x1762f8: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x1762f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x1762fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1762fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x176300: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x176300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x176304: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x176304u;
    {
        const bool branch_taken_0x176304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176304u;
        // 0x176308: 0xc60002a8  lwc1        $f0, 0x2A8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x176304) {
            ctx->pc = 0x176368u;
            goto label_176368;
        }
    }
    ctx->pc = 0x17630Cu;
label_17630c:
    // 0x17630c: 0x90430284  lbu         $v1, 0x284($v0)
    ctx->pc = 0x17630cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 644)));
    // 0x176310: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x176310u;
    {
        const bool branch_taken_0x176310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x176314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176310u;
        // 0x176314: 0x4615a068  max.s       $f1, $f20, $f21 (Delay Slot)
        ctx->f[1] = std::max(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x176310) {
            ctx->pc = 0x176344u;
            goto label_176344;
        }
    }
    ctx->pc = 0x176318u;
    // 0x176318: 0x3c013d1c  lui         $at, 0x3D1C
    ctx->pc = 0x176318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15644 << 16));
    // 0x17631c: 0x342174a7  ori         $at, $at, 0x74A7
    ctx->pc = 0x17631cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29863);
    // 0x176320: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x176320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x176324: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x176324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x176328: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x176328u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x17632c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17632cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x176330: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x176330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x176334: 0xc60002a8  lwc1        $f0, 0x2A8($s0)
    ctx->pc = 0x176334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176338: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x176338u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x17633c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17633Cu;
    {
        const bool branch_taken_0x17633c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17633Cu;
        // 0x176340: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17633c) {
            ctx->pc = 0x17636Cu;
            goto label_17636c;
        }
    }
    ctx->pc = 0x176344u;
label_176344:
    // 0x176344: 0x3c013c50  lui         $at, 0x3C50
    ctx->pc = 0x176344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15440 << 16));
    // 0x176348: 0x34219b8a  ori         $at, $at, 0x9B8A
    ctx->pc = 0x176348u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39818);
    // 0x17634c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17634cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x176350: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x176350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x176354: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x176354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x176358: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x176358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17635c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x17635cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x176360: 0xc60002a8  lwc1        $f0, 0x2A8($s0)
    ctx->pc = 0x176360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176364: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x176364u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_176368:
    // 0x176368: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x176368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17636c:
    // 0x17636c: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x17636cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
    // 0x176370: 0xc61702a8  lwc1        $f23, 0x2A8($s0)
    ctx->pc = 0x176370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x176374: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x176374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x176378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x176378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17637c: 0x0  nop
    ctx->pc = 0x17637cu;
    // NOP
    // 0x176380: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x176380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176384: 0x0  nop
    ctx->pc = 0x176384u;
    // NOP
    // 0x176388: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x176388u;
    {
        const bool branch_taken_0x176388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176388) {
            ctx->pc = 0x176418u;
            goto label_176418;
        }
    }
    ctx->pc = 0x176390u;
    // 0x176390: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x176390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
    // 0x176394: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x176394u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x176398: 0x7a030050  lq          $v1, 0x50($s0)
    ctx->pc = 0x176398u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x17639c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17639cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1763a0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1763a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1763a4: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1763a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1763a8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1763a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1763ac: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x1763acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1763b0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1763b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1763b4: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x1763b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1763b8: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x1763b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1763bc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1763bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1763c0: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x1763c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1763c4: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x1763c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1763c8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1763c8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1763cc: 0x7e420080  sq          $v0, 0x80($s2)
    ctx->pc = 0x1763ccu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 2));
    // 0x1763d0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1763d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1763d4: 0x7a420060  lq          $v0, 0x60($s2)
    ctx->pc = 0x1763d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1763d8: 0x7a030060  lq          $v1, 0x60($s0)
    ctx->pc = 0x1763d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1763dc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1763dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1763e0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1763e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1763e4: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1763e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1763e8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1763e8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1763ec: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x1763ecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1763f0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1763f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1763f4: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x1763f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1763f8: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x1763f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1763fc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1763fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176400: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x176400u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176404: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x176404u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176408: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x176408u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x17640c: 0x7e420060  sq          $v0, 0x60($s2)
    ctx->pc = 0x17640cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 2));
    // 0x176410: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x176410u;
    {
        const bool branch_taken_0x176410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176410u;
        // 0x176414: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176410) {
            ctx->pc = 0x1768B8u;
            goto label_1768b8;
        }
    }
    ctx->pc = 0x176418u;
label_176418:
    // 0x176418: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x176418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x17641c: 0x0  nop
    ctx->pc = 0x17641cu;
    // NOP
    // 0x176420: 0x46172034  c.lt.s      $f4, $f23
    ctx->pc = 0x176420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176424: 0x0  nop
    ctx->pc = 0x176424u;
    // NOP
    // 0x176428: 0x4502011d  bc1fl       . + 4 + (0x11D << 2)
    ctx->pc = 0x176428u;
    {
        const bool branch_taken_0x176428 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176428) {
            ctx->pc = 0x17642Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176428u;
            // 0x17642c: 0xe60402a8  swc1        $f4, 0x2A8($s0) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1768A0u;
            goto label_1768a0;
        }
    }
    ctx->pc = 0x176430u;
    // 0x176430: 0xc60002a4  lwc1        $f0, 0x2A4($s0)
    ctx->pc = 0x176430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176434: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x176434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x176438: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x176438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x17643c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x17643cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x176440: 0x4600b942  mul.s       $f5, $f23, $f0
    ctx->pc = 0x176440u;
    ctx->f[5] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x176444: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x176444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
    // 0x176448: 0x342104f3  ori         $at, $at, 0x4F3
    ctx->pc = 0x176448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1267);
    // 0x17644c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17644cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x176450: 0xc60002a0  lwc1        $f0, 0x2A0($s0)
    ctx->pc = 0x176450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176454: 0x3c01bf35  lui         $at, 0xBF35
    ctx->pc = 0x176454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48949 << 16));
    // 0x176458: 0x342104f3  ori         $at, $at, 0x4F3
    ctx->pc = 0x176458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1267);
    // 0x17645c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17645cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x176460: 0x46002d06  mov.s       $f20, $f5
    ctx->pc = 0x176460u;
    ctx->f[20] = FPU_MOV_S(ctx->f[5]);
    // 0x176464: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x176464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x176468: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x176468u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x17646c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17646cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x176470: 0x46143034  c.lt.s      $f6, $f20
    ctx->pc = 0x176470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176474: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x176474u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x176478: 0x4600be42  mul.s       $f25, $f23, $f0
    ctx->pc = 0x176478u;
    ctx->f[25] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x17647c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x17647cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x176480: 0x4602a602  mul.s       $f24, $f20, $f2
    ctx->pc = 0x176480u;
    ctx->f[24] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x176484: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x176484u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x176488: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x176488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17648c: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x17648cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x176490: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x176490u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x176494: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x176494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x176498: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x176498u;
    {
        const bool branch_taken_0x176498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176498u;
        // 0x17649c: 0xe7a40044  swc1        $f4, 0x44($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x176498) {
            ctx->pc = 0x1764D0u;
            goto label_1764d0;
        }
    }
    ctx->pc = 0x1764A0u;
    // 0x1764a0: 0x46003506  mov.s       $f20, $f6
    ctx->pc = 0x1764a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[6]);
    // 0x1764a4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1764a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1764a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1764a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1764ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1764acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1764b0: 0x46142841  sub.s       $f1, $f5, $f20
    ctx->pc = 0x1764b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[20]);
    // 0x1764b4: 0x3c013d71  lui         $at, 0x3D71
    ctx->pc = 0x1764b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15729 << 16));
    // 0x1764b8: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x1764b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
    // 0x1764bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1764bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1764c0: 0x46000e02  mul.s       $f24, $f1, $f0
    ctx->pc = 0x1764c0u;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1764c4: 0x4602c628  max.s       $f24, $f24, $f2
    ctx->pc = 0x1764c4u;
    ctx->f[24] = std::max(ctx->f[24], ctx->f[2]);
    // 0x1764c8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1764C8u;
    {
        const bool branch_taken_0x1764c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1764c8) {
            ctx->pc = 0x176524u;
            goto label_176524;
        }
    }
    ctx->pc = 0x1764D0u;
label_1764d0:
    // 0x1764d0: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x1764d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
    // 0x1764d4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1764d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1764d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1764d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1764dc: 0x0  nop
    ctx->pc = 0x1764dcu;
    // NOP
    // 0x1764e0: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x1764e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1764e4: 0x0  nop
    ctx->pc = 0x1764e4u;
    // NOP
    // 0x1764e8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1764E8u;
    {
        const bool branch_taken_0x1764e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1764e8) {
            ctx->pc = 0x176524u;
            goto label_176524;
        }
    }
    ctx->pc = 0x1764F0u;
    // 0x1764f0: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1764f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x1764f4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1764f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1764f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1764f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1764fc: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x1764fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x176500: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x176500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x176504: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x176504u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x176508: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x176508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17650c: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x17650cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x176510: 0x3c013d71  lui         $at, 0x3D71
    ctx->pc = 0x176510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15729 << 16));
    // 0x176514: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x176514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
    // 0x176518: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x176518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17651c: 0x46020602  mul.s       $f24, $f0, $f2
    ctx->pc = 0x17651cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x176520: 0x4601c629  min.s       $f24, $f24, $f1
    ctx->pc = 0x176520u;
    ctx->f[24] = std::min(ctx->f[24], ctx->f[1]);
label_176524:
    // 0x176524: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x176524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x176528: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x176528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x17652c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x17652cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x176530: 0x26101740  addiu       $s0, $s0, 0x1740
    ctx->pc = 0x176530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x176534: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x176534u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x176538: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x176538u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511740u));
    // 0x17653c: 0x4616cdc2  mul.s       $f23, $f25, $f22
    ctx->pc = 0x17653cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[25], ctx->f[22]);
    // 0x176540: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x176540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x176544: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x176544u;
    SET_GPR_U32(ctx, 31, 0x17654Cu);
    ctx->pc = 0x176548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176544u;
    // 0x176548: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x176544u, 0x17654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17654Cu;
label_17654c:
    // 0x17654c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x17654cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x176550: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x176550u;
    SET_GPR_U32(ctx, 31, 0x176558u);
    ctx->pc = 0x176554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176550u;
    // 0x176554: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x176550u, 0x176558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176558u;
label_176558:
    // 0x176558: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x176558u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17655c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x17655cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x176560: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x176560u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x176564: 0x26311720  addiu       $s1, $s1, 0x1720
    ctx->pc = 0x176564u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5920));
    // 0x176568: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x176568u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17656c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17656cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x176570: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x176570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x176574: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x176574u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x176578: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x176578u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x17657c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x17657cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x176580: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x176580u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x176584: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x176584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176588: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x176588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17658c: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x17658cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x176590: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x176590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x176594: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x176594u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x176598: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x176598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x17659c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x17659cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1765a0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1765a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1765a4: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x1765A4u;
    SET_GPR_U32(ctx, 31, 0x1765ACu);
    ctx->pc = 0x1765A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1765A4u;
    // 0x1765a8: 0xe7a30018  swc1        $f3, 0x18($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1765A4u, 0x1765ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1765ACu;
label_1765ac:
    // 0x1765ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1765acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1765b0: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x1765B0u;
    SET_GPR_U32(ctx, 31, 0x1765B8u);
    ctx->pc = 0x1765B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1765B0u;
    // 0x1765b4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1765B0u, 0x1765B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1765B8u;
label_1765b8:
    // 0x1765b8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1765b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1765bc: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x1765bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1765c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1765c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1765c4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1765c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1765c8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1765c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1765cc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1765ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1765d0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1765d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1765d4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1765d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1765d8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1765d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1765dc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1765dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1765e0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1765e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1765e4: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1765e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1765e8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1765e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1765ec: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1765ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1765f0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1765f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1765f4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x1765f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1765f8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1765f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1765fc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1765fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x176600: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x176600u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x176604: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x176604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176608: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x176608u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x17660c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x17660cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x176610: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x176610u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176614: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x176614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x176618: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x176618u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17661c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x17661cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176620: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x176620u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176624: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x176624u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176628: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x176628u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x17662c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x17662cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x176630: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x176630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x176634: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x176634u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176638: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x176638u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17663c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17663cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x176640: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x176640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176644: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x176644u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x176648: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x176648u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17664c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x17664cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176650: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x176650u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x176654: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x176654u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176658: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x176658u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17665c: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x17665cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176660: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x176660u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176664: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x176664u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x176668: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x176668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x17666c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x17666cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x176670: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x176670u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176674: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x176674u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x176678: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x176678u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17667c: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x17667cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176680: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x176680u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x176684: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x176684u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x176688: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x176688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17668c: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x17668cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x176690: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x176690u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176694: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x176694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176698: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x176698u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17669c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x17669cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1766a0: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x1766a0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1766a4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x1766a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x1766a8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1766a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1766ac: 0x7a420080  lq          $v0, 0x80($s2)
    ctx->pc = 0x1766acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1766b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1766b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1766b4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1766b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1766b8: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1766b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1766bc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1766bcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1766c0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x1766c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1766c4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1766c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1766c8: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x1766c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1766cc: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x1766ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1766d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1766d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1766d4: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x1766d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1766d8: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x1766d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1766dc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1766dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1766e0: 0x7e420080  sq          $v0, 0x80($s2)
    ctx->pc = 0x1766e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 2));
    // 0x1766e4: 0x4616c502  mul.s       $f20, $f24, $f22
    ctx->pc = 0x1766e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[24], ctx->f[22]);
    // 0x1766e8: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1766e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1766ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1766ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1766f0: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x1766F0u;
    SET_GPR_U32(ctx, 31, 0x1766F8u);
    ctx->pc = 0x1766F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1766F0u;
    // 0x1766f4: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1766F0u, 0x1766F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1766F8u;
label_1766f8:
    // 0x1766f8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1766f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1766fc: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x1766FCu;
    SET_GPR_U32(ctx, 31, 0x176704u);
    ctx->pc = 0x176700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1766FCu;
    // 0x176700: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1766FCu, 0x176704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176704u;
label_176704:
    // 0x176704: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x176704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x176708: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x176708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17670c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x17670cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x176710: 0x4614cd02  mul.s       $f20, $f25, $f20
    ctx->pc = 0x176710u;
    ctx->f[20] = FPU_MUL_S(ctx->f[25], ctx->f[20]);
    // 0x176714: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x176714u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x176718: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x176718u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17671c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17671cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x176720: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x176720u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x176724: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x176724u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x176728: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x176728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x17672c: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x17672cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x176730: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x176730u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x176734: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x176734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176738: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x176738u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17673c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x17673cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x176740: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x176740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x176744: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x176744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x176748: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x176748u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x17674c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x17674cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x176750: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x176750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x176754: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x176754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x176758: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x176758u;
    SET_GPR_U32(ctx, 31, 0x176760u);
    ctx->pc = 0x17675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176758u;
    // 0x17675c: 0xe7a30018  swc1        $f3, 0x18($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x176758u, 0x176760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176760u;
label_176760:
    // 0x176760: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x176760u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x176764: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x176764u;
    SET_GPR_U32(ctx, 31, 0x17676Cu);
    ctx->pc = 0x176768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176764u;
    // 0x176768: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x176764u, 0x17676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17676Cu;
label_17676c:
    // 0x17676c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x17676cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x176770: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x176770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x176774: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x176774u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x176778: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x176778u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17677c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x17677cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x176780: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x176780u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x176784: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x176784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x176788: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x176788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x17678c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x17678cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x176790: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x176790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176794: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x176794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176798: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x176798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17679c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17679cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1767a0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1767a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1767a4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1767a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1767a8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x1767a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1767ac: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1767acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1767b0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1767b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1767b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1767b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1767b8: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1767b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1767bc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1767bcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1767c0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x1767c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1767c4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1767c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1767c8: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x1767c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1767cc: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x1767ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1767d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1767d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1767d4: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x1767d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1767d8: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x1767d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1767dc: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x1767dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1767e0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x1767e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x1767e4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1767e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1767e8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1767e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1767ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1767ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1767f0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1767f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1767f4: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1767f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1767f8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1767f8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1767fc: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x1767fcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x176800: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x176800u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176804: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x176804u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x176808: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x176808u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17680c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x17680cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176810: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x176810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176814: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x176814u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176818: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x176818u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x17681c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x17681cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x176820: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x176820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x176824: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x176824u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176828: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x176828u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17682c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x17682cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x176830: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x176830u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176834: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x176834u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x176838: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x176838u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17683c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x17683cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176840: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x176840u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x176844: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x176844u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176848: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x176848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17684c: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x17684cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176850: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x176850u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176854: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x176854u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x176858: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x176858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x17685c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x17685cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x176860: 0x7a420060  lq          $v0, 0x60($s2)
    ctx->pc = 0x176860u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x176864: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x176864u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x176868: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x176868u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17686c: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x17686cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176870: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x176870u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x176874: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x176874u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x176878: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x176878u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17687c: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x17687cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x176880: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x176880u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176884: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x176884u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x176888: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x176888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17688c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x17688cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x176890: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x176890u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x176894: 0x7e420060  sq          $v0, 0x60($s2)
    ctx->pc = 0x176894u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 2));
    // 0x176898: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x176898u;
    {
        const bool branch_taken_0x176898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176898u;
        // 0x17689c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176898) {
            ctx->pc = 0x1768B8u;
            goto label_1768b8;
        }
    }
    ctx->pc = 0x1768A0u;
label_1768a0:
    // 0x1768a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1768a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1768a4: 0x24421780  addiu       $v0, $v0, 0x1780
    ctx->pc = 0x1768a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6016));
    // 0x1768a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1768a8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511780u));
    // 0x1768ac: 0x7e030050  sq          $v1, 0x50($s0)
    ctx->pc = 0x1768acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 3));
    // 0x1768b0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1768b0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x511780u));
    // 0x1768b4: 0x7e040060  sq          $a0, 0x60($s0)
    ctx->pc = 0x1768b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 4));
label_1768b8:
    // 0x1768b8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1768b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1768bc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1768bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1768c0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1768c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1768c4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1768c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1768c8: 0xc7b900e8  lwc1        $f25, 0xE8($sp)
    ctx->pc = 0x1768c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1768cc: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x1768ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1768d0: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x1768d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1768d4: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x1768d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1768d8: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1768d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1768dc: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1768dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1768e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1768E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1768E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1768E0u;
        // 0x1768e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1768E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1768E8u;
}
