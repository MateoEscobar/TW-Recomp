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

// Function: sub_003F6720
// Address: 0x3f6720 - 0x3f68e0
void sub_003F6720_0x3f6720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6720_0x3f6720");
#endif

    switch (ctx->pc) {
        case 0x3f675cu: goto label_3f675c;
        case 0x3f676cu: goto label_3f676c;
        case 0x3f6780u: goto label_3f6780;
        case 0x3f6790u: goto label_3f6790;
        case 0x3f679cu: goto label_3f679c;
        case 0x3f67a8u: goto label_3f67a8;
        case 0x3f67d0u: goto label_3f67d0;
        case 0x3f68b4u: goto label_3f68b4;
        default: break;
    }

    ctx->pc = 0x3f6720u;

    // 0x3f6720: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3f6720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3f6724: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3f6724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x3f6728: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3f6728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x3f672c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f672cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6730: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3f6730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x3f6734: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3f6734u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6738: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3f6738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x3f673c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3f673cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6740: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3f6740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x3f6744: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3f6744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x3f6748: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x3f6748u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x3f674c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x3f674cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3f6750: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3f6750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3f6754: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3F6754u;
    SET_GPR_U32(ctx, 31, 0x3F675Cu);
    ctx->pc = 0x3F6758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6754u;
    // 0x3f6758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F6754u, 0x3F675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F675Cu;
label_3f675c:
    // 0x3f675c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f675cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f6760: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f6760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6764: 0xc0ea12a  jal         func_3A84A8
    ctx->pc = 0x3F6764u;
    SET_GPR_U32(ctx, 31, 0x3F676Cu);
    ctx->pc = 0x3F6768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6764u;
    // 0x3f6768: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F6764u, 0x3F676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F676Cu;
label_3f676c:
    // 0x3f676c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f676cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f6770: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f6770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f6774: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f6774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6778: 0xc0ea12a  jal         func_3A84A8
    ctx->pc = 0x3F6778u;
    SET_GPR_U32(ctx, 31, 0x3F6780u);
    ctx->pc = 0x3F677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6778u;
    // 0x3f677c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F6778u, 0x3F6780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6780u;
label_3f6780:
    // 0x3f6780: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f6780u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f6784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f6784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6788: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3F6788u;
    SET_GPR_U32(ctx, 31, 0x3F6790u);
    ctx->pc = 0x3F678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6788u;
    // 0x3f678c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F6788u, 0x3F6790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6790u;
label_3f6790:
    // 0x3f6790: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f6790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6794: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3F6794u;
    SET_GPR_U32(ctx, 31, 0x3F679Cu);
    ctx->pc = 0x3F6798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6794u;
    // 0x3f6798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F6794u, 0x3F679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F679Cu;
label_3f679c:
    // 0x3f679c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3f679cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f67a0: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3F67A0u;
    SET_GPR_U32(ctx, 31, 0x3F67A8u);
    ctx->pc = 0x3F67A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F67A0u;
    // 0x3f67a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F67A0u, 0x3F67A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F67A8u;
label_3f67a8:
    // 0x3f67a8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3f67a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f67ac: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3f67acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f67b0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x3f67b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x3f67b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f67b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3f67b8: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x3f67b8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
    // 0x3f67bc: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x3f67bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x3f67c0: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x3f67c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x3f67c4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3f67c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3f67c8: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x3F67C8u;
    SET_GPR_U32(ctx, 31, 0x3F67D0u);
    ctx->pc = 0x3F67CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F67C8u;
    // 0x3f67cc: 0xc7b50014  lwc1        $f21, 0x14($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x3F67C8u, 0x3F67D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F67D0u;
label_3f67d0:
    // 0x3f67d0: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x3f67d0u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3f67d4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3f67d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3f67d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f67d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f67dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f67dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3f67e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f67e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f67e4: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F67E4u;
    {
        const bool branch_taken_0x3f67e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f67e4) {
            ctx->pc = 0x3F67E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F67E4u;
            // 0x3f67e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F67ECu;
            goto label_3f67ec;
        }
    }
    ctx->pc = 0x3F67ECu;
label_3f67ec:
    // 0x3f67ec: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3f67ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3f67f0: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x3f67f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3f67f4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x3f67f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x3f67f8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3f67f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x3f67fc: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3f67fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f6800: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f6800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x3f6804: 0x3012  mflo        $a2
    ctx->pc = 0x3f6804u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3f6808: 0xae660024  sw          $a2, 0x24($s3)
    ctx->pc = 0x3f6808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 6));
    // 0x3f680c: 0x7aa30020  lq          $v1, 0x20($s5)
    ctx->pc = 0x3f680cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x3f6810: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f6810u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3f6814: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3f6814u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3f6818: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f6818u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f681c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f681cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3f6820: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f6820u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3f6824: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f6824u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f6828: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f6828u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f682c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f682cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3f6830: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f6830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f6834: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f6834u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3f6838: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f6838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3f683c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f683cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f6840: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f6840u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3f6844: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f6844u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f6848: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f6848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f684c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f684cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f6850: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3f6850u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3f6854: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x3f6854u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    // 0x3f6858: 0x142200  sll         $a0, $s4, 8
    ctx->pc = 0x3f6858u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 8));
    // 0x3f685c: 0x92620020  lbu         $v0, 0x20($s3)
    ctx->pc = 0x3f685cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3f6860: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f6860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f6864: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x3f6864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f6868: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x3f6868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f686c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3f686cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3f6870: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3f6870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3f6874: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f6874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f6878: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3f6878u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3f687c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x3f687cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x3f6880: 0xe6750008  swc1        $f21, 0x8($s3)
    ctx->pc = 0x3f6880u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x3f6884: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x3f6884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x3f6888: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x3f6888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x3f688c: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x3f688cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x3f6890: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3f6890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x3f6894: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3f6894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x3f6898: 0x16450003  bne         $s2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F6898u;
    {
        const bool branch_taken_0x3f6898 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x3F689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6898u;
        // 0x3f689c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6898) {
            ctx->pc = 0x3F68A8u;
            goto label_3f68a8;
        }
    }
    ctx->pc = 0x3F68A0u;
    // 0x3f68a0: 0x61023  negu        $v0, $a2
    ctx->pc = 0x3f68a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x3f68a4: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x3f68a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_3f68a8:
    // 0x3f68a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3f68a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f68ac: 0xc0e858c  jal         func_3A1630
    ctx->pc = 0x3F68ACu;
    SET_GPR_U32(ctx, 31, 0x3F68B4u);
    ctx->pc = 0x3F68B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F68ACu;
    // 0x3f68b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F68ACu, 0x3F68B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F68B4u;
label_3f68b4:
    // 0x3f68b4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3f68b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3f68b8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3f68b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3f68bc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3f68bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3f68c0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3f68c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3f68c4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3f68c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3f68c8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3f68c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3f68cc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3f68ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3f68d0: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x3f68d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3f68d4: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x3f68d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3f68d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F68D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F68D8u;
        // 0x3f68dc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F68D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F68E0u;
}
